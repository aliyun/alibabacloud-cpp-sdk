// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERREQUEST_HPP_
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
  class UpdateListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(ClientAffinity, clientAffinity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpVersion, httpVersion_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ProxyProtocol, proxyProtocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(ClientAffinity, clientAffinity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpVersion, httpVersion_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocol, proxyProtocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    UpdateListenerRequest() = default ;
    UpdateListenerRequest(const UpdateListenerRequest &) = default ;
    UpdateListenerRequest(UpdateListenerRequest &&) = default ;
    UpdateListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerRequest() = default ;
    UpdateListenerRequest& operator=(const UpdateListenerRequest &) = default ;
    UpdateListenerRequest& operator=(UpdateListenerRequest &&) = default ;
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
      // Specifies whether to use the `GA-AP` header to retrieve information about acceleration regions. Valid values:
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
      // The first port of the listener port range that is used to receive and forward requests to endpoints.
      // 
      // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
      // 
      // The maximum number of ports that can be configured varies based on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
      // 
      // > You can configure only one listener port for an HTTP or HTTPS listener. In this case, the first port is the same as the last port.
      // 
      // This parameter is required.
      shared_ptr<int32_t> fromPort_ {};
      // The last port of the listener port range that is used to receive and forward requests to endpoints.
      // 
      // Valid values: **1** to **65499**. The **FromPort** value must be smaller than or equal to the **ToPort** value.
      // 
      // The maximum number of ports that can be configured varies based on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
      // 
      // > You can configure only one listener port for an HTTP or HTTPS listener. In this case, the first port is the same as the last port.
      // 
      // This parameter is required.
      shared_ptr<int32_t> toPort_ {};
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
      // > This parameter is required only when you configure an HTTPS listener.
      shared_ptr<string> id_ {};
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
      inline int32_t getFromPort() const { DARABONBA_PTR_GET_DEFAULT(fromPort_, 0) };
      inline BackendPorts& setFromPort(int32_t fromPort) { DARABONBA_PTR_SET_VALUE(fromPort_, fromPort) };


      // toPort Field Functions 
      bool hasToPort() const { return this->toPort_ != nullptr;};
      void deleteToPort() { this->toPort_ = nullptr;};
      inline int32_t getToPort() const { DARABONBA_PTR_GET_DEFAULT(toPort_, 0) };
      inline BackendPorts& setToPort(int32_t toPort) { DARABONBA_PTR_SET_VALUE(toPort_, toPort) };


    protected:
      // The first port in the range of ports that are used by backend servers to receive requests.
      // 
      // > This parameter is required only when you configure an HTTPS or HTTP listener and the listener port is different from the service port of the backend servers. In this case, the first port that is used by the backend servers to receive requests must be the same as the last port.
      shared_ptr<int32_t> fromPort_ {};
      // The last port in the range of ports that are used by backend servers to receive requests.
      // 
      // > This parameter is required only when you configure an HTTPS or HTTP listener and the listener port is different from the service port of the backend servers. In this case, the first port that is used by the backend servers to receive requests must be the same as the last port.
      shared_ptr<int32_t> toPort_ {};
    };

    virtual bool empty() const override { return this->backendPorts_ == nullptr
        && this->certificates_ == nullptr && this->clientAffinity_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->httpVersion_ == nullptr
        && this->idleTimeout_ == nullptr && this->listenerId_ == nullptr && this->name_ == nullptr && this->portRanges_ == nullptr && this->protocol_ == nullptr
        && this->proxyProtocol_ == nullptr && this->regionId_ == nullptr && this->requestTimeout_ == nullptr && this->securityPolicyId_ == nullptr && this->XForwardedForConfig_ == nullptr; };
    // backendPorts Field Functions 
    bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
    void deleteBackendPorts() { this->backendPorts_ = nullptr;};
    inline const vector<UpdateListenerRequest::BackendPorts> & getBackendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<UpdateListenerRequest::BackendPorts>) };
    inline vector<UpdateListenerRequest::BackendPorts> getBackendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<UpdateListenerRequest::BackendPorts>) };
    inline UpdateListenerRequest& setBackendPorts(const vector<UpdateListenerRequest::BackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
    inline UpdateListenerRequest& setBackendPorts(vector<UpdateListenerRequest::BackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<UpdateListenerRequest::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<UpdateListenerRequest::Certificates>) };
    inline vector<UpdateListenerRequest::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<UpdateListenerRequest::Certificates>) };
    inline UpdateListenerRequest& setCertificates(const vector<UpdateListenerRequest::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline UpdateListenerRequest& setCertificates(vector<UpdateListenerRequest::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientAffinity Field Functions 
    bool hasClientAffinity() const { return this->clientAffinity_ != nullptr;};
    void deleteClientAffinity() { this->clientAffinity_ = nullptr;};
    inline string getClientAffinity() const { DARABONBA_PTR_GET_DEFAULT(clientAffinity_, "") };
    inline UpdateListenerRequest& setClientAffinity(string clientAffinity) { DARABONBA_PTR_SET_VALUE(clientAffinity_, clientAffinity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateListenerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpVersion Field Functions 
    bool hasHttpVersion() const { return this->httpVersion_ != nullptr;};
    void deleteHttpVersion() { this->httpVersion_ = nullptr;};
    inline string getHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(httpVersion_, "") };
    inline UpdateListenerRequest& setHttpVersion(string httpVersion) { DARABONBA_PTR_SET_VALUE(httpVersion_, httpVersion) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateListenerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<UpdateListenerRequest::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<UpdateListenerRequest::PortRanges>) };
    inline vector<UpdateListenerRequest::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<UpdateListenerRequest::PortRanges>) };
    inline UpdateListenerRequest& setPortRanges(const vector<UpdateListenerRequest::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline UpdateListenerRequest& setPortRanges(vector<UpdateListenerRequest::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateListenerRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // proxyProtocol Field Functions 
    bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
    void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
    inline string getProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, "") };
    inline UpdateListenerRequest& setProxyProtocol(string proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline UpdateListenerRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateListenerRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const UpdateListenerRequest::XForwardedForConfig & getXForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, UpdateListenerRequest::XForwardedForConfig) };
    inline UpdateListenerRequest::XForwardedForConfig getXForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, UpdateListenerRequest::XForwardedForConfig) };
    inline UpdateListenerRequest& setXForwardedForConfig(const UpdateListenerRequest::XForwardedForConfig & xForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, xForwardedForConfig) };
    inline UpdateListenerRequest& setXForwardedForConfig(UpdateListenerRequest::XForwardedForConfig && xForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, xForwardedForConfig) };


  protected:
    // The range of ports that are used by backend servers to receive requests.
    shared_ptr<vector<UpdateListenerRequest::BackendPorts>> backendPorts_ {};
    // The SSL certificate.
    shared_ptr<vector<UpdateListenerRequest::Certificates>> certificates_ {};
    // Indicates whether client affinity is enabled for the listener. Valid values:
    // 
    // *   **NONE**: Client affinity is disabled. Requests from the same client may be forwarded to different endpoints.
    // *   **SOURCE_IP**: Client affinity is enabled. When a client accesses stateful applications, requests from the same client are forwarded to the same endpoint regardless of the source port or protocol.
    shared_ptr<string> clientAffinity_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the listener.
    // 
    // The description can be up to 200 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The maximum version of the HTTP protocol. Valid values:
    // 
    // *   **http3**
    // *   **http2**
    // *   **http1.1**
    // 
    // >  Only HTTPS listeners support this parameter.
    shared_ptr<string> httpVersion_ {};
    // The timeout period for idle connections. Unit: seconds.
    // 
    // *   TCP: 10-900. Default value: 900. Unit: seconds.
    // *   UDP: 10-20. Default value: 20. Unit: seconds.
    // *   HTTP/HTTPS: 1-60. Default value: 15. Unit: seconds.
    shared_ptr<int32_t> idleTimeout_ {};
    // The ID of the listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The name of the listener.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    // The listener ports that are used to receive requests and forward the requests to endpoints.
    // 
    // Valid values: **1** to **65499**.
    // 
    // The maximum number of ports that can be configured varies based on the routing type and protocol of the listener. For more information, see [Listener overview](https://help.aliyun.com/document_detail/153216.html).
    shared_ptr<vector<UpdateListenerRequest::PortRanges>> portRanges_ {};
    // The network transmission protocol that is used by the listener. Valid values:
    // 
    // *   **tcp**: TCP
    // *   **udp**: UDP
    // *   **http**: HTTP
    // *   **https**: HTTPS
    shared_ptr<string> protocol_ {};
    // Specifies whether to preserve source IP addresses of clients.
    // 
    // *   **true** This feature allows you to view client IP addresses on backend servers.
    // *   **false** (default)
    // 
    // >  This parameter will be discontinued in the API operations that are used to configure listeners. We recommend that you set this parameter when you call API operations to configure endpoint groups. For more information about the **ProxyProtocol** parameter, see [CreateEndpointGroup](https://help.aliyun.com/document_detail/153259.html) and [UpdateEndpointGroup](https://help.aliyun.com/document_detail/153262.html).
    shared_ptr<string> proxyProtocol_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
    // The timeout period for HTTP or HTTPS requests.
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
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
    // 
    // *   **tls_cipher_policy_1_1**
    // 
    //     *   Supported TLS versions: TLS 1.1 and TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
    // 
    // *   **tls_cipher_policy_1_2**
    // 
    //     *   Supported TLS version: TLS 1.2
    //     *   Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
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
    // The `XForward` headers.
    shared_ptr<UpdateListenerRequest::XForwardedForConfig> XForwardedForConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
