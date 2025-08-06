// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYEXRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
    };
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies(const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies(DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies &&) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& operator=(const DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& operator=(DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoSnapshotPolicy_ != nullptr; };
    // autoSnapshotPolicy Field Functions 
    bool hasAutoSnapshotPolicy() const { return this->autoSnapshotPolicy_ != nullptr;};
    void deleteAutoSnapshotPolicy() { this->autoSnapshotPolicy_ = nullptr;};
    inline const vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> & autoSnapshotPolicy() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicy_, vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>) };
    inline vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> autoSnapshotPolicy() { DARABONBA_PTR_GET(autoSnapshotPolicy_, vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& setAutoSnapshotPolicy(const vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> & autoSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };
    inline DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPolicies& setAutoSnapshotPolicy(vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> && autoSnapshotPolicy) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoSnapshotPolicyExResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>> autoSnapshotPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
