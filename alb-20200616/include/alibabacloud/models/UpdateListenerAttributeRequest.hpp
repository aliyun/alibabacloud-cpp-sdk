// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateListenerAttributeRequestCaCertificates.hpp>
#include <alibabacloud/models/UpdateListenerAttributeRequestCertificates.hpp>
#include <alibabacloud/models/UpdateListenerAttributeRequestDefaultActions.hpp>
#include <alibabacloud/models/UpdateListenerAttributeRequestQuicConfig.hpp>
#include <alibabacloud/models/UpdateListenerAttributeRequestXForwardedForConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest(UpdateListenerAttributeRequest &&) = default ;
    UpdateListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest& operator=(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest& operator=(UpdateListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caCertificates_ != nullptr
        && this->caEnabled_ != nullptr && this->certificates_ != nullptr && this->clientToken_ != nullptr && this->defaultActions_ != nullptr && this->dryRun_ != nullptr
        && this->gzipEnabled_ != nullptr && this->http2Enabled_ != nullptr && this->idleTimeout_ != nullptr && this->listenerDescription_ != nullptr && this->listenerId_ != nullptr
        && this->quicConfig_ != nullptr && this->requestTimeout_ != nullptr && this->securityPolicyId_ != nullptr && this->XForwardedForConfig_ != nullptr; };
    // caCertificates Field Functions 
    bool hasCaCertificates() const { return this->caCertificates_ != nullptr;};
    void deleteCaCertificates() { this->caCertificates_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequestCaCertificates> & caCertificates() const { DARABONBA_PTR_GET_CONST(caCertificates_, vector<UpdateListenerAttributeRequestCaCertificates>) };
    inline vector<UpdateListenerAttributeRequestCaCertificates> caCertificates() { DARABONBA_PTR_GET(caCertificates_, vector<UpdateListenerAttributeRequestCaCertificates>) };
    inline UpdateListenerAttributeRequest& setCaCertificates(const vector<UpdateListenerAttributeRequestCaCertificates> & caCertificates) { DARABONBA_PTR_SET_VALUE(caCertificates_, caCertificates) };
    inline UpdateListenerAttributeRequest& setCaCertificates(vector<UpdateListenerAttributeRequestCaCertificates> && caCertificates) { DARABONBA_PTR_SET_RVALUE(caCertificates_, caCertificates) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool caEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline UpdateListenerAttributeRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequestCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<UpdateListenerAttributeRequestCertificates>) };
    inline vector<UpdateListenerAttributeRequestCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<UpdateListenerAttributeRequestCertificates>) };
    inline UpdateListenerAttributeRequest& setCertificates(const vector<UpdateListenerAttributeRequestCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline UpdateListenerAttributeRequest& setCertificates(vector<UpdateListenerAttributeRequestCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<UpdateListenerAttributeRequestDefaultActions> & defaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<UpdateListenerAttributeRequestDefaultActions>) };
    inline vector<UpdateListenerAttributeRequestDefaultActions> defaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<UpdateListenerAttributeRequestDefaultActions>) };
    inline UpdateListenerAttributeRequest& setDefaultActions(const vector<UpdateListenerAttributeRequestDefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline UpdateListenerAttributeRequest& setDefaultActions(vector<UpdateListenerAttributeRequestDefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool gzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline UpdateListenerAttributeRequest& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline UpdateListenerAttributeRequest& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string listenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline UpdateListenerAttributeRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerAttributeRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const UpdateListenerAttributeRequestQuicConfig & quicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, UpdateListenerAttributeRequestQuicConfig) };
    inline UpdateListenerAttributeRequestQuicConfig quicConfig() { DARABONBA_PTR_GET(quicConfig_, UpdateListenerAttributeRequestQuicConfig) };
    inline UpdateListenerAttributeRequest& setQuicConfig(const UpdateListenerAttributeRequestQuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline UpdateListenerAttributeRequest& setQuicConfig(UpdateListenerAttributeRequestQuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateListenerAttributeRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const UpdateListenerAttributeRequestXForwardedForConfig & XForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, UpdateListenerAttributeRequestXForwardedForConfig) };
    inline UpdateListenerAttributeRequestXForwardedForConfig XForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, UpdateListenerAttributeRequestXForwardedForConfig) };
    inline UpdateListenerAttributeRequest& setXForwardedForConfig(const UpdateListenerAttributeRequestXForwardedForConfig & XForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, XForwardedForConfig) };
    inline UpdateListenerAttributeRequest& setXForwardedForConfig(UpdateListenerAttributeRequestXForwardedForConfig && XForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, XForwardedForConfig) };


  protected:
    // The CA certificate. You can specify only one CA certificate.
    std::shared_ptr<vector<UpdateListenerAttributeRequestCaCertificates>> caCertificates_ = nullptr;
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> caEnabled_ = nullptr;
    // The certificates. You can add at most 20 certificates.
    // 
    // >  Only server certificates are supported.
    std::shared_ptr<vector<UpdateListenerAttributeRequestCertificates>> certificates_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The actions of the default forwarding rule.
    std::shared_ptr<vector<UpdateListenerAttributeRequestDefaultActions>> defaultActions_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx HTTP` status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether to enable GZIP compression for specific types of files. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> gzipEnabled_ = nullptr;
    // Specifies whether to enable HTTP/2. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > This parameter is available only when you create an HTTPS listener.
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The timeout period for idle connections. Unit: seconds. Valid values: **1 to 60**
    // 
    // If no requests are received within the specified timeout period, ALB closes the current connection. When another request is received, ALB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    std::shared_ptr<string> listenerDescription_ = nullptr;
    // The ID of the Application Load Balancer (ALB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The configuration information when the listener is associated with a QUIC listener.
    std::shared_ptr<UpdateListenerAttributeRequestQuicConfig> quicConfig_ = nullptr;
    // The timeout period of a request. Unit: seconds. Valid values: **1 to 180**.
    // 
    // If no response is received from the backend server within the specified timeout period, ALB returns an `HTTP 504` error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The security policy ID. System security policies and custom security policies are supported.
    // 
    // > This parameter is available only when you create an HTTPS listener.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The configurations of the X-Forwarded-For header.
    std::shared_ptr<UpdateListenerAttributeRequestXForwardedForConfig> XForwardedForConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
