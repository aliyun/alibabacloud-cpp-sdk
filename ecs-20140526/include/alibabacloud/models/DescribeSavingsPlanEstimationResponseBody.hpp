// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANESTIMATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAVINGSPLANESTIMATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSavingsPlanEstimationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSavingsPlanEstimationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommittedAmount, committedAmount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilyGroup, instanceTypeFamilyGroup_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSavingsPlanEstimationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommittedAmount, committedAmount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilyGroup, instanceTypeFamilyGroup_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeSavingsPlanEstimationResponseBody() = default ;
    DescribeSavingsPlanEstimationResponseBody(const DescribeSavingsPlanEstimationResponseBody &) = default ;
    DescribeSavingsPlanEstimationResponseBody(DescribeSavingsPlanEstimationResponseBody &&) = default ;
    DescribeSavingsPlanEstimationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSavingsPlanEstimationResponseBody() = default ;
    DescribeSavingsPlanEstimationResponseBody& operator=(const DescribeSavingsPlanEstimationResponseBody &) = default ;
    DescribeSavingsPlanEstimationResponseBody& operator=(DescribeSavingsPlanEstimationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->committedAmount_ != nullptr
        && this->currency_ != nullptr && this->instanceTypeFamily_ != nullptr && this->instanceTypeFamilyGroup_ != nullptr && this->offeringType_ != nullptr && this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->planType_ != nullptr && this->requestId_ != nullptr && this->resourceId_ != nullptr; };
    // committedAmount Field Functions 
    bool hasCommittedAmount() const { return this->committedAmount_ != nullptr;};
    void deleteCommittedAmount() { this->committedAmount_ = nullptr;};
    inline string committedAmount() const { DARABONBA_PTR_GET_DEFAULT(committedAmount_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setCommittedAmount(string committedAmount) { DARABONBA_PTR_SET_VALUE(committedAmount_, committedAmount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypeFamilyGroup Field Functions 
    bool hasInstanceTypeFamilyGroup() const { return this->instanceTypeFamilyGroup_ != nullptr;};
    void deleteInstanceTypeFamilyGroup() { this->instanceTypeFamilyGroup_ = nullptr;};
    inline string instanceTypeFamilyGroup() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamilyGroup_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setInstanceTypeFamilyGroup(string instanceTypeFamilyGroup) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilyGroup_, instanceTypeFamilyGroup) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string offeringType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeSavingsPlanEstimationResponseBody& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeSavingsPlanEstimationResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> committedAmount_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    std::shared_ptr<string> instanceTypeFamilyGroup_ = nullptr;
    std::shared_ptr<string> offeringType_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> planType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
