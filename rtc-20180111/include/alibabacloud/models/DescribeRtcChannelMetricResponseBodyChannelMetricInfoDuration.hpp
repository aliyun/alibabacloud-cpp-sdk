// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFODURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODYCHANNELMETRICINFODURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration.hpp>
#include <alibabacloud/models/DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& obj) { 
      DARABONBA_PTR_TO_JSON(PubDuration, pubDuration_);
      DARABONBA_PTR_TO_JSON(SubDuration, subDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& obj) { 
      DARABONBA_PTR_FROM_JSON(PubDuration, pubDuration_);
      DARABONBA_PTR_FROM_JSON(SubDuration, subDuration_);
    };
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration(DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration &&) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& operator=(const DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration &) = default ;
    DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& operator=(DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pubDuration_ == nullptr
        && return this->subDuration_ == nullptr; };
    // pubDuration Field Functions 
    bool hasPubDuration() const { return this->pubDuration_ != nullptr;};
    void deletePubDuration() { this->pubDuration_ = nullptr;};
    inline const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration & pubDuration() const { DARABONBA_PTR_GET_CONST(pubDuration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration) };
    inline Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration pubDuration() { DARABONBA_PTR_GET(pubDuration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& setPubDuration(const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration & pubDuration) { DARABONBA_PTR_SET_VALUE(pubDuration_, pubDuration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& setPubDuration(Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration && pubDuration) { DARABONBA_PTR_SET_RVALUE(pubDuration_, pubDuration) };


    // subDuration Field Functions 
    bool hasSubDuration() const { return this->subDuration_ != nullptr;};
    void deleteSubDuration() { this->subDuration_ = nullptr;};
    inline const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration & subDuration() const { DARABONBA_PTR_GET_CONST(subDuration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration) };
    inline Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration subDuration() { DARABONBA_PTR_GET(subDuration_, Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& setSubDuration(const Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration & subDuration) { DARABONBA_PTR_SET_VALUE(subDuration_, subDuration) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration& setSubDuration(Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration && subDuration) { DARABONBA_PTR_SET_RVALUE(subDuration_, subDuration) };


  protected:
    std::shared_ptr<Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration> pubDuration_ = nullptr;
    std::shared_ptr<Models::DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration> subDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
