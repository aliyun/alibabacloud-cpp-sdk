// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession.hpp>
#include <vector>
#include <alibabacloud/models/CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    CreateRuleRequestRuleActionsForwardGroupConfig() = default ;
    CreateRuleRequestRuleActionsForwardGroupConfig(const CreateRuleRequestRuleActionsForwardGroupConfig &) = default ;
    CreateRuleRequestRuleActionsForwardGroupConfig(CreateRuleRequestRuleActionsForwardGroupConfig &&) = default ;
    CreateRuleRequestRuleActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActionsForwardGroupConfig() = default ;
    CreateRuleRequestRuleActionsForwardGroupConfig& operator=(const CreateRuleRequestRuleActionsForwardGroupConfig &) = default ;
    CreateRuleRequestRuleActionsForwardGroupConfig& operator=(CreateRuleRequestRuleActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupStickySession_ != nullptr
        && this->serverGroupTuples_ != nullptr; };
    // serverGroupStickySession Field Functions 
    bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
    void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
    inline const Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession serverGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline CreateRuleRequestRuleActionsForwardGroupConfig& setServerGroupStickySession(const Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
    inline CreateRuleRequestRuleActionsForwardGroupConfig& setServerGroupStickySession(Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline CreateRuleRequestRuleActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline CreateRuleRequestRuleActionsForwardGroupConfig& setServerGroupTuples(vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The configuration of session persistence for the server groups.
    std::shared_ptr<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession_ = nullptr;
    // The server groups to which requests are forwarded. You can specify at most five server groups for each forwarding rule.
    std::shared_ptr<vector<Models::CreateRuleRequestRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
