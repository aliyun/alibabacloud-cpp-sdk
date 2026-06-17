// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteVpcFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DeleteVpcFirewallControlPolicyRequest() = default ;
    DeleteVpcFirewallControlPolicyRequest(const DeleteVpcFirewallControlPolicyRequest &) = default ;
    DeleteVpcFirewallControlPolicyRequest(DeleteVpcFirewallControlPolicyRequest &&) = default ;
    DeleteVpcFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVpcFirewallControlPolicyRequest() = default ;
    DeleteVpcFirewallControlPolicyRequest& operator=(const DeleteVpcFirewallControlPolicyRequest &) = default ;
    DeleteVpcFirewallControlPolicyRequest& operator=(DeleteVpcFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && this->lang_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DeleteVpcFirewallControlPolicyRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteVpcFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DeleteVpcFirewallControlPolicyRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The UUID of the access control policy for the VPC firewall.
    // 
    // When you delete an access control policy, you must provide the UUID of the policy. You can call the [DescribeVpcFirewallControlPolicy](https://help.aliyun.com/document_detail/159758.html) operation to query the UUID.
    // 
    // This parameter is required.
    shared_ptr<string> aclUuid_ {};
    // The language of the content within the request and response.
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the policy group for the VPC firewall. You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the ID.
    // 
    // Valid values:
    // 
    // - If the VPC firewall is used to protect a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance.
    // 
    //   Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
    // - If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the ID of the VPC firewall instance.
    // 
    //   Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
