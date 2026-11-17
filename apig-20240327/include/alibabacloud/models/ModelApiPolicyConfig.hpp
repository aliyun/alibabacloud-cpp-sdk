// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELAPIPOLICYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODELAPIPOLICYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiSecurityGuardConfig.hpp>
#include <alibabacloud/models/AiStatisticsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ModelApiPolicyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelApiPolicyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
      DARABONBA_PTR_TO_JSON(aiStatisticsConfig, aiStatisticsConfig_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelApiPolicyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aiSecurityGuardConfig, aiSecurityGuardConfig_);
      DARABONBA_PTR_FROM_JSON(aiStatisticsConfig, aiStatisticsConfig_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelApiPolicyConfig() = default ;
    ModelApiPolicyConfig(const ModelApiPolicyConfig &) = default ;
    ModelApiPolicyConfig(ModelApiPolicyConfig &&) = default ;
    ModelApiPolicyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelApiPolicyConfig() = default ;
    ModelApiPolicyConfig& operator=(const ModelApiPolicyConfig &) = default ;
    ModelApiPolicyConfig& operator=(ModelApiPolicyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiSecurityGuardConfig_ == nullptr
        && this->aiStatisticsConfig_ == nullptr && this->enable_ == nullptr && this->type_ == nullptr; };
    // aiSecurityGuardConfig Field Functions 
    bool hasAiSecurityGuardConfig() const { return this->aiSecurityGuardConfig_ != nullptr;};
    void deleteAiSecurityGuardConfig() { this->aiSecurityGuardConfig_ = nullptr;};
    inline const AiSecurityGuardConfig & getAiSecurityGuardConfig() const { DARABONBA_PTR_GET_CONST(aiSecurityGuardConfig_, AiSecurityGuardConfig) };
    inline AiSecurityGuardConfig getAiSecurityGuardConfig() { DARABONBA_PTR_GET(aiSecurityGuardConfig_, AiSecurityGuardConfig) };
    inline ModelApiPolicyConfig& setAiSecurityGuardConfig(const AiSecurityGuardConfig & aiSecurityGuardConfig) { DARABONBA_PTR_SET_VALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };
    inline ModelApiPolicyConfig& setAiSecurityGuardConfig(AiSecurityGuardConfig && aiSecurityGuardConfig) { DARABONBA_PTR_SET_RVALUE(aiSecurityGuardConfig_, aiSecurityGuardConfig) };


    // aiStatisticsConfig Field Functions 
    bool hasAiStatisticsConfig() const { return this->aiStatisticsConfig_ != nullptr;};
    void deleteAiStatisticsConfig() { this->aiStatisticsConfig_ = nullptr;};
    inline const AiStatisticsConfig & getAiStatisticsConfig() const { DARABONBA_PTR_GET_CONST(aiStatisticsConfig_, AiStatisticsConfig) };
    inline AiStatisticsConfig getAiStatisticsConfig() { DARABONBA_PTR_GET(aiStatisticsConfig_, AiStatisticsConfig) };
    inline ModelApiPolicyConfig& setAiStatisticsConfig(const AiStatisticsConfig & aiStatisticsConfig) { DARABONBA_PTR_SET_VALUE(aiStatisticsConfig_, aiStatisticsConfig) };
    inline ModelApiPolicyConfig& setAiStatisticsConfig(AiStatisticsConfig && aiStatisticsConfig) { DARABONBA_PTR_SET_RVALUE(aiStatisticsConfig_, aiStatisticsConfig) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModelApiPolicyConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelApiPolicyConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The AI security protection settings.
    shared_ptr<AiSecurityGuardConfig> aiSecurityGuardConfig_ {};
    // The AI observability and request log configuration.
    shared_ptr<AiStatisticsConfig> aiStatisticsConfig_ {};
    // Specifies whether to enable the policy.
    shared_ptr<bool> enable_ {};
    // The policy type. Only AiStatistics and AiSecurityGuard are supported.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
