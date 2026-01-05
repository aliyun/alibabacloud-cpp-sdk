// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudResourcesResponseBody() = default ;
    DescribeHybridCloudResourcesResponseBody(const DescribeHybridCloudResourcesResponseBody &) = default ;
    DescribeHybridCloudResourcesResponseBody(DescribeHybridCloudResourcesResponseBody &&) = default ;
    DescribeHybridCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourcesResponseBody() = default ;
    DescribeHybridCloudResourcesResponseBody& operator=(const DescribeHybridCloudResourcesResponseBody &) = default ;
    DescribeHybridCloudResourcesResponseBody& operator=(DescribeHybridCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Listen, listen_);
        DARABONBA_PTR_TO_JSON(Redirect, redirect_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Listen, listen_);
        DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Redirect : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Redirect& obj) { 
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
        Redirect() = default ;
        Redirect(const Redirect &) = default ;
        Redirect(Redirect &&) = default ;
        Redirect(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Redirect() = default ;
        Redirect& operator=(const Redirect &) = default ;
        Redirect& operator=(Redirect &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RequestHeaders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestHeaders& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RequestHeaders& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RequestHeaders() = default ;
          RequestHeaders(const RequestHeaders &) = default ;
          RequestHeaders(RequestHeaders &&) = default ;
          RequestHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestHeaders() = default ;
          RequestHeaders& operator=(const RequestHeaders &) = default ;
          RequestHeaders& operator=(RequestHeaders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline RequestHeaders& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RequestHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the custom header field.
          shared_ptr<string> key_ {};
          // The value of the custom header field.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->backends_ == nullptr
        && this->cnameEnabled_ == nullptr && this->connectTimeout_ == nullptr && this->focusHttpBackend_ == nullptr && this->keepalive_ == nullptr && this->keepaliveRequests_ == nullptr
        && this->keepaliveTimeout_ == nullptr && this->loadbalance_ == nullptr && this->readTimeout_ == nullptr && this->requestHeaders_ == nullptr && this->retry_ == nullptr
        && this->routingRules_ == nullptr && this->sniEnabled_ == nullptr && this->sniHost_ == nullptr && this->writeTimeout_ == nullptr; };
        // backends Field Functions 
        bool hasBackends() const { return this->backends_ != nullptr;};
        void deleteBackends() { this->backends_ = nullptr;};
        inline const vector<string> & getBackends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
        inline vector<string> getBackends() { DARABONBA_PTR_GET(backends_, vector<string>) };
        inline Redirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
        inline Redirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


        // cnameEnabled Field Functions 
        bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
        void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
        inline bool getCnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
        inline Redirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


        // connectTimeout Field Functions 
        bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
        void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
        inline int64_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0L) };
        inline Redirect& setConnectTimeout(int64_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


        // focusHttpBackend Field Functions 
        bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
        void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
        inline bool getFocusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
        inline Redirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


        // keepalive Field Functions 
        bool hasKeepalive() const { return this->keepalive_ != nullptr;};
        void deleteKeepalive() { this->keepalive_ = nullptr;};
        inline bool getKeepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
        inline Redirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


        // keepaliveRequests Field Functions 
        bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
        void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
        inline int64_t getKeepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0L) };
        inline Redirect& setKeepaliveRequests(int64_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


        // keepaliveTimeout Field Functions 
        bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
        void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
        inline int64_t getKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0L) };
        inline Redirect& setKeepaliveTimeout(int64_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


        // loadbalance Field Functions 
        bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
        void deleteLoadbalance() { this->loadbalance_ = nullptr;};
        inline string getLoadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
        inline Redirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


        // readTimeout Field Functions 
        bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
        void deleteReadTimeout() { this->readTimeout_ = nullptr;};
        inline int64_t getReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0L) };
        inline Redirect& setReadTimeout(int64_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


        // requestHeaders Field Functions 
        bool hasRequestHeaders() const { return this->requestHeaders_ != nullptr;};
        void deleteRequestHeaders() { this->requestHeaders_ = nullptr;};
        inline const vector<Redirect::RequestHeaders> & getRequestHeaders() const { DARABONBA_PTR_GET_CONST(requestHeaders_, vector<Redirect::RequestHeaders>) };
        inline vector<Redirect::RequestHeaders> getRequestHeaders() { DARABONBA_PTR_GET(requestHeaders_, vector<Redirect::RequestHeaders>) };
        inline Redirect& setRequestHeaders(const vector<Redirect::RequestHeaders> & requestHeaders) { DARABONBA_PTR_SET_VALUE(requestHeaders_, requestHeaders) };
        inline Redirect& setRequestHeaders(vector<Redirect::RequestHeaders> && requestHeaders) { DARABONBA_PTR_SET_RVALUE(requestHeaders_, requestHeaders) };


        // retry Field Functions 
        bool hasRetry() const { return this->retry_ != nullptr;};
        void deleteRetry() { this->retry_ = nullptr;};
        inline bool getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
        inline Redirect& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


        // routingRules Field Functions 
        bool hasRoutingRules() const { return this->routingRules_ != nullptr;};
        void deleteRoutingRules() { this->routingRules_ = nullptr;};
        inline string getRoutingRules() const { DARABONBA_PTR_GET_DEFAULT(routingRules_, "") };
        inline Redirect& setRoutingRules(string routingRules) { DARABONBA_PTR_SET_VALUE(routingRules_, routingRules) };


        // sniEnabled Field Functions 
        bool hasSniEnabled() const { return this->sniEnabled_ != nullptr;};
        void deleteSniEnabled() { this->sniEnabled_ = nullptr;};
        inline bool getSniEnabled() const { DARABONBA_PTR_GET_DEFAULT(sniEnabled_, false) };
        inline Redirect& setSniEnabled(bool sniEnabled) { DARABONBA_PTR_SET_VALUE(sniEnabled_, sniEnabled) };


        // sniHost Field Functions 
        bool hasSniHost() const { return this->sniHost_ != nullptr;};
        void deleteSniHost() { this->sniHost_ = nullptr;};
        inline string getSniHost() const { DARABONBA_PTR_GET_DEFAULT(sniHost_, "") };
        inline Redirect& setSniHost(string sniHost) { DARABONBA_PTR_SET_VALUE(sniHost_, sniHost) };


        // writeTimeout Field Functions 
        bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
        void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
        inline int64_t getWriteTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0L) };
        inline Redirect& setWriteTimeout(int64_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


      protected:
        // The IP addresses or domain names of the origin server.
        shared_ptr<vector<string>> backends_ {};
        // Indicates whether the public cloud disaster recovery feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> cnameEnabled_ {};
        // The timeout period for connections. Unit: seconds. Valid values: 5 to 120.
        shared_ptr<int64_t> connectTimeout_ {};
        // Indicates whether the HTTPS to HTTP redirection feature is enabled for back-to-origin requests. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> focusHttpBackend_ {};
        // Indicates whether the persistent connection feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> keepalive_ {};
        // The number of reused persistent connections. Valid values: 60 to 1000.
        // 
        // >  This parameter indicates the number of reused persistent connections after the persistent connection feature is enabled.
        shared_ptr<int64_t> keepaliveRequests_ {};
        // The timeout period for persistent connections that are in the Idle state. Unit: seconds. Valid values: 1 to 60. Default value: 15.
        // 
        // >  This parameter indicates the period of time during which a reused persistent connection can remain in the Idle state before the persistent connection is released.
        shared_ptr<int64_t> keepaliveTimeout_ {};
        // The load balancing algorithm that is used to forward requests to the origin server. Valid values:
        // 
        // *   **iphash**
        // *   **roundRobin**
        // *   **leastTime**
        shared_ptr<string> loadbalance_ {};
        // The timeout period for read connections. Unit: seconds. Valid values: 5 to 1800.
        shared_ptr<int64_t> readTimeout_ {};
        // The key-value pair that is used to label requests that pass through WAF.
        shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
        // Indicates whether WAF retries forwarding requests if requests fail to be forwarded to the origin server. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> retry_ {};
        // The forwarding rules that are configured for the domain name. This parameter is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
        // 
        // *   **rs**: the back-to-origin IP addresses or CNAMEs. The value is of the ARRAY type.
        // *   **location**: the name of the protection node. The value is of the STRING type.
        // *   **locationId**: the ID of the protection node. The value is of the LONG type.
        shared_ptr<string> routingRules_ {};
        // Indicates whether the origin Server Name Indication (SNI) feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> sniEnabled_ {};
        // The value of the custom SNI field. If the parameter is left empty, the value of the **Host** field in the request header is automatically used as the value of the SNI field.
        // 
        // >  This parameter is returned only if the value of **SniEnabled** is **true**.
        shared_ptr<string> sniHost_ {};
        // The timeout period for write connections. Unit: seconds. Valid values: 5 to 1800.
        shared_ptr<int64_t> writeTimeout_ {};
      };

      class Listen : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Listen& obj) { 
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
          DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
          DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
          DARABONBA_PTR_TO_JSON(ExclusiveIp, exclusiveIp_);
          DARABONBA_PTR_TO_JSON(FocusHttps, focusHttps_);
          DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
          DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
          DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
          DARABONBA_PTR_TO_JSON(IPv6Enabled, IPv6Enabled_);
          DARABONBA_PTR_TO_JSON(ProtectionResource, protectionResource_);
          DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
          DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
          DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
        };
        friend void from_json(const Darabonba::Json& j, Listen& obj) { 
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
          DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
          DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
          DARABONBA_PTR_FROM_JSON(ExclusiveIp, exclusiveIp_);
          DARABONBA_PTR_FROM_JSON(FocusHttps, focusHttps_);
          DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
          DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
          DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
          DARABONBA_PTR_FROM_JSON(IPv6Enabled, IPv6Enabled_);
          DARABONBA_PTR_FROM_JSON(ProtectionResource, protectionResource_);
          DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
          DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
          DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
        };
        Listen() = default ;
        Listen(const Listen &) = default ;
        Listen(Listen &&) = default ;
        Listen(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Listen() = default ;
        Listen& operator=(const Listen &) = default ;
        Listen& operator=(Listen &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certId_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->exclusiveIp_ == nullptr && this->focusHttps_ == nullptr
        && this->http2Enabled_ == nullptr && this->httpPorts_ == nullptr && this->httpsPorts_ == nullptr && this->IPv6Enabled_ == nullptr && this->protectionResource_ == nullptr
        && this->TLSVersion_ == nullptr && this->xffHeaderMode_ == nullptr && this->xffHeaders_ == nullptr; };
        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline Listen& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // cipherSuite Field Functions 
        bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
        void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
        inline int32_t getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
        inline Listen& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


        // customCiphers Field Functions 
        bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
        void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
        inline const vector<string> & getCustomCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
        inline vector<string> getCustomCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
        inline Listen& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
        inline Listen& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


        // enableTLSv3 Field Functions 
        bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
        void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
        inline bool getEnableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
        inline Listen& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


        // exclusiveIp Field Functions 
        bool hasExclusiveIp() const { return this->exclusiveIp_ != nullptr;};
        void deleteExclusiveIp() { this->exclusiveIp_ = nullptr;};
        inline bool getExclusiveIp() const { DARABONBA_PTR_GET_DEFAULT(exclusiveIp_, false) };
        inline Listen& setExclusiveIp(bool exclusiveIp) { DARABONBA_PTR_SET_VALUE(exclusiveIp_, exclusiveIp) };


        // focusHttps Field Functions 
        bool hasFocusHttps() const { return this->focusHttps_ != nullptr;};
        void deleteFocusHttps() { this->focusHttps_ = nullptr;};
        inline bool getFocusHttps() const { DARABONBA_PTR_GET_DEFAULT(focusHttps_, false) };
        inline Listen& setFocusHttps(bool focusHttps) { DARABONBA_PTR_SET_VALUE(focusHttps_, focusHttps) };


        // http2Enabled Field Functions 
        bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
        void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
        inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
        inline Listen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


        // httpPorts Field Functions 
        bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
        void deleteHttpPorts() { this->httpPorts_ = nullptr;};
        inline const vector<int64_t> & getHttpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int64_t>) };
        inline vector<int64_t> getHttpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int64_t>) };
        inline Listen& setHttpPorts(const vector<int64_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
        inline Listen& setHttpPorts(vector<int64_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


        // httpsPorts Field Functions 
        bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
        void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
        inline const vector<int64_t> & getHttpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int64_t>) };
        inline vector<int64_t> getHttpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int64_t>) };
        inline Listen& setHttpsPorts(const vector<int64_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
        inline Listen& setHttpsPorts(vector<int64_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


        // IPv6Enabled Field Functions 
        bool hasIPv6Enabled() const { return this->IPv6Enabled_ != nullptr;};
        void deleteIPv6Enabled() { this->IPv6Enabled_ = nullptr;};
        inline bool getIPv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(IPv6Enabled_, false) };
        inline Listen& setIPv6Enabled(bool IPv6Enabled) { DARABONBA_PTR_SET_VALUE(IPv6Enabled_, IPv6Enabled) };


        // protectionResource Field Functions 
        bool hasProtectionResource() const { return this->protectionResource_ != nullptr;};
        void deleteProtectionResource() { this->protectionResource_ = nullptr;};
        inline string getProtectionResource() const { DARABONBA_PTR_GET_DEFAULT(protectionResource_, "") };
        inline Listen& setProtectionResource(string protectionResource) { DARABONBA_PTR_SET_VALUE(protectionResource_, protectionResource) };


        // TLSVersion Field Functions 
        bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
        void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
        inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
        inline Listen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


        // xffHeaderMode Field Functions 
        bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
        void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
        inline int32_t getXffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
        inline Listen& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


        // xffHeaders Field Functions 
        bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
        void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
        inline const vector<string> & getXffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
        inline vector<string> getXffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
        inline Listen& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
        inline Listen& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


      protected:
        // The ID of the certificate.
        shared_ptr<string> certId_ {};
        // The types of cipher suites that are added. Valid values:
        // 
        // *   **1:** all cipher suites.
        // *   **2:** strong cipher suites.
        // *   **99:** custom cipher suites.
        shared_ptr<int32_t> cipherSuite_ {};
        // The custom cipher suites.
        // 
        // >  This parameter is returned only if the value of **CipherSuite** is **99**.
        shared_ptr<vector<string>> customCiphers_ {};
        // Indicates whether TLS 1.3 is supported. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enableTLSv3_ {};
        // Indicates whether exclusive IP addresses are supported. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> exclusiveIp_ {};
        // Indicates whether the HTTP to HTTPS redirection feature is enabled for the domain name. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> focusHttps_ {};
        // Indicates whether HTTP/2 is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> http2Enabled_ {};
        // The HTTP listener ports.
        shared_ptr<vector<int64_t>> httpPorts_ {};
        // The HTTPS listener ports.
        shared_ptr<vector<int64_t>> httpsPorts_ {};
        // Specifies whether to enable IPv6. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> IPv6Enabled_ {};
        // The type of the protection resource. Valid values:
        // 
        // *   **share:** shared cluster.
        // *   **gslb:** shared cluster-based intelligent load balancing.
        shared_ptr<string> protectionResource_ {};
        // The version of the Transport Layer Security (TLS) protocol. Valid values:
        // 
        // *   **tlsv1**
        // *   **tlsv1.1**
        // *   **tlsv1.2**
        shared_ptr<string> TLSVersion_ {};
        // The method that is used to obtain the actual IP address of a client. Valid values:
        // 
        // *   **0**: No Layer 7 proxies are deployed in front of WAF.
        // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the actual IP address of the client.
        // *   **2**: WAF reads the value of a custom header field as the actual IP address of the client.
        shared_ptr<int32_t> xffHeaderMode_ {};
        // The custom header fields that are used to obtain the actual IP addresses of clients. The value is in the ["header1","header2",...] format.
        // 
        // >  This parameter is returned only if the value of **XffHeaderMode** is 2.
        shared_ptr<vector<string>> xffHeaders_ {};
      };

      virtual bool empty() const override { return this->cname_ == nullptr
        && this->domain_ == nullptr && this->id_ == nullptr && this->listen_ == nullptr && this->redirect_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->status_ == nullptr && this->uid_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline Domains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Domains& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // listen Field Functions 
      bool hasListen() const { return this->listen_ != nullptr;};
      void deleteListen() { this->listen_ = nullptr;};
      inline const Domains::Listen & getListen() const { DARABONBA_PTR_GET_CONST(listen_, Domains::Listen) };
      inline Domains::Listen getListen() { DARABONBA_PTR_GET(listen_, Domains::Listen) };
      inline Domains& setListen(const Domains::Listen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
      inline Domains& setListen(Domains::Listen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


      // redirect Field Functions 
      bool hasRedirect() const { return this->redirect_ != nullptr;};
      void deleteRedirect() { this->redirect_ = nullptr;};
      inline const Domains::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, Domains::Redirect) };
      inline Domains::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, Domains::Redirect) };
      inline Domains& setRedirect(const Domains::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
      inline Domains& setRedirect(Domains::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Domains& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Domains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Domains& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      // The CNAME assigned by WAF.
      // 
      // >  This parameter is returned only if the value of **CnameEnabled** is true.
      shared_ptr<string> cname_ {};
      // The domain name.
      shared_ptr<string> domain_ {};
      // The access ID.
      shared_ptr<int64_t> id_ {};
      // The listeners.
      shared_ptr<Domains::Listen> listen_ {};
      // The configurations of the forwarding rule.
      shared_ptr<Domains::Redirect> redirect_ {};
      // The ID of the Alibaba Cloud resource group.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The status of the domain name. Valid values:
      // 
      // *   **1:** The domain name is in a normal state.
      // *   **2:** The domain name is being created.
      // *   **3:** The domain name is being modified.
      // *   **4:** The domain name is being released.
      // *   **5:** WAF no longer forwards the traffic of the domain name.
      shared_ptr<int32_t> status_ {};
      // The user ID.
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<DescribeHybridCloudResourcesResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<DescribeHybridCloudResourcesResponseBody::Domains>) };
    inline vector<DescribeHybridCloudResourcesResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<DescribeHybridCloudResourcesResponseBody::Domains>) };
    inline DescribeHybridCloudResourcesResponseBody& setDomains(const vector<DescribeHybridCloudResourcesResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeHybridCloudResourcesResponseBody& setDomains(vector<DescribeHybridCloudResourcesResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHybridCloudResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names.
    shared_ptr<vector<DescribeHybridCloudResourcesResponseBody::Domains>> domains_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
