// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcPeakChannelCntDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcPeakChannelCntDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PeakChannelCntDataPerInterval, peakChannelCntDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcPeakChannelCntDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PeakChannelCntDataPerInterval, peakChannelCntDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcPeakChannelCntDataResponseBody() = default ;
    DescribeRtcPeakChannelCntDataResponseBody(const DescribeRtcPeakChannelCntDataResponseBody &) = default ;
    DescribeRtcPeakChannelCntDataResponseBody(DescribeRtcPeakChannelCntDataResponseBody &&) = default ;
    DescribeRtcPeakChannelCntDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcPeakChannelCntDataResponseBody() = default ;
    DescribeRtcPeakChannelCntDataResponseBody& operator=(const DescribeRtcPeakChannelCntDataResponseBody &) = default ;
    DescribeRtcPeakChannelCntDataResponseBody& operator=(DescribeRtcPeakChannelCntDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->peakChannelCntDataPerInterval_ != nullptr
        && this->requestId_ != nullptr; };
    // peakChannelCntDataPerInterval Field Functions 
    bool hasPeakChannelCntDataPerInterval() const { return this->peakChannelCntDataPerInterval_ != nullptr;};
    void deletePeakChannelCntDataPerInterval() { this->peakChannelCntDataPerInterval_ = nullptr;};
    inline const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval & peakChannelCntDataPerInterval() const { DARABONBA_PTR_GET_CONST(peakChannelCntDataPerInterval_, DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval peakChannelCntDataPerInterval() { DARABONBA_PTR_GET(peakChannelCntDataPerInterval_, DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBody& setPeakChannelCntDataPerInterval(const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval & peakChannelCntDataPerInterval) { DARABONBA_PTR_SET_VALUE(peakChannelCntDataPerInterval_, peakChannelCntDataPerInterval) };
    inline DescribeRtcPeakChannelCntDataResponseBody& setPeakChannelCntDataPerInterval(DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval && peakChannelCntDataPerInterval) { DARABONBA_PTR_SET_RVALUE(peakChannelCntDataPerInterval_, peakChannelCntDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcPeakChannelCntDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval> peakChannelCntDataPerInterval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
