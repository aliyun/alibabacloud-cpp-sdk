// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCEREQUEST_HPP_
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
  class ModifyCloudResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyCloudResourceRequest() = default ;
    ModifyCloudResourceRequest(const ModifyCloudResourceRequest &) = default ;
    ModifyCloudResourceRequest(ModifyCloudResourceRequest &&) = default ;
    ModifyCloudResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceRequest() = default ;
    ModifyCloudResourceRequest& operator=(const ModifyCloudResourceRequest &) = default ;
    ModifyCloudResourceRequest& operator=(ModifyCloudResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Redirect : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
        DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_TO_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
        DARABONBA_PTR_TO_JSON(RequestHeaders, requestHeaders_);
        DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
        DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
        DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
        DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
      };
      friend void from_json(const Darabonba::Json& j, Redirect& obj) { 
        DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_FROM_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
        DARABONBA_PTR_FROM_JSON(RequestHeaders, requestHeaders_);
        DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
        DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
        DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
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
        // The value of the custom request header field.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->keepalive_ == nullptr
        && this->keepaliveRequests_ == nullptr && this->keepaliveTimeout_ == nullptr && this->maxBodySize_ == nullptr && this->readTimeout_ == nullptr && this->requestHeaders_ == nullptr
        && this->writeTimeout_ == nullptr && this->xffHeaderMode_ == nullptr && this->xffHeaders_ == nullptr && this->xffProto_ == nullptr; };
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


      // writeTimeout Field Functions 
      bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
      void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
      inline int32_t getWriteTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
      inline Redirect& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


      // xffHeaderMode Field Functions 
      bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
      void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
      inline int32_t getXffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
      inline Redirect& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


      // xffHeaders Field Functions 
      bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
      void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
      inline const vector<string> & getXffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
      inline vector<string> getXffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
      inline Redirect& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
      inline Redirect& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


      // xffProto Field Functions 
      bool hasXffProto() const { return this->xffProto_ != nullptr;};
      void deleteXffProto() { this->xffProto_ = nullptr;};
      inline bool getXffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
      inline Redirect& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


    protected:
      // Indicates whether persistent connections are enabled. Valid values:
      // 
      // - **true** (default): enables persistent connections.
      // 
      // - **false**: disables persistent connections.
      shared_ptr<bool> keepalive_ {};
      // The maximum number of requests that can be served through one persistent connection. Valid values: 60 to 1000.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period for an idle persistent connection. Valid values: 10 to 3600. Default value: 3600. Unit: seconds.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      // The maximum size of a request body. Valid values: 2 to 10. Default value: 2. Unit: GB.
      shared_ptr<int32_t> maxBodySize_ {};
      // The read timeout period. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> readTimeout_ {};
      // The custom header fields used to mark traffic that is processed by WAF.
      shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
      // The write timeout period. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> writeTimeout_ {};
      // The method that WAF uses to obtain the real IP address of a client. Valid values:
      // 
      // - **0**: WAF obtains the real IP address of the client from the request. Use this value when no Layer 7 proxy resides before WAF.
      // 
      // - **1**: WAF reads the first value of the X-Forwarded-For (XFF) header as the client IP address.
      // 
      // - **2**: WAF reads the value of a custom header field as the client IP address.
      shared_ptr<int32_t> xffHeaderMode_ {};
      // The custom header fields that are used to obtain the client IP address.
      // 
      // > This parameter is required only when **XffHeaderMode** is set to **2**.
      shared_ptr<vector<string>> xffHeaders_ {};
      // Indicates whether the X-Forwarded-Proto header is used to pass the protocol used by WAF. Valid values:
      // 
      // - **true** (default): passes the protocol.
      // 
      // - **false**: does not pass the protocol.
      shared_ptr<bool> xffProto_ {};
    };

    class Listen : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listen& obj) { 
        DARABONBA_PTR_TO_JSON(Certificates, certificates_);
        DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Listen& obj) { 
        DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
        DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
        DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
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
      class Certificates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        };
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        };
        Certificates() = default ;
        Certificates(const Certificates &) = default ;
        Certificates(Certificates &&) = default ;
        Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Certificates() = default ;
        Certificates& operator=(const Certificates &) = default ;
        Certificates& operator=(Certificates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedType_ == nullptr
        && this->certificateId_ == nullptr; };
        // appliedType Field Functions 
        bool hasAppliedType() const { return this->appliedType_ != nullptr;};
        void deleteAppliedType() { this->appliedType_ = nullptr;};
        inline string getAppliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
        inline Certificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


        // certificateId Field Functions 
        bool hasCertificateId() const { return this->certificateId_ != nullptr;};
        void deleteCertificateId() { this->certificateId_ = nullptr;};
        inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
        inline Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      protected:
        // The type of the certificate for the HTTPS protocol. Valid values:
        // 
        // - **default**: a default certificate.
        // 
        // - **extension**: an extension certificate.
        shared_ptr<string> appliedType_ {};
        // The ID of the certificate.
        shared_ptr<string> certificateId_ {};
      };

      virtual bool empty() const override { return this->certificates_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->http2Enabled_ == nullptr && this->port_ == nullptr
        && this->protocol_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceProduct_ == nullptr && this->TLSVersion_ == nullptr; };
      // certificates Field Functions 
      bool hasCertificates() const { return this->certificates_ != nullptr;};
      void deleteCertificates() { this->certificates_ = nullptr;};
      inline const vector<Listen::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Listen::Certificates>) };
      inline vector<Listen::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<Listen::Certificates>) };
      inline Listen& setCertificates(const vector<Listen::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
      inline Listen& setCertificates(vector<Listen::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


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


      // http2Enabled Field Functions 
      bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
      void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
      inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
      inline Listen& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Listen& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Listen& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline Listen& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceProduct Field Functions 
      bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
      void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
      inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
      inline Listen& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


      // TLSVersion Field Functions 
      bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
      void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
      inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
      inline Listen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    protected:
      // The certificate information.
      shared_ptr<vector<Listen::Certificates>> certificates_ {};
      // The type of the cipher suite to add. This parameter applies only when you use the HTTPS protocol. Valid values:
      // 
      // - **1**: adds all cipher suites.
      // 
      // - **2**: adds strong cipher suites. This value is available only when **TLSVersion** is set to **tlsv1.2**.
      // 
      // - **99**: adds custom cipher suites.
      shared_ptr<int32_t> cipherSuite_ {};
      // The custom cipher suites.
      shared_ptr<vector<string>> customCiphers_ {};
      // Indicates whether TLS 1.3 is supported. This parameter applies only when you use the HTTPS protocol. Valid values:
      // 
      // - **true**: TLS 1.3 is supported.
      // 
      // - **false**: TLS 1.3 is not supported.
      shared_ptr<bool> enableTLSv3_ {};
      // Indicates whether HTTP/2 is enabled. This parameter applies only when you use the HTTPS protocol. Valid values:
      // 
      // - **true**: enables HTTP/2.
      // 
      // - **false** (default): disables HTTP/2.
      shared_ptr<bool> http2Enabled_ {};
      // The listening port of the cloud service instance that is added to WAF.
      shared_ptr<int32_t> port_ {};
      // The protocol type. Valid values:
      // 
      // - **http**: HTTP.
      // 
      // - **https**: HTTPS.
      // 
      // This parameter is required.
      shared_ptr<string> protocol_ {};
      // The ID of the cloud service instance.
      shared_ptr<string> resourceInstanceId_ {};
      // The type of the cloud service. Valid values:
      // 
      // - **clb4**: Layer 4 Classic Load Balancer (CLB).
      // 
      // - **clb7**: Layer 7 CLB.
      // 
      // - **ecs**: Elastic Compute Service (ECS).
      // 
      // - **nlb**: Network Load Balancer (NLB).
      shared_ptr<string> resourceProduct_ {};
      // The Transport Layer Security (TLS) version. This parameter applies only when you use the HTTPS protocol. Valid values:
      // 
      // - **tlsv1**
      // 
      // - **tlsv1.1**
      // 
      // - **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
    };

    virtual bool empty() const override { return this->cloudResourceId_ == nullptr
        && this->instanceId_ == nullptr && this->listen_ == nullptr && this->redirect_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // cloudResourceId Field Functions 
    bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
    void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
    inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
    inline ModifyCloudResourceRequest& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCloudResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const ModifyCloudResourceRequest::Listen & getListen() const { DARABONBA_PTR_GET_CONST(listen_, ModifyCloudResourceRequest::Listen) };
    inline ModifyCloudResourceRequest::Listen getListen() { DARABONBA_PTR_GET(listen_, ModifyCloudResourceRequest::Listen) };
    inline ModifyCloudResourceRequest& setListen(const ModifyCloudResourceRequest::Listen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline ModifyCloudResourceRequest& setListen(ModifyCloudResourceRequest::Listen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const ModifyCloudResourceRequest::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, ModifyCloudResourceRequest::Redirect) };
    inline ModifyCloudResourceRequest::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, ModifyCloudResourceRequest::Redirect) };
    inline ModifyCloudResourceRequest& setRedirect(const ModifyCloudResourceRequest::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline ModifyCloudResourceRequest& setRedirect(ModifyCloudResourceRequest::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyCloudResourceRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the cloud resource that is added to WAF.
    // 
    // > Call [CreateCloudResource](https://help.aliyun.com/document_detail/2839876.html) to add a cloud resource. The resource ID is included in the response.
    shared_ptr<string> cloudResourceId_ {};
    // The ID of the WAF instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The listener configuration.
    // 
    // This parameter is required.
    shared_ptr<ModifyCloudResourceRequest::Listen> listen_ {};
    // The forwarding configuration.
    shared_ptr<ModifyCloudResourceRequest::Redirect> redirect_ {};
    // The region of the WAF instance. Valid values:
    // 
    // - **cn-hangzhou**: the Chinese mainland.
    // 
    // - **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
