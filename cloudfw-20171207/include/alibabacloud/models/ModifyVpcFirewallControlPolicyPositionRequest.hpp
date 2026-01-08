// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONTROLPOLICYPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONTROLPOLICYPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallControlPolicyPositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_TO_JSON(OldOrder, oldOrder_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallControlPolicyPositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewOrder, newOrder_);
      DARABONBA_PTR_FROM_JSON(OldOrder, oldOrder_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallControlPolicyPositionRequest() = default ;
    ModifyVpcFirewallControlPolicyPositionRequest(const ModifyVpcFirewallControlPolicyPositionRequest &) = default ;
    ModifyVpcFirewallControlPolicyPositionRequest(ModifyVpcFirewallControlPolicyPositionRequest &&) = default ;
    ModifyVpcFirewallControlPolicyPositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallControlPolicyPositionRequest() = default ;
    ModifyVpcFirewallControlPolicyPositionRequest& operator=(const ModifyVpcFirewallControlPolicyPositionRequest &) = default ;
    ModifyVpcFirewallControlPolicyPositionRequest& operator=(ModifyVpcFirewallControlPolicyPositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && this->lang_ == nullptr && this->newOrder_ == nullptr && this->oldOrder_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ModifyVpcFirewallControlPolicyPositionRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallControlPolicyPositionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newOrder Field Functions 
    bool hasNewOrder() const { return this->newOrder_ != nullptr;};
    void deleteNewOrder() { this->newOrder_ = nullptr;};
    inline string getNewOrder() const { DARABONBA_PTR_GET_DEFAULT(newOrder_, "") };
    inline ModifyVpcFirewallControlPolicyPositionRequest& setNewOrder(string newOrder) { DARABONBA_PTR_SET_VALUE(newOrder_, newOrder) };


    // oldOrder Field Functions 
    bool hasOldOrder() const { return this->oldOrder_ != nullptr;};
    void deleteOldOrder() { this->oldOrder_ = nullptr;};
    inline string getOldOrder() const { DARABONBA_PTR_GET_DEFAULT(oldOrder_, "") };
    inline ModifyVpcFirewallControlPolicyPositionRequest& setOldOrder(string oldOrder) { DARABONBA_PTR_SET_VALUE(oldOrder_, oldOrder) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallControlPolicyPositionRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The UUID of the access control policy.
    // 
    // If you want to modify the configurations of an access control policy, you must provide the UUID of the policy. You can call the [DescribeVpcFirewallControlPolicy](https://help.aliyun.com/document_detail/159758.html) operation to query the UUID.
    shared_ptr<string> aclUuid_ {};
    // The language of the content within the request and the response.
    // 
    // Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The new priority of the access control policy.
    // 
    // >  For more information about the valid values of the new priority, see [DescribeVpcFirewallPolicyPriorUsed](https://help.aliyun.com/document_detail/474145.html).
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The original priority of the access control policy.
    // 
    // > This parameter is not recommended. We recommend that you use the AclUuid parameter to specify the policy that you want to modify.
    shared_ptr<string> oldOrder_ {};
    // The ID of the group to which the access control policy belongs. You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the ID.
    // 
    // Valid values:
    // 
    // *   If the VPC firewall is used to protect a CEN instance, the value of this parameter must be the ID of the CEN instance.
    // 
    //     Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
    // 
    // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter must be the instance ID of the VPC firewall.
    // 
    //     Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
