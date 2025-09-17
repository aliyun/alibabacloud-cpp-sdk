// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINREQUESTREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINREQUESTREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDomainRequestRedirectBackendPorts.hpp>
#include <alibabacloud/models/ModifyDomainRequestRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainRequestRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainRequestRedirect& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_TO_JSON(Backends, backends_);
      DARABONBA_PTR_TO_JSON(BackupBackends, backupBackends_);
      DARABONBA_PTR_TO_JSON(CnameEnabled, cnameEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(FocusHttpBackend, focusHttpBackend_);
      DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_TO_JSON(Loadbalance, loadbalance_);
      DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(RoutingRules, routingRules_);
      DARABONBA_PTR_TO_JSON(SniEnabled, sniEnabled_);
      DARABONBA_PTR_TO_JSON(SniHost, sniHost_);
      DARABONBA_PTR_TO_JSON(WLProxyClientIp, WLProxyClientIp_);
      DARABONBA_PTR_TO_JSON(WebServerType, webServerType_);
      DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_TO_JSON(XClientIp, XClientIp_);
      DARABONBA_PTR_TO_JSON(XTrueIp, XTrueIp_);
      DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainRequestRedirect& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_FROM_JSON(Backends, backends_);
      DARABONBA_PTR_FROM_JSON(BackupBackends, backupBackends_);
      DARABONBA_PTR_FROM_JSON(CnameEnabled, cnameEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(FocusHttpBackend, focusHttpBackend_);
      DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_FROM_JSON(Loadbalance, loadbalance_);
      DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(RoutingRules, routingRules_);
      DARABONBA_PTR_FROM_JSON(SniEnabled, sniEnabled_);
      DARABONBA_PTR_FROM_JSON(SniHost, sniHost_);
      DARABONBA_PTR_FROM_JSON(WLProxyClientIp, WLProxyClientIp_);
      DARABONBA_PTR_FROM_JSON(WebServerType, webServerType_);
      DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_FROM_JSON(XClientIp, XClientIp_);
      DARABONBA_PTR_FROM_JSON(XTrueIp, XTrueIp_);
      DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
    };
    ModifyDomainRequestRedirect() = default ;
    ModifyDomainRequestRedirect(const ModifyDomainRequestRedirect &) = default ;
    ModifyDomainRequestRedirect(ModifyDomainRequestRedirect &&) = default ;
    ModifyDomainRequestRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainRequestRedirect() = default ;
    ModifyDomainRequestRedirect& operator=(const ModifyDomainRequestRedirect &) = default ;
    ModifyDomainRequestRedirect& operator=(ModifyDomainRequestRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendPorts_ != nullptr
        && this->backends_ != nullptr && this->backupBackends_ != nullptr && this->cnameEnabled_ != nullptr && this->connectTimeout_ != nullptr && this->focusHttpBackend_ != nullptr
        && this->keepalive_ != nullptr && this->keepaliveRequests_ != nullptr && this->keepaliveTimeout_ != nullptr && this->loadbalance_ != nullptr && this->readTimeout_ != nullptr
        && this->requestHeaders_ != nullptr && this->retry_ != nullptr && this->routingRules_ != nullptr && this->sniEnabled_ != nullptr && this->sniHost_ != nullptr
        && this->WLProxyClientIp_ != nullptr && this->webServerType_ != nullptr && this->writeTimeout_ != nullptr && this->XClientIp_ != nullptr && this->XTrueIp_ != nullptr
        && this->xffProto_ != nullptr; };
    // backendPorts Field Functions 
    bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
    void deleteBackendPorts() { this->backendPorts_ = nullptr;};
    inline const vector<Models::ModifyDomainRequestRedirectBackendPorts> & backendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<Models::ModifyDomainRequestRedirectBackendPorts>) };
    inline vector<Models::ModifyDomainRequestRedirectBackendPorts> backendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<Models::ModifyDomainRequestRedirectBackendPorts>) };
    inline ModifyDomainRequestRedirect& setBackendPorts(const vector<Models::ModifyDomainRequestRedirectBackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
    inline ModifyDomainRequestRedirect& setBackendPorts(vector<Models::ModifyDomainRequestRedirectBackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


    // backends Field Functions 
    bool hasBackends() const { return this->backends_ != nullptr;};
    void deleteBackends() { this->backends_ = nullptr;};
    inline const vector<string> & backends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
    inline vector<string> backends() { DARABONBA_PTR_GET(backends_, vector<string>) };
    inline ModifyDomainRequestRedirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
    inline ModifyDomainRequestRedirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


    // backupBackends Field Functions 
    bool hasBackupBackends() const { return this->backupBackends_ != nullptr;};
    void deleteBackupBackends() { this->backupBackends_ = nullptr;};
    inline const vector<string> & backupBackends() const { DARABONBA_PTR_GET_CONST(backupBackends_, vector<string>) };
    inline vector<string> backupBackends() { DARABONBA_PTR_GET(backupBackends_, vector<string>) };
    inline ModifyDomainRequestRedirect& setBackupBackends(const vector<string> & backupBackends) { DARABONBA_PTR_SET_VALUE(backupBackends_, backupBackends) };
    inline ModifyDomainRequestRedirect& setBackupBackends(vector<string> && backupBackends) { DARABONBA_PTR_SET_RVALUE(backupBackends_, backupBackends) };


    // cnameEnabled Field Functions 
    bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
    void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
    inline bool cnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
    inline ModifyDomainRequestRedirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int32_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
    inline ModifyDomainRequestRedirect& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // focusHttpBackend Field Functions 
    bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
    void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
    inline bool focusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
    inline ModifyDomainRequestRedirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline ModifyDomainRequestRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int32_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
    inline ModifyDomainRequestRedirect& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int32_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
    inline ModifyDomainRequestRedirect& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // loadbalance Field Functions 
    bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
    void deleteLoadbalance() { this->loadbalance_ = nullptr;};
    inline string loadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
    inline ModifyDomainRequestRedirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline ModifyDomainRequestRedirect& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::ModifyDomainRequestRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::ModifyDomainRequestRedirectRequestHeaders>) };
    inline vector<Models::ModifyDomainRequestRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::ModifyDomainRequestRedirectRequestHeaders>) };
    inline ModifyDomainRequestRedirect& setRequestHeaders(const vector<Models::ModifyDomainRequestRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline ModifyDomainRequestRedirect& setRequestHeaders(vector<Models::ModifyDomainRequestRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline ModifyDomainRequestRedirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // routingRules Field Functions 
    bool hasRoutingRules() const { return this->routingRules_ != nullptr;};
    void deleteRoutingRules() { this->routingRules_ = nullptr;};
    inline string routingRules() const { DARABONBA_PTR_GET_DEFAULT(routingRules_, "") };
    inline ModifyDomainRequestRedirect& setRoutingRules(string routingRules) { DARABONBA_PTR_SET_VALUE(routingRules_, routingRules) };


    // sniEnabled Field Functions 
    bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
    void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
    inline bool sniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
    inline ModifyDomainRequestRedirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


    // sniHost Field Functions 
    bool hasSniHost() const { return this->sniHost_ != nullptr;};
    void deleteSniHost() { this->sniHost_ = nullptr;};
    inline string sniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
    inline ModifyDomainRequestRedirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


    // WLProxyClientIp Field Functions 
    bool hasWLProxyClientIp() const { return this->WLProxyClientIp_ != nullptr;};
    void deleteWLProxyClientIp() { this->WLProxyClientIp_ = nullptr;};
    inline bool WLProxyClientIp() const { DARABONBA_PTR_GET_DEFAULT(WLProxyClientIp_, false) };
    inline ModifyDomainRequestRedirect& setWLProxyClientIp(bool WLProxyClientIp) { DARABONBA_PTR_SET_VALUE(WLProxyClientIp_, WLProxyClientIp) };


    // webServerType Field Functions 
    bool hasWebServerType() const { return this->webServerType_ != nullptr;};
    void deleteWebServerType() { this->webServerType_ = nullptr;};
    inline bool webServerType() const { DARABONBA_PTR_GET_DEFAULT(webServerType_, false) };
    inline ModifyDomainRequestRedirect& setWebServerType(bool webServerType) { DARABONBA_PTR_SET_VALUE(webServerType_, webServerType) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int32_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
    inline ModifyDomainRequestRedirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


    // XClientIp Field Functions 
    bool hasXClientIp() const { return this->XClientIp_ != nullptr;};
    void deleteXClientIp() { this->XClientIp_ = nullptr;};
    inline bool XClientIp() const { DARABONBA_PTR_GET_DEFAULT(XClientIp_, false) };
    inline ModifyDomainRequestRedirect& setXClientIp(bool XClientIp) { DARABONBA_PTR_SET_VALUE(XClientIp_, XClientIp) };


    // XTrueIp Field Functions 
    bool hasXTrueIp() const { return this->XTrueIp_ != nullptr;};
    void deleteXTrueIp() { this->XTrueIp_ = nullptr;};
    inline bool XTrueIp() const { DARABONBA_PTR_GET_DEFAULT(XTrueIp_, false) };
    inline ModifyDomainRequestRedirect& setXTrueIp(bool XTrueIp) { DARABONBA_PTR_SET_VALUE(XTrueIp_, XTrueIp) };


    // xffProto Field Functions 
    bool hasXffProto() const { return this->xffProto_ != nullptr;};
    void deleteXffProto() { this->xffProto_ = nullptr;};
    inline bool xffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
    inline ModifyDomainRequestRedirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


  protected:
    std::shared_ptr<vector<Models::ModifyDomainRequestRedirectBackendPorts>> backendPorts_ = nullptr;
    // The IP addresses or domain names of the origin server. You cannot specify both IP addresses and domain names. If you specify domain names, the domain names can be resolved only to IPv4 addresses.
    // 
    // *   If you specify IP addresses, specify the value in the **["ip1","ip2",...]** format. You can enter up to 20 IP addresses.
    // *   If you specify domain names, specify the value in the **["domain"]** format. You can enter up to 20 domain names.
    std::shared_ptr<vector<string>> backends_ = nullptr;
    // The secondary IP addresses or domain names of the origin server.
    std::shared_ptr<vector<string>> backupBackends_ = nullptr;
    // Specifies whether to enable the public cloud disaster recovery feature. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> cnameEnabled_ = nullptr;
    // The timeout period of connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> connectTimeout_ = nullptr;
    // Specifies whether to enable force redirect from HTTPS to HTTP for back-to-origin requests. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> focusHttpBackend_ = nullptr;
    // Specifies whether to enable the persistent connection feature. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> keepalive_ = nullptr;
    // The number of reused persistent connections. Valid values: 60 to 1000.
    // 
    // >  This parameter specifies the number of persistent connections that can be reused after you enable the persistent connection feature.
    std::shared_ptr<int32_t> keepaliveRequests_ = nullptr;
    // The timeout period of idle persistent connections. Valid values: 1 to 60. Default value: 15. Unit: seconds.
    // 
    // >  This parameter specifies the period of time after which an idle persistent connection is closed.
    std::shared_ptr<int32_t> keepaliveTimeout_ = nullptr;
    // The load balancing algorithm that you want to use to forward requests to the origin server. Valid values:
    // 
    // *   **iphash**
    // *   **roundRobin**
    // *   **leastTime**: This value is available only if you set **ProtectionResource** to **gslb**.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadbalance_ = nullptr;
    // The timeout period of read connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> readTimeout_ = nullptr;
    // The custom header fields, which are key-value pairs. The fields are used to mark requests that pass through WAF.
    // 
    // When a request passes through WAF, WAF automatically adds the custom header fields to the request to mark the request. This way, the backend service can identify requests that are processed by WAF.
    std::shared_ptr<vector<Models::ModifyDomainRequestRedirectRequestHeaders>> requestHeaders_ = nullptr;
    // Specifies whether WAF retries if WAF fails to forward requests to the origin server. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> retry_ = nullptr;
    // The forwarding rules for the hybrid cloud mode. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **rs**: the back-to-origin IP addresses or CNAMEs. Data type: array.
    // *   **location**: the name of the protection node. Data type: string.
    // *   **locationId**: the ID of the protection node. Data type: long.
    std::shared_ptr<string> routingRules_ = nullptr;
    // Specifies whether to enable the Server Name Indication (SNI) feature for back-to-origin requests. This parameter is available only if you specify **HttpsPorts**. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> sniEnabled_ = nullptr;
    // The custom value of the SNI field. If you do not specify this parameter, the value of the **Host** header field is automatically used. In most cases, you do not need to specify a custom value for the SNI field. However, if you want WAF to use an SNI field whose value is different from the value of the Host header field in back-to-origin requests, you can specify a custom value for the SNI field.
    // 
    // >  This parameter is required only if you set **SniEnabled** to true.
    std::shared_ptr<string> sniHost_ = nullptr;
    std::shared_ptr<bool> WLProxyClientIp_ = nullptr;
    std::shared_ptr<bool> webServerType_ = nullptr;
    // The timeout period of write connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> writeTimeout_ = nullptr;
    std::shared_ptr<bool> XClientIp_ = nullptr;
    std::shared_ptr<bool> XTrueIp_ = nullptr;
    // Specifies whether to use the X-Forward-For-Proto header field to pass the protocol used by WAF to forward requests to the origin server. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> xffProto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
