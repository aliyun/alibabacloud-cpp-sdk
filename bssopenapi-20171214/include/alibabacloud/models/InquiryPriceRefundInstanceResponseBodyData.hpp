// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INQUIRYPRICEREFUNDINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INQUIRYPRICEREFUNDINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class InquiryPriceRefundInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InquiryPriceRefundInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RefundAmount, refundAmount_);
    };
    friend void from_json(const Darabonba::Json& j, InquiryPriceRefundInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RefundAmount, refundAmount_);
    };
    InquiryPriceRefundInstanceResponseBodyData() = default ;
    InquiryPriceRefundInstanceResponseBodyData(const InquiryPriceRefundInstanceResponseBodyData &) = default ;
    InquiryPriceRefundInstanceResponseBodyData(InquiryPriceRefundInstanceResponseBodyData &&) = default ;
    InquiryPriceRefundInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InquiryPriceRefundInstanceResponseBodyData() = default ;
    InquiryPriceRefundInstanceResponseBodyData& operator=(const InquiryPriceRefundInstanceResponseBodyData &) = default ;
    InquiryPriceRefundInstanceResponseBodyData& operator=(InquiryPriceRefundInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->hostId_ != nullptr && this->instanceId_ != nullptr && this->refundAmount_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline InquiryPriceRefundInstanceResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline InquiryPriceRefundInstanceResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InquiryPriceRefundInstanceResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline double refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0.0) };
    inline InquiryPriceRefundInstanceResponseBodyData& setRefundAmount(double refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


  protected:
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The site of the execution host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The refundable amount.
    std::shared_ptr<double> refundAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
