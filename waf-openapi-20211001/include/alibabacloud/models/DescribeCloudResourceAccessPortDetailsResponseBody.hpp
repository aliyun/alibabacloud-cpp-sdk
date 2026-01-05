// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODY_HPP_
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
  class DescribeCloudResourceAccessPortDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessPortDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPortDetails, accessPortDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessPortDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPortDetails, accessPortDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudResourceAccessPortDetailsResponseBody() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(const DescribeCloudResourceAccessPortDetailsResponseBody &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(DescribeCloudResourceAccessPortDetailsResponseBody &&) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessPortDetailsResponseBody() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody& operator=(const DescribeCloudResourceAccessPortDetailsResponseBody &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBody& operator=(DescribeCloudResourceAccessPortDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessPortDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessPortDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Certificates, certificates_);
        DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_TO_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_TO_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_TO_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_TO_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_TO_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_TO_JSON(LogHeaders, logHeaders_);
        DARABONBA_PTR_TO_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_TO_JSON(SubStatusDetails, subStatusDetails_);
        DARABONBA_PTR_TO_JSON(TLSVersion, TLSVersion_);
        DARABONBA_PTR_TO_JSON(WriteTimeout, writeTimeout_);
        DARABONBA_PTR_TO_JSON(XffHeaderMode, xffHeaderMode_);
        DARABONBA_PTR_TO_JSON(XffHeaders, xffHeaders_);
        DARABONBA_PTR_TO_JSON(XffProto, xffProto_);
      };
      friend void from_json(const Darabonba::Json& j, AccessPortDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
        DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
        DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
        DARABONBA_PTR_FROM_JSON(CustomCiphers, customCiphers_);
        DARABONBA_PTR_FROM_JSON(EnableTLSv3, enableTLSv3_);
        DARABONBA_PTR_FROM_JSON(Http2Enabled, http2Enabled_);
        DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
        DARABONBA_PTR_FROM_JSON(KeepaliveRequests, keepaliveRequests_);
        DARABONBA_PTR_FROM_JSON(KeepaliveTimeout, keepaliveTimeout_);
        DARABONBA_PTR_FROM_JSON(LogHeaders, logHeaders_);
        DARABONBA_PTR_FROM_JSON(MaxBodySize, maxBodySize_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_FROM_JSON(SubStatusDetails, subStatusDetails_);
        DARABONBA_PTR_FROM_JSON(TLSVersion, TLSVersion_);
        DARABONBA_PTR_FROM_JSON(WriteTimeout, writeTimeout_);
        DARABONBA_PTR_FROM_JSON(XffHeaderMode, xffHeaderMode_);
        DARABONBA_PTR_FROM_JSON(XffHeaders, xffHeaders_);
        DARABONBA_PTR_FROM_JSON(XffProto, xffProto_);
      };
      AccessPortDetails() = default ;
      AccessPortDetails(const AccessPortDetails &) = default ;
      AccessPortDetails(AccessPortDetails &&) = default ;
      AccessPortDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessPortDetails() = default ;
      AccessPortDetails& operator=(const AccessPortDetails &) = default ;
      AccessPortDetails& operator=(AccessPortDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubStatusDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubStatusDetails& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertName, certName_);
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ProductCertId, productCertId_);
          DARABONBA_PTR_TO_JSON(ProductCertName, productCertName_);
          DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
        };
        friend void from_json(const Darabonba::Json& j, SubStatusDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertName, certName_);
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ProductCertId, productCertId_);
          DARABONBA_PTR_FROM_JSON(ProductCertName, productCertName_);
          DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
        };
        SubStatusDetails() = default ;
        SubStatusDetails(const SubStatusDetails &) = default ;
        SubStatusDetails(SubStatusDetails &&) = default ;
        SubStatusDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubStatusDetails() = default ;
        SubStatusDetails& operator=(const SubStatusDetails &) = default ;
        SubStatusDetails& operator=(SubStatusDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appliedType_ == nullptr
        && this->certId_ == nullptr && this->certName_ == nullptr && this->commonName_ == nullptr && this->domain_ == nullptr && this->expireTime_ == nullptr
        && this->productCertId_ == nullptr && this->productCertName_ == nullptr && this->reasonCode_ == nullptr; };
        // appliedType Field Functions 
        bool hasAppliedType() const { return this->appliedType_ != nullptr;};
        void deleteAppliedType() { this->appliedType_ = nullptr;};
        inline string getAppliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
        inline SubStatusDetails& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline SubStatusDetails& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // certName Field Functions 
        bool hasCertName() const { return this->certName_ != nullptr;};
        void deleteCertName() { this->certName_ = nullptr;};
        inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
        inline SubStatusDetails& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline SubStatusDetails& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline SubStatusDetails& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline SubStatusDetails& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // productCertId Field Functions 
        bool hasProductCertId() const { return this->productCertId_ != nullptr;};
        void deleteProductCertId() { this->productCertId_ = nullptr;};
        inline string getProductCertId() const { DARABONBA_PTR_GET_DEFAULT(productCertId_, "") };
        inline SubStatusDetails& setProductCertId(string productCertId) { DARABONBA_PTR_SET_VALUE(productCertId_, productCertId) };


        // productCertName Field Functions 
        bool hasProductCertName() const { return this->productCertName_ != nullptr;};
        void deleteProductCertName() { this->productCertName_ = nullptr;};
        inline string getProductCertName() const { DARABONBA_PTR_GET_DEFAULT(productCertName_, "") };
        inline SubStatusDetails& setProductCertName(string productCertName) { DARABONBA_PTR_SET_VALUE(productCertName_, productCertName) };


        // reasonCode Field Functions 
        bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
        void deleteReasonCode() { this->reasonCode_ = nullptr;};
        inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
        inline SubStatusDetails& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      protected:
        shared_ptr<string> appliedType_ {};
        shared_ptr<string> certId_ {};
        shared_ptr<string> certName_ {};
        shared_ptr<string> commonName_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<int64_t> expireTime_ {};
        shared_ptr<string> productCertId_ {};
        shared_ptr<string> productCertName_ {};
        shared_ptr<string> reasonCode_ {};
      };

      class LogHeaders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogHeaders& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, LogHeaders& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        LogHeaders() = default ;
        LogHeaders(const LogHeaders &) = default ;
        LogHeaders(LogHeaders &&) = default ;
        LogHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogHeaders() = default ;
        LogHeaders& operator=(const LogHeaders &) = default ;
        LogHeaders& operator=(LogHeaders &&) = default ;
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
        inline LogHeaders& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline LogHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the custom header field.
        shared_ptr<string> key_ {};
        // The value of the custom header field.
        shared_ptr<string> value_ {};
      };

      class Certificates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
          DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
        };
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
          DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
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
        && this->certificateId_ == nullptr && this->certificateName_ == nullptr; };
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


        // certificateName Field Functions 
        bool hasCertificateName() const { return this->certificateName_ != nullptr;};
        void deleteCertificateName() { this->certificateName_ = nullptr;};
        inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
        inline Certificates& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


      protected:
        // The type of the HTTPS certificate. Valid values:
        // 
        // *   **default**: default certificate.
        // *   **extension**: additional certificate.
        shared_ptr<string> appliedType_ {};
        // The ID of the certificate.
        shared_ptr<string> certificateId_ {};
        // The name of the certificate.
        shared_ptr<string> certificateName_ {};
      };

      virtual bool empty() const override { return this->certificates_ == nullptr
        && this->cipherSuite_ == nullptr && this->cloudResourceId_ == nullptr && this->customCiphers_ == nullptr && this->enableTLSv3_ == nullptr && this->http2Enabled_ == nullptr
        && this->keepalive_ == nullptr && this->keepaliveRequests_ == nullptr && this->keepaliveTimeout_ == nullptr && this->logHeaders_ == nullptr && this->maxBodySize_ == nullptr
        && this->ownerUserId_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->readTimeout_ == nullptr && this->status_ == nullptr
        && this->subStatus_ == nullptr && this->subStatusDetails_ == nullptr && this->TLSVersion_ == nullptr && this->writeTimeout_ == nullptr && this->xffHeaderMode_ == nullptr
        && this->xffHeaders_ == nullptr && this->xffProto_ == nullptr; };
      // certificates Field Functions 
      bool hasCertificates() const { return this->certificates_ != nullptr;};
      void deleteCertificates() { this->certificates_ = nullptr;};
      inline const vector<AccessPortDetails::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<AccessPortDetails::Certificates>) };
      inline vector<AccessPortDetails::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<AccessPortDetails::Certificates>) };
      inline AccessPortDetails& setCertificates(const vector<AccessPortDetails::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
      inline AccessPortDetails& setCertificates(vector<AccessPortDetails::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


      // cipherSuite Field Functions 
      bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
      void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
      inline int32_t getCipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, 0) };
      inline AccessPortDetails& setCipherSuite(int32_t cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


      // cloudResourceId Field Functions 
      bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
      void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
      inline string getCloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
      inline AccessPortDetails& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


      // customCiphers Field Functions 
      bool hasCustomCiphers() const { return this->customCiphers_ != nullptr;};
      void deleteCustomCiphers() { this->customCiphers_ = nullptr;};
      inline const vector<string> & getCustomCiphers() const { DARABONBA_PTR_GET_CONST(customCiphers_, vector<string>) };
      inline vector<string> getCustomCiphers() { DARABONBA_PTR_GET(customCiphers_, vector<string>) };
      inline AccessPortDetails& setCustomCiphers(const vector<string> & customCiphers) { DARABONBA_PTR_SET_VALUE(customCiphers_, customCiphers) };
      inline AccessPortDetails& setCustomCiphers(vector<string> && customCiphers) { DARABONBA_PTR_SET_RVALUE(customCiphers_, customCiphers) };


      // enableTLSv3 Field Functions 
      bool hasEnableTLSv3() const { return this->enableTLSv3_ != nullptr;};
      void deleteEnableTLSv3() { this->enableTLSv3_ = nullptr;};
      inline bool getEnableTLSv3() const { DARABONBA_PTR_GET_DEFAULT(enableTLSv3_, false) };
      inline AccessPortDetails& setEnableTLSv3(bool enableTLSv3) { DARABONBA_PTR_SET_VALUE(enableTLSv3_, enableTLSv3) };


      // http2Enabled Field Functions 
      bool hasHttp2Enabled() const { return this->http2Enabled_ != nullptr;};
      void deleteHttp2Enabled() { this->http2Enabled_ = nullptr;};
      inline bool getHttp2Enabled() const { DARABONBA_PTR_GET_DEFAULT(http2Enabled_, false) };
      inline AccessPortDetails& setHttp2Enabled(bool http2Enabled) { DARABONBA_PTR_SET_VALUE(http2Enabled_, http2Enabled) };


      // keepalive Field Functions 
      bool hasKeepalive() const { return this->keepalive_ != nullptr;};
      void deleteKeepalive() { this->keepalive_ = nullptr;};
      inline bool getKeepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, false) };
      inline AccessPortDetails& setKeepalive(bool keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


      // keepaliveRequests Field Functions 
      bool hasKeepaliveRequests() const { return this->keepaliveRequests_ != nullptr;};
      void deleteKeepaliveRequests() { this->keepaliveRequests_ = nullptr;};
      inline int32_t getKeepaliveRequests() const { DARABONBA_PTR_GET_DEFAULT(keepaliveRequests_, 0) };
      inline AccessPortDetails& setKeepaliveRequests(int32_t keepaliveRequests) { DARABONBA_PTR_SET_VALUE(keepaliveRequests_, keepaliveRequests) };


      // keepaliveTimeout Field Functions 
      bool hasKeepaliveTimeout() const { return this->keepaliveTimeout_ != nullptr;};
      void deleteKeepaliveTimeout() { this->keepaliveTimeout_ = nullptr;};
      inline int32_t getKeepaliveTimeout() const { DARABONBA_PTR_GET_DEFAULT(keepaliveTimeout_, 0) };
      inline AccessPortDetails& setKeepaliveTimeout(int32_t keepaliveTimeout) { DARABONBA_PTR_SET_VALUE(keepaliveTimeout_, keepaliveTimeout) };


      // logHeaders Field Functions 
      bool hasLogHeaders() const { return this->logHeaders_ != nullptr;};
      void deleteLogHeaders() { this->logHeaders_ = nullptr;};
      inline const vector<AccessPortDetails::LogHeaders> & getLogHeaders() const { DARABONBA_PTR_GET_CONST(logHeaders_, vector<AccessPortDetails::LogHeaders>) };
      inline vector<AccessPortDetails::LogHeaders> getLogHeaders() { DARABONBA_PTR_GET(logHeaders_, vector<AccessPortDetails::LogHeaders>) };
      inline AccessPortDetails& setLogHeaders(const vector<AccessPortDetails::LogHeaders> & logHeaders) { DARABONBA_PTR_SET_VALUE(logHeaders_, logHeaders) };
      inline AccessPortDetails& setLogHeaders(vector<AccessPortDetails::LogHeaders> && logHeaders) { DARABONBA_PTR_SET_RVALUE(logHeaders_, logHeaders) };


      // maxBodySize Field Functions 
      bool hasMaxBodySize() const { return this->maxBodySize_ != nullptr;};
      void deleteMaxBodySize() { this->maxBodySize_ = nullptr;};
      inline int32_t getMaxBodySize() const { DARABONBA_PTR_GET_DEFAULT(maxBodySize_, 0) };
      inline AccessPortDetails& setMaxBodySize(int32_t maxBodySize) { DARABONBA_PTR_SET_VALUE(maxBodySize_, maxBodySize) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline AccessPortDetails& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AccessPortDetails& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline AccessPortDetails& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // readTimeout Field Functions 
      bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
      void deleteReadTimeout() { this->readTimeout_ = nullptr;};
      inline int32_t getReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
      inline AccessPortDetails& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AccessPortDetails& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
      inline AccessPortDetails& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


      // subStatusDetails Field Functions 
      bool hasSubStatusDetails() const { return this->subStatusDetails_ != nullptr;};
      void deleteSubStatusDetails() { this->subStatusDetails_ = nullptr;};
      inline const vector<AccessPortDetails::SubStatusDetails> & getSubStatusDetails() const { DARABONBA_PTR_GET_CONST(subStatusDetails_, vector<AccessPortDetails::SubStatusDetails>) };
      inline vector<AccessPortDetails::SubStatusDetails> getSubStatusDetails() { DARABONBA_PTR_GET(subStatusDetails_, vector<AccessPortDetails::SubStatusDetails>) };
      inline AccessPortDetails& setSubStatusDetails(const vector<AccessPortDetails::SubStatusDetails> & subStatusDetails) { DARABONBA_PTR_SET_VALUE(subStatusDetails_, subStatusDetails) };
      inline AccessPortDetails& setSubStatusDetails(vector<AccessPortDetails::SubStatusDetails> && subStatusDetails) { DARABONBA_PTR_SET_RVALUE(subStatusDetails_, subStatusDetails) };


      // TLSVersion Field Functions 
      bool hasTLSVersion() const { return this->TLSVersion_ != nullptr;};
      void deleteTLSVersion() { this->TLSVersion_ = nullptr;};
      inline string getTLSVersion() const { DARABONBA_PTR_GET_DEFAULT(TLSVersion_, "") };
      inline AccessPortDetails& setTLSVersion(string TLSVersion) { DARABONBA_PTR_SET_VALUE(TLSVersion_, TLSVersion) };


      // writeTimeout Field Functions 
      bool hasWriteTimeout() const { return this->writeTimeout_ != nullptr;};
      void deleteWriteTimeout() { this->writeTimeout_ = nullptr;};
      inline int32_t getWriteTimeout() const { DARABONBA_PTR_GET_DEFAULT(writeTimeout_, 0) };
      inline AccessPortDetails& setWriteTimeout(int32_t writeTimeout) { DARABONBA_PTR_SET_VALUE(writeTimeout_, writeTimeout) };


      // xffHeaderMode Field Functions 
      bool hasXffHeaderMode() const { return this->xffHeaderMode_ != nullptr;};
      void deleteXffHeaderMode() { this->xffHeaderMode_ = nullptr;};
      inline int32_t getXffHeaderMode() const { DARABONBA_PTR_GET_DEFAULT(xffHeaderMode_, 0) };
      inline AccessPortDetails& setXffHeaderMode(int32_t xffHeaderMode) { DARABONBA_PTR_SET_VALUE(xffHeaderMode_, xffHeaderMode) };


      // xffHeaders Field Functions 
      bool hasXffHeaders() const { return this->xffHeaders_ != nullptr;};
      void deleteXffHeaders() { this->xffHeaders_ = nullptr;};
      inline const vector<string> & getXffHeaders() const { DARABONBA_PTR_GET_CONST(xffHeaders_, vector<string>) };
      inline vector<string> getXffHeaders() { DARABONBA_PTR_GET(xffHeaders_, vector<string>) };
      inline AccessPortDetails& setXffHeaders(const vector<string> & xffHeaders) { DARABONBA_PTR_SET_VALUE(xffHeaders_, xffHeaders) };
      inline AccessPortDetails& setXffHeaders(vector<string> && xffHeaders) { DARABONBA_PTR_SET_RVALUE(xffHeaders_, xffHeaders) };


      // xffProto Field Functions 
      bool hasXffProto() const { return this->xffProto_ != nullptr;};
      void deleteXffProto() { this->xffProto_ = nullptr;};
      inline bool getXffProto() const { DARABONBA_PTR_GET_DEFAULT(xffProto_, false) };
      inline AccessPortDetails& setXffProto(bool xffProto) { DARABONBA_PTR_SET_VALUE(xffProto_, xffProto) };


    protected:
      // The certificates that are associated with the ports of cloud services.
      shared_ptr<vector<AccessPortDetails::Certificates>> certificates_ {};
      // The type of the cipher suites. Valid values:
      // 
      // *   **1**: all cipher suites.
      // *   **2**: strong cipher suites.
      // *   **99**: custom cipher suites.
      shared_ptr<int32_t> cipherSuite_ {};
      shared_ptr<string> cloudResourceId_ {};
      // The custom cipher suites that you want to add. This parameter is available only if you set **CipherSuite** to **99**.
      shared_ptr<vector<string>> customCiphers_ {};
      // Indicates whether to support TLS 1.3. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableTLSv3_ {};
      // Indicates whether to enable HTTP/2. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> http2Enabled_ {};
      // Indicates whether to enable the persistent connection feature. Valid values:
      // 
      // *   **true** (default)
      // *   **false:**
      shared_ptr<bool> keepalive_ {};
      // The number of reused persistent connections. Valid values: 60 to 1000.
      // 
      // >  This parameter specifies the number of requests that reuse persistent connections after you enable the persistent connection feature.
      shared_ptr<int32_t> keepaliveRequests_ {};
      // The timeout period for idle persistent connections. Valid values: 10 to 3600. Default value: 15. Unit: seconds.
      // 
      // >  If no new requests are initiated over the idle persistent connection within the specified timeout period, the connection is closed.
      shared_ptr<int32_t> keepaliveTimeout_ {};
      // The custom header field that you want to use to label requests that are processed by WAF.
      // 
      // >  This parameter is returned only when the traffic marking feature is enabled for the domain name.
      shared_ptr<vector<AccessPortDetails::LogHeaders>> logHeaders_ {};
      shared_ptr<int32_t> maxBodySize_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<string> ownerUserId_ {};
      // The port of the cloud service that is added to WAF.
      shared_ptr<int32_t> port_ {};
      // The type of the protocol. Valid values:
      // 
      // *   **http**
      // *   **https**
      shared_ptr<string> protocol_ {};
      // The timeout period for read connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> readTimeout_ {};
      // The status of the domain name. Valid values:
      // 
      // *   **1**: indicates that the port is available.
      // *   **2**: indicates that the port is being created.
      // *   **3**: indicates that the port is being modified.
      // *   **4**: indicates that the port is being released.
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> subStatus_ {};
      shared_ptr<vector<AccessPortDetails::SubStatusDetails>> subStatusDetails_ {};
      // The version of the Transport Layer Security (TLS) protocol. Valid values:
      // 
      // *   **tlsv1**
      // *   **tlsv1.1**
      // *   **tlsv1.2**
      shared_ptr<string> TLSVersion_ {};
      // The timeout period for write connections. Unit: seconds. Valid values: 1 to 3600.
      shared_ptr<int32_t> writeTimeout_ {};
      // The method that WAF uses to obtain the originating IP address of a client. Valid values:
      // 
      // *   **0**: No Layer 7 proxies are deployed in front of WAF.
      // *   **1**: WAF reads the first value of the X-Forwarded-For (XFF) header field as the originating IP address of the client.
      // *   **2**: WAF reads the value of a custom header field as the originating IP address of the client.
      shared_ptr<int32_t> xffHeaderMode_ {};
      // The custom header field that is used to obtain the originating IP address of a client. Specify the value in the ["header1","header2",...] format.
      // 
      // >  This parameter is required only if you set **XffHeaderMode** to 2.
      shared_ptr<vector<string>> xffHeaders_ {};
      // Indicates whether to use the X-Forward-For-Proto header to identify the protocol used by WAF to forward requests to the origin server. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> xffProto_ {};
    };

    virtual bool empty() const override { return this->accessPortDetails_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // accessPortDetails Field Functions 
    bool hasAccessPortDetails() const { return this->accessPortDetails_ != nullptr;};
    void deleteAccessPortDetails() { this->accessPortDetails_ = nullptr;};
    inline const vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails> & getAccessPortDetails() const { DARABONBA_PTR_GET_CONST(accessPortDetails_, vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails>) };
    inline vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails> getAccessPortDetails() { DARABONBA_PTR_GET(accessPortDetails_, vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails>) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setAccessPortDetails(const vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails> & accessPortDetails) { DARABONBA_PTR_SET_VALUE(accessPortDetails_, accessPortDetails) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setAccessPortDetails(vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails> && accessPortDetails) { DARABONBA_PTR_SET_RVALUE(accessPortDetails_, accessPortDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudResourceAccessPortDetailsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the ports of cloud services that are added to WAF.
    shared_ptr<vector<DescribeCloudResourceAccessPortDetailsResponseBody::AccessPortDetails>> accessPortDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
