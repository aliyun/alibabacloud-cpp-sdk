// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDomainRequestRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainRequestRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequestRedirect& obj) { 
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
      DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequestRedirect& obj) { 
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
      DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
    };
    CreateDomainRequestRedirect() = default ;
    CreateDomainRequestRedirect(const CreateDomainRequestRedirect &) = default ;
    CreateDomainRequestRedirect(CreateDomainRequestRedirect &&) = default ;
    CreateDomainRequestRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequestRedirect() = default ;
    CreateDomainRequestRedirect& operator=(const CreateDomainRequestRedirect &) = default ;
    CreateDomainRequestRedirect& operator=(CreateDomainRequestRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backends_ != nullptr
        && this->backupBackends_ != nullptr && this->cnameEnabled_ != nullptr && this->connectTimeout_ != nullptr && this->focusHttpBackend_ != nullptr && this->keepalive_ != nullptr
        && this->keepaliveRequests_ != nullptr && this->keepaliveTimeout_ != nullptr && this->loadbalance_ != nullptr && this->readTimeout_ != nullptr && this->requestHeaders_ != nullptr
        && this->retry_ != nullptr && this->routingRules_ != nullptr && this->sniEnabled_ != nullptr && this->sniHost_ != nullptr && this->writeTimeout_ != nullptr
        && this->xffProto_ != nullptr; };
    // backends Field Functions 
    bool hasBackends() const { return this->backends_ != nullptr;};
    void deleteBackends() { this->backends_ = nullptr;};
    inline const vector<string> & backends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
    inline vector<string> backends() { DARABONBA_PTR_GET(backends_, vector<string>) };
    inline CreateDomainRequestRedirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
    inline CreateDomainRequestRedirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


    // backupBackends Field Functions 
    bool hasBackupBackends() const { return this->backupBackends_ != nullptr;};
    void deleteBackupBackends() { this->backupBackends_ = nullptr;};
    inline const vector<string> & backupBackends() const { DARABONBA_PTR_GET_CONST(backupBackends_, vector<string>) };
    inline vector<string> backupBackends() { DARABONBA_PTR_GET(backupBackends_, vector<string>) };
    inline CreateDomainRequestRedirect& setBackupBackends(const vector<string> & backupBackends) { DARABONBA_PTR_SET_VALUE(backupBackends_, backupBackends) };
    inline CreateDomainRequestRedirect& setBackupBackends(vector<string> && backupBackends) { DARABONBA_PTR_SET_RVALUE(backupBackends_, backupBackends) };


    // cnameEnabled Field Functions 
    bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
    void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
    inline bool cnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
    inline CreateDomainRequestRedirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int32_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
    inline CreateDomainRequestRedirect& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // focusHttpBackend Field Functions 
    bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
    void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
    inline bool focusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
    inline CreateDomainRequestRedirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline CreateDomainRequestRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int32_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
    inline CreateDomainRequestRedirect& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int32_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
    inline CreateDomainRequestRedirect& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // loadbalance Field Functions 
    bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
    void deleteLoadbalance() { this->loadbalance_ = nullptr;};
    inline string loadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
    inline CreateDomainRequestRedirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline CreateDomainRequestRedirect& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::CreateDomainRequestRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::CreateDomainRequestRedirectRequestHeaders>) };
    inline vector<Models::CreateDomainRequestRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::CreateDomainRequestRedirectRequestHeaders>) };
    inline CreateDomainRequestRedirect& setRequestHeaders(const vector<Models::CreateDomainRequestRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline CreateDomainRequestRedirect& setRequestHeaders(vector<Models::CreateDomainRequestRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline CreateDomainRequestRedirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // routingRules Field Functions 
    bool hasRoutingRules() const { return this->routingRules_ != nullptr;};
    void deleteRoutingRules() { this->routingRules_ = nullptr;};
    inline string routingRules() const { DARABONBA_PTR_GET_DEFAULT(routingRules_, "") };
    inline CreateDomainRequestRedirect& setRoutingRules(string routingRules) { DARABONBA_PTR_SET_VALUE(routingRules_, routingRules) };


    // sniEnabled Field Functions 
    bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
    void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
    inline bool sniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
    inline CreateDomainRequestRedirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


    // sniHost Field Functions 
    bool hasSniHost() const { return this->sniHost_ != nullptr;};
    void deleteSniHost() { this->sniHost_ = nullptr;};
    inline string sniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
    inline CreateDomainRequestRedirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int32_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
    inline CreateDomainRequestRedirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


    // xffProto Field Functions 
    bool hasXffProto() const { return this->xffProto_ != nullptr;};
    void deleteXffProto() { this->xffProto_ = nullptr;};
    inline bool xffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
    inline CreateDomainRequestRedirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


  protected:
    // The IP addresses or domain names of the origin server.
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
    std::shared_ptr<vector<Models::CreateDomainRequestRedirectRequestHeaders>> requestHeaders_ = nullptr;
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
    // >  This parameter is required only if you set **SniEnabled** to **true**.
    std::shared_ptr<string> sniHost_ = nullptr;
    // The timeout period of write connections. Unit: seconds. Valid values: 1 to 3600.
    std::shared_ptr<int32_t> writeTimeout_ = nullptr;
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
