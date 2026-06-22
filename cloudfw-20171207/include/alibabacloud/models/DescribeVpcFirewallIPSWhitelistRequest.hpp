// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLIPSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallIPSWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeVpcFirewallIPSWhitelistRequest() = default ;
    DescribeVpcFirewallIPSWhitelistRequest(const DescribeVpcFirewallIPSWhitelistRequest &) = default ;
    DescribeVpcFirewallIPSWhitelistRequest(DescribeVpcFirewallIPSWhitelistRequest &&) = default ;
    DescribeVpcFirewallIPSWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallIPSWhitelistRequest() = default ;
    DescribeVpcFirewallIPSWhitelistRequest& operator=(const DescribeVpcFirewallIPSWhitelistRequest &) = default ;
    DescribeVpcFirewallIPSWhitelistRequest& operator=(DescribeVpcFirewallIPSWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->memberUid_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallIPSWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeVpcFirewallIPSWhitelistRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallIPSWhitelistRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The language of the request and response.
    // 
    // Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The UID of the Cloud Firewall member accounts.
    shared_ptr<int64_t> memberUid_ {};
    // The instance ID of the VPC firewall. Valid values:
    // 
    // - If the VPC firewall protects network instances in a Cloud Enterprise Network (CEN) instance, the instance ID is the CEN instance ID. For CEN Basic Edition, call the [DescribeVpcFirewallCenList](https://help.aliyun.com/document_detail/345777.html) operation to query the CEN instance ID. For CEN Enterprise Edition, call the [DescribeTrFirewallsV2List](https://help.aliyun.com/document_detail/2384695.html) operation to query the CEN instance ID.
    // - If the VPC firewall protects traffic between two VPCs connected through Express Connect, the instance ID is the VPC firewall instance ID. Call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation to query the VPC firewall instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
