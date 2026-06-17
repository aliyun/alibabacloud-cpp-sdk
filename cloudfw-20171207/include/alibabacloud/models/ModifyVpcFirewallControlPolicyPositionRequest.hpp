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
    // The unique ID of the access control policy.
    // 
    // To modify an access control policy, provide the unique ID of the policy. Call the [DescribeVpcFirewallControlPolicy](https://help.aliyun.com/document_detail/159758.html) operation to obtain the ID.
    shared_ptr<string> aclUuid_ {};
    // The language of the request and response.
    // 
    // Valid values:
    // 
    // - **zh** (Default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The new priority of the access control policy.
    // 
    // > For more information about the valid range of priorities, see [DescribePolicyPriorities](https://help.aliyun.com/document_detail/474145.html).
    // 
    // This parameter is required.
    shared_ptr<string> newOrder_ {};
    // The original priority of the access control policy.
    // 
    // > This parameter is deprecated. Use the AclUuid parameter to specify the policy to modify.
    shared_ptr<string> oldOrder_ {};
    // The ID of the policy group for the VPC firewall. You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to obtain the ID.
    // 
    // Valid values:
    // 
    // - If the VPC firewall protects a Cloud Enterprise Network (CEN) instance, the ID of the policy group is the ID of the CEN instance.
    // 
    //   Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
    // 
    // - If the VPC firewall protects an Express Connect circuit, the ID of the policy group is the ID of the VPC firewall instance.
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
