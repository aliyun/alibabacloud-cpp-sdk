// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
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
  class UpdateFederatedCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_TO_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_TO_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_FROM_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    UpdateFederatedCredentialProviderRequest() = default ;
    UpdateFederatedCredentialProviderRequest(const UpdateFederatedCredentialProviderRequest &) = default ;
    UpdateFederatedCredentialProviderRequest(UpdateFederatedCredentialProviderRequest &&) = default ;
    UpdateFederatedCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFederatedCredentialProviderRequest() = default ;
    UpdateFederatedCredentialProviderRequest& operator=(const UpdateFederatedCredentialProviderRequest &) = default ;
    UpdateFederatedCredentialProviderRequest& operator=(UpdateFederatedCredentialProviderRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Content, content_);
        };
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
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
        virtual bool empty() const override { return this->content_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Certificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      protected:
        // Root证书内容
        shared_ptr<string> content_ {};
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
      // Root证书列表
      shared_ptr<vector<PrivateCaProviderConfig::Certificates>> certificates_ {};
      // Root证书获取方式
      // 
      // This parameter is required.
      shared_ptr<string> trustAnchorSource_ {};
      // Root证书的信任条件
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
          DARABONBA_PTR_TO_JSON(Content, content_);
        };
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
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
        virtual bool empty() const override { return this->content_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Certificates& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      protected:
        // Root证书内容
        shared_ptr<string> content_ {};
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
      // 签名有效期, 单位秒，1200
      shared_ptr<int64_t> signatureEffectiveTime_ {};
      shared_ptr<string> signingTimeValueExpression_ {};
      // 证书信任锚点来源
      // 
      // This parameter is required.
      shared_ptr<string> trustAnchorSource_ {};
      // 信任条件
      shared_ptr<string> trustCondition_ {};
    };

    class OidcProviderConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OidcProviderConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Audiences, audiences_);
        DARABONBA_PTR_TO_JSON(JwksSource, jwksSource_);
        DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
        DARABONBA_PTR_TO_JSON(StaticJwks, staticJwks_);
        DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
      };
      friend void from_json(const Darabonba::Json& j, OidcProviderConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
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
        && this->jwksSource_ == nullptr && this->jwksUri_ == nullptr && this->staticJwks_ == nullptr && this->trustCondition_ == nullptr; };
      // audiences Field Functions 
      bool hasAudiences() const { return this->audiences_ != nullptr;};
      void deleteAudiences() { this->audiences_ = nullptr;};
      inline const vector<string> & getAudiences() const { DARABONBA_PTR_GET_CONST(audiences_, vector<string>) };
      inline vector<string> getAudiences() { DARABONBA_PTR_GET(audiences_, vector<string>) };
      inline OidcProviderConfig& setAudiences(const vector<string> & audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };
      inline OidcProviderConfig& setAudiences(vector<string> && audiences) { DARABONBA_PTR_SET_RVALUE(audiences_, audiences) };


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
      shared_ptr<vector<string>> audiences_ {};
      // Jwks来源
      // 
      // This parameter is required.
      shared_ptr<string> jwksSource_ {};
      // JWKS 端点
      shared_ptr<string> jwksUri_ {};
      // 静态获取的jwks
      shared_ptr<string> staticJwks_ {};
      // 信任条件
      shared_ptr<string> trustCondition_ {};
    };

    virtual bool empty() const override { return this->federatedCredentialProviderId_ == nullptr
        && this->federatedCredentialProviderName_ == nullptr && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->oidcProviderConfig_ == nullptr && this->pkcs7ProviderConfig_ == nullptr
        && this->privateCaProviderConfig_ == nullptr; };
    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string getFederatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // federatedCredentialProviderName Field Functions 
    bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
    void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
    inline string getFederatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
    inline UpdateFederatedCredentialProviderRequest& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcProviderConfig Field Functions 
    bool hasOidcProviderConfig() const { return this->oidcProviderConfig_ != nullptr;};
    void deleteOidcProviderConfig() { this->oidcProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequest::OidcProviderConfig & getOidcProviderConfig() const { DARABONBA_PTR_GET_CONST(oidcProviderConfig_, UpdateFederatedCredentialProviderRequest::OidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest::OidcProviderConfig getOidcProviderConfig() { DARABONBA_PTR_GET(oidcProviderConfig_, UpdateFederatedCredentialProviderRequest::OidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setOidcProviderConfig(const UpdateFederatedCredentialProviderRequest::OidcProviderConfig & oidcProviderConfig) { DARABONBA_PTR_SET_VALUE(oidcProviderConfig_, oidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setOidcProviderConfig(UpdateFederatedCredentialProviderRequest::OidcProviderConfig && oidcProviderConfig) { DARABONBA_PTR_SET_RVALUE(oidcProviderConfig_, oidcProviderConfig) };


    // pkcs7ProviderConfig Field Functions 
    bool hasPkcs7ProviderConfig() const { return this->pkcs7ProviderConfig_ != nullptr;};
    void deletePkcs7ProviderConfig() { this->pkcs7ProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig & getPkcs7ProviderConfig() const { DARABONBA_PTR_GET_CONST(pkcs7ProviderConfig_, UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig getPkcs7ProviderConfig() { DARABONBA_PTR_GET(pkcs7ProviderConfig_, UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(const UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig & pkcs7ProviderConfig) { DARABONBA_PTR_SET_VALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig && pkcs7ProviderConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };


    // privateCaProviderConfig Field Functions 
    bool hasPrivateCaProviderConfig() const { return this->privateCaProviderConfig_ != nullptr;};
    void deletePrivateCaProviderConfig() { this->privateCaProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig & getPrivateCaProviderConfig() const { DARABONBA_PTR_GET_CONST(privateCaProviderConfig_, UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig getPrivateCaProviderConfig() { DARABONBA_PTR_GET(privateCaProviderConfig_, UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(const UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig & privateCaProviderConfig) { DARABONBA_PTR_SET_VALUE(privateCaProviderConfig_, privateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig && privateCaProviderConfig) { DARABONBA_PTR_SET_RVALUE(privateCaProviderConfig_, privateCaProviderConfig) };


  protected:
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    shared_ptr<string> federatedCredentialProviderId_ {};
    // 联邦凭证提供方名称
    // 
    // This parameter is required.
    shared_ptr<string> federatedCredentialProviderName_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 网络端点ID
    shared_ptr<string> networkAccessEndpointId_ {};
    // OIDC配置
    shared_ptr<UpdateFederatedCredentialProviderRequest::OidcProviderConfig> oidcProviderConfig_ {};
    // PKCS7配置
    shared_ptr<UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig> pkcs7ProviderConfig_ {};
    // 私有CA配置
    shared_ptr<UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig> privateCaProviderConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
