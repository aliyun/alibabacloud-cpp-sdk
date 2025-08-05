// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSPEERVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSPEERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationStatus, authorizationStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationStatus, authorizationStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcCidrTableList, vpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc(const DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc(DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc &&) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& operator=(const DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& operator=(DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationStatus_ != nullptr
        && this->ownerId_ != nullptr && this->regionNo_ != nullptr && this->vpcCidrTableList_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // authorizationStatus Field Functions 
    bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
    void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
    inline string authorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcCidrTableList Field Functions 
    bool hasVpcCidrTableList() const { return this->vpcCidrTableList_ != nullptr;};
    void deleteVpcCidrTableList() { this->vpcCidrTableList_ = nullptr;};
    inline const vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList> & vpcCidrTableList() const { DARABONBA_PTR_GET_CONST(vpcCidrTableList_, vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList>) };
    inline vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList> vpcCidrTableList() { DARABONBA_PTR_GET(vpcCidrTableList_, vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList>) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setVpcCidrTableList(const vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList> & vpcCidrTableList) { DARABONBA_PTR_SET_VALUE(vpcCidrTableList_, vpcCidrTableList) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setVpcCidrTableList(vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList> && vpcCidrTableList) { DARABONBA_PTR_SET_RVALUE(vpcCidrTableList_, vpcCidrTableList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // Indicates whether Cloud Firewall is authorized to access the peer VPC. The value is fixed as **authorized**, which indicates that Cloud Firewall is authorized to access the peer VPC.
    std::shared_ptr<string> authorizationStatus_ = nullptr;
    // The UID of the Alibaba Cloud account to which the peer VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the peer VPC.
    std::shared_ptr<string> regionNo_ = nullptr;
    // An array that consists of the CIDR blocks of the peer VPC.
    std::shared_ptr<vector<Models::DescribeVpcFirewallListResponseBodyVpcFirewallsPeerVpcVpcCidrTableList>> vpcCidrTableList_ = nullptr;
    // The ID of the peer VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the peer VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
