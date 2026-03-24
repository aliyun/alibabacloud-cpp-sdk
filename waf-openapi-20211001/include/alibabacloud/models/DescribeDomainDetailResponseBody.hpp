// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
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
  class DescribeDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SM2CertDetail, SM2CertDetail_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SM2CertDetail, SM2CertDetail_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody(DescribeDomainDetailResponseBody &&) = default ;
    DescribeDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody& operator=(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody& operator=(DescribeDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SM2CertDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SM2CertDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, SM2CertDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      SM2CertDetail() = default ;
      SM2CertDetail(const SM2CertDetail &) = default ;
      SM2CertDetail(SM2CertDetail &&) = default ;
      SM2CertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SM2CertDetail() = default ;
      SM2CertDetail& operator=(const SM2CertDetail &) = default ;
      SM2CertDetail& operator=(SM2CertDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->sans_ == nullptr && this->startTime_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline SM2CertDetail& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline SM2CertDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline SM2CertDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SM2CertDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline const vector<string> & getSans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
      inline vector<string> getSans() { DARABONBA_PTR_GET(sans_, vector<string>) };
      inline SM2CertDetail& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
      inline SM2CertDetail& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SM2CertDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The common name of the SM certificate.
      shared_ptr<string> commonName_ {};
      // The end of the validity period of the SM certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The ID of the SM certificate.
      shared_ptr<string> id_ {};
      // The name of the SM certificate.
      shared_ptr<string> name_ {};
      // The domain names that are bound to the SM certificate.
      shared_ptr<vector<string>> sans_ {};
      // The beginning of the validity period of the SM certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    class Redirect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
        DARABONBA_PTR_TO_JSON(BackUpBackendList, backUpBackendList_);
        DARABONBA_PTR_TO_JSON(BackendList, backendList_);
        DARABONBA_PTR_TO_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_TO_JSON(Backends, backends_);
        DARABONBA_PTR_TO_JSON(BackupBackends, backupBackends_);
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
        DARABONBA_PTR_FROM_JSON(BackUpBackendList, backUpBackendList_);
        DARABONBA_PTR_FROM_JSON(BackendList, backendList_);
        DARABONBA_PTR_FROM_JSON(BackendPorts, backendPorts_);
        DARABONBA_PTR_FROM_JSON(Backends, backends_);
        DARABONBA_PTR_FROM_JSON(BackupBackends, backupBackends_);
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

      class BackupBackends : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupBackends& obj) { 
          DARABONBA_PTR_TO_JSON(Backend, backend_);
        };
        friend void from_json(const Darabonba::Json& j, BackupBackends& obj) { 
          DARABONBA_PTR_FROM_JSON(Backend, backend_);
        };
        BackupBackends() = default ;
        BackupBackends(const BackupBackends &) = default ;
        BackupBackends(BackupBackends &&) = default ;
        BackupBackends(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupBackends() = default ;
        BackupBackends& operator=(const BackupBackends &) = default ;
        BackupBackends& operator=(BackupBackends &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backend_ == nullptr; };
        // backend Field Functions 
        bool hasBackend() const { return this->backend_ != nullptr;};
        void deleteBackend() { this->backend_ = nullptr;};
        inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
        inline BackupBackends& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


      protected:
        // The backup IP address or domain name of the origin server.
        shared_ptr<string> backend_ {};
      };

      class Backends : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backends& obj) { 
          DARABONBA_PTR_TO_JSON(Backend, backend_);
        };
        friend void from_json(const Darabonba::Json& j, Backends& obj) { 
          DARABONBA_PTR_FROM_JSON(Backend, backend_);
        };
        Backends() = default ;
        Backends(const Backends &) = default ;
        Backends(Backends &&) = default ;
        Backends(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backends() = default ;
        Backends& operator=(const Backends &) = default ;
        Backends& operator=(Backends &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backend_ == nullptr; };
        // backend Field Functions 
        bool hasBackend() const { return this->backend_ != nullptr;};
        void deleteBackend() { this->backend_ = nullptr;};
        inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
        inline Backends& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


      protected:
        // The IP address or domain name of the origin server.
        shared_ptr<string> backend_ {};
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
        // The listener port.
        shared_ptr<int32_t> listenPort_ {};
        // The protocol of the back-to-origin port. Valid values:
        // 
        // - **http**: HTTP.
        // 
        // - **https**: HTTPS.
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->backUpBackendList_ == nullptr
        && this->backendList_ == nullptr && this->backendPorts_ == nullptr && this->backends_ == nullptr && this->backupBackends_ == nullptr && this->connectTimeout_ == nullptr
        && this->focusHttpBackend_ == nullptr && this->http2Origin_ == nullptr && this->http2OriginMaxConcurrency_ == nullptr && this->keepalive_ == nullptr && this->keepaliveRequests_ == nullptr
        && this->keepaliveTimeout_ == nullptr && this->loadbalance_ == nullptr && this->maxBodySize_ == nullptr && this->proxyProtocol_ == nullptr && this->readTimeout_ == nullptr
        && this->requestHeaders_ == nullptr && this->retry_ == nullptr && this->sniEnabled_ == nullptr && this->sniHost_ == nullptr && this->WLProxyClientIp_ == nullptr
        && this->webServerType_ == nullptr && this->writeTimeout_ == nullptr && this->XClientIp_ == nullptr && this->XTrueIp_ == nullptr && this->xffProto_ == nullptr; };
      // backUpBackendList Field Functions 
      bool hasBackUpBackendList() const { return this->backUpBackendList_ != nullptr;};
      void deleteBackUpBackendList() { this->backUpBackendList_ = nullptr;};
      inline const vector<string> & getBackUpBackendList() const { DARABONBA_PTR_GET_CONST(backUpBackendList_, vector<string>) };
      inline vector<string> getBackUpBackendList() { DARABONBA_PTR_GET(backUpBackendList_, vector<string>) };
      inline Redirect& setBackUpBackendList(const vector<string> & backUpBackendList) { DARABONBA_PTR_SET_VALUE(backUpBackendList_, backUpBackendList) };
      inline Redirect& setBackUpBackendList(vector<string> && backUpBackendList) { DARABONBA_PTR_SET_RVALUE(backUpBackendList_, backUpBackendList) };


      // backendList Field Functions 
      bool hasBackendList() const { return this->backendList_ != nullptr;};
      void deleteBackendList() { this->backendList_ = nullptr;};
      inline const vector<string> & getBackendList() const { DARABONBA_PTR_GET_CONST(backendList_, vector<string>) };
      inline vector<string> getBackendList() { DARABONBA_PTR_GET(backendList_, vector<string>) };
      inline Redirect& setBackendList(const vector<string> & backendList) { DARABONBA_PTR_SET_VALUE(backendList_, backendList) };
      inline Redirect& setBackendList(vector<string> && backendList) { DARABONBA_PTR_SET_RVALUE(backendList_, backendList) };


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
      inline const vector<Redirect::Backends> & getBackends() const { DARABONBA_PTR_GET_CONST(backends_, vector<Redirect::Backends>) };
      inline vector<Redirect::Backends> getBackends() { DARABONBA_PTR_GET(backends_, vector<Redirect::Backends>) };
      inline Redirect& setBackends(const vector<Redirect::Backends> & backends) { DARABONBA_PTR_SET_VALUE(backends_, backends) };
      inline Redirect& setBackends(vector<Redirect::Backends> && backends) { DARABONBA_PTR_SET_RVALUE(backends_, backends) };


      // backupBackends Field Functions 
      bool hasBackupBackends() const { return this->backupBackends_ != nullptr;};
      void deleteBackupBackends() { this->backupBackends_ = nullptr;};
      inline const vector<Redirect::BackupBackends> & getBackupBackends() const { DARABONBA_PTR_GET_CONST(backupBackends_, vector<Redirect::BackupBackends>) };
      inline vector<Redirect::BackupBackends> getBackupBackends() { DARABONBA_PTR_GET(backupBackends_, vector<Redirect::BackupBackends>) };
      inline Redirect& setBackupBackends(const vector<Redirect::BackupBackends> & backupBackends) { DARABONBA_PTR_SET_VALUE(backupBackends_, backupBackends) };
      inline Redirect& setBackupBackends(vector<Redirect::BackupBackends> && backupBackends) { DARABONBA_PTR_SET_RVALUE(backupBackends_, backupBackends) };


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
      // The list of IP addresses or domain names of the backup origin servers for the domain name.
      shared_ptr<vector<string>> backUpBackendList_ {};
      // The list of IP addresses or domain names of the origin servers for the domain name.
      shared_ptr<vector<string>> backendList_ {};
      // The custom back-to-origin port mappings. By default, the back-to-origin port is the same as the listener port.
      shared_ptr<vector<Redirect::BackendPorts>> backendPorts_ {};
      // The addresses of origin servers.
      // 
      // > This parameter will be deprecated. We recommend that you use **BackendList** instead.
      shared_ptr<vector<Redirect::Backends>> backends_ {};
      // The addresses of backup origin servers.
      // 
      // > This parameter will be deprecated. We recommend that you use **BackUpBackendList** instead.
      shared_ptr<vector<Redirect::BackupBackends>> backupBackends_ {};
      // The timeout period for connections. Unit: seconds. Valid values: 5 to 120.
      shared_ptr<int32_t> connectTimeout_ {};
      // Indicates whether back-to-origin requests are forced to use HTTP. Valid values:
      // 
      // - **true**: Requests are forced to use HTTP.
      // 
      // - **false**: Requests are not forced to use HTTP.
      shared_ptr<bool> focusHttpBackend_ {};
      // Indicates whether HTTP/2 is enabled for back-to-origin requests.
      shared_ptr<bool> http2Origin_ {};
      // The maximum number of concurrent connections for HTTP/2 back-to-origin requests.
      shared_ptr<int32_t> http2OriginMaxConcurrency_ {};
      // Indicates whether persistent connections are enabled. Valid values:
      // 
      // - **true** (default): Persistent connections are enabled.
      // 
      // - **false**: Persistent connections are disabled.
      shared_ptr<bool> keepalive_ {};
      // The maximum number of requests that reuse a persistent connection. Valid values: 60 to 1,000.
      // 
      // > The number of reused persistent connections after the persistent connection feature is enabled.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period for idle persistent connections. Valid values: 1 to 60. Default value: 15. Unit: seconds.
      // 
      // > The period of time during which a reused persistent connection is allowed to remain idle before the connection is closed.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      // The load balancing algorithm used when WAF forwards requests to the origin server. Valid values:
      // 
      // - **iphash**: the IP hash algorithm.
      // 
      // - **roundRobin**: the round-robin algorithm.
      // 
      // - **leastTime**: the least time algorithm.
      shared_ptr<string> loadbalance_ {};
      // The maximum size of a request body. Valid values: 2 to 10. Default value: 2. Unit: GB.
      // 
      // > This feature is available only for the Ultimate edition.
      shared_ptr<int32_t> maxBodySize_ {};
      // Indicates whether the Proxy Protocol feature is enabled for back-to-origin requests. Valid values:
      // 
      // - **true**: The Proxy Protocol feature is enabled.
      // 
      // - **false**: The Proxy Protocol feature is disabled.
      shared_ptr<bool> proxyProtocol_ {};
      // The timeout period for read operations. Unit: seconds. Valid values: 5 to 1,800.
      shared_ptr<int32_t> readTimeout_ {};
      // The custom header fields used to mark requests that pass through WAF.
      shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
      // Indicates whether WAF retries forwarding requests to the origin server upon failure. Valid values:
      // 
      // - **true** (default): WAF retries.
      // 
      // - **false**: WAF does not retry.
      shared_ptr<bool> retry_ {};
      // Indicates whether origin Server Name Indication (SNI) is enabled. Valid values:
      // 
      // - **true**: Origin SNI is enabled.
      // 
      // - **false** (default): Origin SNI is not enabled.
      shared_ptr<bool> sniEnabled_ {};
      // The value of the SNI field.
      shared_ptr<string> sniHost_ {};
      // Indicates whether the WL-Proxy-Client-IP header is included in back-to-origin requests. Valid values:
      // 
      // - **true** (default): The WL-Proxy-Client-IP header is included.
      // 
      // - **false**: The WL-Proxy-Client-IP header is not included.
      shared_ptr<bool> WLProxyClientIp_ {};
      // Indicates whether the Web-Server-Type header is included in back-to-origin requests. Valid values:
      // 
      // - **true** (default): The Web-Server-Type header is included.
      // 
      // - **false**: The Web-Server-Type header is not included.
      shared_ptr<bool> webServerType_ {};
      // The timeout period for write operations. Unit: seconds. Valid values: 5 to 1,800.
      shared_ptr<int32_t> writeTimeout_ {};
      // Indicates whether the X-Client-IP header is included in back-to-origin requests. Valid values:
      // 
      // - **true** (default): The X-Client-IP header is included.
      // 
      // - **false**: The X-Client-IP header is not included.
      shared_ptr<bool> XClientIp_ {};
      // Indicates whether the X-True-IP header is included in back-to-origin requests. Valid values:
      // 
      // - **true** (default): The X-True-IP header is included.
      // 
      // - **false**: The X-True-IP header is not included.
      shared_ptr<bool> XTrueIp_ {};
      // Indicates whether the X-Forward-For-Proto header is included in back-to-origin requests to pass the protocol used by WAF. Valid values:
      // 
      // - **true** (default): The X-Forward-For-Proto header is included.
      // 
      // - **false**: The X-Forward-For-Proto header is not included.
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
      inline int64_t getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0L) };
      inline Listen& setCipherSuite(int64_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


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
      inline int64_t getXffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0L) };
      inline Listen& setXffHeaderMode(int64_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


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
      // The type of cipher suite. Valid values:
      // 
      // - **1**: all cipher suites.
      // 
      // - **2**: strong cipher suites.
      // 
      // - **99**: custom cipher suites.
      shared_ptr<int64_t> cipherSuite_ {};
      // The custom cipher suites.
      shared_ptr<vector<string>> customCiphers_ {};
      // Indicates whether TLS 1.3 is supported. Valid values:
      // 
      // - **true**: TLS 1.3 is supported.
      // 
      // - **false**: TLS 1.3 is not supported.
      shared_ptr<bool> enableTLSv3_ {};
      // Indicates whether an exclusive IP address is enabled for the domain name. Valid values:
      // 
      // - **true**: An exclusive IP address is enabled for the domain name.
      // 
      // - **false**: An exclusive IP address is not enabled for the domain name.
      shared_ptr<bool> exclusiveIp_ {};
      // Indicates whether HTTP to HTTPS redirection is enabled for the domain name. Valid values:
      // 
      // - **true**: HTTP to HTTPS redirection is enabled for the domain name.
      // 
      // - **false**: HTTP to HTTPS redirection is not enabled for the domain name.
      shared_ptr<bool> focusHttps_ {};
      // Indicates whether HSTS includes subdomains. Valid values:
      // 
      // - **true**: HSTS includes subdomains.
      // 
      // - **false**: HSTS does not include subdomains.
      shared_ptr<bool> hstsIncludeSubDomain_ {};
      // The maximum age value of the HSTS policy. Unit: seconds.
      shared_ptr<int64_t> hstsMaxAge_ {};
      // Indicates whether HSTS preload is enabled. Default value: false. Valid values:
      // 
      // - **true**: HSTS preload is enabled.
      // 
      // - **false**: HSTS preload is disabled.
      shared_ptr<bool> hstsPreload_ {};
      // Indicates whether HTTP/2 is enabled. Valid values:
      // 
      // - **true**: HTTP/2 is enabled.
      // 
      // - **false**: HTTP/2 is not enabled.
      shared_ptr<bool> http2Enabled_ {};
      // The HTTP listener ports.
      shared_ptr<vector<int64_t>> httpPorts_ {};
      // The HTTPS listener ports.
      shared_ptr<vector<int64_t>> httpsPorts_ {};
      // Indicates whether IPv6 is enabled. Valid values:
      // 
      // - **true**: IPv6 is enabled.
      // 
      // - **false**: IPv6 is not enabled.
      shared_ptr<bool> IPv6Enabled_ {};
      // The type of the protection resource. Valid values:
      // 
      // - **share**: shared cluster.
      // 
      // - **gslb**: intelligent load balancing for shared clusters.
      shared_ptr<string> protectionResource_ {};
      // Indicates whether only SM certificate-based clients can access the domain name. This parameter is available only if you set SM2Enabled to true. Valid values:
      // 
      // - **true**: Only SM certificate-based clients can access the domain name.
      // 
      // - **false**: Both SM certificate-based and non-SM certificate-based clients can access the domain name.
      shared_ptr<bool> SM2AccessOnly_ {};
      // The ID of the SM certificate. This parameter is available only if you set SM2Enabled to true.
      shared_ptr<string> SM2CertId_ {};
      // Indicates whether SM certificate-based verification is enabled. Valid values:
      // 
      // - **true**: SM certificate-based verification is enabled.
      // 
      // - **false**: SM certificate-based verification is not enabled.
      shared_ptr<bool> SM2Enabled_ {};
      // The version of the Transport Layer Security (TLS) protocol. Valid values:
      // 
      // - **tlsv1**
      // 
      // - **tlsv1.1**
      // 
      // - **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
      // The method that WAF uses to obtain the originating IP address of a client. Valid values:
      // 
      // - **0**: The client traffic is not forwarded by a Layer 7 proxy before the traffic reaches WAF.
      // 
      // - **1**: WAF reads the first value of the X-Forwarded-For (XFF) field in the request header as the client IP address.
      // 
      // - **2**: WAF reads the value of a custom field that you specify in the request header as the client IP address.
      shared_ptr<int64_t> xffHeaderMode_ {};
      // The custom header fields used to obtain the actual IP address of a client.
      shared_ptr<vector<string>> xffHeaders_ {};
    };

    class CertDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, CertDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      CertDetail() = default ;
      CertDetail(const CertDetail &) = default ;
      CertDetail(CertDetail &&) = default ;
      CertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertDetail() = default ;
      CertDetail& operator=(const CertDetail &) = default ;
      CertDetail& operator=(CertDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonName_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->sans_ == nullptr && this->startTime_ == nullptr; };
      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertDetail& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline CertDetail& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline CertDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CertDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline const vector<string> & getSans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
      inline vector<string> getSans() { DARABONBA_PTR_GET(sans_, vector<string>) };
      inline CertDetail& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
      inline CertDetail& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline CertDetail& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The common name of the SSL certificate.
      shared_ptr<string> commonName_ {};
      // The end of the validity period of the SSL certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The ID of the SSL certificate.
      shared_ptr<string> id_ {};
      // The name of the SSL certificate.
      shared_ptr<string> name_ {};
      // The domain names that are bound to the certificate.
      shared_ptr<vector<string>> sans_ {};
      // The beginning of the validity period of the SSL certificate. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->certDetail_ == nullptr
        && this->cname_ == nullptr && this->domain_ == nullptr && this->domainId_ == nullptr && this->listen_ == nullptr && this->redirect_ == nullptr
        && this->requestId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->SM2CertDetail_ == nullptr && this->status_ == nullptr; };
    // certDetail Field Functions 
    bool hasCertDetail() const { return this->certDetail_ != nullptr;};
    void deleteCertDetail() { this->certDetail_ = nullptr;};
    inline const DescribeDomainDetailResponseBody::CertDetail & getCertDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, DescribeDomainDetailResponseBody::CertDetail) };
    inline DescribeDomainDetailResponseBody::CertDetail getCertDetail() { DARABONBA_PTR_GET(certDetail_, DescribeDomainDetailResponseBody::CertDetail) };
    inline DescribeDomainDetailResponseBody& setCertDetail(const DescribeDomainDetailResponseBody::CertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
    inline DescribeDomainDetailResponseBody& setCertDetail(DescribeDomainDetailResponseBody::CertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainDetailResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainDetailResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const DescribeDomainDetailResponseBody::Listen & getListen() const { DARABONBA_PTR_GET_CONST(listen_, DescribeDomainDetailResponseBody::Listen) };
    inline DescribeDomainDetailResponseBody::Listen getListen() { DARABONBA_PTR_GET(listen_, DescribeDomainDetailResponseBody::Listen) };
    inline DescribeDomainDetailResponseBody& setListen(const DescribeDomainDetailResponseBody::Listen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline DescribeDomainDetailResponseBody& setListen(DescribeDomainDetailResponseBody::Listen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const DescribeDomainDetailResponseBody::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, DescribeDomainDetailResponseBody::Redirect) };
    inline DescribeDomainDetailResponseBody::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, DescribeDomainDetailResponseBody::Redirect) };
    inline DescribeDomainDetailResponseBody& setRedirect(const DescribeDomainDetailResponseBody::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline DescribeDomainDetailResponseBody& setRedirect(DescribeDomainDetailResponseBody::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDomainDetailResponseBody& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // SM2CertDetail Field Functions 
    bool hasSM2CertDetail() const { return this->SM2CertDetail_ != nullptr;};
    void deleteSM2CertDetail() { this->SM2CertDetail_ = nullptr;};
    inline const DescribeDomainDetailResponseBody::SM2CertDetail & getSM2CertDetail() const { DARABONBA_PTR_GET_CONST(SM2CertDetail_, DescribeDomainDetailResponseBody::SM2CertDetail) };
    inline DescribeDomainDetailResponseBody::SM2CertDetail getSM2CertDetail() { DARABONBA_PTR_GET(SM2CertDetail_, DescribeDomainDetailResponseBody::SM2CertDetail) };
    inline DescribeDomainDetailResponseBody& setSM2CertDetail(const DescribeDomainDetailResponseBody::SM2CertDetail & sM2CertDetail) { DARABONBA_PTR_SET_VALUE(SM2CertDetail_, sM2CertDetail) };
    inline DescribeDomainDetailResponseBody& setSM2CertDetail(DescribeDomainDetailResponseBody::SM2CertDetail && sM2CertDetail) { DARABONBA_PTR_SET_RVALUE(SM2CertDetail_, sM2CertDetail) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDomainDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details of the SSL certificate.
    shared_ptr<DescribeDomainDetailResponseBody::CertDetail> certDetail_ {};
    // The CNAME assigned by WAF to the domain name.
    shared_ptr<string> cname_ {};
    // The domain name that is onboarded to WAF.
    shared_ptr<string> domain_ {};
    // The ID of the domain name that is onboarded to WAF.
    shared_ptr<string> domainId_ {};
    // The listener configurations.
    shared_ptr<DescribeDomainDetailResponseBody::Listen> listen_ {};
    // The forwarding configurations.
    shared_ptr<DescribeDomainDetailResponseBody::Redirect> redirect_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The details of the SM certificate.
    shared_ptr<DescribeDomainDetailResponseBody::SM2CertDetail> SM2CertDetail_ {};
    // The status of the domain name. Valid values:
    // 
    // - **1**: The domain name is in normal status.
    // 
    // - **2**: The domain name is being created.
    // 
    // - **3**: The domain name is being modified.
    // 
    // - **4**: The domain name is being released.
    // 
    // - **5**: The domain name stops forwarding traffic.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
