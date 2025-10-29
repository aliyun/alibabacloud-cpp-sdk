// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODYPLAYTIMEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODYPLAYTIMEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& obj) { 
      DARABONBA_PTR_TO_JSON(PlayTime, playTime_);
      DARABONBA_PTR_TO_JSON(StallTime, stallTime_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& obj) { 
      DARABONBA_PTR_FROM_JSON(PlayTime, playTime_);
      DARABONBA_PTR_FROM_JSON(StallTime, stallTime_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData(const DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData(DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData &&) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& operator=(const DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& operator=(DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playTime_ == nullptr
        && return this->stallTime_ == nullptr && return this->timeStamp_ == nullptr; };
    // playTime Field Functions 
    bool hasPlayTime() const { return this->playTime_ != nullptr;};
    void deletePlayTime() { this->playTime_ = nullptr;};
    inline string playTime() const { DARABONBA_PTR_GET_DEFAULT(playTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& setPlayTime(string playTime) { DARABONBA_PTR_SET_VALUE(playTime_, playTime) };


    // stallTime Field Functions 
    bool hasStallTime() const { return this->stallTime_ != nullptr;};
    void deleteStallTime() { this->stallTime_ = nullptr;};
    inline string stallTime() const { DARABONBA_PTR_GET_DEFAULT(stallTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& setStallTime(string stallTime) { DARABONBA_PTR_SET_VALUE(stallTime_, stallTime) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBodyPlayTimeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The average playback duration within the period of time.
    std::shared_ptr<string> playTime_ = nullptr;
    // The average stuttering duration within the period of time.
    std::shared_ptr<string> stallTime_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
