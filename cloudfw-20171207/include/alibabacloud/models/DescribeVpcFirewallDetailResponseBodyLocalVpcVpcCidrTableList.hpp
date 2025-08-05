// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYLOCALVPCVPCCIDRTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYLOCALVPCVPCCIDRTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList(const DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList(DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList &&) = default ;
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& operator=(const DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& operator=(DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeEntryList_ != nullptr
        && this->routeTableId_ != nullptr; };
    // routeEntryList Field Functions 
    bool hasRouteEntryList() const { return this->routeEntryList_ != nullptr;};
    void deleteRouteEntryList() { this->routeEntryList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList() const { DARABONBA_PTR_GET_CONST(routeEntryList_, vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>) };
    inline vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> routeEntryList() { DARABONBA_PTR_GET(routeEntryList_, vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>) };
    inline DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& setRouteEntryList(const vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList) { DARABONBA_PTR_SET_VALUE(routeEntryList_, routeEntryList) };
    inline DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& setRouteEntryList(vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> && routeEntryList) { DARABONBA_PTR_SET_RVALUE(routeEntryList_, routeEntryList) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The route entries of the local VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList_ = nullptr;
    // The ID of the route table for the local VPC.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
