// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSTRAFFICMIRRORCONFIGMIRRORGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig() = default ;
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(const CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &) = default ;
    CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& operator=(CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>) };
    inline CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(const vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfig& setServerGroupTuples(vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The configuration of the server group to which traffic is mirrored.
    std::shared_ptr<vector<Models::CreateRuleRequestRuleActionsTrafficMirrorConfigMirrorGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
