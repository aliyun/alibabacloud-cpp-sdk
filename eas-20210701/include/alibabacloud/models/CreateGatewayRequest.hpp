// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EnableInternet, enableInternet_);
      DARABONBA_PTR_TO_JSON(EnableIntranet, enableIntranet_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EnableInternet, enableInternet_);
      DARABONBA_PTR_FROM_JSON(EnableIntranet, enableIntranet_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
    };
    CreateGatewayRequest() = default ;
    CreateGatewayRequest(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest(CreateGatewayRequest &&) = default ;
    CreateGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequest() = default ;
    CreateGatewayRequest& operator=(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest& operator=(CreateGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceName_ == nullptr
        && this->autoRenewal_ == nullptr && this->chargeType_ == nullptr && this->enableInternet_ == nullptr && this->enableIntranet_ == nullptr && this->gatewayType_ == nullptr
        && this->instanceType_ == nullptr && this->name_ == nullptr && this->replicas_ == nullptr; };
    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateGatewayRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateGatewayRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateGatewayRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // enableInternet Field Functions 
    bool hasEnableInternet() const { return this->enableInternet_ != nullptr;};
    void deleteEnableInternet() { this->enableInternet_ = nullptr;};
    inline bool getEnableInternet() const { DARABONBA_PTR_GET_DEFAULT(enableInternet_, false) };
    inline CreateGatewayRequest& setEnableInternet(bool enableInternet) { DARABONBA_PTR_SET_VALUE(enableInternet_, enableInternet) };


    // enableIntranet Field Functions 
    bool hasEnableIntranet() const { return this->enableIntranet_ != nullptr;};
    void deleteEnableIntranet() { this->enableIntranet_ = nullptr;};
    inline bool getEnableIntranet() const { DARABONBA_PTR_GET_DEFAULT(enableIntranet_, false) };
    inline CreateGatewayRequest& setEnableIntranet(bool enableIntranet) { DARABONBA_PTR_SET_VALUE(enableIntranet_, enableIntranet) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateGatewayRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateGatewayRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateGatewayRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


  protected:
    // The resource group ID. To obtain a resource group ID, see the ResourceId field in the response of the [ListResources](https://help.aliyun.com/document_detail/412133.html) operation.
    shared_ptr<string> resourceName_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // *   false (default)
    // *   true
    shared_ptr<bool> autoRenewal_ {};
    // The billing method. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // Specifies whether to enable Internet access. Default value: false.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableInternet_ {};
    // Specifies whether to enable private access. Default value: true.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableIntranet_ {};
    shared_ptr<string> gatewayType_ {};
    // The instance type used by the private gateway. Valid values:
    // 
    // *   2c4g
    // *   4c8g
    // *   8c16g
    // *   16c32g
    shared_ptr<string> instanceType_ {};
    // The alias of the private gateway.
    shared_ptr<string> name_ {};
    // The number of nodes in the private gateway.
    shared_ptr<int32_t> replicas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
