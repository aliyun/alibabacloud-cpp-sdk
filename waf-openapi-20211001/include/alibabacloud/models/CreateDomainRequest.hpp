// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
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
  class CreateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDomainRequest() = default ;
    CreateDomainRequest(const CreateDomainRequest &) = default ;
    CreateDomainRequest(CreateDomainRequest &&) = default ;
    CreateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequest() = default ;
    CreateDomainRequest& operator=(const CreateDomainRequest &) = default ;
    CreateDomainRequest& operator=(CreateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Redirect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
        DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
        DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_TO_JSON(Backends, backends_);
        DARABONBA_PTR_TO_JSON(BackupBackends, backupBackends_);
        DARABONBA_PTR_TO_JSON(CnameEnabled, cnameEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
        DARABONBA_PTR_TO_JSON(FocusHttpBackend, focusHttpBackend_);
        DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
        DARABONBA_PTR_TO_JSON(Http2OriginMaxConcurrency, http2OriginMaxConcurrency_);
        DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_TO_JSON(Loadbalance, loadbalance_);
        DARABONBA_PTR_TO_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_TO_JSON(ProxyProtocol, proxyProtocol_);
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
      friend void from_json(const Darabonba::Json& j, Redirect& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
        DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_FROM_JSON(Backends, backends_);
        DARABONBA_PTR_FROM_JSON(BackupBackends, backupBackends_);
        DARABONBA_PTR_FROM_JSON(CnameEnabled, cnameEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
        DARABONBA_PTR_FROM_JSON(FocusHttpBackend, focusHttpBackend_);
        DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
        DARABONBA_PTR_FROM_JSON(Http2OriginMaxConcurrency, http2OriginMaxConcurrency_);
        DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_FROM_JSON(Loadbalance, loadbalance_);
        DARABONBA_PTR_FROM_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_FROM_JSON(ProxyProtocol, proxyProtocol_);
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
        // The custom request header field.
        shared_ptr<string> key_ {};
        // The value set for the custom request header field.
        shared_ptr<string> value_ {};
      };

      class BackendPorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendPorts& obj) { 
          DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
          DARABONBA_PTR_TO_JSON(ListenPort, listenPort_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, BackendPorts& obj) { 
          DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
          DARABONBA_PTR_FROM_JSON(ListenPort, listenPort_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        BackendPorts() = default ;
        BackendPorts(const BackendPorts &) = default ;
        BackendPorts(BackendPorts &&) = default ;
        BackendPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendPorts() = default ;
        BackendPorts& operator=(const BackendPorts &) = default ;
        BackendPorts& operator=(BackendPorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backendPort_ == nullptr
        && this->listenPort_ == nullptr && this->protocol_ == nullptr; };
        // backendPort Field Functions 
        bool hasBackendPort() const { return this->backendPort_ != nullptr;};
        void deleteBackendPort() { this->backendPort_ = nullptr;};
        inline int32_t getBackendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
        inline BackendPorts& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


        // listenPort Field Functions 
        bool hasListenPort() const { return this->listenPort_ != nullptr;};
        void deleteListenPort() { this->listenPort_ = nullptr;};
        inline int32_t getListenPort() const { DARABONBA_PTR_GET_DEFAULT(listenPort_, 0) };
        inline BackendPorts& setListenPort(int32_t listenPort) { DARABONBA_PTR_SET_VALUE(listenPort_, listenPort) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline BackendPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The back-to-origin port.
        shared_ptr<int32_t> backendPort_ {};
        // The listening port.
        shared_ptr<int32_t> listenPort_ {};
        // The protocol of the listening port. Valid values:
        // 
        // - **http**: the HTTP protocol.
        // 
        // - **https**: the HTTPS protocol.
        shared_ptr<string> protocol_ {};
      };

      class BackendConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Backend, backend_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, BackendConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Backend, backend_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        BackendConfig() = default ;
        BackendConfig(const BackendConfig &) = default ;
        BackendConfig(BackendConfig &&) = default ;
        BackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendConfig() = default ;
        BackendConfig& operator=(const BackendConfig &) = default ;
        BackendConfig& operator=(BackendConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backend_ == nullptr
        && this->weight_ == nullptr; };
        // backend Field Functions 
        bool hasBackend() const { return this->backend_ != nullptr;};
        void deleteBackend() { this->backend_ = nullptr;};
        inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
        inline BackendConfig& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline BackendConfig& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The origin server.
        shared_ptr<string> backend_ {};
        // The weight.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->backendConfig_ == nullptr
        && this->backendPorts_ == nullptr && this->backends_ == nullptr && this->backupBackends_ == nullptr && this->cnameEnabled_ == nullptr && this->connectTimeout_ == nullptr
        && this->focusHttpBackend_ == nullptr && this->http2Origin_ == nullptr && this->http2OriginMaxConcurrency_ == nullptr && this->keepalive_ == nullptr && this->keepaliveRequests_ == nullptr
        && this->keepaliveTimeout_ == nullptr && this->loadbalance_ == nullptr && this->maxBodySize_ == nullptr && this->proxyProtocol_ == nullptr && this->readTimeout_ == nullptr
        && this->requestHeaders_ == nullptr && this->retry_ == nullptr && this->routingRules_ == nullptr && this->sniEnabled_ == nullptr && this->sniHost_ == nullptr
        && this->WLProxyClientIp_ == nullptr && this->webServerType_ == nullptr && this->writeTimeout_ == nullptr && this->XClientIp_ == nullptr && this->XTrueIp_ == nullptr
        && this->xffProto_ == nullptr; };
      // backendConfig Field Functions 
      bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
      void deleteBackendConfig() { this->backendConfig_ = nullptr;};
      inline const vector<Redirect::BackendConfig> & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, vector<Redirect::BackendConfig>) };
      inline vector<Redirect::BackendConfig> getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, vector<Redirect::BackendConfig>) };
      inline Redirect& setBackendConfig(const vector<Redirect::BackendConfig> & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
      inline Redirect& setBackendConfig(vector<Redirect::BackendConfig> && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


      // backendPorts Field Functions 
      bool hasBackendPorts() const { return this->backendPorts_ != nullptr;};
      void deleteBackendPorts() { this->backendPorts_ = nullptr;};
      inline const vector<Redirect::BackendPorts> & getBackendPorts() const { DARABONBA_PTR_GET_CONST(backendPorts_, vector<Redirect::BackendPorts>) };
      inline vector<Redirect::BackendPorts> getBackendPorts() { DARABONBA_PTR_GET(backendPorts_, vector<Redirect::BackendPorts>) };
      inline Redirect& setBackendPorts(const vector<Redirect::BackendPorts> & backendPorts) { DARABONBA_PTR_SET_VALUE(backendPorts_, backendPorts) };
      inline Redirect& setBackendPorts(vector<Redirect::BackendPorts> && backendPorts) { DARABONBA_PTR_SET_RVALUE(backendPorts_, backendPorts) };


      // backends Field Functions 
      bool hasBackends() const { return this->backends_ != nullptr;};
      void deleteBackends() { this->backends_ = nullptr;};
      inline const vector<string> & getBackends() const { DARABONBA_PTR_GET_CONST(backends_, vector<string>) };
      inline vector<string> getBackends() { DARABONBA_PTR_GET(backends_, vector<string>) };
      inline Redirect& setBackends(const vector<string> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
      inline Redirect& setBackends(vector<string> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


      // backupBackends Field Functions 
      bool hasBackupBackends() const { return this->backupBackends_ != nullptr;};
      void deleteBackupBackends() { this->backupBackends_ = nullptr;};
      inline const vector<string> & getBackupBackends() const { DARABONBA_PTR_GET_CONST(backupBackends_, vector<string>) };
      inline vector<string> getBackupBackends() { DARABONBA_PTR_GET(backupBackends_, vector<string>) };
      inline Redirect& setBackupBackends(const vector<string> & backupBackends) { DARABONBA_PTR_SET_VALUE(backupBackends_, backupBackends) };
      inline Redirect& setBackupBackends(vector<string> && backupBackends) { DARABONBA_PTR_SET_RVALUE(backupBackends_, backupBackends) };


      // cnameEnabled Field Functions 
      bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
      void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
      inline bool getCnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
      inline Redirect& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


      // connectTimeout Field Functions 
      bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
      void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
      inline int32_t getConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
      inline Redirect& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


      // focusHttpBackend Field Functions 
      bool hasFocusHttpBackend() const { return this->focusHttpBackend_ != nullptr;};
      void deleteFocusHttpBackend() { this->focusHttpBackend_ = nullptr;};
      inline bool getFocusHttpBackend() const { DARABONBA_PTR_GET_DEFAULT(focusHttpBackend_, false) };
      inline Redirect& setFocusHttpBackend(bool focusHttpBackend) { DARABONBA_PTR_SET_VALUE(focusHttpBackend_, focusHttpBackend) };


      // http2Origin Field Functions 
      bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
      void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
      inline bool getHttp2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, false) };
      inline Redirect& setHttp2Origin(bool http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


      // http2OriginMaxConcurrency Field Functions 
      bool hasHttp2OriginMaxConcurrency() const { return this->http2OriginMaxConcurrency_ != nullptr;};
      void deleteHttp2OriginMaxConcurrency() { this->http2OriginMaxConcurrency_ = nullptr;};
      inline int32_t getHttp2OriginMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(http2OriginMaxConcurrency_, 0) };
      inline Redirect& setHttp2OriginMaxConcurrency(int32_t http2OriginMaxConcurrency) { DARABONBA_PTR_SET_VALUE(http2OriginMaxConcurrency_, http2OriginMaxConcurrency) };


      // keepalive Field Functions 
      bool hasKeepalive() const { return this->keepalive_ != nullptr;};
      void deleteKeepalive() { this->keepalive_ = nullptr;};
      inline bool getKeepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
      inline Redirect& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


      // keepaliveRequests Field Functions 
      bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
      void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
      inline int32_t getKeepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
      inline Redirect& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


      // keepaliveTimeout Field Functions 
      bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
      void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
      inline int32_t getKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
      inline Redirect& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


      // loadbalance Field Functions 
      bool hasLoadbalance() const { return this->loadbalance_ != nullptr;};
      void deleteLoadbalance() { this->loadbalance_ = nullptr;};
      inline string getLoadbalance() const { DARABONBA_PTR_GET_DEFAULT(loadbalance_, "") };
      inline Redirect& setLoadbalance(string loadbalance) { DARABONBA_PTR_SET_VALUE(loadbalance_, loadbalance) };


      // maxBodySize Field Functions 
      bool hasMaxBodySize() const { return this->maxBodySize_ != nullptr;};
      void deleteMaxBodySize() { this->maxBodySize_ = nullptr;};
      inline int32_t getMaxBodySize() const { DARABONBA_PTR_GET_DEFAULT(maxBodySize_, 0) };
      inline Redirect& setMaxBodySize(int32_t maxBodySize) { DARABONBA_PTR_SET_VALUE(maxBodySize_, maxBodySize) };


      // proxyProtocol Field Functions 
      bool hasProxyProtocol() const { return this->proxyProtocol_ != nullptr;};
      void deleteProxyProtocol() { this->proxyProtocol_ = nullptr;};
      inline bool getProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocol_, false) };
      inline Redirect& setProxyProtocol(bool proxyProtocol) { DARABONBA_PTR_SET_VALUE(proxyProtocol_, proxyProtocol) };


      // readTimeout Field Functions 
      bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
      void deleteReadTimeout() { this->readTimeout_ = nullptr;};
      inline int32_t getReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
      inline Redirect& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


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


      // WLProxyClientIp Field Functions 
      bool hasWLProxyClientIp() const { return this->WLProxyClientIp_ != nullptr;};
      void deleteWLProxyClientIp() { this->WLProxyClientIp_ = nullptr;};
      inline bool getWLProxyClientIp() const { DARABONBA_PTR_GET_DEFAULT(WLProxyClientIp_, false) };
      inline Redirect& setWLProxyClientIp(bool WLProxyClientIp) { DARABONBA_PTR_SET_VALUE(WLProxyClientIp_, WLProxyClientIp) };


      // webServerType Field Functions 
      bool hasWebServerType() const { return this->webServerType_ != nullptr;};
      void deleteWebServerType() { this->webServerType_ = nullptr;};
      inline bool getWebServerType() const { DARABONBA_PTR_GET_DEFAULT(webServerType_, false) };
      inline Redirect& setWebServerType(bool webServerType) { DARABONBA_PTR_SET_VALUE(webServerType_, webServerType) };


      // writeTimeout Field Functions 
      bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
      void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
      inline int32_t getWriteTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
      inline Redirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


      // XClientIp Field Functions 
      bool hasXClientIp() const { return this->XClientIp_ != nullptr;};
      void deleteXClientIp() { this->XClientIp_ = nullptr;};
      inline bool getXClientIp() const { DARABONBA_PTR_GET_DEFAULT(XClientIp_, false) };
      inline Redirect& setXClientIp(bool XClientIp) { DARABONBA_PTR_SET_VALUE(XClientIp_, XClientIp) };


      // XTrueIp Field Functions 
      bool hasXTrueIp() const { return this->XTrueIp_ != nullptr;};
      void deleteXTrueIp() { this->XTrueIp_ = nullptr;};
      inline bool getXTrueIp() const { DARABONBA_PTR_GET_DEFAULT(XTrueIp_, false) };
      inline Redirect& setXTrueIp(bool XTrueIp) { DARABONBA_PTR_SET_VALUE(XTrueIp_, XTrueIp) };


      // xffProto Field Functions 
      bool hasXffProto() const { return this->xffProto_ != nullptr;};
      void deleteXffProto() { this->xffProto_ = nullptr;};
      inline bool getXffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
      inline Redirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


    protected:
      // The custom back-to-origin configuration.
      shared_ptr<vector<Redirect::BackendConfig>> backendConfig_ {};
      // The custom port configuration.
      shared_ptr<vector<Redirect::BackendPorts>> backendPorts_ {};
      // The IP addresses of the origin servers or the back-to-origin domain names for the domain name.
      shared_ptr<vector<string>> backends_ {};
      // The IP addresses of the secondary origin servers or the secondary back-to-origin domain names for the domain name.
      shared_ptr<vector<string>> backupBackends_ {};
      // Specifies whether to enable public cloud disaster recovery. Valid values:
      // 
      // - **true**: enables public cloud disaster recovery.
      // 
      // - **false** (default): disables public cloud disaster recovery.
      shared_ptr<bool> cnameEnabled_ {};
      // The connection timeout period. Unit: seconds.
      // Valid values: 1 to 3600.
      // Default value: 5.
      shared_ptr<int32_t> connectTimeout_ {};
      // Specifies whether to enable forced HTTP back-to-origin. This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol. Valid values:
      // 
      // - **true**: enables forced HTTP back-to-origin.
      // 
      // - **false**: disables forced HTTP back-to-origin.
      shared_ptr<bool> focusHttpBackend_ {};
      // Specifies whether to enable HTTP/2 back-to-origin. Valid values:
      // 
      // - **true**: enables HTTP/2 back-to-origin.
      // 
      // - **false**: disables HTTP/2 back-to-origin.
      shared_ptr<bool> http2Origin_ {};
      // The maximum number of concurrent HTTP/2 back-to-origin connections. Valid values: 1 to 512. Default value: 128.
      shared_ptr<int32_t> http2OriginMaxConcurrency_ {};
      // Specifies whether to maintain persistent connections. Valid values:
      // 
      // - **true** (default): maintains persistent connections.
      // 
      // - **false**: does not maintain persistent connections.
      shared_ptr<bool> keepalive_ {};
      // The number of requests that reuse a persistent connection. Valid values: 60 to 1000. Default value: 1000.
      // 
      // > The number of requests that can reuse a persistent connection after persistent connections are enabled.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period for idle persistent connections. Valid values: 1 to 60. Default value: 15. Unit: seconds.
      // 
      // > The duration after which an idle persistent connection is released.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      // The load balancing algorithm used for back-to-origin requests. Valid values:
      // 
      // - **iphash**: the IP hash algorithm.
      // 
      // - **roundRobin**: the round-robin algorithm.
      // 
      // - **leastTime**: the least time algorithm. This value is available only when **ProtectionResource** is set to **gslb**, which indicates that intelligent load balancing of a shared cluster is used.
      // 
      // This parameter is required.
      shared_ptr<string> loadbalance_ {};
      // The maximum request body size. Valid values: 2 to 10. Default value: 2. Unit: GB.
      // > This parameter is supported only by the Ultimate Edition.
      shared_ptr<int32_t> maxBodySize_ {};
      // Specifies whether to enable the feature of preserving the client source IP address. Valid values:
      // - **true**: enables the feature. After this feature is enabled, backend services can view the original IP address of the client.
      // - **false**: disables the feature.
      shared_ptr<bool> proxyProtocol_ {};
      // The read timeout period. Unit: seconds.
      // Valid values: 1 to 3600.
      // Default value: 120.
      shared_ptr<int32_t> readTimeout_ {};
      // The traffic marking fields and values for the domain name, which are used to mark the traffic processed by WAF.
      // 
      // By specifying custom request header fields and their corresponding values, WAF automatically adds the specified custom field values to the request headers as traffic marks when the access traffic of the domain name passes through WAF. This facilitates the collection of related information by backend services.
      shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
      // Specifies whether to retry when WAF fails to forward requests to the origin server. Valid values:
      // 
      // - **true** (default): retries.
      // 
      // - **false**: does not retry.
      shared_ptr<bool> retry_ {};
      // The hybrid cloud forwarding rules. The value is a string transformed from a JSON array. Each element in the JSON array is a struct that contains the following fields:
      // - **rs**: Array | The list of back-to-origin IP addresses or back-to-origin CNAMEs.
      // 
      // - **backupRs**: Array | The list of secondary back-to-origin IP addresses or back-to-origin CNAMEs. This field is required. An empty array [] indicates that no secondary back-to-origin addresses are configured.
      // 
      // - **location**: String | The name of the protection node.
      // 
      // - **locationId**: Long | The ID of the protection node.
      shared_ptr<string> routingRules_ {};
      // Specifies whether to enable back-to-origin Server Name Indication (SNI). This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol. Valid values:
      // 
      // - **true**: enables back-to-origin SNI.
      // 
      // - **false** (default): disables back-to-origin SNI.
      shared_ptr<bool> sniEnabled_ {};
      // The value of the custom SNI extension field. If you do not specify this parameter, the value of the **Host** field in the request header is used as the value of the SNI extension field by default.
      // In most cases, you do not need to customize SNI unless your service has special configuration requirements and you want WAF to use an SNI that is different from the actual request Host in back-to-origin requests.
      // 
      // > This parameter is required only when **SniEnabled** is set to **true**, which indicates that back-to-origin SNI is enabled.
      shared_ptr<string> sniHost_ {};
      // Specifies whether to allow WAF to overwrite WL-Proxy-Client-IP. Valid values:
      // 
      // - **true** (default): allows WAF to overwrite WL-Proxy-Client-IP.
      // 
      // - **false**: does not allow WAF to overwrite WL-Proxy-Client-IP.
      shared_ptr<bool> WLProxyClientIp_ {};
      // Specifies whether to allow WAF to overwrite Web-Server-Type. Valid values:
      // 
      // - **true** (default): allows WAF to overwrite Web-Server-Type.
      // 
      // - **false**: does not allow WAF to overwrite Web-Server-Type.
      shared_ptr<bool> webServerType_ {};
      // The write timeout period. Unit: seconds.
      // Valid values: 1 to 3600.
      // Default value: 120.
      shared_ptr<int32_t> writeTimeout_ {};
      // Specifies whether to allow WAF to overwrite X-Client-IP. Valid values:
      // 
      // - **true** (default): allows WAF to overwrite X-Client-IP.
      // 
      // - **false**: does not allow WAF to overwrite X-Client-IP.
      shared_ptr<bool> XClientIp_ {};
      // Specifies whether to allow WAF to overwrite X-True-IP. Valid values:
      // 
      // - **true** (default): allows WAF to overwrite X-True-IP.
      // 
      // - **false**: does not allow WAF to overwrite X-True-IP.
      shared_ptr<bool> XTrueIp_ {};
      // Specifies whether to pass the WAF protocol by using X-Forwarded-Proto. Valid values:
      // 
      // - **true** (default): passes the WAF protocol.
      // 
      // - **false**: does not pass the WAF protocol.
      shared_ptr<bool> xffProto_ {};
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
        DARABONBA_PTR_TO_JSON(HstsIncludeSubDomain, hstsIncludeSubDomain_);
        DARABONBA_PTR_TO_JSON(HstsMaxAge, hstsMaxAge_);
        DARABONBA_PTR_TO_JSON(HstsPreload, hstsPreload_);
        DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
        DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
        DARABONBA_PTR_TO_JSON(IPv6Enabled, IPv6Enabled_);
        DARABONBA_PTR_TO_JSON(ProtectionResource, protectionResource_);
        DARABONBA_PTR_TO_JSON(SM2AccessOnly, SM2AccessOnly_);
        DARABONBA_PTR_TO_JSON(SM2CertId, SM2CertId_);
        DARABONBA_PTR_TO_JSON(SM2Enabled, SM2Enabled_);
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
        DARABONBA_PTR_FROM_JSON(HstsIncludeSubDomain, hstsIncludeSubDomain_);
        DARABONBA_PTR_FROM_JSON(HstsMaxAge, hstsMaxAge_);
        DARABONBA_PTR_FROM_JSON(HstsPreload, hstsPreload_);
        DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
        DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
        DARABONBA_PTR_FROM_JSON(IPv6Enabled, IPv6Enabled_);
        DARABONBA_PTR_FROM_JSON(ProtectionResource, protectionResource_);
        DARABONBA_PTR_FROM_JSON(SM2AccessOnly, SM2AccessOnly_);
        DARABONBA_PTR_FROM_JSON(SM2CertId, SM2CertId_);
        DARABONBA_PTR_FROM_JSON(SM2Enabled, SM2Enabled_);
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
        && this->hstsIncludeSubDomain_ == nullptr && this->hstsMaxAge_ == nullptr && this->hstsPreload_ == nullptr && this->http2Enabled_ == nullptr && this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr && this->IPv6Enabled_ == nullptr && this->protectionResource_ == nullptr && this->SM2AccessOnly_ == nullptr && this->SM2CertId_ == nullptr
        && this->SM2Enabled_ == nullptr && this->TLSVersion_ == nullptr && this->xffHeaderMode_ == nullptr && this->xffHeaders_ == nullptr; };
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


      // hstsIncludeSubDomain Field Functions 
      bool hasHstsIncludeSubDomain() const { return this->hstsIncludeSubDomain_ != nullptr;};
      void deleteHstsIncludeSubDomain() { this->hstsIncludeSubDomain_ = nullptr;};
      inline bool getHstsIncludeSubDomain() const { DARABONBA_PTR_GET_DEFAULT(hstsIncludeSubDomain_, false) };
      inline Listen& setHstsIncludeSubDomain(bool hstsIncludeSubDomain) { DARABONBA_PTR_SET_VALUE(hstsIncludeSubDomain_, hstsIncludeSubDomain) };


      // hstsMaxAge Field Functions 
      bool hasHstsMaxAge() const { return this->hstsMaxAge_ != nullptr;};
      void deleteHstsMaxAge() { this->hstsMaxAge_ = nullptr;};
      inline int64_t getHstsMaxAge() const { DARABONBA_PTR_GET_DEFAULT(hstsMaxAge_, 0L) };
      inline Listen& setHstsMaxAge(int64_t hstsMaxAge) { DARABONBA_PTR_SET_VALUE(hstsMaxAge_, hstsMaxAge) };


      // hstsPreload Field Functions 
      bool hasHstsPreload() const { return this->hstsPreload_ != nullptr;};
      void deleteHstsPreload() { this->hstsPreload_ = nullptr;};
      inline bool getHstsPreload() const { DARABONBA_PTR_GET_DEFAULT(hstsPreload_, false) };
      inline Listen& setHstsPreload(bool hstsPreload) { DARABONBA_PTR_SET_VALUE(hstsPreload_, hstsPreload) };


      // http2Enabled Field Functions 
      bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
      void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
      inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
      inline Listen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


      // httpPorts Field Functions 
      bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
      void deleteHttpPorts() { this->httpPorts_ = nullptr;};
      inline const vector<int32_t> & getHttpPorts() const { DARABONBA_PTR_GET_CONST(httpPorts_, vector<int32_t>) };
      inline vector<int32_t> getHttpPorts() { DARABONBA_PTR_GET(httpPorts_, vector<int32_t>) };
      inline Listen& setHttpPorts(const vector<int32_t> & httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };
      inline Listen& setHttpPorts(vector<int32_t> && httpPorts) { DARABONBA_PTR_SET_RVALUE(httpPorts_, httpPorts) };


      // httpsPorts Field Functions 
      bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
      void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
      inline const vector<int32_t> & getHttpsPorts() const { DARABONBA_PTR_GET_CONST(httpsPorts_, vector<int32_t>) };
      inline vector<int32_t> getHttpsPorts() { DARABONBA_PTR_GET(httpsPorts_, vector<int32_t>) };
      inline Listen& setHttpsPorts(const vector<int32_t> & httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };
      inline Listen& setHttpsPorts(vector<int32_t> && httpsPorts) { DARABONBA_PTR_SET_RVALUE(httpsPorts_, httpsPorts) };


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


      // SM2AccessOnly Field Functions 
      bool hasSM2AccessOnly() const { return this->SM2AccessOnly_ != nullptr;};
      void deleteSM2AccessOnly() { this->SM2AccessOnly_ = nullptr;};
      inline bool getSM2AccessOnly() const { DARABONBA_PTR_GET_DEFAULT(SM2AccessOnly_, false) };
      inline Listen& setSM2AccessOnly(bool SM2AccessOnly) { DARABONBA_PTR_SET_VALUE(SM2AccessOnly_, SM2AccessOnly) };


      // SM2CertId Field Functions 
      bool hasSM2CertId() const { return this->SM2CertId_ != nullptr;};
      void deleteSM2CertId() { this->SM2CertId_ = nullptr;};
      inline string getSM2CertId() const { DARABONBA_PTR_GET_DEFAULT(SM2CertId_, "") };
      inline Listen& setSM2CertId(string SM2CertId) { DARABONBA_PTR_SET_VALUE(SM2CertId_, SM2CertId) };


      // SM2Enabled Field Functions 
      bool hasSM2Enabled() const { return this->SM2Enabled_ != nullptr;};
      void deleteSM2Enabled() { this->SM2Enabled_ = nullptr;};
      inline bool getSM2Enabled() const { DARABONBA_PTR_GET_DEFAULT(SM2Enabled_, false) };
      inline Listen& setSM2Enabled(bool SM2Enabled) { DARABONBA_PTR_SET_VALUE(SM2Enabled_, SM2Enabled) };


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
      // The ID of the certificate to be added. This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol.
      shared_ptr<string> certId_ {};
      // The type of cipher suite to be added. This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol. Valid values:
      // 
      // - **1**: adds all cipher suites.
      // 
      // - **2**: adds strong cipher suites. This value is available only when **TLSVersion** is set to **tlsv1.2**.
      // 
      // - **99**: adds custom cipher suites. This value is available only when **TLSVersion** is not set to **tlsv1.3**.
      shared_ptr<int32_t> cipherSuite_ {};
      // The custom cipher suites to be added.
      shared_ptr<vector<string>> customCiphers_ {};
      // Specifies whether to support TLS 1.3. Valid values:
      // 
      // - **true**: supports TLS 1.3.
      // 
      // - **false**: does not support TLS 1.3.
      // 
      // > This parameter is used only when HttpsPorts is not empty, which indicates that the domain name uses the HTTPS protocol. When TLSVersion is set to tlsv1.3, this value must be set to true.
      shared_ptr<bool> enableTLSv3_ {};
      // Specifies whether to enable an exclusive IP address. This parameter is used only when **IPv6Enabled** is set to **false**, which indicates that IPv6 is disabled, and **ProtectionResource** is set to **share**, which indicates that a shared cluster is used. Valid values:
      // 
      // - **true**: enables an exclusive IP address.
      // 
      // - **false** (default): disables an exclusive IP address.
      shared_ptr<bool> exclusiveIp_ {};
      // Specifies whether to enable forced HTTPS redirection. This parameter is used only when HttpsPorts is not empty, which indicates that the domain name uses the HTTPS protocol, and HttpPorts is empty, which indicates that the domain name does not use the HTTP protocol. Valid values:
      // 
      // - **true**: enables forced HTTPS redirection.
      // 
      // - **false**: disables forced HTTPS redirection.
      shared_ptr<bool> focusHttps_ {};
      // Specifies whether HTTP Strict Transport Security (HSTS) includes subdomains. Valid values:
      // 
      // - **true**: includes subdomains.
      // 
      // - **false**: does not include subdomains.
      shared_ptr<bool> hstsIncludeSubDomain_ {};
      // The HSTS expiration time. Unit: seconds.
      shared_ptr<int64_t> hstsMaxAge_ {};
      // Specifies whether to enable HSTS preload. Default value: false. Valid values:
      // - true: enables HSTS preload.
      // - false: disables HSTS preload.
      shared_ptr<bool> hstsPreload_ {};
      // Specifies whether to enable HTTP/2. This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol. Valid values:
      // 
      // - **true**: enables HTTP/2.
      // 
      // - **false** (default): disables HTTP/2.
      shared_ptr<bool> http2Enabled_ {};
      // The listening ports for the HTTP protocol.
      shared_ptr<vector<int32_t>> httpPorts_ {};
      // The listening ports for the HTTPS protocol.
      shared_ptr<vector<int32_t>> httpsPorts_ {};
      // Specifies whether to enable IPv6. Valid values:
      // 
      // - **true**: enables IPv6.
      // 
      // - **false** (default): disables IPv6.
      shared_ptr<bool> IPv6Enabled_ {};
      // The type of protection resource to be used. Valid values:
      // 
      // - **share** (default): uses a shared cluster.
      // 
      // - **gslb**: uses intelligent load balancing of a shared cluster.
      shared_ptr<string> protectionResource_ {};
      // Specifies whether to allow access only from SM2 clients. This parameter is used only when SM2Enabled is set to true. Valid values:
      // 
      // - true: allows access only from SM2 clients.
      // 
      // - false: allows access from both SM2 and non-SM2 clients.
      shared_ptr<bool> SM2AccessOnly_ {};
      // The ID of the SM2 certificate to be added. This parameter is used only when SM2Enabled is set to true.
      shared_ptr<string> SM2CertId_ {};
      // Specifies whether to enable the SM2 certificate.
      shared_ptr<bool> SM2Enabled_ {};
      // The TLS version to be added. This parameter is used only when **HttpsPorts** is not empty, which indicates that the domain name uses the HTTPS protocol. Valid values:
      // - **tlsv1**: supports TLS 1.0 and later versions. This value provides the highest compatibility but lower security.
      // - **tlsv1.1**: supports TLS 1.1 and later versions. This value provides good compatibility and security.
      // - **tlsv1.2**: supports TLS 1.2 and later versions. This value provides good compatibility and the highest security.
      // - **tlsv1.3**: supports only TLS 1.3. This value provides the highest security but lower compatibility.
      shared_ptr<string> TLSVersion_ {};
      // The method used by WAF to obtain the actual IP address of the client. Valid values:
      // 
      // - **0** (default): The client access traffic is not forwarded by other Layer 7 proxies before it reaches WAF.
      // 
      // - **1**: WAF reads the first value of the X-Forwarded-For (XFF) field in the request header as the client IP address.
      // 
      // - **2**: WAF reads the value of a custom field that you specified in the request header as the client IP address.
      // 
      // - **3**: WAF reads the Client IP address in the Proxy Protocol header as the client IP address.
      shared_ptr<int32_t> xffHeaderMode_ {};
      // The list of custom fields used to obtain the client IP address.
      shared_ptr<vector<string>> xffHeaders_ {};
    };

    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->domain_ == nullptr && this->instanceId_ == nullptr && this->listen_ == nullptr && this->redirect_ == nullptr && this->regionId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline CreateDomainRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const CreateDomainRequest::Listen & getListen() const { DARABONBA_PTR_GET_CONST(listen_, CreateDomainRequest::Listen) };
    inline CreateDomainRequest::Listen getListen() { DARABONBA_PTR_GET(listen_, CreateDomainRequest::Listen) };
    inline CreateDomainRequest& setListen(const CreateDomainRequest::Listen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline CreateDomainRequest& setListen(CreateDomainRequest::Listen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const CreateDomainRequest::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, CreateDomainRequest::Redirect) };
    inline CreateDomainRequest::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, CreateDomainRequest::Redirect) };
    inline CreateDomainRequest& setRedirect(const CreateDomainRequest::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline CreateDomainRequest& setRedirect(CreateDomainRequest::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateDomainRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDomainRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDomainRequest::Tag>) };
    inline vector<CreateDomainRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDomainRequest::Tag>) };
    inline CreateDomainRequest& setTag(const vector<CreateDomainRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDomainRequest& setTag(vector<CreateDomainRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The access type of the WAF instance. Valid values:
    // 
    // - **share** (default): CNAME access.
    // 
    // - **hybrid_cloud_cname**: hybrid cloud CNAME access.
    // 
    // > If the value is **share**, or the value is **hybrid_cloud_cname** and public cloud disaster recovery is enabled, you must first invoke the [DescribeVerifyContent](https://help.aliyun.com/document_detail/2985193.html) and [VerifyDomainOwner](https://help.aliyun.com/document_detail/2985192.html) operations to authenticate the domain name ownership. If the website config is added to a region in the Chinese mainland, it must also have an ICP filing.
    // >
    // > If the value is **hybrid_cloud_cname** and public cloud disaster recovery is disabled, you do not need to authenticate the domain name ownership and can directly invoke this operation.
    shared_ptr<string> accessType_ {};
    // The name of the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the WAF instance.
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the current WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The listener configuration.
    // 
    // This parameter is required.
    shared_ptr<CreateDomainRequest::Listen> listen_ {};
    // The forwarding configuration.
    // 
    // This parameter is required.
    shared_ptr<CreateDomainRequest::Redirect> redirect_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The list of tags. A maximum of 20 tags are supported.
    shared_ptr<vector<CreateDomainRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
