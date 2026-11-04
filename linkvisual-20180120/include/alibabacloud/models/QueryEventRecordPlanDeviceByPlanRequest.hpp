// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryEventRecordPlanDeviceByPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventRecordPlanDeviceByPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventRecordPlanDeviceByPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    QueryEventRecordPlanDeviceByPlanRequest() = default ;
    QueryEventRecordPlanDeviceByPlanRequest(const QueryEventRecordPlanDeviceByPlanRequest &) = default ;
    QueryEventRecordPlanDeviceByPlanRequest(QueryEventRecordPlanDeviceByPlanRequest &&) = default ;
    QueryEventRecordPlanDeviceByPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventRecordPlanDeviceByPlanRequest() = default ;
    QueryEventRecordPlanDeviceByPlanRequest& operator=(const QueryEventRecordPlanDeviceByPlanRequest &) = default ;
    QueryEventRecordPlanDeviceByPlanRequest& operator=(QueryEventRecordPlanDeviceByPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->planId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryEventRecordPlanDeviceByPlanRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryEventRecordPlanDeviceByPlanRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline QueryEventRecordPlanDeviceByPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries to return on each page. Minimum value: 1. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the intelligent alert event recording plan. You can call the [QueryEventRecordPlans](https://help.aliyun.com/document_detail/107907.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
