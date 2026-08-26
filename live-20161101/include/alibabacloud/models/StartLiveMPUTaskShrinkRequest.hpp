// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(MultiStreamURL, multiStreamURLShrink_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SeiParams, seiParamsShrink_);
      DARABONBA_PTR_TO_JSON(SingleSubParams, singleSubParamsShrink_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranscodeParams, transcodeParamsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(MultiStreamURL, multiStreamURLShrink_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SeiParams, seiParamsShrink_);
      DARABONBA_PTR_FROM_JSON(SingleSubParams, singleSubParamsShrink_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParams, transcodeParamsShrink_);
    };
    StartLiveMPUTaskShrinkRequest() = default ;
    StartLiveMPUTaskShrinkRequest(const StartLiveMPUTaskShrinkRequest &) = default ;
    StartLiveMPUTaskShrinkRequest(StartLiveMPUTaskShrinkRequest &&) = default ;
    StartLiveMPUTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskShrinkRequest() = default ;
    StartLiveMPUTaskShrinkRequest& operator=(const StartLiveMPUTaskShrinkRequest &) = default ;
    StartLiveMPUTaskShrinkRequest& operator=(StartLiveMPUTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->maxIdleTime_ == nullptr && this->mixMode_ == nullptr && this->multiStreamURLShrink_ == nullptr && this->region_ == nullptr
        && this->seiParamsShrink_ == nullptr && this->singleSubParamsShrink_ == nullptr && this->streamURL_ == nullptr && this->taskId_ == nullptr && this->transcodeParamsShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartLiveMPUTaskShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartLiveMPUTaskShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline string getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
    inline StartLiveMPUTaskShrinkRequest& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string getMixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline StartLiveMPUTaskShrinkRequest& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURLShrink Field Functions 
    bool hasMultiStreamURLShrink() const { return this->multiStreamURLShrink_ != nullptr;};
    void deleteMultiStreamURLShrink() { this->multiStreamURLShrink_ = nullptr;};
    inline string getMultiStreamURLShrink() const { DARABONBA_PTR_GET_DEFAULT(multiStreamURLShrink_, "") };
    inline StartLiveMPUTaskShrinkRequest& setMultiStreamURLShrink(string multiStreamURLShrink) { DARABONBA_PTR_SET_VALUE(multiStreamURLShrink_, multiStreamURLShrink) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartLiveMPUTaskShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // seiParamsShrink Field Functions 
    bool hasSeiParamsShrink() const { return this->seiParamsShrink_ != nullptr;};
    void deleteSeiParamsShrink() { this->seiParamsShrink_ = nullptr;};
    inline string getSeiParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(seiParamsShrink_, "") };
    inline StartLiveMPUTaskShrinkRequest& setSeiParamsShrink(string seiParamsShrink) { DARABONBA_PTR_SET_VALUE(seiParamsShrink_, seiParamsShrink) };


    // singleSubParamsShrink Field Functions 
    bool hasSingleSubParamsShrink() const { return this->singleSubParamsShrink_ != nullptr;};
    void deleteSingleSubParamsShrink() { this->singleSubParamsShrink_ = nullptr;};
    inline string getSingleSubParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(singleSubParamsShrink_, "") };
    inline StartLiveMPUTaskShrinkRequest& setSingleSubParamsShrink(string singleSubParamsShrink) { DARABONBA_PTR_SET_VALUE(singleSubParamsShrink_, singleSubParamsShrink) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string getStreamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline StartLiveMPUTaskShrinkRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartLiveMPUTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParamsShrink Field Functions 
    bool hasTranscodeParamsShrink() const { return this->transcodeParamsShrink_ != nullptr;};
    void deleteTranscodeParamsShrink() { this->transcodeParamsShrink_ = nullptr;};
    inline string getTranscodeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(transcodeParamsShrink_, "") };
    inline StartLiveMPUTaskShrinkRequest& setTranscodeParamsShrink(string transcodeParamsShrink) { DARABONBA_PTR_SET_VALUE(transcodeParamsShrink_, transcodeParamsShrink) };


  protected:
    // The application ID. Only one ID is supported. It can contain uppercase letters, lowercase letters, digits, underscores (_), and hyphens (-). The maximum length is 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The channel ID. Only one ID is supported. It can contain uppercase letters, lowercase letters, digits, underscores (_), and hyphens (-). The maximum length is 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The idle timeout period. Unit: seconds. The value must be in the range of [10, 86400].
    // 
    // > If you set this parameter, the task is automatically stopped when it has been idle for a period longer than MaxIdleTime. If you do not set this parameter, the task is stopped immediately after the channel is closed.
    shared_ptr<string> maxIdleTime_ {};
    // The stream mixing mode. Valid values:
    // 
    // - **0**: Single-stream ingest. The original single stream is ingested without stream mixing or transcoding. You do not need to configure stream mixing and transcoding parameters.
    // 
    // - **1** (default): Stream mixing and transcoding.
    // 
    // This parameter is required.
    shared_ptr<string> mixMode_ {};
    // The parameters for ingesting to multiple URLs. You can specify multiple live ingest URLs.
    // 
    // > When you set the ingest URL for a task, you must configure either the StreamURL parameter or the MultiStreamURL parameter, but not both.
    shared_ptr<string> multiStreamURLShrink_ {};
    // The region where the stream mixing service is located. Valid values:
    // 
    // - **CN-Shanghai<props="china">(default)**: Shanghai.
    // 
    // - **AP-Singapore<props="intl">(default)**: Singapore.
    // 
    // - **EMAA-Saudi**: Saudi Arabia.
    shared_ptr<string> region_ {};
    // The SEI configuration parameters.
    shared_ptr<string> seiParamsShrink_ {};
    // The parameters for single-stream ingest. This parameter is required when MixMode is set to 0. Do not set this parameter for stream mixing and transcoding.
    shared_ptr<string> singleSubParamsShrink_ {};
    // The live ingest URL. Only the RTMP protocol is supported. Only one URL is supported. The maximum length is 2048 characters. For information about how to generate the URL, see [Ingest URLs and playback URLs](https://help.aliyun.com/document_detail/199339.html).
    // 
    // > - For domain names with hotlink protection enabled, the ingest URL must include an access token.
    // 
    // - Do not use the same StreamURL in different tasks at the same time.
    // 
    // - Do not use the same StreamURL within 10 seconds after a task stops.
    shared_ptr<string> streamURL_ {};
    // The task ID. Only one ID is supported. It can contain uppercase letters, lowercase letters, digits, underscores (_), and hyphens (-). The maximum length is 55 characters. This ID is the unique identifier for the bypass ingest task.
    // If a task with the same ID still exists and has not been cleared when you start a new task, \\`InvalidParam\\` is returned.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The parameters for stream mixing and transcoding. This parameter is required when MixMode is set to 1. Do not set this parameter for single-stream ingest.
    shared_ptr<string> transcodeParamsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
