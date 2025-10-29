// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMSSUBSCRIBEUSERIDLIST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSUBSCRIBEPARAMSSUBSCRIBEUSERIDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& obj) { 
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList() = default ;
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList(const StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList &) = default ;
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList(StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList &&) = default ;
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList() = default ;
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& operator=(const StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList &) = default ;
    StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& operator=(StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceType_ == nullptr
        && return this->streamType_ == nullptr && return this->userId_ == nullptr; };
    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline int32_t sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
    inline StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartRtcCloudRecordingRequestSubscribeParamsSubscribeUserIdList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> sourceType_ = nullptr;
    std::shared_ptr<int32_t> streamType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
