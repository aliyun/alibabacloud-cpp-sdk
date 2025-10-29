// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTRECORDPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTRECORDPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestRecordParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestRecordParams& obj) { 
      DARABONBA_PTR_TO_JSON(MaxFileDuration, maxFileDuration_);
      DARABONBA_PTR_TO_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestRecordParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxFileDuration, maxFileDuration_);
      DARABONBA_PTR_FROM_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
    };
    StartRtcCloudRecordingRequestRecordParams() = default ;
    StartRtcCloudRecordingRequestRecordParams(const StartRtcCloudRecordingRequestRecordParams &) = default ;
    StartRtcCloudRecordingRequestRecordParams(StartRtcCloudRecordingRequestRecordParams &&) = default ;
    StartRtcCloudRecordingRequestRecordParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestRecordParams() = default ;
    StartRtcCloudRecordingRequestRecordParams& operator=(const StartRtcCloudRecordingRequestRecordParams &) = default ;
    StartRtcCloudRecordingRequestRecordParams& operator=(StartRtcCloudRecordingRequestRecordParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxFileDuration_ == nullptr
        && return this->recordMode_ == nullptr && return this->streamType_ == nullptr; };
    // maxFileDuration Field Functions 
    bool hasMaxFileDuration() const { return this->maxFileDuration_ != nullptr;};
    void deleteMaxFileDuration() { this->maxFileDuration_ = nullptr;};
    inline int64_t maxFileDuration() const { DARABONBA_PTR_GET_DEFAULT(maxFileDuration_, 0L) };
    inline StartRtcCloudRecordingRequestRecordParams& setMaxFileDuration(int64_t maxFileDuration) { DARABONBA_PTR_SET_VALUE(maxFileDuration_, maxFileDuration) };


    // recordMode Field Functions 
    bool hasRecordMode() const { return this->recordMode_ != nullptr;};
    void deleteRecordMode() { this->recordMode_ = nullptr;};
    inline int32_t recordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, 0) };
    inline StartRtcCloudRecordingRequestRecordParams& setRecordMode(int32_t recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartRtcCloudRecordingRequestRecordParams& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


  protected:
    std::shared_ptr<int64_t> maxFileDuration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> recordMode_ = nullptr;
    std::shared_ptr<int32_t> streamType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
