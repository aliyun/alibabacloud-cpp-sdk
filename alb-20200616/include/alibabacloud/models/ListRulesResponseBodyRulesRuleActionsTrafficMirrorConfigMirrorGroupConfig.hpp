// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(const ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(const vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The server group to which traffic is mirrored.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
