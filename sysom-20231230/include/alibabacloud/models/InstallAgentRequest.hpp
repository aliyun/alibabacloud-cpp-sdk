// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstallAgentRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InstallAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agent_id, agentId_);
      DARABONBA_PTR_TO_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_TO_JSON(install_type, installType_);
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agent_id, agentId_);
      DARABONBA_PTR_FROM_JSON(agent_version, agentVersion_);
      DARABONBA_PTR_FROM_JSON(install_type, installType_);
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    InstallAgentRequest() = default ;
    InstallAgentRequest(const InstallAgentRequest &) = default ;
    InstallAgentRequest(InstallAgentRequest &&) = default ;
    InstallAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentRequest() = default ;
    InstallAgentRequest& operator=(const InstallAgentRequest &) = default ;
    InstallAgentRequest& operator=(InstallAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->agentVersion_ != nullptr && this->installType_ != nullptr && this->instances_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline InstallAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline InstallAgentRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline string installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, "") };
    inline InstallAgentRequest& setInstallType(string installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<InstallAgentRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<InstallAgentRequestInstances>) };
    inline vector<InstallAgentRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<InstallAgentRequestInstances>) };
    inline InstallAgentRequest& setInstances(const vector<InstallAgentRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline InstallAgentRequest& setInstances(vector<InstallAgentRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> installType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<InstallAgentRequestInstances>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
