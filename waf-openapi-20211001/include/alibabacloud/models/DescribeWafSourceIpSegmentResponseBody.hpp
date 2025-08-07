// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWafSourceIpSegmentResponseBodyWafSourceIp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeWafSourceIpSegmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWafSourceIpSegmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WafSourceIp, wafSourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWafSourceIpSegmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WafSourceIp, wafSourceIp_);
    };
    DescribeWafSourceIpSegmentResponseBody() = default ;
    DescribeWafSourceIpSegmentResponseBody(const DescribeWafSourceIpSegmentResponseBody &) = default ;
    DescribeWafSourceIpSegmentResponseBody(DescribeWafSourceIpSegmentResponseBody &&) = default ;
    DescribeWafSourceIpSegmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWafSourceIpSegmentResponseBody() = default ;
    DescribeWafSourceIpSegmentResponseBody& operator=(const DescribeWafSourceIpSegmentResponseBody &) = default ;
    DescribeWafSourceIpSegmentResponseBody& operator=(DescribeWafSourceIpSegmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->wafSourceIp_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWafSourceIpSegmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wafSourceIp Field Functions 
    bool hasWafSourceIp() const { return this->wafSourceIp_ != nullptr;};
    void deleteWafSourceIp() { this->wafSourceIp_ = nullptr;};
    inline const DescribeWafSourceIpSegmentResponseBodyWafSourceIp & wafSourceIp() const { DARABONBA_PTR_GET_CONST(wafSourceIp_, DescribeWafSourceIpSegmentResponseBodyWafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBodyWafSourceIp wafSourceIp() { DARABONBA_PTR_GET(wafSourceIp_, DescribeWafSourceIpSegmentResponseBodyWafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBody& setWafSourceIp(const DescribeWafSourceIpSegmentResponseBodyWafSourceIp & wafSourceIp) { DARABONBA_PTR_SET_VALUE(wafSourceIp_, wafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBody& setWafSourceIp(DescribeWafSourceIpSegmentResponseBodyWafSourceIp && wafSourceIp) { DARABONBA_PTR_SET_RVALUE(wafSourceIp_, wafSourceIp) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The back-to-origin CIDR blocks that are used by the protection cluster.
    std::shared_ptr<DescribeWafSourceIpSegmentResponseBodyWafSourceIp> wafSourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
