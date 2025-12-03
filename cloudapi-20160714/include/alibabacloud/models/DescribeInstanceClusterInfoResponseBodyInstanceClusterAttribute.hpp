// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCECLUSTERATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERINFORESPONSEBODYINSTANCECLUSTERATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectCidrBlocks, connectCidrBlocks_);
      DARABONBA_PTR_TO_JSON(ConnectVpcId, connectVpcId_);
      DARABONBA_PTR_TO_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_TO_JSON(HttpsPolicies, httpsPolicies_);
      DARABONBA_PTR_TO_JSON(IPV4AclId, IPV4AclId_);
      DARABONBA_PTR_TO_JSON(IPV4AclName, IPV4AclName_);
      DARABONBA_PTR_TO_JSON(IPV4AclStatus, IPV4AclStatus_);
      DARABONBA_PTR_TO_JSON(IPV4AclType, IPV4AclType_);
      DARABONBA_PTR_TO_JSON(IPV6AclId, IPV6AclId_);
      DARABONBA_PTR_TO_JSON(IPV6AclName, IPV6AclName_);
      DARABONBA_PTR_TO_JSON(IPV6AclStatus, IPV6AclStatus_);
      DARABONBA_PTR_TO_JSON(IPV6AclType, IPV6AclType_);
      DARABONBA_PTR_TO_JSON(InternetEgressAddress, internetEgressAddress_);
      DARABONBA_PTR_TO_JSON(IntranetEgressAddress, intranetEgressAddress_);
      DARABONBA_PTR_TO_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_TO_JSON(SupportIpv6, supportIpv6_);
      DARABONBA_PTR_TO_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_TO_JSON(UserVswitchId, userVswitchId_);
      DARABONBA_PTR_TO_JSON(VipTypeList, vipTypeList_);
      DARABONBA_PTR_TO_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectCidrBlocks, connectCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(ConnectVpcId, connectVpcId_);
      DARABONBA_PTR_FROM_JSON(EgressIpv6Enable, egressIpv6Enable_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicies, httpsPolicies_);
      DARABONBA_PTR_FROM_JSON(IPV4AclId, IPV4AclId_);
      DARABONBA_PTR_FROM_JSON(IPV4AclName, IPV4AclName_);
      DARABONBA_PTR_FROM_JSON(IPV4AclStatus, IPV4AclStatus_);
      DARABONBA_PTR_FROM_JSON(IPV4AclType, IPV4AclType_);
      DARABONBA_PTR_FROM_JSON(IPV6AclId, IPV6AclId_);
      DARABONBA_PTR_FROM_JSON(IPV6AclName, IPV6AclName_);
      DARABONBA_PTR_FROM_JSON(IPV6AclStatus, IPV6AclStatus_);
      DARABONBA_PTR_FROM_JSON(IPV6AclType, IPV6AclType_);
      DARABONBA_PTR_FROM_JSON(InternetEgressAddress, internetEgressAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetEgressAddress, intranetEgressAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetSegments, intranetSegments_);
      DARABONBA_PTR_FROM_JSON(SupportIpv6, supportIpv6_);
      DARABONBA_PTR_FROM_JSON(UserVpcId, userVpcId_);
      DARABONBA_PTR_FROM_JSON(UserVswitchId, userVswitchId_);
      DARABONBA_PTR_FROM_JSON(VipTypeList, vipTypeList_);
      DARABONBA_PTR_FROM_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute(const DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute(DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute &&) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute() = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& operator=(const DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute &) = default ;
    DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& operator=(DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectCidrBlocks_ == nullptr
        && return this->connectVpcId_ == nullptr && return this->egressIpv6Enable_ == nullptr && return this->httpsPolicies_ == nullptr && return this->IPV4AclId_ == nullptr && return this->IPV4AclName_ == nullptr
        && return this->IPV4AclStatus_ == nullptr && return this->IPV4AclType_ == nullptr && return this->IPV6AclId_ == nullptr && return this->IPV6AclName_ == nullptr && return this->IPV6AclStatus_ == nullptr
        && return this->IPV6AclType_ == nullptr && return this->internetEgressAddress_ == nullptr && return this->intranetEgressAddress_ == nullptr && return this->intranetSegments_ == nullptr && return this->supportIpv6_ == nullptr
        && return this->userVpcId_ == nullptr && return this->userVswitchId_ == nullptr && return this->vipTypeList_ == nullptr && return this->vpcIntranetEnable_ == nullptr && return this->vpcOwnerId_ == nullptr
        && return this->vpcSlbIntranetEnable_ == nullptr; };
    // connectCidrBlocks Field Functions 
    bool hasConnectCidrBlocks() const { return this->connectCidrBlocks_ != nullptr;};
    void deleteConnectCidrBlocks() { this->connectCidrBlocks_ = nullptr;};
    inline string connectCidrBlocks() const { DARABONBA_PTR_GET_DEFAULT(connectCidrBlocks_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setConnectCidrBlocks(string connectCidrBlocks) { DARABONBA_PTR_SET_VALUE(connectCidrBlocks_, connectCidrBlocks) };


    // connectVpcId Field Functions 
    bool hasConnectVpcId() const { return this->connectVpcId_ != nullptr;};
    void deleteConnectVpcId() { this->connectVpcId_ = nullptr;};
    inline string connectVpcId() const { DARABONBA_PTR_GET_DEFAULT(connectVpcId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setConnectVpcId(string connectVpcId) { DARABONBA_PTR_SET_VALUE(connectVpcId_, connectVpcId) };


    // egressIpv6Enable Field Functions 
    bool hasEgressIpv6Enable() const { return this->egressIpv6Enable_ != nullptr;};
    void deleteEgressIpv6Enable() { this->egressIpv6Enable_ = nullptr;};
    inline bool egressIpv6Enable() const { DARABONBA_PTR_GET_DEFAULT(egressIpv6Enable_, false) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setEgressIpv6Enable(bool egressIpv6Enable) { DARABONBA_PTR_SET_VALUE(egressIpv6Enable_, egressIpv6Enable) };


    // httpsPolicies Field Functions 
    bool hasHttpsPolicies() const { return this->httpsPolicies_ != nullptr;};
    void deleteHttpsPolicies() { this->httpsPolicies_ = nullptr;};
    inline string httpsPolicies() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicies_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setHttpsPolicies(string httpsPolicies) { DARABONBA_PTR_SET_VALUE(httpsPolicies_, httpsPolicies) };


    // IPV4AclId Field Functions 
    bool hasIPV4AclId() const { return this->IPV4AclId_ != nullptr;};
    void deleteIPV4AclId() { this->IPV4AclId_ = nullptr;};
    inline string IPV4AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV4AclId(string IPV4AclId) { DARABONBA_PTR_SET_VALUE(IPV4AclId_, IPV4AclId) };


    // IPV4AclName Field Functions 
    bool hasIPV4AclName() const { return this->IPV4AclName_ != nullptr;};
    void deleteIPV4AclName() { this->IPV4AclName_ = nullptr;};
    inline string IPV4AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclName_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV4AclName(string IPV4AclName) { DARABONBA_PTR_SET_VALUE(IPV4AclName_, IPV4AclName) };


    // IPV4AclStatus Field Functions 
    bool hasIPV4AclStatus() const { return this->IPV4AclStatus_ != nullptr;};
    void deleteIPV4AclStatus() { this->IPV4AclStatus_ = nullptr;};
    inline string IPV4AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclStatus_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV4AclStatus(string IPV4AclStatus) { DARABONBA_PTR_SET_VALUE(IPV4AclStatus_, IPV4AclStatus) };


    // IPV4AclType Field Functions 
    bool hasIPV4AclType() const { return this->IPV4AclType_ != nullptr;};
    void deleteIPV4AclType() { this->IPV4AclType_ = nullptr;};
    inline string IPV4AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV4AclType_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV4AclType(string IPV4AclType) { DARABONBA_PTR_SET_VALUE(IPV4AclType_, IPV4AclType) };


    // IPV6AclId Field Functions 
    bool hasIPV6AclId() const { return this->IPV6AclId_ != nullptr;};
    void deleteIPV6AclId() { this->IPV6AclId_ = nullptr;};
    inline string IPV6AclId() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV6AclId(string IPV6AclId) { DARABONBA_PTR_SET_VALUE(IPV6AclId_, IPV6AclId) };


    // IPV6AclName Field Functions 
    bool hasIPV6AclName() const { return this->IPV6AclName_ != nullptr;};
    void deleteIPV6AclName() { this->IPV6AclName_ = nullptr;};
    inline string IPV6AclName() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclName_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV6AclName(string IPV6AclName) { DARABONBA_PTR_SET_VALUE(IPV6AclName_, IPV6AclName) };


    // IPV6AclStatus Field Functions 
    bool hasIPV6AclStatus() const { return this->IPV6AclStatus_ != nullptr;};
    void deleteIPV6AclStatus() { this->IPV6AclStatus_ = nullptr;};
    inline string IPV6AclStatus() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclStatus_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV6AclStatus(string IPV6AclStatus) { DARABONBA_PTR_SET_VALUE(IPV6AclStatus_, IPV6AclStatus) };


    // IPV6AclType Field Functions 
    bool hasIPV6AclType() const { return this->IPV6AclType_ != nullptr;};
    void deleteIPV6AclType() { this->IPV6AclType_ = nullptr;};
    inline string IPV6AclType() const { DARABONBA_PTR_GET_DEFAULT(IPV6AclType_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIPV6AclType(string IPV6AclType) { DARABONBA_PTR_SET_VALUE(IPV6AclType_, IPV6AclType) };


    // internetEgressAddress Field Functions 
    bool hasInternetEgressAddress() const { return this->internetEgressAddress_ != nullptr;};
    void deleteInternetEgressAddress() { this->internetEgressAddress_ = nullptr;};
    inline string internetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(internetEgressAddress_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setInternetEgressAddress(string internetEgressAddress) { DARABONBA_PTR_SET_VALUE(internetEgressAddress_, internetEgressAddress) };


    // intranetEgressAddress Field Functions 
    bool hasIntranetEgressAddress() const { return this->intranetEgressAddress_ != nullptr;};
    void deleteIntranetEgressAddress() { this->intranetEgressAddress_ = nullptr;};
    inline string intranetEgressAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetEgressAddress_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIntranetEgressAddress(string intranetEgressAddress) { DARABONBA_PTR_SET_VALUE(intranetEgressAddress_, intranetEgressAddress) };


    // intranetSegments Field Functions 
    bool hasIntranetSegments() const { return this->intranetSegments_ != nullptr;};
    void deleteIntranetSegments() { this->intranetSegments_ = nullptr;};
    inline string intranetSegments() const { DARABONBA_PTR_GET_DEFAULT(intranetSegments_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setIntranetSegments(string intranetSegments) { DARABONBA_PTR_SET_VALUE(intranetSegments_, intranetSegments) };


    // supportIpv6 Field Functions 
    bool hasSupportIpv6() const { return this->supportIpv6_ != nullptr;};
    void deleteSupportIpv6() { this->supportIpv6_ = nullptr;};
    inline bool supportIpv6() const { DARABONBA_PTR_GET_DEFAULT(supportIpv6_, false) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setSupportIpv6(bool supportIpv6) { DARABONBA_PTR_SET_VALUE(supportIpv6_, supportIpv6) };


    // userVpcId Field Functions 
    bool hasUserVpcId() const { return this->userVpcId_ != nullptr;};
    void deleteUserVpcId() { this->userVpcId_ = nullptr;};
    inline string userVpcId() const { DARABONBA_PTR_GET_DEFAULT(userVpcId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setUserVpcId(string userVpcId) { DARABONBA_PTR_SET_VALUE(userVpcId_, userVpcId) };


    // userVswitchId Field Functions 
    bool hasUserVswitchId() const { return this->userVswitchId_ != nullptr;};
    void deleteUserVswitchId() { this->userVswitchId_ = nullptr;};
    inline string userVswitchId() const { DARABONBA_PTR_GET_DEFAULT(userVswitchId_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setUserVswitchId(string userVswitchId) { DARABONBA_PTR_SET_VALUE(userVswitchId_, userVswitchId) };


    // vipTypeList Field Functions 
    bool hasVipTypeList() const { return this->vipTypeList_ != nullptr;};
    void deleteVipTypeList() { this->vipTypeList_ = nullptr;};
    inline string vipTypeList() const { DARABONBA_PTR_GET_DEFAULT(vipTypeList_, "") };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setVipTypeList(string vipTypeList) { DARABONBA_PTR_SET_VALUE(vipTypeList_, vipTypeList) };


    // vpcIntranetEnable Field Functions 
    bool hasVpcIntranetEnable() const { return this->vpcIntranetEnable_ != nullptr;};
    void deleteVpcIntranetEnable() { this->vpcIntranetEnable_ = nullptr;};
    inline bool vpcIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcIntranetEnable_, false) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setVpcIntranetEnable(bool vpcIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcIntranetEnable_, vpcIntranetEnable) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t vpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // vpcSlbIntranetEnable Field Functions 
    bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
    void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
    inline bool vpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, false) };
    inline DescribeInstanceClusterInfoResponseBodyInstanceClusterAttribute& setVpcSlbIntranetEnable(bool vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


  protected:
    // The internal CIDR block of the user VPC that can be accessed by the cluster if the cluster consists of VPC integration instances.
    std::shared_ptr<string> connectCidrBlocks_ = nullptr;
    // The ID of the user VPC that is connected to the cluster if the cluster consists of VPC integration instances.
    std::shared_ptr<string> connectVpcId_ = nullptr;
    // Indicates whether outbound IPv6 traffic is supported.
    std::shared_ptr<bool> egressIpv6Enable_ = nullptr;
    // The HTTPS security policy.
    std::shared_ptr<string> httpsPolicies_ = nullptr;
    // The ID of the IPv4 access control list (ACL).
    std::shared_ptr<string> IPV4AclId_ = nullptr;
    // The name of the IPv4 ACL.
    std::shared_ptr<string> IPV4AclName_ = nullptr;
    // Indicates whether IPv4 access control is enabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> IPV4AclStatus_ = nullptr;
    // The type of the IPv4 ACL.
    // 
    // *   black: blacklist
    // *   white: whitelist
    std::shared_ptr<string> IPV4AclType_ = nullptr;
    // The ID of the IPv6 ACL.
    std::shared_ptr<string> IPV6AclId_ = nullptr;
    // The name of the IPv6 ACL.
    std::shared_ptr<string> IPV6AclName_ = nullptr;
    // Indicates whether IPv6 access control is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> IPV6AclStatus_ = nullptr;
    // The type of the IPv6 ACL. Valid values:
    // 
    // *   black: blacklist
    // *   white: whitelist
    std::shared_ptr<string> IPV6AclType_ = nullptr;
    // The outbound public IP address.
    std::shared_ptr<string> internetEgressAddress_ = nullptr;
    // The outbound private IP address.
    std::shared_ptr<string> intranetEgressAddress_ = nullptr;
    // The custom CIDR block. The configured CIDR block is considered as a private block.
    std::shared_ptr<string> intranetSegments_ = nullptr;
    // Indicates whether IPv6 traffic is supported.
    std::shared_ptr<bool> supportIpv6_ = nullptr;
    // The ID of the client VPC.
    std::shared_ptr<string> userVpcId_ = nullptr;
    // The vSwitch of the client VPC.
    std::shared_ptr<string> userVswitchId_ = nullptr;
    // The VIPs of the cluster.
    std::shared_ptr<string> vipTypeList_ = nullptr;
    // Indicates whether a virtual private cloud (VPC) domain name is enabled.
    std::shared_ptr<bool> vpcIntranetEnable_ = nullptr;
    // The ID of the account to which the VPC belongs.
    std::shared_ptr<int64_t> vpcOwnerId_ = nullptr;
    // Indicates whether self-calling is enabled.
    std::shared_ptr<bool> vpcSlbIntranetEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
