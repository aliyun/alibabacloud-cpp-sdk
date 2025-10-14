// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_TO_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
      DARABONBA_PTR_TO_JSON(OptionJson, optionJson_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_FROM_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
      DARABONBA_PTR_FROM_JSON(OptionJson, optionJson_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitors() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitors(const DescribeSiteMonitorAttributeResponseBodySiteMonitors &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitors(DescribeSiteMonitorAttributeResponseBodySiteMonitors &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitors() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitors& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitors &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitors& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->agentGroup_ == nullptr && return this->customSchedule_ == nullptr && return this->interval_ == nullptr && return this->ispCities_ == nullptr && return this->optionJson_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskState_ == nullptr && return this->taskType_ == nullptr && return this->vpcConfig_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string agentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // customSchedule Field Functions 
    bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
    void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule & customSchedule() const { DARABONBA_PTR_GET_CONST(customSchedule_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule customSchedule() { DARABONBA_PTR_GET(customSchedule_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setCustomSchedule(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule & customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setCustomSchedule(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule && customSchedule) { DARABONBA_PTR_SET_RVALUE(customSchedule_, customSchedule) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities & ispCities() const { DARABONBA_PTR_GET_CONST(ispCities_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities ispCities() { DARABONBA_PTR_GET(ispCities_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setIspCities(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities & ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setIspCities(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities && ispCities) { DARABONBA_PTR_SET_RVALUE(ispCities_, ispCities) };


    // optionJson Field Functions 
    bool hasOptionJson() const { return this->optionJson_ != nullptr;};
    void deleteOptionJson() { this->optionJson_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson & optionJson() const { DARABONBA_PTR_GET_CONST(optionJson_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson optionJson() { DARABONBA_PTR_GET(optionJson_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setOptionJson(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson & optionJson) { DARABONBA_PTR_SET_VALUE(optionJson_, optionJson) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setOptionJson(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson && optionJson) { DARABONBA_PTR_SET_RVALUE(optionJson_, optionJson) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig & vpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig vpcConfig() { DARABONBA_PTR_GET(vpcConfig_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setVpcConfig(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitors& setVpcConfig(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The URL that is monitored by the site monitoring task.
    std::shared_ptr<string> address_ = nullptr;
    // The type of the detection point. Default value: PC. Valid values:
    // - PC
    // - MOBILE
    std::shared_ptr<string> agentGroup_ = nullptr;
    // The custom detection cycle. You can specify only a time range within a week (from Monday to Sunday).
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomSchedule> customSchedule_ = nullptr;
    // The interval at which the site monitoring task is executed. Unit: minutes. Valid values: 1, 5, 15, 30, and 60.
    std::shared_ptr<string> interval_ = nullptr;
    // The information of detection points. The information includes the carriers that provide the detection points and the cities where the detection points reside.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities> ispCities_ = nullptr;
    // The extended options of the site monitoring task. The options vary based on the specified protocol. For more information, see [CreateSiteMonitor](https://help.aliyun.com/document_detail/115048.html).
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJson> optionJson_ = nullptr;
    // The ID of the site monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the site monitoring task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The status of the site monitoring task. Valid values:
    // 
    // *   1: The task is enabled.
    // *   2: The task is disabled.
    std::shared_ptr<string> taskState_ = nullptr;
    // The protocol that is used by the site monitoring task. Valid values: HTTP, HTTPS, PING, TCP, UDP, DNS, SMTP, POP3, and FTP.
    std::shared_ptr<string> taskType_ = nullptr;
    // The VPC configurations of the synthetic test task.
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsVpcConfig> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
