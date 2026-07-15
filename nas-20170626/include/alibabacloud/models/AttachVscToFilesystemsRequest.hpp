// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSCTOFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSCTOFILESYSTEMSREQUEST_HPP_
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
  class AttachVscToFilesystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVscToFilesystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(RoleChain, roleChain_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVscToFilesystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(RoleChain, roleChain_);
    };
    AttachVscToFilesystemsRequest() = default ;
    AttachVscToFilesystemsRequest(const AttachVscToFilesystemsRequest &) = default ;
    AttachVscToFilesystemsRequest(AttachVscToFilesystemsRequest &&) = default ;
    AttachVscToFilesystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVscToFilesystemsRequest() = default ;
    AttachVscToFilesystemsRequest& operator=(const AttachVscToFilesystemsRequest &) = default ;
    AttachVscToFilesystemsRequest& operator=(AttachVscToFilesystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoleChain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoleChain& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, RoleChain& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      RoleChain() = default ;
      RoleChain(const RoleChain &) = default ;
      RoleChain(RoleChain &&) = default ;
      RoleChain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoleChain() = default ;
      RoleChain& operator=(const RoleChain &) = default ;
      RoleChain& operator=(RoleChain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleArn_ == nullptr && this->roleType_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
      inline RoleChain& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline RoleChain& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline RoleChain& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      // The UID of the Alibaba Cloud account on whose behalf the service assumes the role.
      shared_ptr<string> assumeRoleFor_ {};
      // The resource descriptor of the specified role. Format: acs:ram::$accountID:role/$roleName.
      shared_ptr<string> roleArn_ {};
      // The role type. Valid values: service and user.
      shared_ptr<string> roleType_ {};
    };

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
      // The file system ID.
      shared_ptr<string> fileSystemId_ {};
      // The Virtual Storage Channel ID.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->resourceIds_ == nullptr && this->roleChain_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachVscToFilesystemsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<AttachVscToFilesystemsRequest::ResourceIds> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<AttachVscToFilesystemsRequest::ResourceIds>) };
    inline vector<AttachVscToFilesystemsRequest::ResourceIds> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<AttachVscToFilesystemsRequest::ResourceIds>) };
    inline AttachVscToFilesystemsRequest& setResourceIds(const vector<AttachVscToFilesystemsRequest::ResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline AttachVscToFilesystemsRequest& setResourceIds(vector<AttachVscToFilesystemsRequest::ResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // roleChain Field Functions 
    bool hasRoleChain() const { return this->roleChain_ != nullptr;};
    void deleteRoleChain() { this->roleChain_ = nullptr;};
    inline const vector<AttachVscToFilesystemsRequest::RoleChain> & getRoleChain() const { DARABONBA_PTR_GET_CONST(roleChain_, vector<AttachVscToFilesystemsRequest::RoleChain>) };
    inline vector<AttachVscToFilesystemsRequest::RoleChain> getRoleChain() { DARABONBA_PTR_GET(roleChain_, vector<AttachVscToFilesystemsRequest::RoleChain>) };
    inline AttachVscToFilesystemsRequest& setRoleChain(const vector<AttachVscToFilesystemsRequest::RoleChain> & roleChain) { DARABONBA_PTR_SET_VALUE(roleChain_, roleChain) };
    inline AttachVscToFilesystemsRequest& setRoleChain(vector<AttachVscToFilesystemsRequest::RoleChain> && roleChain) { DARABONBA_PTR_SET_RVALUE(roleChain_, roleChain) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may differ for each API request.
    shared_ptr<string> clientToken_ {};
    // The ID information of file systems and Virtual Storage Channels. A maximum of 10 entries can be specified per batch.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachVscToFilesystemsRequest::ResourceIds>> resourceIds_ {};
    // The role chain.
    // > This parameter is required only for cross-account scenarios.
    shared_ptr<vector<AttachVscToFilesystemsRequest::RoleChain>> roleChain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
