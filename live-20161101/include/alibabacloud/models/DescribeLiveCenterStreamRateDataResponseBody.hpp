// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterStreamRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterStreamRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RateDatas, rateDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterStreamRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RateDatas, rateDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveCenterStreamRateDataResponseBody() = default ;
    DescribeLiveCenterStreamRateDataResponseBody(const DescribeLiveCenterStreamRateDataResponseBody &) = default ;
    DescribeLiveCenterStreamRateDataResponseBody(DescribeLiveCenterStreamRateDataResponseBody &&) = default ;
    DescribeLiveCenterStreamRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterStreamRateDataResponseBody() = default ;
    DescribeLiveCenterStreamRateDataResponseBody& operator=(const DescribeLiveCenterStreamRateDataResponseBody &) = default ;
    DescribeLiveCenterStreamRateDataResponseBody& operator=(DescribeLiveCenterStreamRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RateDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RateDatas& obj) { 
        DARABONBA_PTR_TO_JSON(AudioFps, audioFps_);
        DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(VideoFps, videoFps_);
        DARABONBA_PTR_TO_JSON(VideoRate, videoRate_);
      };
      friend void from_json(const Darabonba::Json& j, RateDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioFps, audioFps_);
        DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(VideoFps, videoFps_);
        DARABONBA_PTR_FROM_JSON(VideoRate, videoRate_);
      };
      RateDatas() = default ;
      RateDatas(const RateDatas &) = default ;
      RateDatas(RateDatas &&) = default ;
      RateDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RateDatas() = default ;
      RateDatas& operator=(const RateDatas &) = default ;
      RateDatas& operator=(RateDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioFps_ == nullptr
        && this->audioRate_ == nullptr && this->time_ == nullptr && this->videoFps_ == nullptr && this->videoRate_ == nullptr; };
      // audioFps Field Functions 
      bool hasAudioFps() const { return this->audioFps_ != nullptr;};
      void deleteAudioFps() { this->audioFps_ = nullptr;};
      inline string getAudioFps() const { DARABONBA_PTR_GET_DEFAULT(audioFps_, "") };
      inline RateDatas& setAudioFps(string audioFps) { DARABONBA_PTR_SET_VALUE(audioFps_, audioFps) };


      // audioRate Field Functions 
      bool hasAudioRate() const { return this->audioRate_ != nullptr;};
      void deleteAudioRate() { this->audioRate_ = nullptr;};
      inline string getAudioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, "") };
      inline RateDatas& setAudioRate(string audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline RateDatas& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // videoFps Field Functions 
      bool hasVideoFps() const { return this->videoFps_ != nullptr;};
      void deleteVideoFps() { this->videoFps_ = nullptr;};
      inline string getVideoFps() const { DARABONBA_PTR_GET_DEFAULT(videoFps_, "") };
      inline RateDatas& setVideoFps(string videoFps) { DARABONBA_PTR_SET_VALUE(videoFps_, videoFps) };


      // videoRate Field Functions 
      bool hasVideoRate() const { return this->videoRate_ != nullptr;};
      void deleteVideoRate() { this->videoRate_ = nullptr;};
      inline string getVideoRate() const { DARABONBA_PTR_GET_DEFAULT(videoRate_, "") };
      inline RateDatas& setVideoRate(string videoRate) { DARABONBA_PTR_SET_VALUE(videoRate_, videoRate) };


    protected:
      // The audio frame rate.
      shared_ptr<string> audioFps_ {};
      // The audio bitrate.
      shared_ptr<string> audioRate_ {};
      // The time when the data was collected. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> time_ {};
      // The video frame rate.
      shared_ptr<string> videoFps_ {};
      // The video bitrate.
      shared_ptr<string> videoRate_ {};
    };

    virtual bool empty() const override { return this->rateDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // rateDatas Field Functions 
    bool hasRateDatas() const { return this->rateDatas_ != nullptr;};
    void deleteRateDatas() { this->rateDatas_ = nullptr;};
    inline const vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas> & getRateDatas() const { DARABONBA_PTR_GET_CONST(rateDatas_, vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas>) };
    inline vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas> getRateDatas() { DARABONBA_PTR_GET(rateDatas_, vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas>) };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRateDatas(const vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas> & rateDatas) { DARABONBA_PTR_SET_VALUE(rateDatas_, rateDatas) };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRateDatas(vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas> && rateDatas) { DARABONBA_PTR_SET_RVALUE(rateDatas_, rateDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of frame rates and bitrates.
    shared_ptr<vector<DescribeLiveCenterStreamRateDataResponseBody::RateDatas>> rateDatas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
