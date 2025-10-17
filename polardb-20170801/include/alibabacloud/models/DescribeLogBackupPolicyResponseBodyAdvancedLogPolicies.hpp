// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODYADVANCEDLOGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGBACKUPPOLICYRESPONSEBODYADVANCEDLOGPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicy, advancedLogPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicy, advancedLogPolicy_);
    };
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies() = default ;
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies(const DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies &) = default ;
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies(DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies &&) = default ;
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies() = default ;
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& operator=(const DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies &) = default ;
    DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& operator=(DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedLogPolicy_ == nullptr; };
    // advancedLogPolicy Field Functions 
    bool hasAdvancedLogPolicy() const { return this->advancedLogPolicy_ != nullptr;};
    void deleteAdvancedLogPolicy() { this->advancedLogPolicy_ = nullptr;};
    inline const vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy> & advancedLogPolicy() const { DARABONBA_PTR_GET_CONST(advancedLogPolicy_, vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy>) };
    inline vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy> advancedLogPolicy() { DARABONBA_PTR_GET(advancedLogPolicy_, vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy>) };
    inline DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& setAdvancedLogPolicy(const vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy> & advancedLogPolicy) { DARABONBA_PTR_SET_VALUE(advancedLogPolicy_, advancedLogPolicy) };
    inline DescribeLogBackupPolicyResponseBodyAdvancedLogPolicies& setAdvancedLogPolicy(vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy> && advancedLogPolicy) { DARABONBA_PTR_SET_RVALUE(advancedLogPolicy_, advancedLogPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeLogBackupPolicyResponseBodyAdvancedLogPoliciesAdvancedLogPolicy>> advancedLogPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
