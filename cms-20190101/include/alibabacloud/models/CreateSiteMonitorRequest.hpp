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
    virtual bool empty() const override { return this->address_ == nullptr
        && this->agentGroup_ == nullptr && this->alertIds_ == nullptr && this->customSchedule_ == nullptr && this->interval_ == nullptr && this->ispCities_ == nullptr
        && this->optionsJson_ == nullptr && this->regionId_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr && this->vpcConfig_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateSiteMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string getAgentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline CreateSiteMonitorRequest& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string getAlertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline CreateSiteMonitorRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // customSchedule Field Functions 
    bool hasCustomSchedule() const { return this->customSchedule_ != nullptr;};
    void deleteCustomSchedule() { this->customSchedule_ = nullptr;};
    inline string getCustomSchedule() const { DARABONBA_PTR_GET_DEFAULT(customSchedule_, "") };
    inline CreateSiteMonitorRequest& setCustomSchedule(string customSchedule) { DARABONBA_PTR_SET_VALUE(customSchedule_, customSchedule) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline CreateSiteMonitorRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string getIspCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline CreateSiteMonitorRequest& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline CreateSiteMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSiteMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateSiteMonitorRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline string getVpcConfig() const { DARABONBA_PTR_GET_DEFAULT(vpcConfig_, "") };
    inline CreateSiteMonitorRequest& setVpcConfig(string vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };


  protected:
    // The URL or IP address to monitor.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // The group of detection points for the network probe task. \\`PC\\` indicates detection points on PCs. \\`MOBILE\\` indicates detection points on mobile devices. \\`FC\\` indicates detection points in a VPC. The default value is \\`PC\\`.
    shared_ptr<string> agentGroup_ {};
    // The ID of the alert rule.
    // 
    // For more information, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    shared_ptr<string> alertIds_ {};
    // The custom detection schedule. Specify a time period and the days of the week for detection.
    shared_ptr<string> customSchedule_ {};
    // The monitoring frequency in minutes.
    // 
    // Valid values: 1, 5, 15, 30, and 60.
    // 
    // Default: 1.
    shared_ptr<string> interval_ {};
    // The detection points. If you do not specify this parameter, the system randomly selects three detection points from different Internet Service Providers (ISPs).
    // 
    // The value must be a JSON array. Example: `[{"city":"546","isp":"465"},{"city":"572","isp":"465"},{"city":"738","isp":"465"}]`. The values correspond to Beijing, Hangzhou, and Qingdao.
    // 
    // For more information, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html).
    shared_ptr<string> ispCities_ {};
    // The advanced options for the specified protocol. The available options vary based on the protocol type.
    shared_ptr<string> optionsJson_ {};
    shared_ptr<string> regionId_ {};
    // The name of the monitoring task.
    // 
    // The name must be 4 to 100 characters long and can contain letters, digits, underscores (_), and Chinese characters.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The type of monitoring task.
    // 
    // Valid protocols include HTTP(S), PING, TCP, UDP, DNS, SMTP, POP3, FTP, and WEBSOCKET.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
    // The network information required to create a network probe task in a VPC. This must be a JSON object that contains the \\`vpcId\\`, \\`vswitchId\\`, \\`securityGroupId\\`, and \\`region\\` fields.
    shared_ptr<string> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
