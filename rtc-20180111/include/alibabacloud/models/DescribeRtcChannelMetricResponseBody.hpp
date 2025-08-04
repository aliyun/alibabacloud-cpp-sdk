// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcChannelMetricResponseBodyChannelMetricInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelMetricInfo, channelMetricInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelMetricInfo, channelMetricInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcChannelMetricResponseBody() = default ;
    DescribeRtcChannelMetricResponseBody(const DescribeRtcChannelMetricResponseBody &) = default ;
    DescribeRtcChannelMetricResponseBody(DescribeRtcChannelMetricResponseBody &&) = default ;
    DescribeRtcChannelMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricResponseBody() = default ;
    DescribeRtcChannelMetricResponseBody& operator=(const DescribeRtcChannelMetricResponseBody &) = default ;
    DescribeRtcChannelMetricResponseBody& operator=(DescribeRtcChannelMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelMetricInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // channelMetricInfo Field Functions 
    bool hasChannelMetricInfo() const { return this->channelMetricInfo_ != nullptr;};
    void deleteChannelMetricInfo() { this->channelMetricInfo_ = nullptr;};
    inline const DescribeRtcChannelMetricResponseBodyChannelMetricInfo & channelMetricInfo() const { DARABONBA_PTR_GET_CONST(channelMetricInfo_, DescribeRtcChannelMetricResponseBodyChannelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBodyChannelMetricInfo channelMetricInfo() { DARABONBA_PTR_GET(channelMetricInfo_, DescribeRtcChannelMetricResponseBodyChannelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBody& setChannelMetricInfo(const DescribeRtcChannelMetricResponseBodyChannelMetricInfo & channelMetricInfo) { DARABONBA_PTR_SET_VALUE(channelMetricInfo_, channelMetricInfo) };
    inline DescribeRtcChannelMetricResponseBody& setChannelMetricInfo(DescribeRtcChannelMetricResponseBodyChannelMetricInfo && channelMetricInfo) { DARABONBA_PTR_SET_RVALUE(channelMetricInfo_, channelMetricInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcChannelMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfo> channelMetricInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
