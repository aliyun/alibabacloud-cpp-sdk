// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYEDSTREAMINGUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDelayedStreamingUsageResponseBodyDelayData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDelayedStreamingUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayedStreamingUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayData, delayData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayedStreamingUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayData, delayData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDelayedStreamingUsageResponseBody() = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(const DescribeLiveDelayedStreamingUsageResponseBody &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(DescribeLiveDelayedStreamingUsageResponseBody &&) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayedStreamingUsageResponseBody() = default ;
    DescribeLiveDelayedStreamingUsageResponseBody& operator=(const DescribeLiveDelayedStreamingUsageResponseBody &) = default ;
    DescribeLiveDelayedStreamingUsageResponseBody& operator=(DescribeLiveDelayedStreamingUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delayData_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // delayData Field Functions 
    bool hasDelayData() const { return this->delayData_ != nullptr;};
    void deleteDelayData() { this->delayData_ = nullptr;};
    inline const DescribeLiveDelayedStreamingUsageResponseBodyDelayData & delayData() const { DARABONBA_PTR_GET_CONST(delayData_, DescribeLiveDelayedStreamingUsageResponseBodyDelayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBodyDelayData delayData() { DARABONBA_PTR_GET(delayData_, DescribeLiveDelayedStreamingUsageResponseBodyDelayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setDelayData(const DescribeLiveDelayedStreamingUsageResponseBodyDelayData & delayData) { DARABONBA_PTR_SET_VALUE(delayData_, delayData) };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setDelayData(DescribeLiveDelayedStreamingUsageResponseBodyDelayData && delayData) { DARABONBA_PTR_SET_RVALUE(delayData_, delayData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDelayedStreamingUsageResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The details about the stream delay usage data.
    std::shared_ptr<DescribeLiveDelayedStreamingUsageResponseBodyDelayData> delayData_ = nullptr;
    // The end of the time range during which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
