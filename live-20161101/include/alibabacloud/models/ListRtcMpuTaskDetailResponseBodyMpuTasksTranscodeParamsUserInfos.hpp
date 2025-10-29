// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSUSERINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSUSERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->sourceType_ == nullptr && return this->streamType_ == nullptr && return this->userId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsUserInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the channel where the user is.
    std::shared_ptr<string> channelId_ = nullptr;
    // The source of the video. This parameter is valid only if you set StreamType to 2. Valid values:
    // 
    // *   camera (default): captures the video by using a camera.
    // *   shareScreen: captures the content displayed on a screen.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The type of the stream that is relayed. Valid values:
    // 
    // *   0 (default): the original stream.
    // *   1: the audio-only stream.
    // *   2: the video-only stream.
    std::shared_ptr<string> streamType_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
