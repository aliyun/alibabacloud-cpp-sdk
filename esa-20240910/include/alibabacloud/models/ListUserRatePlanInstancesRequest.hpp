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
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemainingExpireDays, remainingExpireDays_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRatePlanInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckRemainingSiteQuota, checkRemainingSiteQuota_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemainingExpireDays, remainingExpireDays_);
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
        && return this->instanceId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->remainingExpireDays_ == nullptr && return this->sortBy_ == nullptr
        && return this->sortOrder_ == nullptr && return this->status_ == nullptr && return this->subscribeType_ == nullptr; };
    // checkRemainingSiteQuota Field Functions 
    bool hasCheckRemainingSiteQuota() const { return this->checkRemainingSiteQuota_ != nullptr;};
    void deleteCheckRemainingSiteQuota() { this->checkRemainingSiteQuota_ = nullptr;};
    inline string checkRemainingSiteQuota() const { DARABONBA_PTR_GET_DEFAULT(checkRemainingSiteQuota_, "") };
    inline ListUserRatePlanInstancesRequest& setCheckRemainingSiteQuota(string checkRemainingSiteQuota) { DARABONBA_PTR_SET_VALUE(checkRemainingSiteQuota_, checkRemainingSiteQuota) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserRatePlanInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUserRatePlanInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserRatePlanInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remainingExpireDays Field Functions 
    bool hasRemainingExpireDays() const { return this->remainingExpireDays_ != nullptr;};
    void deleteRemainingExpireDays() { this->remainingExpireDays_ = nullptr;};
    inline int32_t remainingExpireDays() const { DARABONBA_PTR_GET_DEFAULT(remainingExpireDays_, 0) };
    inline ListUserRatePlanInstancesRequest& setRemainingExpireDays(int32_t remainingExpireDays) { DARABONBA_PTR_SET_VALUE(remainingExpireDays_, remainingExpireDays) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListUserRatePlanInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListUserRatePlanInstancesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserRatePlanInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline ListUserRatePlanInstancesRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // Specifies whether to query only the plans that have remaining quota for associating websites. Valid values:
    // 
    // *   true: queries only the plans that have remaining quota for associating websites.
    // *   false: queries all plans in your account.
    std::shared_ptr<string> checkRemainingSiteQuota_ = nullptr;
    // The plan ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. Valid values: **1** to **100000**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> remainingExpireDays_ = nullptr;
    // The sorting field. By default, the queried plans are sorted by purchase time. Valid values:
    // 
    // *   CreateTime: the time when the plans were purchased.
    // *   ExpireTime: the time when the plans expire.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The order in which you want to sort the query results. Default value: desc. Valid values:
    // 
    // *   asc: in ascending order.
    // *   desc: in descending order.
    std::shared_ptr<string> sortOrder_ = nullptr;
    // The plan status. Valid values:
    // 
    // *   online: The plan is in service.
    // *   offline: The plan has expired within an allowable period. In this state, the plan is unavailable.
    // *   disable: The plan is released.
    // *   overdue: The plan is stopped due to overdue payments.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
