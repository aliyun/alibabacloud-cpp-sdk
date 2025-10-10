// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(const CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(const vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    std::shared_ptr<vector<Models::CreateRulesRequestRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
