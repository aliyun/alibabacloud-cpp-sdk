// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSPECIALRETAINRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYRESPONSEBODYPOLICIESSPECIALRETAINRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules &&) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules() = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& operator=(const DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules &) = default ;
    DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& operator=(DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->rules_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules>) };
    inline vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules>) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& setRules(const vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRules& setRules(vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // Indicates whether the special retention period is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The special retention rules.
    std::shared_ptr<vector<Models::DescribeEnterpriseSnapshotPolicyResponseBodyPoliciesSpecialRetainRulesRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
