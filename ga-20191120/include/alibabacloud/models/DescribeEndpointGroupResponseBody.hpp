// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeEndpointGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_TO_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_TO_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableAccessLog, enableAccessLog_);
      DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupIpList, endpointGroupIpList_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(EndpointGroupType, endpointGroupType_);
      DARABONBA_PTR_TO_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
      DARABONBA_PTR_TO_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_TO_JSON(EndpointPrivateIpList, endpointPrivateIpList_);
      DARABONBA_PTR_TO_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_TO_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_TO_JSON(ForwardingRuleIds, forwardingRuleIds_);
      DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_TO_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_TO_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_TO_JSON(SlsRegion, slsRegion_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeaderList, accessLogRecordCustomizedHeaderList_);
      DARABONBA_PTR_FROM_JSON(AccessLogRecordCustomizedHeadersEnabled, accessLogRecordCustomizedHeadersEnabled_);
      DARABONBA_PTR_FROM_JSON(AccessLogSwitch, accessLogSwitch_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableAccessLog, enableAccessLog_);
      DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupIpList, endpointGroupIpList_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupType, endpointGroupType_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupUnconfirmedIpList, endpointGroupUnconfirmedIpList_);
      DARABONBA_PTR_FROM_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointPrivateIpList, endpointPrivateIpList_);
      DARABONBA_PTR_FROM_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_FROM_JSON(ForwardingRuleIds, forwardingRuleIds_);
      DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_FROM_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(SlsLogStoreName, slsLogStoreName_);
      DARABONBA_PTR_FROM_JSON(SlsProjectName, slsProjectName_);
      DARABONBA_PTR_FROM_JSON(SlsRegion, slsRegion_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_FROM_JSON(TrafficPercentage, trafficPercentage_);
    };
    DescribeEndpointGroupResponseBody() = default ;
    DescribeEndpointGroupResponseBody(const DescribeEndpointGroupResponseBody &) = default ;
    DescribeEndpointGroupResponseBody(DescribeEndpointGroupResponseBody &&) = default ;
    DescribeEndpointGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointGroupResponseBody() = default ;
    DescribeEndpointGroupResponseBody& operator=(const DescribeEndpointGroupResponseBody &) = default ;
    DescribeEndpointGroupResponseBody& operator=(DescribeEndpointGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the endpoint group.
      shared_ptr<string> key_ {};
      // The tag value of the endpoint group.
      shared_ptr<string> value_ {};
    };

    class ServiceManagedInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceManagedInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ChildType, childType_);
        DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceManagedInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ChildType, childType_);
        DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
      };
      ServiceManagedInfos() = default ;
      ServiceManagedInfos(const ServiceManagedInfos &) = default ;
      ServiceManagedInfos(ServiceManagedInfos &&) = default ;
      ServiceManagedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceManagedInfos() = default ;
      ServiceManagedInfos& operator=(const ServiceManagedInfos &) = default ;
      ServiceManagedInfos& operator=(ServiceManagedInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->childType_ == nullptr && this->isManaged_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ServiceManagedInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // childType Field Functions 
      bool hasChildType() const { return this->childType_ != nullptr;};
      void deleteChildType() { this->childType_ = nullptr;};
      inline string getChildType() const { DARABONBA_PTR_GET_DEFAULT(childType_, "") };
      inline ServiceManagedInfos& setChildType(string childType) { DARABONBA_PTR_SET_VALUE(childType_, childType) };


      // isManaged Field Functions 
      bool hasIsManaged() const { return this->isManaged_ != nullptr;};
      void deleteIsManaged() { this->isManaged_ = nullptr;};
      inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
      inline ServiceManagedInfos& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


    protected:
      // The name of the action on the managed instance.
      // 
      // *   **Create**
      // *   **Update**
      // *   **Delete**
      // *   **Associate**
      // *   **UserUnmanaged**
      // *   **CreateChild**
      shared_ptr<string> action_ {};
      // The type of the child resource.
      // 
      // *   **Listener:** listener.
      // *   **IpSet:** acceleration region.
      // *   **EndpointGroup:** endpoint group.
      // *   **ForwardingRule:** forwarding rule.
      // *   **Endpoint:** endpoint.
      // *   **EndpointGroupDestination:** protocol mapping of an endpoint group associated with a custom routing listener.
      // *   **EndpointPolicy:** traffic policy of an endpoint associated with a custom routing listener.
      // 
      // >  This parameter takes effect only if the value of **Action** is **CreateChild**.
      shared_ptr<string> childType_ {};
      // Indicates whether the specified actions are managed.
      // 
      // *   **true:** The specified actions are managed. Users cannot perform the specified actions on the managed instance.****
      // *   **false:** The specified actions are not managed. Users can perform the specified actions on the managed instance.
      shared_ptr<bool> isManaged_ {};
    };

    class PortOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortOverrides& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointPort, endpointPort_);
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      };
      friend void from_json(const Darabonba::Json& j, PortOverrides& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointPort, endpointPort_);
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      };
      PortOverrides() = default ;
      PortOverrides(const PortOverrides &) = default ;
      PortOverrides(PortOverrides &&) = default ;
      PortOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortOverrides() = default ;
      PortOverrides& operator=(const PortOverrides &) = default ;
      PortOverrides& operator=(PortOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointPort_ == nullptr
        && this->listenerPort_ == nullptr; };
      // endpointPort Field Functions 
      bool hasEndpointPort() const { return this->endpointPort_ != nullptr;};
      void deleteEndpointPort() { this->endpointPort_ = nullptr;};
      inline int32_t getEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(endpointPort_, 0) };
      inline PortOverrides& setEndpointPort(int32_t endpointPort) { DARABONBA_PTR_SET_VALUE(endpointPort_, endpointPort) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline PortOverrides& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    protected:
      // The endpoint port.
      shared_ptr<int32_t> endpointPort_ {};
      // The listener port.
      shared_ptr<int32_t> listenerPort_ {};
    };

    class EndpointPrivateIpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointPrivateIpList& obj) { 
        DARABONBA_PTR_TO_JSON(CIDR, CIDR_);
        DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointPrivateIpList& obj) { 
        DARABONBA_PTR_FROM_JSON(CIDR, CIDR_);
        DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      EndpointPrivateIpList() = default ;
      EndpointPrivateIpList(const EndpointPrivateIpList &) = default ;
      EndpointPrivateIpList(EndpointPrivateIpList &&) = default ;
      EndpointPrivateIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointPrivateIpList() = default ;
      EndpointPrivateIpList& operator=(const EndpointPrivateIpList &) = default ;
      EndpointPrivateIpList& operator=(EndpointPrivateIpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CIDR_ == nullptr
        && this->privateIp_ == nullptr && this->vSwitchId_ == nullptr; };
      // CIDR Field Functions 
      bool hasCIDR() const { return this->CIDR_ != nullptr;};
      void deleteCIDR() { this->CIDR_ = nullptr;};
      inline string getCIDR() const { DARABONBA_PTR_GET_DEFAULT(CIDR_, "") };
      inline EndpointPrivateIpList& setCIDR(string CIDR) { DARABONBA_PTR_SET_VALUE(CIDR_, CIDR) };


      // privateIp Field Functions 
      bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
      void deletePrivateIp() { this->privateIp_ = nullptr;};
      inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
      inline EndpointPrivateIpList& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline EndpointPrivateIpList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      shared_ptr<string> CIDR_ {};
      shared_ptr<string> privateIp_ {};
      shared_ptr<string> vSwitchId_ {};
    };

    class EndpointConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
        DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(ProbePort, probePort_);
        DARABONBA_PTR_TO_JSON(ProbeProtocol, probeProtocol_);
        DARABONBA_PTR_TO_JSON(SubAddress, subAddress_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
        DARABONBA_PTR_FROM_JSON(EnableProxyProtocol, enableProxyProtocol_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(ProbePort, probePort_);
        DARABONBA_PTR_FROM_JSON(ProbeProtocol, probeProtocol_);
        DARABONBA_PTR_FROM_JSON(SubAddress, subAddress_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      EndpointConfigurations() = default ;
      EndpointConfigurations(const EndpointConfigurations &) = default ;
      EndpointConfigurations(EndpointConfigurations &&) = default ;
      EndpointConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointConfigurations() = default ;
      EndpointConfigurations& operator=(const EndpointConfigurations &) = default ;
      EndpointConfigurations& operator=(EndpointConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableClientIPPreservation_ == nullptr
        && this->enableProxyProtocol_ == nullptr && this->endpoint_ == nullptr && this->probePort_ == nullptr && this->probeProtocol_ == nullptr && this->subAddress_ == nullptr
        && this->type_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->weight_ == nullptr; };
      // enableClientIPPreservation Field Functions 
      bool hasEnableClientIPPreservation() const { return this->enableClientIPPreservation_ != nullptr;};
      void deleteEnableClientIPPreservation() { this->enableClientIPPreservation_ = nullptr;};
      inline bool getEnableClientIPPreservation() const { DARABONBA_PTR_GET_DEFAULT(enableClientIPPreservation_, false) };
      inline EndpointConfigurations& setEnableClientIPPreservation(bool enableClientIPPreservation) { DARABONBA_PTR_SET_VALUE(enableClientIPPreservation_, enableClientIPPreservation) };


      // enableProxyProtocol Field Functions 
      bool hasEnableProxyProtocol() const { return this->enableProxyProtocol_ != nullptr;};
      void deleteEnableProxyProtocol() { this->enableProxyProtocol_ = nullptr;};
      inline bool getEnableProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableProxyProtocol_, false) };
      inline EndpointConfigurations& setEnableProxyProtocol(bool enableProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableProxyProtocol_, enableProxyProtocol) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline EndpointConfigurations& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // probePort Field Functions 
      bool hasProbePort() const { return this->probePort_ != nullptr;};
      void deleteProbePort() { this->probePort_ = nullptr;};
      inline int32_t getProbePort() const { DARABONBA_PTR_GET_DEFAULT(probePort_, 0) };
      inline EndpointConfigurations& setProbePort(int32_t probePort) { DARABONBA_PTR_SET_VALUE(probePort_, probePort) };


      // probeProtocol Field Functions 
      bool hasProbeProtocol() const { return this->probeProtocol_ != nullptr;};
      void deleteProbeProtocol() { this->probeProtocol_ = nullptr;};
      inline string getProbeProtocol() const { DARABONBA_PTR_GET_DEFAULT(probeProtocol_, "") };
      inline EndpointConfigurations& setProbeProtocol(string probeProtocol) { DARABONBA_PTR_SET_VALUE(probeProtocol_, probeProtocol) };


      // subAddress Field Functions 
      bool hasSubAddress() const { return this->subAddress_ != nullptr;};
      void deleteSubAddress() { this->subAddress_ = nullptr;};
      inline string getSubAddress() const { DARABONBA_PTR_GET_DEFAULT(subAddress_, "") };
      inline EndpointConfigurations& setSubAddress(string subAddress) { DARABONBA_PTR_SET_VALUE(subAddress_, subAddress) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EndpointConfigurations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline EndpointConfigurations& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline EndpointConfigurations& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline EndpointConfigurations& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline EndpointConfigurations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // Indicates whether the client IP address preservation feature is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableClientIPPreservation_ {};
      // Indicates whether the proxy protocol is used to preserve client IP addresses.
      shared_ptr<bool> enableProxyProtocol_ {};
      // The IP address, domain name, or ID of the endpoint.
      shared_ptr<string> endpoint_ {};
      // The port that is used to monitor latency.
      shared_ptr<int32_t> probePort_ {};
      // The protocol that is used to monitor latency. Valid values:
      // 
      // *   **tcp**
      // *   **icmp**
      shared_ptr<string> probeProtocol_ {};
      // The private IP address of the ENI.
      shared_ptr<string> subAddress_ {};
      // The type of the endpoint. Valid values:
      // 
      // *   **Domain**: a custom domain name.
      // *   **Ip**: a custom IP address.
      // *   **IpTarget**: a custom private IP address.
      // *   **PublicIp**: a public IP address provided by Alibaba Cloud.
      // *   **ECS**: an Elastic Compute Service (ECS) instance.
      // *   **SLB**: a Server Load Balancer (SLB) instance.
      // *   **ALB** an Application Load Balancer (ALB) instance.
      // *   **OSS**: an Object Storage Service (OSS) bucket.
      // *   **ENI**: an elastic network interface (ENI).
      // *   **NLB**: a Network Load Balancer (NLB) instance.
      shared_ptr<string> type_ {};
      // The IDs of vSwitches that are deployed in the VPC.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The weight of the endpoint.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->accessLogRecordCustomizedHeaderList_ == nullptr && this->accessLogRecordCustomizedHeadersEnabled_ == nullptr && this->accessLogSwitch_ == nullptr && this->description_ == nullptr && this->enableAccessLog_ == nullptr
        && this->endpointConfigurations_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupIpList_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointGroupType_ == nullptr
        && this->endpointGroupUnconfirmedIpList_ == nullptr && this->endpointIpVersion_ == nullptr && this->endpointPrivateIpList_ == nullptr && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr
        && this->forwardingRuleIds_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckIntervalSeconds_ == nullptr && this->healthCheckPath_ == nullptr
        && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr && this->listenerId_ == nullptr && this->name_ == nullptr && this->portOverrides_ == nullptr
        && this->requestId_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->slsLogStoreName_ == nullptr
        && this->slsProjectName_ == nullptr && this->slsRegion_ == nullptr && this->state_ == nullptr && this->tags_ == nullptr && this->thresholdCount_ == nullptr
        && this->trafficPercentage_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeEndpointGroupResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accessLogRecordCustomizedHeaderList Field Functions 
    bool hasAccessLogRecordCustomizedHeaderList() const { return this->accessLogRecordCustomizedHeaderList_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeaderList() { this->accessLogRecordCustomizedHeaderList_ = nullptr;};
    inline const vector<string> & getAccessLogRecordCustomizedHeaderList() const { DARABONBA_PTR_GET_CONST(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline vector<string> getAccessLogRecordCustomizedHeaderList() { DARABONBA_PTR_GET(accessLogRecordCustomizedHeaderList_, vector<string>) };
    inline DescribeEndpointGroupResponseBody& setAccessLogRecordCustomizedHeaderList(const vector<string> & accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };
    inline DescribeEndpointGroupResponseBody& setAccessLogRecordCustomizedHeaderList(vector<string> && accessLogRecordCustomizedHeaderList) { DARABONBA_PTR_SET_RVALUE(accessLogRecordCustomizedHeaderList_, accessLogRecordCustomizedHeaderList) };


    // accessLogRecordCustomizedHeadersEnabled Field Functions 
    bool hasAccessLogRecordCustomizedHeadersEnabled() const { return this->accessLogRecordCustomizedHeadersEnabled_ != nullptr;};
    void deleteAccessLogRecordCustomizedHeadersEnabled() { this->accessLogRecordCustomizedHeadersEnabled_ = nullptr;};
    inline bool getAccessLogRecordCustomizedHeadersEnabled() const { DARABONBA_PTR_GET_DEFAULT(accessLogRecordCustomizedHeadersEnabled_, false) };
    inline DescribeEndpointGroupResponseBody& setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) { DARABONBA_PTR_SET_VALUE(accessLogRecordCustomizedHeadersEnabled_, accessLogRecordCustomizedHeadersEnabled) };


    // accessLogSwitch Field Functions 
    bool hasAccessLogSwitch() const { return this->accessLogSwitch_ != nullptr;};
    void deleteAccessLogSwitch() { this->accessLogSwitch_ = nullptr;};
    inline string getAccessLogSwitch() const { DARABONBA_PTR_GET_DEFAULT(accessLogSwitch_, "") };
    inline DescribeEndpointGroupResponseBody& setAccessLogSwitch(string accessLogSwitch) { DARABONBA_PTR_SET_VALUE(accessLogSwitch_, accessLogSwitch) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEndpointGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAccessLog Field Functions 
    bool hasEnableAccessLog() const { return this->enableAccessLog_ != nullptr;};
    void deleteEnableAccessLog() { this->enableAccessLog_ = nullptr;};
    inline bool getEnableAccessLog() const { DARABONBA_PTR_GET_DEFAULT(enableAccessLog_, false) };
    inline DescribeEndpointGroupResponseBody& setEnableAccessLog(bool enableAccessLog) { DARABONBA_PTR_SET_VALUE(enableAccessLog_, enableAccessLog) };


    // endpointConfigurations Field Functions 
    bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
    void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
    inline const vector<DescribeEndpointGroupResponseBody::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<DescribeEndpointGroupResponseBody::EndpointConfigurations>) };
    inline vector<DescribeEndpointGroupResponseBody::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<DescribeEndpointGroupResponseBody::EndpointConfigurations>) };
    inline DescribeEndpointGroupResponseBody& setEndpointConfigurations(const vector<DescribeEndpointGroupResponseBody::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
    inline DescribeEndpointGroupResponseBody& setEndpointConfigurations(vector<DescribeEndpointGroupResponseBody::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointGroupIpList Field Functions 
    bool hasEndpointGroupIpList() const { return this->endpointGroupIpList_ != nullptr;};
    void deleteEndpointGroupIpList() { this->endpointGroupIpList_ = nullptr;};
    inline const vector<string> & getEndpointGroupIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupIpList_, vector<string>) };
    inline vector<string> getEndpointGroupIpList() { DARABONBA_PTR_GET(endpointGroupIpList_, vector<string>) };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupIpList(const vector<string> & endpointGroupIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupIpList_, endpointGroupIpList) };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupIpList(vector<string> && endpointGroupIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupIpList_, endpointGroupIpList) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // endpointGroupType Field Functions 
    bool hasEndpointGroupType() const { return this->endpointGroupType_ != nullptr;};
    void deleteEndpointGroupType() { this->endpointGroupType_ = nullptr;};
    inline string getEndpointGroupType() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupType_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupType(string endpointGroupType) { DARABONBA_PTR_SET_VALUE(endpointGroupType_, endpointGroupType) };


    // endpointGroupUnconfirmedIpList Field Functions 
    bool hasEndpointGroupUnconfirmedIpList() const { return this->endpointGroupUnconfirmedIpList_ != nullptr;};
    void deleteEndpointGroupUnconfirmedIpList() { this->endpointGroupUnconfirmedIpList_ = nullptr;};
    inline const vector<string> & getEndpointGroupUnconfirmedIpList() const { DARABONBA_PTR_GET_CONST(endpointGroupUnconfirmedIpList_, vector<string>) };
    inline vector<string> getEndpointGroupUnconfirmedIpList() { DARABONBA_PTR_GET(endpointGroupUnconfirmedIpList_, vector<string>) };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupUnconfirmedIpList(const vector<string> & endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_VALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };
    inline DescribeEndpointGroupResponseBody& setEndpointGroupUnconfirmedIpList(vector<string> && endpointGroupUnconfirmedIpList) { DARABONBA_PTR_SET_RVALUE(endpointGroupUnconfirmedIpList_, endpointGroupUnconfirmedIpList) };


    // endpointIpVersion Field Functions 
    bool hasEndpointIpVersion() const { return this->endpointIpVersion_ != nullptr;};
    void deleteEndpointIpVersion() { this->endpointIpVersion_ = nullptr;};
    inline string getEndpointIpVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointIpVersion_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointIpVersion(string endpointIpVersion) { DARABONBA_PTR_SET_VALUE(endpointIpVersion_, endpointIpVersion) };


    // endpointPrivateIpList Field Functions 
    bool hasEndpointPrivateIpList() const { return this->endpointPrivateIpList_ != nullptr;};
    void deleteEndpointPrivateIpList() { this->endpointPrivateIpList_ = nullptr;};
    inline const vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList> & getEndpointPrivateIpList() const { DARABONBA_PTR_GET_CONST(endpointPrivateIpList_, vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList>) };
    inline vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList> getEndpointPrivateIpList() { DARABONBA_PTR_GET(endpointPrivateIpList_, vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList>) };
    inline DescribeEndpointGroupResponseBody& setEndpointPrivateIpList(const vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList> & endpointPrivateIpList) { DARABONBA_PTR_SET_VALUE(endpointPrivateIpList_, endpointPrivateIpList) };
    inline DescribeEndpointGroupResponseBody& setEndpointPrivateIpList(vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList> && endpointPrivateIpList) { DARABONBA_PTR_SET_RVALUE(endpointPrivateIpList_, endpointPrivateIpList) };


    // endpointProtocolVersion Field Functions 
    bool hasEndpointProtocolVersion() const { return this->endpointProtocolVersion_ != nullptr;};
    void deleteEndpointProtocolVersion() { this->endpointProtocolVersion_ = nullptr;};
    inline string getEndpointProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointProtocolVersion_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointProtocolVersion(string endpointProtocolVersion) { DARABONBA_PTR_SET_VALUE(endpointProtocolVersion_, endpointProtocolVersion) };


    // endpointRequestProtocol Field Functions 
    bool hasEndpointRequestProtocol() const { return this->endpointRequestProtocol_ != nullptr;};
    void deleteEndpointRequestProtocol() { this->endpointRequestProtocol_ = nullptr;};
    inline string getEndpointRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(endpointRequestProtocol_, "") };
    inline DescribeEndpointGroupResponseBody& setEndpointRequestProtocol(string endpointRequestProtocol) { DARABONBA_PTR_SET_VALUE(endpointRequestProtocol_, endpointRequestProtocol) };


    // forwardingRuleIds Field Functions 
    bool hasForwardingRuleIds() const { return this->forwardingRuleIds_ != nullptr;};
    void deleteForwardingRuleIds() { this->forwardingRuleIds_ = nullptr;};
    inline const vector<string> & getForwardingRuleIds() const { DARABONBA_PTR_GET_CONST(forwardingRuleIds_, vector<string>) };
    inline vector<string> getForwardingRuleIds() { DARABONBA_PTR_GET(forwardingRuleIds_, vector<string>) };
    inline DescribeEndpointGroupResponseBody& setForwardingRuleIds(const vector<string> & forwardingRuleIds) { DARABONBA_PTR_SET_VALUE(forwardingRuleIds_, forwardingRuleIds) };
    inline DescribeEndpointGroupResponseBody& setForwardingRuleIds(vector<string> && forwardingRuleIds) { DARABONBA_PTR_SET_RVALUE(forwardingRuleIds_, forwardingRuleIds) };


    // healthCheckEnabled Field Functions 
    bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
    void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
    inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
    inline DescribeEndpointGroupResponseBody& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline DescribeEndpointGroupResponseBody& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckIntervalSeconds Field Functions 
    bool hasHealthCheckIntervalSeconds() const { return this->healthCheckIntervalSeconds_ != nullptr;};
    void deleteHealthCheckIntervalSeconds() { this->healthCheckIntervalSeconds_ = nullptr;};
    inline int32_t getHealthCheckIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(healthCheckIntervalSeconds_, 0) };
    inline DescribeEndpointGroupResponseBody& setHealthCheckIntervalSeconds(int32_t healthCheckIntervalSeconds) { DARABONBA_PTR_SET_VALUE(healthCheckIntervalSeconds_, healthCheckIntervalSeconds) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline DescribeEndpointGroupResponseBody& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline DescribeEndpointGroupResponseBody& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline DescribeEndpointGroupResponseBody& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeEndpointGroupResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEndpointGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portOverrides Field Functions 
    bool hasPortOverrides() const { return this->portOverrides_ != nullptr;};
    void deletePortOverrides() { this->portOverrides_ = nullptr;};
    inline const vector<DescribeEndpointGroupResponseBody::PortOverrides> & getPortOverrides() const { DARABONBA_PTR_GET_CONST(portOverrides_, vector<DescribeEndpointGroupResponseBody::PortOverrides>) };
    inline vector<DescribeEndpointGroupResponseBody::PortOverrides> getPortOverrides() { DARABONBA_PTR_GET(portOverrides_, vector<DescribeEndpointGroupResponseBody::PortOverrides>) };
    inline DescribeEndpointGroupResponseBody& setPortOverrides(const vector<DescribeEndpointGroupResponseBody::PortOverrides> & portOverrides) { DARABONBA_PTR_SET_VALUE(portOverrides_, portOverrides) };
    inline DescribeEndpointGroupResponseBody& setPortOverrides(vector<DescribeEndpointGroupResponseBody::PortOverrides> && portOverrides) { DARABONBA_PTR_SET_RVALUE(portOverrides_, portOverrides) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEndpointGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeEndpointGroupResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeEndpointGroupResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos>) };
    inline DescribeEndpointGroupResponseBody& setServiceManagedInfos(const vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeEndpointGroupResponseBody& setServiceManagedInfos(vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // slsLogStoreName Field Functions 
    bool hasSlsLogStoreName() const { return this->slsLogStoreName_ != nullptr;};
    void deleteSlsLogStoreName() { this->slsLogStoreName_ = nullptr;};
    inline string getSlsLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(slsLogStoreName_, "") };
    inline DescribeEndpointGroupResponseBody& setSlsLogStoreName(string slsLogStoreName) { DARABONBA_PTR_SET_VALUE(slsLogStoreName_, slsLogStoreName) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline DescribeEndpointGroupResponseBody& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


    // slsRegion Field Functions 
    bool hasSlsRegion() const { return this->slsRegion_ != nullptr;};
    void deleteSlsRegion() { this->slsRegion_ = nullptr;};
    inline string getSlsRegion() const { DARABONBA_PTR_GET_DEFAULT(slsRegion_, "") };
    inline DescribeEndpointGroupResponseBody& setSlsRegion(string slsRegion) { DARABONBA_PTR_SET_VALUE(slsRegion_, slsRegion) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEndpointGroupResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeEndpointGroupResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeEndpointGroupResponseBody::Tags>) };
    inline vector<DescribeEndpointGroupResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeEndpointGroupResponseBody::Tags>) };
    inline DescribeEndpointGroupResponseBody& setTags(const vector<DescribeEndpointGroupResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEndpointGroupResponseBody& setTags(vector<DescribeEndpointGroupResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // thresholdCount Field Functions 
    bool hasThresholdCount() const { return this->thresholdCount_ != nullptr;};
    void deleteThresholdCount() { this->thresholdCount_ = nullptr;};
    inline int32_t getThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(thresholdCount_, 0) };
    inline DescribeEndpointGroupResponseBody& setThresholdCount(int32_t thresholdCount) { DARABONBA_PTR_SET_VALUE(thresholdCount_, thresholdCount) };


    // trafficPercentage Field Functions 
    bool hasTrafficPercentage() const { return this->trafficPercentage_ != nullptr;};
    void deleteTrafficPercentage() { this->trafficPercentage_ = nullptr;};
    inline int32_t getTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(trafficPercentage_, 0) };
    inline DescribeEndpointGroupResponseBody& setTrafficPercentage(int32_t trafficPercentage) { DARABONBA_PTR_SET_VALUE(trafficPercentage_, trafficPercentage) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<vector<string>> accessLogRecordCustomizedHeaderList_ {};
    shared_ptr<bool> accessLogRecordCustomizedHeadersEnabled_ {};
    // Indicates the binding status between the Simple Log Service project and the endpoint group. Valid values:
    // 
    // *   **on:** The endpoint group is bound to the Simple Log Service project.
    // *   **off:** The endpoint group is not bound to the Simple Log Service project.
    // *   **binding:** The endpoint group is being bound to the Simple Log Service project.
    // *   **unbinding:** The endpoint group is being unbound from the Simple Log Service project.
    shared_ptr<string> accessLogSwitch_ {};
    // The description of the endpoint group.
    shared_ptr<string> description_ {};
    // Indicates whether the access log feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableAccessLog_ {};
    // The configurations of endpoints in the endpoint group.
    shared_ptr<vector<DescribeEndpointGroupResponseBody::EndpointConfigurations>> endpointConfigurations_ {};
    // The ID of the endpoint group.
    shared_ptr<string> endpointGroupId_ {};
    // The active endpoint IP addresses of the endpoint group.
    shared_ptr<vector<string>> endpointGroupIpList_ {};
    // The ID of the region where the endpoint group is deployed.
    shared_ptr<string> endpointGroupRegion_ {};
    // The type of endpoint group. Valid values:
    // 
    // *   **default**: a default endpoint group
    // *   **virtual**: a virtual endpoint group
    shared_ptr<string> endpointGroupType_ {};
    // The endpoint group IP addresses to be confirmed. After the GA instance is upgraded, the IP addresses that are added to the endpoint group need to be confirmed.
    shared_ptr<vector<string>> endpointGroupUnconfirmedIpList_ {};
    shared_ptr<string> endpointIpVersion_ {};
    shared_ptr<vector<DescribeEndpointGroupResponseBody::EndpointPrivateIpList>> endpointPrivateIpList_ {};
    // The version of the protocol that is used by the backend service.
    // 
    // *   **HTTP1.1**
    // *   **HTTP2**
    shared_ptr<string> endpointProtocolVersion_ {};
    // The protocol that is used by the backend service.
    // 
    // *   **HTTP**
    // *   **HTTPS**
    shared_ptr<string> endpointRequestProtocol_ {};
    // The ID of the forwarding rule that is associated with the endpoint group.
    shared_ptr<vector<string>> forwardingRuleIds_ {};
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    shared_ptr<bool> healthCheckEnabled_ {};
    shared_ptr<string> healthCheckHost_ {};
    // The interval between two consecutive health checks. Unit: seconds.
    shared_ptr<int32_t> healthCheckIntervalSeconds_ {};
    // The path to which health check probes are sent.
    shared_ptr<string> healthCheckPath_ {};
    // The port that is used for health checks.
    shared_ptr<int32_t> healthCheckPort_ {};
    // The protocol over which health check requests are sent. Valid values:
    // 
    // *   **tcp** or **TCP**
    // *   **http** or **HTTP**
    // *   **https** or **HTTPS**
    shared_ptr<string> healthCheckProtocol_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The name of the endpoint group.
    shared_ptr<string> name_ {};
    // The mappings between ports.
    shared_ptr<vector<DescribeEndpointGroupResponseBody::PortOverrides>> portOverrides_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the service that manages the GA instance.
    // 
    // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
    shared_ptr<string> serviceId_ {};
    // Indicates whether the instance is managed.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> serviceManaged_ {};
    // The actions that users can perform on the managed instance.
    // >*   This parameter takes effect only if the value of **ServiceManaged** is **true**.
    // >*   Users can perform only specific actions on a managed instance.
    shared_ptr<vector<DescribeEndpointGroupResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The name of the Logstore.
    shared_ptr<string> slsLogStoreName_ {};
    // The name of the Log Service project.
    shared_ptr<string> slsProjectName_ {};
    // The region of the Log Service project.
    shared_ptr<string> slsRegion_ {};
    // The status of the endpoint group. Valid values:
    // 
    // *   **init**: The endpoint group is being initialized.
    // *   **active**: The endpoint group is running as expected.
    // *   **updating**: The endpoint group is being updated.
    // *   **deleting**: The endpoint group is being deleted.
    shared_ptr<string> state_ {};
    // The tag of the endpoint group.
    shared_ptr<vector<DescribeEndpointGroupResponseBody::Tags>> tags_ {};
    // The number of consecutive failed health checks that must occur before an endpoint is considered unhealthy.
    shared_ptr<int32_t> thresholdCount_ {};
    // The traffic ratio of the endpoint group when the specified listener is associated with multiple endpoint groups.
    shared_ptr<int32_t> trafficPercentage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
