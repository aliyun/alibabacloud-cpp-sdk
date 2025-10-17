// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFOCHANNELMETRIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFOCHANNELMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PubUserCount, pubUserCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubUserCount, subUserCount_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PubUserCount, pubUserCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubUserCount, subUserCount_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric(DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric &&) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& operator=(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& operator=(DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->endTime_ == nullptr && return this->pubUserCount_ == nullptr && return this->startTime_ == nullptr && return this->subUserCount_ == nullptr && return this->userCount_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pubUserCount Field Functions 
    bool hasPubUserCount() const { return this->pubUserCount_ != nullptr;};
    void deletePubUserCount() { this->pubUserCount_ = nullptr;};
    inline int32_t pubUserCount() const { DARABONBA_PTR_GET_DEFAULT(pubUserCount_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setPubUserCount(int32_t pubUserCount) { DARABONBA_PTR_SET_VALUE(pubUserCount_, pubUserCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subUserCount Field Functions 
    bool hasSubUserCount() const { return this->subUserCount_ != nullptr;};
    void deleteSubUserCount() { this->subUserCount_ = nullptr;};
    inline int32_t subUserCount() const { DARABONBA_PTR_GET_DEFAULT(subUserCount_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setSubUserCount(int32_t subUserCount) { DARABONBA_PTR_SET_VALUE(subUserCount_, subUserCount) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> pubUserCount_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> subUserCount_ = nullptr;
    std::shared_ptr<int32_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
