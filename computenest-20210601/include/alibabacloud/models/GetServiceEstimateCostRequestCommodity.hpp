// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUESTCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEESTIMATECOSTREQUESTCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceEstimateCostRequestCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEstimateCostRequestCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_TO_JSON(PayPeriodUnit, payPeriodUnit_);
      DARABONBA_PTR_TO_JSON(QuotationId, quotationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEstimateCostRequestCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_FROM_JSON(PayPeriodUnit, payPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(QuotationId, quotationId_);
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
    virtual bool empty() const override { this->couponId_ != nullptr
        && this->payPeriod_ != nullptr && this->payPeriodUnit_ != nullptr && this->quotationId_ != nullptr; };
    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline GetServiceEstimateCostRequestCommodity& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


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


    // quotationId Field Functions 
    bool hasQuotationId() const { return this->quotationId_ != nullptr;};
    void deleteQuotationId() { this->quotationId_ = nullptr;};
    inline string quotationId() const { DARABONBA_PTR_GET_DEFAULT(quotationId_, "") };
    inline GetServiceEstimateCostRequestCommodity& setQuotationId(string quotationId) { DARABONBA_PTR_SET_VALUE(quotationId_, quotationId) };


  protected:
    // The coupon ID.
    std::shared_ptr<string> couponId_ = nullptr;
    // The subscription duration of the instance.
    std::shared_ptr<int32_t> payPeriod_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   Year.
    // *   Month.
    // *   Day.
    std::shared_ptr<string> payPeriodUnit_ = nullptr;
    // The PrivateOffer ID of the Alibaba Cloud Marketplace.
    std::shared_ptr<string> quotationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
