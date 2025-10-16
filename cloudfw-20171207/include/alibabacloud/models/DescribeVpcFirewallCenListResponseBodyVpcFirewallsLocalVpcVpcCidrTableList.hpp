// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLSLOCALVPCVPCCIDRTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENLISTRESPONSEBODYVPCFIREWALLSLOCALVPCVPCCIDRTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &&) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& operator=(const DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& operator=(DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routeEntryList_ == nullptr
        && return this->routeTableId_ == nullptr; };
    // routeEntryList Field Functions 
    bool hasRouteEntryList() const { return this->routeEntryList_ != nullptr;};
    void deleteRouteEntryList() { this->routeEntryList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList() const { DARABONBA_PTR_GET_CONST(routeEntryList_, vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>) };
    inline vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> routeEntryList() { DARABONBA_PTR_GET(routeEntryList_, vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteEntryList(const vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList) { DARABONBA_PTR_SET_VALUE(routeEntryList_, routeEntryList) };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteEntryList(vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> && routeEntryList) { DARABONBA_PTR_SET_RVALUE(routeEntryList_, routeEntryList) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // An array that consists of the route entries for the VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallCenListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList_ = nullptr;
    // The route table ID of the VPC.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
