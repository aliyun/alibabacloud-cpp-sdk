// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCECHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCECHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateInstanceChargeTypeRequest() = default ;
    UpdateInstanceChargeTypeRequest(const UpdateInstanceChargeTypeRequest &) = default ;
    UpdateInstanceChargeTypeRequest(UpdateInstanceChargeTypeRequest &&) = default ;
    UpdateInstanceChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceChargeTypeRequest() = default ;
    UpdateInstanceChargeTypeRequest& operator=(const UpdateInstanceChargeTypeRequest &) = default ;
    UpdateInstanceChargeTypeRequest& operator=(UpdateInstanceChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PaymentInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PaymentInfo& obj) { 
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
      };
      friend void from_json(const Darabonba::Json& j, PaymentInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
      };
      PaymentInfo() = default ;
      PaymentInfo(const PaymentInfo &) = default ;
      PaymentInfo(PaymentInfo &&) = default ;
      PaymentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PaymentInfo() = default ;
      PaymentInfo& operator=(const PaymentInfo &) = default ;
      PaymentInfo& operator=(PaymentInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->pricingCycle_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline PaymentInfo& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline PaymentInfo& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    protected:
      shared_ptr<int32_t> duration_ {};
      shared_ptr<string> pricingCycle_ {};
    };

    virtual bool empty() const override { return this->paymentInfo_ == nullptr
        && this->paymentType_ == nullptr && this->clientToken_ == nullptr; };
    // paymentInfo Field Functions 
    bool hasPaymentInfo() const { return this->paymentInfo_ != nullptr;};
    void deletePaymentInfo() { this->paymentInfo_ = nullptr;};
    inline const UpdateInstanceChargeTypeRequest::PaymentInfo & getPaymentInfo() const { DARABONBA_PTR_GET_CONST(paymentInfo_, UpdateInstanceChargeTypeRequest::PaymentInfo) };
    inline UpdateInstanceChargeTypeRequest::PaymentInfo getPaymentInfo() { DARABONBA_PTR_GET(paymentInfo_, UpdateInstanceChargeTypeRequest::PaymentInfo) };
    inline UpdateInstanceChargeTypeRequest& setPaymentInfo(const UpdateInstanceChargeTypeRequest::PaymentInfo & paymentInfo) { DARABONBA_PTR_SET_VALUE(paymentInfo_, paymentInfo) };
    inline UpdateInstanceChargeTypeRequest& setPaymentInfo(UpdateInstanceChargeTypeRequest::PaymentInfo && paymentInfo) { DARABONBA_PTR_SET_RVALUE(paymentInfo_, paymentInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline UpdateInstanceChargeTypeRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateInstanceChargeTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<UpdateInstanceChargeTypeRequest::PaymentInfo> paymentInfo_ {};
    shared_ptr<string> paymentType_ {};
    // A unique token generated by the client to guarantee the idempotency of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
