// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSTRAFFICMIRRORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSTRAFFICMIRRORCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MirrorGroupConfig, mirrorGroupConfig_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MirrorGroupConfig, mirrorGroupConfig_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig(const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig(UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& operator=(const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& operator=(UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mirrorGroupConfig_ != nullptr
        && this->targetType_ != nullptr; };
    // mirrorGroupConfig Field Functions 
    bool hasMirrorGroupConfig() const { return this->mirrorGroupConfig_ != nullptr;};
    void deleteMirrorGroupConfig() { this->mirrorGroupConfig_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig & mirrorGroupConfig() const { DARABONBA_PTR_GET_CONST(mirrorGroupConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig) };
    inline Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig mirrorGroupConfig() { DARABONBA_PTR_GET(mirrorGroupConfig_, Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig) };
    inline UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& setMirrorGroupConfig(const Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig & mirrorGroupConfig) { DARABONBA_PTR_SET_VALUE(mirrorGroupConfig_, mirrorGroupConfig) };
    inline UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& setMirrorGroupConfig(Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig && mirrorGroupConfig) { DARABONBA_PTR_SET_RVALUE(mirrorGroupConfig_, mirrorGroupConfig) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfig& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The server group to which network traffic is mirrored.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig> mirrorGroupConfig_ = nullptr;
    // The type of destination to which network traffic is mirrored. Valid values:
    // 
    // *   **ForwardGroupMirror**: a server group
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
