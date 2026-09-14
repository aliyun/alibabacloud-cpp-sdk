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
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_FROM_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
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
    virtual bool empty() const override { return this->akSkIdentityConfigs_ == nullptr
        && this->apikeyIdentityConfig_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->gatewayType_ == nullptr && this->jwtIdentityConfig_ == nullptr
        && this->name_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
    // akSkIdentityConfigs Field Functions 
    bool hasAkSkIdentityConfigs() const { return this->akSkIdentityConfigs_ != nullptr;};
    void deleteAkSkIdentityConfigs() { this->akSkIdentityConfigs_ = nullptr;};
    inline const vector<AkSkIdentityConfig> & getAkSkIdentityConfigs() const { DARABONBA_PTR_GET_CONST(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline vector<AkSkIdentityConfig> getAkSkIdentityConfigs() { DARABONBA_PTR_GET(akSkIdentityConfigs_, vector<AkSkIdentityConfig>) };
    inline CreateConsumerRequest& setAkSkIdentityConfigs(const vector<AkSkIdentityConfig> & akSkIdentityConfigs) { DARABONBA_PTR_SET_VALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };
    inline CreateConsumerRequest& setAkSkIdentityConfigs(vector<AkSkIdentityConfig> && akSkIdentityConfigs) { DARABONBA_PTR_SET_RVALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };


    // apikeyIdentityConfig Field Functions 
    bool hasApikeyIdentityConfig() const { return this->apikeyIdentityConfig_ != nullptr;};
    void deleteApikeyIdentityConfig() { this->apikeyIdentityConfig_ = nullptr;};
    inline const ApiKeyIdentityConfig & getApikeyIdentityConfig() const { DARABONBA_PTR_GET_CONST(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline ApiKeyIdentityConfig getApikeyIdentityConfig() { DARABONBA_PTR_GET(apikeyIdentityConfig_, ApiKeyIdentityConfig) };
    inline CreateConsumerRequest& setApikeyIdentityConfig(const ApiKeyIdentityConfig & apikeyIdentityConfig) { DARABONBA_PTR_SET_VALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };
    inline CreateConsumerRequest& setApikeyIdentityConfig(ApiKeyIdentityConfig && apikeyIdentityConfig) { DARABONBA_PTR_SET_RVALUE(apikeyIdentityConfig_, apikeyIdentityConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConsumerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateConsumerRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateConsumerRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // jwtIdentityConfig Field Functions 
    bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
    void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
    inline const JwtIdentityConfig & getJwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, JwtIdentityConfig) };
    inline JwtIdentityConfig getJwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, JwtIdentityConfig) };
    inline CreateConsumerRequest& setJwtIdentityConfig(const JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
    inline CreateConsumerRequest& setJwtIdentityConfig(JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateConsumerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateConsumerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateConsumerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The list of AK/SK identity configurations.
    shared_ptr<vector<AkSkIdentityConfig>> akSkIdentityConfigs_ {};
    // The identity configuration for API key authentication.
    shared_ptr<ApiKeyIdentityConfig> apikeyIdentityConfig_ {};
    // The consumer description.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the consumer.
    shared_ptr<bool> enable_ {};
    // The gateway type. Valid values:
    // - API: a consumer for Cloud-Native API Gateway.
    // - AI: a consumer for AI Gateway.
    shared_ptr<string> gatewayType_ {};
    // The JWT identity configuration.
    shared_ptr<JwtIdentityConfig> jwtIdentityConfig_ {};
    // The consumer name.
    shared_ptr<string> name_ {};
    // The idempotency token generated by the caller as a globally unique value (UUID recommended), with a maximum length of 64 characters. Within approximately 24 hours after the first successful request, a duplicate request that carries the same ClientToken and identical request parameters directly returns the consumerId from the first creation without creating a new consumer. A request that carries the same ClientToken but different request parameters returns IdempotentParameterMismatch. If the first request is still being processed, IdempotentProcessing is returned. If this parameter is not specified, idempotency control is disabled and the behavior is consistent with earlier versions.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run. If this parameter is set to true, the system performs the same parameter, permission, IAM, resource policy, resource existence, and business rule validations as a real creation request, but does not create the consumer, write to the database, create or delete SecretRef, or produce other side effects such as audit logs. If this parameter is not specified or is set to false, the behavior is consistent with earlier versions.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
