// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class MoveResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    MoveResourceGroupRequest() = default ;
    MoveResourceGroupRequest(const MoveResourceGroupRequest &) = default ;
    MoveResourceGroupRequest(MoveResourceGroupRequest &&) = default ;
    MoveResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourceGroupRequest() = default ;
    MoveResourceGroupRequest& operator=(const MoveResourceGroupRequest &) = default ;
    MoveResourceGroupRequest& operator=(MoveResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newResourceGroupId_ == nullptr
        && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string getNewResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline MoveResourceGroupRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MoveResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline MoveResourceGroupRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline MoveResourceGroupRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource group to which you want to move the VPC peering connection.
    // 
    // > A resource group is a mechanism that allows you to group and manage resources within an Alibaba Cloud account. Resource groups help you resolve the complexities of resource grouping and authorization management within a single cloud account. For more information, see [What is Resource Management](https://help.aliyun.com/document_detail/94475.html).
    // 
    // This parameter is required.
    shared_ptr<string> newResourceGroupId_ {};
    // The region ID of the resource.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the VPC peering connection whose resource group you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The resource type. Valid value: **PeerConnection**: VPC peering connection.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
