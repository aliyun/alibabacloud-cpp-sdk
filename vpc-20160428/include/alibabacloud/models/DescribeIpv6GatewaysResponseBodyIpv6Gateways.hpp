// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODYIPV6GATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYSRESPONSEBODYIPV6GATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6GatewaysResponseBodyIpv6Gateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewaysResponseBodyIpv6Gateways& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6Gateway, ipv6Gateway_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewaysResponseBodyIpv6Gateways& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6Gateway, ipv6Gateway_);
    };
    DescribeIpv6GatewaysResponseBodyIpv6Gateways() = default ;
    DescribeIpv6GatewaysResponseBodyIpv6Gateways(const DescribeIpv6GatewaysResponseBodyIpv6Gateways &) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6Gateways(DescribeIpv6GatewaysResponseBodyIpv6Gateways &&) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6Gateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewaysResponseBodyIpv6Gateways() = default ;
    DescribeIpv6GatewaysResponseBodyIpv6Gateways& operator=(const DescribeIpv6GatewaysResponseBodyIpv6Gateways &) = default ;
    DescribeIpv6GatewaysResponseBodyIpv6Gateways& operator=(DescribeIpv6GatewaysResponseBodyIpv6Gateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv6Gateway_ == nullptr; };
    // ipv6Gateway Field Functions 
    bool hasIpv6Gateway() const { return this->ipv6Gateway_ != nullptr;};
    void deleteIpv6Gateway() { this->ipv6Gateway_ = nullptr;};
    inline const vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway> & ipv6Gateway() const { DARABONBA_PTR_GET_CONST(ipv6Gateway_, vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway>) };
    inline vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway> ipv6Gateway() { DARABONBA_PTR_GET(ipv6Gateway_, vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway>) };
    inline DescribeIpv6GatewaysResponseBodyIpv6Gateways& setIpv6Gateway(const vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway> & ipv6Gateway) { DARABONBA_PTR_SET_VALUE(ipv6Gateway_, ipv6Gateway) };
    inline DescribeIpv6GatewaysResponseBodyIpv6Gateways& setIpv6Gateway(vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway> && ipv6Gateway) { DARABONBA_PTR_SET_RVALUE(ipv6Gateway_, ipv6Gateway) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpv6GatewaysResponseBodyIpv6GatewaysIpv6Gateway>> ipv6Gateway_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
