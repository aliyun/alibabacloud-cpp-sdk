// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERTCRECORDUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveRtcRecordUsageDataResponseBodyData.hpp>
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
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->audioSummaryDuration_ == nullptr && return this->data_ == nullptr && return this->recordMode_ == nullptr && return this->requestId_ == nullptr && return this->totalSummaryDuration_ == nullptr
        && return this->v1080SummaryDuration_ == nullptr && return this->v480SummaryDuration_ == nullptr && return this->v720SummaryDuration_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // audioSummaryDuration Field Functions 
    bool hasAudioSummaryDuration() const { return this->audioSummaryDuration_ != nullptr;};
    void deleteAudioSummaryDuration() { this->audioSummaryDuration_ = nullptr;};
    inline double audioSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(audioSummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setAudioSummaryDuration(double audioSummaryDuration) { DARABONBA_PTR_SET_VALUE(audioSummaryDuration_, audioSummaryDuration) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeLiveRtcRecordUsageDataResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeLiveRtcRecordUsageDataResponseBodyData>) };
    inline vector<DescribeLiveRtcRecordUsageDataResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeLiveRtcRecordUsageDataResponseBodyData>) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setData(const vector<DescribeLiveRtcRecordUsageDataResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setData(vector<DescribeLiveRtcRecordUsageDataResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // recordMode Field Functions 
    bool hasRecordMode() const { return this->recordMode_ != nullptr;};
    void deleteRecordMode() { this->recordMode_ = nullptr;};
    inline string recordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setRecordMode(string recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSummaryDuration Field Functions 
    bool hasTotalSummaryDuration() const { return this->totalSummaryDuration_ != nullptr;};
    void deleteTotalSummaryDuration() { this->totalSummaryDuration_ = nullptr;};
    inline double totalSummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(totalSummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setTotalSummaryDuration(double totalSummaryDuration) { DARABONBA_PTR_SET_VALUE(totalSummaryDuration_, totalSummaryDuration) };


    // v1080SummaryDuration Field Functions 
    bool hasV1080SummaryDuration() const { return this->v1080SummaryDuration_ != nullptr;};
    void deleteV1080SummaryDuration() { this->v1080SummaryDuration_ = nullptr;};
    inline double v1080SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v1080SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV1080SummaryDuration(double v1080SummaryDuration) { DARABONBA_PTR_SET_VALUE(v1080SummaryDuration_, v1080SummaryDuration) };


    // v480SummaryDuration Field Functions 
    bool hasV480SummaryDuration() const { return this->v480SummaryDuration_ != nullptr;};
    void deleteV480SummaryDuration() { this->v480SummaryDuration_ = nullptr;};
    inline double v480SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v480SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV480SummaryDuration(double v480SummaryDuration) { DARABONBA_PTR_SET_VALUE(v480SummaryDuration_, v480SummaryDuration) };


    // v720SummaryDuration Field Functions 
    bool hasV720SummaryDuration() const { return this->v720SummaryDuration_ != nullptr;};
    void deleteV720SummaryDuration() { this->v720SummaryDuration_ = nullptr;};
    inline double v720SummaryDuration() const { DARABONBA_PTR_GET_DEFAULT(v720SummaryDuration_, 0.0) };
    inline DescribeLiveRtcRecordUsageDataResponseBody& setV720SummaryDuration(double v720SummaryDuration) { DARABONBA_PTR_SET_VALUE(v720SummaryDuration_, v720SummaryDuration) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<double> audioSummaryDuration_ = nullptr;
    std::shared_ptr<vector<DescribeLiveRtcRecordUsageDataResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> recordMode_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<double> totalSummaryDuration_ = nullptr;
    std::shared_ptr<double> v1080SummaryDuration_ = nullptr;
    std::shared_ptr<double> v480SummaryDuration_ = nullptr;
    std::shared_ptr<double> v720SummaryDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
