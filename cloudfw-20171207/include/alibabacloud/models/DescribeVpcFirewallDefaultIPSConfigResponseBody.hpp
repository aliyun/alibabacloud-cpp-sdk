// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDEFAULTIPSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDEFAULTIPSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDefaultIPSConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDefaultIPSConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDefaultIPSConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(EnableAllPatch, enableAllPatch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    DescribeVpcFirewallDefaultIPSConfigResponseBody() = default ;
    DescribeVpcFirewallDefaultIPSConfigResponseBody(const DescribeVpcFirewallDefaultIPSConfigResponseBody &) = default ;
    DescribeVpcFirewallDefaultIPSConfigResponseBody(DescribeVpcFirewallDefaultIPSConfigResponseBody &&) = default ;
    DescribeVpcFirewallDefaultIPSConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDefaultIPSConfigResponseBody() = default ;
    DescribeVpcFirewallDefaultIPSConfigResponseBody& operator=(const DescribeVpcFirewallDefaultIPSConfigResponseBody &) = default ;
    DescribeVpcFirewallDefaultIPSConfigResponseBody& operator=(DescribeVpcFirewallDefaultIPSConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicRules_ == nullptr
        && this->enableAllPatch_ == nullptr && this->requestId_ == nullptr && this->ruleClass_ == nullptr && this->runMode_ == nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline int32_t getBasicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
    inline DescribeVpcFirewallDefaultIPSConfigResponseBody& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // enableAllPatch Field Functions 
    bool hasEnableAllPatch() const { return this->enableAllPatch_ != nullptr;};
    void deleteEnableAllPatch() { this->enableAllPatch_ = nullptr;};
    inline int32_t getEnableAllPatch() const { DARABONBA_PTR_GET_DEFAULT(enableAllPatch_, 0) };
    inline DescribeVpcFirewallDefaultIPSConfigResponseBody& setEnableAllPatch(int32_t enableAllPatch) { DARABONBA_PTR_SET_VALUE(enableAllPatch_, enableAllPatch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDefaultIPSConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
    inline DescribeVpcFirewallDefaultIPSConfigResponseBody& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline int32_t getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
    inline DescribeVpcFirewallDefaultIPSConfigResponseBody& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    // Indicates whether basic policies are enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> basicRules_ {};
    // Indicates whether virtual patching is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    shared_ptr<int32_t> enableAllPatch_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The level of the rule group for the IPS. Valid values:
    // 
    // *   **1**: loose.
    // *   **2**: medium.
    // *   **3**: strict.
    shared_ptr<int32_t> ruleClass_ {};
    // The mode of the intrusion prevention system (IPS). Valid values:
    // 
    // *   **1**: block mode
    // *   **0**: monitor mode
    shared_ptr<int32_t> runMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
