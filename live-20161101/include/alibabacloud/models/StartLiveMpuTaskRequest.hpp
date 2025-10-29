// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartLiveMPUTaskRequestMultiStreamURL.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestSeiParams.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestSingleSubParams.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_TO_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranscodeParams, transcodeParams_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_FROM_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParams, transcodeParams_);
    };
    StartLiveMPUTaskRequest() = default ;
    StartLiveMPUTaskRequest(const StartLiveMPUTaskRequest &) = default ;
    StartLiveMPUTaskRequest(StartLiveMPUTaskRequest &&) = default ;
    StartLiveMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequest() = default ;
    StartLiveMPUTaskRequest& operator=(const StartLiveMPUTaskRequest &) = default ;
    StartLiveMPUTaskRequest& operator=(StartLiveMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->maxIdleTime_ == nullptr && return this->mixMode_ == nullptr && return this->multiStreamURL_ == nullptr && return this->region_ == nullptr
        && return this->seiParams_ == nullptr && return this->singleSubParams_ == nullptr && return this->streamURL_ == nullptr && return this->taskId_ == nullptr && return this->transcodeParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartLiveMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartLiveMPUTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline string maxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
    inline StartLiveMPUTaskRequest& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline StartLiveMPUTaskRequest& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURL Field Functions 
    bool hasMultiStreamURL() const { return this->multiStreamURL_ != nullptr;};
    void deleteMultiStreamURL() { this->multiStreamURL_ = nullptr;};
    inline const vector<StartLiveMPUTaskRequestMultiStreamURL> & multiStreamURL() const { DARABONBA_PTR_GET_CONST(multiStreamURL_, vector<StartLiveMPUTaskRequestMultiStreamURL>) };
    inline vector<StartLiveMPUTaskRequestMultiStreamURL> multiStreamURL() { DARABONBA_PTR_GET(multiStreamURL_, vector<StartLiveMPUTaskRequestMultiStreamURL>) };
    inline StartLiveMPUTaskRequest& setMultiStreamURL(const vector<StartLiveMPUTaskRequestMultiStreamURL> & multiStreamURL) { DARABONBA_PTR_SET_VALUE(multiStreamURL_, multiStreamURL) };
    inline StartLiveMPUTaskRequest& setMultiStreamURL(vector<StartLiveMPUTaskRequestMultiStreamURL> && multiStreamURL) { DARABONBA_PTR_SET_RVALUE(multiStreamURL_, multiStreamURL) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartLiveMPUTaskRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // seiParams Field Functions 
    bool hasSeiParams() const { return this->seiParams_ != nullptr;};
    void deleteSeiParams() { this->seiParams_ = nullptr;};
    inline const StartLiveMPUTaskRequestSeiParams & seiParams() const { DARABONBA_PTR_GET_CONST(seiParams_, StartLiveMPUTaskRequestSeiParams) };
    inline StartLiveMPUTaskRequestSeiParams seiParams() { DARABONBA_PTR_GET(seiParams_, StartLiveMPUTaskRequestSeiParams) };
    inline StartLiveMPUTaskRequest& setSeiParams(const StartLiveMPUTaskRequestSeiParams & seiParams) { DARABONBA_PTR_SET_VALUE(seiParams_, seiParams) };
    inline StartLiveMPUTaskRequest& setSeiParams(StartLiveMPUTaskRequestSeiParams && seiParams) { DARABONBA_PTR_SET_RVALUE(seiParams_, seiParams) };


    // singleSubParams Field Functions 
    bool hasSingleSubParams() const { return this->singleSubParams_ != nullptr;};
    void deleteSingleSubParams() { this->singleSubParams_ = nullptr;};
    inline const StartLiveMPUTaskRequestSingleSubParams & singleSubParams() const { DARABONBA_PTR_GET_CONST(singleSubParams_, StartLiveMPUTaskRequestSingleSubParams) };
    inline StartLiveMPUTaskRequestSingleSubParams singleSubParams() { DARABONBA_PTR_GET(singleSubParams_, StartLiveMPUTaskRequestSingleSubParams) };
    inline StartLiveMPUTaskRequest& setSingleSubParams(const StartLiveMPUTaskRequestSingleSubParams & singleSubParams) { DARABONBA_PTR_SET_VALUE(singleSubParams_, singleSubParams) };
    inline StartLiveMPUTaskRequest& setSingleSubParams(StartLiveMPUTaskRequestSingleSubParams && singleSubParams) { DARABONBA_PTR_SET_RVALUE(singleSubParams_, singleSubParams) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline StartLiveMPUTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartLiveMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParams Field Functions 
    bool hasTranscodeParams() const { return this->transcodeParams_ != nullptr;};
    void deleteTranscodeParams() { this->transcodeParams_ = nullptr;};
    inline const StartLiveMPUTaskRequestTranscodeParams & transcodeParams() const { DARABONBA_PTR_GET_CONST(transcodeParams_, StartLiveMPUTaskRequestTranscodeParams) };
    inline StartLiveMPUTaskRequestTranscodeParams transcodeParams() { DARABONBA_PTR_GET(transcodeParams_, StartLiveMPUTaskRequestTranscodeParams) };
    inline StartLiveMPUTaskRequest& setTranscodeParams(const StartLiveMPUTaskRequestTranscodeParams & transcodeParams) { DARABONBA_PTR_SET_VALUE(transcodeParams_, transcodeParams) };
    inline StartLiveMPUTaskRequest& setTranscodeParams(StartLiveMPUTaskRequestTranscodeParams && transcodeParams) { DARABONBA_PTR_SET_RVALUE(transcodeParams_, transcodeParams) };


  protected:
    // The application ID. You can specify only one application ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The channel ID. You can specify only one channel ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds. Valid values: [10,86400].
    // 
    // >  If the task is idle for a period of time longer than the duration specified by the MaxIdleTime parameter, the task is automatically stopped. If the parameter is not specified, the task is stopped after the channel is closed.
    std::shared_ptr<string> maxIdleTime_ = nullptr;
    // The stream mixing mode. Valid values:
    // 
    // *   **0**: the single-stream relay mode. In this mode, the service only relays the original single stream, but does not transcode mixed streams. You do not need to set parameters for mixed-stream transcoding.
    // *   **1** (default): the mixed-stream relay mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> mixMode_ = nullptr;
    // The multiple ingest URLs to relay. This parameter allows you to specify multiple ingest URLs.
    // 
    // >  The StreamURL and MultiStreamURL parameters are mutually exclusive. You must specify one of the two parameters.
    std::shared_ptr<vector<StartLiveMPUTaskRequestMultiStreamURL>> multiStreamURL_ = nullptr;
    // The region in which the streams are mixed. Valid values:
    // 
    // *   **CN-Shanghai**
    // *   **AP-Singapore** (default)
    // *   **EMAA-Saudi**
    std::shared_ptr<string> region_ = nullptr;
    // The supplemental enhancement information (SEI) parameters.
    std::shared_ptr<StartLiveMPUTaskRequestSeiParams> seiParams_ = nullptr;
    // The single-stream relay parameters. These parameters are required if you set MixMode to 0. Leave these parameters empty in the mixed-stream relay mode.
    std::shared_ptr<StartLiveMPUTaskRequestSingleSubParams> singleSubParams_ = nullptr;
    // The ingest URL. You can specify only one ingest URL in the Real-Time Messaging Protocol (RTMP) format. The URL can be up to 2,048 characters in length. For information about the generation rules of ingest URLs, see [Ingest and streaming URLs](https://help.aliyun.com/document_detail/199339.html).
    // 
    // > 
    // 
    // *   If the ingest URL is under a domain name for which hotlink protection is enabled, you must include an access token in the URL.
    // *   You cannot use the same ingest URL in different tasks.
    // *   You cannot use the same ingest URL within 10 seconds after a task is stopped.
    std::shared_ptr<string> streamURL_ = nullptr;
    // The task ID. You can specify only one task ID. The ID can be up to 55 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The ID must be unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // The mixed-stream relay parameters. These parameters are required if you set MixMode to 1. Leave these parameters empty if you use the single-stream relay mode.
    std::shared_ptr<StartLiveMPUTaskRequestTranscodeParams> transcodeParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
