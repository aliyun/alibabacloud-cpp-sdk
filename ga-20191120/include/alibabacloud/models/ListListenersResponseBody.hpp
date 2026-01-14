// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
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
  class ListListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenersResponseBody() = default ;
    ListListenersResponseBody(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody(ListListenersResponseBody &&) = default ;
    ListListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBody() = default ;
    ListListenersResponseBody& operator=(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody& operator=(ListListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_TO_JSON(Certificates, certificates_);
        DARABONBA_PTR_TO_JSON(ClientAffinity, clientAffinity_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HttpVersion, httpVersion_);
        DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(ProxyProtocol, proxyProtocol_);
        DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
        DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
        DARABONBA_PTR_FROM_JSON(ClientAffinity, clientAffinity_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HttpVersion, httpVersion_);
        DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(ProxyProtocol, proxyProtocol_);
        DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
        DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
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
        // Indicates whether the `GA-AP` header is used to retrieve the information about acceleration regions. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForGaApEnabled_ {};
        // Indicates whether the `GA-ID` header is used to retrieve the ID of the GA instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForGaIdEnabled_ {};
        // Indicates whether the `GA-X-Forward-Port` header is used to retrieve the listener ports of the GA instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForPortEnabled_ {};
        // Indicates whether the `GA-X-Forward-Proto` header is used to retrieve the listener protocol of the GA instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XForwardedForProtoEnabled_ {};
        // Indicates whether the `X-Real-IP` header is used to retrieve client IP addresses. Valid values:
        // 
        // *   **true**
        // *   **false**
        // 
        // >  This parameter is returned only for HTTP and HTTPS listeners.
        shared_ptr<bool> XRealIpEnabled_ {};
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
        // The name of the action on the managed instance. Valid values:
        // 
        // *   **Create**
        // *   **Update**
        // *   **Delete**
        // *   **Associate**
        // *   **UserUnmanaged**
        // *   **CreateChild**
        shared_ptr<string> action_ {};
        // The type of the child resource. Valid values:
        // 
        // *   **Listener**: listener.
        // *   **IpSet**: acceleration region.
        // *   **EndpointGroup**: endpoint group.
        // *   **ForwardingRule**: forwarding rule.
        // *   **Endpoint**: endpoint.
        // *   **EndpointGroupDestination**: protocol mapping of an endpoint group associated with a custom routing listener.
        // *   **EndpointPolicy**: traffic policy of an endpoint associated with a custom routing listener.
        // 
        // >  This parameter takes effect only if the value of **Action** is **CreateChild**.
        shared_ptr<string> childType_ {};
        // Indicates whether the specified actions are managed.
        // 
        // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed instance.
        // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed instance.
        shared_ptr<bool> isManaged_ {};
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
        // The first port in the listener port range that is used to receive and forward requests to endpoints.
        shared_ptr<int32_t> fromPort_ {};
        // The last port in the listener port range that is used to receive and forward requests to endpoints.
        shared_ptr<int32_t> toPort_ {};
      };

      class Certificates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Certificates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Certificates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the SSL certificate.
        shared_ptr<string> id_ {};
        // The type of the SSL certificate.
        // 
        // Only **Server** may be returned, which indicates a server certificate.
        shared_ptr<string> type_ {};
      };

      class BackendPorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendPorts& obj) { 
          DARABONBA_PTR_TO_JSON(FromPort, fromPort_);
          DARABONBA_PTR_TO_JSON(ToPort, toPort_);
        };
        friend void from_json(const Darabonba::Json& j, BackendPorts& obj) { 
          DARABONBA_PTR_FROM_JSON(FromPort, fromPort_);
          DARABONBA_PTR_FROM_JSON(ToPort, toPort_);
        };
        BackendPorts() = default ;
        BackendPorts(const BackendPorts &) = default ;
        BackendPorts(BackendPorts &&) = default ;
        BackendPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendPorts() = default ;
        BackendPorts& operator=(const BackendPorts &) = default ;
        BackendPorts& operator=(BackendPorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fromPort_ == nullptr
        && this->toPort_ == nullptr; };
        // fromPort Field Functions 
        bool hasFromPort() const { return this->fromPort_ != nullptr;};
        void deleteFromPort() { this->fromPort_ = nullptr;};
        inline string getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, "") };
        inline BackendPorts& setFromPort(string fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


        // toPort Field Functions 
        bool hasToPort() const { return this->toPort_ != nullptr;};
        void deleteToPort() { this->toPort_ = nullptr;};
        inline string getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, "") };
        inline BackendPorts& setToPort(string toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


      protected:
        // The first port in the range of ports that are used by backend servers.
        shared_ptr<string> fromPort_ {};
        // The last port in the range of ports that are used by backend servers.
        shared_ptr<string> toPort_ {};
      };

      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->backendPorts_ == nullptr && this->certificates_ == nullptr && this->clientAffinity_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->httpVersion_ == nullptr && this->idleTimeout_ == nullptr && this->listenerId_ == nullptr && this->name_ == nullptr && this->portRanges_ == nullptr
        && this->protocol_ == nullptr && this->proxyProtocol_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->serviceId_ == nullptr
        && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr && this->state_ == nullptr && this->type_ == nullptr && this->XForwardedForConfig_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline Listeners& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // backendPorts Field Functions 
      bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
      void deleteBackendPorts() { this->backendPorts_ = nullptr;};
      inline const vector<Listeners::BackendPorts> & getBackendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<Listeners::BackendPorts>) };
      inline vector<Listeners::BackendPorts> getBackendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<Listeners::BackendPorts>) };
      inline Listeners& setBackendPorts(const vector<Listeners::BackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
      inline Listeners& setBackendPorts(vector<Listeners::BackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


      // certificates Field Functions 
      bool hasCertificates() const { return this->certificates_ != nullptr;};
      void deleteCertificates() { this->certificates_ = nullptr;};
      inline const vector<Listeners::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Listeners::Certificates>) };
      inline vector<Listeners::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<Listeners::Certificates>) };
      inline Listeners& setCertificates(const vector<Listeners::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
      inline Listeners& setCertificates(vector<Listeners::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


      // clientAffinity Field Functions 
      bool hasClientAffinity() const { return this->clientAffinity_ != nullptr;};
      void deleteClientAffinity() { this->clientAffinity_ = nullptr;};
      inline string getClientAffinity() const { DARABONBA_PTR_GET_DEFAULT(clientAffinity_, "") };
      inline Listeners& setClientAffinity(string clientAffinity) { DARABONBA_PTR_SET_VALUE(clientAffinity_, clientAffinity) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Listeners& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Listeners& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // httpVersion Field Functions 
      bool hasHttpVersion() const { return this->httpVersion_ != nullptr;};
      void deleteHttpVersion() { this->httpVersion_ = nullptr;};
      inline string getHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(httpVersion_, "") };
      inline Listeners& setHttpVersion(string httpVersion) { DARABONBA_PTR_SET_VALUE(httpVersion_, httpVersion) };


      // idleTimeout Field Functions 
      bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
      void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
      inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
      inline Listeners& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Listeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Listeners& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // portRanges Field Functions 
      bool hasPortRanges() const { return this->portRanges_ != nullptr;};
      void deletePortRanges() { this->portRanges_ = nullptr;};
      inline const vector<Listeners::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<Listeners::PortRanges>) };
      inline vector<Listeners::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<Listeners::PortRanges>) };
      inline Listeners& setPortRanges(const vector<Listeners::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
      inline Listeners& setPortRanges(vector<Listeners::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Listeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // proxyProtocol Field Functions 
      bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
      void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
      inline bool getProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, false) };
      inline Listeners& setProxyProtocol(bool proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


      // requestTimeout Field Functions 
      bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
      void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
      inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
      inline Listeners& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline Listeners& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Listeners& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline Listeners& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<Listeners::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<Listeners::ServiceManagedInfos>) };
      inline vector<Listeners::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<Listeners::ServiceManagedInfos>) };
      inline Listeners& setServiceManagedInfos(const vector<Listeners::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline Listeners& setServiceManagedInfos(vector<Listeners::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Listeners& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Listeners& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // XForwardedForConfig Field Functions 
      bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
      void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
      inline const Listeners::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, Listeners::XForwardedForConfig) };
      inline Listeners::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, Listeners::XForwardedForConfig) };
      inline Listeners& setXForwardedForConfig(const Listeners::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
      inline Listeners& setXForwardedForConfig(Listeners::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


    protected:
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      // The range of ports that are used by backend servers.
      shared_ptr<vector<Listeners::BackendPorts>> backendPorts_ {};
      // The information about the SSL certificates.
      shared_ptr<vector<Listeners::Certificates>> certificates_ {};
      // Indicates whether client affinity is enabled for the listener.
      // 
      // *   If **NONE** is returned, client affinity is disabled. When client affinity is disabled, requests from the same client may be forwarded to different endpoints.
      // *   If **SOURCE_IP** is returned, client affinity is enabled. When a client accesses stateful applications, requests from the same client are forwarded to the same endpoint regardless of the source port or protocol.
      shared_ptr<string> clientAffinity_ {};
      // The timestamp that indicates when the listener was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the listener.
      shared_ptr<string> description_ {};
      // The maximum version of the HTTP protocol. Valid values:
      // 
      // *   **http3**
      // *   **http2**
      // *   **http1.1**
      // 
      // >  This parameter is returned only for HTTPS listeners.
      shared_ptr<string> httpVersion_ {};
      // The timeout period of idle connections. Unit: seconds.
      shared_ptr<int32_t> idleTimeout_ {};
      // The ID of the listener.
      shared_ptr<string> listenerId_ {};
      // The name of the listener.
      shared_ptr<string> name_ {};
      // The information about the listener ports.
      shared_ptr<vector<Listeners::PortRanges>> portRanges_ {};
      // The network transmission protocol that is used by the listener. Valid values:
      // 
      // *   **tcp**
      // *   **udp**
      // *   **http**
      // *   **https**
      shared_ptr<string> protocol_ {};
      // Indicates whether client IP address preservation is enabled. Valid values:
      // 
      // *   **true**: Client IP address preservation is enabled. This feature allows you to view client IP addresses on backend servers.
      // *   **false**: Client IP address preservation is disabled.
      shared_ptr<bool> proxyProtocol_ {};
      // The timeout period of HTTP or HTTPS requests. Unit: seconds.
      // 
      // >  This parameter is returned only for HTTP and HTTPS listeners. If no responses are received from the backend server within the timeout period, GA returns an HTTP 504 error code to the client.
      shared_ptr<int32_t> requestTimeout_ {};
      // The ID of the security policy.
      // 
      // *   **tls_cipher_policy_1_0**
      // 
      //     *   Supported Transport Layer Security (TLS) versions: TLS 1.0, TLS 1.1, and TLS 1.2.
      //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
      // 
      // *   **tls_cipher_policy_1_1**
      // 
      //     *   Supported TLS versions: TLS 1.1 and TLS 1.2.
      //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
      // 
      // *   **tls_cipher_policy_1_2**
      // 
      //     *   Supported TLS version: TLS 1.2.
      //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
      // 
      // *   **tls_cipher_policy_1_2_strict**
      // 
      //     *   Supported TLS version: TLS 1.2.
      //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
      // 
      // *   **tls_cipher_policy_1_2_strict_with_1_3**
      // 
      //     *   Supported TLS versions: TLS 1.2 and TLS 1.3.
      //     *   Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
      // 
      // >  This parameter is returned only for HTTPS listeners.
      shared_ptr<string> securityPolicyId_ {};
      // The ID of the service that manages the instance.
      // 
      // >  This parameter is returned only if the value of **ServiceManaged** is **true**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the instance is managed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> serviceManaged_ {};
      // The actions that users can perform on the managed instance.
      // > *   This parameter is returned only if the value of **ServiceManaged** is **true**.
      // > *   Users can perform only specific actions on a managed instance.
      shared_ptr<vector<Listeners::ServiceManagedInfos>> serviceManagedInfos_ {};
      // The status of the listener. Valid values:
      // 
      // *   **active**
      // *   **init**
      // *   **updating**
      // *   **deleting**
      shared_ptr<string> state_ {};
      // The routing type of the listener. Valid values:
      // 
      // *   **Standard**: intelligent routing.
      // *   **CustomRouting**: custom routing.
      shared_ptr<string> type_ {};
      // The configurations of the `XForward` headers.
      shared_ptr<Listeners::XForwardedForConfig> XForwardedForConfig_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<ListListenersResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline vector<ListListenersResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline ListListenersResponseBody& setListeners(const vector<ListListenersResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline ListListenersResponseBody& setListeners(vector<ListListenersResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListenersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListenersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the listeners.
    shared_ptr<vector<ListListenersResponseBody::Listeners>> listeners_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
