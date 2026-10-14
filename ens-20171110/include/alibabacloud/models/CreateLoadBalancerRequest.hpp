// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingCycle_ == nullptr
        && this->clientToken_ == nullptr && this->ensRegionId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr && this->loadBalancerType_ == nullptr
        && this->networkId_ == nullptr && this->payType_ == nullptr && this->vSwitchId_ == nullptr; };
    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline CreateLoadBalancerRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateLoadBalancerRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateLoadBalancerRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLoadBalancerRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLoadBalancerRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The billing cycle of the ELB instance.
    shared_ptr<string> billingCycle_ {};
    // Ensures the idempotency of the request to avoid duplicate operations caused by multiple retries.
    // - Generate a parameter value from your client and ensure that the value is unique across different requests. The ClientToken value supports only ASCII characters and cannot exceed 64 characters in length.
    // 
    // - If you use a ClientToken that has been used before and the other request parameters remain unchanged, the client receives the same result as the first submission, with no impact on your server-side state.
    // 
    // - You can retry when the API times out or returns the PROCESSING error code, and idempotency takes effect. If the return result is an HTTP 200 status code, the retry returns the same result as the previous call with no impact on your server-side state. If the return result is an HTTP 4xx status code and the error code is not PROCESSING, idempotency does not take effect.
    // - The ClientToken is valid for 10 minutes.
    shared_ptr<string> clientToken_ {};
    // The ID of the ENS edge zone.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The name of the load balancing instance. The name must be 1 to 80 characters in length and can contain letters and Chinese characters. If you do not specify this parameter, the system automatically assigns an instance name.
    // 
    // > The name cannot start with `http://` or `https://`.
    shared_ptr<string> loadBalancerName_ {};
    // The specification of the load balancing instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerSpec_ {};
    // The type of the Edge Load Balancing instance.
    // 
    // - CLB: Classic Load Balancing instance.
    // - InternetDR: Public pattern load balancing instance.
    shared_ptr<string> loadBalancerType_ {};
    // The network ID of the Edge Load Balancing (ELB) instance to create.
    // 
    // This parameter is required.
    shared_ptr<string> networkId_ {};
    // The billing type. PostPaid (currently the only supported type): pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The ID of the vSwitch to which the VPC instance belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
