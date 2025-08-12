// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORINGAGENTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORINGAGENTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMonitoringAgentProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessUser, processUser_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitoringAgentProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessUser, processUser_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMonitoringAgentProcessRequest() = default ;
    CreateMonitoringAgentProcessRequest(const CreateMonitoringAgentProcessRequest &) = default ;
    CreateMonitoringAgentProcessRequest(CreateMonitoringAgentProcessRequest &&) = default ;
    CreateMonitoringAgentProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitoringAgentProcessRequest() = default ;
    CreateMonitoringAgentProcessRequest& operator=(const CreateMonitoringAgentProcessRequest &) = default ;
    CreateMonitoringAgentProcessRequest& operator=(CreateMonitoringAgentProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->processName_ != nullptr && this->processUser_ != nullptr && this->regionId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateMonitoringAgentProcessRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateMonitoringAgentProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processUser Field Functions 
    bool hasProcessUser() const { return this->processUser_ != nullptr;};
    void deleteProcessUser() { this->processUser_ = nullptr;};
    inline string processUser() const { DARABONBA_PTR_GET_DEFAULT(processUser_, "") };
    inline CreateMonitoringAgentProcessRequest& setProcessUser(string processUser) { DARABONBA_PTR_SET_VALUE(processUser_, processUser) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMonitoringAgentProcessRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> processName_ = nullptr;
    // The user who launches the process.
    std::shared_ptr<string> processUser_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
