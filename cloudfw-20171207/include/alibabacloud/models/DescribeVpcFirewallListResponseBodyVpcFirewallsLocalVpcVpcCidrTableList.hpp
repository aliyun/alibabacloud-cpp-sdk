// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSLOCALVPCVPCCIDRTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSLOCALVPCVPCCIDRTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &&) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& operator=(const DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& operator=(DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeEntryList_ != nullptr
        && this->routeTableId_ != nullptr; };
    // routeEntryList Field Functions 
    bool hasRouteEntryList() const { return this->routeEntryList_ != nullptr;};
    void deleteRouteEntryList() { this->routeEntryList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList() const { DARABONBA_PTR_GET_CONST(routeEntryList_, vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>) };
    inline vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> routeEntryList() { DARABONBA_PTR_GET(routeEntryList_, vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteEntryList(const vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList) { DARABONBA_PTR_SET_VALUE(routeEntryList_, routeEntryList) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteEntryList(vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList> && routeEntryList) { DARABONBA_PTR_SET_RVALUE(routeEntryList_, routeEntryList) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // An array that consists of the route entries of the local VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList_ = nullptr;
    // The ID of the route table for the local VPC.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
