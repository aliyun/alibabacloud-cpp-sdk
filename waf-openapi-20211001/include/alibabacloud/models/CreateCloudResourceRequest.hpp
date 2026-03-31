// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUEST_HPP_
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
  class CreateCloudResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCloudResourceRequest() = default ;
    CreateCloudResourceRequest(const CreateCloudResourceRequest &) = default ;
    CreateCloudResourceRequest(CreateCloudResourceRequest &&) = default ;
    CreateCloudResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudResourceRequest() = default ;
    CreateCloudResourceRequest& operator=(const CreateCloudResourceRequest &) = default ;
    CreateCloudResourceRequest& operator=(CreateCloudResourceRequest &&) = default ;
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
        // The key of the custom header field.
        shared_ptr<string> key_ {};
        // The value of the custom header field.
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
      // Specifies whether to enable the persistent connection feature. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> keepalive_ {};
      // The number of reused persistent connections. Valid values: 60 to 1000.
      // 
      // >  This parameter specifies the number of persistent connections that can be reused after you enable the persistent connection feature.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period of idle persistent connections. Valid values: 10 to 3600. Default value: 3600. Unit: seconds.
      // 
      // >  This parameter specifies the period of time after which an idle persistent connection is closed.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      shared_ptr<int32_t> maxBodySize_ {};
      // The timeout period of read connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> readTimeout_ {};
      // The custom header fields. Specify the value in the [**{"k":"*key*","v":"*value*"}**] format. ***key*** specifies the key of a custom header field. ***value*** specifies the value of a custom header field.
      // 
      // >  If a request contains a custom header field, WAF overwrites the original value of the field with the specified value.
      shared_ptr<vector<Redirect::RequestHeaders>> requestHeaders_ {};
      // The timeout period of write connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> writeTimeout_ {};
      // The method that is used to obtain the originating IP address of a client. Valid values:
      // 
      // *   **0**: No Layer 7 proxies are deployed in front of WAF.
      // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
      // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
      shared_ptr<int32_t> xffHeaderMode_ {};
      // The custom header fields that are used to obtain the originating IP address of a client. Specify the value in the **["header1","header2",...]** format.
      // 
      // >  This parameter is required only if you set **XffHeaderMode** to 2.
      shared_ptr<vector<string>> xffHeaders_ {};
      // Specifies whether to use the X-Forward-For-Proto header field to pass the protocol used by WAF to forward requests to the origin server. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
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
        DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
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
        DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
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
        // The type of the certificate. Valid values:
        // 
        // *   **default**: default certificate.
        // *   **extension**: additional certificate.
        shared_ptr<string> appliedType_ {};
        // The ID of the certificate that you want to add.
        // 
        // >  You can call the [DescribeCertificates](https://help.aliyun.com/document_detail/160783.html) operation to query the IDs of all SSL certificates that are associated with a domain name.
        shared_ptr<string> certificateId_ {};
      };

      virtual bool empty() const override { return this->certificates_ == nullptr
        && this->cipherSuite_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->http2Enabled_ == nullptr && this->port_ == nullptr
        && this->protocol_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceProduct_ == nullptr && this->resourceRegionId_ == nullptr && this->TLSVersion_ == nullptr; };
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


      // resourceRegionId Field Functions 
      bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
      void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
      inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
      inline Listen& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


      // TLSVersion Field Functions 
      bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
      void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
      inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
      inline Listen& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


    protected:
      // The certificates.
      shared_ptr<vector<Listen::Certificates>> certificates_ {};
      // The type of the cipher suites that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **1**: all cipher suites.
      // *   **2**: strong cipher suites. This value is available only if you set **TLSVersion** to **tlsv1.2**.
      // *   **99**: custom cipher suites.
      shared_ptr<int32_t> cipherSuite_ {};
      // The custom cipher suites that you want to add. This parameter is available only if you set **CipherSuite** to **99**.
      shared_ptr<vector<string>> customCiphers_ {};
      // Specifies whether to support TLS 1.3. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableTLSv3_ {};
      // Specifies whether to enable HTTP/2. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> http2Enabled_ {};
      // The port of the cloud service.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // The protocol type. Valid values:
      // 
      // *   **http**
      // *   **https**
      // 
      // This parameter is required.
      shared_ptr<string> protocol_ {};
      // The instance ID of the cloud service.
      // 
      // This parameter is required.
      shared_ptr<string> resourceInstanceId_ {};
      // The type of the cloud service that you want to add. Valid values:
      // 
      // *   **clb4**: Layer 4 CLB.
      // *   **clb7**: Layer 7 CLB.
      // *   **ecs**: ECS.
      // *   **nlb**: Network Load Balancer (NLB).
      // 
      // This parameter is required.
      shared_ptr<string> resourceProduct_ {};
      shared_ptr<string> resourceRegionId_ {};
      // The Transport Layer Security (TLS) version that you want to add. This parameter is available only if you specify **HttpsPorts**. Valid values:
      // 
      // *   **tlsv1**
      // *   **tlsv1.1**
      // *   **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->listen_ == nullptr && this->ownerUserId_ == nullptr && this->redirect_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const CreateCloudResourceRequest::Listen & getListen() const { DARABONBA_PTR_GET_CONST(listen_, CreateCloudResourceRequest::Listen) };
    inline CreateCloudResourceRequest::Listen getListen() { DARABONBA_PTR_GET(listen_, CreateCloudResourceRequest::Listen) };
    inline CreateCloudResourceRequest& setListen(const CreateCloudResourceRequest::Listen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline CreateCloudResourceRequest& setListen(CreateCloudResourceRequest::Listen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline CreateCloudResourceRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const CreateCloudResourceRequest::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, CreateCloudResourceRequest::Redirect) };
    inline CreateCloudResourceRequest::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, CreateCloudResourceRequest::Redirect) };
    inline CreateCloudResourceRequest& setRedirect(const CreateCloudResourceRequest::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline CreateCloudResourceRequest& setRedirect(CreateCloudResourceRequest::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateCloudResourceRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCloudResourceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCloudResourceRequest::Tag>) };
    inline vector<CreateCloudResourceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateCloudResourceRequest::Tag>) };
    inline CreateCloudResourceRequest& setTag(const vector<CreateCloudResourceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCloudResourceRequest& setTag(vector<CreateCloudResourceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The listener configurations.
    // 
    // This parameter is required.
    shared_ptr<CreateCloudResourceRequest::Listen> listen_ {};
    // The ID of the Alibaba Cloud account to which the resource belongs.
    shared_ptr<string> ownerUserId_ {};
    // The forwarding configurations.
    shared_ptr<CreateCloudResourceRequest::Redirect> redirect_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: the Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<CreateCloudResourceRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
