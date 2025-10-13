// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AkSkIdentityConfig.hpp>
#include <alibabacloud/models/ApiKeyIdentityConfig.hpp>
#include <alibabacloud/models/JwtIdentityConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_TO_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_FROM_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateConsumerRequest() = default ;
    CreateConsumerRequest(const CreateConsumerRequest &) = default ;
    CreateConsumerRequest(CreateConsumerRequest &&) = default ;
    CreateConsumerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerRequest() = default ;
    CreateConsumerRequest& operator=(const CreateConsumerRequest &) = default ;
    CreateConsumerRequest& operator=(CreateConsumerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->akSkIdentityConfigs_ != nullptr
        && this->apikeyIdentityConfig_ != nullptr && this->description_ != nullptr && this->enable_ != nullptr && this->gatewayType_ != nullptr && this->jwtIdentityConfig_ != nullptr
        && this->name_ != nullptr; };
    // akSkIdentityConfigs Field Functions 
    bool hasAkSkIdentityConfigs() const { return this->akSkIdentityConfigs_ != nullptr;};
    void deleteAkSkIdentityConfigs() { this->akSkIdentityConfigs_ = nullptr;};
    inline const vector<AkSkIdentityConfig> & akSkIdentityConfigs() const { DARABONBA_PTR_GET_CONST(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline vector<AkSkIdentityConfig> akSkIdentityConfigs() { DARABONBA_PTR_GET(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline CreateConsumerRequest& setAkSkIdentityConfigs(const vector<AkSkIdentityConfig> & akSkIdentityConfigs) { DARABONBA_PTR_SET_VALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };
    inline CreateConsumerRequest& setAkSkIdentityConfigs(vector<AkSkIdentityConfig> && akSkIdentityConfigs) { DARABONBA_PTR_SET_RVALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };


    // apikeyIdentityConfig Field Functions 
    bool hasApikeyIdentityConfig() const { return this->apikeyIdentityConfig_ != nullptr;};
    void deleteApikeyIdentityConfig() { this->apikeyIdentityConfig_ = nullptr;};
    inline const ApiKeyIdentityConfig & apikeyIdentityConfig() const { DARABONBA_PTR_GET_CONST(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline ApiKeyIdentityConfig apikeyIdentityConfig() { DARABONBA_PTR_GET(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline CreateConsumerRequest& setApikeyIdentityConfig(const ApiKeyIdentityConfig & apikeyIdentityConfig) { DARABONBA_PTR_SET_VALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };
    inline CreateConsumerRequest& setApikeyIdentityConfig(ApiKeyIdentityConfig && apikeyIdentityConfig) { DARABONBA_PTR_SET_RVALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConsumerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateConsumerRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateConsumerRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // jwtIdentityConfig Field Functions 
    bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
    void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
    inline const JwtIdentityConfig & jwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, JwtIdentityConfig) };
    inline JwtIdentityConfig jwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, JwtIdentityConfig) };
    inline CreateConsumerRequest& setJwtIdentityConfig(const JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
    inline CreateConsumerRequest& setJwtIdentityConfig(JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConsumerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<AkSkIdentityConfig>> akSkIdentityConfigs_ = nullptr;
    std::shared_ptr<ApiKeyIdentityConfig> apikeyIdentityConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<JwtIdentityConfig> jwtIdentityConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
