// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLPOLARCLAWSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLPOLARCLAWSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UninstallPolarClawSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallPolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(UninstallSkillNames, uninstallSkillNames_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallPolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(UninstallSkillNames, uninstallSkillNames_);
    };
    UninstallPolarClawSkillsRequest() = default ;
    UninstallPolarClawSkillsRequest(const UninstallPolarClawSkillsRequest &) = default ;
    UninstallPolarClawSkillsRequest(UninstallPolarClawSkillsRequest &&) = default ;
    UninstallPolarClawSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallPolarClawSkillsRequest() = default ;
    UninstallPolarClawSkillsRequest& operator=(const UninstallPolarClawSkillsRequest &) = default ;
    UninstallPolarClawSkillsRequest& operator=(UninstallPolarClawSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr && this->uninstallSkillNames_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UninstallPolarClawSkillsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UninstallPolarClawSkillsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UninstallPolarClawSkillsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UninstallPolarClawSkillsRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // uninstallSkillNames Field Functions 
    bool hasUninstallSkillNames() const { return this->uninstallSkillNames_ != nullptr;};
    void deleteUninstallSkillNames() { this->uninstallSkillNames_ = nullptr;};
    inline string getUninstallSkillNames() const { DARABONBA_PTR_GET_DEFAULT(uninstallSkillNames_, "") };
    inline UninstallPolarClawSkillsRequest& setUninstallSkillNames(string uninstallSkillNames) { DARABONBA_PTR_SET_VALUE(uninstallSkillNames_, uninstallSkillNames) };


  protected:
    // The task-level target agent (workspace). If not specified, the default agent is used.
    shared_ptr<string> agentId_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query region details.
    shared_ptr<string> regionId_ {};
    // The task-level scope. Valid values: workspace (default) and global. This parameter is mutually exclusive with AgentId.
    shared_ptr<string> scope_ {};
    // The names of the skills to uninstall.
    // 
    // This parameter is required.
    shared_ptr<string> uninstallSkillNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
