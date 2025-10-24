// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODYWAFSOURCEIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAFSOURCEIPSEGMENTRESPONSEBODYWAFSOURCEIP_HPP_
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
  class DescribeWafSourceIpSegmentResponseBodyWafSourceIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWafSourceIpSegmentResponseBodyWafSourceIp& obj) { 
      DARABONBA_PTR_TO_JSON(IPv4, IPv4_);
      DARABONBA_PTR_TO_JSON(IPv6, IPv6_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWafSourceIpSegmentResponseBodyWafSourceIp& obj) { 
      DARABONBA_PTR_FROM_JSON(IPv4, IPv4_);
      DARABONBA_PTR_FROM_JSON(IPv6, IPv6_);
    };
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp() = default ;
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp(const DescribeWafSourceIpSegmentResponseBodyWafSourceIp &) = default ;
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp(DescribeWafSourceIpSegmentResponseBodyWafSourceIp &&) = default ;
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWafSourceIpSegmentResponseBodyWafSourceIp() = default ;
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp& operator=(const DescribeWafSourceIpSegmentResponseBodyWafSourceIp &) = default ;
    DescribeWafSourceIpSegmentResponseBodyWafSourceIp& operator=(DescribeWafSourceIpSegmentResponseBodyWafSourceIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPv4_ == nullptr
        && return this->IPv6_ == nullptr; };
    // IPv4 Field Functions 
    bool hasIPv4() const { return this->IPv4_ != nullptr;};
    void deleteIPv4() { this->IPv4_ = nullptr;};
    inline const vector<string> & IPv4() const { DARABONBA_PTR_GET_CONST(IPv4_, vector<string>) };
    inline vector<string> IPv4() { DARABONBA_PTR_GET(IPv4_, vector<string>) };
    inline DescribeWafSourceIpSegmentResponseBodyWafSourceIp& setIPv4(const vector<string> & IPv4) { DARABONBA_PTR_SET_VALUE(IPv4_, IPv4) };
    inline DescribeWafSourceIpSegmentResponseBodyWafSourceIp& setIPv4(vector<string> && IPv4) { DARABONBA_PTR_SET_RVALUE(IPv4_, IPv4) };


    // IPv6 Field Functions 
    bool hasIPv6() const { return this->IPv6_ != nullptr;};
    void deleteIPv6() { this->IPv6_ = nullptr;};
    inline const vector<string> & IPv6() const { DARABONBA_PTR_GET_CONST(IPv6_, vector<string>) };
    inline vector<string> IPv6() { DARABONBA_PTR_GET(IPv6_, vector<string>) };
    inline DescribeWafSourceIpSegmentResponseBodyWafSourceIp& setIPv6(const vector<string> & IPv6) { DARABONBA_PTR_SET_VALUE(IPv6_, IPv6) };
    inline DescribeWafSourceIpSegmentResponseBodyWafSourceIp& setIPv6(vector<string> && IPv6) { DARABONBA_PTR_SET_RVALUE(IPv6_, IPv6) };


  protected:
    // An array of back-to-origin IPv4 CIDR blocks.
    std::shared_ptr<vector<string>> IPv4_ = nullptr;
    // An array of back-to-origin IPv6 CIDR blocks.
    std::shared_ptr<vector<string>> IPv6_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
