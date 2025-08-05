// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPCVPCCIDRTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPCVPCCIDRTABLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_TO_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(RouteEntryList, routeEntryList_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList(const DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList(DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList &&) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& operator=(const DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& operator=(DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->routeEntryList_ != nullptr
        && this->routeTableId_ != nullptr; };
    // routeEntryList Field Functions 
    bool hasRouteEntryList() const { return this->routeEntryList_ != nullptr;};
    void deleteRouteEntryList() { this->routeEntryList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList() const { DARABONBA_PTR_GET_CONST(routeEntryList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>) };
    inline vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> routeEntryList() { DARABONBA_PTR_GET(routeEntryList_, vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& setRouteEntryList(const vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> & routeEntryList) { DARABONBA_PTR_SET_VALUE(routeEntryList_, routeEntryList) };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& setRouteEntryList(vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList> && routeEntryList) { DARABONBA_PTR_SET_RVALUE(routeEntryList_, routeEntryList) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The route entries for the VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallCenDetailResponseBodyLocalVpcVpcCidrTableListRouteEntryList>> routeEntryList_ = nullptr;
    // The route table ID of the VPC.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
