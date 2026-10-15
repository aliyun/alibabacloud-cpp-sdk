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
      // The code of the Nth module property. Valid values of N: 1 to 100. If multiple module properties exist, concatenate them in the format of N=1, 2, 3...N.
      // 
      // This parameter is required.
      shared_ptr<string> code_ {};
      // The value of the Nth module property. Valid values of N: 1 to 100.
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
    // The client idempotency token. The server checks whether a request with the same ClientToken has been made. If yes, the server returns the result of the previous call.
    shared_ptr<string> clientToken_ {};
    // The logistics address for this order. This parameter is typically valid for orders of physical products.
    shared_ptr<string> logistics_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The list of modules.
    shared_ptr<vector<CreateInstanceRequest::Parameter>> parameter_ {};
    // The subscription period. Unit: months. For yearly subscription products, specify a multiple of 12.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period.
    // 
    // - PricingCycle=1: The unit of the subscription period is year.
    // 
    // - PricingCycle=2: The unit of the subscription period is month.
    // 
    // - PricingCycle=3: The unit of the subscription period is day.
    // 
    // Default value: PricingCycle=2.
    // 
    // This parameter is applicable only to specific product types (ProductType is ddos_originpre_public_cn, ddosDip, ddoscoo, ddos_originpre_public_intl, ddosDip_intl, or ddoscoo_intl).
    shared_ptr<int64_t> pricingCycle_ {};
    // The product code. You can call the **QueryProductList** operation to query the product code.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The product type.
    shared_ptr<string> productType_ {};
    // The auto-renewal epoch. Unit: months.
    // > This parameter is required when you set **RenewalStatus** to **AutoRenewal** in Settings.
    shared_ptr<int32_t> renewPeriod_ {};
    // The auto-renewal status. Valid values:
    // - AutoRenewal: auto-renewal is enabled.
    // - ManualRenewal: manual renewal.
    // 
    // Default value: ManualRenewal.
    shared_ptr<string> renewalStatus_ {};
    // The billing method. Valid values:
    // - Subscription: subscription.
    // - PayAsYouGo: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
