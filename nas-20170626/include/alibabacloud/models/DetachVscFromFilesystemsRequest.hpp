// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSCFROMFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSCFROMFILESYSTEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DetachVscFromFilesystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVscFromFilesystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVscFromFilesystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    DetachVscFromFilesystemsRequest() = default ;
    DetachVscFromFilesystemsRequest(const DetachVscFromFilesystemsRequest &) = default ;
    DetachVscFromFilesystemsRequest(DetachVscFromFilesystemsRequest &&) = default ;
    DetachVscFromFilesystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVscFromFilesystemsRequest() = default ;
    DetachVscFromFilesystemsRequest& operator=(const DetachVscFromFilesystemsRequest &) = default ;
    DetachVscFromFilesystemsRequest& operator=(DetachVscFromFilesystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceIds& obj) { 
        DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      ResourceIds() = default ;
      ResourceIds(const ResourceIds &) = default ;
      ResourceIds(ResourceIds &&) = default ;
      ResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceIds() = default ;
      ResourceIds& operator=(const ResourceIds &) = default ;
      ResourceIds& operator=(ResourceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->vscId_ == nullptr; };
      // fileSystemId Field Functions 
      bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
      void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
      inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
      inline ResourceIds& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline ResourceIds& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // The ID of the file system.
      shared_ptr<string> fileSystemId_ {};
      // The ID of the virtual storage channel.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->resourceIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachVscFromFilesystemsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<DetachVscFromFilesystemsRequest::ResourceIds> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<DetachVscFromFilesystemsRequest::ResourceIds>) };
    inline vector<DetachVscFromFilesystemsRequest::ResourceIds> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<DetachVscFromFilesystemsRequest::ResourceIds>) };
    inline DetachVscFromFilesystemsRequest& setResourceIds(const vector<DetachVscFromFilesystemsRequest::ResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DetachVscFromFilesystemsRequest& setResourceIds(vector<DetachVscFromFilesystemsRequest::ResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID information of the file system and virtual storage channel. Each batch can contain up to 10 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<DetachVscFromFilesystemsRequest::ResourceIds>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
