// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMEDELAYRESPONSEBODYFRAMEDELAYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMEDELAYRESPONSEBODYFRAMEDELAYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& obj) { 
      DARABONBA_PTR_TO_JSON(FrameDelay, frameDelay_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameDelay, frameDelay_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData() = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData(const DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData &) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData(DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData &&) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData() = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& operator=(const DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData &) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& operator=(DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frameDelay_ != nullptr
        && this->timeStamp_ != nullptr; };
    // frameDelay Field Functions 
    bool hasFrameDelay() const { return this->frameDelay_ != nullptr;};
    void deleteFrameDelay() { this->frameDelay_ = nullptr;};
    inline string frameDelay() const { DARABONBA_PTR_GET_DEFAULT(frameDelay_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& setFrameDelay(string frameDelay) { DARABONBA_PTR_SET_VALUE(frameDelay_, frameDelay) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBodyFrameDelayData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The average latency of first frames within the period of time.
    std::shared_ptr<string> frameDelay_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
