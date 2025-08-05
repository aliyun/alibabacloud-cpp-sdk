// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_TO_JSON(apiKeyIdentityConfig, apiKeyIdentityConfig_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_FROM_JSON(apiKeyIdentityConfig, apiKeyIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    GetConsumerResponseBodyData() = default ;
    GetConsumerResponseBodyData(const GetConsumerResponseBodyData &) = default ;
    GetConsumerResponseBodyData(GetConsumerResponseBodyData &&) = default ;
    GetConsumerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerResponseBodyData() = default ;
    GetConsumerResponseBodyData& operator=(const GetConsumerResponseBodyData &) = default ;
    GetConsumerResponseBodyData& operator=(GetConsumerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->akSkIdentityConfigs_ != nullptr
        && this->apiKeyIdentityConfig_ != nullptr && this->consumerId_ != nullptr && this->createTimestamp_ != nullptr && this->deployStatus_ != nullptr && this->description_ != nullptr
        && this->enable_ != nullptr && this->jwtIdentityConfig_ != nullptr && this->name_ != nullptr && this->updateTimestamp_ != nullptr; };
    // akSkIdentityConfigs Field Functions 
    bool hasAkSkIdentityConfigs() const { return this->akSkIdentityConfigs_ != nullptr;};
    void deleteAkSkIdentityConfigs() { this->akSkIdentityConfigs_ = nullptr;};
    inline const Models::AkSkIdentityConfig & akSkIdentityConfigs() const { DARABONBA_PTR_GET_CONST(akSkIdentityConfigs_, Models::AkSkIdentityConfig) };
    inline Models::AkSkIdentityConfig akSkIdentityConfigs() { DARABONBA_PTR_GET(akSkIdentityConfigs_, Models::AkSkIdentityConfig) };
    inline GetConsumerResponseBodyData& setAkSkIdentityConfigs(const Models::AkSkIdentityConfig & akSkIdentityConfigs) { DARABONBA_PTR_SET_VALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };
    inline GetConsumerResponseBodyData& setAkSkIdentityConfigs(Models::AkSkIdentityConfig && akSkIdentityConfigs) { DARABONBA_PTR_SET_RVALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };


    // apiKeyIdentityConfig Field Functions 
    bool hasApiKeyIdentityConfig() const { return this->apiKeyIdentityConfig_ != nullptr;};
    void deleteApiKeyIdentityConfig() { this->apiKeyIdentityConfig_ = nullptr;};
    inline const Models::ApiKeyIdentityConfig & apiKeyIdentityConfig() const { DARABONBA_PTR_GET_CONST(apiKeyIdentityConfig_, Models::ApiKeyIdentityConfig) };
    inline Models::ApiKeyIdentityConfig apiKeyIdentityConfig() { DARABONBA_PTR_GET(apiKeyIdentityConfig_, Models::ApiKeyIdentityConfig) };
    inline GetConsumerResponseBodyData& setApiKeyIdentityConfig(const Models::ApiKeyIdentityConfig & apiKeyIdentityConfig) { DARABONBA_PTR_SET_VALUE(apiKeyIdentityConfig_, apiKeyIdentityConfig) };
    inline GetConsumerResponseBodyData& setApiKeyIdentityConfig(Models::ApiKeyIdentityConfig && apiKeyIdentityConfig) { DARABONBA_PTR_SET_RVALUE(apiKeyIdentityConfig_, apiKeyIdentityConfig) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GetConsumerResponseBodyData& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetConsumerResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline GetConsumerResponseBodyData& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetConsumerResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetConsumerResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // jwtIdentityConfig Field Functions 
    bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
    void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
    inline const Models::JwtIdentityConfig & jwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, Models::JwtIdentityConfig) };
    inline Models::JwtIdentityConfig jwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, Models::JwtIdentityConfig) };
    inline GetConsumerResponseBodyData& setJwtIdentityConfig(const Models::JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
    inline GetConsumerResponseBodyData& setJwtIdentityConfig(Models::JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetConsumerResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline GetConsumerResponseBodyData& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<Models::AkSkIdentityConfig> akSkIdentityConfigs_ = nullptr;
    std::shared_ptr<Models::ApiKeyIdentityConfig> apiKeyIdentityConfig_ = nullptr;
    std::shared_ptr<string> consumerId_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> deployStatus_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<Models::JwtIdentityConfig> jwtIdentityConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
