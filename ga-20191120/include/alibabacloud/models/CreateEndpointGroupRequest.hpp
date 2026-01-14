// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTGROUPREQUEST_HPP_
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
  class CreateEndpointGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(EndpointGroupType, endpointGroupType_);
      DARABONBA_PTR_TO_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_TO_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_TO_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_TO_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupType, endpointGroupType_);
      DARABONBA_PTR_FROM_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_FROM_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_FROM_JSON(TrafficPercentage, trafficPercentage_);
    };
    CreateEndpointGroupRequest() = default ;
    CreateEndpointGroupRequest(const CreateEndpointGroupRequest &) = default ;
    CreateEndpointGroupRequest(CreateEndpointGroupRequest &&) = default ;
    CreateEndpointGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointGroupRequest() = default ;
    CreateEndpointGroupRequest& operator=(const CreateEndpointGroupRequest &) = default ;
    CreateEndpointGroupRequest& operator=(CreateEndpointGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the GA instance. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value of the GA instance. The tag value cannot be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      // 
      // You can specify up to 20 tag values.
      shared_ptr<string> value_ {};
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
      // The endpoint port that is mapped to the listener port.
      shared_ptr<int32_t> endpointPort_ {};
      // The listener port that is mapped to the endpoint port.
      // 
      // > *   You cannot configure port mappings for virtual endpoint groups of TCP listeners. If a virtual endpoint group already exists on the listener, you cannot configure port mappings for the default endpoint group. If port mappings are configured for the default endpoint group, you cannot add a virtual endpoint group.
      // > *   If you configure port mappings for a listener, you cannot modify the listener protocol. You can only switch between HTTP and HTTPS.
      // > *   Listener port: When you modify the listener port range, make sure that the port range includes the ports configured in port mappings. For example, if you set the listener port range to 80 to 82 and map the listener ports to endpoint ports 100 to 102, you cannot change the listener port range to 80 to 81.
      shared_ptr<int32_t> listenerPort_ {};
    };

    class EndpointConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
        DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
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
        && this->enableProxyProtocol_ == nullptr && this->endpoint_ == nullptr && this->subAddress_ == nullptr && this->type_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr && this->weight_ == nullptr; };
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
      // Specifies whether to automatically preserve client IP addresses. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // > *   By default, client IP address preservation is disabled for an endpoint group of a UDP or TCP listener. You can configure this parameter based on your business requirements.
      // > *   By default, client IP address preservation is enabled for an endpoint group of an HTTP or HTTP listener. You can obtain client IP addresses by using the X-Forwarded-For header. You cannot disable the feature.
      // > *   EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
      // > > For more information, see [Preserve client IP addresses](https://help.aliyun.com/document_detail/158080.html).
      shared_ptr<bool> enableClientIPPreservation_ {};
      // Specifies whether to use the proxy protocol to preserve client IP addresses. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      // 
      // > *   This parameter is available only to endpoint groups of TCP listeners.
      // > *   EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
      // > >  For more information, see [Preserve client IP addresses](https://help.aliyun.com/document_detail/158080.html).
      shared_ptr<bool> enableProxyProtocol_ {};
      // The IP address, domain name, or instance ID based on the value of Type.
      // 
      // This parameter is required.
      shared_ptr<string> endpoint_ {};
      // The private IP address of the ENI.
      // 
      // >  This parameter is available only when you set the endpoint type to **ENI**. If you leave this parameter empty, the primary private IP address of the ENI is used.
      shared_ptr<string> subAddress_ {};
      // The type of the endpoint. Valid values:
      // 
      // *   **Domain**: a custom domain name.
      // *   **Ip**: a custom IP address.
      // *   **IpTarget**: a custom private IP address.
      // *   **PublicIp**: a public IP address provided by Alibaba Cloud.
      // *   **ECS**: an Elastic Compute Service (ECS) instance.
      // *   **SLB**: a Server Load Balancer (SLB) instance.
      // *   **ALB**: an Application Load Balancer (ALB) instance.
      // *   **OSS**: an Object Storage Service (OSS) bucket.
      // *   **ENI**: an elastic network interface (ENI).
      // *   **NLB**: a Network Load Balancer (NLB) instance.
      // 
      // > *   If you set this parameter to **ECS**, **ENI**, **SLB**, **ALB**, **NLB**, or **IpTarget** and the AliyunServiceRoleForGaVpcEndpoint service-linked role does not exist, the system automatically creates the role.
      // > *   If you set this parameter to **ALB** and the AliyunServiceRoleForGaAlb service-linked role does not exist, the system automatically creates the role.
      // > *   If you set this parameter to **OSS** and the AliyunServiceRoleForGaOss service-linked role does not exist, the system automatically creates the role.
      // > *   If you set this parameter to **NLB** and the AliyunServiceRoleForGaNlb service-linked role does not exist, the system automatically creates the role.
      // > > For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/178360.html).
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The IDs of vSwitches that are deployed in the VPC.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The virtual private cloud (VPC) ID.
      // 
      // You can specify one VPC ID for an endpoint group of an intelligent routing listener.
      // 
      // >  This parameter is valid and required only if Type is set to **IpTarget**.
      shared_ptr<string> vpcId_ {};
      // The weight of the endpoint.
      // 
      // Valid values: **0** to **255**.
      // 
      // >  If you set the weight of an endpoint to 0, GA stops distributing traffic to the endpoint. Proceed with caution.
      // 
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr && this->endpointConfigurations_ == nullptr && this->endpointGroupRegion_ == nullptr
        && this->endpointGroupType_ == nullptr && this->endpointIpVersion_ == nullptr && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr && this->healthCheckEnabled_ == nullptr
        && this->healthCheckHost_ == nullptr && this->healthCheckIntervalSeconds_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr
        && this->listenerId_ == nullptr && this->name_ == nullptr && this->portOverrides_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr
        && this->thresholdCount_ == nullptr && this->trafficPercentage_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateEndpointGroupRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEndpointGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEndpointGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEndpointGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointConfigurations Field Functions 
    bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
    void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
    inline const vector<CreateEndpointGroupRequest::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<CreateEndpointGroupRequest::EndpointConfigurations>) };
    inline vector<CreateEndpointGroupRequest::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<CreateEndpointGroupRequest::EndpointConfigurations>) };
    inline CreateEndpointGroupRequest& setEndpointConfigurations(const vector<CreateEndpointGroupRequest::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
    inline CreateEndpointGroupRequest& setEndpointConfigurations(vector<CreateEndpointGroupRequest::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline CreateEndpointGroupRequest& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // endpointGroupType Field Functions 
    bool hasEndpointGroupType() const { return this->endpointGroupType_ != nullptr;};
    void deleteEndpointGroupType() { this->endpointGroupType_ = nullptr;};
    inline string getEndpointGroupType() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupType_, "") };
    inline CreateEndpointGroupRequest& setEndpointGroupType(string endpointGroupType) { DARABONBA_PTR_SET_VALUE(endpointGroupType_, endpointGroupType) };


    // endpointIpVersion Field Functions 
    bool hasEndpointIpVersion() const { return this->endpointIpVersion_ != nullptr;};
    void deleteEndpointIpVersion() { this->endpointIpVersion_ = nullptr;};
    inline string getEndpointIpVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointIpVersion_, "") };
    inline CreateEndpointGroupRequest& setEndpointIpVersion(string endpointIpVersion) { DARABONBA_PTR_SET_VALUE(endpointIpVersion_, endpointIpVersion) };


    // endpointProtocolVersion Field Functions 
    bool hasEndpointProtocolVersion() const { return this->endpointProtocolVersion_ != nullptr;};
    void deleteEndpointProtocolVersion() { this->endpointProtocolVersion_ = nullptr;};
    inline string getEndpointProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointProtocolVersion_, "") };
    inline CreateEndpointGroupRequest& setEndpointProtocolVersion(string endpointProtocolVersion) { DARABONBA_PTR_SET_VALUE(endpointProtocolVersion_, endpointProtocolVersion) };


    // endpointRequestProtocol Field Functions 
    bool hasEndpointRequestProtocol() const { return this->endpointRequestProtocol_ != nullptr;};
    void deleteEndpointRequestProtocol() { this->endpointRequestProtocol_ = nullptr;};
    inline string getEndpointRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(endpointRequestProtocol_, "") };
    inline CreateEndpointGroupRequest& setEndpointRequestProtocol(string endpointRequestProtocol) { DARABONBA_PTR_SET_VALUE(endpointRequestProtocol_, endpointRequestProtocol) };


    // healthCheckEnabled Field Functions 
    bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
    void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
    inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
    inline CreateEndpointGroupRequest& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline CreateEndpointGroupRequest& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckIntervalSeconds Field Functions 
    bool hasHealthCheckIntervalSeconds() const { return this->healthCheckIntervalSeconds_ != nullptr;};
    void deleteHealthCheckIntervalSeconds() { this->healthCheckIntervalSeconds_ = nullptr;};
    inline int32_t getHealthCheckIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(healthCheckIntervalSeconds_, 0) };
    inline CreateEndpointGroupRequest& setHealthCheckIntervalSeconds(int32_t healthCheckIntervalSeconds) { DARABONBA_PTR_SET_VALUE(healthCheckIntervalSeconds_, healthCheckIntervalSeconds) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline CreateEndpointGroupRequest& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline CreateEndpointGroupRequest& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline CreateEndpointGroupRequest& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateEndpointGroupRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEndpointGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portOverrides Field Functions 
    bool hasPortOverrides() const { return this->portOverrides_ != nullptr;};
    void deletePortOverrides() { this->portOverrides_ = nullptr;};
    inline const vector<CreateEndpointGroupRequest::PortOverrides> & getPortOverrides() const { DARABONBA_PTR_GET_CONST(portOverrides_, vector<CreateEndpointGroupRequest::PortOverrides>) };
    inline vector<CreateEndpointGroupRequest::PortOverrides> getPortOverrides() { DARABONBA_PTR_GET(portOverrides_, vector<CreateEndpointGroupRequest::PortOverrides>) };
    inline CreateEndpointGroupRequest& setPortOverrides(const vector<CreateEndpointGroupRequest::PortOverrides> & portOverrides) { DARABONBA_PTR_SET_VALUE(portOverrides_, portOverrides) };
    inline CreateEndpointGroupRequest& setPortOverrides(vector<CreateEndpointGroupRequest::PortOverrides> && portOverrides) { DARABONBA_PTR_SET_RVALUE(portOverrides_, portOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEndpointGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEndpointGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEndpointGroupRequest::Tag>) };
    inline vector<CreateEndpointGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEndpointGroupRequest::Tag>) };
    inline CreateEndpointGroupRequest& setTag(const vector<CreateEndpointGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEndpointGroupRequest& setTag(vector<CreateEndpointGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // thresholdCount Field Functions 
    bool hasThresholdCount() const { return this->thresholdCount_ != nullptr;};
    void deleteThresholdCount() { this->thresholdCount_ = nullptr;};
    inline int32_t getThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(thresholdCount_, 0) };
    inline CreateEndpointGroupRequest& setThresholdCount(int32_t thresholdCount) { DARABONBA_PTR_SET_VALUE(thresholdCount_, thresholdCount) };


    // trafficPercentage Field Functions 
    bool hasTrafficPercentage() const { return this->trafficPercentage_ != nullptr;};
    void deleteTrafficPercentage() { this->trafficPercentage_ = nullptr;};
    inline int32_t getTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(trafficPercentage_, 0) };
    inline CreateEndpointGroupRequest& setTrafficPercentage(int32_t trafficPercentage) { DARABONBA_PTR_SET_VALUE(trafficPercentage_, trafficPercentage) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the endpoint group.
    // 
    // The description can be up to 200 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, a 2xx HTTP status code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The configurations of the endpoints in the endpoint group.
    shared_ptr<vector<CreateEndpointGroupRequest::EndpointConfigurations>> endpointConfigurations_ {};
    // The ID of the region in which to create the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupRegion_ {};
    // The type of the endpoint group. Valid values:
    // 
    // *   **default** (default): a default endpoint group.
    // *   **virtual**: a virtual endpoint group.
    // 
    // >  When you call this operation to create a virtual endpoint group for a Layer 4 listener, make sure that a default endpoint group is created.
    shared_ptr<string> endpointGroupType_ {};
    shared_ptr<string> endpointIpVersion_ {};
    // The backend service protocol. Valid values:
    // 
    // *   **HTTP1.1** (default)
    // *   **HTTP2**
    // 
    // >  This parameter is required only when you set the EndpointRequestProtocol parameter to HTTPS.
    shared_ptr<string> endpointProtocolVersion_ {};
    // The protocol that is used by the backend service. Default value: HTTP. Valid values:
    // 
    // *   **HTTP**
    // *   **HTTPS**
    // 
    // > *   You can set this parameter only when the listener that is associated with the endpoint group uses **HTTP** or **HTTPS**.
    // >*   For an **HTTP** listener, the backend service protocol must be **HTTP**.
    shared_ptr<string> endpointRequestProtocol_ {};
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> healthCheckEnabled_ {};
    shared_ptr<string> healthCheckHost_ {};
    // The interval at which health checks are performed. Unit: seconds.
    shared_ptr<int32_t> healthCheckIntervalSeconds_ {};
    // The path to which to send health check requests.
    shared_ptr<string> healthCheckPath_ {};
    // The port that is used for health checks.
    shared_ptr<int32_t> healthCheckPort_ {};
    // The protocol over which to send health check requests. Valid values:
    // 
    // *   **tcp** or **TCP**
    // *   **http** or **HTTP**
    // *   **https** or **HTTPS**
    shared_ptr<string> healthCheckProtocol_ {};
    // The ID of the listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The name of the endpoint group.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    // The port mappings.
    shared_ptr<vector<CreateEndpointGroupRequest::PortOverrides>> portOverrides_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Tags of GA instances.
    shared_ptr<vector<CreateEndpointGroupRequest::Tag>> tag_ {};
    // The number of consecutive health check failures that must occur before a healthy endpoint group is considered unhealthy, or the number of consecutive health check successes that must occur before an unhealthy endpoint group is considered healthy.
    // 
    // Valid values: **2** to **10**. Default value: **3**.
    shared_ptr<int32_t> thresholdCount_ {};
    // The traffic ratio for the endpoint group when the specified listener is associated with multiple endpoint groups.
    // 
    // Valid values: **1** to **100**.
    shared_ptr<int32_t> trafficPercentage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
