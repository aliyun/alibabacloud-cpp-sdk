// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListenersResponseBodyListenersDefaultActions.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersLogConfig.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersQuicConfig.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersTags.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersXForwardedForConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListeners& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListeners& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(XForwardedForConfig, XForwardedForConfig_);
    };
    ListListenersResponseBodyListeners() = default ;
    ListListenersResponseBodyListeners(const ListListenersResponseBodyListeners &) = default ;
    ListListenersResponseBodyListeners(ListListenersResponseBodyListeners &&) = default ;
    ListListenersResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListeners() = default ;
    ListListenersResponseBodyListeners& operator=(const ListListenersResponseBodyListeners &) = default ;
    ListListenersResponseBodyListeners& operator=(ListListenersResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultActions_ != nullptr
        && this->gzipEnabled_ != nullptr && this->http2Enabled_ != nullptr && this->idleTimeout_ != nullptr && this->listenerDescription_ != nullptr && this->listenerId_ != nullptr
        && this->listenerPort_ != nullptr && this->listenerProtocol_ != nullptr && this->listenerStatus_ != nullptr && this->loadBalancerId_ != nullptr && this->logConfig_ != nullptr
        && this->quicConfig_ != nullptr && this->requestTimeout_ != nullptr && this->securityPolicyId_ != nullptr && this->tags_ != nullptr && this->XForwardedForConfig_ != nullptr; };
    // defaultActions Field Functions 
    bool hasDefaultActions() const { return this->defaultActions_ != nullptr;};
    void deleteDefaultActions() { this->defaultActions_ = nullptr;};
    inline const vector<Models::ListListenersResponseBodyListenersDefaultActions> & defaultActions() const { DARABONBA_PTR_GET_CONST(defaultActions_, vector<Models::ListListenersResponseBodyListenersDefaultActions>) };
    inline vector<Models::ListListenersResponseBodyListenersDefaultActions> defaultActions() { DARABONBA_PTR_GET(defaultActions_, vector<Models::ListListenersResponseBodyListenersDefaultActions>) };
    inline ListListenersResponseBodyListeners& setDefaultActions(const vector<Models::ListListenersResponseBodyListenersDefaultActions> & defaultActions) { DARABONBA_PTR_SET_VALUE(defaultActions_, defaultActions) };
    inline ListListenersResponseBodyListeners& setDefaultActions(vector<Models::ListListenersResponseBodyListenersDefaultActions> && defaultActions) { DARABONBA_PTR_SET_RVALUE(defaultActions_, defaultActions) };


    // gzipEnabled Field Functions 
    bool hasGzipEnabled() const { return this->gzipEnabled_ != nullptr;};
    void deleteGzipEnabled() { this->gzipEnabled_ = nullptr;};
    inline bool gzipEnabled() const { DARABONBA_PTR_GET_DEFAULT(gzipEnabled_, false) };
    inline ListListenersResponseBodyListeners& setGzipEnabled(bool gzipEnabled) { DARABONBA_PTR_SET_VALUE(gzipEnabled_, gzipEnabled) };


    // http2Enabled Field Functions 
    bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
    void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
    inline bool http2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
    inline ListListenersResponseBodyListeners& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline ListListenersResponseBodyListeners& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string listenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline ListListenersResponseBodyListeners& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListListenersResponseBodyListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline ListListenersResponseBodyListeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListListenersResponseBodyListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // listenerStatus Field Functions 
    bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
    void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
    inline string listenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
    inline ListListenersResponseBodyListeners& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListListenersResponseBodyListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersLogConfig & logConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, Models::ListListenersResponseBodyListenersLogConfig) };
    inline Models::ListListenersResponseBodyListenersLogConfig logConfig() { DARABONBA_PTR_GET(logConfig_, Models::ListListenersResponseBodyListenersLogConfig) };
    inline ListListenersResponseBodyListeners& setLogConfig(const Models::ListListenersResponseBodyListenersLogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline ListListenersResponseBodyListeners& setLogConfig(Models::ListListenersResponseBodyListenersLogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // quicConfig Field Functions 
    bool hasQuicConfig() const { return this->quicConfig_ != nullptr;};
    void deleteQuicConfig() { this->quicConfig_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersQuicConfig & quicConfig() const { DARABONBA_PTR_GET_CONST(quicConfig_, Models::ListListenersResponseBodyListenersQuicConfig) };
    inline Models::ListListenersResponseBodyListenersQuicConfig quicConfig() { DARABONBA_PTR_GET(quicConfig_, Models::ListListenersResponseBodyListenersQuicConfig) };
    inline ListListenersResponseBodyListeners& setQuicConfig(const Models::ListListenersResponseBodyListenersQuicConfig & quicConfig) { DARABONBA_PTR_SET_VALUE(quicConfig_, quicConfig) };
    inline ListListenersResponseBodyListeners& setQuicConfig(Models::ListListenersResponseBodyListenersQuicConfig && quicConfig) { DARABONBA_PTR_SET_RVALUE(quicConfig_, quicConfig) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline ListListenersResponseBodyListeners& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListListenersResponseBodyListeners& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListListenersResponseBodyListenersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListListenersResponseBodyListenersTags>) };
    inline vector<Models::ListListenersResponseBodyListenersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListListenersResponseBodyListenersTags>) };
    inline ListListenersResponseBodyListeners& setTags(const vector<Models::ListListenersResponseBodyListenersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListListenersResponseBodyListeners& setTags(vector<Models::ListListenersResponseBodyListenersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // XForwardedForConfig Field Functions 
    bool hasXForwardedForConfig() const { return this->XForwardedForConfig_ != nullptr;};
    void deleteXForwardedForConfig() { this->XForwardedForConfig_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersXForwardedForConfig & XForwardedForConfig() const { DARABONBA_PTR_GET_CONST(XForwardedForConfig_, Models::ListListenersResponseBodyListenersXForwardedForConfig) };
    inline Models::ListListenersResponseBodyListenersXForwardedForConfig XForwardedForConfig() { DARABONBA_PTR_GET(XForwardedForConfig_, Models::ListListenersResponseBodyListenersXForwardedForConfig) };
    inline ListListenersResponseBodyListeners& setXForwardedForConfig(const Models::ListListenersResponseBodyListenersXForwardedForConfig & XForwardedForConfig) { DARABONBA_PTR_SET_VALUE(XForwardedForConfig_, XForwardedForConfig) };
    inline ListListenersResponseBodyListeners& setXForwardedForConfig(Models::ListListenersResponseBodyListenersXForwardedForConfig && XForwardedForConfig) { DARABONBA_PTR_SET_RVALUE(XForwardedForConfig_, XForwardedForConfig) };


  protected:
    // The default actions in the forwarding rules.
    std::shared_ptr<vector<Models::ListListenersResponseBodyListenersDefaultActions>> defaultActions_ = nullptr;
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
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<bool> http2Enabled_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds. Valid values: **1 to 60**.
    // 
    // If no request is received within the specified timeout period, ALB closes the connection. ALB establishes the connection again when a new connection request is received.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The name of the listener.
    std::shared_ptr<string> listenerDescription_ = nullptr;
    // The listener ID.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The frontend port that is used by the ALB instance. Valid values: **1 to 65535**.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol of the instance. Valid values:
    // 
    // *   **HTTP**
    // *   **HTTPS**
    // *   **QUIC**
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **Provisioning**: The listener is being created.
    // *   **Running**: The listener is running.
    // *   **Configuring**: The listener is being configured.
    // *   **Stopped**: The listener is disabled.
    std::shared_ptr<string> listenerStatus_ = nullptr;
    // The ALB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The logging configurations.
    std::shared_ptr<Models::ListListenersResponseBodyListenersLogConfig> logConfig_ = nullptr;
    // The configurations of the QUIC listener associated with the ALB instance.
    std::shared_ptr<Models::ListListenersResponseBodyListenersQuicConfig> quicConfig_ = nullptr;
    // The timeout period of a request. Unit: seconds. Valid values: **1 to 180**.
    // 
    // If no responses are received from the backend server within the specified timeout period, ALB returns an `HTTP 504` error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The security policy.
    // 
    // >  Only HTTPS listeners support this parameter.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListListenersResponseBodyListenersTags>> tags_ = nullptr;
    // The configuration of the `XForward` header.
    std::shared_ptr<Models::ListListenersResponseBodyListenersXForwardedForConfig> XForwardedForConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
