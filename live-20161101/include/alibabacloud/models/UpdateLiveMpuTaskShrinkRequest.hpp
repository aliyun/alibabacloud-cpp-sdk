// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(MultiStreamURL, multiStreamURLShrink_);
      DARABONBA_PTR_TO_JSON(SeiParams, seiParamsShrink_);
      DARABONBA_PTR_TO_JSON(SingleSubParams, singleSubParamsShrink_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranscodeParams, transcodeParamsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(MultiStreamURL, multiStreamURLShrink_);
      DARABONBA_PTR_FROM_JSON(SeiParams, seiParamsShrink_);
      DARABONBA_PTR_FROM_JSON(SingleSubParams, singleSubParamsShrink_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParams, transcodeParamsShrink_);
    };
    UpdateLiveMPUTaskShrinkRequest() = default ;
    UpdateLiveMPUTaskShrinkRequest(const UpdateLiveMPUTaskShrinkRequest &) = default ;
    UpdateLiveMPUTaskShrinkRequest(UpdateLiveMPUTaskShrinkRequest &&) = default ;
    UpdateLiveMPUTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskShrinkRequest() = default ;
    UpdateLiveMPUTaskShrinkRequest& operator=(const UpdateLiveMPUTaskShrinkRequest &) = default ;
    UpdateLiveMPUTaskShrinkRequest& operator=(UpdateLiveMPUTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->mixMode_ == nullptr && this->multiStreamURLShrink_ == nullptr && this->seiParamsShrink_ == nullptr && this->singleSubParamsShrink_ == nullptr
        && this->streamURL_ == nullptr && this->taskId_ == nullptr && this->transcodeParamsShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string getMixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURLShrink Field Functions 
    bool hasMultiStreamURLShrink() const { return this->multiStreamURLShrink_ != nullptr;};
    void deleteMultiStreamURLShrink() { this->multiStreamURLShrink_ = nullptr;};
    inline string getMultiStreamURLShrink() const { DARABONBA_PTR_GET_DEFAULT(multiStreamURLShrink_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setMultiStreamURLShrink(string multiStreamURLShrink) { DARABONBA_PTR_SET_VALUE(multiStreamURLShrink_, multiStreamURLShrink) };


    // seiParamsShrink Field Functions 
    bool hasSeiParamsShrink() const { return this->seiParamsShrink_ != nullptr;};
    void deleteSeiParamsShrink() { this->seiParamsShrink_ = nullptr;};
    inline string getSeiParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(seiParamsShrink_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setSeiParamsShrink(string seiParamsShrink) { DARABONBA_PTR_SET_VALUE(seiParamsShrink_, seiParamsShrink) };


    // singleSubParamsShrink Field Functions 
    bool hasSingleSubParamsShrink() const { return this->singleSubParamsShrink_ != nullptr;};
    void deleteSingleSubParamsShrink() { this->singleSubParamsShrink_ = nullptr;};
    inline string getSingleSubParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(singleSubParamsShrink_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setSingleSubParamsShrink(string singleSubParamsShrink) { DARABONBA_PTR_SET_VALUE(singleSubParamsShrink_, singleSubParamsShrink) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string getStreamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParamsShrink Field Functions 
    bool hasTranscodeParamsShrink() const { return this->transcodeParamsShrink_ != nullptr;};
    void deleteTranscodeParamsShrink() { this->transcodeParamsShrink_ = nullptr;};
    inline string getTranscodeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(transcodeParamsShrink_, "") };
    inline UpdateLiveMPUTaskShrinkRequest& setTranscodeParamsShrink(string transcodeParamsShrink) { DARABONBA_PTR_SET_VALUE(transcodeParamsShrink_, transcodeParamsShrink) };


  protected:
    // The application ID. You can specify only one application ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The channel ID. You can specify only one channel ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The stream mixing mode. Valid values:
    // 
    // *   **0**: the single-stream relay mode. In this mode, the service only relays the original single stream, but does not transcode mixed streams. You do not need to set parameters for mixed-stream transcoding.
    // *   **1** (default): the mixed-stream relay mode.
    shared_ptr<string> mixMode_ {};
    // The multiple ingest URLs to relay. This parameter allows you to specify multiple ingest URLs.
    shared_ptr<string> multiStreamURLShrink_ {};
    // The supplemental enhancement information (SEI) parameters.
    shared_ptr<string> seiParamsShrink_ {};
    // The single-stream relay parameters. These parameters are required if you set MixMode to 0.
    shared_ptr<string> singleSubParamsShrink_ {};
    // The ingest URL. You can specify only one ingest URL in the Real-Time Messaging Protocol (RTMP) format. The URL can be up to 2,048 characters in length. For information about the generation rules of ingest URLs, see [Ingest and streaming URLs](https://help.aliyun.com/document_detail/199339.html).
    // 
    // > 
    // 
    // *   If the ingest URL is under a domain name for which hotlink protection is enabled, you must include an access token in the URL.
    // *   You cannot use the same ingest URL in different tasks.
    // *   You cannot use the same ingest URL within 10 seconds after a task is stopped.
    shared_ptr<string> streamURL_ {};
    // The task ID. You can specify only one task ID. The ID can be up to 55 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The ID must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The mixed-stream relay parameters. These parameters are required if you set MixMode to 1.
    shared_ptr<string> transcodeParamsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
