// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeLiveRtcRecordUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRtcRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_TO_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_TO_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRtcRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AudioSummaryDuration, audioSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSummaryDuration, totalSummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V1080SummaryDuration, v1080SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V480SummaryDuration, v480SummaryDuration_);
      DARABONBA_PTR_FROM_JSON(V720SummaryDuration, v720SummaryDuration_);
    };
    DescribeLiveRtcRecordUsageDataResponseBody() = default ;
    DescribeLiveRtcRecordUsageDataResponseBody(const DescribeLiveRtcRecordUsageDataResponseBody &) = default ;
    DescribeLiveRtcRecordUsageDataResponseBody(DescribeLiveRtcRecordUsageDataResponseBody &&) = default ;
    DescribeLiveRtcRecordUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRtcRecordUsageDataResponseBody() = default ;
    DescribeLiveRtcRecordUsageDataResponseBody& operator=(const DescribeLiveRtcRecordUsageDataResponseBody &) = default ;
    DescribeLiveRtcRecordUsageDataResponseBody& operator=(DescribeLiveRtcRecordUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
        DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
        DARABONBA_PTR_TO_JSON(V480Duration, v480Duration_);
        DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
        DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
        DARABONBA_PTR_FROM_JSON(V480Duration, v480Duration_);
        DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audioDuration_ == nullptr
        && this->timestamp_ == nullptr && this->totalDuration_ == nullptr && this->v1080Duration_ == nullptr && this->v480Duration_ == nullptr && this->v720Duration_ == nullptr; };
      // audioDuration Field Functions 
      bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
      void deleteAudioDuration() { this->audioDuration_ = nullptr;};
      inline double getAudioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0.0) };
      inline Data& setAudioDuration(double audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Data& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalDuration Field Functions 
      bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
      void deleteTotalDuration() { this->totalDuration_ = nullptr;};
      inline double getTotalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0.0) };
      inline Data& setTotalDuration(double totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


      // v1080Duration Field Functions 
      bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
      void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
      inline double getV1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0.0) };
      inline Data& setV1080Duration(double v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


      // v480Duration Field Functions 
      bool hasV480Duration() const { return this->v480Duration_ != nullptr;};
      void deleteV480Duration() { this->v480Duration_ = nullptr;};
      inline double getV480Duration() const { DARABONBA_PTR_GET_DEFAULT(v480Duration_, 0.0) };
      inline Data& setV480Duration(double v480Duration) { DARABONBA_PTR_SET_VALUE(v480Duration_, v480Duration) };


      // v720Duration Field Functions 
      bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
      void deleteV720Duration() { this->v720Duration_ = nullptr;};
      inline double getV720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0.0) };
      inline Data& setV720Duration(double v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


    protected:
      shared_ptr<double> audioDuration_ {};
      shared_ptr<string> timestamp_ {};
      shared_ptr<double> totalDuration_ {};
      shared_ptr<double> v1080Duration_ {};
      shared_ptr<double> v480Duration_ {};
      shared_ptr<double> v720Duration_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->audioSummaryDuration_ == nullptr && this->data_ == nullptr && this->recordMode_ == nullptr && this->requestId_ == nullptr && this->totalSummaryDuration_ == nullptr
        && this->v1080SummaryDuration_ == nullptr && this->v480SummaryDuration_ == nullptr && this->v720SummaryDuration_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // audioSummaryDuration Field Functions 
    bool hasAudioSummaryDuration() const { return this->audioSummaryDuration_ != nullptr;};
    void deleteAudioSummaryDuration() { this->audioSummaryDuration_ = nullptr;};
    inline double getAudioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(audioSummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setAudioSummaryDuration(double audioSummaryDuration) { DARABONBA_PTR_SET_VALUE(audioSummaryDuration_, audioSummaryDuration) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeLiveRtcRecordUsageDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeLiveRtcRecordUsageDataResponseBody::Data>) };
    inline vector<DescribeLiveRtcRecordUsageDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeLiveRtcRecordUsageDataResponseBody::Data>) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setData(const vector<DescribeLiveRtcRecordUsageDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setData(vector<DescribeLiveRtcRecordUsageDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recordMode Field Functions 
    bool hasRecordMode() const { return this->recordMode_ != nullptr;};
    void deleteRecordMode() { this->recordMode_ = nullptr;};
    inline string getRecordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setRecordMode(string recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSummaryDuration Field Functions 
    bool hasTotalSummaryDuration() const { return this->totalSummaryDuration_ != nullptr;};
    void deleteTotalSummaryDuration() { this->totalSummaryDuration_ = nullptr;};
    inline double getTotalSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(totalSummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setTotalSummaryDuration(double totalSummaryDuration) { DARABONBA_PTR_SET_VALUE(totalSummaryDuration_, totalSummaryDuration) };


    // v1080SummaryDuration Field Functions 
    bool hasV1080SummaryDuration() const { return this->v1080SummaryDuration_ != nullptr;};
    void deleteV1080SummaryDuration() { this->v1080SummaryDuration_ = nullptr;};
    inline double getV1080SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v1080SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV1080SummaryDuration(double v1080SummaryDuration) { DARABONBA_PTR_SET_VALUE(v1080SummaryDuration_, v1080SummaryDuration) };


    // v480SummaryDuration Field Functions 
    bool hasV480SummaryDuration() const { return this->v480SummaryDuration_ != nullptr;};
    void deleteV480SummaryDuration() { this->v480SummaryDuration_ = nullptr;};
    inline double getV480SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v480SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV480SummaryDuration(double v480SummaryDuration) { DARABONBA_PTR_SET_VALUE(v480SummaryDuration_, v480SummaryDuration) };


    // v720SummaryDuration Field Functions 
    bool hasV720SummaryDuration() const { return this->v720SummaryDuration_ != nullptr;};
    void deleteV720SummaryDuration() { this->v720SummaryDuration_ = nullptr;};
    inline double getV720SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v720SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV720SummaryDuration(double v720SummaryDuration) { DARABONBA_PTR_SET_VALUE(v720SummaryDuration_, v720SummaryDuration) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<double> audioSummaryDuration_ {};
    shared_ptr<vector<DescribeLiveRtcRecordUsageDataResponseBody::Data>> data_ {};
    shared_ptr<string> recordMode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<double> totalSummaryDuration_ {};
    shared_ptr<double> v1080SummaryDuration_ {};
    shared_ptr<double> v480SummaryDuration_ {};
    shared_ptr<double> v720SummaryDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
