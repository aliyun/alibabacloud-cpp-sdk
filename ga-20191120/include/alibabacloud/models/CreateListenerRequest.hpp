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
      // Specifies whether to use the `GA-AP` header to retrieve the information about acceleration regions. Valid values:
      // 
      // *   **true**: yes
      // *   **false** (default): no
      // 
      // > This parameter is available only when you create an HTTPS or HTTP listener.
      shared_ptr<bool> XForwardedForGaApEnabled_ {};
      // Specifies whether to use the `GA-ID` header to retrieve the ID of the GA instance. Valid values:
      // 
      // *   **true**: yes
      // *   **false** (default): no
      // 
      // > This parameter is available only when you create an HTTPS or HTTP listener.
      shared_ptr<bool> XForwardedForGaIdEnabled_ {};
      // Specifies whether to use the `GA-X-Forward-Port` header to retrieve the listener ports of the GA instance. Valid values:
      // 
      // *   **true**: yes
      // *   **false** (default): no
      // 
      // > This parameter is available only when you create an HTTPS or HTTP listener.
      shared_ptr<bool> XForwardedForPortEnabled_ {};
      // Specifies whether to use the `GA-X-Forward-Proto` header to retrieve the listener protocol of the GA instance. Valid values:
      // 
      // *   **true**: yes
      // *   **false** (default): no
      // 
      // > This parameter is available only when you create an HTTPS or HTTP listener.
      shared_ptr<bool> XForwardedForProtoEnabled_ {};
      // Specifies whether to use the `X-Real-IP` header to retrieve client IP addresses. Valid values:
      // 
      // *   **true**: yes
      // *   **false** (default): no
      // 
      // > This parameter is available only when you create an HTTPS or HTTP listener.
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
      // The first port of the listener port range that you want to use to receive and forward requests to endpoints.
      // 
      // Valid values: **1** to **65499**. The value of **FromPort** must be smaller than or equal to the value of **ToPort**.
      // 
      // The maximum number of ports that can be configured varies based on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
      // 
      // > You can configure only one listener port for an HTTP or HTTPS listener. In this case, the first port is the same as the last port.
      // 
      // This parameter is required.
      shared_ptr<int32_t> fromPort_ {};
      // The last port of the listener port range that you want to use to receive and forward requests to endpoints.
      // 
      // Valid values: **1** to **65499**. The value of **FromPort** must be smaller than or equal to the value of **ToPort**.
      // 
      // The maximum number of ports that can be configured varies based on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
      // 
      // > You can configure only one listener port for an HTTP or HTTPS listener. In this case, the first port is the same as the last port.
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
        // The endpoint port that is mapped to the listener port.
        // 
        // You can specify endpoint ports in up to five port mappings.
        // 
        // > *   You can configure endpoint groups and endpoints for an intelligent routing listener only if you set **Type** to **Standard**.
        // >*   You cannot configure port mappings for virtual endpoint groups of TCP listeners. If a virtual endpoint group already exists on the listener, you cannot configure port mappings for the default endpoint group. If port mappings are configured for the default endpoint group, you cannot add a virtual endpoint group.
        // >*   If you configure port mappings for a listener, you cannot modify the listener protocol. You can only switch between HTTP and HTTPS.
        // >*   Listener port: When you modify the listener port range, make sure that the port range includes the ports configured in port mappings. For example, if you set the listener port range to 80 to 82 and map the listener ports to endpoint ports 100 to 102, you cannot change the listener port range to 80 to 81.
        shared_ptr<int64_t> endpointPort_ {};
        // The listener port that is mapped to the endpoint port.
        // 
        // You can specify listener ports in up to five port mappings.
        // 
        // > *   You can configure endpoint groups and endpoints for an intelligent routing listener only if you set **Type** to **Standard**.
        // >*   You cannot configure port mappings for virtual endpoint groups of TCP listeners. If a virtual endpoint group already exists on the listener, you cannot configure port mappings for the default endpoint group. If port mappings are configured for the default endpoint group, you cannot add a virtual endpoint group.
        // >*   If you configure port mappings for a listener, you cannot modify the listener protocol. You can only switch between HTTP and HTTPS.
        // >*   Listener port: When you modify the listener port range, make sure that the port range includes the ports configured in port mappings. For example, if you set the listener port range to 80 to 82 and map the listener ports to endpoint ports 100 to 102, you cannot change the listener port range to 80 to 81.
        shared_ptr<int64_t> listenerPort_ {};
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
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline EndpointConfigurations& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // Specifies whether to automatically preserve client IP addresses. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        // 
        // > *   By default, client IP address preservation is disabled for an endpoint group that is associated with a UDP or TCP listener. You can configure this parameter based on your business requirements.
        // >*   By default, client IP address preservation is enabled for an endpoint group that is associated with a HTTP or HTTPS listener. Client IP addresses are obtained by using the X-Forwarded-For header. You cannot disable the feature.
        // >*   EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
        // >>For more information, see [Preserve client IP addresses](https://help.aliyun.com/document_detail/158080.html).
        shared_ptr<bool> enableClientIPPreservation_ {};
        // Specifies whether to use the proxy protocol to preserve client IP addresses. Valid values:
        // 
        // *   **true**
        // *   **false** (default)
        // 
        // >*   This parameter is supported only by endpoint groups associated with TCP listeners.
        // >*   EnableClientIPPreservation and EnableProxyProtocol cannot be set to true at the same time.
        // >>For more information, see [Preserve client IP addresses](https://help.aliyun.com/document_detail/158080.html).
        shared_ptr<bool> enableProxyProtocol_ {};
        // The IP address or domain name of the endpoint that is associated with the intelligent routing listener.
        // 
        // You can enter the IP addresses or domain names of up to 100 endpoints in an endpoint group that is associated with the intelligent routing listener.
        // 
        // >  If you set **Type** to **Standard**, you can configure endpoint groups and endpoints, and this parameter is required.
        shared_ptr<string> endpoint_ {};
        // The private IP address of the ENI.
        // 
        // >  This parameter is available only when you set the endpoint type to **ENI**. If you leave this parameter empty, the primary private IP address of the ENI is used.
        shared_ptr<string> subAddress_ {};
        // The type of the endpoint that is associated with the intelligent routing listener. Valid values:
        // 
        // *   **Domain**: a custom domain name.
        // *   **Ip**: a custom IP address.
        // *   **PublicIp**: a public IP address provided by Alibaba Cloud.
        // *   **ECS**: an Elastic Compute Service (ECS) instance.
        // *   **SLB**: a Server Load Balancer (SLB) instance.
        // *   **ALB**: an Application Load Balancer (ALB) instance.
        // *   **OSS**: an Object Storage Service (OSS) bucket.
        // *   **ENI**: an elastic network interface (ENI).
        // *   **NLB**: a Network Load Balancer (NLB) instance.
        // *   **IpTarget**: a custom private IP address.
        // 
        // You can specify up to 100 endpoint types in the endpoint group that is associated with the intelligent routing listener.
        // 
        // > *   If you set **Type** to **Standard**, you can configure the endpoint group and endpoint that are associated with the intelligent routing listener. In addition, this parameter is required.
        // >*   If you set this parameter to **ECS**, **ENI**, **SLB**, **ALB**, **NLB**, or **IpTarget** and the AliyunServiceRoleForGaVpcEndpoint service-linked role does not exist, the system automatically creates the role.
        // >*   If you set this parameter to **ALB** and the AliyunServiceRoleForGaAlb service-linked role does not exist, the system automatically creates the role.
        // >*   If you set this parameter to **OSS** and the AliyunServiceRoleForGaOss service-linked role does not exist, the system automatically creates the role.
        // >*   If you set this parameter to **NLB** and the AliyunServiceRoleForGaNlb service-linked role does not exist, the system automatically creates the role.
        // >>For more information, see [Service-linked roles](https://help.aliyun.com/document_detail/178360.html).
        shared_ptr<string> type_ {};
        // The IDs of vSwitches that are deployed in the VPC.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The virtual private cloud (VPC) ID.
        // 
        // You can specify one VPC ID for an endpoint group of an intelligent routing listener.
        // 
        // >  This parameter is valid and required only if Type is set to **IpTarget**.
        shared_ptr<string> vpcId_ {};
        // The weight of the endpoint that is associated with the intelligent routing listener.
        // 
        // Valid values: **0** to **255**.
        // 
        // You can specify the weights of up to 100 endpoints for an endpoint group of an intelligent routing listener.
        // 
        // > *   If you set **Type** to **Standard**, you can configure the endpoint group and endpoint that are associated with the intelligent routing listener. In addition, this parameter is required.
        // >*   If the weight of an endpoint is set to 0, GA stops distributing network traffic to the endpoint. Proceed with caution.
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
      // The endpoints that are associated with the intelligent routing listener.
      shared_ptr<vector<EndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The description of the endpoint group that is associated with the intelligent routing listener.
      // 
      // The description can be up to 200 characters in length and cannot contain `http://` or `https://`.
      // 
      // You can enter the descriptions of up to 10 endpoint groups.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<string> endpointGroupDescription_ {};
      // The name of the endpoint group that is associated with the intelligent routing listener.
      // 
      // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
      // 
      // You can enter the names of up to 10 endpoint groups.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<string> endpointGroupName_ {};
      // The region ID of the endpoint group that is associated with the intelligent routing listener.
      // 
      // You can enter the IDs of up to 10 regions.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<string> endpointGroupRegion_ {};
      // The type of the endpoint group associated with the intelligent routing listener. Valid values:
      // 
      // *   **default** (default): a default endpoint group.
      // *   **virtual**: a virtual endpoint group.
      // 
      // You can specify up to 10 endpoint group types.
      // 
      // > *   You can configure endpoint groups and endpoints for an intelligent routing listener only if you set **Type** to **Standard**.
      // >*   Only HTTP and HTTPS intelligent routing listeners support virtual endpoint groups.
      shared_ptr<string> endpointGroupType_ {};
      shared_ptr<string> endpointIpVersion_ {};
      // The backend service protocol version of the endpoint that is associated with the intelligent routing listener. Valid values:
      // 
      // *   **HTTP1.1** (default)
      // *   **HTTP2**
      // 
      // >  You can specify this parameter only if EndpointRequestProtocol is set to HTTPS.
      shared_ptr<string> endpointProtocolVersion_ {};
      // The backend service protocol of the endpoint that is associated with the intelligent routing listener. Valid values:
      // 
      // *   **HTTP** (default)
      // *   **HTTPS**
      // 
      // You can specify up to 10 backend service protocols.
      // 
      // > *   You can configure endpoint groups and endpoints for an intelligent routing listener only if you set **Type** to **Standard**.
      // >*   You can specify this parameter only for HTTP and HTTPS intelligent routing listeners.
      // >* For an HTTP listener, the backend service protocol must be **HTTP**.
      shared_ptr<string> endpointRequestProtocol_ {};
      // Specifies whether to enable health checks for the endpoint group. Valid values:
      // 
      // *   **true**: enables the health check feature.
      // *   **false** (default): disables the health check feature.
      // 
      // You can enable the health check feature for up to 10 endpoint groups.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<bool> healthCheckEnabled_ {};
      shared_ptr<string> healthCheckHost_ {};
      // The interval at which health checks are performed. Unit: seconds.
      // 
      // You can specify up to 10 health check intervals.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<int64_t> healthCheckIntervalSeconds_ {};
      // The health check path.
      // 
      // You can specify up to 10 health check paths.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<string> healthCheckPath_ {};
      // The port that you want to use for health checks. Valid values: **1** to **65535**.
      // 
      // You can specify up to 10 ports for health checks.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<int64_t> healthCheckPort_ {};
      // The protocol over which health check requests are sent. Valid values:
      // 
      // *   **tcp** or **TCP**
      // *   **http** or **HTTP**
      // *   **https** or **HTTPS**
      // 
      // You can specify up to 10 health check protocols.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<string> healthCheckProtocol_ {};
      // The port mappings.
      shared_ptr<vector<EndpointGroupConfigurations::PortOverrides>> portOverrides_ {};
      // The number of failed consecutive health checks that must occur before a healthy endpoint group is considered unhealthy or the number of successful consecutive health checks that must occur before an unhealthy endpoint group is considered healthy. Valid values: **2** to **10**. Default value: **3**.
      // 
      // You can specify up to 10 values (the number of consecutive health check successes or consecutive health check failures).
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
      shared_ptr<int64_t> thresholdCount_ {};
      // The traffic distribution ratio. If an intelligent routing listener is associated with multiple endpoint groups, you can configure this parameter to specify the ratio of traffic distributed to each endpoint group.
      // 
      // Valid values: **1** to **100**. Default value: **100**.
      // 
      // You can specify traffic distribution ratios for up to 10 endpoint groups.
      // 
      // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
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
            // The start port of the port range. The value of this parameter must fall within the port range of the backend service.
            // 
            // This parameter takes effect only if **TrafficToEndpointPolicy** is set to **AllowCustom**.
            // 
            // You can specify port ranges for up to 20 destinations in each endpoint of a custom routing listener. You can specify up to five start ports for each destination.
            // 
            // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
            shared_ptr<int32_t> fromPort_ {};
            // The end port of the destination port range. The value of this parameter must fall within the port range of the backend service.
            // 
            // This parameter takes effect only if **TrafficToEndpointPolicy** is set to **AllowCustom**.
            // 
            // You can specify port ranges for up to 20 destinations in each endpoint of a custom routing listener. You can specify up to five end ports for each destination.
            // 
            // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
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
          // The IP address of the destination.
          // 
          // This parameter takes effect only if **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify up to 20 destination IP addresses for each endpoint of a custom routing listener.
          // 
          // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
          shared_ptr<string> address_ {};
          // The port ranges of the destination to which traffic is forwarded. The value of this parameter must fall within the port range of the endpoint group.
          // 
          // If you do not specify this parameter, traffic is forwarded over all ports.
          // 
          // This parameter takes effect only if **TrafficToEndpointPolicy** is set to **AllowCustom**.
          // 
          // You can specify port ranges for up to 20 destinations in each endpoint of a custom routing listener. You can specify up to five port ranges for each destination.
          // 
          // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
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
        // The name of the vSwitch attached to the endpoint of the custom routing listener.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
        shared_ptr<string> endpoint_ {};
        // The destinations in the endpoint that is associated with the custom routing listener.
        // 
        // You can specify up to 20 traffic destinations for each endpoint of a custom routing listener.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
        shared_ptr<vector<EndpointConfigurations::PolicyConfigurations>> policyConfigurations_ {};
        // The traffic policy for the endpoint that is associated with the custom routing listener. Default value: DenyAll. Valid values:
        // 
        // *   **DenyAll** (default): denies all traffic to the specified backend service.
        // *   **AllowAll**: allows all traffic to the specified backend service.
        // *   **AllowCustom**: allows traffic only to specified destinations in the endpoint. If you set this parameter to AllowCustom, you must specify IP addresses and port ranges as the destinations to which you want to distribute traffic. If you specify only IP addresses and do not specify port ranges, GA can forward traffic to the specified IP addresses over all destination ports.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
        shared_ptr<string> trafficToEndpointPolicy_ {};
        // The service type of the endpoint that is associated with the custom routing listener. Default value: PrivateSubNet. Set the value to
        // 
        // **PrivateSubNet**, which specifies a private CIDR block.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
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
        // The start port used by the endpoint group that is associated with the custom routing listener.
        // 
        // Valid values: **1** to **65499**. The value of **FromPort** must be equal to or smaller than the value of **ToPort**.
        // 
        // You can specify up to 20 start ports for an endpoint group of a custom routing listener.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
        shared_ptr<int32_t> fromPort_ {};
        // The protocol used by the endpoint group that is associated with the custom routing listener.
        // 
        // You can specify up to four protocol types for an endpoint group of a custom routing listener.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
        shared_ptr<vector<string>> protocols_ {};
        // The end port used by the endpoint group that is associated with the custom routing listener.
        // 
        // Valid values: **1** to **65499**. The value of **FromPort** must be equal to or smaller than the value of **ToPort**.
        // 
        // You can specify up to 20 end ports for an endpoint group of a custom routing listener.
        // 
        // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
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
      // The description of the endpoint group that is associated with the custom routing listener.
      // 
      // The description can be up to 200 characters in length and cannot contain `http://` or `https://`.
      // 
      // You can specify up to five endpoint group descriptions.
      // 
      // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
      shared_ptr<string> description_ {};
      // The mapping configurations of the endpoint group that is associated with the custom routing listener.
      // 
      // You need to specify the port ranges and protocols used by the endpoint group. The ports are mapped to listener ports.
      // 
      // You can specify up to 20 mapping configurations for an endpoint group of a custom routing listener.
      // 
      // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
      shared_ptr<vector<CustomRoutingEndpointGroupConfigurations::DestinationConfigurations>> destinationConfigurations_ {};
      // The endpoints that are associated with the custom routing listener.
      // 
      // You can configure up to 10 endpoints for an endpoint group of a custom routing listener.
      // 
      // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
      shared_ptr<vector<CustomRoutingEndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      // The region ID of the endpoint group that is associated with the custom routing listener.
      // 
      // You can enter the region IDs of up to five endpoint groups.
      // 
      // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
      shared_ptr<string> endpointGroupRegion_ {};
      // The name of the endpoint group that is associated with the custom routing listener.
      // 
      // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
      // 
      // You can specify up to five endpoint group names.
      // 
      // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
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
      // > This parameter is required only when you create an HTTPS listener.
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
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The SSL certificates.
    shared_ptr<vector<CreateListenerRequest::Certificates>> certificates_ {};
    // Specifies whether to enable client affinity for the listener.
    // 
    // *   If this parameter is left empty, client affinity is disabled. After client affinity is disabled, requests from a specific client IP address may be forwarded to different endpoints.
    // *   To enable client affinity, set this parameter to **SOURCE_IP**. In this case, when a client accesses stateful applications, requests from the same client are forwarded to the same endpoint regardless of the source port or protocol.
    shared_ptr<string> clientAffinity_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not set this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** is different for each API request.
    shared_ptr<string> clientToken_ {};
    // The endpoint group that is associated with the custom routing listener.
    // 
    // The endpoint groups that are associated with the custom routing listener.
    // 
    // >  You can configure endpoint groups and endpoints for a custom routing listener only if **Type** is set to **CustomRouting**.
    shared_ptr<vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations>> customRoutingEndpointGroupConfigurations_ {};
    // The description of the listener.
    // 
    // The description can be up to 200 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The endpoint groups that are associated with the intelligent routing listener.
    // 
    // You can configure up to 10 endpoint groups for an intelligent routing listener.
    // 
    // >  You can configure endpoint groups and endpoints only if you set **Type** to **Standard**.
    shared_ptr<vector<CreateListenerRequest::EndpointGroupConfigurations>> endpointGroupConfigurations_ {};
    // The maximum version of the HTTP protocol. Valid values:
    // 
    // *   **http3**
    // *   **http2** (default)
    // *   **http1.1**
    // 
    // >  Only HTTPS listeners support this parameter.
    shared_ptr<string> httpVersion_ {};
    // The timeout period of idle connections. Unit: seconds.
    // 
    // *   TCP: 10-900. Default value: 900. Unit: seconds.
    // *   UDP: 10-20. Default value: 20. Unit: seconds.
    // *   HTTP/HTTPS: 1-60. Default value: 15. Unit: seconds.
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    // The listener ports. Valid values: **1** to **65499**. The maximum number of ports that can be configured depends on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
    // 
    // This parameter is required.
    shared_ptr<vector<CreateListenerRequest::PortRanges>> portRanges_ {};
    // The network transmission protocol that you want to use for the listener. Valid values:
    // 
    // *   **tcp**: TCP
    // *   **udp**: UDP
    // *   **http**: HTTP
    // *   **https**: HTTPS
    shared_ptr<string> protocol_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The timeout period for HTTP or HTTPS requests. Unit: seconds.
    // 
    // Valid values: 1 to 180. Default value: 60. Unit: seconds.
    // 
    // >  This parameter takes effect only for HTTP or HTTPS listeners. If the backend server does not respond within the timeout period, GA returns an HTTP 504 error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The ID of the security policy. Valid values:
    // 
    // *   **tls_cipher_policy_1_0**
    // 
    //     *   Supported Transport Layer Security (TLS) versions: TLS 1.0, TLS 1.1, and TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_1**
    // 
    //     *   Supported TLS versions: TLS 1.1 and TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_2**
    // 
    //     *   Supported TLS version: TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_2_strict**
    // 
    //     *   Supported TLS version: TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA
    // 
    // *   **tls_cipher_policy_1_2_strict_with_1_3**
    // 
    //     *   Supported TLS versions: TLS 1.2 and TLS 1.3
    //     *   Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA
    // 
    // > This parameter is available only when you create an HTTPS listener.
    shared_ptr<string> securityPolicyId_ {};
    // The routing type of the listener. Valid values:
    // 
    // *   **Standard** (default): intelligent routing
    // *   **CustomRouting**: custom routing
    // 
    // > *   Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager.
    // > *   You can create only listeners of the same routing type for a standard GA instance. You cannot change the routing types of listeners. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
    shared_ptr<string> type_ {};
    // The `XForward` headers.
    shared_ptr<CreateListenerRequest::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
