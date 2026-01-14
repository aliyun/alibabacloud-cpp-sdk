// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTENERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTENERRESPONSEBODY_HPP_
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
  class DescribeListenerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListenerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
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
      DARABONBA_PTR_TO_JSON(RelatedAcls, relatedAcls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListenerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
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
      DARABONBA_PTR_FROM_JSON(RelatedAcls, relatedAcls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    DescribeListenerResponseBody() = default ;
    DescribeListenerResponseBody(const DescribeListenerResponseBody &) = default ;
    DescribeListenerResponseBody(DescribeListenerResponseBody &&) = default ;
    DescribeListenerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListenerResponseBody() = default ;
    DescribeListenerResponseBody& operator=(const DescribeListenerResponseBody &) = default ;
    DescribeListenerResponseBody& operator=(DescribeListenerResponseBody &&) = default ;
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
      // Indicates whether the `GA-AP` header is used to retrieve information about acceleration regions. Valid values:
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
      // *   **Listener**: a listener.
      // *   **IpSet**: an acceleration region.
      // *   **EndpointGroup**: an endpoint group.
      // *   **ForwardingRule**: a forwarding rule.
      // *   **Endpoint**: an endpoint.
      // *   **EndpointGroupDestination**: a protocol mapping of an endpoint group associated with a custom routing listener.
      // *   **EndpointPolicy**: a traffic policy of an endpoint associated with a custom routing listener.
      // 
      // >  This parameter is returned only if the value of **Action** is **CreateChild**.
      shared_ptr<string> childType_ {};
      // Indicates whether the specified actions are managed.
      // 
      // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed instance.
      // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed instance.
      shared_ptr<bool> isManaged_ {};
    };

    class RelatedAcls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedAcls& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedAcls& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RelatedAcls() = default ;
      RelatedAcls(const RelatedAcls &) = default ;
      RelatedAcls(RelatedAcls &&) = default ;
      RelatedAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedAcls() = default ;
      RelatedAcls& operator=(const RelatedAcls &) = default ;
      RelatedAcls& operator=(RelatedAcls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->status_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline RelatedAcls& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RelatedAcls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the ACL that is associated with the listener.
      shared_ptr<string> aclId_ {};
      // Indicates whether the access control feature is enabled. Valid values:
      // 
      // *   **on**: enabled.
      // *   **off**: disabled.
      shared_ptr<string> status_ {};
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
      // The first port in the range of listener ports that are used to receive and forward requests to endpoints.
      shared_ptr<int32_t> fromPort_ {};
      // The last port in the range of listener ports that are used to receive and forward requests to endpoints.
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
      // The first port in the range of ports that are used by the backend server to receive requests.
      // 
      // This parameter is returned only if an HTTPS listener is configured and the listener port is the same as the service port of the backend server.
      shared_ptr<string> fromPort_ {};
      // The last port in the range of ports that are used by the backend server to receive requests.
      shared_ptr<string> toPort_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->aclType_ == nullptr && this->backendPorts_ == nullptr && this->certificates_ == nullptr && this->clientAffinity_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->httpVersion_ == nullptr && this->idleTimeout_ == nullptr && this->listenerId_ == nullptr && this->name_ == nullptr
        && this->portRanges_ == nullptr && this->protocol_ == nullptr && this->proxyProtocol_ == nullptr && this->relatedAcls_ == nullptr && this->requestId_ == nullptr
        && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr
        && this->state_ == nullptr && this->type_ == nullptr && this->XForwardedForConfig_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeListenerResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeListenerResponseBody& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendPorts Field Functions 
    bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
    void deleteBackendPorts() { this->backendPorts_ = nullptr;};
    inline const vector<DescribeListenerResponseBody::BackendPorts> & getBackendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<DescribeListenerResponseBody::BackendPorts>) };
    inline vector<DescribeListenerResponseBody::BackendPorts> getBackendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<DescribeListenerResponseBody::BackendPorts>) };
    inline DescribeListenerResponseBody& setBackendPorts(const vector<DescribeListenerResponseBody::BackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
    inline DescribeListenerResponseBody& setBackendPorts(vector<DescribeListenerResponseBody::BackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<DescribeListenerResponseBody::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<DescribeListenerResponseBody::Certificates>) };
    inline vector<DescribeListenerResponseBody::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<DescribeListenerResponseBody::Certificates>) };
    inline DescribeListenerResponseBody& setCertificates(const vector<DescribeListenerResponseBody::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline DescribeListenerResponseBody& setCertificates(vector<DescribeListenerResponseBody::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientAffinity Field Functions 
    bool hasClientAffinity() const { return this->clientAffinity_ != nullptr;};
    void deleteClientAffinity() { this->clientAffinity_ = nullptr;};
    inline string getClientAffinity() const { DARABONBA_PTR_GET_DEFAULT(clientAffinity_, "") };
    inline DescribeListenerResponseBody& setClientAffinity(string clientAffinity) { DARABONBA_PTR_SET_VALUE(clientAffinity_, clientAffinity) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeListenerResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeListenerResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpVersion Field Functions 
    bool hasHttpVersion() const { return this->httpVersion_ != nullptr;};
    void deleteHttpVersion() { this->httpVersion_ = nullptr;};
    inline string getHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(httpVersion_, "") };
    inline DescribeListenerResponseBody& setHttpVersion(string httpVersion) { DARABONBA_PTR_SET_VALUE(httpVersion_, httpVersion) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeListenerResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline DescribeListenerResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeListenerResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<DescribeListenerResponseBody::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<DescribeListenerResponseBody::PortRanges>) };
    inline vector<DescribeListenerResponseBody::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<DescribeListenerResponseBody::PortRanges>) };
    inline DescribeListenerResponseBody& setPortRanges(const vector<DescribeListenerResponseBody::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline DescribeListenerResponseBody& setPortRanges(vector<DescribeListenerResponseBody::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeListenerResponseBody& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // proxyProtocol Field Functions 
    bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
    void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
    inline bool getProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, false) };
    inline DescribeListenerResponseBody& setProxyProtocol(bool proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


    // relatedAcls Field Functions 
    bool hasRelatedAcls() const { return this->relatedAcls_ != nullptr;};
    void deleteRelatedAcls() { this->relatedAcls_ = nullptr;};
    inline const vector<DescribeListenerResponseBody::RelatedAcls> & getRelatedAcls() const { DARABONBA_PTR_GET_CONST(relatedAcls_, vector<DescribeListenerResponseBody::RelatedAcls>) };
    inline vector<DescribeListenerResponseBody::RelatedAcls> getRelatedAcls() { DARABONBA_PTR_GET(relatedAcls_, vector<DescribeListenerResponseBody::RelatedAcls>) };
    inline DescribeListenerResponseBody& setRelatedAcls(const vector<DescribeListenerResponseBody::RelatedAcls> & relatedAcls) { DARABONBA_PTR_SET_VALUE(relatedAcls_, relatedAcls) };
    inline DescribeListenerResponseBody& setRelatedAcls(vector<DescribeListenerResponseBody::RelatedAcls> && relatedAcls) { DARABONBA_PTR_SET_RVALUE(relatedAcls_, relatedAcls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListenerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeListenerResponseBody& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline DescribeListenerResponseBody& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeListenerResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeListenerResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // serviceManagedInfos Field Functions 
    bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
    void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
    inline const vector<DescribeListenerResponseBody::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<DescribeListenerResponseBody::ServiceManagedInfos>) };
    inline vector<DescribeListenerResponseBody::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<DescribeListenerResponseBody::ServiceManagedInfos>) };
    inline DescribeListenerResponseBody& setServiceManagedInfos(const vector<DescribeListenerResponseBody::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
    inline DescribeListenerResponseBody& setServiceManagedInfos(vector<DescribeListenerResponseBody::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeListenerResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeListenerResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const DescribeListenerResponseBody::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, DescribeListenerResponseBody::XForwardedForConfig) };
    inline DescribeListenerResponseBody::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, DescribeListenerResponseBody::XForwardedForConfig) };
    inline DescribeListenerResponseBody& setXForwardedForConfig(const DescribeListenerResponseBody::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
    inline DescribeListenerResponseBody& setXForwardedForConfig(DescribeListenerResponseBody::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


  protected:
    // The ID of the GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The type of the ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the ACL are forwarded. Whitelists are suitable for scenarios in which you want to allow only specific IP addresses to access an application. If a whitelist is improperly configured, risks may arise. After a whitelist is configured for a listener, only requests from the IP addresses that are added to the whitelist are distributed by the listener. If the whitelist is enabled but no IP addresses are added to the ACL, the listener does not forward requests.
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the ACL are blocked. Blacklists are suitable for scenarios in which you want to deny access from specific IP addresses to an application. If the blacklist is enabled but no IP addresses are added to the ACL, the listener forwards all requests.
    // 
    // This parameter is returned only if the value of **Status** is **on**.
    shared_ptr<string> aclType_ {};
    // The information about the backend ports.
    shared_ptr<vector<DescribeListenerResponseBody::BackendPorts>> backendPorts_ {};
    // The SSL certificates.
    shared_ptr<vector<DescribeListenerResponseBody::Certificates>> certificates_ {};
    // Indicates whether client affinity is enabled for the listener.
    // 
    // *   If **NONE** is returned, client affinity is disabled. Requests from the same client may be forwarded to different endpoints.
    // *   If **SOURCE_IP** is returned, client affinity is enabled. When a client accesses stateful applications, requests from the same client are forwarded to the same endpoint regardless of the source port or protocol.
    shared_ptr<string> clientAffinity_ {};
    // The time when the listener was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    shared_ptr<string> createTime_ {};
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
    shared_ptr<vector<DescribeListenerResponseBody::PortRanges>> portRanges_ {};
    // The network transmission protocol that is used by the listener. Valid values:
    // 
    // *   **tcp**: TCP.
    // *   **udp**: UDP.
    // *   **http**: HTTP.
    // *   **https**: HTTPS.
    shared_ptr<string> protocol_ {};
    // Indicates whether the client IP address preservation feature is enabled. Valid values:
    // 
    // *   **true** You can view the source IP addresses of clients over the backend service.
    // *   **false**
    shared_ptr<bool> proxyProtocol_ {};
    // The information about the access control list (ACL) that is associated with the listener.
    shared_ptr<vector<DescribeListenerResponseBody::RelatedAcls>> relatedAcls_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The timeout period of HTTP or HTTPS requests. Unit: seconds.
    // 
    // >  This parameter is returned only for HTTP and HTTPS listeners. If no responses are received from the backend server within the specified timeout period, GA returns the HTTP 504 error code to the client.
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
    // >*   This parameter is returned only if the value of **ServiceManaged** is **true**.
    // >*   Users can perform only specific actions on a managed instance.
    shared_ptr<vector<DescribeListenerResponseBody::ServiceManagedInfos>> serviceManagedInfos_ {};
    // The status of the listener. Valid values:
    // 
    // *   **configuring**: The listener is being configured.
    // *   **init**: The listener is being initialized.
    // *   **updating**: The listener is being updated.
    // *   **deleting:** The listener is being deleted.
    shared_ptr<string> state_ {};
    // The routing type of the listener. Valid values:
    // 
    // *   **Standard**: intelligent routing.
    // *   **CustomRouting**: custom routing.
    shared_ptr<string> type_ {};
    // The configurations of the `XForward` headers.
    shared_ptr<DescribeListenerResponseBody::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
