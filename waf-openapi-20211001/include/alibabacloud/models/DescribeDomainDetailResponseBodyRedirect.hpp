// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyRedirectBackendPorts.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyRedirectBackends.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyRedirectBackupBackends.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDetailResponseBodyRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodyRedirect& obj) { 
      DARABONBA_PTR_TO_JSON(BackUpBackendList, backUpBackendList_);
      DARABONBA_PTR_TO_JSON(BackendList, backendList_);
      DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_TO_JSON(Backends, backends_);
      DARABONBA_PTR_TO_JSON(BackupBackends, backupBackends_);
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(FocusHttpBackend, focusHttpBackend_);
      DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_TO_JSON(Loadbalance, loadbalance_);
      DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(SniEnabled, sniEnabled_);
      DARABONBA_PTR_TO_JSON(SniHost, sniHost_);
      DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodyRedirect& obj) { 
      DARABONBA_PTR_FROM_JSON(BackUpBackendList, backUpBackendList_);
      DARABONBA_PTR_FROM_JSON(BackendList, backendList_);
      DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
      DARABONBA_PTR_FROM_JSON(Backends, backends_);
      DARABONBA_PTR_FROM_JSON(BackupBackends, backupBackends_);
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(FocusHttpBackend, focusHttpBackend_);
      DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
      DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
      DARABONBA_PTR_FROM_JSON(Loadbalance, loadbalance_);
      DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(SniEnabled, sniEnabled_);
      DARABONBA_PTR_FROM_JSON(SniHost, sniHost_);
      DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
      DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
    };
    DescribeDomainDetailResponseBodyRedirect() = default ;
    DescribeDomainDetailResponseBodyRedirect(const DescribeDomainDetailResponseBodyRedirect &) = default ;
    DescribeDomainDetailResponseBodyRedirect(DescribeDomainDetailResponseBodyRedirect &&) = default ;
    DescribeDomainDetailResponseBodyRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodyRedirect() = default ;
    DescribeDomainDetailResponseBodyRedirect& operator=(const DescribeDomainDetailResponseBodyRedirect &) = default ;
    DescribeDomainDetailResponseBodyRedirect& operator=(DescribeDomainDetailResponseBodyRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backUpBackendList_ != nullptr
        && this->backendList_ != nullptr && this->backendPorts_ != nullptr && this->backends_ != nullptr && this->backupBackends_ != nullptr && this->connectTimeout_ != nullptr
        && this->focusHttpBackend_ != nullptr && this->keepalive_ != nullptr && this->keepaliveRequests_ != nullptr && this->keepaliveTimeout_ != nullptr && this->loadbalance_ != nullptr
        && this->readTimeout_ != nullptr && this->requestHeaders_ != nullptr && this->retry_ != nullptr && this->sniEnabled_ != nullptr && this->sniHost_ != nullptr
        && this->writeTimeout_ != nullptr && this->xffProto_ != nullptr; };
    // backUpBackendList Field Functions 
    bool hasBackUpBackendList() const { return this->backUpBackendList_ != nullptr;};
    void deleteBackUpBackendList() { this->backUpBackendList_ = nullptr;};
    inline const vector<string> & backUpBackendList() const { DARABONBA_PTR_GET_CONST(backUpBackendList_, vector<string>) };
    inline vector<string> backUpBackendList() { DARABONBA_PTR_GET(backUpBackendList_, vector<string>) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackUpBackendList(const vector<string> & backUpBackendList) { DARABONBA_PTR_SET_VALUE(backUpBackendList_, backUpBackendList) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackUpBackendList(vector<string> && backUpBackendList) { DARABONBA_PTR_SET_RVALUE(backUpBackendList_, backUpBackendList) };


    // backendList Field Functions 
    bool hasBackendList() const { return this->backendList_ != nullptr;};
    void deleteBackendList() { this->backendList_ = nullptr;};
    inline const vector<string> & backendList() const { DARABONBA_PTR_GET_CONST(backendList_, vector<string>) };
    inline vector<string> backendList() { DARABONBA_PTR_GET(backendList_, vector<string>) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackendList(const vector<string> & backendList) { DARABONBA_PTR_SET_VALUE(backendList_, backendList) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackendList(vector<string> && backendList) { DARABONBA_PTR_SET_RVALUE(backendList_, backendList) };


    // backendPorts Field Functions 
    bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
    void deleteBackendPorts() { this->backendPorts_ = nullptr;};
    inline const vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts> & backendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts>) };
    inline vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts> backendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts>) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackendPorts(const vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackendPorts(vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


    // backends Field Functions 
    bool hasBackends() const { return this->backends_ != nullptr;};
    void deleteBackends() { this->backends_ = nullptr;};
    inline const vector<Models::DescribeDomainDetailResponseBodyRedirectBackends> & backends() const { DARABONBA_PTR_GET_CONST(backends_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackends>) };
    inline vector<Models::DescribeDomainDetailResponseBodyRedirectBackends> backends() { DARABONBA_PTR_GET(backends_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackends>) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackends(const vector<Models::DescribeDomainDetailResponseBodyRedirectBackends> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackends(vector<Models::DescribeDomainDetailResponseBodyRedirectBackends> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


    // backupBackends Field Functions 
    bool hasBackupBackends() const { return this->backupBackends_ != nullptr;};
    void deleteBackupBackends() { this->backupBackends_ = nullptr;};
    inline const vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends> & backupBackends() const { DARABONBA_PTR_GET_CONST(backupBackends_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends>) };
    inline vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends> backupBackends() { DARABONBA_PTR_GET(backupBackends_, vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends>) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackupBackends(const vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends> & backupBackends) { DARABONBA_PTR_SET_VALUE(backupBackends_, backupBackends) };
    inline DescribeDomainDetailResponseBodyRedirect& setBackupBackends(vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends> && backupBackends) { DARABONBA_PTR_SET_RVALUE(backupBackends_, backupBackends) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int32_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
    inline DescribeDomainDetailResponseBodyRedirect& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // focusHttpBackend Field Functions 
    bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
    void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
    inline bool focusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
    inline DescribeDomainDetailResponseBodyRedirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline DescribeDomainDetailResponseBodyRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int32_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
    inline DescribeDomainDetailResponseBodyRedirect& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int32_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
    inline DescribeDomainDetailResponseBodyRedirect& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // loadbalance Field Functions 
    bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
    void deleteLoadbalance() { this->loadbalance_ = nullptr;};
    inline string loadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
    inline DescribeDomainDetailResponseBodyRedirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline DescribeDomainDetailResponseBodyRedirect& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders>) };
    inline vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders>) };
    inline DescribeDomainDetailResponseBodyRedirect& setRequestHeaders(const vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline DescribeDomainDetailResponseBodyRedirect& setRequestHeaders(vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline DescribeDomainDetailResponseBodyRedirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // sniEnabled Field Functions 
    bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
    void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
    inline bool sniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
    inline DescribeDomainDetailResponseBodyRedirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


    // sniHost Field Functions 
    bool hasSniHost() const { return this->sniHost_ != nullptr;};
    void deleteSniHost() { this->sniHost_ = nullptr;};
    inline string sniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
    inline DescribeDomainDetailResponseBodyRedirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int32_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
    inline DescribeDomainDetailResponseBodyRedirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


    // xffProto Field Functions 
    bool hasXffProto() const { return this->xffProto_ != nullptr;};
    void deleteXffProto() { this->xffProto_ = nullptr;};
    inline bool xffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
    inline DescribeDomainDetailResponseBodyRedirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


  protected:
    std::shared_ptr<vector<string>> backUpBackendList_ = nullptr;
    std::shared_ptr<vector<string>> backendList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDomainDetailResponseBodyRedirectBackendPorts>> backendPorts_ = nullptr;
    // An array of addresses of origin servers.
    std::shared_ptr<vector<Models::DescribeDomainDetailResponseBodyRedirectBackends>> backends_ = nullptr;
    // An array of HTTPS listener ports.
    std::shared_ptr<vector<Models::DescribeDomainDetailResponseBodyRedirectBackupBackends>> backupBackends_ = nullptr;
    // The timeout period of the connection. Unit: seconds. Valid values: 5 to 120.
    std::shared_ptr<int32_t> connectTimeout_ = nullptr;
    // Indicates whether HTTPS to HTTP redirection is enabled for back-to-origin requests of the domain name. Valid values:
    // 
    // *   **true:** HTTPS to HTTP redirection for back-to-origin requests of the domain name is enabled.
    // *   **false:** HTTPS to HTTP redirection for back-to-origin requests of the domain name is disabled.
    std::shared_ptr<bool> focusHttpBackend_ = nullptr;
    // Indicates whether the persistent connection feature is enabled. Valid values:
    // 
    // *   **true:** The persistent connection feature is enabled. This is the default value.
    // *   **false:** The persistent connection feature is disabled.
    std::shared_ptr<bool> keepalive_ = nullptr;
    // The number of reused persistent connections. Valid values: 60 to 1000.
    // 
    // >  This parameter specifies the number of reused persistent connections when you enable the persistent connection feature.
    std::shared_ptr<int32_t> keepaliveRequests_ = nullptr;
    // The timeout period of persistent connections that are in the Idle state. Valid values: 1 to 60. Default value: 15. Unit: seconds.
    // 
    // >  This parameter specifies the period of time during which a reused persistent connection is allowed to remain in the Idle state before the persistent connection is released.
    std::shared_ptr<int32_t> keepaliveTimeout_ = nullptr;
    // The load balancing algorithm that is used when WAF forwards requests to the origin server. Valid values:
    // 
    // *   **ip_hash:** the IP hash algorithm.
    // *   **roundRobin:** the round-robin algorithm.
    // *   **leastTime:** the least response time algorithm.
    std::shared_ptr<string> loadbalance_ = nullptr;
    // The read timeout period. Unit: seconds. Valid values: 5 to 1800.
    std::shared_ptr<int32_t> readTimeout_ = nullptr;
    // An array of key-value pairs that are used to mark the requests that pass through the WAF instance.
    std::shared_ptr<vector<Models::DescribeDomainDetailResponseBodyRedirectRequestHeaders>> requestHeaders_ = nullptr;
    // Indicates whether WAF retries when requests fail to be forwarded to the origin server. Valid values:
    // 
    // *   **true:** WAF retries. This is the default value.
    // *   **false:** WAF does not retry.
    std::shared_ptr<bool> retry_ = nullptr;
    // Indicates whether origin Server Name Indication (SNI) is enabled. Valid values:
    // 
    // *   **true:** Origin SNI is enabled.
    // *   **false:** Origin SNI is disabled. This is the default value.
    std::shared_ptr<bool> sniEnabled_ = nullptr;
    // The value of the custom SNI field.
    std::shared_ptr<string> sniHost_ = nullptr;
    // The write timeout period. Unit: seconds. Valid values: 5 to 1800.
    std::shared_ptr<int32_t> writeTimeout_ = nullptr;
    // Indicates whether the X-Forward-For-Proto header is used to identify the protocol used by WAF to forward requests to the origin server. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> xffProto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
