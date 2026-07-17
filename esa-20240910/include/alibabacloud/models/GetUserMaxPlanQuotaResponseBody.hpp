// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMAXPLANQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMAXPLANQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserMaxPlanQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMaxPlanQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMaxPlanQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(QuotaValue, quotaValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserMaxPlanQuotaResponseBody() = default ;
    GetUserMaxPlanQuotaResponseBody(const GetUserMaxPlanQuotaResponseBody &) = default ;
    GetUserMaxPlanQuotaResponseBody(GetUserMaxPlanQuotaResponseBody &&) = default ;
    GetUserMaxPlanQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMaxPlanQuotaResponseBody() = default ;
    GetUserMaxPlanQuotaResponseBody& operator=(const GetUserMaxPlanQuotaResponseBody &) = default ;
    GetUserMaxPlanQuotaResponseBody& operator=(GetUserMaxPlanQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->planName_ == nullptr && this->quotaValue_ == nullptr && this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetUserMaxPlanQuotaResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline GetUserMaxPlanQuotaResponseBody& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // quotaValue Field Functions 
    bool hasQuotaValue() const { return this->quotaValue_ != nullptr;};
    void deleteQuotaValue() { this->quotaValue_ = nullptr;};
    inline string getQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(quotaValue_, "") };
    inline GetUserMaxPlanQuotaResponseBody& setQuotaValue(string quotaValue) { DARABONBA_PTR_SET_VALUE(quotaValue_, quotaValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserMaxPlanQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The plan instance ID. You can obtain this value by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    shared_ptr<string> instanceId_ {};
    // The plan name.
    // 
    // <props="china">
    // - Free Edition: entranceplan
    // - Basic: basic
    // - Standard: medium
    // - Premium Edition: high
    // 
    // 
    // <props="intl">
    // - Entrance: entranceplan_intl
    // - Pro: basicplan_intl
    // - Premium: vipplan_intl
    shared_ptr<string> planName_ {};
    // The quota value.
    shared_ptr<string> quotaValue_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
