// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPPREFIXLISTIPPREFIXLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPPREFIXLISTIPPREFIXLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList& obj) { 
      DARABONBA_PTR_TO_JSON(IpPrefix, ipPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPrefix, ipPrefix_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipPrefix_ != nullptr; };
    // ipPrefix Field Functions 
    bool hasIpPrefix() const { return this->ipPrefix_ != nullptr;};
    void deleteIpPrefix() { this->ipPrefix_ = nullptr;};
    inline string ipPrefix() const { DARABONBA_PTR_GET_DEFAULT(ipPrefix_, "") };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList& setIpPrefix(string ipPrefix) { DARABONBA_PTR_SET_VALUE(ipPrefix_, ipPrefix) };


  protected:
    std::shared_ptr<string> ipPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
