// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLOBSERVATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUrlObservationDataResponseBodyUrlDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUrlObservationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlObservationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UrlDetailData, urlDetailData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlObservationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UrlDetailData, urlDetailData_);
    };
    DescribeUrlObservationDataResponseBody() = default ;
    DescribeUrlObservationDataResponseBody(const DescribeUrlObservationDataResponseBody &) = default ;
    DescribeUrlObservationDataResponseBody(DescribeUrlObservationDataResponseBody &&) = default ;
    DescribeUrlObservationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlObservationDataResponseBody() = default ;
    DescribeUrlObservationDataResponseBody& operator=(const DescribeUrlObservationDataResponseBody &) = default ;
    DescribeUrlObservationDataResponseBody& operator=(DescribeUrlObservationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->requestId_ == nullptr && return this->startTime_ == nullptr && return this->urlDetailData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUrlObservationDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUrlObservationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUrlObservationDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // urlDetailData Field Functions 
    bool hasUrlDetailData() const { return this->urlDetailData_ != nullptr;};
    void deleteUrlDetailData() { this->urlDetailData_ = nullptr;};
    inline const vector<DescribeUrlObservationDataResponseBodyUrlDetailData> & urlDetailData() const { DARABONBA_PTR_GET_CONST(urlDetailData_, vector<DescribeUrlObservationDataResponseBodyUrlDetailData>) };
    inline vector<DescribeUrlObservationDataResponseBodyUrlDetailData> urlDetailData() { DARABONBA_PTR_GET(urlDetailData_, vector<DescribeUrlObservationDataResponseBodyUrlDetailData>) };
    inline DescribeUrlObservationDataResponseBody& setUrlDetailData(const vector<DescribeUrlObservationDataResponseBodyUrlDetailData> & urlDetailData) { DARABONBA_PTR_SET_VALUE(urlDetailData_, urlDetailData) };
    inline DescribeUrlObservationDataResponseBody& setUrlDetailData(vector<DescribeUrlObservationDataResponseBodyUrlDetailData> && urlDetailData) { DARABONBA_PTR_SET_RVALUE(urlDetailData_, urlDetailData) };


  protected:
    // The end of the time range during which data was queried.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The create time. The time is in the yyyy-MM-ddTHH:mm:ssZ format.
    std::shared_ptr<string> startTime_ = nullptr;
    // The objects that are returned.
    std::shared_ptr<vector<DescribeUrlObservationDataResponseBodyUrlDetailData>> urlDetailData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
