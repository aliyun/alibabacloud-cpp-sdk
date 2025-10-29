// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSINGLESUBPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSSINGLESUBPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams(const ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams(ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr
        && return this->streamType_ == nullptr && return this->userId_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksSingleSubParams& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
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
    // The ID of the user whose stream is relayed. In single-stream relay mode, you can relay only one stream in a request.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
