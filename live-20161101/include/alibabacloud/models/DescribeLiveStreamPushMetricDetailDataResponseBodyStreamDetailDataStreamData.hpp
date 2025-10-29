// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPUSHMETRICDETAILDATARESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ReqBps, reqBps_);
      DARABONBA_PTR_TO_JSON(ReqTraffic, reqTraffic_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ReqBps, reqBps_);
      DARABONBA_PTR_FROM_JSON(ReqTraffic, reqTraffic_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData(const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData(DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData &&) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& operator=(const DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& operator=(DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->reqBps_ == nullptr && return this->reqTraffic_ == nullptr && return this->streamName_ == nullptr && return this->timeStamp_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // reqBps Field Functions 
    bool hasReqBps() const { return this->reqBps_ != nullptr;};
    void deleteReqBps() { this->reqBps_ = nullptr;};
    inline float reqBps() const { DARABONBA_PTR_GET_DEFAULT(reqBps_, 0.0) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& setReqBps(float reqBps) { DARABONBA_PTR_SET_VALUE(reqBps_, reqBps) };


    // reqTraffic Field Functions 
    bool hasReqTraffic() const { return this->reqTraffic_ != nullptr;};
    void deleteReqTraffic() { this->reqTraffic_ = nullptr;};
    inline int64_t reqTraffic() const { DARABONBA_PTR_GET_DEFAULT(reqTraffic_, 0L) };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& setReqTraffic(int64_t reqTraffic) { DARABONBA_PTR_SET_VALUE(reqTraffic_, reqTraffic) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveStreamPushMetricDetailDataResponseBodyStreamDetailDataStreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The total bandwidth consumed by the stream per minute. Unit: bit/s.
    std::shared_ptr<float> reqBps_ = nullptr;
    // The total amount of traffic consumed by the stream per minute. Unit: bytes.
    std::shared_ptr<int64_t> reqTraffic_ = nullptr;
    // The name of the stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
