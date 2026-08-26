// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESTREAMMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESTREAMMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveStreamMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveStreamMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InputList, inputList_);
      DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
      DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_TO_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_TO_JSON(OutputTemplate, outputTemplate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveStreamMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InputList, inputList_);
      DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
      DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_FROM_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_FROM_JSON(OutputTemplate, outputTemplate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    UpdateLiveStreamMonitorRequest() = default ;
    UpdateLiveStreamMonitorRequest(const UpdateLiveStreamMonitorRequest &) = default ;
    UpdateLiveStreamMonitorRequest(UpdateLiveStreamMonitorRequest &&) = default ;
    UpdateLiveStreamMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveStreamMonitorRequest() = default ;
    UpdateLiveStreamMonitorRequest& operator=(const UpdateLiveStreamMonitorRequest &) = default ;
    UpdateLiveStreamMonitorRequest& operator=(UpdateLiveStreamMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->callbackUrl_ == nullptr && this->dingTalkWebHookUrl_ == nullptr && this->domain_ == nullptr && this->inputList_ == nullptr && this->monitorConfig_ == nullptr
        && this->monitorId_ == nullptr && this->monitorName_ == nullptr && this->outputTemplate_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->stream_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline UpdateLiveStreamMonitorRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline UpdateLiveStreamMonitorRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // dingTalkWebHookUrl Field Functions 
    bool hasDingTalkWebHookUrl() const { return this->dingTalkWebHookUrl_ != nullptr;};
    void deleteDingTalkWebHookUrl() { this->dingTalkWebHookUrl_ = nullptr;};
    inline string getDingTalkWebHookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingTalkWebHookUrl_, "") };
    inline UpdateLiveStreamMonitorRequest& setDingTalkWebHookUrl(string dingTalkWebHookUrl) { DARABONBA_PTR_SET_VALUE(dingTalkWebHookUrl_, dingTalkWebHookUrl) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateLiveStreamMonitorRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline string getInputList() const { DARABONBA_PTR_GET_DEFAULT(inputList_, "") };
    inline UpdateLiveStreamMonitorRequest& setInputList(string inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };


    // monitorConfig Field Functions 
    bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
    void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
    inline string getMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(monitorConfig_, "") };
    inline UpdateLiveStreamMonitorRequest& setMonitorConfig(string monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };


    // monitorId Field Functions 
    bool hasMonitorId() const { return this->monitorId_ != nullptr;};
    void deleteMonitorId() { this->monitorId_ = nullptr;};
    inline string getMonitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
    inline UpdateLiveStreamMonitorRequest& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


    // monitorName Field Functions 
    bool hasMonitorName() const { return this->monitorName_ != nullptr;};
    void deleteMonitorName() { this->monitorName_ = nullptr;};
    inline string getMonitorName() const { DARABONBA_PTR_GET_DEFAULT(monitorName_, "") };
    inline UpdateLiveStreamMonitorRequest& setMonitorName(string monitorName) { DARABONBA_PTR_SET_VALUE(monitorName_, monitorName) };


    // outputTemplate Field Functions 
    bool hasOutputTemplate() const { return this->outputTemplate_ != nullptr;};
    void deleteOutputTemplate() { this->outputTemplate_ = nullptr;};
    inline string getOutputTemplate() const { DARABONBA_PTR_GET_DEFAULT(outputTemplate_, "") };
    inline UpdateLiveStreamMonitorRequest& setOutputTemplate(string outputTemplate) { DARABONBA_PTR_SET_VALUE(outputTemplate_, outputTemplate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveStreamMonitorRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveStreamMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline UpdateLiveStreamMonitorRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // The application name for the output stream of the monitoring session. You can specify a custom name. If you do not specify this parameter, **monitor** is used as the AppName.
    shared_ptr<string> app_ {};
    // The webhook address. HTTP and HTTPS are supported.
    shared_ptr<string> callbackUrl_ {};
    // The webhook URL of the DingTalk chatbot. Monitoring alerts are sent to a DingTalk group using a chatbot. Set up a chatbot and enter its webhook URL, which must be an HTTP or HTTPS address. For more information, see [Custom robot access](https://open.dingtalk.com/document/robots/custom-robot-access).
    // 
    // > Set the custom keyword of the DingTalk chatbot to "Alerting". Otherwise, messages cannot be received.
    shared_ptr<string> dingTalkWebHookUrl_ {};
    // The output domain name for the monitoring session.
    shared_ptr<string> domain_ {};
    // The list of input streams to monitor. For more information, see the **InputConfig** table below.
    // 
    // This parameter is required.
    shared_ptr<string> inputList_ {};
    // The settings for alert thresholds. The value is a JSON string. For more information, see the MonitorConfig table below.
    shared_ptr<string> monitorConfig_ {};
    // The ID of the monitoring session.
    // 
    // > Obtain the MonitorId value from the response parameters of the [CreateLiveStreamMonitor](https://help.aliyun.com/document_detail/2848129.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> monitorId_ {};
    // The name of the monitoring session.
    shared_ptr<string> monitorName_ {};
    // The output template for the monitoring session. Valid values:
    // 
    // - **lp_ld**: low definition.
    // 
    // - **lp_sd**: standard definition.
    // 
    // - **lp_hd**: high definition.
    // 
    // - **lp_ud**: ultra-high definition.
    shared_ptr<string> outputTemplate_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The name of the output stream for the monitoring session.
    shared_ptr<string> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
