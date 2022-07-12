//------------------------------------------------------------------
// webdav.h
//
// Author:           JuanJakobo
// Date:             06.07.2022
// Description: Interface to the webdav API
//
//-------------------------------------------------------------------

#ifndef WEBDAV
#define WEBDAV

#include "webDAVModel.h"
#include "eventHandler.h"

#include <string>
#include <vector>

const std::string CONFIG_PATH = CONFIG_FOLDER + "/nextcloud.cfg";
//const std::string NEXTCLOUD_FILE_PATH = "/mnt/ext1/nextcloud";
//const std::string NEXTCLOUD_ROOT_PATH = "/remote.php/dav/files/";
//const std::string NEXTCLOUD_STRUCTURE_EXTENSION = ".structure";
//const std::string NEXTCLOUD_START_PATH = "/remote.php/";
//const std::string CACERT_PATH = "/mnt/ext1/applications/cacert.pem";

class WebDAV
{
    public:
        /**
         * Creates a new pocket object containing token to access the api
         *
         */
        WebDAV();

        std::string getLocalPath(std::string path);

        std::vector<WebDAVItem> getDataStructure(const std::string &pathUrl);


    /**
        * gets the dataStructure of the given URL and writes its WEBDAV items to the items vector
        *
        * @param pathUrl URL to get the dataStructure of
        * @param Username the username of the Nextcloud instance
        * @param Pass the pass of the Nextcloud instance
        * @return vector of Items
        */
        //TODO return xml argument?h
        std::string propfind(const std::string &pathUrl);

    private:
        std::string _username;
        std::string _password;

};
#endif
