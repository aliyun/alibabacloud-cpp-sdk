// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScalingGroupsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupIds, scalingGroupIds_);
      DARABONBA_PTR_TO_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupNames, scalingGroupNames_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupIds, scalingGroupIds_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupName, scalingGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupNames, scalingGroupNames_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeScalingGroupsRequest() = default ;
    DescribeScalingGroupsRequest(const DescribeScalingGroupsRequest &) = default ;
    DescribeScalingGroupsRequest(DescribeScalingGroupsRequest &&) = default ;
    DescribeScalingGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsRequest() = default ;
    DescribeScalingGroupsRequest& operator=(const DescribeScalingGroupsRequest &) = default ;
    DescribeScalingGroupsRequest& operator=(DescribeScalingGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupType_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->scalingGroupIds_ != nullptr && this->scalingGroupName_ != nullptr
        && this->scalingGroupNames_ != nullptr && this->tags_ != nullptr; };
    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeScalingGroupsRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingGroupsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeScalingGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingGroupsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupIds Field Functions 
    bool hasScalingGroupIds() const { return this->scalingGroupIds_ != nullptr;};
    void deleteScalingGroupIds() { this->scalingGroupIds_ = nullptr;};
    inline const vector<string> & scalingGroupIds() const { DARABONBA_PTR_GET_CONST(scalingGroupIds_, vector<string>) };
    inline vector<string> scalingGroupIds() { DARABONBA_PTR_GET(scalingGroupIds_, vector<string>) };
    inline DescribeScalingGroupsRequest& setScalingGroupIds(const vector<string> & scalingGroupIds) { DARABONBA_PTR_SET_VALUE(scalingGroupIds_, scalingGroupIds) };
    inline DescribeScalingGroupsRequest& setScalingGroupIds(vector<string> && scalingGroupIds) { DARABONBA_PTR_SET_RVALUE(scalingGroupIds_, scalingGroupIds) };


    // scalingGroupName Field Functions 
    bool hasScalingGroupName() const { return this->scalingGroupName_ != nullptr;};
    void deleteScalingGroupName() { this->scalingGroupName_ = nullptr;};
    inline string scalingGroupName() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupName_, "") };
    inline DescribeScalingGroupsRequest& setScalingGroupName(string scalingGroupName) { DARABONBA_PTR_SET_VALUE(scalingGroupName_, scalingGroupName) };


    // scalingGroupNames Field Functions 
    bool hasScalingGroupNames() const { return this->scalingGroupNames_ != nullptr;};
    void deleteScalingGroupNames() { this->scalingGroupNames_ = nullptr;};
    inline const vector<string> & scalingGroupNames() const { DARABONBA_PTR_GET_CONST(scalingGroupNames_, vector<string>) };
    inline vector<string> scalingGroupNames() { DARABONBA_PTR_GET(scalingGroupNames_, vector<string>) };
    inline DescribeScalingGroupsRequest& setScalingGroupNames(const vector<string> & scalingGroupNames) { DARABONBA_PTR_SET_VALUE(scalingGroupNames_, scalingGroupNames) };
    inline DescribeScalingGroupsRequest& setScalingGroupNames(vector<string> && scalingGroupNames) { DARABONBA_PTR_SET_RVALUE(scalingGroupNames_, scalingGroupNames) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeScalingGroupsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeScalingGroupsRequestTags>) };
    inline vector<DescribeScalingGroupsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeScalingGroupsRequestTags>) };
    inline DescribeScalingGroupsRequest& setTags(const vector<DescribeScalingGroupsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeScalingGroupsRequest& setTags(vector<DescribeScalingGroupsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The type of instances that are managed by the scaling group. Valid values:
    // 
    // *   ECS: Elastic Compute Service (ECS) instances.
    // *   ECI: elastic container instances.
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the scaling group that you want to query belongs.
    // 
    // >  If no scaling group belongs to the specified resource group, the query result is empty and no error is reported.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IDs of the scaling groups that you want to query.
    // 
    // The IDs of inactive scaling groups are not included in the query results, and no error is returned.
    std::shared_ptr<vector<string>> scalingGroupIds_ = nullptr;
    // The name of the scaling group.
    std::shared_ptr<string> scalingGroupName_ = nullptr;
    // The names of the scaling groups that you want to query.
    // 
    // The names of inactive scaling groups are not displayed in the query results, and no error is reported.
    std::shared_ptr<vector<string>> scalingGroupNames_ = nullptr;
    // The tags of the scaling group.
    std::shared_ptr<vector<DescribeScalingGroupsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
