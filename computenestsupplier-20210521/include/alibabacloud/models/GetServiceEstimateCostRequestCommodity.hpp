// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUESTCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUESTCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceEstimateCostRequestCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEstimateCostRequestCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_TO_JSON(PayPeriodUnit, payPeriodUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEstimateCostRequestCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_FROM_JSON(PayPeriodUnit, payPeriodUnit_);
    };
    GetServiceEstimateCostRequestCommodity() = default ;
    GetServiceEstimateCostRequestCommodity(const GetServiceEstimateCostRequestCommodity &) = default ;
    GetServiceEstimateCostRequestCommodity(GetServiceEstimateCostRequestCommodity &&) = default ;
    GetServiceEstimateCostRequestCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEstimateCostRequestCommodity() = default ;
    GetServiceEstimateCostRequestCommodity& operator=(const GetServiceEstimateCostRequestCommodity &) = default ;
    GetServiceEstimateCostRequestCommodity& operator=(GetServiceEstimateCostRequestCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->payPeriod_ != nullptr
        && this->payPeriodUnit_ != nullptr; };
    // payPeriod Field Functions 
    bool hasPayPeriod() const { return this->payPeriod_ != nullptr;};
    void deletePayPeriod() { this->payPeriod_ = nullptr;};
    inline int32_t payPeriod() const { DARABONBA_PTR_GET_DEFAULT(payPeriod_, 0) };
    inline GetServiceEstimateCostRequestCommodity& setPayPeriod(int32_t payPeriod) { DARABONBA_PTR_SET_VALUE(payPeriod_, payPeriod) };


    // payPeriodUnit Field Functions 
    bool hasPayPeriodUnit() const { return this->payPeriodUnit_ != nullptr;};
    void deletePayPeriodUnit() { this->payPeriodUnit_ = nullptr;};
    inline string payPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(payPeriodUnit_, "") };
    inline GetServiceEstimateCostRequestCommodity& setPayPeriodUnit(string payPeriodUnit) { DARABONBA_PTR_SET_VALUE(payPeriodUnit_, payPeriodUnit) };


  protected:
    // The subscription duration.
    std::shared_ptr<int32_t> payPeriod_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   Year
    // *   Month
    // *   Day
    std::shared_ptr<string> payPeriodUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
