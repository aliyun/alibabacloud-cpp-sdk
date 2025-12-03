// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateLoadBalancerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateLoadBalancerResponseBody() = default ;
    CreateLoadBalancerResponseBody(const CreateLoadBalancerResponseBody &) = default ;
    CreateLoadBalancerResponseBody(CreateLoadBalancerResponseBody &&) = default ;
    CreateLoadBalancerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerResponseBody() = default ;
    CreateLoadBalancerResponseBody& operator=(const CreateLoadBalancerResponseBody &) = default ;
    CreateLoadBalancerResponseBody& operator=(CreateLoadBalancerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->loadBalancerId_ == nullptr && return this->loadBalancerName_ == nullptr && return this->networkType_ == nullptr && return this->orderId_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateLoadBalancerResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline CreateLoadBalancerResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateLoadBalancerResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateLoadBalancerResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateLoadBalancerResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLoadBalancerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLoadBalancerResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLoadBalancerResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateLoadBalancerResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IP address that is allocated to the CLB instance.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version that is used by the CLB instance.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The CLB instance name.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The network type of the CLB instance. Valid values:
    // 
    // *   **vpc**: VPC
    // *   **Classic**: classic network
    std::shared_ptr<string> networkType_ = nullptr;
    // The order ID of the subscription CLB instance.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the CLB instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the vSwitch to which the CLB instance belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the CLB instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
