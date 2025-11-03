// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSEBODYAUTOSNAPSHOTPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
    };
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies(DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies &&) = default ;
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies() = default ;
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& operator=(const DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies &) = default ;
    DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& operator=(DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicy_ == nullptr; };
    // autoSnapshotPolicy Field Functions 
    bool hasAutoSnapshotPolicy() const { return this->autoSnapshotPolicy_ != nullptr;};
    void deleteAutoSnapshotPolicy() { this->autoSnapshotPolicy_ = nullptr;};
    inline const vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> & autoSnapshotPolicy() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicy_, vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>) };
    inline vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> autoSnapshotPolicy() { DARABONBA_PTR_GET(autoSnapshotPolicy_, vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>) };
    inline DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& setAutoSnapshotPolicy(const vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> & autoSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };
    inline DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPolicies& setAutoSnapshotPolicy(vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy> && autoSnapshotPolicy) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoSnapshotPoliciesResponseBodyAutoSnapshotPoliciesAutoSnapshotPolicy>> autoSnapshotPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
