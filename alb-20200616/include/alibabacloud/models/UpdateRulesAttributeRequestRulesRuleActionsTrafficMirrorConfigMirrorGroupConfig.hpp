// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(const vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    std::shared_ptr<vector<Models::UpdateRulesAttributeRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
