// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODYDURATIONDATAPERINTERVALDURATIONMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODYDURATIONDATAPERINTERVALDURATIONMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& obj) { 
      DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_TO_JSON(ContentDuration, contentDuration_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_TO_JSON(V360Duration, v360Duration_);
      DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_FROM_JSON(ContentDuration, contentDuration_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_FROM_JSON(V360Duration, v360Duration_);
      DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
    };
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule(const DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule &) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule(DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule &&) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& operator=(const DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule &) = default ;
    DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& operator=(DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioDuration_ == nullptr
        && return this->contentDuration_ == nullptr && return this->timeStamp_ == nullptr && return this->totalDuration_ == nullptr && return this->v1080Duration_ == nullptr && return this->v360Duration_ == nullptr
        && return this->v720Duration_ == nullptr; };
    // audioDuration Field Functions 
    bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
    void deleteAudioDuration() { this->audioDuration_ = nullptr;};
    inline int64_t audioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setAudioDuration(int64_t audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


    // contentDuration Field Functions 
    bool hasContentDuration() const { return this->contentDuration_ != nullptr;};
    void deleteContentDuration() { this->contentDuration_ = nullptr;};
    inline int64_t contentDuration() const { DARABONBA_PTR_GET_DEFAULT(contentDuration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setContentDuration(int64_t contentDuration) { DARABONBA_PTR_SET_VALUE(contentDuration_, contentDuration) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // v1080Duration Field Functions 
    bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
    void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
    inline int64_t v1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setV1080Duration(int64_t v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


    // v360Duration Field Functions 
    bool hasV360Duration() const { return this->v360Duration_ != nullptr;};
    void deleteV360Duration() { this->v360Duration_ = nullptr;};
    inline int64_t v360Duration() const { DARABONBA_PTR_GET_DEFAULT(v360Duration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setV360Duration(int64_t v360Duration) { DARABONBA_PTR_SET_VALUE(v360Duration_, v360Duration) };


    // v720Duration Field Functions 
    bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
    void deleteV720Duration() { this->v720Duration_ = nullptr;};
    inline int64_t v720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0L) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule& setV720Duration(int64_t v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


  protected:
    std::shared_ptr<int64_t> audioDuration_ = nullptr;
    std::shared_ptr<int64_t> contentDuration_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<int64_t> totalDuration_ = nullptr;
    std::shared_ptr<int64_t> v1080Duration_ = nullptr;
    std::shared_ptr<int64_t> v360Duration_ = nullptr;
    std::shared_ptr<int64_t> v720Duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
