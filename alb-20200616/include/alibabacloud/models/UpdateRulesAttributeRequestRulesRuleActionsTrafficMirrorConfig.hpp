// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MirrorGroupConfig, mirrorGroupConfig_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MirrorGroupConfig, mirrorGroupConfig_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig(const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig(UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mirrorGroupConfig_ != nullptr
        && this->targetType_ != nullptr; };
    // mirrorGroupConfig Field Functions 
    bool hasMirrorGroupConfig() const { return this->mirrorGroupConfig_ != nullptr;};
    void deleteMirrorGroupConfig() { this->mirrorGroupConfig_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig & mirrorGroupConfig() const { DARABONBA_PTR_GET_CONST(mirrorGroupConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig mirrorGroupConfig() { DARABONBA_PTR_GET(mirrorGroupConfig_, Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& setMirrorGroupConfig(const Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig & mirrorGroupConfig) { DARABONBA_PTR_SET_VALUE(mirrorGroupConfig_, mirrorGroupConfig) };
    inline UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& setMirrorGroupConfig(Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig && mirrorGroupConfig) { DARABONBA_PTR_SET_RVALUE(mirrorGroupConfig_, mirrorGroupConfig) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
