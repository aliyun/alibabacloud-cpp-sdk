// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_THIRDAPPOIDCSSOCONFIG_HPP_
#define ALIBABACLOUD_MODELS_THIRDAPPOIDCSSOCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ThirdAppOidcSsoConfigEndpoints.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ThirdAppOidcSsoConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ThirdAppOidcSsoConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
      DARABONBA_PTR_TO_JSON(CodeEffectiveTime, codeEffectiveTime_);
      DARABONBA_PTR_TO_JSON(EnableAuthLogin, enableAuthLogin_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_TO_JSON(GrantTypes, grantTypes_);
      DARABONBA_PTR_TO_JSON(IdTokenAlgorithmType, idTokenAlgorithmType_);
      DARABONBA_PTR_TO_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
      DARABONBA_PTR_TO_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_TO_JSON(RefreshTokenEffective, refreshTokenEffective_);
    };
    friend void from_json(const Darabonba::Json& j, ThirdAppOidcSsoConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenEffectiveTime, accessTokenEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(CodeEffectiveTime, codeEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnableAuthLogin, enableAuthLogin_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(GrantScopes, grantScopes_);
      DARABONBA_PTR_FROM_JSON(GrantTypes, grantTypes_);
      DARABONBA_PTR_FROM_JSON(IdTokenAlgorithmType, idTokenAlgorithmType_);
      DARABONBA_PTR_FROM_JSON(IdTokenEffectiveTime, idTokenEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(RedirectUris, redirectUris_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenEffective, refreshTokenEffective_);
    };
    ThirdAppOidcSsoConfig() = default ;
    ThirdAppOidcSsoConfig(const ThirdAppOidcSsoConfig &) = default ;
    ThirdAppOidcSsoConfig(ThirdAppOidcSsoConfig &&) = default ;
    ThirdAppOidcSsoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ThirdAppOidcSsoConfig() = default ;
    ThirdAppOidcSsoConfig& operator=(const ThirdAppOidcSsoConfig &) = default ;
    ThirdAppOidcSsoConfig& operator=(ThirdAppOidcSsoConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenEffectiveTime_ != nullptr
        && this->codeEffectiveTime_ != nullptr && this->enableAuthLogin_ != nullptr && this->endpoints_ != nullptr && this->grantScopes_ != nullptr && this->grantTypes_ != nullptr
        && this->idTokenAlgorithmType_ != nullptr && this->idTokenEffectiveTime_ != nullptr && this->redirectUris_ != nullptr && this->refreshTokenEffective_ != nullptr; };
    // accessTokenEffectiveTime Field Functions 
    bool hasAccessTokenEffectiveTime() const { return this->accessTokenEffectiveTime_ != nullptr;};
    void deleteAccessTokenEffectiveTime() { this->accessTokenEffectiveTime_ = nullptr;};
    inline int32_t accessTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(accessTokenEffectiveTime_, 0) };
    inline ThirdAppOidcSsoConfig& setAccessTokenEffectiveTime(int32_t accessTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(accessTokenEffectiveTime_, accessTokenEffectiveTime) };


    // codeEffectiveTime Field Functions 
    bool hasCodeEffectiveTime() const { return this->codeEffectiveTime_ != nullptr;};
    void deleteCodeEffectiveTime() { this->codeEffectiveTime_ = nullptr;};
    inline int32_t codeEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(codeEffectiveTime_, 0) };
    inline ThirdAppOidcSsoConfig& setCodeEffectiveTime(int32_t codeEffectiveTime) { DARABONBA_PTR_SET_VALUE(codeEffectiveTime_, codeEffectiveTime) };


    // enableAuthLogin Field Functions 
    bool hasEnableAuthLogin() const { return this->enableAuthLogin_ != nullptr;};
    void deleteEnableAuthLogin() { this->enableAuthLogin_ = nullptr;};
    inline bool enableAuthLogin() const { DARABONBA_PTR_GET_DEFAULT(enableAuthLogin_, false) };
    inline ThirdAppOidcSsoConfig& setEnableAuthLogin(bool enableAuthLogin) { DARABONBA_PTR_SET_VALUE(enableAuthLogin_, enableAuthLogin) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const Models::ThirdAppOidcSsoConfigEndpoints & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Models::ThirdAppOidcSsoConfigEndpoints) };
    inline Models::ThirdAppOidcSsoConfigEndpoints endpoints() { DARABONBA_PTR_GET(endpoints_, Models::ThirdAppOidcSsoConfigEndpoints) };
    inline ThirdAppOidcSsoConfig& setEndpoints(const Models::ThirdAppOidcSsoConfigEndpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ThirdAppOidcSsoConfig& setEndpoints(Models::ThirdAppOidcSsoConfigEndpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // grantScopes Field Functions 
    bool hasGrantScopes() const { return this->grantScopes_ != nullptr;};
    void deleteGrantScopes() { this->grantScopes_ = nullptr;};
    inline const vector<string> & grantScopes() const { DARABONBA_PTR_GET_CONST(grantScopes_, vector<string>) };
    inline vector<string> grantScopes() { DARABONBA_PTR_GET(grantScopes_, vector<string>) };
    inline ThirdAppOidcSsoConfig& setGrantScopes(const vector<string> & grantScopes) { DARABONBA_PTR_SET_VALUE(grantScopes_, grantScopes) };
    inline ThirdAppOidcSsoConfig& setGrantScopes(vector<string> && grantScopes) { DARABONBA_PTR_SET_RVALUE(grantScopes_, grantScopes) };


    // grantTypes Field Functions 
    bool hasGrantTypes() const { return this->grantTypes_ != nullptr;};
    void deleteGrantTypes() { this->grantTypes_ = nullptr;};
    inline const vector<string> & grantTypes() const { DARABONBA_PTR_GET_CONST(grantTypes_, vector<string>) };
    inline vector<string> grantTypes() { DARABONBA_PTR_GET(grantTypes_, vector<string>) };
    inline ThirdAppOidcSsoConfig& setGrantTypes(const vector<string> & grantTypes) { DARABONBA_PTR_SET_VALUE(grantTypes_, grantTypes) };
    inline ThirdAppOidcSsoConfig& setGrantTypes(vector<string> && grantTypes) { DARABONBA_PTR_SET_RVALUE(grantTypes_, grantTypes) };


    // idTokenAlgorithmType Field Functions 
    bool hasIdTokenAlgorithmType() const { return this->idTokenAlgorithmType_ != nullptr;};
    void deleteIdTokenAlgorithmType() { this->idTokenAlgorithmType_ = nullptr;};
    inline string idTokenAlgorithmType() const { DARABONBA_PTR_GET_DEFAULT(idTokenAlgorithmType_, "") };
    inline ThirdAppOidcSsoConfig& setIdTokenAlgorithmType(string idTokenAlgorithmType) { DARABONBA_PTR_SET_VALUE(idTokenAlgorithmType_, idTokenAlgorithmType) };


    // idTokenEffectiveTime Field Functions 
    bool hasIdTokenEffectiveTime() const { return this->idTokenEffectiveTime_ != nullptr;};
    void deleteIdTokenEffectiveTime() { this->idTokenEffectiveTime_ = nullptr;};
    inline int32_t idTokenEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(idTokenEffectiveTime_, 0) };
    inline ThirdAppOidcSsoConfig& setIdTokenEffectiveTime(int32_t idTokenEffectiveTime) { DARABONBA_PTR_SET_VALUE(idTokenEffectiveTime_, idTokenEffectiveTime) };


    // redirectUris Field Functions 
    bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
    void deleteRedirectUris() { this->redirectUris_ = nullptr;};
    inline const vector<string> & redirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, vector<string>) };
    inline vector<string> redirectUris() { DARABONBA_PTR_GET(redirectUris_, vector<string>) };
    inline ThirdAppOidcSsoConfig& setRedirectUris(const vector<string> & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
    inline ThirdAppOidcSsoConfig& setRedirectUris(vector<string> && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


    // refreshTokenEffective Field Functions 
    bool hasRefreshTokenEffective() const { return this->refreshTokenEffective_ != nullptr;};
    void deleteRefreshTokenEffective() { this->refreshTokenEffective_ = nullptr;};
    inline int32_t refreshTokenEffective() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenEffective_, 0) };
    inline ThirdAppOidcSsoConfig& setRefreshTokenEffective(int32_t refreshTokenEffective) { DARABONBA_PTR_SET_VALUE(refreshTokenEffective_, refreshTokenEffective) };


  protected:
    std::shared_ptr<int32_t> accessTokenEffectiveTime_ = nullptr;
    std::shared_ptr<int32_t> codeEffectiveTime_ = nullptr;
    std::shared_ptr<bool> enableAuthLogin_ = nullptr;
    std::shared_ptr<Models::ThirdAppOidcSsoConfigEndpoints> endpoints_ = nullptr;
    std::shared_ptr<vector<string>> grantScopes_ = nullptr;
    std::shared_ptr<vector<string>> grantTypes_ = nullptr;
    std::shared_ptr<string> idTokenAlgorithmType_ = nullptr;
    std::shared_ptr<int32_t> idTokenEffectiveTime_ = nullptr;
    std::shared_ptr<vector<string>> redirectUris_ = nullptr;
    std::shared_ptr<int32_t> refreshTokenEffective_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
