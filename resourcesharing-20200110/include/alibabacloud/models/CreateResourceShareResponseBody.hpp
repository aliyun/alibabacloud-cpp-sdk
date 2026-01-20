// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class CreateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShare, resourceShare_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShare, resourceShare_);
    };
    CreateResourceShareResponseBody() = default ;
    CreateResourceShareResponseBody(const CreateResourceShareResponseBody &) = default ;
    CreateResourceShareResponseBody(CreateResourceShareResponseBody &&) = default ;
    CreateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceShareResponseBody() = default ;
    CreateResourceShareResponseBody& operator=(const CreateResourceShareResponseBody &) = default ;
    CreateResourceShareResponseBody& operator=(CreateResourceShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceShare : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceShare& obj) { 
        DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_TO_JSON(ResourceShareOwner, resourceShareOwner_);
        DARABONBA_PTR_TO_JSON(ResourceShareStatus, resourceShareStatus_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceShare& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_FROM_JSON(ResourceShareOwner, resourceShareOwner_);
        DARABONBA_PTR_FROM_JSON(ResourceShareStatus, resourceShareStatus_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ResourceShare() = default ;
      ResourceShare(const ResourceShare &) = default ;
      ResourceShare(ResourceShare &&) = default ;
      ResourceShare(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceShare() = default ;
      ResourceShare& operator=(const ResourceShare &) = default ;
      ResourceShare& operator=(ResourceShare &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowExternalTargets_ == nullptr
        && this->createTime_ == nullptr && this->resourceShareId_ == nullptr && this->resourceShareName_ == nullptr && this->resourceShareOwner_ == nullptr && this->resourceShareStatus_ == nullptr
        && this->updateTime_ == nullptr; };
      // allowExternalTargets Field Functions 
      bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
      void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
      inline bool getAllowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
      inline ResourceShare& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceShare& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline ResourceShare& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceShareName Field Functions 
      bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
      void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
      inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
      inline ResourceShare& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


      // resourceShareOwner Field Functions 
      bool hasResourceShareOwner() const { return this->resourceShareOwner_ != nullptr;};
      void deleteResourceShareOwner() { this->resourceShareOwner_ = nullptr;};
      inline string getResourceShareOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceShareOwner_, "") };
      inline ResourceShare& setResourceShareOwner(string resourceShareOwner) { DARABONBA_PTR_SET_VALUE(resourceShareOwner_, resourceShareOwner) };


      // resourceShareStatus Field Functions 
      bool hasResourceShareStatus() const { return this->resourceShareStatus_ != nullptr;};
      void deleteResourceShareStatus() { this->resourceShareStatus_ = nullptr;};
      inline string getResourceShareStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceShareStatus_, "") };
      inline ResourceShare& setResourceShareStatus(string resourceShareStatus) { DARABONBA_PTR_SET_VALUE(resourceShareStatus_, resourceShareStatus) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResourceShare& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Indicates whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
      // 
      // *   false: Resources in the resource share can be shared only with accounts in the resource directory.
      // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
      shared_ptr<bool> allowExternalTargets_ {};
      // The time when the resource share was created.
      shared_ptr<string> createTime_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The name of the resource share.
      shared_ptr<string> resourceShareName_ {};
      // The owner of the resource share.
      shared_ptr<string> resourceShareOwner_ {};
      // The status of the resource share. Valid values:
      // 
      // *   Active: The resource share is enabled.
      // *   Pending: The resource share is associated with one or more resource sharing invitations that are waiting for confirmation.
      // *   Deleting: The resource share is being deleted.
      // *   Deleted: The resource share is deleted.
      // 
      // >  The system automatically deletes the records of resource shares in the Deleted state within 48 hours to 96 hours after you delete the resource shares.
      shared_ptr<string> resourceShareStatus_ {};
      // The time when the resource share was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceShare_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShare Field Functions 
    bool hasResourceShare() const { return this->resourceShare_ != nullptr;};
    void deleteResourceShare() { this->resourceShare_ = nullptr;};
    inline const CreateResourceShareResponseBody::ResourceShare & getResourceShare() const { DARABONBA_PTR_GET_CONST(resourceShare_, CreateResourceShareResponseBody::ResourceShare) };
    inline CreateResourceShareResponseBody::ResourceShare getResourceShare() { DARABONBA_PTR_GET(resourceShare_, CreateResourceShareResponseBody::ResourceShare) };
    inline CreateResourceShareResponseBody& setResourceShare(const CreateResourceShareResponseBody::ResourceShare & resourceShare) { DARABONBA_PTR_SET_VALUE(resourceShare_, resourceShare) };
    inline CreateResourceShareResponseBody& setResourceShare(CreateResourceShareResponseBody::ResourceShare && resourceShare) { DARABONBA_PTR_SET_RVALUE(resourceShare_, resourceShare) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the resource share.
    shared_ptr<CreateResourceShareResponseBody::ResourceShare> resourceShare_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
