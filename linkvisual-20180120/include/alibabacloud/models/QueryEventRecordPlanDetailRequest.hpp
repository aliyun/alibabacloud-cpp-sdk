// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryEventRecordPlanDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventRecordPlanDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventRecordPlanDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
    };
    QueryEventRecordPlanDetailRequest() = default ;
    QueryEventRecordPlanDetailRequest(const QueryEventRecordPlanDetailRequest &) = default ;
    QueryEventRecordPlanDetailRequest(QueryEventRecordPlanDetailRequest &&) = default ;
    QueryEventRecordPlanDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventRecordPlanDetailRequest() = default ;
    QueryEventRecordPlanDetailRequest& operator=(const QueryEventRecordPlanDetailRequest &) = default ;
    QueryEventRecordPlanDetailRequest& operator=(QueryEventRecordPlanDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planId_ == nullptr; };
    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline QueryEventRecordPlanDetailRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


  protected:
    // The ID of the intelligent alert event recording plan. You can call [QueryEventRecordPlans](https://help.aliyun.com/document_detail/107907.html) to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
