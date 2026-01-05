// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class WafSourceIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WafSourceIp& obj) { 
        DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
        DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
      };
      friend void from_json(const Darabonba::Json& j, WafSourceIp& obj) { 
        DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
        DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
      };
      WafSourceIp() = default ;
      WafSourceIp(const WafSourceIp &) = default ;
      WafSourceIp(WafSourceIp &&) = default ;
      WafSourceIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WafSourceIp() = default ;
      WafSourceIp& operator=(const WafSourceIp &) = default ;
      WafSourceIp& operator=(WafSourceIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IPv4_ == nullptr
        && this->IPv6_ == nullptr; };
      // IPv4 Field Functions 
      bool hasIPv4() const { return this->IPv4_ != nullptr;};
      void deleteIPv4() { this->IPv4_ = nullptr;};
      inline const vector<string> & getIPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
      inline vector<string> getIPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
      inline WafSourceIp& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
      inline WafSourceIp& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


      // IPv6 Field Functions 
      bool hasIPv6() const { return this->IPv6_ != nullptr;};
      void deleteIPv6() { this->IPv6_ = nullptr;};
      inline const vector<string> & getIPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
      inline vector<string> getIPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
      inline WafSourceIp& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
      inline WafSourceIp& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


    protected:
      // An array of back-to-origin IPv4 CIDR blocks.
      shared_ptr<vector<string>> IPv4_ {};
      // An array of back-to-origin IPv6 CIDR blocks.
      shared_ptr<vector<string>> IPv6_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->wafSourceIp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWafSourceIpSegmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wafSourceIp Field Functions 
    bool hasWafSourceIp() const { return this->wafSourceIp_ != nullptr;};
    void deleteWafSourceIp() { this->wafSourceIp_ = nullptr;};
    inline const DescribeWafSourceIpSegmentResponseBody::WafSourceIp & getWafSourceIp() const { DARABONBA_PTR_GET_CONST(wafSourceIp_, DescribeWafSourceIpSegmentResponseBody::WafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBody::WafSourceIp getWafSourceIp() { DARABONBA_PTR_GET(wafSourceIp_, DescribeWafSourceIpSegmentResponseBody::WafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBody& setWafSourceIp(const DescribeWafSourceIpSegmentResponseBody::WafSourceIp & wafSourceIp) { DARABONBA_PTR_SET_VALUE(wafSourceIp_, wafSourceIp) };
    inline DescribeWafSourceIpSegmentResponseBody& setWafSourceIp(DescribeWafSourceIpSegmentResponseBody::WafSourceIp && wafSourceIp) { DARABONBA_PTR_SET_RVALUE(wafSourceIp_, wafSourceIp) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The back-to-origin CIDR blocks that are used by the protection cluster.
    shared_ptr<DescribeWafSourceIpSegmentResponseBody::WafSourceIp> wafSourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
