// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRatePlanPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRatePlanPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRatePlanPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
    };
    DescribeRatePlanPriceRequest() = default ;
    DescribeRatePlanPriceRequest(const DescribeRatePlanPriceRequest &) = default ;
    DescribeRatePlanPriceRequest(DescribeRatePlanPriceRequest &&) = default ;
    DescribeRatePlanPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRatePlanPriceRequest() = default ;
    DescribeRatePlanPriceRequest& operator=(const DescribeRatePlanPriceRequest &) = default ;
    DescribeRatePlanPriceRequest& operator=(DescribeRatePlanPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->period_ == nullptr && this->planName_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribeRatePlanPriceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeRatePlanPriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline DescribeRatePlanPriceRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


  protected:
    shared_ptr<int32_t> amount_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> planName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
