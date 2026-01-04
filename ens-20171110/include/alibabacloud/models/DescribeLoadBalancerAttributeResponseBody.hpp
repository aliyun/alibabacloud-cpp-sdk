// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ListenerPortsAndProtocols : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerPortsAndProtocols& obj) { 
        DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
        DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerPortsAndProtocols& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
        DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      };
      ListenerPortsAndProtocols() = default ;
      ListenerPortsAndProtocols(const ListenerPortsAndProtocols &) = default ;
      ListenerPortsAndProtocols(ListenerPortsAndProtocols &&) = default ;
      ListenerPortsAndProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerPortsAndProtocols() = default ;
      ListenerPortsAndProtocols& operator=(const ListenerPortsAndProtocols &) = default ;
      ListenerPortsAndProtocols& operator=(ListenerPortsAndProtocols &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && this->description_ == nullptr && this->forwardPort_ == nullptr && this->listenerForward_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr; };
      // backendServerPort Field Functions 
      bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
      void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
      inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
      inline ListenerPortsAndProtocols& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ListenerPortsAndProtocols& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // forwardPort Field Functions 
      bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
      void deleteForwardPort() { this->forwardPort_ = nullptr;};
      inline int32_t getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
      inline ListenerPortsAndProtocols& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


      // listenerForward Field Functions 
      bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
      void deleteListenerForward() { this->listenerForward_ = nullptr;};
      inline string getListenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
      inline ListenerPortsAndProtocols& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline ListenerPortsAndProtocols& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // listenerProtocol Field Functions 
      bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
      void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
      inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
      inline ListenerPortsAndProtocols& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    protected:
      // The backend port that is used by the ELB instance. Valid values: **1** to **65535**.
      shared_ptr<int32_t> backendServerPort_ {};
      // The description of the listener.
      shared_ptr<string> description_ {};
      // The destination listening port to which requests are forwarded.
      shared_ptr<int32_t> forwardPort_ {};
      // Indicates whether the listener is enabled.
      shared_ptr<string> listenerForward_ {};
      // The listener port of the instance.
      shared_ptr<int32_t> listenerPort_ {};
      // The listener protocol of the instance.
      shared_ptr<string> listenerProtocol_ {};
    };

    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      BackendServers() = default ;
      BackendServers(const BackendServers &) = default ;
      BackendServers(BackendServers &&) = default ;
      BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendServers() = default ;
      BackendServers& operator=(const BackendServers &) = default ;
      BackendServers& operator=(BackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ip_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline BackendServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline BackendServers& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline BackendServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BackendServers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline BackendServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The IP address of the backend server.
      shared_ptr<string> ip_ {};
      // The port that is used by the backend server.
      shared_ptr<string> port_ {};
      // The ID of the backend server.
      shared_ptr<string> serverId_ {};
      // The type of backend server.
      shared_ptr<string> type_ {};
      // The weight of the backend server.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->address_ == nullptr
        && this->addressIPVersion_ == nullptr && this->addressType_ == nullptr && this->backendServers_ == nullptr && this->bandwidth_ == nullptr && this->createTime_ == nullptr
        && this->endTime_ == nullptr && this->ensRegionId_ == nullptr && this->listenerPorts_ == nullptr && this->listenerPortsAndProtocols_ == nullptr && this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr && this->loadBalancerStatus_ == nullptr && this->loadBalancerType_ == nullptr && this->networkId_ == nullptr
        && this->payType_ == nullptr && this->requestId_ == nullptr && this->vSwitchId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const vector<DescribeLoadBalancerAttributeResponseBody::BackendServers> & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, vector<DescribeLoadBalancerAttributeResponseBody::BackendServers>) };
    inline vector<DescribeLoadBalancerAttributeResponseBody::BackendServers> getBackendServers() { DARABONBA_PTR_GET(backendServers_, vector<DescribeLoadBalancerAttributeResponseBody::BackendServers>) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(const vector<DescribeLoadBalancerAttributeResponseBody::BackendServers> & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(vector<DescribeLoadBalancerAttributeResponseBody::BackendServers> && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // listenerPorts Field Functions 
    bool hasListenerPorts() const { return this->listenerPorts_ != nullptr;};
    void deleteListenerPorts() { this->listenerPorts_ = nullptr;};
    inline const vector<string> & getListenerPorts() const { DARABONBA_PTR_GET_CONST(listenerPorts_, vector<string>) };
    inline vector<string> getListenerPorts() { DARABONBA_PTR_GET(listenerPorts_, vector<string>) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(const vector<string> & listenerPorts) { DARABONBA_PTR_SET_VALUE(listenerPorts_, listenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(vector<string> && listenerPorts) { DARABONBA_PTR_SET_RVALUE(listenerPorts_, listenerPorts) };


    // listenerPortsAndProtocols Field Functions 
    bool hasListenerPortsAndProtocols() const { return this->listenerPortsAndProtocols_ != nullptr;};
    void deleteListenerPortsAndProtocols() { this->listenerPortsAndProtocols_ = nullptr;};
    inline const vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols> & getListenerPortsAndProtocols() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocols_, vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols>) };
    inline vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols> getListenerPortsAndProtocols() { DARABONBA_PTR_GET(listenerPortsAndProtocols_, vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols>) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocols(const vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols> & listenerPortsAndProtocols) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocols_, listenerPortsAndProtocols) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocols(vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols> && listenerPortsAndProtocols) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocols_, listenerPortsAndProtocols) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // loadBalancerType Field Functions 
    bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
    void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
    inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IP address that the Edge Load Balancer (ELB) instance uses to provide services.
    shared_ptr<string> address_ {};
    // The IP version of the ELB instance. Valid values: ipv4 and ipv6.
    shared_ptr<string> addressIPVersion_ {};
    shared_ptr<string> addressType_ {};
    // The list of backend servers.
    shared_ptr<vector<DescribeLoadBalancerAttributeResponseBody::BackendServers>> backendServers_ {};
    // The peak bandwidth of the ELB. The default value is -1, which indicates that the bandwidth is unlimited.
    shared_ptr<int32_t> bandwidth_ {};
    // The time when the ELB instance was created. The time is displayed in UTC.
    shared_ptr<string> createTime_ {};
    // The time when the ELB instance was disabled.
    shared_ptr<string> endTime_ {};
    // The ID of the ENS node.
    shared_ptr<string> ensRegionId_ {};
    // The frontend ports that are used by the ELB instance.
    shared_ptr<vector<string>> listenerPorts_ {};
    // The frontend ports and protocols that are used by the ELB instance.
    shared_ptr<vector<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocols>> listenerPortsAndProtocols_ {};
    // The ID of the ELB instance.
    shared_ptr<string> loadBalancerId_ {};
    // The name of the ELB instance.
    shared_ptr<string> loadBalancerName_ {};
    // The specifications of the ELB instance.
    shared_ptr<string> loadBalancerSpec_ {};
    // The status of the ELB instance. Valid values:
    // 
    // *   **Active** (default): The listener for the instance can forward the received traffic based on the rule.
    // *   **InActive**: The listener for the instance does not forward the received traffic.
    shared_ptr<string> loadBalancerStatus_ {};
    shared_ptr<string> loadBalancerType_ {};
    // The ID of the network.
    shared_ptr<string> networkId_ {};
    // The billing method. Valid values:
    // 
    // *   **PrePaid**: subscription.
    // *   **PostPaid**: pay-as-you-go. Only this billing method is supported.
    shared_ptr<string> payType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
