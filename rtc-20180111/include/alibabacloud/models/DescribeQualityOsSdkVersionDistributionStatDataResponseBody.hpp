// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QualityOsSdkVersionStatDataList, qualityOsSdkVersionStatDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QualityOsSdkVersionStatDataList, qualityOsSdkVersionStatDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const DescribeQualityOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(DescribeQualityOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody& operator=(const DescribeQualityOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeQualityOsSdkVersionDistributionStatDataResponseBody& operator=(DescribeQualityOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QualityOsSdkVersionStatDataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QualityOsSdkVersionStatDataList& obj) { 
        DARABONBA_PTR_TO_JSON(AudioDelay, audioDelay_);
        DARABONBA_PTR_TO_JSON(AudioHighQualityTransmissionRate, audioHighQualityTransmissionRate_);
        DARABONBA_PTR_TO_JSON(AudioStuckRate, audioStuckRate_);
        DARABONBA_PTR_TO_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_TO_JSON(JoinChannelSucFiveSecRate, joinChannelSucFiveSecRate_);
        DARABONBA_PTR_TO_JSON(JoinChannelSucRate, joinChannelSucRate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(VideoDelay, videoDelay_);
        DARABONBA_PTR_TO_JSON(VideoFirstPicDuration, videoFirstPicDuration_);
        DARABONBA_PTR_TO_JSON(VideoHighQualityTransmissionRate, videoHighQualityTransmissionRate_);
        DARABONBA_PTR_TO_JSON(VideoStuckRate, videoStuckRate_);
      };
      friend void from_json(const Darabonba::Json& j, QualityOsSdkVersionStatDataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioDelay, audioDelay_);
        DARABONBA_PTR_FROM_JSON(AudioHighQualityTransmissionRate, audioHighQualityTransmissionRate_);
        DARABONBA_PTR_FROM_JSON(AudioStuckRate, audioStuckRate_);
        DARABONBA_PTR_FROM_JSON(CallDurationRatio, callDurationRatio_);
        DARABONBA_PTR_FROM_JSON(JoinChannelSucFiveSecRate, joinChannelSucFiveSecRate_);
        DARABONBA_PTR_FROM_JSON(JoinChannelSucRate, joinChannelSucRate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(VideoDelay, videoDelay_);
        DARABONBA_PTR_FROM_JSON(VideoFirstPicDuration, videoFirstPicDuration_);
        DARABONBA_PTR_FROM_JSON(VideoHighQualityTransmissionRate, videoHighQualityTransmissionRate_);
        DARABONBA_PTR_FROM_JSON(VideoStuckRate, videoStuckRate_);
      };
      QualityOsSdkVersionStatDataList() = default ;
      QualityOsSdkVersionStatDataList(const QualityOsSdkVersionStatDataList &) = default ;
      QualityOsSdkVersionStatDataList(QualityOsSdkVersionStatDataList &&) = default ;
      QualityOsSdkVersionStatDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QualityOsSdkVersionStatDataList() = default ;
      QualityOsSdkVersionStatDataList& operator=(const QualityOsSdkVersionStatDataList &) = default ;
      QualityOsSdkVersionStatDataList& operator=(QualityOsSdkVersionStatDataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioDelay_ == nullptr
        && this->audioHighQualityTransmissionRate_ == nullptr && this->audioStuckRate_ == nullptr && this->callDurationRatio_ == nullptr && this->joinChannelSucFiveSecRate_ == nullptr && this->joinChannelSucRate_ == nullptr
        && this->name_ == nullptr && this->os_ == nullptr && this->videoDelay_ == nullptr && this->videoFirstPicDuration_ == nullptr && this->videoHighQualityTransmissionRate_ == nullptr
        && this->videoStuckRate_ == nullptr; };
      // audioDelay Field Functions 
      bool hasAudioDelay() const { return this->audioDelay_ != nullptr;};
      void deleteAudioDelay() { this->audioDelay_ = nullptr;};
      inline int64_t getAudioDelay() const { DARABONBA_PTR_GET_DEFAULT(audioDelay_, 0L) };
      inline QualityOsSdkVersionStatDataList& setAudioDelay(int64_t audioDelay) { DARABONBA_PTR_SET_VALUE(audioDelay_, audioDelay) };


      // audioHighQualityTransmissionRate Field Functions 
      bool hasAudioHighQualityTransmissionRate() const { return this->audioHighQualityTransmissionRate_ != nullptr;};
      void deleteAudioHighQualityTransmissionRate() { this->audioHighQualityTransmissionRate_ = nullptr;};
      inline string getAudioHighQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(audioHighQualityTransmissionRate_, "") };
      inline QualityOsSdkVersionStatDataList& setAudioHighQualityTransmissionRate(string audioHighQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(audioHighQualityTransmissionRate_, audioHighQualityTransmissionRate) };


      // audioStuckRate Field Functions 
      bool hasAudioStuckRate() const { return this->audioStuckRate_ != nullptr;};
      void deleteAudioStuckRate() { this->audioStuckRate_ = nullptr;};
      inline string getAudioStuckRate() const { DARABONBA_PTR_GET_DEFAULT(audioStuckRate_, "") };
      inline QualityOsSdkVersionStatDataList& setAudioStuckRate(string audioStuckRate) { DARABONBA_PTR_SET_VALUE(audioStuckRate_, audioStuckRate) };


      // callDurationRatio Field Functions 
      bool hasCallDurationRatio() const { return this->callDurationRatio_ != nullptr;};
      void deleteCallDurationRatio() { this->callDurationRatio_ = nullptr;};
      inline string getCallDurationRatio() const { DARABONBA_PTR_GET_DEFAULT(callDurationRatio_, "") };
      inline QualityOsSdkVersionStatDataList& setCallDurationRatio(string callDurationRatio) { DARABONBA_PTR_SET_VALUE(callDurationRatio_, callDurationRatio) };


      // joinChannelSucFiveSecRate Field Functions 
      bool hasJoinChannelSucFiveSecRate() const { return this->joinChannelSucFiveSecRate_ != nullptr;};
      void deleteJoinChannelSucFiveSecRate() { this->joinChannelSucFiveSecRate_ = nullptr;};
      inline string getJoinChannelSucFiveSecRate() const { DARABONBA_PTR_GET_DEFAULT(joinChannelSucFiveSecRate_, "") };
      inline QualityOsSdkVersionStatDataList& setJoinChannelSucFiveSecRate(string joinChannelSucFiveSecRate) { DARABONBA_PTR_SET_VALUE(joinChannelSucFiveSecRate_, joinChannelSucFiveSecRate) };


      // joinChannelSucRate Field Functions 
      bool hasJoinChannelSucRate() const { return this->joinChannelSucRate_ != nullptr;};
      void deleteJoinChannelSucRate() { this->joinChannelSucRate_ = nullptr;};
      inline string getJoinChannelSucRate() const { DARABONBA_PTR_GET_DEFAULT(joinChannelSucRate_, "") };
      inline QualityOsSdkVersionStatDataList& setJoinChannelSucRate(string joinChannelSucRate) { DARABONBA_PTR_SET_VALUE(joinChannelSucRate_, joinChannelSucRate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline QualityOsSdkVersionStatDataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline QualityOsSdkVersionStatDataList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // videoDelay Field Functions 
      bool hasVideoDelay() const { return this->videoDelay_ != nullptr;};
      void deleteVideoDelay() { this->videoDelay_ = nullptr;};
      inline int64_t getVideoDelay() const { DARABONBA_PTR_GET_DEFAULT(videoDelay_, 0L) };
      inline QualityOsSdkVersionStatDataList& setVideoDelay(int64_t videoDelay) { DARABONBA_PTR_SET_VALUE(videoDelay_, videoDelay) };


      // videoFirstPicDuration Field Functions 
      bool hasVideoFirstPicDuration() const { return this->videoFirstPicDuration_ != nullptr;};
      void deleteVideoFirstPicDuration() { this->videoFirstPicDuration_ = nullptr;};
      inline int64_t getVideoFirstPicDuration() const { DARABONBA_PTR_GET_DEFAULT(videoFirstPicDuration_, 0L) };
      inline QualityOsSdkVersionStatDataList& setVideoFirstPicDuration(int64_t videoFirstPicDuration) { DARABONBA_PTR_SET_VALUE(videoFirstPicDuration_, videoFirstPicDuration) };


      // videoHighQualityTransmissionRate Field Functions 
      bool hasVideoHighQualityTransmissionRate() const { return this->videoHighQualityTransmissionRate_ != nullptr;};
      void deleteVideoHighQualityTransmissionRate() { this->videoHighQualityTransmissionRate_ = nullptr;};
      inline string getVideoHighQualityTransmissionRate() const { DARABONBA_PTR_GET_DEFAULT(videoHighQualityTransmissionRate_, "") };
      inline QualityOsSdkVersionStatDataList& setVideoHighQualityTransmissionRate(string videoHighQualityTransmissionRate) { DARABONBA_PTR_SET_VALUE(videoHighQualityTransmissionRate_, videoHighQualityTransmissionRate) };


      // videoStuckRate Field Functions 
      bool hasVideoStuckRate() const { return this->videoStuckRate_ != nullptr;};
      void deleteVideoStuckRate() { this->videoStuckRate_ = nullptr;};
      inline string getVideoStuckRate() const { DARABONBA_PTR_GET_DEFAULT(videoStuckRate_, "") };
      inline QualityOsSdkVersionStatDataList& setVideoStuckRate(string videoStuckRate) { DARABONBA_PTR_SET_VALUE(videoStuckRate_, videoStuckRate) };


    protected:
      shared_ptr<int64_t> audioDelay_ {};
      shared_ptr<string> audioHighQualityTransmissionRate_ {};
      shared_ptr<string> audioStuckRate_ {};
      shared_ptr<string> callDurationRatio_ {};
      shared_ptr<string> joinChannelSucFiveSecRate_ {};
      shared_ptr<string> joinChannelSucRate_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> os_ {};
      shared_ptr<int64_t> videoDelay_ {};
      shared_ptr<int64_t> videoFirstPicDuration_ {};
      shared_ptr<string> videoHighQualityTransmissionRate_ {};
      shared_ptr<string> videoStuckRate_ {};
    };

    virtual bool empty() const override { return this->qualityOsSdkVersionStatDataList_ == nullptr
        && this->requestId_ == nullptr; };
    // qualityOsSdkVersionStatDataList Field Functions 
    bool hasQualityOsSdkVersionStatDataList() const { return this->qualityOsSdkVersionStatDataList_ != nullptr;};
    void deleteQualityOsSdkVersionStatDataList() { this->qualityOsSdkVersionStatDataList_ = nullptr;};
    inline const vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList> & getQualityOsSdkVersionStatDataList() const { DARABONBA_PTR_GET_CONST(qualityOsSdkVersionStatDataList_, vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList>) };
    inline vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList> getQualityOsSdkVersionStatDataList() { DARABONBA_PTR_GET(qualityOsSdkVersionStatDataList_, vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList>) };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setQualityOsSdkVersionStatDataList(const vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList> & qualityOsSdkVersionStatDataList) { DARABONBA_PTR_SET_VALUE(qualityOsSdkVersionStatDataList_, qualityOsSdkVersionStatDataList) };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setQualityOsSdkVersionStatDataList(vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList> && qualityOsSdkVersionStatDataList) { DARABONBA_PTR_SET_RVALUE(qualityOsSdkVersionStatDataList_, qualityOsSdkVersionStatDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQualityOsSdkVersionDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBody::QualityOsSdkVersionStatDataList>> qualityOsSdkVersionStatDataList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
