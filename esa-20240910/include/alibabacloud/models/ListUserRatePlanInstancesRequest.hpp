// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRATEPLANINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRatePlanInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRatePlanInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckRemainingSiteQuota, checkRemainingSiteQuota_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsShared, isShared_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(RemainingExpireDays, remainingExpireDays_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRemainingSiteQuota, checkRemainingSiteQuota_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsShared, isShared_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanNameEn, planNameEn_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(RemainingExpireDays, remainingExpireDays_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    ListUserRatePlanInstancesRequest() = default ;
    ListUserRatePlanInstancesRequest(const ListUserRatePlanInstancesRequest &) = default ;
    ListUserRatePlanInstancesRequest(ListUserRatePlanInstancesRequest &&) = default ;
    ListUserRatePlanInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRatePlanInstancesRequest() = default ;
    ListUserRatePlanInstancesRequest& operator=(const ListUserRatePlanInstancesRequest &) = default ;
    ListUserRatePlanInstancesRequest& operator=(ListUserRatePlanInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkRemainingSiteQuota_ == nullptr
        && this->instanceId_ == nullptr && this->isShared_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->planNameEn_ == nullptr
        && this->planType_ == nullptr && this->remainingExpireDays_ == nullptr && this->resourceOwner_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr
        && this->status_ == nullptr && this->subscribeType_ == nullptr; };
    // checkRemainingSiteQuota Field Functions 
    bool hasCheckRemainingSiteQuota() const { return this->checkRemainingSiteQuota_ != nullptr;};
    void deleteCheckRemainingSiteQuota() { this->checkRemainingSiteQuota_ = nullptr;};
    inline string getCheckRemainingSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(checkRemainingSiteQuota_, "") };
    inline ListUserRatePlanInstancesRequest& setCheckRemainingSiteQuota(string checkRemainingSiteQuota) { DARABONBA_PTR_SET_VALUE(checkRemainingSiteQuota_, checkRemainingSiteQuota) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserRatePlanInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isShared Field Functions 
    bool hasIsShared() const { return this->isShared_ != nullptr;};
    void deleteIsShared() { this->isShared_ = nullptr;};
    inline bool getIsShared() const { DARABONBA_PTR_GET_DEFAULT(isShared_, false) };
    inline ListUserRatePlanInstancesRequest& setIsShared(bool isShared) { DARABONBA_PTR_SET_VALUE(isShared_, isShared) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserRatePlanInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserRatePlanInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planNameEn Field Functions 
    bool hasPlanNameEn() const { return this->planNameEn_ != nullptr;};
    void deletePlanNameEn() { this->planNameEn_ = nullptr;};
    inline string getPlanNameEn() const { DARABONBA_PTR_GET_DEFAULT(planNameEn_, "") };
    inline ListUserRatePlanInstancesRequest& setPlanNameEn(string planNameEn) { DARABONBA_PTR_SET_VALUE(planNameEn_, planNameEn) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline ListUserRatePlanInstancesRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // remainingExpireDays Field Functions 
    bool hasRemainingExpireDays() const { return this->remainingExpireDays_ != nullptr;};
    void deleteRemainingExpireDays() { this->remainingExpireDays_ = nullptr;};
    inline int32_t getRemainingExpireDays() const { DARABONBA_PTR_GET_DEFAULT(remainingExpireDays_, 0) };
    inline ListUserRatePlanInstancesRequest& setRemainingExpireDays(int32_t remainingExpireDays) { DARABONBA_PTR_SET_VALUE(remainingExpireDays_, remainingExpireDays) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline int64_t getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, 0L) };
    inline ListUserRatePlanInstancesRequest& setResourceOwner(int64_t resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListUserRatePlanInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListUserRatePlanInstancesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserRatePlanInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline ListUserRatePlanInstancesRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // Specifies whether to filter plan instances that have remaining site quota. Valid values:
    // 
    // - **true**: Filters plan instances that have remaining site quota.
    // - **false**: Queries all plan instances under the user.
    shared_ptr<string> checkRemainingSiteQuota_ {};
    // The plan instance ID. You can obtain this value by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isShared_ {};
    // The page number settings for paging. Default value: **1**. Valid values: **1 to 100000**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for paging. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The plan name (English).
    shared_ptr<string> planNameEn_ {};
    // The plan type. Valid values:
    // 
    // - normal: fixed edition plan
    // - enterprise: enterprise edition plan
    shared_ptr<string> planType_ {};
    // Queries plan instances whose remaining validity period is within the specified number of days. The value must be a positive integer. Unit: days.
    shared_ptr<int32_t> remainingExpireDays_ {};
    shared_ptr<int64_t> resourceOwner_ {};
    // The sort field. By default, results are sorted by purchase time. Valid values:
    // 
    // - **CreateTime**: Purchase time.
    // - **ExpireTime**: Expiration time.
    shared_ptr<string> sortBy_ {};
    // The sort order. Default value: desc. Valid values:
    // 
    // - **asc**: Ascending order.
    // - **desc**: Descending order.
    shared_ptr<string> sortOrder_ {};
    // The instance status. Valid values:
    // - **online**: Normal service status.
    // - **offline**: Expired but not overdue, in an inactive state.
    // - **disable**: Released.
    // - **overdue**: Overdue payment.
    shared_ptr<string> status_ {};
    // The plan subscription type. Valid values:
    // 
    // - Free Edition (Chinese mainland): entranceplan
    // - Free Edition (International): entranceplan_intl
    // - Basic Edition: basicplan
    // - Standard Edition: standardplan
    // - Premium Edition: advancedplan
    // - Enterprise Edition: enterpriseplan
    shared_ptr<string> subscribeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
