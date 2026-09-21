// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACEAGENTICFSMOUNTRAMAUTHORIZEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACEAGENTICFSMOUNTRAMAUTHORIZEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(fileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(server, server_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(fileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(server, server_);
    };
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest() = default ;
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest(const GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &) = default ;
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest(GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &&) = default ;
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest() = default ;
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& operator=(const GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &) = default ;
    GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& operator=(GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->fileSystemId_ == nullptr && this->server_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


  protected:
    // The ID of the target NAS AccessPoint. This parameter corresponds to the server and fileSystemId parameters.
    // 
    // This parameter is required.
    shared_ptr<string> accessPointId_ {};
    // The ID of the NAS file system to which the target AccessPoint belongs. This parameter corresponds to the server and accessPointId parameters.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The domain name of the target AccessPoint, obtained from the DomainName field of the NAS ListAccessPoints operation. Do not include the protocol, port, or path.
    // 
    // This parameter is required.
    shared_ptr<string> server_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
