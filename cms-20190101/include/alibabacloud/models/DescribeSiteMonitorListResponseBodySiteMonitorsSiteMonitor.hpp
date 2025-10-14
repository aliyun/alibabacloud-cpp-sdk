// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor &&) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& operator=(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& operator=(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->agentGroup_ == nullptr && return this->createTime_ == nullptr && return this->interval_ == nullptr && return this->optionsJson_ == nullptr && return this->taskId_ == nullptr
        && return this->taskName_ == nullptr && return this->taskState_ == nullptr && return this->taskType_ == nullptr && return this->updateTime_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string agentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline const Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson & optionsJson() const { DARABONBA_PTR_GET_CONST(optionsJson_, Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson) };
    inline Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson optionsJson() { DARABONBA_PTR_GET(optionsJson_, Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setOptionsJson(const Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson & optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setOptionsJson(Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson && optionsJson) { DARABONBA_PTR_SET_RVALUE(optionsJson_, optionsJson) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The URL or IP address that is monitored by the site monitoring task.
    std::shared_ptr<string> address_ = nullptr;
    // The detection point type. Valid values:
    // 
    // *   PC
    // *   MOBILE
    std::shared_ptr<string> agentGroup_ = nullptr;
    // The time when the site monitoring task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The interval at which detection requests are sent. Unit: minutes.
    std::shared_ptr<string> interval_ = nullptr;
    // The extended options of the site monitoring task. The options vary based on the specified protocol. For more information, see [CreateSiteMonitor](https://help.aliyun.com/document_detail/115048.html).
    std::shared_ptr<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJson> optionsJson_ = nullptr;
    // The ID of the site monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the site monitoring task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The task status. Valid values:
    // 
    // *   1: The task is enabled.
    // *   2: The task is disabled.
    std::shared_ptr<string> taskState_ = nullptr;
    // The protocol that is used by the site monitoring task. Valid values: HTTP, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
    std::shared_ptr<string> taskType_ = nullptr;
    // The time when the site monitoring task was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
