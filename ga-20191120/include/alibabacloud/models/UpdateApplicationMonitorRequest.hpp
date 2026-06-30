// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateApplicationMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_TO_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_TO_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_FROM_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_FROM_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateApplicationMonitorRequest() = default ;
    UpdateApplicationMonitorRequest(const UpdateApplicationMonitorRequest &) = default ;
    UpdateApplicationMonitorRequest(UpdateApplicationMonitorRequest &&) = default ;
    UpdateApplicationMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationMonitorRequest() = default ;
    UpdateApplicationMonitorRequest& operator=(const UpdateApplicationMonitorRequest &) = default ;
    UpdateApplicationMonitorRequest& operator=(UpdateApplicationMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->clientToken_ == nullptr && this->detectEnable_ == nullptr && this->detectThreshold_ == nullptr && this->detectTimes_ == nullptr && this->listenerId_ == nullptr
        && this->optionsJson_ == nullptr && this->regionId_ == nullptr && this->silenceTime_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateApplicationMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateApplicationMonitorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // detectEnable Field Functions 
    bool hasDetectEnable() const { return this->detectEnable_ != nullptr;};
    void deleteDetectEnable() { this->detectEnable_ = nullptr;};
    inline bool getDetectEnable() const { DARABONBA_PTR_GET_DEFAULT(detectEnable_, false) };
    inline UpdateApplicationMonitorRequest& setDetectEnable(bool detectEnable) { DARABONBA_PTR_SET_VALUE(detectEnable_, detectEnable) };


    // detectThreshold Field Functions 
    bool hasDetectThreshold() const { return this->detectThreshold_ != nullptr;};
    void deleteDetectThreshold() { this->detectThreshold_ = nullptr;};
    inline int32_t getDetectThreshold() const { DARABONBA_PTR_GET_DEFAULT(detectThreshold_, 0) };
    inline UpdateApplicationMonitorRequest& setDetectThreshold(int32_t detectThreshold) { DARABONBA_PTR_SET_VALUE(detectThreshold_, detectThreshold) };


    // detectTimes Field Functions 
    bool hasDetectTimes() const { return this->detectTimes_ != nullptr;};
    void deleteDetectTimes() { this->detectTimes_ = nullptr;};
    inline int32_t getDetectTimes() const { DARABONBA_PTR_GET_DEFAULT(detectTimes_, 0) };
    inline UpdateApplicationMonitorRequest& setDetectTimes(int32_t detectTimes) { DARABONBA_PTR_SET_VALUE(detectTimes_, detectTimes) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateApplicationMonitorRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline UpdateApplicationMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline UpdateApplicationMonitorRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateApplicationMonitorRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateApplicationMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The URL or IP address to be probed.
    shared_ptr<string> address_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** value as the **ClientToken** value. The **RequestId** value of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the automatic diagnostics feature. Valid values:
    // 
    // - **true**: Enabled.
    // 
    // - **false** (default): Disabled.
    shared_ptr<bool> detectEnable_ {};
    // The threshold that triggers automatic diagnostics. When the origin availability rate falls below this threshold, automatic diagnostics is triggered.
    // 
    // Valid values: **0** to **100**.
    shared_ptr<int32_t> detectThreshold_ {};
    // The number of consecutive times that the availability rate must fall below the threshold before automatic diagnostics is triggered.
    // 
    // Valid values: **1** to **20**.
    shared_ptr<int32_t> detectTimes_ {};
    // The instance ID of the listener associated with the origin probing task that you want to modify.
    shared_ptr<string> listenerId_ {};
    // The advanced extension options for the listener protocol type of the origin probing task. Different listener protocol types correspond to different extension options.
    shared_ptr<string> optionsJson_ {};
    // The region ID of the Alibaba Cloud Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    shared_ptr<string> regionId_ {};
    // The silence period for automatic diagnostics. This specifies the interval between automatic diagnostics triggers when the availability rate does not recover to normal after diagnostics is triggered.
    // 
    // When the availability rate falls below the automatic diagnostics threshold for consecutive times (as specified by **DetectTimes**), automatic diagnostics is triggered. If the availability rate remains below the threshold during the silence period, automatic diagnostics is not triggered again within the silence period. If the availability rate has not recovered after the silence period expires, automatic diagnostics is triggered again.
    // 
    // Unit: seconds. Valid values: **300** to **86400**.
    shared_ptr<int32_t> silenceTime_ {};
    // The ID of the origin probing task that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The name of the origin probing task.
    // 
    // The name must be 1 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
