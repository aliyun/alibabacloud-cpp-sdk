// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLDEFAULTIPSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLDEFAULTIPSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallDefaultIPSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallDefaultIPSConfigRequest() = default ;
    ModifyVpcFirewallDefaultIPSConfigRequest(const ModifyVpcFirewallDefaultIPSConfigRequest &) = default ;
    ModifyVpcFirewallDefaultIPSConfigRequest(ModifyVpcFirewallDefaultIPSConfigRequest &&) = default ;
    ModifyVpcFirewallDefaultIPSConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallDefaultIPSConfigRequest() = default ;
    ModifyVpcFirewallDefaultIPSConfigRequest& operator=(const ModifyVpcFirewallDefaultIPSConfigRequest &) = default ;
    ModifyVpcFirewallDefaultIPSConfigRequest& operator=(ModifyVpcFirewallDefaultIPSConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basicRules_ != nullptr
        && this->enableAllPatch_ != nullptr && this->lang_ != nullptr && this->memberUid_ != nullptr && this->ruleClass_ != nullptr && this->runMode_ != nullptr
        && this->sourceIp_ != nullptr && this->vpcFirewallId_ != nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline string basicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setBasicRules(string basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // enableAllPatch Field Functions 
    bool hasEnableAllPatch() const { return this->enableAllPatch_ != nullptr;};
    void deleteEnableAllPatch() { this->enableAllPatch_ = nullptr;};
    inline string enableAllPatch() const { DARABONBA_PTR_GET_DEFAULT(enableAllPatch_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setEnableAllPatch(string enableAllPatch) { DARABONBA_PTR_SET_VALUE(enableAllPatch_, enableAllPatch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline string ruleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setRuleClass(string ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallDefaultIPSConfigRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // Specifies whether to enable basic protection. Valid values:
    // 
    // *   **1**: yes.
    // *   **0**: no.
    // 
    // This parameter is required.
    std::shared_ptr<string> basicRules_ = nullptr;
    // Specifies whether to enable virtual patching. Valid values:
    // 
    // *   **1**: yes.
    // *   **0**: no.
    // 
    // This parameter is required.
    std::shared_ptr<string> enableAllPatch_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The level of the rule group for the IPS. Valid values:
    // 
    // *   **1**: loose
    // *   **2**: medium
    // *   **3**: strict
    std::shared_ptr<string> ruleClass_ = nullptr;
    // The mode of the intrusion prevention system (IPS). Valid values:
    // 
    // *   **1**: block mode.
    // *   **0**: monitor mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> runMode_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The instance ID of the VPC firewall.
    // 
    // *   If the VPC firewall protects traffic between a VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. You can call the [DescribeVpcFirewallCenList](https://help.aliyun.com/document_detail/345777.html) operation to query the IDs of CEN instances.
    // *   If the VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit, the value of this parameter is the instance ID of the VPC firewall. You can call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation to query the instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
