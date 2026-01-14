// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateApplicationMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_TO_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_TO_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DetectEnable, detectEnable_);
      DARABONBA_PTR_FROM_JSON(DetectThreshold, detectThreshold_);
      DARABONBA_PTR_FROM_JSON(DetectTimes, detectTimes_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(OptionsJson, optionsJson_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateApplicationMonitorRequest() = default ;
    CreateApplicationMonitorRequest(const CreateApplicationMonitorRequest &) = default ;
    CreateApplicationMonitorRequest(CreateApplicationMonitorRequest &&) = default ;
    CreateApplicationMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationMonitorRequest() = default ;
    CreateApplicationMonitorRequest& operator=(const CreateApplicationMonitorRequest &) = default ;
    CreateApplicationMonitorRequest& operator=(CreateApplicationMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->address_ == nullptr && this->clientToken_ == nullptr && this->detectEnable_ == nullptr && this->detectThreshold_ == nullptr && this->detectTimes_ == nullptr
        && this->listenerId_ == nullptr && this->optionsJson_ == nullptr && this->regionId_ == nullptr && this->silenceTime_ == nullptr && this->taskName_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateApplicationMonitorRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateApplicationMonitorRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateApplicationMonitorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // detectEnable Field Functions 
    bool hasDetectEnable() const { return this->detectEnable_ != nullptr;};
    void deleteDetectEnable() { this->detectEnable_ = nullptr;};
    inline bool getDetectEnable() const { DARABONBA_PTR_GET_DEFAULT(detectEnable_, false) };
    inline CreateApplicationMonitorRequest& setDetectEnable(bool detectEnable) { DARABONBA_PTR_SET_VALUE(detectEnable_, detectEnable) };


    // detectThreshold Field Functions 
    bool hasDetectThreshold() const { return this->detectThreshold_ != nullptr;};
    void deleteDetectThreshold() { this->detectThreshold_ = nullptr;};
    inline int32_t getDetectThreshold() const { DARABONBA_PTR_GET_DEFAULT(detectThreshold_, 0) };
    inline CreateApplicationMonitorRequest& setDetectThreshold(int32_t detectThreshold) { DARABONBA_PTR_SET_VALUE(detectThreshold_, detectThreshold) };


    // detectTimes Field Functions 
    bool hasDetectTimes() const { return this->detectTimes_ != nullptr;};
    void deleteDetectTimes() { this->detectTimes_ = nullptr;};
    inline int32_t getDetectTimes() const { DARABONBA_PTR_GET_DEFAULT(detectTimes_, 0) };
    inline CreateApplicationMonitorRequest& setDetectTimes(int32_t detectTimes) { DARABONBA_PTR_SET_VALUE(detectTimes_, detectTimes) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateApplicationMonitorRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // optionsJson Field Functions 
    bool hasOptionsJson() const { return this->optionsJson_ != nullptr;};
    void deleteOptionsJson() { this->optionsJson_ = nullptr;};
    inline string getOptionsJson() const { DARABONBA_PTR_GET_DEFAULT(optionsJson_, "") };
    inline CreateApplicationMonitorRequest& setOptionsJson(string optionsJson) { DARABONBA_PTR_SET_VALUE(optionsJson_, optionsJson) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApplicationMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t getSilenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline CreateApplicationMonitorRequest& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateApplicationMonitorRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the GA instance on which you want to perform the origin probing task.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The URL or IP address that you want to probe.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the automatic diagnostics feature. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> detectEnable_ {};
    // The threshold that is used to trigger the automatic diagnostics feature. Unit: percentage.
    // 
    // Valid values: **0** to **100**.
    // 
    // The default value is **0**, which indicates that the automatic diagnostics feature is not triggered.
    shared_ptr<int32_t> detectThreshold_ {};
    // The number of times that the threshold must be reached before the automatic diagnostics feature is triggered.
    // 
    // Valid values: **1** to **20**. Default value: **1**.
    shared_ptr<int32_t> detectTimes_ {};
    // The ID of the listener on which you want to perform the origin probing task.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The extended options of the listener protocol that is used by the origin probing task. The options vary based on the listener protocol.
    shared_ptr<string> optionsJson_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The silence period of the automatic diagnostics feature. This parameter specifies the interval at which the automatic diagnostics feature is triggered. If the availability rate does not return to normal after GA triggers an automatic diagnostic task, GA must wait until the silence period ends before GA can trigger another automatic diagnostic task.
    // 
    // If the number of consecutive times that the availability rate drops below the threshold of automatic diagnostics reaches the value of **DetectTimes**, the automatic diagnostics feature is triggered. The automatic diagnostics feature is not triggered again within the silence period even if the availability rate remains below the threshold. If the availability rate does not return to normal after the silence period ends, the automatic diagnostics feature is triggered again.
    // 
    // Unit: seconds. Valid values: **300** to **86400**. Default value: **300**.
    shared_ptr<int32_t> silenceTime_ {};
    // The name of the origin probing task.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
