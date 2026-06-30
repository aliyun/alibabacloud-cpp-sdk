// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
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
  class CreateListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(ClientAffinity, clientAffinity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomRoutingEndpointGroupConfigurations, customRoutingEndpointGroupConfigurations_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_TO_JSON(HttpVersion, httpVersion_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(ClientAffinity, clientAffinity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomRoutingEndpointGroupConfigurations, customRoutingEndpointGroupConfigurations_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_FROM_JSON(HttpVersion, httpVersion_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    CreateListenerRequest() = default ;
    CreateListenerRequest(const CreateListenerRequest &) = default ;
    CreateListenerRequest(CreateListenerRequest &&) = default ;
    CreateListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequest() = default ;
    CreateListenerRequest& operator=(const CreateListenerRequest &) = default ;
    CreateListenerRequest& operator=(CreateListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class XForwardedForConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const XForwardedForConfig& obj) { 
        DARABONBA_PTR_TO_JSON(XForwardedForGaApEnabled, XForwardedForGaApEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForGaIdEnabled, XForwardedForGaIdEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForPortEnabled, XForwardedForPortEnabled_);
        DARABONBA_PTR_TO_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
        DARABONBA_PTR_TO_JSON(XRealIpEnabled, XRealIpEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, XForwardedForConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(XForwardedForGaApEnabled, XForwardedForGaApEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForGaIdEnabled, XForwardedForGaIdEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForPortEnabled, XForwardedForPortEnabled_);
        DARABONBA_PTR_FROM_JSON(XForwardedForProtoEnabled, XForwardedForProtoEnabled_);
        DARABONBA_PTR_FROM_JSON(XRealIpEnabled, XRealIpEnabled_);
      };
      XForwardedForConfig() = default ;
      XForwardedForConfig(const XForwardedForConfig &) = default ;
      XForwardedForConfig(XForwardedForConfig &&) = default ;
      XForwardedForConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~XForwardedForConfig() = default ;
      XForwardedForConfig& operator=(const XForwardedForConfig &) = default ;
      XForwardedForConfig& operator=(XForwardedForConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->XForwardedForGaApEnabled_ == nullptr
        && this->XForwardedForGaIdEnabled_ == nullptr && this->XForwardedForPortEnabled_ == nullptr && this->XForwardedForProtoEnabled_ == nullptr && this->XRealIpEnabled_ == nullptr; };
      // XForwardedForGaApEnabled Field Functions 
      bool hasXForwardedForGaApEnabled() const { return this->XForwardedForGaApEnabled_ != nullptr;};
      void deleteXForwardedForGaApEnabled() { this->XForwardedForGaApEnabled_ = nullptr;};
      inline bool getXForwardedForGaApEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForGaApEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForGaApEnabled(bool XForwardedForGaApEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForGaApEnabled_, XForwardedForGaApEnabled) };


      // XForwardedForGaIdEnabled Field Functions 
      bool hasXForwardedForGaIdEnabled() const { return this->XForwardedForGaIdEnabled_ != nullptr;};
      void deleteXForwardedForGaIdEnabled() { this->XForwardedForGaIdEnabled_ = nullptr;};
      inline bool getXForwardedForGaIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForGaIdEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForGaIdEnabled(bool XForwardedForGaIdEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForGaIdEnabled_, XForwardedForGaIdEnabled) };


      // XForwardedForPortEnabled Field Functions 
      bool hasXForwardedForPortEnabled() const { return this->XForwardedForPortEnabled_ != nullptr;};
      void deleteXForwardedForPortEnabled() { this->XForwardedForPortEnabled_ = nullptr;};
      inline bool getXForwardedForPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForPortEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForPortEnabled(bool XForwardedForPortEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForPortEnabled_, XForwardedForPortEnabled) };


      // XForwardedForProtoEnabled Field Functions 
      bool hasXForwardedForProtoEnabled() const { return this->XForwardedForProtoEnabled_ != nullptr;};
      void deleteXForwardedForProtoEnabled() { this->XForwardedForProtoEnabled_ = nullptr;};
      inline bool getXForwardedForProtoEnabled() const { DARABONBA_PTR_GET_DEFAULT(XForwardedForProtoEnabled_, false) };
      inline XForwardedForConfig& setXForwardedForProtoEnabled(bool XForwardedForProtoEnabled) { DARABONBA_PTR_SET_VALUE(XForwardedForProtoEnabled_, XForwardedForProtoEnabled) };


      // XRealIpEnabled Field Functions 
      bool hasXRealIpEnabled() const { return this->XRealIpEnabled_ != nullptr;};
      void deleteXRealIpEnabled() { this->XRealIpEnabled_ = nullptr;};
      inline bool getXRealIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(XRealIpEnabled_, false) };
      inline XForwardedForConfig& setXRealIpEnabled(bool XRealIpEnabled) { DARABONBA_PTR_SET_VALUE(XRealIpEnabled_, XRealIpEnabled) };


    protected:
      // Specifies whether to use the `GA-AP` header to pass information about the acceleration region to the backend server. Valid values:
      // 
      // - **true**
      // 
      // - **false** (Default)
      // 
      // > This parameter applies only to HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForGaApEnabled_ {};
      // Specifies whether to use the `GA-ID` header to pass the Global Accelerator instance ID to the backend server. Valid values:
      // 
      // - **true**
      // 
      // - **false** (Default)
      // 
      // > This parameter applies only to HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForGaIdEnabled_ {};
      // Specifies whether to use the `GA-X-Forward-Port` header to pass the listener port of the Global Accelerator instance to the backend server. Valid values:
      // 
      // - **true**
      // 
      // - **false** (Default)
      // 
      // > This parameter applies only to HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForPortEnabled_ {};
      // Specifies whether to use the `GA-X-Forward-Proto` header to pass the listener protocol of the Global Accelerator instance to the backend server. Valid values:
      // 
      // - **true**
      // 
      // - **false** (Default)
      // 
      // > This parameter applies only to HTTP and HTTPS listeners.
      shared_ptr<bool> XForwardedForProtoEnabled_ {};
      // Specifies whether to use the `X-Real-IP` header to pass the client\\"s real IP address to the backend server. Valid values:
      // 
      // - **true**
      // 
      // - **false** (Default)
      // 
      // > This parameter applies only to HTTP and HTTPS listeners.
      shared_ptr<bool> XRealIpEnabled_ {};
    };

    class PortRanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
        DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
        DARABONBA_PTR_TO_JSON(ToPort, toPort_);
      };
      friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
        DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
        DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
      };
      PortRanges() = default ;
      PortRanges(const PortRanges &) = default ;
      PortRanges(PortRanges &&) = default ;
      PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRanges() = default ;
      PortRanges& operator=(const PortRanges &) = default ;
      PortRanges& operator=(PortRanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->toPort_ == nullptr; };
      // fromPort Field Functions 
      bool hasFromPort() const { return this->fromPort_ != nullptr;};
      void deleteFromPort() { this->fromPort_ = nullptr;};
      inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
      inline PortRanges& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


      // toPort Field Functions 
      bool hasToPort() const { return this->toPort_ != nullptr;};
      void deleteToPort() { this->toPort_ = nullptr;};
      inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
      inline PortRanges& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


    protected:
      // The first port in the listener range used to receive and forward requests to endpoints.
      // 
      // The port number must be in the range of **1** to **65499**, and the value of **FromPort** must be less than or equal to the value of **ToPort**.
      // 
      // > For HTTP or HTTPS listeners, you can specify only one listener port. In this case, the value of **FromPort** must be the same as the value of **ToPort**.
      // 
      // This parameter is required.
      shared_ptr<int32_t> fromPort_ {};
      // The last port in the listener range used to receive and forward requests to endpoints.
      // 
      // The port number must be in the range of **1** to **65499**, and the value of **FromPort** must be less than or equal to the value of **ToPort**.
      // 
      // > For HTTP or HTTPS listeners, you can specify only one listener port. In this case, the value of **FromPort** must be the same as the value of **ToPort**.
      // 
      // This parameter is required.
      shared_ptr<int32_t> toPort_ {};
    };

    class EndpointGroupConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_TO_JSON(EndpointGroupName, endpointGroupName_);
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
        DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
        DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
        DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupName, endpointGroupName_);
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
        // The endpoint port that is specified in the port mapping.
        // 
        // You can enter a maximum of 5 endpoint ports for port mapping.
        // 
        // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
        // >
        // > - For TCP listeners, you cannot configure a port mapping for a virtual endpoint group. If a virtual endpoint group already exists for the listener, you cannot configure a port mapping for the default endpoint group. If a port mapping is configured for the default endpoint group, you cannot add a virtual endpoint group to the listener.
        // >
        // > - After you configure a port mapping, you cannot modify the listener protocol, except for switching between HTTP and HTTPS.
        // >
        // > - When you modify the listener port range, make sure that the new port range includes all listener ports that are specified in the port mapping. For example, if the listener port range is 80-82 and the listener ports are mapped to the endpoint ports 100-102, you cannot change the listener port range to 80-81.
        shared_ptr<int64_t> endpointPort_ {};
        // The listener port that is specified in the port mapping.
        // 
        // You can enter up to 5 listener ports for port mappings.
        // 
        // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
        // >
        // > - For TCP listeners, you cannot configure a port mapping for a virtual endpoint group. If a virtual endpoint group already exists for the listener, you cannot configure a port mapping for the default endpoint group. If a port mapping is configured for the default endpoint group, you cannot add a virtual endpoint group to the listener.
        // >
        // > - After you configure a port mapping, you cannot modify the listener protocol, except for switching between HTTP and HTTPS.
        // >
        // > - When you modify the listener port range, make sure that the new port range includes all listener ports that are specified in the port mapping. For example, if the listener port range is 80-82 and the listener ports are mapped to the endpoint ports 100-102, you cannot change the listener port range to 80-81.
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
        // Specifies whether to preserve client source IP addresses. Valid values:
        // 
        // - **true**: enables the feature.
        // 
        // - **false** (default): disables the feature.
        // 
        // > * This feature is disabled by default for endpoint groups of TCP or UDP listeners. You can enable it as needed.
        // >
        // > * This feature is enabled by default for endpoint groups of HTTP or HTTPS listeners. Client source IP addresses are retrieved from the `X-Forwarded-For` header. You cannot disable this feature.
        // >
        // > * You cannot set both `EnableClientIPPreservation` and `EnableProxyProtocol` to `true`.
        // >
        // > * For more information, see [Preserve client source IP addresses](https://help.aliyun.com/document_detail/158080.html).
        shared_ptr<bool> enableClientIPPreservation_ {};
        // Specifies whether to use the proxy protocol to preserve client source IP addresses. Valid values:
        // 
        // - **true**: enables the feature.
        // 
        // - **false** (default): disables the feature.
        // 
        // > * You can configure this parameter only for endpoint groups of TCP listeners.
        // >
        // > * You cannot set both `EnableClientIPPreservation` and `EnableProxyProtocol` to `true`.
        // >
        // > * For more information, see [Preserve client source IP addresses](https://help.aliyun.com/document_detail/158080.html).
        shared_ptr<bool> enableProxyProtocol_ {};
        // The IP address or domain name of the endpoint.
        // 
        // In an endpoint group of an intelligent routing listener, you can enter up to 100 IP addresses or domain names of endpoints.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> provider_ {};
        // The private IP address of the ENI.
        // 
        // > If the endpoint type is **ENI**, you can specify this parameter. If you do not specify this parameter, the primary private IP address of the ENI is used.
        shared_ptr<string> subAddress_ {};
        // The type of the endpoint. Valid values:
        // 
        // - **Domain**: a custom domain name.
        // 
        // - **Ip**: a custom IP address.
        // 
        // - **PublicIp**: a public IP address of an Alibaba Cloud service.
        // 
        // - **ECS**: an Elastic Compute Service (ECS) instance.
        // 
        // - **SLB**: a Server Load Balancer (SLB) instance.
        // 
        // - **ALB**: an Application Load Balancer (ALB) instance.
        // 
        // - **OSS**: an Object Storage Service (OSS) bucket.
        // 
        // - **ENI**: an elastic network interface (ENI).
        // 
        // - **NLB**: a Network Load Balancer (NLB) instance.
        // 
        // - **IpTarget**: a custom private IP address.
        // 
        // You can specify up to 100 endpoints in an endpoint group.
        // 
        // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
        // >
        // > - When you add endpoints, Global Accelerator may create service-linked roles to access your resources. The role created depends on the endpoint type:
        // >
        // > -
        // >
        // > -
        // >
        // > -
        // >
        // > > For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/178360.html).
        shared_ptr<string> type_ {};
        // The list of vSwitches in the VPC. You can specify up to two vSwitch IDs.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The ID of the Virtual Private Cloud (VPC).
        // 
        // In an endpoint group of an intelligent routing listener, you can enter a maximum of 1 VPC ID.
        // 
        // > This parameter is required only for **IpTarget** endpoints.
        shared_ptr<string> vpcId_ {};
        // The weight of the endpoint.
        // 
        // Valid values: **0** to **255**.
        // 
        // In an endpoint group for an intelligent routing type listener, you can enter weights for up to 100 endpoints.
        // 
        // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
        // >
        // > - If an endpoint\\"s weight is set to 0, Global Accelerator stops sending traffic to it. Use this setting with caution.
        shared_ptr<int64_t> weight_ {};
      };

      virtual bool empty() const override { return this->endpointConfigurations_ == nullptr
        && this->endpointGroupDescription_ == nullptr && this->endpointGroupName_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointGroupType_ == nullptr && this->endpointIpVersion_ == nullptr
        && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckIntervalSeconds_ == nullptr
        && this->healthCheckPath_ == nullptr && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr && this->portOverrides_ == nullptr && this->thresholdCount_ == nullptr
        && this->trafficPercentage_ == nullptr; };
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


      // endpointGroupName Field Functions 
      bool hasEndpointGroupName() const { return this->endpointGroupName_ != nullptr;};
      void deleteEndpointGroupName() { this->endpointGroupName_ = nullptr;};
      inline string getEndpointGroupName() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupName_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupName(string endpointGroupName) { DARABONBA_PTR_SET_VALUE(endpointGroupName_, endpointGroupName) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // endpointGroupType Field Functions 
      bool hasEndpointGroupType() const { return this->endpointGroupType_ != nullptr;};
      void deleteEndpointGroupType() { this->endpointGroupType_ = nullptr;};
      inline string getEndpointGroupType() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupType_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupType(string endpointGroupType) { DARABONBA_PTR_SET_VALUE(endpointGroupType_, endpointGroupType) };


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
      // The endpoint configurations.
      shared_ptr<vector<EndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The description of the endpoint group.
      // 
      // The description can be up to 200 characters long and cannot contain `http://` or `https://`.
      // 
      // You can enter up to 10 endpoint group descriptions.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<string> endpointGroupDescription_ {};
      // The name of the endpoint group.
      // 
      // The name must be 1 to 128 characters long, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
      // 
      // You can enter up to 10 endpoint group names.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<string> endpointGroupName_ {};
      // The ID of the region where the endpoint group is created.
      // 
      // You can enter up to 10 endpoint group region IDs.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<string> endpointGroupRegion_ {};
      // The type of the endpoint group. Valid values:
      // 
      // - **default** (default): a default endpoint group.
      // 
      // - **virtual**: a virtual endpoint group.
      // 
      // You can enter up to 10 endpoint group types.
      // 
      // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      // >
      // > - You can create virtual endpoint groups only for HTTP or HTTPS listeners.
      shared_ptr<string> endpointGroupType_ {};
      // The IP version used by the backend service. Valid values:
      // 
      // - **IPv4** (default): GA uses only IPv4 addresses to communicate with backend services.
      // 
      // - **IPv6**: GA uses only IPv6 addresses to communicate with backend services.
      // 
      // - **ProtocolAffinity**: GA uses the same IP version as the client request to communicate with backend services.
      shared_ptr<string> endpointIpVersion_ {};
      // The protocol version of the backend service. Valid values:
      // 
      // - **HTTP1.1** (default): HTTP/1.1
      // 
      // - **HTTP2**: HTTP/2
      // 
      // > This parameter is available only when EndpointRequestProtocol is set to HTTPS.
      shared_ptr<string> endpointProtocolVersion_ {};
      // The protocol used by the backend service. Valid values:
      // 
      // - **HTTP** (default)
      // 
      // - **HTTPS**
      // 
      // You can enter up to 10 backend service protocols.
      // 
      // > - This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      // >
      // > - You can configure this parameter only for endpoint groups of HTTP or HTTPS listeners.
      // >
      // > - For an HTTP listener, the backend service protocol must be **HTTP**.
      shared_ptr<string> endpointRequestProtocol_ {};
      // Specifies whether to enable health checks for the endpoint group. Valid values:
      // 
      // - **true**: Enables health checks.
      // 
      // - **false** (Default): Disables health checks.
      // 
      // You can enable health checks for up to 10 endpoint groups.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<bool> healthCheckEnabled_ {};
      // The domain name that is used for health checks.
      shared_ptr<string> healthCheckHost_ {};
      // The health check interval, in seconds.
      // 
      // You can enter up to 10 health check intervals.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<int64_t> healthCheckIntervalSeconds_ {};
      // The path to which health check requests are sent.
      // 
      // You can enter up to 10 health check paths.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<string> healthCheckPath_ {};
      // The port that is used for health checks. Valid values: **1** to **65535**.
      // 
      // You can enter a maximum of 10 ports for health checks.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<int64_t> healthCheckPort_ {};
      // The protocol over which health check requests are sent. Valid values:
      // 
      // - **tcp** or **TCP**: TCP
      // 
      // - **http** or **HTTP**: HTTP
      // 
      // - **https** or **HTTPS**: HTTPS
      // 
      // You can enter up to 10 health check protocols.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<string> healthCheckProtocol_ {};
      // The port mapping. You can specify up to five port mappings.
      shared_ptr<vector<EndpointGroupConfigurations::PortOverrides>> portOverrides_ {};
      // The number of consecutive successful health checks required to mark an endpoint as healthy, or consecutive failed health checks to mark an endpoint as unhealthy.
      // Valid values: **2** to **10**. Default value: **3**.
      // 
      // You can enter up to 10 values for the number of consecutive health checks required to trigger a health status change.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<int64_t> thresholdCount_ {};
      // The traffic distribution ratio. If a standard listener is associated with multiple endpoint groups, this parameter specifies the percentage of traffic that is distributed to each endpoint group.
      // 
      // Valid values: **1** to **100**. Default value: **100**.
      // 
      // You can enter traffic distribution values for up to 10 endpoint groups.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
      shared_ptr<int64_t> trafficPercentage_ {};
    };

    class CustomRoutingEndpointGroupConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomRoutingEndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationConfigurations, destinationConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CustomRoutingEndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationConfigurations, destinationConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      CustomRoutingEndpointGroupConfigurations() = default ;
      CustomRoutingEndpointGroupConfigurations(const CustomRoutingEndpointGroupConfigurations &) = default ;
      CustomRoutingEndpointGroupConfigurations(CustomRoutingEndpointGroupConfigurations &&) = default ;
      CustomRoutingEndpointGroupConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomRoutingEndpointGroupConfigurations() = default ;
      CustomRoutingEndpointGroupConfigurations& operator=(const CustomRoutingEndpointGroupConfigurations &) = default ;
      CustomRoutingEndpointGroupConfigurations& operator=(CustomRoutingEndpointGroupConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EndpointConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(PolicyConfigurations, policyConfigurations_);
          DARABONBA_PTR_TO_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(PolicyConfigurations, policyConfigurations_);
          DARABONBA_PTR_FROM_JSON(TrafficToEndpointPolicy, trafficToEndpointPolicy_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class PolicyConfigurations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PolicyConfigurations& obj) { 
            DARABONBA_PTR_TO_JSON(Address, address_);
            DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
          };
          friend void from_json(const Darabonba::Json& j, PolicyConfigurations& obj) { 
            DARABONBA_PTR_FROM_JSON(Address, address_);
            DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
          };
          PolicyConfigurations() = default ;
          PolicyConfigurations(const PolicyConfigurations &) = default ;
          PolicyConfigurations(PolicyConfigurations &&) = default ;
          PolicyConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PolicyConfigurations() = default ;
          PolicyConfigurations& operator=(const PolicyConfigurations &) = default ;
          PolicyConfigurations& operator=(PolicyConfigurations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PortRanges : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
              DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
              DARABONBA_PTR_TO_JSON(ToPort, toPort_);
            };
            friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
              DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
              DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
            };
            PortRanges() = default ;
            PortRanges(const PortRanges &) = default ;
            PortRanges(PortRanges &&) = default ;
            PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PortRanges() = default ;
            PortRanges& operator=(const PortRanges &) = default ;
            PortRanges& operator=(PortRanges &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->toPort_ == nullptr; };
            // fromPort Field Functions 
            bool hasFromPort() const { return this->fromPort_ != nullptr;};
            void deleteFromPort() { this->fromPort_ = nullptr;};
            inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
            inline PortRanges& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


            // toPort Field Functions 
            bool hasToPort() const { return this->toPort_ != nullptr;};
            void deleteToPort() { this->toPort_ = nullptr;};
            inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
            inline PortRanges& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


          protected:
            // The first port of the destination that is allowed to receive traffic. The port must be within the port range of the backend service.
            // 
            // This parameter is required only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
            // 
            // You can specify up to 20 port ranges for each endpoint, and up to 5 first ports for each destination.
            // 
            // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
            shared_ptr<int32_t> fromPort_ {};
            // The last port of the destination that is allowed to receive traffic. The port must be within the port range of the backend service.
            // 
            // This parameter is required only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
            // 
            // You can specify up to 20 port ranges for each endpoint, and up to 5 last ports for each destination.
            // 
            // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
            shared_ptr<int32_t> toPort_ {};
          };

          virtual bool empty() const override { return this->address_ == nullptr
        && this->portRanges_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
          inline PolicyConfigurations& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


          // portRanges Field Functions 
          bool hasPortRanges() const { return this->portRanges_ != nullptr;};
          void deletePortRanges() { this->portRanges_ = nullptr;};
          inline const vector<PolicyConfigurations::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<PolicyConfigurations::PortRanges>) };
          inline vector<PolicyConfigurations::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<PolicyConfigurations::PortRanges>) };
          inline PolicyConfigurations& setPortRanges(const vector<PolicyConfigurations::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
          inline PolicyConfigurations& setPortRanges(vector<PolicyConfigurations::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


        protected:
          // The IP address of the destination that is allowed to receive traffic.
          // 
          // This parameter is required only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify up to 20 destination IP addresses for each endpoint.
          // 
          // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
          shared_ptr<string> address_ {};
          // The port range of the destination that is allowed to receive traffic. The port range must be within the port range of the backend service.
          // 
          // If you leave this parameter empty, all ports of the destination are allowed.
          // 
          // This parameter is required only when **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify up to 20 port ranges for each endpoint, and up to 5 port ranges for each destination.
          // 
          // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
          shared_ptr<vector<PolicyConfigurations::PortRanges>> portRanges_ {};
        };

        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->policyConfigurations_ == nullptr && this->trafficToEndpointPolicy_ == nullptr && this->type_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline EndpointConfigurations& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // policyConfigurations Field Functions 
        bool hasPolicyConfigurations() const { return this->policyConfigurations_ != nullptr;};
        void deletePolicyConfigurations() { this->policyConfigurations_ = nullptr;};
        inline const vector<EndpointConfigurations::PolicyConfigurations> & getPolicyConfigurations() const { DARABONBA_PTR_GET_CONST(policyConfigurations_, vector<EndpointConfigurations::PolicyConfigurations>) };
        inline vector<EndpointConfigurations::PolicyConfigurations> getPolicyConfigurations() { DARABONBA_PTR_GET(policyConfigurations_, vector<EndpointConfigurations::PolicyConfigurations>) };
        inline EndpointConfigurations& setPolicyConfigurations(const vector<EndpointConfigurations::PolicyConfigurations> & policyConfigurations) { DARABONBA_PTR_SET_VALUE(policyConfigurations_, policyConfigurations) };
        inline EndpointConfigurations& setPolicyConfigurations(vector<EndpointConfigurations::PolicyConfigurations> && policyConfigurations) { DARABONBA_PTR_SET_RVALUE(policyConfigurations_, policyConfigurations) };


        // trafficToEndpointPolicy Field Functions 
        bool hasTrafficToEndpointPolicy() const { return this->trafficToEndpointPolicy_ != nullptr;};
        void deleteTrafficToEndpointPolicy() { this->trafficToEndpointPolicy_ = nullptr;};
        inline string getTrafficToEndpointPolicy() const { DARABONBA_PTR_GET_DEFAULT(trafficToEndpointPolicy_, "") };
        inline EndpointConfigurations& setTrafficToEndpointPolicy(string trafficToEndpointPolicy) { DARABONBA_PTR_SET_VALUE(trafficToEndpointPolicy_, trafficToEndpointPolicy) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EndpointConfigurations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The vSwitch of the custom routing listener.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<string> endpoint_ {};
        // The destination configurations for a custom routing listener.
        // 
        // You can specify up to 20 destinations for each endpoint.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<vector<EndpointConfigurations::PolicyConfigurations>> policyConfigurations_ {};
        // The traffic policy for the backend service of a custom routing listener. Valid values:
        // 
        // - **DenyAll** (default): Denies all traffic to the specified backend service.
        // 
        // - **AllowAll**: Allows all traffic to the specified backend service.
        // 
        // - **AllowCustom**: Allows traffic to specific destinations.
        //   You must specify the IP addresses and port ranges of the allowed destinations. If no port range is specified, all ports of the destination are allowed.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<string> trafficToEndpointPolicy_ {};
        // The type of the backend service for a custom routing listener. Valid value:
        // 
        // **PrivateSubNet** (default): a private CIDR block.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<string> type_ {};
      };

      class DestinationConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DestinationConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
          DARABONBA_PTR_TO_JSON(Protocols, protocols_);
          DARABONBA_PTR_TO_JSON(ToPort, toPort_);
        };
        friend void from_json(const Darabonba::Json& j, DestinationConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
          DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
          DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
        };
        DestinationConfigurations() = default ;
        DestinationConfigurations(const DestinationConfigurations &) = default ;
        DestinationConfigurations(DestinationConfigurations &&) = default ;
        DestinationConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DestinationConfigurations() = default ;
        DestinationConfigurations& operator=(const DestinationConfigurations &) = default ;
        DestinationConfigurations& operator=(DestinationConfigurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->protocols_ == nullptr && this->toPort_ == nullptr; };
        // fromPort Field Functions 
        bool hasFromPort() const { return this->fromPort_ != nullptr;};
        void deleteFromPort() { this->fromPort_ = nullptr;};
        inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
        inline DestinationConfigurations& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


        // protocols Field Functions 
        bool hasProtocols() const { return this->protocols_ != nullptr;};
        void deleteProtocols() { this->protocols_ = nullptr;};
        inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
        inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
        inline DestinationConfigurations& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
        inline DestinationConfigurations& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


        // toPort Field Functions 
        bool hasToPort() const { return this->toPort_ != nullptr;};
        void deleteToPort() { this->toPort_ = nullptr;};
        inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
        inline DestinationConfigurations& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


      protected:
        // The first port of the backend service.
        // 
        // The valid port range is **1** to **65499**. The value of **FromPort** must be less than or equal to the value of **ToPort**.
        // 
        // In each endpoint group for a custom routing type listener, you can enter up to 20 backend service starting ports.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<int32_t> fromPort_ {};
        // The protocols of the backend service.
        // 
        // You can specify up to four backend service protocols for each mapping configuration.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<vector<string>> protocols_ {};
        // The last port of the backend service.
        // 
        // The valid port range is **1** to **65499**. The value of **FromPort** must be less than or equal to the value of **ToPort**.
        // 
        // In each endpoint group of a listener of the custom routing type, you can enter a maximum of 20 backend service ports.
        // 
        // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
        shared_ptr<int32_t> toPort_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationConfigurations_ == nullptr && this->endpointConfigurations_ == nullptr && this->endpointGroupRegion_ == nullptr && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CustomRoutingEndpointGroupConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationConfigurations Field Functions 
      bool hasDestinationConfigurations() const { return this->destinationConfigurations_ != nullptr;};
      void deleteDestinationConfigurations() { this->destinationConfigurations_ = nullptr;};
      inline const vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations> & getDestinationConfigurations() const { DARABONBA_PTR_GET_CONST(destinationConfigurations_, vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations>) };
      inline vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations> getDestinationConfigurations() { DARABONBA_PTR_GET(destinationConfigurations_, vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations>) };
      inline CustomRoutingEndpointGroupConfigurations& setDestinationConfigurations(const vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations> & destinationConfigurations) { DARABONBA_PTR_SET_VALUE(destinationConfigurations_, destinationConfigurations) };
      inline CustomRoutingEndpointGroupConfigurations& setDestinationConfigurations(vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations> && destinationConfigurations) { DARABONBA_PTR_SET_RVALUE(destinationConfigurations_, destinationConfigurations) };


      // endpointConfigurations Field Functions 
      bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
      void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
      inline const vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations>) };
      inline vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations>) };
      inline CustomRoutingEndpointGroupConfigurations& setEndpointConfigurations(const vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
      inline CustomRoutingEndpointGroupConfigurations& setEndpointConfigurations(vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline CustomRoutingEndpointGroupConfigurations& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomRoutingEndpointGroupConfigurations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The description of the endpoint group.
      // 
      // The description can be up to 200 characters long and cannot contain `http://` or `https://`.
      // 
      // You can enter up to 5 endpoint group descriptions.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
      shared_ptr<string> description_ {};
      // The mapping configurations for the endpoint group.
      // 
      // You must specify the port ranges and protocols for the backend service. The settings are mapped to the associated listener port ranges.
      // 
      // You can specify up to 20 mapping configurations for each endpoint group.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
      shared_ptr<vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations>> destinationConfigurations_ {};
      // The endpoint configurations.
      // 
      // You can specify up to 10 endpoints for each endpoint group.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
      shared_ptr<vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The ID of the region where the endpoint group is created.
      // 
      // You can enter up to 5 endpoint group region IDs.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
      shared_ptr<string> endpointGroupRegion_ {};
      // The name of the endpoint group.
      // 
      // The name must be 1 to 128 characters long, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
      // 
      // You can enter up to 5 endpoint group names.
      // 
      // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
      shared_ptr<string> name_ {};
    };

    class Certificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      Certificates() = default ;
      Certificates(const Certificates &) = default ;
      Certificates(Certificates &&) = default ;
      Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificates() = default ;
      Certificates& operator=(const Certificates &) = default ;
      Certificates& operator=(Certificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Certificates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The ID of the SSL certificate.
      // 
      // > This parameter is required only for HTTPS listeners.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->certificates_ == nullptr && this->clientAffinity_ == nullptr && this->clientToken_ == nullptr && this->customRoutingEndpointGroupConfigurations_ == nullptr && this->description_ == nullptr
        && this->endpointGroupConfigurations_ == nullptr && this->httpVersion_ == nullptr && this->idleTimeout_ == nullptr && this->name_ == nullptr && this->portRanges_ == nullptr
        && this->protocol_ == nullptr && this->regionId_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->type_ == nullptr
        && this->XForwardedForConfig_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateListenerRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<CreateListenerRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<CreateListenerRequest::Certificates>) };
    inline vector<CreateListenerRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<CreateListenerRequest::Certificates>) };
    inline CreateListenerRequest& setCertificates(const vector<CreateListenerRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline CreateListenerRequest& setCertificates(vector<CreateListenerRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientAffinity Field Functions 
    bool hasClientAffinity() const { return this->clientAffinity_ != nullptr;};
    void deleteClientAffinity() { this->clientAffinity_ = nullptr;};
    inline string getClientAffinity() const { DARABONBA_PTR_GET_DEFAULT(clientAffinity_, "") };
    inline CreateListenerRequest& setClientAffinity(string clientAffinity) { DARABONBA_PTR_SET_VALUE(clientAffinity_, clientAffinity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customRoutingEndpointGroupConfigurations Field Functions 
    bool hasCustomRoutingEndpointGroupConfigurations() const { return this->customRoutingEndpointGroupConfigurations_ != nullptr;};
    void deleteCustomRoutingEndpointGroupConfigurations() { this->customRoutingEndpointGroupConfigurations_ = nullptr;};
    inline const vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> & getCustomRoutingEndpointGroupConfigurations() const { DARABONBA_PTR_GET_CONST(customRoutingEndpointGroupConfigurations_, vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations>) };
    inline vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> getCustomRoutingEndpointGroupConfigurations() { DARABONBA_PTR_GET(customRoutingEndpointGroupConfigurations_, vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations>) };
    inline CreateListenerRequest& setCustomRoutingEndpointGroupConfigurations(const vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> & customRoutingEndpointGroupConfigurations) { DARABONBA_PTR_SET_VALUE(customRoutingEndpointGroupConfigurations_, customRoutingEndpointGroupConfigurations) };
    inline CreateListenerRequest& setCustomRoutingEndpointGroupConfigurations(vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> && customRoutingEndpointGroupConfigurations) { DARABONBA_PTR_SET_RVALUE(customRoutingEndpointGroupConfigurations_, customRoutingEndpointGroupConfigurations) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateListenerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointGroupConfigurations Field Functions 
    bool hasEndpointGroupConfigurations() const { return this->endpointGroupConfigurations_ != nullptr;};
    void deleteEndpointGroupConfigurations() { this->endpointGroupConfigurations_ = nullptr;};
    inline const vector<CreateListenerRequest::EndpointGroupConfigurations> & getEndpointGroupConfigurations() const { DARABONBA_PTR_GET_CONST(endpointGroupConfigurations_, vector<CreateListenerRequest::EndpointGroupConfigurations>) };
    inline vector<CreateListenerRequest::EndpointGroupConfigurations> getEndpointGroupConfigurations() { DARABONBA_PTR_GET(endpointGroupConfigurations_, vector<CreateListenerRequest::EndpointGroupConfigurations>) };
    inline CreateListenerRequest& setEndpointGroupConfigurations(const vector<CreateListenerRequest::EndpointGroupConfigurations> & endpointGroupConfigurations) { DARABONBA_PTR_SET_VALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };
    inline CreateListenerRequest& setEndpointGroupConfigurations(vector<CreateListenerRequest::EndpointGroupConfigurations> && endpointGroupConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };


    // httpVersion Field Functions 
    bool hasHttpVersion() const { return this->httpVersion_ != nullptr;};
    void deleteHttpVersion() { this->httpVersion_ = nullptr;};
    inline string getHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(httpVersion_, "") };
    inline CreateListenerRequest& setHttpVersion(string httpVersion) { DARABONBA_PTR_SET_VALUE(httpVersion_, httpVersion) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateListenerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<CreateListenerRequest::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<CreateListenerRequest::PortRanges>) };
    inline vector<CreateListenerRequest::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<CreateListenerRequest::PortRanges>) };
    inline CreateListenerRequest& setPortRanges(const vector<CreateListenerRequest::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline CreateListenerRequest& setPortRanges(vector<CreateListenerRequest::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateListenerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline CreateListenerRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateListenerRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateListenerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const CreateListenerRequest::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, CreateListenerRequest::XForwardedForConfig) };
    inline CreateListenerRequest::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, CreateListenerRequest::XForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(const CreateListenerRequest::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(CreateListenerRequest::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


  protected:
    // The ID of the Global Accelerator instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The SSL certificates for an HTTPS listener.
    shared_ptr<vector<CreateListenerRequest::Certificates>> certificates_ {};
    // The client affinity for the listener.
    // 
    // - By default, client affinity is disabled, and requests from the same client may be routed to different endpoints.
    // 
    // - Set to **SOURCE_IP** to enable client affinity. This setting directs all requests from the same client to the same endpoint, regardless of the source port or protocol.
    shared_ptr<string> clientAffinity_ {};
    // A client token that ensures the idempotence of the request.
    // 
    // Generate a unique token on your client for each request. The token must contain only ASCII characters.
    // 
    // > If you omit this parameter, the system uses the request\\"s **RequestId** as the **ClientToken**.
    shared_ptr<string> clientToken_ {};
    // The configurations of the endpoint groups for a custom routing listener.
    // 
    // You can specify up to five endpoint groups.
    // 
    // > This parameter applies only when the listener\\"s routing type (**Type**) is **CustomRouting**.
    shared_ptr<vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations>> customRoutingEndpointGroupConfigurations_ {};
    // The description of the listener.
    // 
    // The description can be up to 200 characters long and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The configurations of the endpoint groups for a standard listener.
    // 
    // You can specify up to 10 endpoint groups.
    // 
    // > This parameter applies only when the listener\\"s routing type (**Type**) is **Standard**.
    shared_ptr<vector<CreateListenerRequest::EndpointGroupConfigurations>> endpointGroupConfigurations_ {};
    // The maximum HTTP version. Valid values:
    // 
    // - **http3**: HTTP/3
    // 
    // - **http2** (default): HTTP/2
    // 
    // - **http1.1**: HTTP/1.1
    // 
    // > This parameter applies only to HTTPS listeners.
    shared_ptr<string> httpVersion_ {};
    // The connection idle timeout, in seconds.
    // 
    // - TCP: 10–900 seconds. Default: 900 seconds.
    // 
    // - UDP: 10–20 seconds. Default: 20 seconds.
    // 
    // - HTTP/HTTPS: 1–60 seconds. Default: 15 seconds.
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The name must be 1 to 128 characters long, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The listener port range. The port numbers must be within the range of **1** to **65499**. The maximum number of allowed ports depends on the listener\\"s routing type and protocol. For more information, see [Listener ports](https://help.aliyun.com/document_detail/153216.html).
    // 
    // This parameter is required.
    shared_ptr<vector<CreateListenerRequest::PortRanges>> portRanges_ {};
    // The listener\\"s network protocol. Valid values:
    // 
    // - **tcp**: TCP.
    // 
    // - **udp**: UDP.
    // 
    // - **http**: HTTP.
    // 
    // - **https**: HTTPS.
    shared_ptr<string> protocol_ {};
    // The region ID of the Global Accelerator instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The request timeout for HTTP/HTTPS connections, in seconds.
    // 
    // Valid values: 1–180 seconds. Default: 60 seconds.
    // 
    // > This parameter applies only to HTTP or HTTPS listeners. If the backend server does not respond within the timeout period, Global Accelerator returns an HTTP 504 error to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The ID of the security policy. Valid values:
    // 
    // - **tls_cipher_policy_1_0**
    // 
    //   - Supported TLS versions: TLS 1.0, TLS 1.1, and TLS 1.2.
    // 
    //   - Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // - **tls_cipher_policy_1_1**
    // 
    //   - Supported TLS versions: TLS 1.1 and TLS 1.2.
    // 
    //   - Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // - **tls_cipher_policy_1_2**
    // 
    //   - Supported TLS version: TLS 1.2.
    // 
    //   - Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // - **tls_cipher_policy_1_2_strict**
    // 
    //   - Supported TLS version: TLS 1.2.
    // 
    //   - Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
    // 
    // - **tls_cipher_policy_1_2_strict_with_1_3**
    // 
    //   - Supported TLS versions: TLS 1.2 and TLS 1.3.
    // 
    //   - Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
    // 
    // > This parameter applies only to HTTPS listeners.
    shared_ptr<string> securityPolicyId_ {};
    // The routing type of the listener. Valid values:
    // 
    // - **Standard** (default): standard routing.
    // 
    // - **CustomRouting**: custom routing.
    // 
    // > * Custom routing is in invitation-only preview. To use this feature, contact your Alibaba Cloud account manager.
    // >
    // > * A standard Global Accelerator instance supports only one routing type for all of its listeners. The routing type cannot be changed after the listener is created. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
    shared_ptr<string> type_ {};
    // Settings for `X-Forwarded-For` related headers.
    shared_ptr<CreateListenerRequest::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
