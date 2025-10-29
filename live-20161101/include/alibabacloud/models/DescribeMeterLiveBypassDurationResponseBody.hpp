// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMeterLiveBypassDurationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMeterLiveBypassDurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterLiveBypassDurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SingleAudioSummaryDuration, singleAudioSummaryDuration_);
      DARABONBA_PTR_TO_JSON(SingleVideoSummaryDuration, singleVideoSummaryDuration_);
      DARABONBA_PTR_TO_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_TO_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterLiveBypassDurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SingleAudioSummaryDuration, singleAudioSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(SingleVideoSummaryDuration, singleVideoSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    DescribeMeterLiveBypassDurationResponseBody() = default ;
    DescribeMeterLiveBypassDurationResponseBody(const DescribeMeterLiveBypassDurationResponseBody &) = default ;
    DescribeMeterLiveBypassDurationResponseBody(DescribeMeterLiveBypassDurationResponseBody &&) = default ;
    DescribeMeterLiveBypassDurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterLiveBypassDurationResponseBody() = default ;
    DescribeMeterLiveBypassDurationResponseBody& operator=(const DescribeMeterLiveBypassDurationResponseBody &) = default ;
    DescribeMeterLiveBypassDurationResponseBody& operator=(DescribeMeterLiveBypassDurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioSummaryDuration_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr && return this->singleAudioSummaryDuration_ == nullptr && return this->singleVideoSummaryDuration_ == nullptr && return this->totalSummaryDuration_ == nullptr
        && return this->v1080SummaryDuration_ == nullptr && return this->v480SummaryDuration_ == nullptr && return this->v720SummaryDuration_ == nullptr; };
    // audioSummaryDuration Field Functions 
    bool hasAudioSummaryDuration() const { return this->audioSummaryDuration_ != nullptr;};
    void deleteAudioSummaryDuration() { this->audioSummaryDuration_ = nullptr;};
    inline int64_t audioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(audioSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setAudioSummaryDuration(int64_t audioSummaryDuration) { DARABONBA_PTR_SET_VALUE(audioSummaryDuration_, audioSummaryDuration) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterLiveBypassDurationResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterLiveBypassDurationResponseBodyData>) };
    inline vector<DescribeMeterLiveBypassDurationResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeMeterLiveBypassDurationResponseBodyData>) };
    inline DescribeMeterLiveBypassDurationResponseBody& setData(const vector<DescribeMeterLiveBypassDurationResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterLiveBypassDurationResponseBody& setData(vector<DescribeMeterLiveBypassDurationResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterLiveBypassDurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // singleAudioSummaryDuration Field Functions 
    bool hasSingleAudioSummaryDuration() const { return this->singleAudioSummaryDuration_ != nullptr;};
    void deleteSingleAudioSummaryDuration() { this->singleAudioSummaryDuration_ = nullptr;};
    inline int64_t singleAudioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(singleAudioSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setSingleAudioSummaryDuration(int64_t singleAudioSummaryDuration) { DARABONBA_PTR_SET_VALUE(singleAudioSummaryDuration_, singleAudioSummaryDuration) };


    // singleVideoSummaryDuration Field Functions 
    bool hasSingleVideoSummaryDuration() const { return this->singleVideoSummaryDuration_ != nullptr;};
    void deleteSingleVideoSummaryDuration() { this->singleVideoSummaryDuration_ = nullptr;};
    inline int64_t singleVideoSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(singleVideoSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setSingleVideoSummaryDuration(int64_t singleVideoSummaryDuration) { DARABONBA_PTR_SET_VALUE(singleVideoSummaryDuration_, singleVideoSummaryDuration) };


    // totalSummaryDuration Field Functions 
    bool hasTotalSummaryDuration() const { return this->totalSummaryDuration_ != nullptr;};
    void deleteTotalSummaryDuration() { this->totalSummaryDuration_ = nullptr;};
    inline int64_t totalSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(totalSummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setTotalSummaryDuration(int64_t totalSummaryDuration) { DARABONBA_PTR_SET_VALUE(totalSummaryDuration_, totalSummaryDuration) };


    // v1080SummaryDuration Field Functions 
    bool hasV1080SummaryDuration() const { return this->v1080SummaryDuration_ != nullptr;};
    void deleteV1080SummaryDuration() { this->v1080SummaryDuration_ = nullptr;};
    inline int64_t v1080SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v1080SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV1080SummaryDuration(int64_t v1080SummaryDuration) { DARABONBA_PTR_SET_VALUE(v1080SummaryDuration_, v1080SummaryDuration) };


    // v480SummaryDuration Field Functions 
    bool hasV480SummaryDuration() const { return this->v480SummaryDuration_ != nullptr;};
    void deleteV480SummaryDuration() { this->v480SummaryDuration_ = nullptr;};
    inline int64_t v480SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v480SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV480SummaryDuration(int64_t v480SummaryDuration) { DARABONBA_PTR_SET_VALUE(v480SummaryDuration_, v480SummaryDuration) };


    // v720SummaryDuration Field Functions 
    bool hasV720SummaryDuration() const { return this->v720SummaryDuration_ != nullptr;};
    void deleteV720SummaryDuration() { this->v720SummaryDuration_ = nullptr;};
    inline int64_t v720SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v720SummaryDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBody& setV720SummaryDuration(int64_t v720SummaryDuration) { DARABONBA_PTR_SET_VALUE(v720SummaryDuration_, v720SummaryDuration) };


  protected:
    // The total audio-only duration. Audio-only is a basic specification. Unit: minutes.
    std::shared_ptr<int64_t> audioSummaryDuration_ = nullptr;
    // The usage statistics for each time granularity.
    std::shared_ptr<vector<DescribeMeterLiveBypassDurationResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total single-stream relay duration for audio. Unit: minutes.
    std::shared_ptr<int64_t> singleAudioSummaryDuration_ = nullptr;
    // The total single-stream relay duration for video. Unit: minutes.
    std::shared_ptr<int64_t> singleVideoSummaryDuration_ = nullptr;
    // The total duration. Unit: minutes.
    std::shared_ptr<int64_t> totalSummaryDuration_ = nullptr;
    // The total Full HD duration. The video resolution is 1920 × 1080 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v1080SummaryDuration_ = nullptr;
    // The total standard definition (SD) duration. The video resolution is 640 × 480 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v480SummaryDuration_ = nullptr;
    // The total high definition (HD) duration. The video resolution is 1280 × 720 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v720SummaryDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
