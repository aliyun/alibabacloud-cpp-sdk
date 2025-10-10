// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig(const ListRulesResponseBodyRulesRuleActionsForwardGroupConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig(ListRulesResponseBodyRulesRuleActionsForwardGroupConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsForwardGroupConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& operator=(const ListRulesResponseBodyRulesRuleActionsForwardGroupConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& operator=(ListRulesResponseBodyRulesRuleActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupStickySession_ != nullptr
        && this->serverGroupTuples_ != nullptr; };
    // serverGroupStickySession Field Functions 
    bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
    void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
    inline const Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession serverGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(const Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
    inline ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline ListRulesResponseBodyRulesRuleActionsForwardGroupConfig& setServerGroupTuples(vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The session persistence configurations of the server group.
    std::shared_ptr<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession_ = nullptr;
    // The server groups to which requests are forwarded.
    std::shared_ptr<vector<Models::ListRulesResponseBodyRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
