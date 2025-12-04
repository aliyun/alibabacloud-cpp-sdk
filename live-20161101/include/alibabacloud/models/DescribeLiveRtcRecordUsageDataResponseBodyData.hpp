// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRtcRecordUsageDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRtcRecordUsageDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_TO_JSON(V480Duration, v480Duration_);
      DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRtcRecordUsageDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_FROM_JSON(V480Duration, v480Duration_);
      DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
    };
    DescribeLiveRtcRecordUsageDataResponseBodyData() = default ;
    DescribeLiveRtcRecordUsageDataResponseBodyData(const DescribeLiveRtcRecordUsageDataResponseBodyData &) = default ;
    DescribeLiveRtcRecordUsageDataResponseBodyData(DescribeLiveRtcRecordUsageDataResponseBodyData &&) = default ;
    DescribeLiveRtcRecordUsageDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRtcRecordUsageDataResponseBodyData() = default ;
    DescribeLiveRtcRecordUsageDataResponseBodyData& operator=(const DescribeLiveRtcRecordUsageDataResponseBodyData &) = default ;
    DescribeLiveRtcRecordUsageDataResponseBodyData& operator=(DescribeLiveRtcRecordUsageDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioDuration_ == nullptr
        && return this->timestamp_ == nullptr && return this->totalDuration_ == nullptr && return this->v1080Duration_ == nullptr && return this->v480Duration_ == nullptr && return this->v720Duration_ == nullptr; };
    // audioDuration Field Functions 
    bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
    void deleteAudioDuration() { this->audioDuration_ = nullptr;};
    inline double audioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setAudioDuration(double audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline double totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setTotalDuration(double totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // v1080Duration Field Functions 
    bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
    void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
    inline double v1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setV1080Duration(double v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


    // v480Duration Field Functions 
    bool hasV480Duration() const { return this->v480Duration_ != nullptr;};
    void deleteV480Duration() { this->v480Duration_ = nullptr;};
    inline double v480Duration() const { DARABONBA_PTR_GET_DEFAULT(v480Duration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setV480Duration(double v480Duration) { DARABONBA_PTR_SET_VALUE(v480Duration_, v480Duration) };


    // v720Duration Field Functions 
    bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
    void deleteV720Duration() { this->v720Duration_ = nullptr;};
    inline double v720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBodyData& setV720Duration(double v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


  protected:
    std::shared_ptr<double> audioDuration_ = nullptr;
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<double> totalDuration_ = nullptr;
    std::shared_ptr<double> v1080Duration_ = nullptr;
    std::shared_ptr<double> v480Duration_ = nullptr;
    std::shared_ptr<double> v720Duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
