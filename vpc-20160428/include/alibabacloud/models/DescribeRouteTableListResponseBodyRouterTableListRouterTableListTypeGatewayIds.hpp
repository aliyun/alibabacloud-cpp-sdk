// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPEGATEWAYIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPEGATEWAYIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayIds, gatewayIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayIds, gatewayIds_);
    };
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds &&) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& operator=(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& operator=(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayIds_ != nullptr; };
    // gatewayIds Field Functions 
    bool hasGatewayIds() const { return this->gatewayIds_ != nullptr;};
    void deleteGatewayIds() { this->gatewayIds_ = nullptr;};
    inline const vector<string> & gatewayIds() const { DARABONBA_PTR_GET_CONST(gatewayIds_, vector<string>) };
    inline vector<string> gatewayIds() { DARABONBA_PTR_GET(gatewayIds_, vector<string>) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& setGatewayIds(const vector<string> & gatewayIds) { DARABONBA_PTR_SET_VALUE(gatewayIds_, gatewayIds) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds& setGatewayIds(vector<string> && gatewayIds) { DARABONBA_PTR_SET_RVALUE(gatewayIds_, gatewayIds) };


  protected:
    std::shared_ptr<vector<string>> gatewayIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
