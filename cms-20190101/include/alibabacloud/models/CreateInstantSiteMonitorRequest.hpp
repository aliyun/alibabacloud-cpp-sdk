// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANTSITEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANTSITEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateInstantSiteMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_TO_JSON(IspCities, ispCities_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RandomIspCity, randomIspCity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstantSiteMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AgentGroup, agentGroup_);
      DARABONBA_PTR_FROM_JSON(IspCities, ispCities_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RandomIspCity, randomIspCity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreateInstantSiteMonitorRequest() = default ;
    CreateInstantSiteMonitorRequest(const CreateInstantSiteMonitorRequest &) = default ;
    CreateInstantSiteMonitorRequest(CreateInstantSiteMonitorRequest &&) = default ;
    CreateInstantSiteMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstantSiteMonitorRequest() = default ;
    CreateInstantSiteMonitorRequest& operator=(const CreateInstantSiteMonitorRequest &) = default ;
    CreateInstantSiteMonitorRequest& operator=(CreateInstantSiteMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->agentGroup_ == nullptr && this->ispCities_ == nullptr && this->optionsJson_ == nullptr && this->randomIspCity_ == nullptr && this->regionId_ == nullptr
        && this->taskName_ == nullptr && this->taskType_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateInstantSiteMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // agentGroup Field Functions 
    bool hasAgentGroup() const { return this->agentGroup_ != nullptr;};
    void deleteAgentGroup() { this->agentGroup_ = nullptr;};
    inline string getAgentGroup() const { DARABONBA_PTR_GET_DEFAULT(agentGroup_, "") };
    inline CreateInstantSiteMonitorRequest& setAgentGroup(string agentGroup) { DARABONBA_PTR_SET_VALUE(agentGroup_, agentGroup) };


    // ispCities Field Functions 
    bool hasIspCities() const { return this->ispCities_ != nullptr;};
    void deleteIspCities() { this->ispCities_ = nullptr;};
    inline string getIspCities() const { DARABONBA_PTR_GET_DEFAULT(ispCities_, "") };
    inline CreateInstantSiteMonitorRequest& setIspCities(string ispCities) { DARABONBA_PTR_SET_VALUE(ispCities_, ispCities) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline CreateInstantSiteMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // randomIspCity Field Functions 
    bool hasRandomIspCity() const { return this->randomIspCity_ != nullptr;};
    void deleteRandomIspCity() { this->randomIspCity_ = nullptr;};
    inline int32_t getRandomIspCity() const { DARABONBA_PTR_GET_DEFAULT(randomIspCity_, 0) };
    inline CreateInstantSiteMonitorRequest& setRandomIspCity(int32_t randomIspCity) { DARABONBA_PTR_SET_VALUE(randomIspCity_, randomIspCity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstantSiteMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateInstantSiteMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateInstantSiteMonitorRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The URL or IP address of the detection task.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // The type of the detection points. Valid values: PC and MOBILE. PC indicates detection points on PCs. MOBILE indicates detection points on mobile devices. Default value: PC.
    shared_ptr<string> agentGroup_ {};
    // The detection points. If you do not specify this parameter, the system randomly selects three detection points.
    // 
    // The value must be a JSON array. Example: `[{"city":"546","isp":"465", "type":"IDC"},{"city":"572","isp":"465", "type":"LASTMILE"},{"city":"738","isp":"465"}]`. These values correspond to Beijing, Hangzhou, and Qingdao.
    // 
    // The type parameter specifies the type of the detection point. If AgentGroup is set to PC, valid values for type are IDC and LASTMILE. IDC indicates that the detection point is deployed in a data center. LASTMILE indicates that the detection point is deployed on the PC of a netizen that is connected to the last mile of an ISP network. The type parameter is optional. The default value is IDC. You do not need to specify this parameter if AgentGroup is set to MOBILE.
    // 
    // For more information about how to obtain detection points, see [DescribeSiteMonitorISPCityList](https://help.aliyun.com/document_detail/115045.html).
    // 
    // > You must specify either `IspCities` or `RandomIspCity`.
    shared_ptr<string> ispCities_ {};
    // The extended options for the protocol type of the detection task. The extended options vary based on the protocol type.
    shared_ptr<string> optionsJson_ {};
    // The number of detection points.
    // 
    // > - You must specify either `IspCities` or `RandomIspCity`. If you specify `RandomIspCity`, `IspCities` is ignored.
    shared_ptr<int32_t> randomIspCity_ {};
    shared_ptr<string> regionId_ {};
    // The name of the detection task.
    // 
    // <props="china">
    // 
    // The name must be 4 to 100 characters in length and can contain letters, digits, and underscores (_).
    // 
    // 
    // 
    // <props="intl">
    // 
    // The name must be 4 to 100 characters in length and can contain letters, digits, and underscores (_).
    // 
    // 
    // 
    // <props="partner">
    // 
    // The name must be 4 to 100 characters in length and can contain letters, digits, and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // The type of the detection task. Valid values: HTTP, PING, TCP, UDP, and DNS.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
