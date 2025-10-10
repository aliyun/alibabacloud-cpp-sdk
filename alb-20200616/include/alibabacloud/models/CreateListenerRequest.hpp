// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateListenerRequestCaCertificates.hpp>
#include <alibabacloud/models/CreateListenerRequestCertificates.hpp>
#include <alibabacloud/models/CreateListenerRequestDefaultActions.hpp>
#include <alibabacloud/models/CreateListenerRequestQuicConfig.hpp>
#include <alibabacloud/models/CreateListenerRequestTag.hpp>
#include <alibabacloud/models/CreateListenerRequestXForwardedForConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    virtual bool empty() const override { this->caCertificates_ != nullptr
        && this->caEnabled_ != nullptr && this->certificates_ != nullptr && this->clientToken_ != nullptr && this->defaultActions_ != nullptr && this->dryRun_ != nullptr
        && this->gzipEnabled_ != nullptr && this->http2Enabled_ != nullptr && this->idleTimeout_ != nullptr && this->listenerDescription_ != nullptr && this->listenerPort_ != nullptr
        && this->listenerProtocol_ != nullptr && this->loadBalancerId_ != nullptr && this->quicConfig_ != nullptr && this->requestTimeout_ != nullptr && this->securityPolicyId_ != nullptr
        && this->tag_ != nullptr && this->XForwardedForConfig_ != nullptr; };
    // caCertificates Field Functions 
    bool hasCaCertificates() const { return this->caCertificates_ != nullptr;};
    void deleteCaCertificates() { this->caCertificates_ = nullptr;};
    inline const vector<CreateListenerRequestCaCertificates> & caCertificates() const { DARABONBA_PTR_GET_CONST(caCertificates_, vector<CreateListenerRequestCaCertificates>) };
    inline vector<CreateListenerRequestCaCertificates> caCertificates() { DARABONBA_PTR_GET(caCertificates_, vector<CreateListenerRequestCaCertificates>) };
    inline CreateListenerRequest& setCaCertificates(const vector<CreateListenerRequestCaCertificates> & caCertificates) { DARABONBA_PTR_SET_VALUE(caCertificates_, caCertificates) };
    inline CreateListenerRequest& setCaCertificates(vector<CreateListenerRequestCaCertificates> && caCertificates) { DARABONBA_PTR_SET_RVALUE(caCertificates_, caCertificates) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool caEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline CreateListenerRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<CreateListenerRequestCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<CreateListenerRequestCertificates>) };
    inline vector<CreateListenerRequestCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<CreateListenerRequestCertificates>) };
    inline CreateListenerRequest& setCertificates(const vector<CreateListenerRequestCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline CreateListenerRequest& setCertificates(vector<CreateListenerRequestCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<CreateListenerRequestDefaultActions> & defaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<CreateListenerRequestDefaultActions>) };
    inline vector<CreateListenerRequestDefaultActions> defaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<CreateListenerRequestDefaultActions>) };
    inline CreateListenerRequest& setDefaultActions(const vector<CreateListenerRequestDefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline CreateListenerRequest& setDefaultActions(vector<CreateListenerRequestDefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateListenerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool gzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline CreateListenerRequest& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline CreateListenerRequest& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string listenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline CreateListenerRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateListenerRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const CreateListenerRequestQuicConfig & quicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, CreateListenerRequestQuicConfig) };
    inline CreateListenerRequestQuicConfig quicConfig() { DARABONBA_PTR_GET(quicConfig_, CreateListenerRequestQuicConfig) };
    inline CreateListenerRequest& setQuicConfig(const CreateListenerRequestQuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline CreateListenerRequest& setQuicConfig(CreateListenerRequestQuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline CreateListenerRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateListenerRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateListenerRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateListenerRequestTag>) };
    inline vector<CreateListenerRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateListenerRequestTag>) };
    inline CreateListenerRequest& setTag(const vector<CreateListenerRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateListenerRequest& setTag(vector<CreateListenerRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const CreateListenerRequestXForwardedForConfig & XForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, CreateListenerRequestXForwardedForConfig) };
    inline CreateListenerRequestXForwardedForConfig XForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, CreateListenerRequestXForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(const CreateListenerRequestXForwardedForConfig & XForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, XForwardedForConfig) };
    inline CreateListenerRequest& setXForwardedForConfig(CreateListenerRequestXForwardedForConfig && XForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, XForwardedForConfig) };


  protected:
    // The certificate authority (CA) certificates. You can specify only one CA certificate.
    std::shared_ptr<vector<CreateListenerRequestCaCertificates>> caCertificates_ = nullptr;
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**: enables mutual authentication.
    // *   **false** (default): disables mutual authentication.
    std::shared_ptr<bool> caEnabled_ = nullptr;
    // The details about each certificate.
    std::shared_ptr<vector<CreateListenerRequestCertificates>> certificates_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The actions of the forwarding rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateListenerRequestDefaultActions>> defaultActions_ = nullptr;
    // Specifies whether to perform only a precheck. Valid values:
    // 
    // *   **true**: prechecks the request without creating a listener. The system checks the required parameters, request syntax, and limits. If the request fails the precheck, an error code is returned based on the cause of the failure. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the API request. If the request passes the precheck, a 2xx HTTP status code is returned and the system proceeds to create a listener.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether to enable `Gzip` compression to compress specific types of files. Valid values:
    // 
    // *   **true** (default): enables Gzip compression.
    // *   **false**: disables Gzip compression.
    std::shared_ptr<bool> gzipEnabled_ = nullptr;
    // Specifies whether to enable `HTTP/2`. Valid values:
    // 
    // *   **true** (default): enables HTTP/2.
    // *   **false**: disables HTTP/2.
    // 
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds.
    // 
    // Valid values: **1 to 60**.
    // 
    // Default value: **15**.
    // 
    // If no requests are received within the specified timeout period, ALB closes the current connection. When a new request is received, ALB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The name of the listener.
    // 
    // The description must be 2 to 256 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_). Regular expressions are supported.
    std::shared_ptr<string> listenerDescription_ = nullptr;
    // The frontend port that is used by the ALB instance.
    // 
    // Valid values: **1 to 65535**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol.
    // 
    // Valid values: **HTTP**, **HTTPS**, and **QUIC**.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The ID of the ALB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // Select a QUIC listener and associate it with the ALB instance.
    std::shared_ptr<CreateListenerRequestQuicConfig> quicConfig_ = nullptr;
    // The timeout period of a request. Unit: seconds.
    // 
    // Valid values: **1 to 180**.
    // 
    // Default value: **60**.
    // 
    // If no response is received from the backend server during the request timeout period, ALB sends an `HTTP 504` error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The ID of the security policy. System security policies and custom security policies are supported.
    // 
    // Default value: **tls_cipher_policy_1_0** (system security policy).
    // 
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateListenerRequestTag>> tag_ = nullptr;
    // The configuration of the XForward header.
    std::shared_ptr<CreateListenerRequestXForwardedForConfig> XForwardedForConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
