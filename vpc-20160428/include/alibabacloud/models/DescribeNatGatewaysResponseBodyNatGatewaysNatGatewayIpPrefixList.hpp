// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPPREFIXLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYSNATGATEWAYIPPREFIXLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& obj) { 
      DARABONBA_PTR_TO_JSON(IpPrefixList, ipPrefixList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPrefixList, ipPrefixList_);
    };
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList &&) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList() = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& operator=(const DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList &) = default ;
    DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& operator=(DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPrefixList_ == nullptr; };
    // ipPrefixList Field Functions 
    bool hasIpPrefixList() const { return this->ipPrefixList_ != nullptr;};
    void deleteIpPrefixList() { this->ipPrefixList_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList> & ipPrefixList() const { DARABONBA_PTR_GET_CONST(ipPrefixList_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList> ipPrefixList() { DARABONBA_PTR_GET(ipPrefixList_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList>) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& setIpPrefixList(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList> & ipPrefixList) { DARABONBA_PTR_SET_VALUE(ipPrefixList_, ipPrefixList) };
    inline DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixList& setIpPrefixList(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList> && ipPrefixList) { DARABONBA_PTR_SET_RVALUE(ipPrefixList_, ipPrefixList) };


  protected:
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGatewayIpPrefixListIpPrefixList>> ipPrefixList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
