// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric.hpp>
#include <alibabacloud/models/DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBodyChannelMetricInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBodyChannelMetricInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelMetric, channelMetric_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBodyChannelMetricInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelMetric, channelMetric_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo(const DescribeRtcChannelMetricResponseBodyChannelMetricInfo &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo(DescribeRtcChannelMetricResponseBodyChannelMetricInfo &&) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfo() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo& operator=(const DescribeRtcChannelMetricResponseBodyChannelMetricInfo &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfo& operator=(DescribeRtcChannelMetricResponseBodyChannelMetricInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelMetric_ == nullptr
        && return this->duration_ == nullptr; };
    // channelMetric Field Functions 
    bool hasChannelMetric() const { return this->channelMetric_ != nullptr;};
    void deleteChannelMetric() { this->channelMetric_ = nullptr;};
    inline const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric & channelMetric() const { DARABONBA_PTR_GET_CONST(channelMetric_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric) };
    inline Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric channelMetric() { DARABONBA_PTR_GET(channelMetric_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfo& setChannelMetric(const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric & channelMetric) { DARABONBA_PTR_SET_VALUE(channelMetric_, channelMetric) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfo& setChannelMetric(Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric && channelMetric) { DARABONBA_PTR_SET_RVALUE(channelMetric_, channelMetric) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration & duration() const { DARABONBA_PTR_GET_CONST(duration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration) };
    inline Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration duration() { DARABONBA_PTR_GET(duration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfo& setDuration(const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration & duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfo& setDuration(Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration && duration) { DARABONBA_PTR_SET_RVALUE(duration_, duration) };


  protected:
    std::shared_ptr<Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric> channelMetric_ = nullptr;
    std::shared_ptr<Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
