// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESREQUEST_HPP_
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
  class DescribeScalingActivitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityIds, scalingActivityIds_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityIds, scalingActivityIds_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    DescribeScalingActivitiesRequest() = default ;
    DescribeScalingActivitiesRequest(const DescribeScalingActivitiesRequest &) = default ;
    DescribeScalingActivitiesRequest(DescribeScalingActivitiesRequest &&) = default ;
    DescribeScalingActivitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesRequest() = default ;
    DescribeScalingActivitiesRequest& operator=(const DescribeScalingActivitiesRequest &) = default ;
    DescribeScalingActivitiesRequest& operator=(DescribeScalingActivitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceRefreshTaskId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scalingActivityIds_ == nullptr && this->scalingGroupId_ == nullptr && this->statusCode_ == nullptr; };
    // instanceRefreshTaskId Field Functions 
    bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
    void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
    inline string getInstanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
    inline DescribeScalingActivitiesRequest& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingActivitiesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingActivitiesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingActivitiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingActivitiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingActivitiesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingActivitiesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingActivitiesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingActivityIds Field Functions 
    bool hasScalingActivityIds() const { return this->scalingActivityIds_ != nullptr;};
    void deleteScalingActivityIds() { this->scalingActivityIds_ = nullptr;};
    inline const vector<string> & getScalingActivityIds() const { DARABONBA_PTR_GET_CONST(scalingActivityIds_, vector<string>) };
    inline vector<string> getScalingActivityIds() { DARABONBA_PTR_GET(scalingActivityIds_, vector<string>) };
    inline DescribeScalingActivitiesRequest& setScalingActivityIds(const vector<string> & scalingActivityIds) { DARABONBA_PTR_SET_VALUE(scalingActivityIds_, scalingActivityIds) };
    inline DescribeScalingActivitiesRequest& setScalingActivityIds(vector<string> && scalingActivityIds) { DARABONBA_PTR_SET_RVALUE(scalingActivityIds_, scalingActivityIds) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingActivitiesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline DescribeScalingActivitiesRequest& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // The ID of the instance refresh task. If you specify this parameter, this operation returns the list of scaling activities associated with the instance refresh task.
    shared_ptr<string> instanceRefreshTaskId_ {};
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
    // The region ID of the scaling group to which the scaling activity that you want to query belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The IDs of the scaling activities that you want to query.
    // 
    // >  When you call this operation, you must specify one of the following parameters: `ScalingGroupId` and `ScalingActivityIds`. You cannot specify both of them at the same time. If you specify neither of them, an error is reported.
    shared_ptr<vector<string>> scalingActivityIds_ {};
    // The ID of the scaling group.
    // 
    // >  When you call this operation, you must specify one of the following parameters: `ScalingGroupId` and `ScalingActivityIds`. You cannot specify both of them at the same time. If you specify neither of them, an error is reported.
    shared_ptr<string> scalingGroupId_ {};
    // The status of the scaling activity. Valid values:
    // 
    // *   Successful: The scaling activity is successful.
    // *   Warning: The scaling activity is partially successful.
    // *   Failed: The scaling activity failed.
    // *   InProgress: The scaling activity is in progress.
    // *   Rejected: The request to trigger the scaling activity is rejected.
    shared_ptr<string> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
