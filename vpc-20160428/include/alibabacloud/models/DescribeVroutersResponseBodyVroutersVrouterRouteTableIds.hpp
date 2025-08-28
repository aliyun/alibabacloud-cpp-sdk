// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERSVROUTERROUTETABLEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVROUTERSRESPONSEBODYVROUTERSVROUTERROUTETABLEIDS_HPP_
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
  class DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& obj) { 
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds() = default ;
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds(const DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds &) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds(DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds &&) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds() = default ;
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& operator=(const DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds &) = default ;
    DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& operator=(DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeTableId_ != nullptr; };
    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline const vector<string> & routeTableId() const { DARABONBA_PTR_GET_CONST(routeTableId_, vector<string>) };
    inline vector<string> routeTableId() { DARABONBA_PTR_GET(routeTableId_, vector<string>) };
    inline DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& setRouteTableId(const vector<string> & routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };
    inline DescribeVRoutersResponseBodyVRoutersVRouterRouteTableIds& setRouteTableId(vector<string> && routeTableId) { DARABONBA_PTR_SET_RVALUE(routeTableId_, routeTableId) };


  protected:
    std::shared_ptr<vector<string>> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
