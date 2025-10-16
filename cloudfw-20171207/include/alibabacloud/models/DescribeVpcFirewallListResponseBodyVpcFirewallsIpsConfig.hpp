// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSIPSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLLISTRESPONSEBODYVPCFIREWALLSIPSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig(const DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig(DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig &&) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig() = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& operator=(const DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig &) = default ;
    DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& operator=(DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicRules_ == nullptr
        && return this->enableAllPatch_ == nullptr && return this->ruleClass_ == nullptr && return this->runMode_ == nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline int32_t basicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // enableAllPatch Field Functions 
    bool hasEnableAllPatch() const { return this->enableAllPatch_ != nullptr;};
    void deleteEnableAllPatch() { this->enableAllPatch_ = nullptr;};
    inline int32_t enableAllPatch() const { DARABONBA_PTR_GET_DEFAULT(enableAllPatch_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& setEnableAllPatch(int32_t enableAllPatch) { DARABONBA_PTR_SET_VALUE(enableAllPatch_, enableAllPatch) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline int32_t ruleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline int32_t runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
    inline DescribeVpcFirewallListResponseBodyVpcFirewallsIpsConfig& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    // Indicates whether basic protection is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> basicRules_ = nullptr;
    // Indicates whether virtual patching is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> enableAllPatch_ = nullptr;
    // The level of the rule group for the IPS. Valid values:
    // 
    // *   **1**: loose
    // *   **2**: medium
    // *   **3**: strict
    std::shared_ptr<int32_t> ruleClass_ = nullptr;
    // The mode of the IPS. Valid values:
    // 
    // *   **1**: block mode
    // *   **0**: monitor mode
    std::shared_ptr<int32_t> runMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
