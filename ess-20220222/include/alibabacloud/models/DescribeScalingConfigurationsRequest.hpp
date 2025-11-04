// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationIds, scalingConfigurationIds_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationNames, scalingConfigurationNames_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationIds, scalingConfigurationIds_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationNames, scalingConfigurationNames_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DescribeScalingConfigurationsRequest() = default ;
    DescribeScalingConfigurationsRequest(const DescribeScalingConfigurationsRequest &) = default ;
    DescribeScalingConfigurationsRequest(DescribeScalingConfigurationsRequest &&) = default ;
    DescribeScalingConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsRequest() = default ;
    DescribeScalingConfigurationsRequest& operator=(const DescribeScalingConfigurationsRequest &) = default ;
    DescribeScalingConfigurationsRequest& operator=(DescribeScalingConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->scalingConfigurationIds_ == nullptr && return this->scalingConfigurationNames_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingConfigurationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingConfigurationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingConfigurationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingConfigurationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingConfigurationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingConfigurationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingConfigurationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingConfigurationIds Field Functions 
    bool hasScalingConfigurationIds() const { return this->scalingConfigurationIds_ != nullptr;};
    void deleteScalingConfigurationIds() { this->scalingConfigurationIds_ = nullptr;};
    inline const vector<string> & scalingConfigurationIds() const { DARABONBA_PTR_GET_CONST(scalingConfigurationIds_, vector<string>) };
    inline vector<string> scalingConfigurationIds() { DARABONBA_PTR_GET(scalingConfigurationIds_, vector<string>) };
    inline DescribeScalingConfigurationsRequest& setScalingConfigurationIds(const vector<string> & scalingConfigurationIds) { DARABONBA_PTR_SET_VALUE(scalingConfigurationIds_, scalingConfigurationIds) };
    inline DescribeScalingConfigurationsRequest& setScalingConfigurationIds(vector<string> && scalingConfigurationIds) { DARABONBA_PTR_SET_RVALUE(scalingConfigurationIds_, scalingConfigurationIds) };


    // scalingConfigurationNames Field Functions 
    bool hasScalingConfigurationNames() const { return this->scalingConfigurationNames_ != nullptr;};
    void deleteScalingConfigurationNames() { this->scalingConfigurationNames_ = nullptr;};
    inline const vector<string> & scalingConfigurationNames() const { DARABONBA_PTR_GET_CONST(scalingConfigurationNames_, vector<string>) };
    inline vector<string> scalingConfigurationNames() { DARABONBA_PTR_GET(scalingConfigurationNames_, vector<string>) };
    inline DescribeScalingConfigurationsRequest& setScalingConfigurationNames(const vector<string> & scalingConfigurationNames) { DARABONBA_PTR_SET_VALUE(scalingConfigurationNames_, scalingConfigurationNames) };
    inline DescribeScalingConfigurationsRequest& setScalingConfigurationNames(vector<string> && scalingConfigurationNames) { DARABONBA_PTR_SET_RVALUE(scalingConfigurationNames_, scalingConfigurationNames) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingConfigurationsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
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
    // The region ID of the scaling group to which the scaling configuration that you want to query belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IDs of the scaling configurations that you want to query.
    // 
    // The IDs of active and inactive scaling configurations are displayed in the query results. You can differentiate between active and inactive scaling configurations based on the value of the `LifecycleState` parameter.
    std::shared_ptr<vector<string>> scalingConfigurationIds_ = nullptr;
    // The names of the scaling configurations that you want to query.
    // 
    // The names of inactive scaling configurations are not displayed in the query results, and no error is reported.
    std::shared_ptr<vector<string>> scalingConfigurationNames_ = nullptr;
    // The ID of the scaling group. You can use the ID to query all scaling configurations in the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
