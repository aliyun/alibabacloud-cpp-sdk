// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUESTPKCS7PROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUESTPKCS7PROVIDERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(CmsVerificationMode, cmsVerificationMode_);
      DARABONBA_PTR_TO_JSON(SignatureEffectiveTime, signatureEffectiveTime_);
      DARABONBA_PTR_TO_JSON(SigningTimeValueExpression, signingTimeValueExpression_);
      DARABONBA_PTR_TO_JSON(TrustAnchorSource, trustAnchorSource_);
      DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(CmsVerificationMode, cmsVerificationMode_);
      DARABONBA_PTR_FROM_JSON(SignatureEffectiveTime, signatureEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(SigningTimeValueExpression, signingTimeValueExpression_);
      DARABONBA_PTR_FROM_JSON(TrustAnchorSource, trustAnchorSource_);
      DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
    };
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig() = default ;
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig(const UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig &) = default ;
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig(UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig &&) = default ;
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig() = default ;
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& operator=(const UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig &) = default ;
    UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& operator=(UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->cmsVerificationMode_ == nullptr && return this->signatureEffectiveTime_ == nullptr && return this->signingTimeValueExpression_ == nullptr && return this->trustAnchorSource_ == nullptr && return this->trustCondition_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates>) };
    inline vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates>) };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setCertificates(const vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setCertificates(vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // cmsVerificationMode Field Functions 
    bool hasCmsVerificationMode() const { return this->cmsVerificationMode_ != nullptr;};
    void deleteCmsVerificationMode() { this->cmsVerificationMode_ = nullptr;};
    inline string cmsVerificationMode() const { DARABONBA_PTR_GET_DEFAULT(cmsVerificationMode_, "") };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setCmsVerificationMode(string cmsVerificationMode) { DARABONBA_PTR_SET_VALUE(cmsVerificationMode_, cmsVerificationMode) };


    // signatureEffectiveTime Field Functions 
    bool hasSignatureEffectiveTime() const { return this->signatureEffectiveTime_ != nullptr;};
    void deleteSignatureEffectiveTime() { this->signatureEffectiveTime_ = nullptr;};
    inline int64_t signatureEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(signatureEffectiveTime_, 0L) };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setSignatureEffectiveTime(int64_t signatureEffectiveTime) { DARABONBA_PTR_SET_VALUE(signatureEffectiveTime_, signatureEffectiveTime) };


    // signingTimeValueExpression Field Functions 
    bool hasSigningTimeValueExpression() const { return this->signingTimeValueExpression_ != nullptr;};
    void deleteSigningTimeValueExpression() { this->signingTimeValueExpression_ = nullptr;};
    inline string signingTimeValueExpression() const { DARABONBA_PTR_GET_DEFAULT(signingTimeValueExpression_, "") };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setSigningTimeValueExpression(string signingTimeValueExpression) { DARABONBA_PTR_SET_VALUE(signingTimeValueExpression_, signingTimeValueExpression) };


    // trustAnchorSource Field Functions 
    bool hasTrustAnchorSource() const { return this->trustAnchorSource_ != nullptr;};
    void deleteTrustAnchorSource() { this->trustAnchorSource_ = nullptr;};
    inline string trustAnchorSource() const { DARABONBA_PTR_GET_DEFAULT(trustAnchorSource_, "") };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setTrustAnchorSource(string trustAnchorSource) { DARABONBA_PTR_SET_VALUE(trustAnchorSource_, trustAnchorSource) };


    // trustCondition Field Functions 
    bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
    void deleteTrustCondition() { this->trustCondition_ = nullptr;};
    inline string trustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


  protected:
    // pkcs7证书列表
    std::shared_ptr<vector<Models::UpdateFederatedCredentialProviderRequestPkcs7ProviderConfigCertificates>> certificates_ = nullptr;
    // CMS验证模式
    std::shared_ptr<string> cmsVerificationMode_ = nullptr;
    // 签名有效期, 单位秒，1200
    std::shared_ptr<int64_t> signatureEffectiveTime_ = nullptr;
    std::shared_ptr<string> signingTimeValueExpression_ = nullptr;
    // 证书信任锚点来源
    // 
    // This parameter is required.
    std::shared_ptr<string> trustAnchorSource_ = nullptr;
    // 信任条件
    std::shared_ptr<string> trustCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
