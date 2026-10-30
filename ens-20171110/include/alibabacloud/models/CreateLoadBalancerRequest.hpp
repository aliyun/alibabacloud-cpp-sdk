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
    // The client token that is used to ensure the idempotence of the request. This prevents duplicate operations caused by multiple retries.
    // - Generate the value from your client and ensure that it is unique among different requests. The client token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // - If you resubmit a request with a used client token and all other request parameters remain unchanged, the client receives the same response as the first request, and the server state remains unaffected.
    // 
    // - You can retry the request when the operation times out or the error code is PROCESSING, and the idempotence remains valid. If the HTTP status code 200 is returned, the client receives the same response after a retry, and the server state remains unaffected. If an HTTP 4xx status code is returned and the error code is not PROCESSING, the idempotence is invalid.
    // - The client token is valid for 10 minutes.
    shared_ptr<string> clientToken_ {};
    // The ENS edge zone ID. Not all ENS edge zones support creating an Edge Load Balancer (ELB) instance. Before calling this operation, verify that the target edge zone supports this feature.
    // 
    // This parameter is required.
    shared_ptr<string> ensRegionId_ {};
    // The name of the load balancing instance. The name must be 1 to 80 characters in length, and can contain English letters and Chinese characters. If you do not specify this parameter, the system randomly allocates a name to the instance.
    // 
    // > The name cannot start with http:// or https://.
    shared_ptr<string> loadBalancerName_ {};
    // The specification of the load balancing instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerSpec_ {};
    // The type of the edge load balancing (ELB) instance. Valid values:
    // - CLB: traditional load balancing instance.
    // - InternetDR: public pattern load balancing instance.
    shared_ptr<string> loadBalancerType_ {};
    // The network ID of the edge load balancing (ELB) instance to be created.
    // 
    // This parameter is required.
    shared_ptr<string> networkId_ {};
    // The billing method. Currently, only PostPaid (pay-as-you-go) is supported.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The ID of the vSwitch to which the VPC-connected instance belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
