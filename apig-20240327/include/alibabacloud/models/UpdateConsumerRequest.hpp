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
      DARABONBA_PTR_TO_JSON(clearExpireAt, clearExpireAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(enableAfterRenewal, enableAfterRenewal_);
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_TO_JSON(renew, renew_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
      DARABONBA_PTR_FROM_JSON(apikeyIdentityConfig, apikeyIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(clearExpireAt, clearExpireAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(enableAfterRenewal, enableAfterRenewal_);
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
      DARABONBA_PTR_FROM_JSON(renew, renew_);
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
        && this->apikeyIdentityConfig_ == nullptr && this->clearExpireAt_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->enableAfterRenewal_ == nullptr
        && this->expireAt_ == nullptr && this->jwtIdentityConfig_ == nullptr && this->renew_ == nullptr; };
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


    // clearExpireAt Field Functions 
    bool hasClearExpireAt() const { return this->clearExpireAt_ != nullptr;};
    void deleteClearExpireAt() { this->clearExpireAt_ = nullptr;};
    inline bool getClearExpireAt() const { DARABONBA_PTR_GET_DEFAULT(clearExpireAt_, false) };
    inline UpdateConsumerRequest& setClearExpireAt(bool clearExpireAt) { DARABONBA_PTR_SET_VALUE(clearExpireAt_, clearExpireAt) };


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


    // enableAfterRenewal Field Functions 
    bool hasEnableAfterRenewal() const { return this->enableAfterRenewal_ != nullptr;};
    void deleteEnableAfterRenewal() { this->enableAfterRenewal_ = nullptr;};
    inline bool getEnableAfterRenewal() const { DARABONBA_PTR_GET_DEFAULT(enableAfterRenewal_, false) };
    inline UpdateConsumerRequest& setEnableAfterRenewal(bool enableAfterRenewal) { DARABONBA_PTR_SET_VALUE(enableAfterRenewal_, enableAfterRenewal) };


    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline int64_t getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, 0L) };
    inline UpdateConsumerRequest& setExpireAt(int64_t expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // jwtIdentityConfig Field Functions 
    bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
    void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
    inline const JwtIdentityConfig & getJwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, JwtIdentityConfig) };
    inline JwtIdentityConfig getJwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, JwtIdentityConfig) };
    inline UpdateConsumerRequest& setJwtIdentityConfig(const JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
    inline UpdateConsumerRequest& setJwtIdentityConfig(JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


    // renew Field Functions 
    bool hasRenew() const { return this->renew_ != nullptr;};
    void deleteRenew() { this->renew_ = nullptr;};
    inline bool getRenew() const { DARABONBA_PTR_GET_DEFAULT(renew_, false) };
    inline UpdateConsumerRequest& setRenew(bool renew) { DARABONBA_PTR_SET_VALUE(renew_, renew) };


  protected:
    // The list of AK/SK identity authentication configurations.
    shared_ptr<vector<AkSkIdentityConfig>> akSkIdentityConfigs_ {};
    // The API key identity authentication configuration.
    shared_ptr<ApiKeyIdentityConfig> apikeyIdentityConfig_ {};
    // Specifies whether to clear the expiration time and restore permanent validity. If this parameter is set to true, expireAt cannot be specified at the same time. The default value is false, which indicates that the expiration time is not cleared.
    shared_ptr<bool> clearExpireAt_ {};
    // The description.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the consumer.
    shared_ptr<bool> enable_ {};
    // Specifies whether to enable the consumer after renewal. This parameter can be set to true only when renew=true. The default value is false, which retains the current enabled or disabled state and does not implicitly enable a manually disabled consumer.
    shared_ptr<bool> enableAfterRenewal_ {};
    // The expiration time of the consumer, in UTC UNIX seconds. It must be a positive integer and later than the current time. If this parameter is not specified, the original value is retained. This parameter cannot be set at the same time as clearExpireAt=true. If renew=true, the value must be later than the original unexpired expiration time. If the configuration is saved but fails to be delivered, a retry with the original expiration time is allowed, but shortening the expiration time is still prohibited.
    shared_ptr<int64_t> expireAt_ {};
    // The JWT identity authentication configuration.
    shared_ptr<JwtIdentityConfig> jwtIdentityConfig_ {};
    // Specifies whether to only renew the consumer. If this parameter is set to true, only the validity period is updated and the consumer is explicitly enabled at the same time. The latest credentials, description, and authorizations on the server are retained. You must set expireAt or clearExpireAt=true, and you cannot specify identity configurations or description. The default value is false, which retains the original consumer update semantics.
    shared_ptr<bool> renew_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
