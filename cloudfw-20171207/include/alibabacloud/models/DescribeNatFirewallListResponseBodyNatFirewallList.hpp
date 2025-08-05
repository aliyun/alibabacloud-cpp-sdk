// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTRESPONSEBODYNATFIREWALLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTRESPONSEBODYNATFIREWALLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallListResponseBodyNatFirewallList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallListResponseBodyNatFirewallList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_TO_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallListResponseBodyNatFirewallList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_FROM_JSON(ProxyStatus, proxyStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeNatFirewallListResponseBodyNatFirewallList() = default ;
    DescribeNatFirewallListResponseBodyNatFirewallList(const DescribeNatFirewallListResponseBodyNatFirewallList &) = default ;
    DescribeNatFirewallListResponseBodyNatFirewallList(DescribeNatFirewallListResponseBodyNatFirewallList &&) = default ;
    DescribeNatFirewallListResponseBodyNatFirewallList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallListResponseBodyNatFirewallList() = default ;
    DescribeNatFirewallListResponseBodyNatFirewallList& operator=(const DescribeNatFirewallListResponseBodyNatFirewallList &) = default ;
    DescribeNatFirewallListResponseBodyNatFirewallList& operator=(DescribeNatFirewallListResponseBodyNatFirewallList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->errorDetail_ != nullptr && this->memberUid_ != nullptr && this->natGatewayId_ != nullptr && this->natGatewayName_ != nullptr && this->natRouteEntryList_ != nullptr
        && this->proxyId_ != nullptr && this->proxyName_ != nullptr && this->proxyStatus_ != nullptr && this->regionId_ != nullptr && this->strictMode_ != nullptr
        && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline string errorDetail() const { DARABONBA_PTR_GET_DEFAULT(errorDetail_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setErrorDetail(string errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // natRouteEntryList Field Functions 
    bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
    void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
    inline const vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList> & natRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList>) };
    inline vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList> natRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList>) };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setNatRouteEntryList(const vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setNatRouteEntryList(vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // proxyName Field Functions 
    bool hasProxyName() const { return this->proxyName_ != nullptr;};
    void deleteProxyName() { this->proxyName_ = nullptr;};
    inline string proxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


    // proxyStatus Field Functions 
    bool hasProxyStatus() const { return this->proxyStatus_ != nullptr;};
    void deleteProxyStatus() { this->proxyStatus_ = nullptr;};
    inline string proxyStatus() const { DARABONBA_PTR_GET_DEFAULT(proxyStatus_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setProxyStatus(string proxyStatus) { DARABONBA_PTR_SET_VALUE(proxyStatus_, proxyStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeNatFirewallListResponseBodyNatFirewallList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The UID of the Alibaba Cloud account.
    // 
    // >  The value of this parameter indicates the management account to which the member is added.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The cause of the error.
    std::shared_ptr<string> errorDetail_ = nullptr;
    // The UID of the member in Cloud Firewall.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The name of the NAT gateway.
    std::shared_ptr<string> natGatewayName_ = nullptr;
    // The default route entries of the NAT gateway.
    std::shared_ptr<vector<Models::DescribeNatFirewallListResponseBodyNatFirewallListNatRouteEntryList>> natRouteEntryList_ = nullptr;
    // The ID of the NAT firewall.
    std::shared_ptr<string> proxyId_ = nullptr;
    // The name of the NAT firewall.
    std::shared_ptr<string> proxyName_ = nullptr;
    // The status of the NAT firewall. Valid values:
    // 
    // *   configuring
    // *   deleting
    // *   normal
    // *   abnormal
    // *   opening
    // *   closing
    // *   closed
    std::shared_ptr<string> proxyStatus_ = nullptr;
    // The region ID of your Cloud Firewall.
    // 
    // >  For more information about the supported regions of Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether the strict mode is enabled. Valid values: 1, which specifies yes, and 0, which specifies no.
    std::shared_ptr<int32_t> strictMode_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
