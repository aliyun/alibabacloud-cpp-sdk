// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODYVFWIPSSWITCHCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODYVFWIPSSWITCHCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallIdList, vpcFirewallIdList_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallIdList, vpcFirewallIdList_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList() = default ;
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList(const DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList &) = default ;
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList(DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList &&) = default ;
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList() = default ;
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& operator=(const DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList &) = default ;
    DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& operator=(DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicRules_ == nullptr
        && return this->memberUid_ == nullptr && return this->patchRules_ == nullptr && return this->ruleClass_ == nullptr && return this->runMode_ == nullptr && return this->vpcFirewallId_ == nullptr
        && return this->vpcFirewallIdList_ == nullptr && return this->vpcFirewallName_ == nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline int32_t basicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // patchRules Field Functions 
    bool hasPatchRules() const { return this->patchRules_ != nullptr;};
    void deletePatchRules() { this->patchRules_ = nullptr;};
    inline int32_t patchRules() const { DARABONBA_PTR_GET_DEFAULT(patchRules_, 0) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setPatchRules(int32_t patchRules) { DARABONBA_PTR_SET_VALUE(patchRules_, patchRules) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline int32_t ruleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline int32_t runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallIdList Field Functions 
    bool hasVpcFirewallIdList() const { return this->vpcFirewallIdList_ != nullptr;};
    void deleteVpcFirewallIdList() { this->vpcFirewallIdList_ = nullptr;};
    inline const vector<string> & vpcFirewallIdList() const { DARABONBA_PTR_GET_CONST(vpcFirewallIdList_, vector<string>) };
    inline vector<string> vpcFirewallIdList() { DARABONBA_PTR_GET(vpcFirewallIdList_, vector<string>) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setVpcFirewallIdList(const vector<string> & vpcFirewallIdList) { DARABONBA_PTR_SET_VALUE(vpcFirewallIdList_, vpcFirewallIdList) };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setVpcFirewallIdList(vector<string> && vpcFirewallIdList) { DARABONBA_PTR_SET_RVALUE(vpcFirewallIdList_, vpcFirewallIdList) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    std::shared_ptr<int32_t> basicRules_ = nullptr;
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<int32_t> patchRules_ = nullptr;
    std::shared_ptr<int32_t> ruleClass_ = nullptr;
    std::shared_ptr<int32_t> runMode_ = nullptr;
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    std::shared_ptr<vector<string>> vpcFirewallIdList_ = nullptr;
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
