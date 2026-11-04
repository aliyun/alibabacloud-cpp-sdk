// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDPLANDEVICEBYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDPLANDEVICEBYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRecordPlanDeviceByPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordPlanDeviceByPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordPlanDeviceByPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    QueryRecordPlanDeviceByPlanRequest() = default ;
    QueryRecordPlanDeviceByPlanRequest(const QueryRecordPlanDeviceByPlanRequest &) = default ;
    QueryRecordPlanDeviceByPlanRequest(QueryRecordPlanDeviceByPlanRequest &&) = default ;
    QueryRecordPlanDeviceByPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordPlanDeviceByPlanRequest() = default ;
    QueryRecordPlanDeviceByPlanRequest& operator=(const QueryRecordPlanDeviceByPlanRequest &) = default ;
    QueryRecordPlanDeviceByPlanRequest& operator=(QueryRecordPlanDeviceByPlanRequest &&) = default ;
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
    inline QueryRecordPlanDeviceByPlanRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRecordPlanDeviceByPlanRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline QueryRecordPlanDeviceByPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    // The page number to return. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page. Minimum value: 1. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the recording plan. You can call [QueryRecordPlans](https://help.aliyun.com/document_detail/107896.html) to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
