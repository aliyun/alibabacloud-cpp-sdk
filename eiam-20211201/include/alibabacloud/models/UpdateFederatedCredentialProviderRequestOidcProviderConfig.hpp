// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUESTOIDCPROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUESTOIDCPROVIDERCONFIG_HPP_
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
  class UpdateFederatedCredentialProviderRequestOidcProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFederatedCredentialProviderRequestOidcProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Audiences, audiences_);
      DARABONBA_PTR_TO_JSON(JwksSource, jwksSource_);
      DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_TO_JSON(StaticJwks, staticJwks_);
      DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFederatedCredentialProviderRequestOidcProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
      DARABONBA_PTR_FROM_JSON(JwksSource, jwksSource_);
      DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_FROM_JSON(StaticJwks, staticJwks_);
      DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
    };
    UpdateFederatedCredentialProviderRequestOidcProviderConfig() = default ;
    UpdateFederatedCredentialProviderRequestOidcProviderConfig(const UpdateFederatedCredentialProviderRequestOidcProviderConfig &) = default ;
    UpdateFederatedCredentialProviderRequestOidcProviderConfig(UpdateFederatedCredentialProviderRequestOidcProviderConfig &&) = default ;
    UpdateFederatedCredentialProviderRequestOidcProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFederatedCredentialProviderRequestOidcProviderConfig() = default ;
    UpdateFederatedCredentialProviderRequestOidcProviderConfig& operator=(const UpdateFederatedCredentialProviderRequestOidcProviderConfig &) = default ;
    UpdateFederatedCredentialProviderRequestOidcProviderConfig& operator=(UpdateFederatedCredentialProviderRequestOidcProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audiences_ == nullptr
        && return this->jwksSource_ == nullptr && return this->jwksUri_ == nullptr && return this->staticJwks_ == nullptr && return this->trustCondition_ == nullptr; };
    // audiences Field Functions 
    bool hasAudiences() const { return this->audiences_ != nullptr;};
    void deleteAudiences() { this->audiences_ = nullptr;};
    inline const vector<string> & audiences() const { DARABONBA_PTR_GET_CONST(audiences_, vector<string>) };
    inline vector<string> audiences() { DARABONBA_PTR_GET(audiences_, vector<string>) };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setAudiences(const vector<string> & audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setAudiences(vector<string> && audiences) { DARABONBA_PTR_SET_RVALUE(audiences_, audiences) };


    // jwksSource Field Functions 
    bool hasJwksSource() const { return this->jwksSource_ != nullptr;};
    void deleteJwksSource() { this->jwksSource_ = nullptr;};
    inline string jwksSource() const { DARABONBA_PTR_GET_DEFAULT(jwksSource_, "") };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setJwksSource(string jwksSource) { DARABONBA_PTR_SET_VALUE(jwksSource_, jwksSource) };


    // jwksUri Field Functions 
    bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
    void deleteJwksUri() { this->jwksUri_ = nullptr;};
    inline string jwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


    // staticJwks Field Functions 
    bool hasStaticJwks() const { return this->staticJwks_ != nullptr;};
    void deleteStaticJwks() { this->staticJwks_ = nullptr;};
    inline string staticJwks() const { DARABONBA_PTR_GET_DEFAULT(staticJwks_, "") };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setStaticJwks(string staticJwks) { DARABONBA_PTR_SET_VALUE(staticJwks_, staticJwks) };


    // trustCondition Field Functions 
    bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
    void deleteTrustCondition() { this->trustCondition_ = nullptr;};
    inline string trustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


  protected:
    std::shared_ptr<vector<string>> audiences_ = nullptr;
    // Jwks来源
    // 
    // This parameter is required.
    std::shared_ptr<string> jwksSource_ = nullptr;
    // JWKS 端点
    std::shared_ptr<string> jwksUri_ = nullptr;
    // 静态获取的jwks
    std::shared_ptr<string> staticJwks_ = nullptr;
    // 信任条件
    std::shared_ptr<string> trustCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
