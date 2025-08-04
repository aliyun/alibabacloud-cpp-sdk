// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYAREADISTRIBUTIONSTATDATARESPONSEBODYQUALITYSTATDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYAREADISTRIBUTIONSTATDATARESPONSEBODYQUALITYSTATDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioDelay, audioDelay_);
      DARABONBA_PTR_TO_JSON(AudioHighQualityTransmissionRate, audioHighQualityTransmissionRate_);
      DARABONBA_PTR_TO_JSON(AudioStuckRate, audioStuckRate_);
      DARABONBA_PTR_TO_JSON(CallDurationRatio, callDurationRatio_);
      DARABONBA_PTR_TO_JSON(JoinChannelSucFiveSecRate, joinChannelSucFiveSecRate_);
      DARABONBA_PTR_TO_JSON(JoinChannelSucRate, joinChannelSucRate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoDelay, videoDelay_);
      DARABONBA_PTR_TO_JSON(VideoFirstPicDuration, videoFirstPicDuration_);
      DARABONBA_PTR_TO_JSON(VideoHighQualityTransmissionRate, videoHighQualityTransmissionRate_);
      DARABONBA_PTR_TO_JSON(VideoStuckRate, videoStuckRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioDelay, audioDelay_);
      DARABONBA_PTR_FROM_JSON(AudioHighQualityTransmissionRate, audioHighQualityTransmissionRate_);
      DARABONBA_PTR_FROM_JSON(AudioStuckRate, audioStuckRate_);
      DARABONBA_PTR_FROM_JSON(CallDurationRatio, callDurationRatio_);
      DARABONBA_PTR_FROM_JSON(JoinChannelSucFiveSecRate, joinChannelSucFiveSecRate_);
      DARABONBA_PTR_FROM_JSON(JoinChannelSucRate, joinChannelSucRate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoDelay, videoDelay_);
      DARABONBA_PTR_FROM_JSON(VideoFirstPicDuration, videoFirstPicDuration_);
      DARABONBA_PTR_FROM_JSON(VideoHighQualityTransmissionRate, videoHighQualityTransmissionRate_);
      DARABONBA_PTR_FROM_JSON(VideoStuckRate, videoStuckRate_);
    };
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() = default ;
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList(const DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList &) = default ;
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList(DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList &&) = default ;
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() = default ;
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& operator=(const DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList &) = default ;
    DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& operator=(DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioDelay_ != nullptr
        && this->audioHighQualityTransmissionRate_ != nullptr && this->audioStuckRate_ != nullptr && this->callDurationRatio_ != nullptr && this->joinChannelSucFiveSecRate_ != nullptr && this->joinChannelSucRate_ != nullptr
        && this->name_ != nullptr && this->videoDelay_ != nullptr && this->videoFirstPicDuration_ != nullptr && this->videoHighQualityTransmissionRate_ != nullptr && this->videoStuckRate_ != nullptr; };
    // audioDelay Field Functions 
    bool hasAudioDelay() const { return this->audioDelay_ != nullptr;};
    void deleteAudioDelay() { this->audioDelay_ = nullptr;};
    inline int64_t audioDelay() const { DARABONBA_PTR_GET_DEFAULT(audioDelay_, 0L) };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setAudioDelay(int64_t audioDelay) { DARABONBA_PTR_SET_VALUE(audioDelay_, audioDelay) };


    // audioHighQualityTransmissionRate Field Functions 
    bool hasAudioHighQualityTransmissionRate() const { return this->audioHighQualityTransmissionRate_ != nullptr;};
    void deleteAudioHighQualityTransmissionRate() { this->audioHighQualityTransmissionRate_ = nullptr;};
    inline string audioHighQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(audioHighQualityTransmissionRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setAudioHighQualityTransmissionRate(string audioHighQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(audioHighQualityTransmissionRate_, audioHighQualityTransmissionRate) };


    // audioStuckRate Field Functions 
    bool hasAudioStuckRate() const { return this->audioStuckRate_ != nullptr;};
    void deleteAudioStuckRate() { this->audioStuckRate_ = nullptr;};
    inline string audioStuckRate() const { DARABONBA_PTR_GET_DEFAULT(audioStuckRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setAudioStuckRate(string audioStuckRate) { DARABONBA_PTR_SET_VALUE(audioStuckRate_, audioStuckRate) };


    // callDurationRatio Field Functions 
    bool hasCallDurationRatio() const { return this->callDurationRatio_ != nullptr;};
    void deleteCallDurationRatio() { this->callDurationRatio_ = nullptr;};
    inline string callDurationRatio() const { DARABONBA_PTR_GET_DEFAULT(callDurationRatio_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setCallDurationRatio(string callDurationRatio) { DARABONBA_PTR_SET_VALUE(callDurationRatio_, callDurationRatio) };


    // joinChannelSucFiveSecRate Field Functions 
    bool hasJoinChannelSucFiveSecRate() const { return this->joinChannelSucFiveSecRate_ != nullptr;};
    void deleteJoinChannelSucFiveSecRate() { this->joinChannelSucFiveSecRate_ = nullptr;};
    inline string joinChannelSucFiveSecRate() const { DARABONBA_PTR_GET_DEFAULT(joinChannelSucFiveSecRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setJoinChannelSucFiveSecRate(string joinChannelSucFiveSecRate) { DARABONBA_PTR_SET_VALUE(joinChannelSucFiveSecRate_, joinChannelSucFiveSecRate) };


    // joinChannelSucRate Field Functions 
    bool hasJoinChannelSucRate() const { return this->joinChannelSucRate_ != nullptr;};
    void deleteJoinChannelSucRate() { this->joinChannelSucRate_ = nullptr;};
    inline string joinChannelSucRate() const { DARABONBA_PTR_GET_DEFAULT(joinChannelSucRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setJoinChannelSucRate(string joinChannelSucRate) { DARABONBA_PTR_SET_VALUE(joinChannelSucRate_, joinChannelSucRate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoDelay Field Functions 
    bool hasVideoDelay() const { return this->videoDelay_ != nullptr;};
    void deleteVideoDelay() { this->videoDelay_ = nullptr;};
    inline int64_t videoDelay() const { DARABONBA_PTR_GET_DEFAULT(videoDelay_, 0L) };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setVideoDelay(int64_t videoDelay) { DARABONBA_PTR_SET_VALUE(videoDelay_, videoDelay) };


    // videoFirstPicDuration Field Functions 
    bool hasVideoFirstPicDuration() const { return this->videoFirstPicDuration_ != nullptr;};
    void deleteVideoFirstPicDuration() { this->videoFirstPicDuration_ = nullptr;};
    inline int64_t videoFirstPicDuration() const { DARABONBA_PTR_GET_DEFAULT(videoFirstPicDuration_, 0L) };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setVideoFirstPicDuration(int64_t videoFirstPicDuration) { DARABONBA_PTR_SET_VALUE(videoFirstPicDuration_, videoFirstPicDuration) };


    // videoHighQualityTransmissionRate Field Functions 
    bool hasVideoHighQualityTransmissionRate() const { return this->videoHighQualityTransmissionRate_ != nullptr;};
    void deleteVideoHighQualityTransmissionRate() { this->videoHighQualityTransmissionRate_ = nullptr;};
    inline string videoHighQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(videoHighQualityTransmissionRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setVideoHighQualityTransmissionRate(string videoHighQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(videoHighQualityTransmissionRate_, videoHighQualityTransmissionRate) };


    // videoStuckRate Field Functions 
    bool hasVideoStuckRate() const { return this->videoStuckRate_ != nullptr;};
    void deleteVideoStuckRate() { this->videoStuckRate_ = nullptr;};
    inline string videoStuckRate() const { DARABONBA_PTR_GET_DEFAULT(videoStuckRate_, "") };
    inline DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList& setVideoStuckRate(string videoStuckRate) { DARABONBA_PTR_SET_VALUE(videoStuckRate_, videoStuckRate) };


  protected:
    std::shared_ptr<int64_t> audioDelay_ = nullptr;
    std::shared_ptr<string> audioHighQualityTransmissionRate_ = nullptr;
    std::shared_ptr<string> audioStuckRate_ = nullptr;
    std::shared_ptr<string> callDurationRatio_ = nullptr;
    std::shared_ptr<string> joinChannelSucFiveSecRate_ = nullptr;
    std::shared_ptr<string> joinChannelSucRate_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> videoDelay_ = nullptr;
    std::shared_ptr<int64_t> videoFirstPicDuration_ = nullptr;
    std::shared_ptr<string> videoHighQualityTransmissionRate_ = nullptr;
    std::shared_ptr<string> videoStuckRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
