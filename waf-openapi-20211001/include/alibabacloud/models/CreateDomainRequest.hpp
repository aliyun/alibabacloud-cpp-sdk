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
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    class Redirect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
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
        // The key of the custom header field.
        shared_ptr<string> key_ {};
        // The value of the custom header field.
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
        shared_ptr<int32_t> backendPort_ {};
        shared_ptr<int32_t> listenPort_ {};
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->backendPorts_ == nullptr
        && this->backends_ == nullptr && this->backupBackends_ == nullptr && this->cnameEnabled_ == nullptr && this->connectTimeout_ == nullptr && this->focusHttpBackend_ == nullptr
        && this->http2Origin_ == nullptr && this->http2OriginMaxConcurrency_ == nullptr && this->keepalive_ == nullptr && this->keepaliveRequests_ == nullptr && this->keepaliveTimeout_ == nullptr
        && this->loadbalance_ == nullptr && this->maxBodySize_ == nullptr && this->readTimeout_ == nullptr && this->requestHeaders_ == nullptr && this->retry_ == nullptr
        && this->routingRules_ == nullptr && this->sniEnabled_ == nullptr && this->sniHost_ == nullptr && this->WLProxyClientIp_ == nullptr && this->webServerType_ == nullptr
        && this->writeTimeout_ == nullptr && this->XClientIp_ == nullptr && this->XTrueIp_ == nullptr && this->xffProto_ == nullptr; };
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
      shared_ptr<vector<Redirect::BackendPorts>> backendPorts_ {};
      // The IP addresses or domain names of the origin server.
      shared_ptr<vector<string>> backends_ {};
      // The secondary IP addresses or domain names of the origin server.
      shared_ptr<vector<string>> backupBackends_ {};
      // Specifies whether to enable the public cloud disaster recovery feature. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> cnameEnabled_ {};
      // The timeout period of connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> connectTimeout_ {};
      // Specifies whether to enable force redirect from HTTPS to HTTP for back-to-origin requests. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> focusHttpBackend_ {};
      shared_ptr<bool> http2Origin_ {};
      shared_ptr<int32_t> http2OriginMaxConcurrency_ {};
      // Specifies whether to enable the persistent connection feature. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> keepalive_ {};
      // The number of reused persistent connections. Valid values: 60 to 1000.
      // 
      // >  This parameter specifies the number of persistent connections that can be reused after you enable the persistent connection feature.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period of idle persistent connections. Valid values: 1 to 60. Default value: 15. Unit: seconds.
      // 
      // >  This parameter specifies the period of time after which an idle persistent connection is closed.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      // The load balancing algorithm that you want to use to forward requests to the origin server. Valid values:
      // 
      // *   **iphash**
      // *   **roundRobin**
      // *   **leastTime**: This value is available only if you set **ProtectionResource** to **gslb**.
      // 
      // This parameter is required.
      shared_ptr<string> loadbalance_ {};
      shared_ptr<int32_t> maxBodySize_ {};
      // The timeout period of read connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> readTimeout_ {};
      // The custom header fields, which are key-value pairs. The fields are used to mark requests that pass through WAF.
      // 
      // When a request passes through WAF, WAF automatically adds the custom header fields to the request to mark the request. This way, the backend service can identify requests that are processed by WAF.
      shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
      // Specifies whether WAF retries if WAF fails to forward requests to the origin server. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> retry_ {};
      // The forwarding rules for the hybrid cloud mode. The value is a string that consists of JSON arrays. Each element in a JSON array is a JSON struct that contains the following fields:
      // 
      // *   **rs**: the back-to-origin IP addresses or CNAMEs. Data type: array.
      // *   **location**: the name of the protection node. Data type: string.
      // *   **locationId**: the ID of the protection node. Data type: long.
      shared_ptr<string> routingRules_ {};
      // Specifies whether to enable the Server Name Indication (SNI) feature for back-to-origin requests. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> sniEnabled_ {};
      // The custom value of the SNI field. If you do not specify this parameter, the value of the **Host** header field is automatically used. In most cases, you do not need to specify a custom value for the SNI field. However, if you want WAF to use an SNI field whose value is different from the value of the Host header field in back-to-origin requests, you can specify a custom value for the SNI field.
      // 
      // >  This parameter is required only if you set **SniEnabled** to **true**.
      shared_ptr<string> sniHost_ {};
      shared_ptr<bool> WLProxyClientIp_ {};
      shared_ptr<bool> webServerType_ {};
      // The timeout period of write connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> writeTimeout_ {};
      shared_ptr<bool> XClientIp_ {};
      shared_ptr<bool> XTrueIp_ {};
      // Specifies whether to use the X-Forward-For-Proto header field to pass the protocol used by WAF to forward requests to the origin server. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
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
        && this->http2Enabled_ == nullptr && this->httpPorts_ == nullptr && this->httpsPorts_ == nullptr && this->IPv6Enabled_ == nullptr && this->protectionResource_ == nullptr
        && this->SM2AccessOnly_ == nullptr && this->SM2CertId_ == nullptr && this->SM2Enabled_ == nullptr && this->TLSVersion_ == nullptr && this->xffHeaderMode_ == nullptr
        && this->xffHeaders_ == nullptr; };
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
      // The ID of the certificate that you want to add. This parameter is available only if you specify **HttpsPorts**.
      shared_ptr<string> certId_ {};
      // The type of the cipher suites that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **1**: all cipher suites.
      // *   **2**: strong cipher suites. This value is available only if you set **TLSVersion** to **tlsv1.2**.
      // *   **99**: custom cipher suites.
      shared_ptr<int32_t> cipherSuite_ {};
      // The custom cipher suites that you want to add.
      shared_ptr<vector<string>> customCiphers_ {};
      // Specifies whether to support TLS 1.3. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableTLSv3_ {};
      // Specifies whether to enable the exclusive IP address feature. This parameter is available only if you set **IPv6Enabled** to **false** and **ProtectionResource** to **share**. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> exclusiveIp_ {};
      // Specifies whether to enable force redirect from HTTP to HTTPS for received requests. This parameter is available only if you specify HttpsPorts and leave HttpPorts empty. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> focusHttps_ {};
      // Specifies whether to enable HTTP/2. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> http2Enabled_ {};
      // The HTTP listener ports.
      shared_ptr<vector<int32_t>> httpPorts_ {};
      // The HTTPS listener ports.
      shared_ptr<vector<int32_t>> httpsPorts_ {};
      // Specifies whether to enable IPv6 protection. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> IPv6Enabled_ {};
      // The type of the protection resource. Valid values:
      // 
      // *   **share** (default): a shared cluster.
      // *   **gslb**: shared cluster-based intelligent load balancing.
      shared_ptr<string> protectionResource_ {};
      // Specifies whether to allow access only from SM certificate-based clients. This parameter is available only if you set SM2Enabled to true.
      // 
      // *   true
      // *   false
      shared_ptr<bool> SM2AccessOnly_ {};
      // The ID of the SM certificate that you want to add. This parameter is available only if you set SM2Enabled to true.
      shared_ptr<string> SM2CertId_ {};
      // Specifies whether to add an SM certificate.
      shared_ptr<bool> SM2Enabled_ {};
      // The Transport Layer Security (TLS) version that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **tlsv1**
      // *   **tlsv1.1**
      // *   **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
      // The method that is used to obtain the originating IP address of a client. Valid values:
      // 
      // *   **0** (default): Client traffic is not filtered by a Layer 7 proxy before the traffic reaches WAF.
      // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
      // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
      shared_ptr<int32_t> xffHeaderMode_ {};
      // The custom header fields that are used to obtain the originating IP address of a client.
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
    // The mode in which you want to add the domain name to WAF. Valid values:
    // 
    // *   **share:** adds the domain name to WAF in CNAME record mode. This is the default value.
    // *   **hybrid_cloud_cname:** adds the domain name to WAF in hybrid cloud reverse proxy mode.
    shared_ptr<string> accessType_ {};
    // The domain name that you want to add to WAF.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The listener configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateDomainRequest::Listen> listen_ {};
    // The forwarding configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateDomainRequest::Redirect> redirect_ {};
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<CreateDomainRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
