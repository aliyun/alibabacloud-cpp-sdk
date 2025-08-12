// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMMONITORLISTRESPONSEBODYLIVESTREAMMONITORLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList.hpp>
#include <alibabacloud/models/DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFrom, audioFrom_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InputList, inputList_);
      DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
      DARABONBA_PTR_TO_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_TO_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_TO_JSON(OutputTemplate, outputTemplate_);
      DARABONBA_PTR_TO_JSON(OutputUrls, outputUrls_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFrom, audioFrom_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(DingTalkWebHookUrl, dingTalkWebHookUrl_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InputList, inputList_);
      DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
      DARABONBA_PTR_FROM_JSON(MonitorId, monitorId_);
      DARABONBA_PTR_FROM_JSON(MonitorName, monitorName_);
      DARABONBA_PTR_FROM_JSON(OutputTemplate, outputTemplate_);
      DARABONBA_PTR_FROM_JSON(OutputUrls, outputUrls_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
    };
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList &&) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList() = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& operator=(const DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList &) = default ;
    DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& operator=(DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioFrom_ != nullptr
        && this->callbackUrl_ != nullptr && this->dingTalkWebHookUrl_ != nullptr && this->domain_ != nullptr && this->inputList_ != nullptr && this->monitorConfig_ != nullptr
        && this->monitorId_ != nullptr && this->monitorName_ != nullptr && this->outputTemplate_ != nullptr && this->outputUrls_ != nullptr && this->region_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->stopTime_ != nullptr; };
    // audioFrom Field Functions 
    bool hasAudioFrom() const { return this->audioFrom_ != nullptr;};
    void deleteAudioFrom() { this->audioFrom_ = nullptr;};
    inline int32_t audioFrom() const { DARABONBA_PTR_GET_DEFAULT(audioFrom_, 0) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setAudioFrom(int32_t audioFrom) { DARABONBA_PTR_SET_VALUE(audioFrom_, audioFrom) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // dingTalkWebHookUrl Field Functions 
    bool hasDingTalkWebHookUrl() const { return this->dingTalkWebHookUrl_ != nullptr;};
    void deleteDingTalkWebHookUrl() { this->dingTalkWebHookUrl_ = nullptr;};
    inline string dingTalkWebHookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingTalkWebHookUrl_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setDingTalkWebHookUrl(string dingTalkWebHookUrl) { DARABONBA_PTR_SET_VALUE(dingTalkWebHookUrl_, dingTalkWebHookUrl) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // inputList Field Functions 
    bool hasInputList() const { return this->inputList_ != nullptr;};
    void deleteInputList() { this->inputList_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList> & inputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList>) };
    inline vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList> inputList() { DARABONBA_PTR_GET(inputList_, vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList>) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setInputList(const vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setInputList(vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


    // monitorConfig Field Functions 
    bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
    void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
    inline string monitorConfig() const { DARABONBA_PTR_GET_DEFAULT(monitorConfig_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setMonitorConfig(string monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };


    // monitorId Field Functions 
    bool hasMonitorId() const { return this->monitorId_ != nullptr;};
    void deleteMonitorId() { this->monitorId_ = nullptr;};
    inline string monitorId() const { DARABONBA_PTR_GET_DEFAULT(monitorId_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setMonitorId(string monitorId) { DARABONBA_PTR_SET_VALUE(monitorId_, monitorId) };


    // monitorName Field Functions 
    bool hasMonitorName() const { return this->monitorName_ != nullptr;};
    void deleteMonitorName() { this->monitorName_ = nullptr;};
    inline string monitorName() const { DARABONBA_PTR_GET_DEFAULT(monitorName_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setMonitorName(string monitorName) { DARABONBA_PTR_SET_VALUE(monitorName_, monitorName) };


    // outputTemplate Field Functions 
    bool hasOutputTemplate() const { return this->outputTemplate_ != nullptr;};
    void deleteOutputTemplate() { this->outputTemplate_ = nullptr;};
    inline string outputTemplate() const { DARABONBA_PTR_GET_DEFAULT(outputTemplate_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setOutputTemplate(string outputTemplate) { DARABONBA_PTR_SET_VALUE(outputTemplate_, outputTemplate) };


    // outputUrls Field Functions 
    bool hasOutputUrls() const { return this->outputUrls_ != nullptr;};
    void deleteOutputUrls() { this->outputUrls_ = nullptr;};
    inline const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls & outputUrls() const { DARABONBA_PTR_GET_CONST(outputUrls_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls) };
    inline Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls outputUrls() { DARABONBA_PTR_GET(outputUrls_, Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setOutputUrls(const Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls & outputUrls) { DARABONBA_PTR_SET_VALUE(outputUrls_, outputUrls) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setOutputUrls(Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls && outputUrls) { DARABONBA_PTR_SET_RVALUE(outputUrls_, outputUrls) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorList& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    // The audio source in the layout.
    std::shared_ptr<int32_t> audioFrom_ = nullptr;
    // The callback URL that sends monitoring alerts.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The URL of the DingTalk chatbot.
    std::shared_ptr<string> dingTalkWebHookUrl_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The list of monitored input streams.
    std::shared_ptr<vector<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListInputList>> inputList_ = nullptr;
    // The monitoring alert thresholds. The following fields are included:
    // 
    // *   fpsLowThres: the video frame rate alert threshold. The value is a floating-point number.
    // *   brHighThres: the audio/video bitrate alert threshold. The value is a floating-point number.
    // *   eofDurationThresSec: the interruption duration alert threshold. The value is a floating-point number.
    std::shared_ptr<string> monitorConfig_ = nullptr;
    // The ID of the monitoring session.
    std::shared_ptr<string> monitorId_ = nullptr;
    // The name of the monitoring session.
    std::shared_ptr<string> monitorName_ = nullptr;
    // The output resolution template. Valid values:
    // 
    // *   **lp_ld**: low definition
    // *   **lp_sd**: standard definition
    // *   **lp_hd**: high definition
    // *   **lp_ud**: ultra-high definition
    std::shared_ptr<string> outputTemplate_ = nullptr;
    // The output URLs.
    std::shared_ptr<Models::DescribeLiveStreamMonitorListResponseBodyLiveStreamMonitorListOutputUrls> outputUrls_ = nullptr;
    // The ID of the region. Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-beijing: China (Beijing)
    // *   ap-southeast-1: Singapore
    std::shared_ptr<string> region_ = nullptr;
    // The start time of live monitoring. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the monitoring session. Valid values:
    // 
    // *   1: Monitoring
    // *   0: Unmonitored
    std::shared_ptr<int32_t> status_ = nullptr;
    // The end time of live monitoring. The time is displayed in UTC.
    std::shared_ptr<string> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
