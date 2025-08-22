// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKvRealTimeQpsDataResponseBodyAggregateData.hpp>
#include <alibabacloud/models/DescribeKvRealTimeQpsDataResponseBodyKvQpsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvRealTimeQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateData, aggregateData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KvQpsData, kvQpsData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateData, aggregateData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KvQpsData, kvQpsData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeKvRealTimeQpsDataResponseBody() = default ;
    DescribeKvRealTimeQpsDataResponseBody(const DescribeKvRealTimeQpsDataResponseBody &) = default ;
    DescribeKvRealTimeQpsDataResponseBody(DescribeKvRealTimeQpsDataResponseBody &&) = default ;
    DescribeKvRealTimeQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvRealTimeQpsDataResponseBody() = default ;
    DescribeKvRealTimeQpsDataResponseBody& operator=(const DescribeKvRealTimeQpsDataResponseBody &) = default ;
    DescribeKvRealTimeQpsDataResponseBody& operator=(DescribeKvRealTimeQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregateData_ != nullptr
        && this->endTime_ != nullptr && this->kvQpsData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // aggregateData Field Functions 
    bool hasAggregateData() const { return this->aggregateData_ != nullptr;};
    void deleteAggregateData() { this->aggregateData_ = nullptr;};
    inline const vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData> & aggregateData() const { DARABONBA_PTR_GET_CONST(aggregateData_, vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData>) };
    inline vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData> aggregateData() { DARABONBA_PTR_GET(aggregateData_, vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData>) };
    inline DescribeKvRealTimeQpsDataResponseBody& setAggregateData(const vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData> & aggregateData) { DARABONBA_PTR_SET_VALUE(aggregateData_, aggregateData) };
    inline DescribeKvRealTimeQpsDataResponseBody& setAggregateData(vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData> && aggregateData) { DARABONBA_PTR_SET_RVALUE(aggregateData_, aggregateData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kvQpsData Field Functions 
    bool hasKvQpsData() const { return this->kvQpsData_ != nullptr;};
    void deleteKvQpsData() { this->kvQpsData_ = nullptr;};
    inline const vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData> & kvQpsData() const { DARABONBA_PTR_GET_CONST(kvQpsData_, vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData>) };
    inline vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData> kvQpsData() { DARABONBA_PTR_GET(kvQpsData_, vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData>) };
    inline DescribeKvRealTimeQpsDataResponseBody& setKvQpsData(const vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData> & kvQpsData) { DARABONBA_PTR_SET_VALUE(kvQpsData_, kvQpsData) };
    inline DescribeKvRealTimeQpsDataResponseBody& setKvQpsData(vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData> && kvQpsData) { DARABONBA_PTR_SET_RVALUE(kvQpsData_, kvQpsData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<DescribeKvRealTimeQpsDataResponseBodyAggregateData>> aggregateData_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<DescribeKvRealTimeQpsDataResponseBodyKvQpsData>> kvQpsData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
