// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JWTIDENTITYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JWTIDENTITYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(claimsToHeadersConfigs, claimsToHeadersConfigs_);
      DARABONBA_PTR_TO_JSON(jwks, jwks_);
      DARABONBA_PTR_TO_JSON(jwtPayloadConfig, jwtPayloadConfig_);
      DARABONBA_PTR_TO_JSON(jwtTokenConfig, jwtTokenConfig_);
      DARABONBA_PTR_TO_JSON(remoteJwks, remoteJwks_);
      DARABONBA_PTR_TO_JSON(secretType, secretType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, JwtIdentityConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(claimsToHeadersConfigs, claimsToHeadersConfigs_);
      DARABONBA_PTR_FROM_JSON(jwks, jwks_);
      DARABONBA_PTR_FROM_JSON(jwtPayloadConfig, jwtPayloadConfig_);
      DARABONBA_PTR_FROM_JSON(jwtTokenConfig, jwtTokenConfig_);
      DARABONBA_PTR_FROM_JSON(remoteJwks, remoteJwks_);
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
    class JwtTokenConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JwtTokenConfig& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(pass, pass_);
        DARABONBA_PTR_TO_JSON(position, position_);
        DARABONBA_PTR_TO_JSON(prefix, prefix_);
      };
      friend void from_json(const Darabonba::Json& j, JwtTokenConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(pass, pass_);
        DARABONBA_PTR_FROM_JSON(position, position_);
        DARABONBA_PTR_FROM_JSON(prefix, prefix_);
      };
      JwtTokenConfig() = default ;
      JwtTokenConfig(const JwtTokenConfig &) = default ;
      JwtTokenConfig(JwtTokenConfig &&) = default ;
      JwtTokenConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JwtTokenConfig() = default ;
      JwtTokenConfig& operator=(const JwtTokenConfig &) = default ;
      JwtTokenConfig& operator=(JwtTokenConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->pass_ == nullptr && this->position_ == nullptr && this->prefix_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline JwtTokenConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // pass Field Functions 
      bool hasPass() const { return this->pass_ != nullptr;};
      void deletePass() { this->pass_ = nullptr;};
      inline bool getPass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
      inline JwtTokenConfig& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


      // position Field Functions 
      bool hasPosition() const { return this->position_ != nullptr;};
      void deletePosition() { this->position_ = nullptr;};
      inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
      inline JwtTokenConfig& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline JwtTokenConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    protected:
      // The key configuration of the JWT.
      shared_ptr<string> key_ {};
      // Indicates whether the request is passed through.
      shared_ptr<bool> pass_ {};
      // The location where the JWT is stored.
      shared_ptr<string> position_ {};
      // The prefix configuration.
      shared_ptr<string> prefix_ {};
    };

    class JwtPayloadConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JwtPayloadConfig& obj) { 
        DARABONBA_PTR_TO_JSON(payloadKeyName, payloadKeyName_);
        DARABONBA_PTR_TO_JSON(payloadKeyValue, payloadKeyValue_);
      };
      friend void from_json(const Darabonba::Json& j, JwtPayloadConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(payloadKeyName, payloadKeyName_);
        DARABONBA_PTR_FROM_JSON(payloadKeyValue, payloadKeyValue_);
      };
      JwtPayloadConfig() = default ;
      JwtPayloadConfig(const JwtPayloadConfig &) = default ;
      JwtPayloadConfig(JwtPayloadConfig &&) = default ;
      JwtPayloadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JwtPayloadConfig() = default ;
      JwtPayloadConfig& operator=(const JwtPayloadConfig &) = default ;
      JwtPayloadConfig& operator=(JwtPayloadConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->payloadKeyName_ == nullptr
        && this->payloadKeyValue_ == nullptr; };
      // payloadKeyName Field Functions 
      bool hasPayloadKeyName() const { return this->payloadKeyName_ != nullptr;};
      void deletePayloadKeyName() { this->payloadKeyName_ = nullptr;};
      inline string getPayloadKeyName() const { DARABONBA_PTR_GET_DEFAULT(payloadKeyName_, "") };
      inline JwtPayloadConfig& setPayloadKeyName(string payloadKeyName) { DARABONBA_PTR_SET_VALUE(payloadKeyName_, payloadKeyName) };


      // payloadKeyValue Field Functions 
      bool hasPayloadKeyValue() const { return this->payloadKeyValue_ != nullptr;};
      void deletePayloadKeyValue() { this->payloadKeyValue_ = nullptr;};
      inline string getPayloadKeyValue() const { DARABONBA_PTR_GET_DEFAULT(payloadKeyValue_, "") };
      inline JwtPayloadConfig& setPayloadKeyValue(string payloadKeyValue) { DARABONBA_PTR_SET_VALUE(payloadKeyValue_, payloadKeyValue) };


    protected:
      // The JWT payload key configuration.
      shared_ptr<string> payloadKeyName_ {};
      // The JWT payload value configuration.
      shared_ptr<string> payloadKeyValue_ {};
    };

    class ClaimsToHeadersConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClaimsToHeadersConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(claim, claim_);
        DARABONBA_PTR_TO_JSON(header, header_);
        DARABONBA_PTR_TO_JSON(override, override_);
      };
      friend void from_json(const Darabonba::Json& j, ClaimsToHeadersConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(claim, claim_);
        DARABONBA_PTR_FROM_JSON(header, header_);
        DARABONBA_PTR_FROM_JSON(override, override_);
      };
      ClaimsToHeadersConfigs() = default ;
      ClaimsToHeadersConfigs(const ClaimsToHeadersConfigs &) = default ;
      ClaimsToHeadersConfigs(ClaimsToHeadersConfigs &&) = default ;
      ClaimsToHeadersConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClaimsToHeadersConfigs() = default ;
      ClaimsToHeadersConfigs& operator=(const ClaimsToHeadersConfigs &) = default ;
      ClaimsToHeadersConfigs& operator=(ClaimsToHeadersConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->claim_ == nullptr
        && this->header_ == nullptr && this->override_ == nullptr; };
      // claim Field Functions 
      bool hasClaim() const { return this->claim_ != nullptr;};
      void deleteClaim() { this->claim_ = nullptr;};
      inline string getClaim() const { DARABONBA_PTR_GET_DEFAULT(claim_, "") };
      inline ClaimsToHeadersConfigs& setClaim(string claim) { DARABONBA_PTR_SET_VALUE(claim_, claim) };


      // header Field Functions 
      bool hasHeader() const { return this->header_ != nullptr;};
      void deleteHeader() { this->header_ = nullptr;};
      inline string getHeader() const { DARABONBA_PTR_GET_DEFAULT(header_, "") };
      inline ClaimsToHeadersConfigs& setHeader(string header) { DARABONBA_PTR_SET_VALUE(header_, header) };


      // override Field Functions 
      bool hasOverride() const { return this->override_ != nullptr;};
      void deleteOverride() { this->override_ = nullptr;};
      inline bool getOverride() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
      inline ClaimsToHeadersConfigs& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    protected:
      // The claim name in the JWT payload.
      shared_ptr<string> claim_ {};
      // The HTTP header name after conversion.
      shared_ptr<string> header_ {};
      // Specifies whether to overwrite an existing header with the same name.
      shared_ptr<bool> override_ {};
    };

    virtual bool empty() const override { return this->claimsToHeadersConfigs_ == nullptr
        && this->jwks_ == nullptr && this->jwtPayloadConfig_ == nullptr && this->jwtTokenConfig_ == nullptr && this->remoteJwks_ == nullptr && this->secretType_ == nullptr
        && this->type_ == nullptr; };
    // claimsToHeadersConfigs Field Functions 
    bool hasClaimsToHeadersConfigs() const { return this->claimsToHeadersConfigs_ != nullptr;};
    void deleteClaimsToHeadersConfigs() { this->claimsToHeadersConfigs_ = nullptr;};
    inline const vector<JwtIdentityConfig::ClaimsToHeadersConfigs> & getClaimsToHeadersConfigs() const { DARABONBA_PTR_GET_CONST(claimsToHeadersConfigs_, vector<JwtIdentityConfig::ClaimsToHeadersConfigs>) };
    inline vector<JwtIdentityConfig::ClaimsToHeadersConfigs> getClaimsToHeadersConfigs() { DARABONBA_PTR_GET(claimsToHeadersConfigs_, vector<JwtIdentityConfig::ClaimsToHeadersConfigs>) };
    inline JwtIdentityConfig& setClaimsToHeadersConfigs(const vector<JwtIdentityConfig::ClaimsToHeadersConfigs> & claimsToHeadersConfigs) { DARABONBA_PTR_SET_VALUE(claimsToHeadersConfigs_, claimsToHeadersConfigs) };
    inline JwtIdentityConfig& setClaimsToHeadersConfigs(vector<JwtIdentityConfig::ClaimsToHeadersConfigs> && claimsToHeadersConfigs) { DARABONBA_PTR_SET_RVALUE(claimsToHeadersConfigs_, claimsToHeadersConfigs) };


    // jwks Field Functions 
    bool hasJwks() const { return this->jwks_ != nullptr;};
    void deleteJwks() { this->jwks_ = nullptr;};
    inline string getJwks() const { DARABONBA_PTR_GET_DEFAULT(jwks_, "") };
    inline JwtIdentityConfig& setJwks(string jwks) { DARABONBA_PTR_SET_VALUE(jwks_, jwks) };


    // jwtPayloadConfig Field Functions 
    bool hasJwtPayloadConfig() const { return this->jwtPayloadConfig_ != nullptr;};
    void deleteJwtPayloadConfig() { this->jwtPayloadConfig_ = nullptr;};
    inline const JwtIdentityConfig::JwtPayloadConfig & getJwtPayloadConfig() const { DARABONBA_PTR_GET_CONST(jwtPayloadConfig_, JwtIdentityConfig::JwtPayloadConfig) };
    inline JwtIdentityConfig::JwtPayloadConfig getJwtPayloadConfig() { DARABONBA_PTR_GET(jwtPayloadConfig_, JwtIdentityConfig::JwtPayloadConfig) };
    inline JwtIdentityConfig& setJwtPayloadConfig(const JwtIdentityConfig::JwtPayloadConfig & jwtPayloadConfig) { DARABONBA_PTR_SET_VALUE(jwtPayloadConfig_, jwtPayloadConfig) };
    inline JwtIdentityConfig& setJwtPayloadConfig(JwtIdentityConfig::JwtPayloadConfig && jwtPayloadConfig) { DARABONBA_PTR_SET_RVALUE(jwtPayloadConfig_, jwtPayloadConfig) };


    // jwtTokenConfig Field Functions 
    bool hasJwtTokenConfig() const { return this->jwtTokenConfig_ != nullptr;};
    void deleteJwtTokenConfig() { this->jwtTokenConfig_ = nullptr;};
    inline const JwtIdentityConfig::JwtTokenConfig & getJwtTokenConfig() const { DARABONBA_PTR_GET_CONST(jwtTokenConfig_, JwtIdentityConfig::JwtTokenConfig) };
    inline JwtIdentityConfig::JwtTokenConfig getJwtTokenConfig() { DARABONBA_PTR_GET(jwtTokenConfig_, JwtIdentityConfig::JwtTokenConfig) };
    inline JwtIdentityConfig& setJwtTokenConfig(const JwtIdentityConfig::JwtTokenConfig & jwtTokenConfig) { DARABONBA_PTR_SET_VALUE(jwtTokenConfig_, jwtTokenConfig) };
    inline JwtIdentityConfig& setJwtTokenConfig(JwtIdentityConfig::JwtTokenConfig && jwtTokenConfig) { DARABONBA_PTR_SET_RVALUE(jwtTokenConfig_, jwtTokenConfig) };


    // remoteJwks Field Functions 
    bool hasRemoteJwks() const { return this->remoteJwks_ != nullptr;};
    void deleteRemoteJwks() { this->remoteJwks_ = nullptr;};
    inline string getRemoteJwks() const { DARABONBA_PTR_GET_DEFAULT(remoteJwks_, "") };
    inline JwtIdentityConfig& setRemoteJwks(string remoteJwks) { DARABONBA_PTR_SET_VALUE(remoteJwks_, remoteJwks) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string getSecretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline JwtIdentityConfig& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline JwtIdentityConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of claim-to-header configurations.
    shared_ptr<vector<JwtIdentityConfig::ClaimsToHeadersConfigs>> claimsToHeadersConfigs_ {};
    // The JWKS configuration.
    shared_ptr<string> jwks_ {};
    // The JWT payload configuration.
    shared_ptr<JwtIdentityConfig::JwtPayloadConfig> jwtPayloadConfig_ {};
    // The JWT token configuration.
    shared_ptr<JwtIdentityConfig::JwtTokenConfig> jwtTokenConfig_ {};
    // The remote JWKS configuration (JSON string).
    shared_ptr<string> remoteJwks_ {};
    // The secret type.
    shared_ptr<string> secretType_ {};
    // The authentication configuration type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
