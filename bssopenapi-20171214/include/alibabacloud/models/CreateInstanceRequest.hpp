// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Logistics, logistics_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RenewPeriod, renewPeriod_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Logistics, logistics_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RenewPeriod, renewPeriod_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameter() = default ;
      Parameter(const Parameter &) = default ;
      Parameter(Parameter &&) = default ;
      Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameter() = default ;
      Parameter& operator=(const Parameter &) = default ;
      Parameter& operator=(Parameter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Parameter& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The code property of the Nth module. Value of N: 1 to 100. If multiple module property parameters are involved, concatenate multiple parameters based on the value of N in sequence.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The value property of the Nth module. Value of N: 1 to 100.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->logistics_ == nullptr && this->ownerId_ == nullptr && this->parameter_ == nullptr && this->period_ == nullptr && this->pricingCycle_ == nullptr
        && this->productCode_ == nullptr && this->productType_ == nullptr && this->renewPeriod_ == nullptr && this->renewalStatus_ == nullptr && this->subscriptionType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // logistics Field Functions 
    bool hasLogistics() const { return this->logistics_ != nullptr;};
    void deleteLogistics() { this->logistics_ = nullptr;};
    inline string getLogistics() const { DARABONBA_PTR_GET_DEFAULT(logistics_, "") };
    inline CreateInstanceRequest& setLogistics(string logistics) { DARABONBA_PTR_SET_VALUE(logistics_, logistics) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const vector<CreateInstanceRequest::Parameter> & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, vector<CreateInstanceRequest::Parameter>) };
    inline vector<CreateInstanceRequest::Parameter> getParameter() { DARABONBA_PTR_GET(parameter_, vector<CreateInstanceRequest::Parameter>) };
    inline CreateInstanceRequest& setParameter(const vector<CreateInstanceRequest::Parameter> & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline CreateInstanceRequest& setParameter(vector<CreateInstanceRequest::Parameter> && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateInstanceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline int64_t getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, 0L) };
    inline CreateInstanceRequest& setPricingCycle(int64_t pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // renewPeriod Field Functions 
    bool hasRenewPeriod() const { return this->renewPeriod_ != nullptr;};
    void deleteRenewPeriod() { this->renewPeriod_ = nullptr;};
    inline int32_t getRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewPeriod_, 0) };
    inline CreateInstanceRequest& setRenewPeriod(int32_t renewPeriod) { DARABONBA_PTR_SET_VALUE(renewPeriod_, renewPeriod) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline CreateInstanceRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline CreateInstanceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. The server checks whether a request that uses the same client token has been received. If a request that uses the same client token has been received, the server returns the same request result as the previous request.
    shared_ptr<string> clientToken_ {};
    // The logistics address of this order. This parameter is generally valid for physical orders.
    shared_ptr<string> logistics_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The details of the modules.
    shared_ptr<vector<CreateInstanceRequest::Parameter>> parameter_ {};
    // The subscription duration. Unit: month. The value must be an integral multiple of 12.
    // 
    // >  This parameter is required if you create a subscription instance.
    shared_ptr<int32_t> period_ {};
    // The cycle type of the prepaid period
    // - PricingCycle=1 indicates that the unit of the prepaid period is in years; 
    // - PricingCycle=2 indicates that the unit of the prepaid period is in months; 
    // - PricingCycle=3 indicates that the unit of the prepaid period is in days;
    // - Default value: PricingCycle=2
    // 
    // Applicable only to certain product types (ProductType being ddos_originpre_public_cn, ddosDip, ddoscoo, ddos_originpre_public_intl, ddosDip_intl, ddoscoo_intl)
    shared_ptr<int64_t> pricingCycle_ {};
    // The code of the service to which the instance belongs. You can query the service code by calling the **QueryProductList** operation or viewing **Codes of Alibaba Cloud Services**.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The type of the service.
    shared_ptr<string> productType_ {};
    // The auto-renewal period. Unit: month.
    // 
    // >  This parameter is required if the **RenewalStatus** parameter is set to **AutoRenewal**.
    shared_ptr<int32_t> renewPeriod_ {};
    // The renewal method. Valid values:
    // 
    // *   AutoRenewal: The instance is automatically renewed.
    // *   ManualRenewal: The instance is manually renewed.
    // 
    // Default value: ManualRenewal.
    shared_ptr<string> renewalStatus_ {};
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method.
    // *   PayAsYouGo: the pay-as-you-go billing method.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
