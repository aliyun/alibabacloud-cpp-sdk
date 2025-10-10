// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(const UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(const vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The server group to which traffic is mirrored.
    std::shared_ptr<vector<Models::UpdateRuleAttributeRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
