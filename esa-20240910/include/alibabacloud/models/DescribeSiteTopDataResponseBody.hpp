// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTopDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteTopDataResponseBody() = default ;
    DescribeSiteTopDataResponseBody(const DescribeSiteTopDataResponseBody &) = default ;
    DescribeSiteTopDataResponseBody(DescribeSiteTopDataResponseBody &&) = default ;
    DescribeSiteTopDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataResponseBody() = default ;
    DescribeSiteTopDataResponseBody& operator=(const DescribeSiteTopDataResponseBody &) = default ;
    DescribeSiteTopDataResponseBody& operator=(DescribeSiteTopDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->samplingRate_ != nullptr && this->startTime_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSiteTopDataResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSiteTopDataResponseBodyData>) };
    inline vector<DescribeSiteTopDataResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeSiteTopDataResponseBodyData>) };
    inline DescribeSiteTopDataResponseBody& setData(const vector<DescribeSiteTopDataResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteTopDataResponseBody& setData(vector<DescribeSiteTopDataResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTopDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteTopDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline float samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
    inline DescribeSiteTopDataResponseBody& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTopDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The returned data.
    std::shared_ptr<vector<DescribeSiteTopDataResponseBodyData>> data_ = nullptr;
    // The end of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sampling rate.
    std::shared_ptr<float> samplingRate_ = nullptr;
    // The beginning of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
