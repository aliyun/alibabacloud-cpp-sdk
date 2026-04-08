// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITOKENRATELIMITCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AITOKENRATELIMITCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AiTokenRateLimitConfigRule.hpp>
#include <alibabacloud/models/AiPluginStatus.hpp>
#include <alibabacloud/models/AiPolicyRedisConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiTokenRateLimitConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiTokenRateLimitConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enableGlobalRules, enableGlobalRules_);
      DARABONBA_PTR_TO_JSON(globalRules, globalRules_);
      DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_TO_JSON(redisConfig, redisConfig_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, AiTokenRateLimitConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enableGlobalRules, enableGlobalRules_);
      DARABONBA_PTR_FROM_JSON(globalRules, globalRules_);
      DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_FROM_JSON(redisConfig, redisConfig_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    AiTokenRateLimitConfig() = default ;
    AiTokenRateLimitConfig(const AiTokenRateLimitConfig &) = default ;
    AiTokenRateLimitConfig(AiTokenRateLimitConfig &&) = default ;
    AiTokenRateLimitConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiTokenRateLimitConfig() = default ;
    AiTokenRateLimitConfig& operator=(const AiTokenRateLimitConfig &) = default ;
    AiTokenRateLimitConfig& operator=(AiTokenRateLimitConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableGlobalRules_ == nullptr
        && this->globalRules_ == nullptr && this->pluginStatus_ == nullptr && this->redisConfig_ == nullptr && this->rules_ == nullptr; };
    // enableGlobalRules Field Functions 
    bool hasEnableGlobalRules() const { return this->enableGlobalRules_ != nullptr;};
    void deleteEnableGlobalRules() { this->enableGlobalRules_ = nullptr;};
    inline bool getEnableGlobalRules() const { DARABONBA_PTR_GET_DEFAULT(enableGlobalRules_, false) };
    inline AiTokenRateLimitConfig& setEnableGlobalRules(bool enableGlobalRules) { DARABONBA_PTR_SET_VALUE(enableGlobalRules_, enableGlobalRules) };


    // globalRules Field Functions 
    bool hasGlobalRules() const { return this->globalRules_ != nullptr;};
    void deleteGlobalRules() { this->globalRules_ = nullptr;};
    inline const vector<AiTokenRateLimitConfigRule> & getGlobalRules() const { DARABONBA_PTR_GET_CONST(globalRules_, vector<AiTokenRateLimitConfigRule>) };
    inline vector<AiTokenRateLimitConfigRule> getGlobalRules() { DARABONBA_PTR_GET(globalRules_, vector<AiTokenRateLimitConfigRule>) };
    inline AiTokenRateLimitConfig& setGlobalRules(const vector<AiTokenRateLimitConfigRule> & globalRules) { DARABONBA_PTR_SET_VALUE(globalRules_, globalRules) };
    inline AiTokenRateLimitConfig& setGlobalRules(vector<AiTokenRateLimitConfigRule> && globalRules) { DARABONBA_PTR_SET_RVALUE(globalRules_, globalRules) };


    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline const AiPluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiPluginStatus) };
    inline AiPluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiPluginStatus) };
    inline AiTokenRateLimitConfig& setPluginStatus(const AiPluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline AiTokenRateLimitConfig& setPluginStatus(AiPluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


    // redisConfig Field Functions 
    bool hasRedisConfig() const { return this->redisConfig_ != nullptr;};
    void deleteRedisConfig() { this->redisConfig_ = nullptr;};
    inline const AiPolicyRedisConfig & getRedisConfig() const { DARABONBA_PTR_GET_CONST(redisConfig_, AiPolicyRedisConfig) };
    inline AiPolicyRedisConfig getRedisConfig() { DARABONBA_PTR_GET(redisConfig_, AiPolicyRedisConfig) };
    inline AiTokenRateLimitConfig& setRedisConfig(const AiPolicyRedisConfig & redisConfig) { DARABONBA_PTR_SET_VALUE(redisConfig_, redisConfig) };
    inline AiTokenRateLimitConfig& setRedisConfig(AiPolicyRedisConfig && redisConfig) { DARABONBA_PTR_SET_RVALUE(redisConfig_, redisConfig) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<AiTokenRateLimitConfigRule> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<AiTokenRateLimitConfigRule>) };
    inline vector<AiTokenRateLimitConfigRule> getRules() { DARABONBA_PTR_GET(rules_, vector<AiTokenRateLimitConfigRule>) };
    inline AiTokenRateLimitConfig& setRules(const vector<AiTokenRateLimitConfigRule> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline AiTokenRateLimitConfig& setRules(vector<AiTokenRateLimitConfigRule> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    shared_ptr<bool> enableGlobalRules_ {};
    shared_ptr<vector<AiTokenRateLimitConfigRule>> globalRules_ {};
    shared_ptr<AiPluginStatus> pluginStatus_ {};
    shared_ptr<AiPolicyRedisConfig> redisConfig_ {};
    shared_ptr<vector<AiTokenRateLimitConfigRule>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
