// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNatFirewallListRequest() = default ;
    DescribeNatFirewallListRequest(const DescribeNatFirewallListRequest &) = default ;
    DescribeNatFirewallListRequest(DescribeNatFirewallListRequest &&) = default ;
    DescribeNatFirewallListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallListRequest() = default ;
    DescribeNatFirewallListRequest& operator=(const DescribeNatFirewallListRequest &) = default ;
    DescribeNatFirewallListRequest& operator=(DescribeNatFirewallListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->memberUid_ == nullptr && this->natGatewayId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->proxyId_ == nullptr
        && this->proxyName_ == nullptr && this->regionNo_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNatFirewallListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeNatFirewallListRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallListRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribeNatFirewallListRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeNatFirewallListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline DescribeNatFirewallListRequest& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // proxyName Field Functions 
    bool hasProxyName() const { return this->proxyName_ != nullptr;};
    void deleteProxyName() { this->proxyName_ = nullptr;};
    inline string getProxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
    inline DescribeNatFirewallListRequest& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNatFirewallListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNatFirewallListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNatFirewallListRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The language of the content within the response. Valid values:
    // *   **zh** (default)
    // *   **en**
    shared_ptr<string> lang_ {};
    // The UID of the member that is managed by your Alibaba Cloud account.
    shared_ptr<int64_t> memberUid_ {};
    // The ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    // 
    // Default value: **10**.**** Maximum value: **50**.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the NAT firewall.
    shared_ptr<string> proxyId_ {};
    // The name of the NAT firewall. The name must be 4 to 50 characters in length, and can contain letters, digits, and underscores (_). The name cannot start with an underscore.
    shared_ptr<string> proxyName_ {};
    // The region ID of the virtual private cloud (VPC).
    shared_ptr<string> regionNo_ {};
    // The status of the NAT firewall. Valid values:
    // 
    // *   configuring
    // *   deleting
    // *   normal
    // *   abnormal
    // *   opening
    // *   closing
    // *   closed
    shared_ptr<string> status_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
