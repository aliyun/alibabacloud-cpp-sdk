// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSREQUEST_HPP_
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
  class DescribeEciScalingConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationsRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationsRequest& obj) { 
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
    DescribeEciScalingConfigurationsRequest() = default ;
    DescribeEciScalingConfigurationsRequest(const DescribeEciScalingConfigurationsRequest &) = default ;
    DescribeEciScalingConfigurationsRequest(DescribeEciScalingConfigurationsRequest &&) = default ;
    DescribeEciScalingConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationsRequest() = default ;
    DescribeEciScalingConfigurationsRequest& operator=(const DescribeEciScalingConfigurationsRequest &) = default ;
    DescribeEciScalingConfigurationsRequest& operator=(DescribeEciScalingConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->scalingConfigurationIds_ == nullptr && this->scalingConfigurationNames_ == nullptr && this->scalingGroupId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeEciScalingConfigurationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeEciScalingConfigurationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEciScalingConfigurationsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEciScalingConfigurationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEciScalingConfigurationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeEciScalingConfigurationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeEciScalingConfigurationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingConfigurationIds Field Functions 
    bool hasScalingConfigurationIds() const { return this->scalingConfigurationIds_ != nullptr;};
    void deleteScalingConfigurationIds() { this->scalingConfigurationIds_ = nullptr;};
    inline const vector<string> & getScalingConfigurationIds() const { DARABONBA_PTR_GET_CONST(scalingConfigurationIds_, vector<string>) };
    inline vector<string> getScalingConfigurationIds() { DARABONBA_PTR_GET(scalingConfigurationIds_, vector<string>) };
    inline DescribeEciScalingConfigurationsRequest& setScalingConfigurationIds(const vector<string> & scalingConfigurationIds) { DARABONBA_PTR_SET_VALUE(scalingConfigurationIds_, scalingConfigurationIds) };
    inline DescribeEciScalingConfigurationsRequest& setScalingConfigurationIds(vector<string> && scalingConfigurationIds) { DARABONBA_PTR_SET_RVALUE(scalingConfigurationIds_, scalingConfigurationIds) };


    // scalingConfigurationNames Field Functions 
    bool hasScalingConfigurationNames() const { return this->scalingConfigurationNames_ != nullptr;};
    void deleteScalingConfigurationNames() { this->scalingConfigurationNames_ = nullptr;};
    inline const vector<string> & getScalingConfigurationNames() const { DARABONBA_PTR_GET_CONST(scalingConfigurationNames_, vector<string>) };
    inline vector<string> getScalingConfigurationNames() { DARABONBA_PTR_GET(scalingConfigurationNames_, vector<string>) };
    inline DescribeEciScalingConfigurationsRequest& setScalingConfigurationNames(const vector<string> & scalingConfigurationNames) { DARABONBA_PTR_SET_VALUE(scalingConfigurationNames_, scalingConfigurationNames) };
    inline DescribeEciScalingConfigurationsRequest& setScalingConfigurationNames(vector<string> && scalingConfigurationNames) { DARABONBA_PTR_SET_RVALUE(scalingConfigurationNames_, scalingConfigurationNames) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeEciScalingConfigurationsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the scaling group to which the scaling configuration belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the scaling configurations that you want to query. You can specify 1 to 10 scaling configuration IDs.
    // 
    // The IDs of active and inactive scaling configurations are displayed in the query results. You can distinguish between active and inactive scaling configurations based on the value of `LifecycleState`.
    shared_ptr<vector<string>> scalingConfigurationIds_ {};
    // The names of the scaling configurations that you want to query. You can specify 1 to 10 scaling configuration names.
    // 
    // The names of inactive scaling configurations are not displayed in the query results, and no error is reported.
    shared_ptr<vector<string>> scalingConfigurationNames_ {};
    // The ID of the scaling group. You can use the ID to query all scaling configurations in the scaling group.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
