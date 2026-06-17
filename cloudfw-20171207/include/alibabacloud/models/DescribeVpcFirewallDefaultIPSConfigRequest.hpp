// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDEFAULTIPSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDEFAULTIPSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDefaultIPSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeVpcFirewallDefaultIPSConfigRequest() = default ;
    DescribeVpcFirewallDefaultIPSConfigRequest(const DescribeVpcFirewallDefaultIPSConfigRequest &) = default ;
    DescribeVpcFirewallDefaultIPSConfigRequest(DescribeVpcFirewallDefaultIPSConfigRequest &&) = default ;
    DescribeVpcFirewallDefaultIPSConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDefaultIPSConfigRequest() = default ;
    DescribeVpcFirewallDefaultIPSConfigRequest& operator=(const DescribeVpcFirewallDefaultIPSConfigRequest &) = default ;
    DescribeVpcFirewallDefaultIPSConfigRequest& operator=(DescribeVpcFirewallDefaultIPSConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberUid_ == nullptr
        && this->vpcFirewallId_ == nullptr; };
    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallDefaultIPSConfigRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallDefaultIPSConfigRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The UID of the member account.
    shared_ptr<string> memberUid_ {};
    // The instance ID of the VPC firewall. Valid values:
    // 
    // - If the VPC firewall protects a network instance in a Cloud Enterprise Network (CEN) instance, set this parameter to the ID of the CEN instance. To query the ID of a CEN instance of Basic Edition, call the [DescribeVpcFirewallCenList](https://help.aliyun.com/document_detail/345777.html) operation. To query the ID of a CEN instance of Enterprise Edition, call the [DescribeTrFirewallsV2List](https://help.aliyun.com/document_detail/2384695.html) operation.
    // 
    // - If the VPC firewall protects traffic between two VPCs connected by an Express Connect circuit, set this parameter to the ID of the VPC firewall instance. To query the ID of the VPC firewall instance, call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
