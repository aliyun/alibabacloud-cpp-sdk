// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupStickySession, serverGroupStickySession_);
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig(UpdateRuleAttributeRequestRuleActionsForwardGroupConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& operator=(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& operator=(UpdateRuleAttributeRequestRuleActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupStickySession_ != nullptr
        && this->serverGroupTuples_ != nullptr; };
    // serverGroupStickySession Field Functions 
    bool hasServerGroupStickySession() const { return this->serverGroupStickySession_ != nullptr;};
    void deleteServerGroupStickySession() { this->serverGroupStickySession_ = nullptr;};
    inline const Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession() const { DARABONBA_PTR_GET_CONST(serverGroupStickySession_, Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession serverGroupStickySession() { DARABONBA_PTR_GET(serverGroupStickySession_, Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& setServerGroupStickySession(const Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession & serverGroupStickySession) { DARABONBA_PTR_SET_VALUE(serverGroupStickySession_, serverGroupStickySession) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& setServerGroupStickySession(Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession && serverGroupStickySession) { DARABONBA_PTR_SET_RVALUE(serverGroupStickySession_, serverGroupStickySession) };


    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples>) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfig& setServerGroupTuples(vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The configuration of session persistence for server groups.
    std::shared_ptr<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession> serverGroupStickySession_ = nullptr;
    // The server groups to which requests are forwarded.
    std::shared_ptr<vector<Models::UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
