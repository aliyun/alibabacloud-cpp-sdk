// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(RepeatType, repeatType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeVpcFirewallControlPolicyRequest() = default ;
    DescribeVpcFirewallControlPolicyRequest(const DescribeVpcFirewallControlPolicyRequest &) = default ;
    DescribeVpcFirewallControlPolicyRequest(DescribeVpcFirewallControlPolicyRequest &&) = default ;
    DescribeVpcFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallControlPolicyRequest() = default ;
    DescribeVpcFirewallControlPolicyRequest& operator=(const DescribeVpcFirewallControlPolicyRequest &) = default ;
    DescribeVpcFirewallControlPolicyRequest& operator=(DescribeVpcFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->currentPage_ == nullptr && this->description_ == nullptr && this->destination_ == nullptr && this->lang_ == nullptr
        && this->memberUid_ == nullptr && this->pageSize_ == nullptr && this->proto_ == nullptr && this->release_ == nullptr && this->repeatType_ == nullptr
        && this->source_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // repeatType Field Functions 
    bool hasRepeatType() const { return this->repeatType_ != nullptr;};
    void deleteRepeatType() { this->repeatType_ = nullptr;};
    inline string getRepeatType() const { DARABONBA_PTR_GET_DEFAULT(repeatType_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setRepeatType(string repeatType) { DARABONBA_PTR_SET_VALUE(repeatType_, repeatType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallControlPolicyRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The action that is performed on traffic. Valid values:
    // 
    // - **accept**: allows the traffic.
    // 
    // - **drop**: denies the traffic.
    // 
    // - **log**: monitors the traffic.
    // 
    // > If you do not set this parameter, policies of all actions are queried.
    shared_ptr<string> aclAction_ {};
    // The unique ID of the access control policy.
    shared_ptr<string> aclUuid_ {};
    // The page number.
    shared_ptr<string> currentPage_ {};
    // The description of the access control policy. Fuzzy match is supported.
    shared_ptr<string> description_ {};
    // The destination address in the access control policy. Fuzzy match is supported.
    // 
    // > The value can be a CIDR block, a domain name, or an address book.
    shared_ptr<string> destination_ {};
    // The language of the request and response.
    // 
    // Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The UID of the member that is managed by your Alibaba Cloud account.
    shared_ptr<string> memberUid_ {};
    // The number of entries per page.
    // 
    // Maximum value: 50.
    shared_ptr<string> pageSize_ {};
    // The protocol type in the access control policy. Valid values:
    // 
    // - **TCP**
    // 
    // - **UDP**
    // 
    // - **ICMP**
    // 
    // - **ANY**: all protocols
    // 
    // > If you do not set this parameter, policies of all protocols are queried.
    shared_ptr<string> proto_ {};
    // The status of the access control policy. Valid values:
    // 
    // - **true**: enabled
    // 
    // - **false**: disabled
    shared_ptr<string> release_ {};
    // The recurrence type of the access control policy. Valid values:
    // 
    // - **Permanent** (default): The policy is always in effect.
    // 
    // - **None**: The policy is a one-time policy.
    // 
    // - **Daily**: The policy recurs daily.
    // 
    // - **Weekly**: The policy recurs weekly.
    // 
    // - **Monthly**: The policy recurs monthly.
    shared_ptr<string> repeatType_ {};
    // The source address in the access control policy. Fuzzy match is supported.
    // 
    // > The value can be a CIDR block or an address book.
    shared_ptr<string> source_ {};
    // The instance ID of the VPC boundary firewall. You can specify one of the following IDs:
    // 
    // - The ID of a Cloud Enterprise Network (CEN) instance if the firewall protects traffic between two VPCs connected via the CEN instance.
    // 
    // - The instance ID of the VPC boundary firewall if the firewall protects traffic between two VPCs connected via an Express Connect circuit.
    // 
    // > You can call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/159760.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
