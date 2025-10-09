// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTimeSeriesDataResponseBodyData.hpp>
#include <alibabacloud/models/DescribeSiteTimeSeriesDataResponseBodySummarizedData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SummarizedData, summarizedData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SummarizedData, summarizedData_);
    };
    DescribeSiteTimeSeriesDataResponseBody() = default ;
    DescribeSiteTimeSeriesDataResponseBody(const DescribeSiteTimeSeriesDataResponseBody &) = default ;
    DescribeSiteTimeSeriesDataResponseBody(DescribeSiteTimeSeriesDataResponseBody &&) = default ;
    DescribeSiteTimeSeriesDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataResponseBody() = default ;
    DescribeSiteTimeSeriesDataResponseBody& operator=(const DescribeSiteTimeSeriesDataResponseBody &) = default ;
    DescribeSiteTimeSeriesDataResponseBody& operator=(DescribeSiteTimeSeriesDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->requestId_ != nullptr && this->samplingRate_ != nullptr && this->startTime_ != nullptr
        && this->summarizedData_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSiteTimeSeriesDataResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSiteTimeSeriesDataResponseBodyData>) };
    inline vector<DescribeSiteTimeSeriesDataResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeSiteTimeSeriesDataResponseBodyData>) };
    inline DescribeSiteTimeSeriesDataResponseBody& setData(const vector<DescribeSiteTimeSeriesDataResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteTimeSeriesDataResponseBody& setData(vector<DescribeSiteTimeSeriesDataResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeSiteTimeSeriesDataResponseBody& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline float samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summarizedData Field Functions 
    bool hasSummarizedData() const { return this->summarizedData_ != nullptr;};
    void deleteSummarizedData() { this->summarizedData_ = nullptr;};
    inline const vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData> & summarizedData() const { DARABONBA_PTR_GET_CONST(summarizedData_, vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData>) };
    inline vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData> summarizedData() { DARABONBA_PTR_GET(summarizedData_, vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData>) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSummarizedData(const vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData> & summarizedData) { DARABONBA_PTR_SET_VALUE(summarizedData_, summarizedData) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSummarizedData(vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData> && summarizedData) { DARABONBA_PTR_SET_RVALUE(summarizedData_, summarizedData) };


  protected:
    // The returned data.
    std::shared_ptr<vector<DescribeSiteTimeSeriesDataResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> interval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<float> samplingRate_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    // The queried summary data.
    std::shared_ptr<vector<DescribeSiteTimeSeriesDataResponseBodySummarizedData>> summarizedData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
