// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UninstallAgentRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UninstallAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    UninstallAgentRequest() = default ;
    UninstallAgentRequest(const UninstallAgentRequest &) = default ;
    UninstallAgentRequest(UninstallAgentRequest &&) = default ;
    UninstallAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAgentRequest() = default ;
    UninstallAgentRequest& operator=(const UninstallAgentRequest &) = default ;
    UninstallAgentRequest& operator=(UninstallAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentVersion_ != nullptr && this->instances_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UninstallAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline UninstallAgentRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<UninstallAgentRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<UninstallAgentRequestInstances>) };
    inline vector<UninstallAgentRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<UninstallAgentRequestInstances>) };
    inline UninstallAgentRequest& setInstances(const vector<UninstallAgentRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline UninstallAgentRequest& setInstances(vector<UninstallAgentRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UninstallAgentRequestInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
