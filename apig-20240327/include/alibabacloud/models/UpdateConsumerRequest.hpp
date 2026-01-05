// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERREQUEST_HPP_
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
  class UpdateConsumerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_TO_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(jwtIdentityConfig, jwtIdentityConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_FROM_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
    };
    UpdateConsumerRequest() = default ;
    UpdateConsumerRequest(const UpdateConsumerRequest &) = default ;
    UpdateConsumerRequest(UpdateConsumerRequest &&) = default ;
    UpdateConsumerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerRequest() = default ;
    UpdateConsumerRequest& operator=(const UpdateConsumerRequest &) = default ;
    UpdateConsumerRequest& operator=(UpdateConsumerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->akSkIdentityConfigs_ == nullptr
        && this->apikeyIdentityConfig_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->jwtIdentityConfig_ == nullptr; };
    // akSkIdentityConfigs Field Functions 
    bool hasAkSkIdentityConfigs() const { return this->akSkIdentityConfigs_ != nullptr;};
    void deleteAkSkIdentityConfigs() { this->akSkIdentityConfigs_ = nullptr;};
    inline const vector<AkSkIdentityConfig> & getAkSkIdentityConfigs() const { DARABONBA_PTR_GET_CONST(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline vector<AkSkIdentityConfig> getAkSkIdentityConfigs() { DARABONBA_PTR_GET(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline UpdateConsumerRequest& setAkSkIdentityConfigs(const vector<AkSkIdentityConfig> & akSkIdentityConfigs) { DARABONBA_PTR_SET_VALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };
    inline UpdateConsumerRequest& setAkSkIdentityConfigs(vector<AkSkIdentityConfig> && akSkIdentityConfigs) { DARABONBA_PTR_SET_RVALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };


    // apikeyIdentityConfig Field Functions 
    bool hasApikeyIdentityConfig() const { return this->apikeyIdentityConfig_ != nullptr;};
    void deleteApikeyIdentityConfig() { this->apikeyIdentityConfig_ = nullptr;};
    inline const ApiKeyIdentityConfig & getApikeyIdentityConfig() const { DARABONBA_PTR_GET_CONST(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline ApiKeyIdentityConfig getApikeyIdentityConfig() { DARABONBA_PTR_GET(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline UpdateConsumerRequest& setApikeyIdentityConfig(const ApiKeyIdentityConfig & apikeyIdentityConfig) { DARABONBA_PTR_SET_VALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };
    inline UpdateConsumerRequest& setApikeyIdentityConfig(ApiKeyIdentityConfig && apikeyIdentityConfig) { DARABONBA_PTR_SET_RVALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConsumerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateConsumerRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // jwtIdentityConfig Field Functions 
    bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
    void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
    inline const JwtIdentityConfig & getJwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, JwtIdentityConfig) };
    inline JwtIdentityConfig getJwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, JwtIdentityConfig) };
    inline UpdateConsumerRequest& setJwtIdentityConfig(const JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
    inline UpdateConsumerRequest& setJwtIdentityConfig(JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


  protected:
    // The list of AK/SK authentication configurations.
    shared_ptr<vector<AkSkIdentityConfig>> akSkIdentityConfigs_ {};
    // The API key authentication configurations.
    shared_ptr<ApiKeyIdentityConfig> apikeyIdentityConfig_ {};
    // The description.
    shared_ptr<string> description_ {};
    // Specifies the enablement status.
    shared_ptr<bool> enable_ {};
    // The JWT authentication configuration.
    shared_ptr<JwtIdentityConfig> jwtIdentityConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
