// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODYACLGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTRESPONSEBODYACLGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAclGroupListResponseBodyAclGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_TO_JSON(AclGroupId, aclGroupId_);
      DARABONBA_PTR_TO_JSON(AclGroupName, aclGroupName_);
      DARABONBA_PTR_TO_JSON(AclRuleCount, aclRuleCount_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_FROM_JSON(AclGroupId, aclGroupId_);
      DARABONBA_PTR_FROM_JSON(AclGroupName, aclGroupName_);
      DARABONBA_PTR_FROM_JSON(AclRuleCount, aclRuleCount_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
    };
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList() = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList(const DescribeVpcFirewallAclGroupListResponseBodyAclGroupList &) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList(DescribeVpcFirewallAclGroupListResponseBodyAclGroupList &&) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAclGroupListResponseBodyAclGroupList() = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& operator=(const DescribeVpcFirewallAclGroupListResponseBodyAclGroupList &) = default ;
    DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& operator=(DescribeVpcFirewallAclGroupListResponseBodyAclGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclConfig_ == nullptr
        && return this->aclGroupId_ == nullptr && return this->aclGroupName_ == nullptr && return this->aclRuleCount_ == nullptr && return this->isDefault_ == nullptr && return this->memberUid_ == nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig) };
    inline Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig) };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setAclConfig(const Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setAclConfig(Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // aclGroupId Field Functions 
    bool hasAclGroupId() const { return this->aclGroupId_ != nullptr;};
    void deleteAclGroupId() { this->aclGroupId_ = nullptr;};
    inline string aclGroupId() const { DARABONBA_PTR_GET_DEFAULT(aclGroupId_, "") };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setAclGroupId(string aclGroupId) { DARABONBA_PTR_SET_VALUE(aclGroupId_, aclGroupId) };


    // aclGroupName Field Functions 
    bool hasAclGroupName() const { return this->aclGroupName_ != nullptr;};
    void deleteAclGroupName() { this->aclGroupName_ = nullptr;};
    inline string aclGroupName() const { DARABONBA_PTR_GET_DEFAULT(aclGroupName_, "") };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setAclGroupName(string aclGroupName) { DARABONBA_PTR_SET_VALUE(aclGroupName_, aclGroupName) };


    // aclRuleCount Field Functions 
    bool hasAclRuleCount() const { return this->aclRuleCount_ != nullptr;};
    void deleteAclRuleCount() { this->aclRuleCount_ = nullptr;};
    inline int32_t aclRuleCount() const { DARABONBA_PTR_GET_DEFAULT(aclRuleCount_, 0) };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setAclRuleCount(int32_t aclRuleCount) { DARABONBA_PTR_SET_VALUE(aclRuleCount_, aclRuleCount) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallAclGroupListResponseBodyAclGroupList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


  protected:
    // ACL engine mode.
    std::shared_ptr<Models::DescribeVpcFirewallAclGroupListResponseBodyAclGroupListAclConfig> aclConfig_ = nullptr;
    // The ID of the policy group.
    // 
    // Valid values:
    // 
    // *   If the VPC firewall is used to protect a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance.
    // 
    //     Example: cen-ervw0g12b5jbw\\*\\*\\*\\*
    // 
    // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the instance ID of the VPC firewall.
    // 
    //     Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*
    std::shared_ptr<string> aclGroupId_ = nullptr;
    // The name of the policy group. Valid values:
    // 
    // *   If the VPC firewall is used to protect a CEN instance, the value of this parameter is the name of the CEN instance.
    // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the instance name of the VPC firewall.
    std::shared_ptr<string> aclGroupName_ = nullptr;
    // The number of access control policies in the policy group.
    std::shared_ptr<int32_t> aclRuleCount_ = nullptr;
    // Whether it is the default firewall. Values:
    // 
    // *   **true**: It is the default firewall.
    // *   **false**: It is not the default firewall.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
