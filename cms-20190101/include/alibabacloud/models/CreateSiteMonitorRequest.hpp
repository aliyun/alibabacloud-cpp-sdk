// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_TO_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_TO_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_FROM_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_FROM_JSON(CustomSchedule, customSchedule_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
    };
    CreateSiteMonitorRequest() = default ;
    CreateSiteMonitorRequest(const CreateSiteMonitorRequest &) = default ;
    CreateSiteMonitorRequest(CreateSiteMonitorRequest &&) = default ;
    CreateSiteMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorRequest() = default ;
    CreateSiteMonitorRequest& operator=(const CreateSiteMonitorRequest &) = default ;
    CreateSiteMonitorRequest& operator=(CreateSiteMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->agentGroup_ != nullptr && this->alertIds_ != nullptr && this->customSchedule_ != nullptr && this->interval_ != nullptr && this->ispCities_ != nullptr
        && this->optionsJson_ != nullptr && this->regionId_ != nullptr && this->taskName_ != nullptr && this->taskType_ != nullptr && this->vpcConfig_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateSiteMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string agentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline CreateSiteMonitorRequest& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string alertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline CreateSiteMonitorRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // customSchedule Field Functions 
    bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
    void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
    inline string customSchedule() const { DARABONBA_PTR_GET_DEFAULT(customSchedule_, "") };
    inline CreateSiteMonitorRequest& setCustomSchedule(string customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline CreateSiteMonitorRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string ispCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline CreateSiteMonitorRequest& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string optionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline CreateSiteMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSiteMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateSiteMonitorRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline string vpcConfig() const { DARABONBA_PTR_GET_DEFAULT(vpcConfig_, "") };
    inline CreateSiteMonitorRequest& setVpcConfig(string vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };


  protected:
    // The URL or IP address that is monitored by the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> agentGroup_ = nullptr;
    // The ID of the alert rule.
    // 
    // For more information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    std::shared_ptr<string> alertIds_ = nullptr;
    // The custom detection period. You can only select a time period from Monday to Sunday for detection.
    std::shared_ptr<string> customSchedule_ = nullptr;
    // The interval at which detection requests are sent.
    // 
    // Valid values: 1, 5, 15, 30, and 60. Unit: minutes.
    // 
    // Default value: 1.
    std::shared_ptr<string> interval_ = nullptr;
    // The information of the detection points. If you leave this parameter empty, the system randomly selects three detection points.
    // 
    // The value is a JSON array. Example: `[{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}]`. The values of the city field indicate Beijing, Hangzhou, and Qingdao.
    // 
    // For information about how to obtain detection points, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html).
    std::shared_ptr<string> ispCities_ = nullptr;
    // The extended options of the protocol that is used by the site monitoring task. The options vary based on the protocol.
    std::shared_ptr<string> optionsJson_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the site monitoring task.
    // 
    // The name must be 4 to 100 characters in length, and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
    // The protocol that is used by the site monitoring task.
    // 
    // Valid values: HTTP, HTTPS, PING, TCP, UDP, DNS, SMTP, POP3, FTP, and WEBSOCKET.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> vpcConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
