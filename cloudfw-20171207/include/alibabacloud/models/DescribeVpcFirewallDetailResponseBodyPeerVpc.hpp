// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYPEERVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYPEERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDetailResponseBodyPeerVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailResponseBodyPeerVpc& obj) { 
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailResponseBodyPeerVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceId, routerInterfaceId_);
      DARABONBA_PTR_FROM_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcFirewallDetailResponseBodyPeerVpc() = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpc(const DescribeVpcFirewallDetailResponseBodyPeerVpc &) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpc(DescribeVpcFirewallDetailResponseBodyPeerVpc &&) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailResponseBodyPeerVpc() = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpc& operator=(const DescribeVpcFirewallDetailResponseBodyPeerVpc &) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpc& operator=(DescribeVpcFirewallDetailResponseBodyPeerVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniId_ == nullptr
        && return this->eniPrivateIpAddress_ == nullptr && return this->regionNo_ == nullptr && return this->routerInterfaceId_ == nullptr && return this->vpcCidrTableList_ == nullptr && return this->vpcId_ == nullptr
        && return this->vpcName_ == nullptr; };
    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // eniPrivateIpAddress Field Functions 
    bool hasEniPrivateIpAddress() const { return this->eniPrivateIpAddress_ != nullptr;};
    void deleteEniPrivateIpAddress() { this->eniPrivateIpAddress_ = nullptr;};
    inline string eniPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddress_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setEniPrivateIpAddress(string eniPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddress_, eniPrivateIpAddress) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routerInterfaceId Field Functions 
    bool hasRouterInterfaceId() const { return this->routerInterfaceId_ != nullptr;};
    void deleteRouterInterfaceId() { this->routerInterfaceId_ = nullptr;};
    inline string routerInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(routerInterfaceId_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setRouterInterfaceId(string routerInterfaceId) { DARABONBA_PTR_SET_VALUE(routerInterfaceId_, routerInterfaceId) };


    // vpcCidrTableList Field Functions 
    bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
    void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList> & vpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList>) };
    inline vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList> vpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList>) };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setVpcCidrTableList(const vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setVpcCidrTableList(vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The ID of the ENI for the peer VPC.
    std::shared_ptr<string> eniId_ = nullptr;
    // The private IP address of the ENI for the peer VPC.
    std::shared_ptr<string> eniPrivateIpAddress_ = nullptr;
    // The region ID of the peer VPC.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The router interface ID of the peer VPC.
    std::shared_ptr<string> routerInterfaceId_ = nullptr;
    // The CIDR blocks of the peer VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableList>> vpcCidrTableList_ = nullptr;
    // The ID of the peer VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the peer VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
