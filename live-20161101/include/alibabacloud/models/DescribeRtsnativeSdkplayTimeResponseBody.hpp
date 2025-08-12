// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKPlayTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKPlayTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PlayTimeData, playTimeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKPlayTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PlayTimeData, playTimeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKPlayTimeResponseBody() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(const DescribeRTSNativeSDKPlayTimeResponseBody &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(DescribeRTSNativeSDKPlayTimeResponseBody &&) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKPlayTimeResponseBody() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody& operator=(const DescribeRTSNativeSDKPlayTimeResponseBody &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody& operator=(DescribeRTSNativeSDKPlayTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->endTime_ != nullptr && this->playTimeData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // playTimeData Field Functions 
    bool hasPlayTimeData() const { return this->playTimeData_ != nullptr;};
    void deletePlayTimeData() { this->playTimeData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData> & playTimeData() const { DARABONBA_PTR_GET_CONST(playTimeData_, vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData>) };
    inline vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData> playTimeData() { DARABONBA_PTR_GET(playTimeData_, vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData>) };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setPlayTimeData(const vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData> & playTimeData) { DARABONBA_PTR_SET_VALUE(playTimeData_, playTimeData) };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setPlayTimeData(vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData> && playTimeData) { DARABONBA_PTR_SET_RVALUE(playTimeData_, playTimeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The end of the time range for which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The average playback duration and average stuttering duration at each interval. Unit: milliseconds.
    std::shared_ptr<vector<DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData>> playTimeData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
