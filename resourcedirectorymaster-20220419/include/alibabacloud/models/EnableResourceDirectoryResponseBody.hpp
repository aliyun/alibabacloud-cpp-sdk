// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class EnableResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectory, resourceDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, EnableResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectory, resourceDirectory_);
    };
    EnableResourceDirectoryResponseBody() = default ;
    EnableResourceDirectoryResponseBody(const EnableResourceDirectoryResponseBody &) = default ;
    EnableResourceDirectoryResponseBody(EnableResourceDirectoryResponseBody &&) = default ;
    EnableResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableResourceDirectoryResponseBody() = default ;
    EnableResourceDirectoryResponseBody& operator=(const EnableResourceDirectoryResponseBody &) = default ;
    EnableResourceDirectoryResponseBody& operator=(EnableResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceDirectory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDirectory& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(MasterAccountId, masterAccountId_);
        DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
        DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
        DARABONBA_PTR_TO_JSON(RootFolderId, rootFolderId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceDirectory& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(MasterAccountId, masterAccountId_);
        DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
        DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
        DARABONBA_PTR_FROM_JSON(RootFolderId, rootFolderId_);
      };
      ResourceDirectory() = default ;
      ResourceDirectory(const ResourceDirectory &) = default ;
      ResourceDirectory(ResourceDirectory &&) = default ;
      ResourceDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDirectory() = default ;
      ResourceDirectory& operator=(const ResourceDirectory &) = default ;
      ResourceDirectory& operator=(ResourceDirectory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->masterAccountId_ == nullptr && this->masterAccountName_ == nullptr && this->resourceDirectoryId_ == nullptr && this->rootFolderId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceDirectory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // masterAccountId Field Functions 
      bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
      void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
      inline string getMasterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
      inline ResourceDirectory& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


      // masterAccountName Field Functions 
      bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
      void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
      inline string getMasterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
      inline ResourceDirectory& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


      // resourceDirectoryId Field Functions 
      bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
      void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
      inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
      inline ResourceDirectory& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


      // rootFolderId Field Functions 
      bool hasRootFolderId() const { return this->rootFolderId_ != nullptr;};
      void deleteRootFolderId() { this->rootFolderId_ = nullptr;};
      inline string getRootFolderId() const { DARABONBA_PTR_GET_DEFAULT(rootFolderId_, "") };
      inline ResourceDirectory& setRootFolderId(string rootFolderId) { DARABONBA_PTR_SET_VALUE(rootFolderId_, rootFolderId) };


    protected:
      // The time when the resource directory was enabled.
      shared_ptr<string> createTime_ {};
      // The ID of the management account.
      shared_ptr<string> masterAccountId_ {};
      // The name of the management account.
      shared_ptr<string> masterAccountName_ {};
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The ID of the Root folder.
      shared_ptr<string> rootFolderId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceDirectory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectory Field Functions 
    bool hasResourceDirectory() const { return this->resourceDirectory_ != nullptr;};
    void deleteResourceDirectory() { this->resourceDirectory_ = nullptr;};
    inline const EnableResourceDirectoryResponseBody::ResourceDirectory & getResourceDirectory() const { DARABONBA_PTR_GET_CONST(resourceDirectory_, EnableResourceDirectoryResponseBody::ResourceDirectory) };
    inline EnableResourceDirectoryResponseBody::ResourceDirectory getResourceDirectory() { DARABONBA_PTR_GET(resourceDirectory_, EnableResourceDirectoryResponseBody::ResourceDirectory) };
    inline EnableResourceDirectoryResponseBody& setResourceDirectory(const EnableResourceDirectoryResponseBody::ResourceDirectory & resourceDirectory) { DARABONBA_PTR_SET_VALUE(resourceDirectory_, resourceDirectory) };
    inline EnableResourceDirectoryResponseBody& setResourceDirectory(EnableResourceDirectoryResponseBody::ResourceDirectory && resourceDirectory) { DARABONBA_PTR_SET_RVALUE(resourceDirectory_, resourceDirectory) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the resource directory.
    shared_ptr<EnableResourceDirectoryResponseBody::ResourceDirectory> resourceDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
