// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYADVANCEDDATAPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYADVANCEDDATAPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBackupPolicyResponseBodyAdvancedDataPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBodyAdvancedDataPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedDataPolicy, advancedDataPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBodyAdvancedDataPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedDataPolicy, advancedDataPolicy_);
    };
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies() = default ;
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies(const DescribeBackupPolicyResponseBodyAdvancedDataPolicies &) = default ;
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies(DescribeBackupPolicyResponseBodyAdvancedDataPolicies &&) = default ;
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBodyAdvancedDataPolicies() = default ;
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies& operator=(const DescribeBackupPolicyResponseBodyAdvancedDataPolicies &) = default ;
    DescribeBackupPolicyResponseBodyAdvancedDataPolicies& operator=(DescribeBackupPolicyResponseBodyAdvancedDataPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedDataPolicy_ == nullptr; };
    // advancedDataPolicy Field Functions 
    bool hasAdvancedDataPolicy() const { return this->advancedDataPolicy_ != nullptr;};
    void deleteAdvancedDataPolicy() { this->advancedDataPolicy_ = nullptr;};
    inline const vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy> & advancedDataPolicy() const { DARABONBA_PTR_GET_CONST(advancedDataPolicy_, vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy>) };
    inline vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy> advancedDataPolicy() { DARABONBA_PTR_GET(advancedDataPolicy_, vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy>) };
    inline DescribeBackupPolicyResponseBodyAdvancedDataPolicies& setAdvancedDataPolicy(const vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy> & advancedDataPolicy) { DARABONBA_PTR_SET_VALUE(advancedDataPolicy_, advancedDataPolicy) };
    inline DescribeBackupPolicyResponseBodyAdvancedDataPolicies& setAdvancedDataPolicy(vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy> && advancedDataPolicy) { DARABONBA_PTR_SET_RVALUE(advancedDataPolicy_, advancedDataPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupPolicyResponseBodyAdvancedDataPoliciesAdvancedDataPolicy>> advancedDataPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
