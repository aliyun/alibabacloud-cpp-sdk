// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyBackendServers.hpp>
#include <alibabacloud/models/DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocols, listenerPortsAndProtocols_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocols, listenerPortsAndProtocols_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->addressType_ == nullptr && return this->backendServers_ == nullptr && return this->bandwidth_ == nullptr && return this->createTime_ == nullptr
        && return this->endTime_ == nullptr && return this->ensRegionId_ == nullptr && return this->listenerPorts_ == nullptr && return this->listenerPortsAndProtocols_ == nullptr && return this->loadBalancerId_ == nullptr
        && return this->loadBalancerName_ == nullptr && return this->loadBalancerSpec_ == nullptr && return this->loadBalancerStatus_ == nullptr && return this->loadBalancerType_ == nullptr && return this->networkId_ == nullptr
        && return this->payType_ == nullptr && return this->requestId_ == nullptr && return this->vSwitchId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<DescribeLoadBalancerAttributeResponseBodyBackendServers> & backendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<DescribeLoadBalancerAttributeResponseBodyBackendServers>) };
    inline vector<DescribeLoadBalancerAttributeResponseBodyBackendServers> backendServers() { DARABONBA_PTR_GET(backendServers_, vector<DescribeLoadBalancerAttributeResponseBodyBackendServers>) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(const vector<DescribeLoadBalancerAttributeResponseBodyBackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(vector<DescribeLoadBalancerAttributeResponseBodyBackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // listenerPorts Field Functions 
    bool hasListenerPorts() const { return this->listenerPorts_ != nullptr;};
    void deleteListenerPorts() { this->listenerPorts_ = nullptr;};
    inline const vector<string> & listenerPorts() const { DARABONBA_PTR_GET_CONST(listenerPorts_, vector<string>) };
    inline vector<string> listenerPorts() { DARABONBA_PTR_GET(listenerPorts_, vector<string>) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(const vector<string> & listenerPorts) { DARABONBA_PTR_SET_VALUE(listenerPorts_, listenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(vector<string> && listenerPorts) { DARABONBA_PTR_SET_RVALUE(listenerPorts_, listenerPorts) };


    // listenerPortsAndProtocols Field Functions 
    bool hasListenerPortsAndProtocols() const { return this->listenerPortsAndProtocols_ != nullptr;};
    void deleteListenerPortsAndProtocols() { this->listenerPortsAndProtocols_ = nullptr;};
    inline const vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols> & listenerPortsAndProtocols() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocols_, vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols>) };
    inline vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols> listenerPortsAndProtocols() { DARABONBA_PTR_GET(listenerPortsAndProtocols_, vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols>) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocols(const vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols> & listenerPortsAndProtocols) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocols_, listenerPortsAndProtocols) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocols(vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols> && listenerPortsAndProtocols) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocols_, listenerPortsAndProtocols) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string loadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string loadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string loadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IP address that the Edge Load Balancer (ELB) instance uses to provide services.
    std::shared_ptr<string> address_ = nullptr;
    // The IP version of the ELB instance. Valid values: ipv4 and ipv6.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    std::shared_ptr<string> addressType_ = nullptr;
    // The list of backend servers.
    std::shared_ptr<vector<DescribeLoadBalancerAttributeResponseBodyBackendServers>> backendServers_ = nullptr;
    // The peak bandwidth of the ELB. The default value is -1, which indicates that the bandwidth is unlimited.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The time when the ELB instance was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the ELB instance was disabled.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The frontend ports that are used by the ELB instance.
    std::shared_ptr<vector<string>> listenerPorts_ = nullptr;
    // The frontend ports and protocols that are used by the ELB instance.
    std::shared_ptr<vector<DescribeLoadBalancerAttributeResponseBodyListenerPortsAndProtocols>> listenerPortsAndProtocols_ = nullptr;
    // The ID of the ELB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the ELB instance.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The specifications of the ELB instance.
    std::shared_ptr<string> loadBalancerSpec_ = nullptr;
    // The status of the ELB instance. Valid values:
    // 
    // *   **Active** (default): The listener for the instance can forward the received traffic based on the rule.
    // *   **InActive**: The listener for the instance does not forward the received traffic.
    std::shared_ptr<string> loadBalancerStatus_ = nullptr;
    std::shared_ptr<string> loadBalancerType_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go. Only this billing method is supported.
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
