// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TagResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class TagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    TagResourcesRequest() = default ;
    TagResourcesRequest(const TagResourcesRequest &) = default ;
    TagResourcesRequest(TagResourcesRequest &&) = default ;
    TagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesRequest() = default ;
    TagResourcesRequest& operator=(const TagResourcesRequest &) = default ;
    TagResourcesRequest& operator=(TagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceType_ == nullptr
        && return this->tag_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TagResourcesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TagResourcesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline TagResourcesRequest& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline TagResourcesRequest& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TagResourcesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<TagResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<TagResourcesRequestTag>) };
    inline vector<TagResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<TagResourcesRequestTag>) };
    inline TagResourcesRequest& setTag(const vector<TagResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline TagResourcesRequest& setTag(vector<TagResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the resource. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent list of regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource IDs. You can specify up to 50 resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The type of the resource to which the tags are added. Valid values:
    // 
    // *   instance: ECS instance
    // *   disk: disk
    // *   snapshot: snapshot
    // *   image: image
    // *   securitygroup: security group
    // *   volume: storage volume
    // *   eni: ENI
    // *   ddh: dedicated host
    // *   ddhcluster: dedicated host cluster
    // *   keypair: SSH key pair
    // *   launchtemplate: launch template
    // *   reservedinstance
    // *   snapshotpolicy: automatic snapshot policy
    // *   elasticityassurance: elasticity assurance
    // *   capacityreservation: capacity reservation
    // *   command: Cloud Assistant command
    // *   invocation: Cloud Assistant command execution result or file delivery result
    // *   activation: activation code for a Cloud Assistant managed instance
    // *   managedinstance: Cloud Assistant managed instance
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags of the reserved instance. You can specify up to 20 tags. If you specify multiple tags, the tag keys cannot be duplicated.``
    // 
    // This parameter is required.
    std::shared_ptr<vector<TagResourcesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
