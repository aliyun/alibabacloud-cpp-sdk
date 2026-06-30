// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENDPOINTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENDPOINTGROUPSREQUEST_HPP_
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
  class UpdateEndpointGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateEndpointGroupsRequest() = default ;
    UpdateEndpointGroupsRequest(const UpdateEndpointGroupsRequest &) = default ;
    UpdateEndpointGroupsRequest(UpdateEndpointGroupsRequest &&) = default ;
    UpdateEndpointGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEndpointGroupsRequest() = default ;
    UpdateEndpointGroupsRequest& operator=(const UpdateEndpointGroupsRequest &) = default ;
    UpdateEndpointGroupsRequest& operator=(UpdateEndpointGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointGroupConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EnableClientIPPreservationProxyProtocol, enableClientIPPreservationProxyProtocol_);
        DARABONBA_PTR_TO_JSON(EnableClientIPPreservationToa, enableClientIPPreservationToa_);
        DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_TO_JSON(EndpointGroupName, endpointGroupName_);
        DARABONBA_PTR_TO_JSON(EndpointIpVersion, endpointIpVersion_);
        DARABONBA_PTR_TO_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
        DARABONBA_PTR_TO_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
        DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_TO_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
        DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
        DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
        DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableClientIPPreservationProxyProtocol, enableClientIPPreservationProxyProtocol_);
        DARABONBA_PTR_FROM_JSON(EnableClientIPPreservationToa, enableClientIPPreservationToa_);
        DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupName, endpointGroupName_);
        DARABONBA_PTR_FROM_JSON(EndpointIpVersion, endpointIpVersion_);
        DARABONBA_PTR_FROM_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
        DARABONBA_PTR_FROM_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
        DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_FROM_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_FROM_JSON(PortOverrides, portOverrides_);
        DARABONBA_PTR_FROM_JSON(ThresholdCount, thresholdCount_);
        DARABONBA_PTR_FROM_JSON(TrafficPercentage, trafficPercentage_);
      };
      EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations(EndpointGroupConfigurations &&) = default ;
      EndpointGroupConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations& operator=(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations& operator=(EndpointGroupConfigurations &&) = default ;
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
        inline int64_t getEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(endpointPort_, 0L) };
        inline PortOverrides& setEndpointPort(int64_t endpointPort) { DARABONBA_PTR_SET_VALUE(endpointPort_, endpointPort) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int64_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0L) };
        inline PortOverrides& setListenerPort(int64_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      protected:
        // The endpoint port.
        // 
        // Valid values: **1** to **65499**.
        shared_ptr<int64_t> endpointPort_ {};
        // The listener port.
        // 
        // Valid values: **1** to **65499**.
        // 
        // > - For TCP listeners, virtual endpoint groups do not support port mapping. If a virtual endpoint group already exists under the listener, you cannot configure port mapping for the default endpoint group. If port mapping is already configured for the default endpoint group, you cannot add a virtual endpoint group.
        // >
        // > - After you configure port mapping, the following limits apply to subsequent listener modifications: You cannot change the listener protocol, except for changing it between HTTP and HTTPS.
        // >
        // > - Listener port: The modified listener port range must include all listener ports that are currently mapped. For example, if the listener port range is 80-82 and the ports are mapped to endpoint ports 100-102, you cannot change the listener port range to 80-81.
        shared_ptr<int64_t> listenerPort_ {};
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
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline EndpointConfigurations& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<vector<string>> apiKeys_ {};
        // Specifies whether to preserve client IP addresses. Valid values:
        // 
        // - **true**: preserves client IP addresses.
        // 
        // - **false** (default): does not preserve client IP addresses.
        // 
        // > * By default, client IP address preservation is disabled for endpoint groups of TCP and UDP listeners. You can enable it based on your business needs.
        // >
        // > * Client IP address preservation is enabled by default for endpoint groups of HTTP and HTTPS listeners. The client IP addresses are retrieved from the X-Forwarded-For header field. You cannot disable this feature.
        // >
        // > * EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
        // >
        // > * For more information, see [](t1863665.xdita#).
        shared_ptr<bool> enableClientIPPreservation_ {};
        // Specifies whether to use the Proxy Protocol to preserve client IP addresses. Valid values:
        // 
        // - **true**: uses the Proxy Protocol.
        // 
        // - **false** (default): does not use the Proxy Protocol.
        // 
        // > * This parameter is available only for endpoint groups of TCP listeners.
        // >
        // > * EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
        // >
        // > * For more information, see [](t1863665.xdita#).
        shared_ptr<bool> enableProxyProtocol_ {};
        // The IP address, domain name, or instance ID of the endpoint, based on the value of Type.
        // 
        // This parameter is required.
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> provider_ {};
        // The private IP address of the ENI.
        // 
        // > - This parameter is available only when the endpoint type is ENI. You can specify this parameter. If you do not specify this parameter, the primary private IP address of the ENI is used.
        shared_ptr<string> subAddress_ {};
        // The type of the endpoint.
        // 
        // - **Domain**: a custom domain name.
        // 
        // - **Ip**: a custom IP address.
        // 
        // - **IpTarget**: a custom private IP address.
        // 
        // - **PublicIp**: an Alibaba Cloud public IP address.
        // 
        // - **ECS**: an Alibaba Cloud Elastic Compute Service (ECS) instance.
        // 
        // - **SLB**: an Alibaba Cloud Server Load Balancer (SLB) instance.
        // 
        // - **ALB**: an Alibaba Cloud Application Load Balancer (ALB) instance.
        // 
        // - **OSS**: an Alibaba Cloud Object Storage Service (OSS) bucket.
        // 
        // - **ENI**: an Alibaba Cloud Elastic Network Interface (ENI).
        // 
        // - **NLB**: an Alibaba Cloud Network Load Balancer (NLB) instance.
        // 
        // > * If you set the endpoint type to **ECS**, **ENI**, **SLB**, **NLB**, or **IpTarget**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaVpcEndpoint.
        // >
        // > * If you set the endpoint type to **ALB**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaAlb.
        // >
        // > * If you set the endpoint type to **OSS**, and the service-linked role does not exist, the system automatically creates a service-linked role named AliyunServiceRoleForGaOss.
        // >
        // > > For more information, see [](t1963894.xdita#).
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
        // The list of vSwitches in the VPC.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The ID of the virtual private cloud (VPC).
        // 
        // You can specify at most one VPC ID for an endpoint group that is associated with a listener that uses smart routing.
        // 
        // > This parameter is required and takes effect only when the endpoint type is **IpTarget**.
        shared_ptr<string> vpcId_ {};
        // The weight of the endpoint.
        // 
        // Valid values: **0** to **255**.
        // 
        // > If you set the weight of an endpoint to 0, GA stops distributing traffic to the endpoint. Handle this with care.
        // 
        // This parameter is required.
        shared_ptr<int64_t> weight_ {};
      };

      virtual bool empty() const override { return this->enableClientIPPreservationProxyProtocol_ == nullptr
        && this->enableClientIPPreservationToa_ == nullptr && this->endpointConfigurations_ == nullptr && this->endpointGroupDescription_ == nullptr && this->endpointGroupId_ == nullptr && this->endpointGroupName_ == nullptr
        && this->endpointIpVersion_ == nullptr && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr
        && this->healthCheckIntervalSeconds_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr && this->portOverrides_ == nullptr
        && this->thresholdCount_ == nullptr && this->trafficPercentage_ == nullptr; };
      // enableClientIPPreservationProxyProtocol Field Functions 
      bool hasEnableClientIPPreservationProxyProtocol() const { return this->enableClientIPPreservationProxyProtocol_ != nullptr;};
      void deleteEnableClientIPPreservationProxyProtocol() { this->enableClientIPPreservationProxyProtocol_ = nullptr;};
      inline bool getEnableClientIPPreservationProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableClientIPPreservationProxyProtocol_, false) };
      inline EndpointGroupConfigurations& setEnableClientIPPreservationProxyProtocol(bool enableClientIPPreservationProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableClientIPPreservationProxyProtocol_, enableClientIPPreservationProxyProtocol) };


      // enableClientIPPreservationToa Field Functions 
      bool hasEnableClientIPPreservationToa() const { return this->enableClientIPPreservationToa_ != nullptr;};
      void deleteEnableClientIPPreservationToa() { this->enableClientIPPreservationToa_ = nullptr;};
      inline bool getEnableClientIPPreservationToa() const { DARABONBA_PTR_GET_DEFAULT(enableClientIPPreservationToa_, false) };
      inline EndpointGroupConfigurations& setEnableClientIPPreservationToa(bool enableClientIPPreservationToa) { DARABONBA_PTR_SET_VALUE(enableClientIPPreservationToa_, enableClientIPPreservationToa) };


      // endpointConfigurations Field Functions 
      bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
      void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline vector<EndpointGroupConfigurations::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(const vector<EndpointGroupConfigurations::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(vector<EndpointGroupConfigurations::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


      // endpointGroupDescription Field Functions 
      bool hasEndpointGroupDescription() const { return this->endpointGroupDescription_ != nullptr;};
      void deleteEndpointGroupDescription() { this->endpointGroupDescription_ = nullptr;};
      inline string getEndpointGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupDescription_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupDescription(string endpointGroupDescription) { DARABONBA_PTR_SET_VALUE(endpointGroupDescription_, endpointGroupDescription) };


      // endpointGroupId Field Functions 
      bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
      void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
      inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


      // endpointGroupName Field Functions 
      bool hasEndpointGroupName() const { return this->endpointGroupName_ != nullptr;};
      void deleteEndpointGroupName() { this->endpointGroupName_ = nullptr;};
      inline string getEndpointGroupName() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupName_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupName(string endpointGroupName) { DARABONBA_PTR_SET_VALUE(endpointGroupName_, endpointGroupName) };


      // endpointIpVersion Field Functions 
      bool hasEndpointIpVersion() const { return this->endpointIpVersion_ != nullptr;};
      void deleteEndpointIpVersion() { this->endpointIpVersion_ = nullptr;};
      inline string getEndpointIpVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointIpVersion_, "") };
      inline EndpointGroupConfigurations& setEndpointIpVersion(string endpointIpVersion) { DARABONBA_PTR_SET_VALUE(endpointIpVersion_, endpointIpVersion) };


      // endpointProtocolVersion Field Functions 
      bool hasEndpointProtocolVersion() const { return this->endpointProtocolVersion_ != nullptr;};
      void deleteEndpointProtocolVersion() { this->endpointProtocolVersion_ = nullptr;};
      inline string getEndpointProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointProtocolVersion_, "") };
      inline EndpointGroupConfigurations& setEndpointProtocolVersion(string endpointProtocolVersion) { DARABONBA_PTR_SET_VALUE(endpointProtocolVersion_, endpointProtocolVersion) };


      // endpointRequestProtocol Field Functions 
      bool hasEndpointRequestProtocol() const { return this->endpointRequestProtocol_ != nullptr;};
      void deleteEndpointRequestProtocol() { this->endpointRequestProtocol_ = nullptr;};
      inline string getEndpointRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(endpointRequestProtocol_, "") };
      inline EndpointGroupConfigurations& setEndpointRequestProtocol(string endpointRequestProtocol) { DARABONBA_PTR_SET_VALUE(endpointRequestProtocol_, endpointRequestProtocol) };


      // healthCheckEnabled Field Functions 
      bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
      void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
      inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
      inline EndpointGroupConfigurations& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


      // healthCheckHost Field Functions 
      bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
      void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
      inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
      inline EndpointGroupConfigurations& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


      // healthCheckIntervalSeconds Field Functions 
      bool hasHealthCheckIntervalSeconds() const { return this->healthCheckIntervalSeconds_ != nullptr;};
      void deleteHealthCheckIntervalSeconds() { this->healthCheckIntervalSeconds_ = nullptr;};
      inline int64_t getHealthCheckIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(healthCheckIntervalSeconds_, 0L) };
      inline EndpointGroupConfigurations& setHealthCheckIntervalSeconds(int64_t healthCheckIntervalSeconds) { DARABONBA_PTR_SET_VALUE(healthCheckIntervalSeconds_, healthCheckIntervalSeconds) };


      // healthCheckPath Field Functions 
      bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
      void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
      inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
      inline EndpointGroupConfigurations& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


      // healthCheckPort Field Functions 
      bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
      void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
      inline int64_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0L) };
      inline EndpointGroupConfigurations& setHealthCheckPort(int64_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


      // healthCheckProtocol Field Functions 
      bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
      void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
      inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
      inline EndpointGroupConfigurations& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


      // portOverrides Field Functions 
      bool hasPortOverrides() const { return this->portOverrides_ != nullptr;};
      void deletePortOverrides() { this->portOverrides_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::PortOverrides> & getPortOverrides() const { DARABONBA_PTR_GET_CONST(portOverrides_, vector<EndpointGroupConfigurations::PortOverrides>) };
      inline vector<EndpointGroupConfigurations::PortOverrides> getPortOverrides() { DARABONBA_PTR_GET(portOverrides_, vector<EndpointGroupConfigurations::PortOverrides>) };
      inline EndpointGroupConfigurations& setPortOverrides(const vector<EndpointGroupConfigurations::PortOverrides> & portOverrides) { DARABONBA_PTR_SET_VALUE(portOverrides_, portOverrides) };
      inline EndpointGroupConfigurations& setPortOverrides(vector<EndpointGroupConfigurations::PortOverrides> && portOverrides) { DARABONBA_PTR_SET_RVALUE(portOverrides_, portOverrides) };


      // thresholdCount Field Functions 
      bool hasThresholdCount() const { return this->thresholdCount_ != nullptr;};
      void deleteThresholdCount() { this->thresholdCount_ = nullptr;};
      inline int64_t getThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(thresholdCount_, 0L) };
      inline EndpointGroupConfigurations& setThresholdCount(int64_t thresholdCount) { DARABONBA_PTR_SET_VALUE(thresholdCount_, thresholdCount) };


      // trafficPercentage Field Functions 
      bool hasTrafficPercentage() const { return this->trafficPercentage_ != nullptr;};
      void deleteTrafficPercentage() { this->trafficPercentage_ = nullptr;};
      inline int64_t getTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(trafficPercentage_, 0L) };
      inline EndpointGroupConfigurations& setTrafficPercentage(int64_t trafficPercentage) { DARABONBA_PTR_SET_VALUE(trafficPercentage_, trafficPercentage) };


    protected:
      // Specifies whether to use the Proxy Protocol to preserve client IP addresses. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> enableClientIPPreservationProxyProtocol_ {};
      // Specifies whether to use the TCP Option Address (TOA) module to preserve client IP addresses. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> enableClientIPPreservationToa_ {};
      // The configurations of the endpoint.
      shared_ptr<vector<EndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The description of the endpoint group.
      // 
      // The description can be up to 200 characters in length and cannot start with http\\:// or https\\://.
      shared_ptr<string> endpointGroupDescription_ {};
      // The ID of the endpoint group.
      // 
      // This parameter is required.
      shared_ptr<string> endpointGroupId_ {};
      // The name of the endpoint group.
      // 
      // The name must be 1 to 128 characters in length, start with a letter or a Chinese character, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
      shared_ptr<string> endpointGroupName_ {};
      shared_ptr<string> endpointIpVersion_ {};
      // The version of the backend service protocol for endpoints in a listener that uses smart routing. Valid values:
      // 
      // - **HTTP1.1** (default): HTTP/1.1
      // 
      // - **HTTP2**: HTTP/2
      // 
      // > This parameter is available only when you set EndpointRequestProtocol to HTTPS.
      shared_ptr<string> endpointProtocolVersion_ {};
      // The protocol of the backend service. Valid values:
      // 
      // - **HTTP**: HTTP
      // 
      // - **HTTPS**: HTTPS
      // 
      // > * You can set this parameter only when you create an endpoint group for an HTTP or HTTPS listener.
      // >
      // > * For an HTTP listener, the backend service protocol must be HTTP.
      shared_ptr<string> endpointRequestProtocol_ {};
      // Specifies whether to enable the health check feature.
      // 
      // - **true**: enables the health check feature.
      // 
      // - **false** (default): disables the health check feature.
      shared_ptr<bool> healthCheckEnabled_ {};
      shared_ptr<string> healthCheckHost_ {};
      // The interval between two consecutive health checks. Unit: seconds. Valid values: **1** to **50**.
      shared_ptr<int64_t> healthCheckIntervalSeconds_ {};
      // The path of the health check.
      shared_ptr<string> healthCheckPath_ {};
      // The port that is used for health checks.
      // 
      // Valid values: **1** to **65535**.
      shared_ptr<int64_t> healthCheckPort_ {};
      // The protocol that is used for health checks.
      // 
      // - **tcp** or **TCP**: TCP
      // 
      // - **http** or **HTTP**: HTTP
      // 
      // - **https** or **HTTPS**: HTTPS
      shared_ptr<string> healthCheckProtocol_ {};
      // The port mapping.
      shared_ptr<vector<EndpointGroupConfigurations::PortOverrides>> portOverrides_ {};
      // The number of consecutive health checks that an endpoint must pass to be considered healthy, or fail to be considered unhealthy.
      // 
      // Valid values: **2** to **10**.
      shared_ptr<int64_t> thresholdCount_ {};
      // The traffic distribution ratio. If a listener is associated with multiple endpoint groups, you can specify this parameter to distribute traffic to the endpoint groups.
      // 
      // Valid values: **1** to **100**.
      shared_ptr<int64_t> trafficPercentage_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->endpointGroupConfigurations_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEndpointGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateEndpointGroupsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupConfigurations Field Functions 
    bool hasEndpointGroupConfigurations() const { return this->endpointGroupConfigurations_ != nullptr;};
    void deleteEndpointGroupConfigurations() { this->endpointGroupConfigurations_ = nullptr;};
    inline const vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> & getEndpointGroupConfigurations() const { DARABONBA_PTR_GET_CONST(endpointGroupConfigurations_, vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> getEndpointGroupConfigurations() { DARABONBA_PTR_GET(endpointGroupConfigurations_, vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline UpdateEndpointGroupsRequest& setEndpointGroupConfigurations(const vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> & endpointGroupConfigurations) { DARABONBA_PTR_SET_VALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };
    inline UpdateEndpointGroupsRequest& setEndpointGroupConfigurations(vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations> && endpointGroupConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateEndpointGroupsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEndpointGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a value for this parameter on your client. Make sure that the value is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, a 2xx HTTP status code is returned.
    // 
    // - **false** (default): sends the request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The configurations of the endpoint group.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateEndpointGroupsRequest::EndpointGroupConfigurations>> endpointGroupConfigurations_ {};
    // The ID of the listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
