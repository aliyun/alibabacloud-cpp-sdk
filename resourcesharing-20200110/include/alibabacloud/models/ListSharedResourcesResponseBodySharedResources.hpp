// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODYSHAREDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDRESOURCESRESPONSEBODYSHAREDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedResourcesResponseBodySharedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedResourcesResponseBodySharedResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(ResourceStatusMessage, resourceStatusMessage_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedResourcesResponseBodySharedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceStatusMessage, resourceStatusMessage_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListSharedResourcesResponseBodySharedResources() = default ;
    ListSharedResourcesResponseBodySharedResources(const ListSharedResourcesResponseBodySharedResources &) = default ;
    ListSharedResourcesResponseBodySharedResources(ListSharedResourcesResponseBodySharedResources &&) = default ;
    ListSharedResourcesResponseBodySharedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedResourcesResponseBodySharedResources() = default ;
    ListSharedResourcesResponseBodySharedResources& operator=(const ListSharedResourcesResponseBodySharedResources &) = default ;
    ListSharedResourcesResponseBodySharedResources& operator=(ListSharedResourcesResponseBodySharedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->resourceArn_ != nullptr && this->resourceId_ != nullptr && this->resourceShareId_ != nullptr && this->resourceStatus_ != nullptr && this->resourceStatusMessage_ != nullptr
        && this->resourceType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline string resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceStatus(string resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // resourceStatusMessage Field Functions 
    bool hasResourceStatusMessage() const { return this->resourceStatusMessage_ != nullptr;};
    void deleteResourceStatusMessage() { this->resourceStatusMessage_ = nullptr;};
    inline string resourceStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(resourceStatusMessage_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceStatusMessage(string resourceStatusMessage) { DARABONBA_PTR_SET_VALUE(resourceStatusMessage_, resourceStatusMessage) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSharedResourcesResponseBodySharedResources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the shared resource was associated with the resource share.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The ID of the shared resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The status of the shared resource. This parameter is returned only when you query the resources that other accounts share with you.
    // 
    // Valid values:
    // 
    // *   Available: The resource is available.
    // *   ZonalResourceInaccessible: The resource is unavailable in the current zone.
    // *   LimitExceeded: The resource is unavailable because the maximum number of resources that other accounts can share with you exceeds the upper limit.
    // *   Unavailable: The resource is unavailable.
    std::shared_ptr<string> resourceStatus_ = nullptr;
    // The cause of the association failure.
    std::shared_ptr<string> resourceStatusMessage_ = nullptr;
    // The type of the shared resource.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The time when the association of the shared resource was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
