// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyAclConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerAttributeResponseBodyCaCertificates.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyCertificates.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyDefaultActions.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyLogConfig.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyQuicConfig.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyTags.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyXForwardedForConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_TO_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_TO_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LogConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_FROM_JSON(CaCertificates, caCertificates_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(DefaultActions, defaultActions_);
      DARABONBA_PTR_FROM_JSON(GzipEnabled, gzipEnabled_);
      DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LogConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(QuicConfig, quicConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    GetListenerAttributeResponseBody() = default ;
    GetListenerAttributeResponseBody(const GetListenerAttributeResponseBody &) = default ;
    GetListenerAttributeResponseBody(GetListenerAttributeResponseBody &&) = default ;
    GetListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBody() = default ;
    GetListenerAttributeResponseBody& operator=(const GetListenerAttributeResponseBody &) = default ;
    GetListenerAttributeResponseBody& operator=(GetListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclConfig_ != nullptr
        && this->caCertificates_ != nullptr && this->caEnabled_ != nullptr && this->certificates_ != nullptr && this->defaultActions_ != nullptr && this->gzipEnabled_ != nullptr
        && this->http2Enabled_ != nullptr && this->idleTimeout_ != nullptr && this->listenerDescription_ != nullptr && this->listenerId_ != nullptr && this->listenerPort_ != nullptr
        && this->listenerProtocol_ != nullptr && this->listenerStatus_ != nullptr && this->loadBalancerId_ != nullptr && this->logConfig_ != nullptr && this->quicConfig_ != nullptr
        && this->requestId_ != nullptr && this->requestTimeout_ != nullptr && this->securityPolicyId_ != nullptr && this->tags_ != nullptr && this->XForwardedForConfig_ != nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const GetListenerAttributeResponseBodyAclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, GetListenerAttributeResponseBodyAclConfig) };
    inline GetListenerAttributeResponseBodyAclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, GetListenerAttributeResponseBodyAclConfig) };
    inline GetListenerAttributeResponseBody& setAclConfig(const GetListenerAttributeResponseBodyAclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline GetListenerAttributeResponseBody& setAclConfig(GetListenerAttributeResponseBodyAclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // caCertificates Field Functions 
    bool hasCaCertificates() const { return this->caCertificates_ != nullptr;};
    void deleteCaCertificates() { this->caCertificates_ = nullptr;};
    inline const vector<GetListenerAttributeResponseBodyCaCertificates> & caCertificates() const { DARABONBA_PTR_GET_CONST(caCertificates_, vector<GetListenerAttributeResponseBodyCaCertificates>) };
    inline vector<GetListenerAttributeResponseBodyCaCertificates> caCertificates() { DARABONBA_PTR_GET(caCertificates_, vector<GetListenerAttributeResponseBodyCaCertificates>) };
    inline GetListenerAttributeResponseBody& setCaCertificates(const vector<GetListenerAttributeResponseBodyCaCertificates> & caCertificates) { DARABONBA_PTR_SET_VALUE(caCertificates_, caCertificates) };
    inline GetListenerAttributeResponseBody& setCaCertificates(vector<GetListenerAttributeResponseBodyCaCertificates> && caCertificates) { DARABONBA_PTR_SET_RVALUE(caCertificates_, caCertificates) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool caEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline GetListenerAttributeResponseBody& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<GetListenerAttributeResponseBodyCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<GetListenerAttributeResponseBodyCertificates>) };
    inline vector<GetListenerAttributeResponseBodyCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<GetListenerAttributeResponseBodyCertificates>) };
    inline GetListenerAttributeResponseBody& setCertificates(const vector<GetListenerAttributeResponseBodyCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline GetListenerAttributeResponseBody& setCertificates(vector<GetListenerAttributeResponseBodyCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<GetListenerAttributeResponseBodyDefaultActions> & defaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<GetListenerAttributeResponseBodyDefaultActions>) };
    inline vector<GetListenerAttributeResponseBodyDefaultActions> defaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<GetListenerAttributeResponseBodyDefaultActions>) };
    inline GetListenerAttributeResponseBody& setDefaultActions(const vector<GetListenerAttributeResponseBodyDefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline GetListenerAttributeResponseBody& setDefaultActions(vector<GetListenerAttributeResponseBodyDefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool gzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline GetListenerAttributeResponseBody& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline GetListenerAttributeResponseBody& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline GetListenerAttributeResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string listenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline GetListenerAttributeResponseBody& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerAttributeResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline GetListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline GetListenerAttributeResponseBody& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // listenerStatus Field Functions 
    bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
    void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
    inline string listenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
    inline GetListenerAttributeResponseBody& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline GetListenerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const GetListenerAttributeResponseBodyLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, GetListenerAttributeResponseBodyLogConfig) };
    inline GetListenerAttributeResponseBodyLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, GetListenerAttributeResponseBodyLogConfig) };
    inline GetListenerAttributeResponseBody& setLogConfig(const GetListenerAttributeResponseBodyLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline GetListenerAttributeResponseBody& setLogConfig(GetListenerAttributeResponseBodyLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const GetListenerAttributeResponseBodyQuicConfig & quicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, GetListenerAttributeResponseBodyQuicConfig) };
    inline GetListenerAttributeResponseBodyQuicConfig quicConfig() { DARABONBA_PTR_GET(quicConfig_, GetListenerAttributeResponseBodyQuicConfig) };
    inline GetListenerAttributeResponseBody& setQuicConfig(const GetListenerAttributeResponseBodyQuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline GetListenerAttributeResponseBody& setQuicConfig(GetListenerAttributeResponseBodyQuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline GetListenerAttributeResponseBody& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline GetListenerAttributeResponseBody& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetListenerAttributeResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetListenerAttributeResponseBodyTags>) };
    inline vector<GetListenerAttributeResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetListenerAttributeResponseBodyTags>) };
    inline GetListenerAttributeResponseBody& setTags(const vector<GetListenerAttributeResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetListenerAttributeResponseBody& setTags(vector<GetListenerAttributeResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const GetListenerAttributeResponseBodyXForwardedForConfig & XForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, GetListenerAttributeResponseBodyXForwardedForConfig) };
    inline GetListenerAttributeResponseBodyXForwardedForConfig XForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, GetListenerAttributeResponseBodyXForwardedForConfig) };
    inline GetListenerAttributeResponseBody& setXForwardedForConfig(const GetListenerAttributeResponseBodyXForwardedForConfig & XForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, XForwardedForConfig) };
    inline GetListenerAttributeResponseBody& setXForwardedForConfig(GetListenerAttributeResponseBodyXForwardedForConfig && XForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, XForwardedForConfig) };


  protected:
    // The configurations of the access control lists (ACLs).
    std::shared_ptr<GetListenerAttributeResponseBodyAclConfig> aclConfig_ = nullptr;
    // A list of default CA certificates.
    std::shared_ptr<vector<GetListenerAttributeResponseBodyCaCertificates>> caCertificates_ = nullptr;
    // Indicates whether mutual authentication is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> caEnabled_ = nullptr;
    // A list of certificates.
    std::shared_ptr<vector<GetListenerAttributeResponseBodyCertificates>> certificates_ = nullptr;
    // The actions of the default forwarding rule.
    std::shared_ptr<vector<GetListenerAttributeResponseBodyDefaultActions>> defaultActions_ = nullptr;
    // Indicates whether GZIP compression is enabled to compress specific types of files. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> gzipEnabled_ = nullptr;
    // Indicates whether HTTP/2 is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > This parameter is available only when you create an HTTPS listener.
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds.
    // 
    // If no requests are received within the specified timeout period, Application Load Balancer (ALB) closes the current connection. When a request is received, ALB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The name of the listener.
    std::shared_ptr<string> listenerDescription_ = nullptr;
    // The ID of the listener.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The frontend port that is used by the ALB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol. Valid values: **HTTP**, **HTTPS**, and **QUIC**.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **Provisioning**
    // *   **Running**
    // *   **Configuring**
    // *   **Stopped**
    std::shared_ptr<string> listenerStatus_ = nullptr;
    // The ALB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The logging configuration.
    std::shared_ptr<GetListenerAttributeResponseBodyLogConfig> logConfig_ = nullptr;
    // The configuration information when the listener is associated with a QUIC listener.
    std::shared_ptr<GetListenerAttributeResponseBodyQuicConfig> quicConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timeout period of a request. Unit: seconds.
    // 
    // If no responses are received from the backend server within the specified timeout period, ALB returns an `HTTP 504` error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The security policy.
    // 
    // > This parameter is available only when you create an HTTPS listener.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetListenerAttributeResponseBodyTags>> tags_ = nullptr;
    // The configuration of the XForward headers.
    std::shared_ptr<GetListenerAttributeResponseBodyXForwardedForConfig> XForwardedForConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
