// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasks& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasks& obj) { 
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
    ListRtcMPUTaskDetailResponseBodyMPUTasks() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasks(const ListRtcMPUTaskDetailResponseBodyMPUTasks &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasks(ListRtcMPUTaskDetailResponseBodyMPUTasks &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasks() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasks& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasks &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasks& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->maxIdleTime_ != nullptr && this->mixMode_ != nullptr && this->multiStreamURL_ != nullptr && this->region_ != nullptr
        && this->seiParams_ != nullptr && this->singleSubParams_ != nullptr && this->streamURL_ != nullptr && this->taskId_ != nullptr && this->transcodeParams_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline string maxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string mixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURL Field Functions 
    bool hasMultiStreamURL() const { return this->multiStreamURL_ != nullptr;};
    void deleteMultiStreamURL() { this->multiStreamURL_ = nullptr;};
    inline const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL> & multiStreamURL() const { DARABONBA_PTR_GET_CONST(multiStreamURL_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL>) };
    inline vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL> multiStreamURL() { DARABONBA_PTR_GET(multiStreamURL_, vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL>) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setMultiStreamURL(const vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL> & multiStreamURL) { DARABONBA_PTR_SET_VALUE(multiStreamURL_, multiStreamURL) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setMultiStreamURL(vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL> && multiStreamURL) { DARABONBA_PTR_SET_RVALUE(multiStreamURL_, multiStreamURL) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // seiParams Field Functions 
    bool hasSeiParams() const { return this->seiParams_ != nullptr;};
    void deleteSeiParams() { this->seiParams_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams & seiParams() const { DARABONBA_PTR_GET_CONST(seiParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams seiParams() { DARABONBA_PTR_GET(seiParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setSeiParams(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams & seiParams) { DARABONBA_PTR_SET_VALUE(seiParams_, seiParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setSeiParams(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams && seiParams) { DARABONBA_PTR_SET_RVALUE(seiParams_, seiParams) };


    // singleSubParams Field Functions 
    bool hasSingleSubParams() const { return this->singleSubParams_ != nullptr;};
    void deleteSingleSubParams() { this->singleSubParams_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams & singleSubParams() const { DARABONBA_PTR_GET_CONST(singleSubParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams singleSubParams() { DARABONBA_PTR_GET(singleSubParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setSingleSubParams(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams & singleSubParams) { DARABONBA_PTR_SET_VALUE(singleSubParams_, singleSubParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setSingleSubParams(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams && singleSubParams) { DARABONBA_PTR_SET_RVALUE(singleSubParams_, singleSubParams) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParams Field Functions 
    bool hasTranscodeParams() const { return this->transcodeParams_ != nullptr;};
    void deleteTranscodeParams() { this->transcodeParams_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams & transcodeParams() const { DARABONBA_PTR_GET_CONST(transcodeParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams transcodeParams() { DARABONBA_PTR_GET(transcodeParams_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setTranscodeParams(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams & transcodeParams) { DARABONBA_PTR_SET_VALUE(transcodeParams_, transcodeParams) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasks& setTranscodeParams(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams && transcodeParams) { DARABONBA_PTR_SET_RVALUE(transcodeParams_, transcodeParams) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the channel.
    std::shared_ptr<string> channelId_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds.
    // 
    // >  If the task is idle for a period of time longer than the duration specified by the MaxIdleTime parameter, the task is automatically stopped. If the parameter is not specified, the task is stopped after the channel is closed.
    std::shared_ptr<string> maxIdleTime_ = nullptr;
    // The stream mixing mode. Valid values:
    // 
    // *   0: relays the original single stream without mixing streams. If the value of this parameter is 0, the TranscodeParams parameter is empty.
    // *   1 (default): mixes multiple streams into a single stream and relays the mixed stream.
    std::shared_ptr<string> mixMode_ = nullptr;
    // The multiple ingest URLs relayed.
    std::shared_ptr<vector<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksMultiStreamURL>> multiStreamURL_ = nullptr;
    // The region in which the streams are mixed. Valid values:
    // 
    // *   **CN-shanghai**
    // *   **AP-Singapore (default)**
    // *   **EMAA-Saudi**
    std::shared_ptr<string> region_ = nullptr;
    // The supplemental enhancement information (SEI) parameters.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSeiParams> seiParams_ = nullptr;
    // The parameters of the single-stream relay task.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams> singleSubParams_ = nullptr;
    // The ingest URL.
    std::shared_ptr<string> streamURL_ = nullptr;
    // The ID of the stream relay task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The mixed-stream relay parameters.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParams> transcodeParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
