// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODYNODEPROCESSESNODEPROCESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODYNODEPROCESSESNODEPROCESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessUser, processUser_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessUser, processUser_);
    };
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess() = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess(const DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess &) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess(DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess &&) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess() = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& operator=(const DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess &) = default ;
    DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& operator=(DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && return this->groupId_ == nullptr && return this->instanceId_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr && return this->processUser_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline int64_t processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0L) };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setProcessId(int64_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processUser Field Functions 
    bool hasProcessUser() const { return this->processUser_ != nullptr;};
    void deleteProcessUser() { this->processUser_ = nullptr;};
    inline string processUser() const { DARABONBA_PTR_GET_DEFAULT(processUser_, "") };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcessesNodeProcess& setProcessUser(string processUser) { DARABONBA_PTR_SET_VALUE(processUser_, processUser) };


  protected:
    // The command used to obtain the number of processes. Valid value: `number`.
    // 
    // >  The `number` command obtains the number of processes that match the condition.
    std::shared_ptr<string> command_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the process.
    std::shared_ptr<int64_t> processId_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> processName_ = nullptr;
    // The user who launched the process.
    std::shared_ptr<string> processUser_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
