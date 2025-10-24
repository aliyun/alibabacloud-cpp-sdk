// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODYDOMAINSREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODYDOMAINSREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourcesResponseBodyDomainsRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourcesResponseBodyDomainsRedirect& obj) { 
      DARABONBA_PTR_TO_JSON(Backends, backends_);
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
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourcesResponseBodyDomainsRedirect& obj) { 
      DARABONBA_PTR_FROM_JSON(Backends, backends_);
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
    };
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect() = default ;
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect(const DescribeHybridCloudResourcesResponseBodyDomainsRedirect &) = default ;
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect(DescribeHybridCloudResourcesResponseBodyDomainsRedirect &&) = default ;
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourcesResponseBodyDomainsRedirect() = default ;
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect& operator=(const DescribeHybridCloudResourcesResponseBodyDomainsRedirect &) = default ;
    DescribeHybridCloudResourcesResponseBodyDomainsRedirect& operator=(DescribeHybridCloudResourcesResponseBodyDomainsRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backends_ == nullptr
        && return this->cnameEnabled_ == nullptr && return this->connectTimeout_ == nullptr && return this->focusHttpBackend_ == nullptr && return this->keepalive_ == nullptr && return this->keepaliveRequests_ == nullptr
        && return this->keepaliveTimeout_ == nullptr && return this->loadbalance_ == nullptr && return this->readTimeout_ == nullptr && return this->requestHeaders_ == nullptr && return this->retry_ == nullptr
        && return this->routingRules_ == nullptr && return this->sniEnabled_ == nullptr && return this->sniHost_ == nullptr && return this->writeTimeout_ == nullptr; };
    // backends Field Functions 
    bool hasBackends() const { return this->backends_ != nullptr;};
    void deleteBackends() { this->backends_ = nullptr;};
    inline const vector<string> & backends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
    inline vector<string> backends() { DARABONBA_PTR_GET(backends_, vector<string>) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


    // cnameEnabled Field Functions 
    bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
    void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
    inline bool cnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int64_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // focusHttpBackend Field Functions 
    bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
    void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
    inline bool focusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int64_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setKeepaliveRequests(int64_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int64_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setKeepaliveTimeout(int64_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // loadbalance Field Functions 
    bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
    void deleteLoadbalance() { this->loadbalance_ = nullptr;};
    inline string loadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int64_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setReadTimeout(int64_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders>) };
    inline vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders>) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setRequestHeaders(const vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setRequestHeaders(vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // routingRules Field Functions 
    bool hasRoutingRules() const { return this->routingRules_ != nullptr;};
    void deleteRoutingRules() { this->routingRules_ = nullptr;};
    inline string routingRules() const { DARABONBA_PTR_GET_DEFAULT(routingRules_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setRoutingRules(string routingRules) { DARABONBA_PTR_SET_VALUE(routingRules_, routingRules) };


    // sniEnabled Field Functions 
    bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
    void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
    inline bool sniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


    // sniHost Field Functions 
    bool hasSniHost() const { return this->sniHost_ != nullptr;};
    void deleteSniHost() { this->sniHost_ = nullptr;};
    inline string sniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int64_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0L) };
    inline DescribeHybridCloudResourcesResponseBodyDomainsRedirect& setWriteTimeout(int64_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


  protected:
    // The IP addresses or domain names of the origin server.
    std::shared_ptr<vector<string>> backends_ = nullptr;
    // Indicates whether the public cloud disaster recovery feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> cnameEnabled_ = nullptr;
    // The timeout period for connections. Unit: seconds. Valid values: 5 to 120.
    std::shared_ptr<int64_t> connectTimeout_ = nullptr;
    // Indicates whether the HTTPS to HTTP redirection feature is enabled for back-to-origin requests. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> focusHttpBackend_ = nullptr;
    // Indicates whether the persistent connection feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> keepalive_ = nullptr;
    // The number of reused persistent connections. Valid values: 60 to 1000.
    // 
    // >  This parameter indicates the number of reused persistent connections after the persistent connection feature is enabled.
    std::shared_ptr<int64_t> keepaliveRequests_ = nullptr;
    // The timeout period for persistent connections that are in the Idle state. Unit: seconds. Valid values: 1 to 60. Default value: 15.
    // 
    // >  This parameter indicates the period of time during which a reused persistent connection can remain in the Idle state before the persistent connection is released.
    std::shared_ptr<int64_t> keepaliveTimeout_ = nullptr;
    // The load balancing algorithm that is used to forward requests to the origin server. Valid values:
    // 
    // *   **iphash**
    // *   **roundRobin**
    // *   **leastTime**
    std::shared_ptr<string> loadbalance_ = nullptr;
    // The timeout period for read connections. Unit: seconds. Valid values: 5 to 1800.
    std::shared_ptr<int64_t> readTimeout_ = nullptr;
    // The key-value pair that is used to label requests that pass through WAF.
    std::shared_ptr<vector<Models::DescribeHybridCloudResourcesResponseBodyDomainsRedirectRequestHeaders>> requestHeaders_ = nullptr;
    // Indicates whether WAF retries forwarding requests if requests fail to be forwarded to the origin server. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> retry_ = nullptr;
    // The forwarding rules that are configured for the domain name. This parameter is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
    // 
    // *   **rs**: the back-to-origin IP addresses or CNAMEs. The value is of the ARRAY type.
    // *   **location**: the name of the protection node. The value is of the STRING type.
    // *   **locationId**: the ID of the protection node. The value is of the LONG type.
    std::shared_ptr<string> routingRules_ = nullptr;
    // Indicates whether the origin Server Name Indication (SNI) feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> sniEnabled_ = nullptr;
    // The value of the custom SNI field. If the parameter is left empty, the value of the **Host** field in the request header is automatically used as the value of the SNI field.
    // 
    // >  This parameter is returned only if the value of **SniEnabled** is **true**.
    std::shared_ptr<string> sniHost_ = nullptr;
    // The timeout period for write connections. Unit: seconds. Valid values: 5 to 1800.
    std::shared_ptr<int64_t> writeTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
