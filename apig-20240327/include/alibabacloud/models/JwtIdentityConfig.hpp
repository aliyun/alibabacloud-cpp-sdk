// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JWTIDENTITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JWTIDENTITYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JwtIdentityConfigJwtPayloadConfig.hpp>
#include <alibabacloud/models/JwtIdentityConfigJwtTokenConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class JwtIdentityConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JwtIdentityConfig& obj) { 
      DARABONBA_PTR_TO_JSON(jwks, jwks_);
      DARABONBA_PTR_TO_JSON(jwtPayloadConfig, jwtPayloadConfig_);
      DARABONBA_PTR_TO_JSON(jwtTokenConfig, jwtTokenConfig_);
      DARABONBA_PTR_TO_JSON(secretType, secretType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, JwtIdentityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(jwtPayloadConfig, jwtPayloadConfig_);
      DARABONBA_PTR_FROM_JSON(jwtTokenConfig, jwtTokenConfig_);
      DARABONBA_PTR_FROM_JSON(secretType, secretType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    JwtIdentityConfig() = default ;
    JwtIdentityConfig(const JwtIdentityConfig &) = default ;
    JwtIdentityConfig(JwtIdentityConfig &&) = default ;
    JwtIdentityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JwtIdentityConfig() = default ;
    JwtIdentityConfig& operator=(const JwtIdentityConfig &) = default ;
    JwtIdentityConfig& operator=(JwtIdentityConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jwks_ != nullptr
        && this->jwtPayloadConfig_ != nullptr && this->jwtTokenConfig_ != nullptr && this->secretType_ != nullptr && this->type_ != nullptr; };
    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string jwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline JwtIdentityConfig& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // jwtPayloadConfig Field Functions 
    bool hasJwtPayloadConfig() const { return this->jwtPayloadConfig_ != nullptr;};
    void deleteJwtPayloadConfig() { this->jwtPayloadConfig_ = nullptr;};
    inline const JwtIdentityConfigJwtPayloadConfig & jwtPayloadConfig() const { DARABONBA_PTR_GET_CONST(jwtPayloadConfig_, JwtIdentityConfigJwtPayloadConfig) };
    inline JwtIdentityConfigJwtPayloadConfig jwtPayloadConfig() { DARABONBA_PTR_GET(jwtPayloadConfig_, JwtIdentityConfigJwtPayloadConfig) };
    inline JwtIdentityConfig& setJwtPayloadConfig(const JwtIdentityConfigJwtPayloadConfig & jwtPayloadConfig) { DARABONBA_PTR_SET_VALUE(jwtPayloadConfig_, jwtPayloadConfig) };
    inline JwtIdentityConfig& setJwtPayloadConfig(JwtIdentityConfigJwtPayloadConfig && jwtPayloadConfig) { DARABONBA_PTR_SET_RVALUE(jwtPayloadConfig_, jwtPayloadConfig) };


    // jwtTokenConfig Field Functions 
    bool hasJwtTokenConfig() const { return this->jwtTokenConfig_ != nullptr;};
    void deleteJwtTokenConfig() { this->jwtTokenConfig_ = nullptr;};
    inline const JwtIdentityConfigJwtTokenConfig & jwtTokenConfig() const { DARABONBA_PTR_GET_CONST(jwtTokenConfig_, JwtIdentityConfigJwtTokenConfig) };
    inline JwtIdentityConfigJwtTokenConfig jwtTokenConfig() { DARABONBA_PTR_GET(jwtTokenConfig_, JwtIdentityConfigJwtTokenConfig) };
    inline JwtIdentityConfig& setJwtTokenConfig(const JwtIdentityConfigJwtTokenConfig & jwtTokenConfig) { DARABONBA_PTR_SET_VALUE(jwtTokenConfig_, jwtTokenConfig) };
    inline JwtIdentityConfig& setJwtTokenConfig(JwtIdentityConfigJwtTokenConfig && jwtTokenConfig) { DARABONBA_PTR_SET_RVALUE(jwtTokenConfig_, jwtTokenConfig) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline JwtIdentityConfig& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline JwtIdentityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> jwks_ = nullptr;
    std::shared_ptr<JwtIdentityConfigJwtPayloadConfig> jwtPayloadConfig_ = nullptr;
    std::shared_ptr<JwtIdentityConfigJwtTokenConfig> jwtTokenConfig_ = nullptr;
    std::shared_ptr<string> secretType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
