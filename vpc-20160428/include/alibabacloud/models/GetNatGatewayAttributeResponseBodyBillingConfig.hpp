// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYBILLINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODYBILLINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBodyBillingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBodyBillingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBodyBillingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    GetNatGatewayAttributeResponseBodyBillingConfig() = default ;
    GetNatGatewayAttributeResponseBodyBillingConfig(const GetNatGatewayAttributeResponseBodyBillingConfig &) = default ;
    GetNatGatewayAttributeResponseBodyBillingConfig(GetNatGatewayAttributeResponseBodyBillingConfig &&) = default ;
    GetNatGatewayAttributeResponseBodyBillingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBodyBillingConfig() = default ;
    GetNatGatewayAttributeResponseBodyBillingConfig& operator=(const GetNatGatewayAttributeResponseBodyBillingConfig &) = default ;
    GetNatGatewayAttributeResponseBodyBillingConfig& operator=(GetNatGatewayAttributeResponseBodyBillingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->internetChargeType_ == nullptr && return this->spec_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline string autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, "") };
    inline GetNatGatewayAttributeResponseBodyBillingConfig& setAutoPay(string autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline GetNatGatewayAttributeResponseBodyBillingConfig& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline GetNatGatewayAttributeResponseBodyBillingConfig& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetNatGatewayAttributeResponseBodyBillingConfig& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // Indicates whether automatic payment is enabled. If the **InstanceChargeType** parameter is set to **PrePaid**, one of the following values is returned:
    // 
    // *   **false**: disabled. After an order is generated, you must go to the Order Center to complete the payment.
    // *   **true**: enabled. Payments are automatically completed.
    // 
    // The return value of this parameter is empty if **InstanceChargeType** is set to **PostPaid**.
    std::shared_ptr<string> autoPay_ = nullptr;
    // The billing method of the NAT gateway. The value is set to **PostPaid**, which indicates the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The metering method of the NAT gateway. Valid values:
    // 
    // *   **PayBySpec**: pay-by-specification
    // *   **PayByLcu**: pay-by-CU
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The specification of the Internet NAT gateway. If the **InternetChargeType** parameter is set to **PayBySpec**, one of the following values is returned:
    // 
    // *   **Small**: small
    // 
    // *   **Middle**: medium
    // 
    // *   **Large**: large
    // 
    //     The return value of this parameter is empty if **InternetChargeType** is set to **PayByLcu**.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
