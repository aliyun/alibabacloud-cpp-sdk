// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupStatus, autoProvisioningGroupStatus_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupStatus, autoProvisioningGroupStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAutoProvisioningGroupsRequest() = default ;
    DescribeAutoProvisioningGroupsRequest(const DescribeAutoProvisioningGroupsRequest &) = default ;
    DescribeAutoProvisioningGroupsRequest(DescribeAutoProvisioningGroupsRequest &&) = default ;
    DescribeAutoProvisioningGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsRequest() = default ;
    DescribeAutoProvisioningGroupsRequest& operator=(const DescribeAutoProvisioningGroupsRequest &) = default ;
    DescribeAutoProvisioningGroupsRequest& operator=(DescribeAutoProvisioningGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoProvisioningGroupId_ != nullptr
        && this->autoProvisioningGroupName_ != nullptr && this->autoProvisioningGroupStatus_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->tag_ != nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline const vector<string> & autoProvisioningGroupId() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupId_, vector<string>) };
    inline vector<string> autoProvisioningGroupId() { DARABONBA_PTR_GET(autoProvisioningGroupId_, vector<string>) };
    inline DescribeAutoProvisioningGroupsRequest& setAutoProvisioningGroupId(const vector<string> & autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };
    inline DescribeAutoProvisioningGroupsRequest& setAutoProvisioningGroupId(vector<string> && autoProvisioningGroupId) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // autoProvisioningGroupName Field Functions 
    bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
    void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
    inline string autoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
    inline DescribeAutoProvisioningGroupsRequest& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


    // autoProvisioningGroupStatus Field Functions 
    bool hasAutoProvisioningGroupStatus() const { return this->autoProvisioningGroupStatus_ != nullptr;};
    void deleteAutoProvisioningGroupStatus() { this->autoProvisioningGroupStatus_ = nullptr;};
    inline const vector<string> & autoProvisioningGroupStatus() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroupStatus_, vector<string>) };
    inline vector<string> autoProvisioningGroupStatus() { DARABONBA_PTR_GET(autoProvisioningGroupStatus_, vector<string>) };
    inline DescribeAutoProvisioningGroupsRequest& setAutoProvisioningGroupStatus(const vector<string> & autoProvisioningGroupStatus) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupStatus_, autoProvisioningGroupStatus) };
    inline DescribeAutoProvisioningGroupsRequest& setAutoProvisioningGroupStatus(vector<string> && autoProvisioningGroupStatus) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroupStatus_, autoProvisioningGroupStatus) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAutoProvisioningGroupsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAutoProvisioningGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoProvisioningGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAutoProvisioningGroupsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAutoProvisioningGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAutoProvisioningGroupsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAutoProvisioningGroupsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAutoProvisioningGroupsRequestTag>) };
    inline vector<DescribeAutoProvisioningGroupsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeAutoProvisioningGroupsRequestTag>) };
    inline DescribeAutoProvisioningGroupsRequest& setTag(const vector<DescribeAutoProvisioningGroupsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAutoProvisioningGroupsRequest& setTag(vector<DescribeAutoProvisioningGroupsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the auto provisioning group. You can specify up to 20 IDs.
    std::shared_ptr<vector<string>> autoProvisioningGroupId_ = nullptr;
    // The name of the auto provisioning group.
    std::shared_ptr<string> autoProvisioningGroupName_ = nullptr;
    // The status of the auto provisioning group.
    std::shared_ptr<vector<string>> autoProvisioningGroupStatus_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the auto provisioning group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the auto provisioning group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags that are added to the auto provisioning group.
    std::shared_ptr<vector<DescribeAutoProvisioningGroupsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
