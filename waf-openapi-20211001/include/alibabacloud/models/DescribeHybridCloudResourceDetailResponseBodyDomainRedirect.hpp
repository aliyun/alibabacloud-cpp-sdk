// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAINREDIRECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILRESPONSEBODYDOMAINREDIRECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourceDetailResponseBodyDomainRedirect : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& obj) { 
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
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect(const DescribeHybridCloudResourceDetailResponseBodyDomainRedirect &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect(DescribeHybridCloudResourceDetailResponseBodyDomainRedirect &&) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourceDetailResponseBodyDomainRedirect() = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& operator=(const DescribeHybridCloudResourceDetailResponseBodyDomainRedirect &) = default ;
    DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& operator=(DescribeHybridCloudResourceDetailResponseBodyDomainRedirect &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backends_ != nullptr
        && this->cnameEnabled_ != nullptr && this->connectTimeout_ != nullptr && this->focusHttpBackend_ != nullptr && this->keepalive_ != nullptr && this->keepaliveRequests_ != nullptr
        && this->keepaliveTimeout_ != nullptr && this->loadbalance_ != nullptr && this->readTimeout_ != nullptr && this->requestHeaders_ != nullptr && this->retry_ != nullptr
        && this->routingRules_ != nullptr && this->sniEnabled_ != nullptr && this->sniHost_ != nullptr && this->writeTimeout_ != nullptr; };
    // backends Field Functions 
    bool hasBackends() const { return this->backends_ != nullptr;};
    void deleteBackends() { this->backends_ = nullptr;};
    inline const vector<string> & backends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
    inline vector<string> backends() { DARABONBA_PTR_GET(backends_, vector<string>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


    // cnameEnabled Field Functions 
    bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
    void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
    inline bool cnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int64_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // focusHttpBackend Field Functions 
    bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
    void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
    inline bool focusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline bool keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // keepaliveRequests Field Functions 
    bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
    void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
    inline int64_t keepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setKeepaliveRequests(int64_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


    // keepaliveTimeout Field Functions 
    bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
    void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
    inline int64_t keepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setKeepaliveTimeout(int64_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


    // loadbalance Field Functions 
    bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
    void deleteLoadbalance() { this->loadbalance_ = nullptr;};
    inline string loadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int64_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setReadTimeout(int64_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // requestHeaders Field Functions 
    bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
    void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
    inline const vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders> & requestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders>) };
    inline vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders> requestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders>) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setRequestHeaders(const vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setRequestHeaders(vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // routingRules Field Functions 
    bool hasRoutingRules() const { return this->routingRules_ != nullptr;};
    void deleteRoutingRules() { this->routingRules_ = nullptr;};
    inline string routingRules() const { DARABONBA_PTR_GET_DEFAULT(routingRules_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setRoutingRules(string routingRules) { DARABONBA_PTR_SET_VALUE(routingRules_, routingRules) };


    // sniEnabled Field Functions 
    bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
    void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
    inline bool sniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


    // sniHost Field Functions 
    bool hasSniHost() const { return this->sniHost_ != nullptr;};
    void deleteSniHost() { this->sniHost_ = nullptr;};
    inline string sniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


    // writeTimeout Field Functions 
    bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
    void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
    inline int64_t writeTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0L) };
    inline DescribeHybridCloudResourceDetailResponseBodyDomainRedirect& setWriteTimeout(int64_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


  protected:
    std::shared_ptr<vector<string>> backends_ = nullptr;
    std::shared_ptr<bool> cnameEnabled_ = nullptr;
    std::shared_ptr<int64_t> connectTimeout_ = nullptr;
    std::shared_ptr<bool> focusHttpBackend_ = nullptr;
    std::shared_ptr<bool> keepalive_ = nullptr;
    std::shared_ptr<int64_t> keepaliveRequests_ = nullptr;
    std::shared_ptr<int64_t> keepaliveTimeout_ = nullptr;
    std::shared_ptr<string> loadbalance_ = nullptr;
    std::shared_ptr<int64_t> readTimeout_ = nullptr;
    std::shared_ptr<vector<Models::DescribeHybridCloudResourceDetailResponseBodyDomainRedirectRequestHeaders>> requestHeaders_ = nullptr;
    std::shared_ptr<bool> retry_ = nullptr;
    std::shared_ptr<string> routingRules_ = nullptr;
    std::shared_ptr<bool> sniEnabled_ = nullptr;
    std::shared_ptr<string> sniHost_ = nullptr;
    std::shared_ptr<int64_t> writeTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
