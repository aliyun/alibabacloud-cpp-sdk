// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestMultiStreamURL.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestSeiParams.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestSingleSubParams.hpp>
#include <alibabacloud/models/UpdateLiveMPUTaskRequestTranscodeParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_TO_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_TO_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranscodeParams, transcodeParams_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_FROM_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_FROM_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParams, transcodeParams_);
    };
    UpdateLiveMPUTaskRequest() = default ;
    UpdateLiveMPUTaskRequest(const UpdateLiveMPUTaskRequest &) = default ;
    UpdateLiveMPUTaskRequest(UpdateLiveMPUTaskRequest &&) = default ;
    UpdateLiveMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequest() = default ;
    UpdateLiveMPUTaskRequest& operator=(const UpdateLiveMPUTaskRequest &) = default ;
    UpdateLiveMPUTaskRequest& operator=(UpdateLiveMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->mixMode_ == nullptr && return this->multiStreamURL_ == nullptr && return this->seiParams_ == nullptr && return this->singleSubParams_ == nullptr
        && return this->streamURL_ == nullptr && return this->taskId_ == nullptr && return this->transcodeParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateLiveMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateLiveMPUTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline UpdateLiveMPUTaskRequest& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURL Field Functions 
    bool hasMultiStreamURL() const { return this->multiStreamURL_ != nullptr;};
    void deleteMultiStreamURL() { this->multiStreamURL_ = nullptr;};
    inline const vector<UpdateLiveMPUTaskRequestMultiStreamURL> & multiStreamURL() const { DARABONBA_PTR_GET_CONST(multiStreamURL_, vector<UpdateLiveMPUTaskRequestMultiStreamURL>) };
    inline vector<UpdateLiveMPUTaskRequestMultiStreamURL> multiStreamURL() { DARABONBA_PTR_GET(multiStreamURL_, vector<UpdateLiveMPUTaskRequestMultiStreamURL>) };
    inline UpdateLiveMPUTaskRequest& setMultiStreamURL(const vector<UpdateLiveMPUTaskRequestMultiStreamURL> & multiStreamURL) { DARABONBA_PTR_SET_VALUE(multiStreamURL_, multiStreamURL) };
    inline UpdateLiveMPUTaskRequest& setMultiStreamURL(vector<UpdateLiveMPUTaskRequestMultiStreamURL> && multiStreamURL) { DARABONBA_PTR_SET_RVALUE(multiStreamURL_, multiStreamURL) };


    // seiParams Field Functions 
    bool hasSeiParams() const { return this->seiParams_ != nullptr;};
    void deleteSeiParams() { this->seiParams_ = nullptr;};
    inline const UpdateLiveMPUTaskRequestSeiParams & seiParams() const { DARABONBA_PTR_GET_CONST(seiParams_, UpdateLiveMPUTaskRequestSeiParams) };
    inline UpdateLiveMPUTaskRequestSeiParams seiParams() { DARABONBA_PTR_GET(seiParams_, UpdateLiveMPUTaskRequestSeiParams) };
    inline UpdateLiveMPUTaskRequest& setSeiParams(const UpdateLiveMPUTaskRequestSeiParams & seiParams) { DARABONBA_PTR_SET_VALUE(seiParams_, seiParams) };
    inline UpdateLiveMPUTaskRequest& setSeiParams(UpdateLiveMPUTaskRequestSeiParams && seiParams) { DARABONBA_PTR_SET_RVALUE(seiParams_, seiParams) };


    // singleSubParams Field Functions 
    bool hasSingleSubParams() const { return this->singleSubParams_ != nullptr;};
    void deleteSingleSubParams() { this->singleSubParams_ = nullptr;};
    inline const UpdateLiveMPUTaskRequestSingleSubParams & singleSubParams() const { DARABONBA_PTR_GET_CONST(singleSubParams_, UpdateLiveMPUTaskRequestSingleSubParams) };
    inline UpdateLiveMPUTaskRequestSingleSubParams singleSubParams() { DARABONBA_PTR_GET(singleSubParams_, UpdateLiveMPUTaskRequestSingleSubParams) };
    inline UpdateLiveMPUTaskRequest& setSingleSubParams(const UpdateLiveMPUTaskRequestSingleSubParams & singleSubParams) { DARABONBA_PTR_SET_VALUE(singleSubParams_, singleSubParams) };
    inline UpdateLiveMPUTaskRequest& setSingleSubParams(UpdateLiveMPUTaskRequestSingleSubParams && singleSubParams) { DARABONBA_PTR_SET_RVALUE(singleSubParams_, singleSubParams) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline UpdateLiveMPUTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateLiveMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParams Field Functions 
    bool hasTranscodeParams() const { return this->transcodeParams_ != nullptr;};
    void deleteTranscodeParams() { this->transcodeParams_ = nullptr;};
    inline const UpdateLiveMPUTaskRequestTranscodeParams & transcodeParams() const { DARABONBA_PTR_GET_CONST(transcodeParams_, UpdateLiveMPUTaskRequestTranscodeParams) };
    inline UpdateLiveMPUTaskRequestTranscodeParams transcodeParams() { DARABONBA_PTR_GET(transcodeParams_, UpdateLiveMPUTaskRequestTranscodeParams) };
    inline UpdateLiveMPUTaskRequest& setTranscodeParams(const UpdateLiveMPUTaskRequestTranscodeParams & transcodeParams) { DARABONBA_PTR_SET_VALUE(transcodeParams_, transcodeParams) };
    inline UpdateLiveMPUTaskRequest& setTranscodeParams(UpdateLiveMPUTaskRequestTranscodeParams && transcodeParams) { DARABONBA_PTR_SET_RVALUE(transcodeParams_, transcodeParams) };


  protected:
    // The application ID. You can specify only one application ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The channel ID. You can specify only one channel ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // The stream mixing mode. Valid values:
    // 
    // *   **0**: the single-stream relay mode. In this mode, the service only relays the original single stream, but does not transcode mixed streams. You do not need to set parameters for mixed-stream transcoding.
    // *   **1** (default): the mixed-stream relay mode.
    std::shared_ptr<string> mixMode_ = nullptr;
    // The multiple ingest URLs to relay. This parameter allows you to specify multiple ingest URLs.
    std::shared_ptr<vector<UpdateLiveMPUTaskRequestMultiStreamURL>> multiStreamURL_ = nullptr;
    // The supplemental enhancement information (SEI) parameters.
    std::shared_ptr<UpdateLiveMPUTaskRequestSeiParams> seiParams_ = nullptr;
    // The single-stream relay parameters. These parameters are required if you set MixMode to 0.
    std::shared_ptr<UpdateLiveMPUTaskRequestSingleSubParams> singleSubParams_ = nullptr;
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
    // The mixed-stream relay parameters. These parameters are required if you set MixMode to 1.
    std::shared_ptr<UpdateLiveMPUTaskRequestTranscodeParams> transcodeParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
