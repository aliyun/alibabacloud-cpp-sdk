// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeAgentRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpgradeAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    UpgradeAgentRequest() = default ;
    UpgradeAgentRequest(const UpgradeAgentRequest &) = default ;
    UpgradeAgentRequest(UpgradeAgentRequest &&) = default ;
    UpgradeAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAgentRequest() = default ;
    UpgradeAgentRequest& operator=(const UpgradeAgentRequest &) = default ;
    UpgradeAgentRequest& operator=(UpgradeAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentVersion_ == nullptr && return this->instances_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpgradeAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline UpgradeAgentRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UpgradeAgentRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UpgradeAgentRequestInstances>) };
    inline vector<UpgradeAgentRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<UpgradeAgentRequestInstances>) };
    inline UpgradeAgentRequest& setInstances(const vector<UpgradeAgentRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UpgradeAgentRequest& setInstances(vector<UpgradeAgentRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpgradeAgentRequestInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
