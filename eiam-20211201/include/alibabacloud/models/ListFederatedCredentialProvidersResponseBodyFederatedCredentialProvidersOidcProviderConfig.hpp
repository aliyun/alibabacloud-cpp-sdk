// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSRESPONSEBODYFEDERATEDCREDENTIALPROVIDERSOIDCPROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSRESPONSEBODYFEDERATEDCREDENTIALPROVIDERSOIDCPROVIDERCONFIG_HPP_
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
  class ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Audiences, audiences_);
      DARABONBA_PTR_TO_JSON(DynamicJwks, dynamicJwks_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(JwksLastObtainedTime, jwksLastObtainedTime_);
      DARABONBA_PTR_TO_JSON(JwksSource, jwksSource_);
      DARABONBA_PTR_TO_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_TO_JSON(StaticJwks, staticJwks_);
      DARABONBA_PTR_TO_JSON(TrustCondition, trustCondition_);
    };
    friend void from_json(const Darabonba::Json& j, ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
      DARABONBA_PTR_FROM_JSON(DynamicJwks, dynamicJwks_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(JwksLastObtainedTime, jwksLastObtainedTime_);
      DARABONBA_PTR_FROM_JSON(JwksSource, jwksSource_);
      DARABONBA_PTR_FROM_JSON(JwksUri, jwksUri_);
      DARABONBA_PTR_FROM_JSON(StaticJwks, staticJwks_);
      DARABONBA_PTR_FROM_JSON(TrustCondition, trustCondition_);
    };
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig() = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig(const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig &) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig(ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig &&) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig() = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& operator=(const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig &) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& operator=(ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audiences_ == nullptr
        && return this->dynamicJwks_ == nullptr && return this->issuer_ == nullptr && return this->jwksLastObtainedTime_ == nullptr && return this->jwksSource_ == nullptr && return this->jwksUri_ == nullptr
        && return this->staticJwks_ == nullptr && return this->trustCondition_ == nullptr; };
    // audiences Field Functions 
    bool hasAudiences() const { return this->audiences_ != nullptr;};
    void deleteAudiences() { this->audiences_ = nullptr;};
    inline const vector<string> & audiences() const { DARABONBA_PTR_GET_CONST(audiences_, vector<string>) };
    inline vector<string> audiences() { DARABONBA_PTR_GET(audiences_, vector<string>) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setAudiences(const vector<string> & audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setAudiences(vector<string> && audiences) { DARABONBA_PTR_SET_RVALUE(audiences_, audiences) };


    // dynamicJwks Field Functions 
    bool hasDynamicJwks() const { return this->dynamicJwks_ != nullptr;};
    void deleteDynamicJwks() { this->dynamicJwks_ = nullptr;};
    inline string dynamicJwks() const { DARABONBA_PTR_GET_DEFAULT(dynamicJwks_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setDynamicJwks(string dynamicJwks) { DARABONBA_PTR_SET_VALUE(dynamicJwks_, dynamicJwks) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // jwksLastObtainedTime Field Functions 
    bool hasJwksLastObtainedTime() const { return this->jwksLastObtainedTime_ != nullptr;};
    void deleteJwksLastObtainedTime() { this->jwksLastObtainedTime_ = nullptr;};
    inline int64_t jwksLastObtainedTime() const { DARABONBA_PTR_GET_DEFAULT(jwksLastObtainedTime_, 0L) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setJwksLastObtainedTime(int64_t jwksLastObtainedTime) { DARABONBA_PTR_SET_VALUE(jwksLastObtainedTime_, jwksLastObtainedTime) };


    // jwksSource Field Functions 
    bool hasJwksSource() const { return this->jwksSource_ != nullptr;};
    void deleteJwksSource() { this->jwksSource_ = nullptr;};
    inline string jwksSource() const { DARABONBA_PTR_GET_DEFAULT(jwksSource_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setJwksSource(string jwksSource) { DARABONBA_PTR_SET_VALUE(jwksSource_, jwksSource) };


    // jwksUri Field Functions 
    bool hasJwksUri() const { return this->jwksUri_ != nullptr;};
    void deleteJwksUri() { this->jwksUri_ = nullptr;};
    inline string jwksUri() const { DARABONBA_PTR_GET_DEFAULT(jwksUri_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setJwksUri(string jwksUri) { DARABONBA_PTR_SET_VALUE(jwksUri_, jwksUri) };


    // staticJwks Field Functions 
    bool hasStaticJwks() const { return this->staticJwks_ != nullptr;};
    void deleteStaticJwks() { this->staticJwks_ = nullptr;};
    inline string staticJwks() const { DARABONBA_PTR_GET_DEFAULT(staticJwks_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setStaticJwks(string staticJwks) { DARABONBA_PTR_SET_VALUE(staticJwks_, staticJwks) };


    // trustCondition Field Functions 
    bool hasTrustCondition() const { return this->trustCondition_ != nullptr;};
    void deleteTrustCondition() { this->trustCondition_ = nullptr;};
    inline string trustCondition() const { DARABONBA_PTR_GET_DEFAULT(trustCondition_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig& setTrustCondition(string trustCondition) { DARABONBA_PTR_SET_VALUE(trustCondition_, trustCondition) };


  protected:
    // oidc凭证的受众列表
    std::shared_ptr<vector<string>> audiences_ = nullptr;
    // 动态获取的jwks
    std::shared_ptr<string> dynamicJwks_ = nullptr;
    // Issuer
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<int64_t> jwksLastObtainedTime_ = nullptr;
    // Jwks来源
    std::shared_ptr<string> jwksSource_ = nullptr;
    // JWKS 端点
    std::shared_ptr<string> jwksUri_ = nullptr;
    // 静态获取的jwks
    std::shared_ptr<string> staticJwks_ = nullptr;
    // 默认条件
    std::shared_ptr<string> trustCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
