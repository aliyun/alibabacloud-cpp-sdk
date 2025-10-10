// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession.hpp>
#include <vector>
#include <alibabacloud/models/CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    CreateRulesRequestRulesRuleActionsForwardGroupConfig() = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfig(const CreateRulesRequestRulesRuleActionsForwardGroupConfig &) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfig(CreateRulesRequestRulesRuleActionsForwardGroupConfig &&) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleActionsForwardGroupConfig() = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfig& operator=(const CreateRulesRequestRulesRuleActionsForwardGroupConfig &) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfig& operator=(CreateRulesRequestRulesRuleActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupStickySession_ != nullptr
        && this->serverGroupTuples_ != nullptr; };
    // serverGroupStickySession Field Functions 
    bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
    void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
    inline const Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession serverGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(const Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfig& setServerGroupTuples(vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    std::shared_ptr<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession_ = nullptr;
    std::shared_ptr<vector<Models::CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
