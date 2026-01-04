// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetFederatedCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProvider, federatedCredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProvider, federatedCredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFederatedCredentialProviderResponseBody() = default ;
    GetFederatedCredentialProviderResponseBody(const GetFederatedCredentialProviderResponseBody &) = default ;
    GetFederatedCredentialProviderResponseBody(GetFederatedCredentialProviderResponseBody &&) = default ;
    GetFederatedCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFederatedCredentialProviderResponseBody() = default ;
    GetFederatedCredentialProviderResponseBody& operator=(const GetFederatedCredentialProviderResponseBody &) = default ;
    GetFederatedCredentialProviderResponseBody& operator=(GetFederatedCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FederatedCredentialProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FederatedCredentialProvider& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
        DARABONBA_PTR_TO_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_TO_JSON(OidcProviderConfig, oidcProviderConfig_);
        DARABONBA_PTR_TO_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
        DARABONBA_PTR_TO_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, FederatedCredentialProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
        DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
        DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
        DARABONBA_PTR_FROM_JSON(OidcProviderConfig, oidcProviderConfig_);
        DARABONBA_PTR_FROM_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
        DARABONBA_PTR_FROM_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      FederatedCredentialProvider() = default ;
      FederatedCredentialProvider(const FederatedCredentialProvider &) = default ;
      FederatedCredentialProvider(FederatedCredentialProvider &&) = default ;
      FederatedCredentialProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FederatedCredentialProvider() = default ;
      FederatedCredentialProvider& operator=(const FederatedCredentialProvider &) = default ;
      FederatedCredentialProvider& operator=(FederatedCredentialProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateCaProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateCaProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Certificates, certificates_);
          DARABONBA_PTR_TO_JSON(TrustAnchorSource, trustAnchorSource_);
          DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateCaProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(TrustAnchorSource, trustAnchorSource_);
          DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
        };
        PrivateCaProviderConfig() = default ;
        PrivateCaProviderConfig(const PrivateCaProviderConfig &) = default ;
        PrivateCaProviderConfig(PrivateCaProviderConfig &&) = default ;
        PrivateCaProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateCaProviderConfig() = default ;
        PrivateCaProviderConfig& operator=(const PrivateCaProviderConfig &) = default ;
        PrivateCaProviderConfig& operator=(PrivateCaProviderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Certificates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
            DARABONBA_PTR_TO_JSON(CertificateMetadata, certificateMetadata_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
          };
          friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
            DARABONBA_PTR_FROM_JSON(CertificateMetadata, certificateMetadata_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
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
          class CertificateMetadata : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CertificateMetadata& obj) { 
              DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
              DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
            };
            friend void from_json(const Darabonba::Json& j, CertificateMetadata& obj) { 
              DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
              DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
            };
            CertificateMetadata() = default ;
            CertificateMetadata(const CertificateMetadata &) = default ;
            CertificateMetadata(CertificateMetadata &&) = default ;
            CertificateMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CertificateMetadata() = default ;
            CertificateMetadata& operator=(const CertificateMetadata &) = default ;
            CertificateMetadata& operator=(CertificateMetadata &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->notAfter_ == nullptr
        && this->notBefore_ == nullptr; };
            // notAfter Field Functions 
            bool hasNotAfter() const { return this->notAfter_ != nullptr;};
            void deleteNotAfter() { this->notAfter_ = nullptr;};
            inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
            inline CertificateMetadata& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


            // notBefore Field Functions 
            bool hasNotBefore() const { return this->notBefore_ != nullptr;};
            void deleteNotBefore() { this->notBefore_ = nullptr;};
            inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
            inline CertificateMetadata& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


          protected:
            // 证书过期时间
            shared_ptr<int64_t> notAfter_ {};
            // 证书生效时间
            shared_ptr<int64_t> notBefore_ {};
          };

          virtual bool empty() const override { return this->certificateMetadata_ == nullptr
        && this->content_ == nullptr && this->fingerprint_ == nullptr; };
          // certificateMetadata Field Functions 
          bool hasCertificateMetadata() const { return this->certificateMetadata_ != nullptr;};
          void deleteCertificateMetadata() { this->certificateMetadata_ = nullptr;};
          inline const Certificates::CertificateMetadata & getCertificateMetadata() const { DARABONBA_PTR_GET_CONST(certificateMetadata_, Certificates::CertificateMetadata) };
          inline Certificates::CertificateMetadata getCertificateMetadata() { DARABONBA_PTR_GET(certificateMetadata_, Certificates::CertificateMetadata) };
          inline Certificates& setCertificateMetadata(const Certificates::CertificateMetadata & certificateMetadata) { DARABONBA_PTR_SET_VALUE(certificateMetadata_, certificateMetadata) };
          inline Certificates& setCertificateMetadata(Certificates::CertificateMetadata && certificateMetadata) { DARABONBA_PTR_SET_RVALUE(certificateMetadata_, certificateMetadata) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Certificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // fingerprint Field Functions 
          bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
          void deleteFingerprint() { this->fingerprint_ = nullptr;};
          inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
          inline Certificates& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


        protected:
          // 证书元数据
          shared_ptr<Certificates::CertificateMetadata> certificateMetadata_ {};
          // Root证书内容
          shared_ptr<string> content_ {};
          // Root证书指纹
          shared_ptr<string> fingerprint_ {};
        };

        virtual bool empty() const override { return this->certificates_ == nullptr
        && this->trustAnchorSource_ == nullptr && this->trustCondition_ == nullptr; };
        // certificates Field Functions 
        bool hasCertificates() const { return this->certificates_ != nullptr;};
        void deleteCertificates() { this->certificates_ = nullptr;};
        inline const vector<PrivateCaProviderConfig::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<PrivateCaProviderConfig::Certificates>) };
        inline vector<PrivateCaProviderConfig::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<PrivateCaProviderConfig::Certificates>) };
        inline PrivateCaProviderConfig& setCertificates(const vector<PrivateCaProviderConfig::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
        inline PrivateCaProviderConfig& setCertificates(vector<PrivateCaProviderConfig::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


        // trustAnchorSource Field Functions 
        bool hasTrustAnchorSource() const { return this->trustAnchorSource_ != nullptr;};
        void deleteTrustAnchorSource() { this->trustAnchorSource_ = nullptr;};
        inline string getTrustAnchorSource() const { DARABONBA_PTR_GET_DEFAULT(trustAnchorSource_, "") };
        inline PrivateCaProviderConfig& setTrustAnchorSource(string trustAnchorSource) { DARABONBA_PTR_SET_VALUE(trustAnchorSource_, trustAnchorSource) };


        // trustCondition Field Functions 
        bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
        void deleteTrustCondition() { this->trustCondition_ = nullptr;};
        inline string getTrustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
        inline PrivateCaProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


      protected:
        // Root证书
        shared_ptr<vector<PrivateCaProviderConfig::Certificates>> certificates_ {};
        // Root证书获取方式
        shared_ptr<string> trustAnchorSource_ {};
        // Root证书的默认条件
        shared_ptr<string> trustCondition_ {};
      };

      class Pkcs7ProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pkcs7ProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Certificates, certificates_);
          DARABONBA_PTR_TO_JSON(CmsVerificationMode, cmsVerificationMode_);
          DARABONBA_PTR_TO_JSON(SignatureEffectiveTime, signatureEffectiveTime_);
          DARABONBA_PTR_TO_JSON(SigningTimeValueExpression, signingTimeValueExpression_);
          DARABONBA_PTR_TO_JSON(TrustAnchorSource, trustAnchorSource_);
          DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
        };
        friend void from_json(const Darabonba::Json& j, Pkcs7ProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
          DARABONBA_PTR_FROM_JSON(CmsVerificationMode, cmsVerificationMode_);
          DARABONBA_PTR_FROM_JSON(SignatureEffectiveTime, signatureEffectiveTime_);
          DARABONBA_PTR_FROM_JSON(SigningTimeValueExpression, signingTimeValueExpression_);
          DARABONBA_PTR_FROM_JSON(TrustAnchorSource, trustAnchorSource_);
          DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
        };
        Pkcs7ProviderConfig() = default ;
        Pkcs7ProviderConfig(const Pkcs7ProviderConfig &) = default ;
        Pkcs7ProviderConfig(Pkcs7ProviderConfig &&) = default ;
        Pkcs7ProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pkcs7ProviderConfig() = default ;
        Pkcs7ProviderConfig& operator=(const Pkcs7ProviderConfig &) = default ;
        Pkcs7ProviderConfig& operator=(Pkcs7ProviderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Certificates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
            DARABONBA_PTR_TO_JSON(CertificateMetadata, certificateMetadata_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
          };
          friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
            DARABONBA_PTR_FROM_JSON(CertificateMetadata, certificateMetadata_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
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
          class CertificateMetadata : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CertificateMetadata& obj) { 
              DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
              DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
            };
            friend void from_json(const Darabonba::Json& j, CertificateMetadata& obj) { 
              DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
              DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
            };
            CertificateMetadata() = default ;
            CertificateMetadata(const CertificateMetadata &) = default ;
            CertificateMetadata(CertificateMetadata &&) = default ;
            CertificateMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CertificateMetadata() = default ;
            CertificateMetadata& operator=(const CertificateMetadata &) = default ;
            CertificateMetadata& operator=(CertificateMetadata &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->notAfter_ == nullptr
        && this->notBefore_ == nullptr; };
            // notAfter Field Functions 
            bool hasNotAfter() const { return this->notAfter_ != nullptr;};
            void deleteNotAfter() { this->notAfter_ = nullptr;};
            inline int64_t getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, 0L) };
            inline CertificateMetadata& setNotAfter(int64_t notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


            // notBefore Field Functions 
            bool hasNotBefore() const { return this->notBefore_ != nullptr;};
            void deleteNotBefore() { this->notBefore_ = nullptr;};
            inline int64_t getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, 0L) };
            inline CertificateMetadata& setNotBefore(int64_t notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


          protected:
            // 证书过期时间
            shared_ptr<int64_t> notAfter_ {};
            // 证书生效时间
            shared_ptr<int64_t> notBefore_ {};
          };

          virtual bool empty() const override { return this->certificateMetadata_ == nullptr
        && this->content_ == nullptr && this->fingerprint_ == nullptr; };
          // certificateMetadata Field Functions 
          bool hasCertificateMetadata() const { return this->certificateMetadata_ != nullptr;};
          void deleteCertificateMetadata() { this->certificateMetadata_ = nullptr;};
          inline const Certificates::CertificateMetadata & getCertificateMetadata() const { DARABONBA_PTR_GET_CONST(certificateMetadata_, Certificates::CertificateMetadata) };
          inline Certificates::CertificateMetadata getCertificateMetadata() { DARABONBA_PTR_GET(certificateMetadata_, Certificates::CertificateMetadata) };
          inline Certificates& setCertificateMetadata(const Certificates::CertificateMetadata & certificateMetadata) { DARABONBA_PTR_SET_VALUE(certificateMetadata_, certificateMetadata) };
          inline Certificates& setCertificateMetadata(Certificates::CertificateMetadata && certificateMetadata) { DARABONBA_PTR_SET_RVALUE(certificateMetadata_, certificateMetadata) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Certificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // fingerprint Field Functions 
          bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
          void deleteFingerprint() { this->fingerprint_ = nullptr;};
          inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
          inline Certificates& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


        protected:
          // 证书元数据
          shared_ptr<Certificates::CertificateMetadata> certificateMetadata_ {};
          // Root证书内容
          shared_ptr<string> content_ {};
          // Root证书指纹
          shared_ptr<string> fingerprint_ {};
        };

        virtual bool empty() const override { return this->certificates_ == nullptr
        && this->cmsVerificationMode_ == nullptr && this->signatureEffectiveTime_ == nullptr && this->signingTimeValueExpression_ == nullptr && this->trustAnchorSource_ == nullptr && this->trustCondition_ == nullptr; };
        // certificates Field Functions 
        bool hasCertificates() const { return this->certificates_ != nullptr;};
        void deleteCertificates() { this->certificates_ = nullptr;};
        inline const vector<Pkcs7ProviderConfig::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Pkcs7ProviderConfig::Certificates>) };
        inline vector<Pkcs7ProviderConfig::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<Pkcs7ProviderConfig::Certificates>) };
        inline Pkcs7ProviderConfig& setCertificates(const vector<Pkcs7ProviderConfig::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
        inline Pkcs7ProviderConfig& setCertificates(vector<Pkcs7ProviderConfig::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


        // cmsVerificationMode Field Functions 
        bool hasCmsVerificationMode() const { return this->cmsVerificationMode_ != nullptr;};
        void deleteCmsVerificationMode() { this->cmsVerificationMode_ = nullptr;};
        inline string getCmsVerificationMode() const { DARABONBA_PTR_GET_DEFAULT(cmsVerificationMode_, "") };
        inline Pkcs7ProviderConfig& setCmsVerificationMode(string cmsVerificationMode) { DARABONBA_PTR_SET_VALUE(cmsVerificationMode_, cmsVerificationMode) };


        // signatureEffectiveTime Field Functions 
        bool hasSignatureEffectiveTime() const { return this->signatureEffectiveTime_ != nullptr;};
        void deleteSignatureEffectiveTime() { this->signatureEffectiveTime_ = nullptr;};
        inline int64_t getSignatureEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(signatureEffectiveTime_, 0L) };
        inline Pkcs7ProviderConfig& setSignatureEffectiveTime(int64_t signatureEffectiveTime) { DARABONBA_PTR_SET_VALUE(signatureEffectiveTime_, signatureEffectiveTime) };


        // signingTimeValueExpression Field Functions 
        bool hasSigningTimeValueExpression() const { return this->signingTimeValueExpression_ != nullptr;};
        void deleteSigningTimeValueExpression() { this->signingTimeValueExpression_ = nullptr;};
        inline string getSigningTimeValueExpression() const { DARABONBA_PTR_GET_DEFAULT(signingTimeValueExpression_, "") };
        inline Pkcs7ProviderConfig& setSigningTimeValueExpression(string signingTimeValueExpression) { DARABONBA_PTR_SET_VALUE(signingTimeValueExpression_, signingTimeValueExpression) };


        // trustAnchorSource Field Functions 
        bool hasTrustAnchorSource() const { return this->trustAnchorSource_ != nullptr;};
        void deleteTrustAnchorSource() { this->trustAnchorSource_ = nullptr;};
        inline string getTrustAnchorSource() const { DARABONBA_PTR_GET_DEFAULT(trustAnchorSource_, "") };
        inline Pkcs7ProviderConfig& setTrustAnchorSource(string trustAnchorSource) { DARABONBA_PTR_SET_VALUE(trustAnchorSource_, trustAnchorSource) };


        // trustCondition Field Functions 
        bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
        void deleteTrustCondition() { this->trustCondition_ = nullptr;};
        inline string getTrustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
        inline Pkcs7ProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


      protected:
        // pkcs7证书列表
        shared_ptr<vector<Pkcs7ProviderConfig::Certificates>> certificates_ {};
        // CMS验证模式
        shared_ptr<string> cmsVerificationMode_ {};
        // 签名有效时间
        shared_ptr<int64_t> signatureEffectiveTime_ {};
        // 签名时间
        shared_ptr<string> signingTimeValueExpression_ {};
        // 证书信任锚点来源
        shared_ptr<string> trustAnchorSource_ {};
        // 信任条件
        shared_ptr<string> trustCondition_ {};
      };

      class OidcProviderConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OidcProviderConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Audiences, audiences_);
          DARABONBA_PTR_TO_JSON(DynamicJwks, dynamicJwks_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JwksLastObtainedTime, jwksLastObtainedTime_);
          DARABONBA_PTR_TO_JSON(JwksSource, jwksSource_);
          DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_TO_JSON(StaticJwks, staticJwks_);
          DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
        };
        friend void from_json(const Darabonba::Json& j, OidcProviderConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
          DARABONBA_PTR_FROM_JSON(DynamicJwks, dynamicJwks_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JwksLastObtainedTime, jwksLastObtainedTime_);
          DARABONBA_PTR_FROM_JSON(JwksSource, jwksSource_);
          DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
          DARABONBA_PTR_FROM_JSON(StaticJwks, staticJwks_);
          DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
        };
        OidcProviderConfig() = default ;
        OidcProviderConfig(const OidcProviderConfig &) = default ;
        OidcProviderConfig(OidcProviderConfig &&) = default ;
        OidcProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OidcProviderConfig() = default ;
        OidcProviderConfig& operator=(const OidcProviderConfig &) = default ;
        OidcProviderConfig& operator=(OidcProviderConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audiences_ == nullptr
        && this->dynamicJwks_ == nullptr && this->issuer_ == nullptr && this->jwksLastObtainedTime_ == nullptr && this->jwksSource_ == nullptr && this->jwksUri_ == nullptr
        && this->staticJwks_ == nullptr && this->trustCondition_ == nullptr; };
        // audiences Field Functions 
        bool hasAudiences() const { return this->audiences_ != nullptr;};
        void deleteAudiences() { this->audiences_ = nullptr;};
        inline const vector<string> & getAudiences() const { DARABONBA_PTR_GET_CONST(audiences_, vector<string>) };
        inline vector<string> getAudiences() { DARABONBA_PTR_GET(audiences_, vector<string>) };
        inline OidcProviderConfig& setAudiences(const vector<string> & audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };
        inline OidcProviderConfig& setAudiences(vector<string> && audiences) { DARABONBA_PTR_SET_RVALUE(audiences_, audiences) };


        // dynamicJwks Field Functions 
        bool hasDynamicJwks() const { return this->dynamicJwks_ != nullptr;};
        void deleteDynamicJwks() { this->dynamicJwks_ = nullptr;};
        inline string getDynamicJwks() const { DARABONBA_PTR_GET_DEFAULT(dynamicJwks_, "") };
        inline OidcProviderConfig& setDynamicJwks(string dynamicJwks) { DARABONBA_PTR_SET_VALUE(dynamicJwks_, dynamicJwks) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline OidcProviderConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // jwksLastObtainedTime Field Functions 
        bool hasJwksLastObtainedTime() const { return this->jwksLastObtainedTime_ != nullptr;};
        void deleteJwksLastObtainedTime() { this->jwksLastObtainedTime_ = nullptr;};
        inline int64_t getJwksLastObtainedTime() const { DARABONBA_PTR_GET_DEFAULT(jwksLastObtainedTime_, 0L) };
        inline OidcProviderConfig& setJwksLastObtainedTime(int64_t jwksLastObtainedTime) { DARABONBA_PTR_SET_VALUE(jwksLastObtainedTime_, jwksLastObtainedTime) };


        // jwksSource Field Functions 
        bool hasJwksSource() const { return this->jwksSource_ != nullptr;};
        void deleteJwksSource() { this->jwksSource_ = nullptr;};
        inline string getJwksSource() const { DARABONBA_PTR_GET_DEFAULT(jwksSource_, "") };
        inline OidcProviderConfig& setJwksSource(string jwksSource) { DARABONBA_PTR_SET_VALUE(jwksSource_, jwksSource) };


        // jwksUri Field Functions 
        bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
        void deleteJwksUri() { this->jwksUri_ = nullptr;};
        inline string getJwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
        inline OidcProviderConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


        // staticJwks Field Functions 
        bool hasStaticJwks() const { return this->staticJwks_ != nullptr;};
        void deleteStaticJwks() { this->staticJwks_ = nullptr;};
        inline string getStaticJwks() const { DARABONBA_PTR_GET_DEFAULT(staticJwks_, "") };
        inline OidcProviderConfig& setStaticJwks(string staticJwks) { DARABONBA_PTR_SET_VALUE(staticJwks_, staticJwks) };


        // trustCondition Field Functions 
        bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
        void deleteTrustCondition() { this->trustCondition_ = nullptr;};
        inline string getTrustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
        inline OidcProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


      protected:
        // oidc凭证的受众列表
        shared_ptr<vector<string>> audiences_ {};
        // 动态获取的jwks
        shared_ptr<string> dynamicJwks_ {};
        // Issuer
        shared_ptr<string> issuer_ {};
        shared_ptr<int64_t> jwksLastObtainedTime_ {};
        // Jwks来源
        shared_ptr<string> jwksSource_ {};
        // JWKS 端点
        shared_ptr<string> jwksUri_ {};
        // 静态获取的jwks
        shared_ptr<string> staticJwks_ {};
        // 默认条件
        shared_ptr<string> trustCondition_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->federatedCredentialProviderId_ == nullptr && this->federatedCredentialProviderName_ == nullptr && this->federatedCredentialProviderType_ == nullptr && this->instanceId_ == nullptr
        && this->networkAccessEndpointId_ == nullptr && this->oidcProviderConfig_ == nullptr && this->pkcs7ProviderConfig_ == nullptr && this->privateCaProviderConfig_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline FederatedCredentialProvider& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FederatedCredentialProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // federatedCredentialProviderId Field Functions 
      bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
      void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
      inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
      inline FederatedCredentialProvider& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


      // federatedCredentialProviderName Field Functions 
      bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
      void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
      inline string getFederatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
      inline FederatedCredentialProvider& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


      // federatedCredentialProviderType Field Functions 
      bool hasFederatedCredentialProviderType() const { return this->federatedCredentialProviderType_ != nullptr;};
      void deleteFederatedCredentialProviderType() { this->federatedCredentialProviderType_ = nullptr;};
      inline string getFederatedCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderType_, "") };
      inline FederatedCredentialProvider& setFederatedCredentialProviderType(string federatedCredentialProviderType) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderType_, federatedCredentialProviderType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FederatedCredentialProvider& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkAccessEndpointId Field Functions 
      bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
      void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
      inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
      inline FederatedCredentialProvider& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


      // oidcProviderConfig Field Functions 
      bool hasOidcProviderConfig() const { return this->oidcProviderConfig_ != nullptr;};
      void deleteOidcProviderConfig() { this->oidcProviderConfig_ = nullptr;};
      inline const FederatedCredentialProvider::OidcProviderConfig & getOidcProviderConfig() const { DARABONBA_PTR_GET_CONST(oidcProviderConfig_, FederatedCredentialProvider::OidcProviderConfig) };
      inline FederatedCredentialProvider::OidcProviderConfig getOidcProviderConfig() { DARABONBA_PTR_GET(oidcProviderConfig_, FederatedCredentialProvider::OidcProviderConfig) };
      inline FederatedCredentialProvider& setOidcProviderConfig(const FederatedCredentialProvider::OidcProviderConfig & oidcProviderConfig) { DARABONBA_PTR_SET_VALUE(oidcProviderConfig_, oidcProviderConfig) };
      inline FederatedCredentialProvider& setOidcProviderConfig(FederatedCredentialProvider::OidcProviderConfig && oidcProviderConfig) { DARABONBA_PTR_SET_RVALUE(oidcProviderConfig_, oidcProviderConfig) };


      // pkcs7ProviderConfig Field Functions 
      bool hasPkcs7ProviderConfig() const { return this->pkcs7ProviderConfig_ != nullptr;};
      void deletePkcs7ProviderConfig() { this->pkcs7ProviderConfig_ = nullptr;};
      inline const FederatedCredentialProvider::Pkcs7ProviderConfig & getPkcs7ProviderConfig() const { DARABONBA_PTR_GET_CONST(pkcs7ProviderConfig_, FederatedCredentialProvider::Pkcs7ProviderConfig) };
      inline FederatedCredentialProvider::Pkcs7ProviderConfig getPkcs7ProviderConfig() { DARABONBA_PTR_GET(pkcs7ProviderConfig_, FederatedCredentialProvider::Pkcs7ProviderConfig) };
      inline FederatedCredentialProvider& setPkcs7ProviderConfig(const FederatedCredentialProvider::Pkcs7ProviderConfig & pkcs7ProviderConfig) { DARABONBA_PTR_SET_VALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };
      inline FederatedCredentialProvider& setPkcs7ProviderConfig(FederatedCredentialProvider::Pkcs7ProviderConfig && pkcs7ProviderConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };


      // privateCaProviderConfig Field Functions 
      bool hasPrivateCaProviderConfig() const { return this->privateCaProviderConfig_ != nullptr;};
      void deletePrivateCaProviderConfig() { this->privateCaProviderConfig_ = nullptr;};
      inline const FederatedCredentialProvider::PrivateCaProviderConfig & getPrivateCaProviderConfig() const { DARABONBA_PTR_GET_CONST(privateCaProviderConfig_, FederatedCredentialProvider::PrivateCaProviderConfig) };
      inline FederatedCredentialProvider::PrivateCaProviderConfig getPrivateCaProviderConfig() { DARABONBA_PTR_GET(privateCaProviderConfig_, FederatedCredentialProvider::PrivateCaProviderConfig) };
      inline FederatedCredentialProvider& setPrivateCaProviderConfig(const FederatedCredentialProvider::PrivateCaProviderConfig & privateCaProviderConfig) { DARABONBA_PTR_SET_VALUE(privateCaProviderConfig_, privateCaProviderConfig) };
      inline FederatedCredentialProvider& setPrivateCaProviderConfig(FederatedCredentialProvider::PrivateCaProviderConfig && privateCaProviderConfig) { DARABONBA_PTR_SET_RVALUE(privateCaProviderConfig_, privateCaProviderConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline FederatedCredentialProvider& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline FederatedCredentialProvider& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // 创建时间
      shared_ptr<int64_t> createTime_ {};
      // 描述
      shared_ptr<string> description_ {};
      // Federated Credential Provider ID
      shared_ptr<string> federatedCredentialProviderId_ {};
      // 联邦凭证提供方名称
      shared_ptr<string> federatedCredentialProviderName_ {};
      // 联邦凭证提供方类型
      shared_ptr<string> federatedCredentialProviderType_ {};
      // EIAM 实例ID
      shared_ptr<string> instanceId_ {};
      // 网络访问端点ID
      shared_ptr<string> networkAccessEndpointId_ {};
      // OIDC配置
      shared_ptr<FederatedCredentialProvider::OidcProviderConfig> oidcProviderConfig_ {};
      // PKCS7配置
      shared_ptr<FederatedCredentialProvider::Pkcs7ProviderConfig> pkcs7ProviderConfig_ {};
      // 私有CA配置
      shared_ptr<FederatedCredentialProvider::PrivateCaProviderConfig> privateCaProviderConfig_ {};
      // 状态
      shared_ptr<string> status_ {};
      // 更新时间
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->federatedCredentialProvider_ == nullptr
        && this->requestId_ == nullptr; };
    // federatedCredentialProvider Field Functions 
    bool hasFederatedCredentialProvider() const { return this->federatedCredentialProvider_ != nullptr;};
    void deleteFederatedCredentialProvider() { this->federatedCredentialProvider_ = nullptr;};
    inline const GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider & getFederatedCredentialProvider() const { DARABONBA_PTR_GET_CONST(federatedCredentialProvider_, GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider getFederatedCredentialProvider() { DARABONBA_PTR_GET(federatedCredentialProvider_, GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBody& setFederatedCredentialProvider(const GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider & federatedCredentialProvider) { DARABONBA_PTR_SET_VALUE(federatedCredentialProvider_, federatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBody& setFederatedCredentialProvider(GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider && federatedCredentialProvider) { DARABONBA_PTR_SET_RVALUE(federatedCredentialProvider_, federatedCredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFederatedCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetFederatedCredentialProviderResponseBody::FederatedCredentialProvider> federatedCredentialProvider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
