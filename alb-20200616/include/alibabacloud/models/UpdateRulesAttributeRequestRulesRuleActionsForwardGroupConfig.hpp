// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig(const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig(UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupStickySession_ != nullptr
        && this->serverGroupTuples_ != nullptr; };
    // serverGroupStickySession Field Functions 
    bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
    void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
    inline const Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession serverGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(const Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& setServerGroupStickySession(Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfig& setServerGroupTuples(vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    std::shared_ptr<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession_ = nullptr;
    std::shared_ptr<vector<Models::UpdateRulesAttributeRequestRulesRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
