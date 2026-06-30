// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENDPOINTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENDPOINTGROUPREQUEST_HPP_
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
  class UpdateEndpointGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEndpointGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_TO_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_TO_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_TO_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_TO_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEndpointGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
      DARABONBA_PTR_FROM_JSON(EndpointIpVersion, endpointIpVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
      DARABONBA_PTR_FROM_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
      DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_FROM_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortOverrides, portOverrides_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ThresholdCount, thresholdCount_);
      DARABONBA_PTR_FROM_JSON(TrafficPercentage, trafficPercentage_);
    };
    UpdateEndpointGroupRequest() = default ;
    UpdateEndpointGroupRequest(const UpdateEndpointGroupRequest &) = default ;
    UpdateEndpointGroupRequest(UpdateEndpointGroupRequest &&) = default ;
    UpdateEndpointGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEndpointGroupRequest() = default ;
    UpdateEndpointGroupRequest& operator=(const UpdateEndpointGroupRequest &) = default ;
    UpdateEndpointGroupRequest& operator=(UpdateEndpointGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The endpoint port in the port override settings.
      shared_ptr<int32_t> endpointPort_ {};
      // The listener port in the port override settings.
      // 
      // > - For TCP listeners, virtual endpoint groups do not support port overrides. If a listener is already associated with a virtual endpoint group, you cannot configure port overrides for the default endpoint group. If the default endpoint group has port overrides configured, you cannot add a virtual endpoint group.
      // >
      // > - After you configure port overrides, you can change the listener protocol only between HTTP and HTTPS.
      // >
      // > - The updated listener port range must include all listener ports in the configured port overrides. For example, if the listener port range is 80-82 and port overrides are configured to map the ports to endpoint ports 100-102, you cannot update the listener port range to 80-81.
      shared_ptr<int32_t> listenerPort_ {};
    };

    class EndpointConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
        DARABONBA_PTR_TO_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
        DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(SubAddress, subAddress_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
        DARABONBA_PTR_FROM_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
        DARABONBA_PTR_FROM_JSON(EnableProxyProtocol, enableProxyProtocol_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
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
      virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->enableClientIPPreservation_ == nullptr && this->enableProxyProtocol_ == nullptr && this->endpoint_ == nullptr && this->provider_ == nullptr && this->subAddress_ == nullptr
        && this->type_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->weight_ == nullptr; };
      // apiKeys Field Functions 
      bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
      void deleteApiKeys() { this->apiKeys_ = nullptr;};
      inline const vector<string> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<string>) };
      inline vector<string> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<string>) };
      inline EndpointConfigurations& setApiKeys(const vector<string> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
      inline EndpointConfigurations& setApiKeys(vector<string> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


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


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline EndpointConfigurations& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


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
      shared_ptr<vector<string>> apiKeys_ {};
      // Specifies whether to preserve client source IP addresses. Valid values:
      // 
      // - **true**: Preserves client source IP addresses.
      // 
      // - **false** (default): Does not preserve client source IP addresses.
      // 
      // > * For endpoint groups of TCP or UDP listeners, this feature is disabled by default but can be enabled if needed.
      // >
      // > * For endpoint groups of HTTP or HTTPS listeners, client source IP addresses are preserved by default. The client IP addresses are retrieved from the X-Forwarded-For header. You cannot disable this feature.
      // >
      // > * You cannot set both `EnableClientIPPreservation` and `EnableProxyProtocol` to `true`.
      // >
      // > * For more information, see [preserve client source IP addresses](https://help.aliyun.com/document_detail/158080.html).
      shared_ptr<bool> enableClientIPPreservation_ {};
      // Specifies whether to use the Proxy Protocol to preserve client source IP addresses. Valid values:
      // 
      // - **true**: Preserves client source IP addresses.
      // 
      // - **false** (default): Does not preserve client source IP addresses.
      // 
      // > * You can configure this parameter only for endpoint groups of TCP listeners.
      // >
      // > * You cannot set both `EnableClientIPPreservation` and `EnableProxyProtocol` to `true`.
      // >
      // > * For more information, see [preserve client source IP addresses](https://help.aliyun.com/document_detail/158080.html).
      shared_ptr<bool> enableProxyProtocol_ {};
      // Enter an IP address, a domain name, or an instance ID based on the value of the `Type` parameter.
      // 
      // This parameter is required.
      shared_ptr<string> endpoint_ {};
      shared_ptr<string> provider_ {};
      // The private IP address of the elastic network interface.
      // 
      // > If the endpoint type is **ENI**, you can specify this parameter. If you omit this parameter, the primary private IP address of the ENI is used.
      shared_ptr<string> subAddress_ {};
      // The type of endpoint. Valid values:
      // 
      // - **Domain**: a custom domain name.
      // 
      // - **Ip**: a custom IP address.
      // 
      // - **IpTarget**: a custom private IP address.
      // 
      // - **PublicIp**: an Alibaba Cloud public IP address.
      // 
      // - **ECS**: an ECS instance.
      // 
      // - **SLB**: an SLB instance.
      // 
      // - **ALB**: an ALB instance.
      // 
      // - **OSS**: an OSS instance.
      // 
      // - **ENI**: an elastic network interface.
      // 
      // - **NLB**: an NLB instance.
      // 
      // > * If the endpoint type is **ECS**, **ENI**, **SLB**, or **IpTarget**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaVpcEndpoint.
      // >
      // > * If the endpoint type is **ALB**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaAlb.
      // >
      // > * If the endpoint type is **OSS**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaOss.
      // >
      // > * If the endpoint type is **NLB**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaNlb.
      // >
      // > > For more information, see [service-linked roles](https://help.aliyun.com/document_detail/178360.html).
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // A list of vSwitches in the VPC.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The ID of the VPC.
      // 
      // You can specify at most one VPC ID for an endpoint group that is associated with an intelligent routing listener.
      // 
      // > This parameter is required only when the endpoint type is **IpTarget**.
      shared_ptr<string> vpcId_ {};
      // The weight of the endpoint.
      // 
      // Valid values: **0** to **255**.
      // 
      // > If you set the weight of an endpoint to 0, Global Accelerator stops distributing traffic to the endpoint. Proceed with caution.
      // 
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->endpointConfigurations_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointIpVersion_ == nullptr
        && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckIntervalSeconds_ == nullptr
        && this->healthCheckPath_ == nullptr && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr && this->name_ == nullptr && this->portOverrides_ == nullptr
        && this->regionId_ == nullptr && this->thresholdCount_ == nullptr && this->trafficPercentage_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEndpointGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEndpointGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointConfigurations Field Functions 
    bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
    void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
    inline const vector<UpdateEndpointGroupRequest::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<UpdateEndpointGroupRequest::EndpointConfigurations>) };
    inline vector<UpdateEndpointGroupRequest::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<UpdateEndpointGroupRequest::EndpointConfigurations>) };
    inline UpdateEndpointGroupRequest& setEndpointConfigurations(const vector<UpdateEndpointGroupRequest::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
    inline UpdateEndpointGroupRequest& setEndpointConfigurations(vector<UpdateEndpointGroupRequest::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline UpdateEndpointGroupRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointGroupRegion Field Functions 
    bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
    void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
    inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
    inline UpdateEndpointGroupRequest& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


    // endpointIpVersion Field Functions 
    bool hasEndpointIpVersion() const { return this->endpointIpVersion_ != nullptr;};
    void deleteEndpointIpVersion() { this->endpointIpVersion_ = nullptr;};
    inline string getEndpointIpVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointIpVersion_, "") };
    inline UpdateEndpointGroupRequest& setEndpointIpVersion(string endpointIpVersion) { DARABONBA_PTR_SET_VALUE(endpointIpVersion_, endpointIpVersion) };


    // endpointProtocolVersion Field Functions 
    bool hasEndpointProtocolVersion() const { return this->endpointProtocolVersion_ != nullptr;};
    void deleteEndpointProtocolVersion() { this->endpointProtocolVersion_ = nullptr;};
    inline string getEndpointProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointProtocolVersion_, "") };
    inline UpdateEndpointGroupRequest& setEndpointProtocolVersion(string endpointProtocolVersion) { DARABONBA_PTR_SET_VALUE(endpointProtocolVersion_, endpointProtocolVersion) };


    // endpointRequestProtocol Field Functions 
    bool hasEndpointRequestProtocol() const { return this->endpointRequestProtocol_ != nullptr;};
    void deleteEndpointRequestProtocol() { this->endpointRequestProtocol_ = nullptr;};
    inline string getEndpointRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(endpointRequestProtocol_, "") };
    inline UpdateEndpointGroupRequest& setEndpointRequestProtocol(string endpointRequestProtocol) { DARABONBA_PTR_SET_VALUE(endpointRequestProtocol_, endpointRequestProtocol) };


    // healthCheckEnabled Field Functions 
    bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
    void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
    inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
    inline UpdateEndpointGroupRequest& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline UpdateEndpointGroupRequest& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckIntervalSeconds Field Functions 
    bool hasHealthCheckIntervalSeconds() const { return this->healthCheckIntervalSeconds_ != nullptr;};
    void deleteHealthCheckIntervalSeconds() { this->healthCheckIntervalSeconds_ = nullptr;};
    inline int32_t getHealthCheckIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(healthCheckIntervalSeconds_, 0) };
    inline UpdateEndpointGroupRequest& setHealthCheckIntervalSeconds(int32_t healthCheckIntervalSeconds) { DARABONBA_PTR_SET_VALUE(healthCheckIntervalSeconds_, healthCheckIntervalSeconds) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline UpdateEndpointGroupRequest& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline UpdateEndpointGroupRequest& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline UpdateEndpointGroupRequest& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEndpointGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portOverrides Field Functions 
    bool hasPortOverrides() const { return this->portOverrides_ != nullptr;};
    void deletePortOverrides() { this->portOverrides_ = nullptr;};
    inline const vector<UpdateEndpointGroupRequest::PortOverrides> & getPortOverrides() const { DARABONBA_PTR_GET_CONST(portOverrides_, vector<UpdateEndpointGroupRequest::PortOverrides>) };
    inline vector<UpdateEndpointGroupRequest::PortOverrides> getPortOverrides() { DARABONBA_PTR_GET(portOverrides_, vector<UpdateEndpointGroupRequest::PortOverrides>) };
    inline UpdateEndpointGroupRequest& setPortOverrides(const vector<UpdateEndpointGroupRequest::PortOverrides> & portOverrides) { DARABONBA_PTR_SET_VALUE(portOverrides_, portOverrides) };
    inline UpdateEndpointGroupRequest& setPortOverrides(vector<UpdateEndpointGroupRequest::PortOverrides> && portOverrides) { DARABONBA_PTR_SET_RVALUE(portOverrides_, portOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEndpointGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // thresholdCount Field Functions 
    bool hasThresholdCount() const { return this->thresholdCount_ != nullptr;};
    void deleteThresholdCount() { this->thresholdCount_ = nullptr;};
    inline int32_t getThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(thresholdCount_, 0) };
    inline UpdateEndpointGroupRequest& setThresholdCount(int32_t thresholdCount) { DARABONBA_PTR_SET_VALUE(thresholdCount_, thresholdCount) };


    // trafficPercentage Field Functions 
    bool hasTrafficPercentage() const { return this->trafficPercentage_ != nullptr;};
    void deleteTrafficPercentage() { this->trafficPercentage_ = nullptr;};
    inline int32_t getTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(trafficPercentage_, 0) };
    inline UpdateEndpointGroupRequest& setTrafficPercentage(int32_t trafficPercentage) { DARABONBA_PTR_SET_VALUE(trafficPercentage_, trafficPercentage) };


  protected:
    // A client-generated token to ensure the idempotence of the request.
    // 
    // The token must be unique across requests and can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** is unique for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the endpoint group.
    // 
    // The description can be up to 200 characters long and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The configurations of the endpoints.
    shared_ptr<vector<UpdateEndpointGroupRequest::EndpointConfigurations>> endpointConfigurations_ {};
    // The ID of the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The ID of the region where the endpoint group is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupRegion_ {};
    // Specifies the IP protocol that GA uses to communicate with endpoints. Valid values: ● **IPv4** (default): Use IPv4. ● **IPv6**: Use IPv6. ● **ProtocolAffinity**: Use the same IP protocol as the client request.
    shared_ptr<string> endpointIpVersion_ {};
    // The version of the backend service protocol. Valid values:
    // 
    // - **HTTP1.1**
    // 
    // - **HTTP2**
    // 
    // > You can configure this parameter only when `EndpointRequestProtocol` is set to HTTPS.
    shared_ptr<string> endpointProtocolVersion_ {};
    // The backend service protocol. Valid values:
    // 
    // - **HTTP**
    // 
    // - **HTTPS**
    // 
    // > * You can configure this parameter only for endpoint groups of HTTP or HTTPS listeners.
    // >
    // > * For an HTTP listener, the backend service protocol must be HTTP.
    shared_ptr<string> endpointRequestProtocol_ {};
    // Specifies whether to enable health checks. Valid values:
    // 
    // - **true**: Enables health checks.
    // 
    // - **false** (default): Disables health checks.
    shared_ptr<bool> healthCheckEnabled_ {};
    // The domain name for the health check.
    shared_ptr<string> healthCheckHost_ {};
    // The interval between health checks, in seconds. Valid values: **1** to **50**.
    shared_ptr<int32_t> healthCheckIntervalSeconds_ {};
    // The path for health checks.
    shared_ptr<string> healthCheckPath_ {};
    // The port used for health checks. Valid values: **1** to **65535**.
    shared_ptr<int32_t> healthCheckPort_ {};
    // The protocol for health checks. Valid values:
    // 
    // - **tcp** or **TCP**
    // 
    // - **http** or **HTTP**
    // 
    // - **https** or **HTTPS**
    shared_ptr<string> healthCheckProtocol_ {};
    // The name of the endpoint group.
    // 
    // The name must be 1 to 128 characters long, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The port override settings.
    shared_ptr<vector<UpdateEndpointGroupRequest::PortOverrides>> portOverrides_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The number of consecutive successful or failed health checks required to change an endpoint\\"s health status.
    // 
    // Valid values: **2** to **10**.
    shared_ptr<int32_t> thresholdCount_ {};
    // The weight of the endpoint group when the listener is associated with multiple endpoint groups.
    shared_ptr<int32_t> trafficPercentage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
