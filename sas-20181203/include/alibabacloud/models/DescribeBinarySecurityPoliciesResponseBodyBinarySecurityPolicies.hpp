// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODYBINARYSECURITYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSEBODYBINARYSECURITYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies() = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies(const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies &) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies(DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies &&) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies() = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& operator=(const DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies &) = default ;
    DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& operator=(DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->name_ == nullptr && return this->policy_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters> & clusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters>) };
    inline vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters> clusters() { DARABONBA_PTR_GET(clusters_, vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters>) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setClusters(const vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setClusters(vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & policy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & policy() { DARABONBA_GET(policy_) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setPolicy(Darabonba::Json & policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about clusters.
    std::shared_ptr<vector<Models::DescribeBinarySecurityPoliciesResponseBodyBinarySecurityPoliciesClusters>> clusters_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The content of the policy. The value is in the JSON format. A key supports the following values:
    // 
    // *   **policyMode**: the type of the policy. Default value: requireAttestor.
    // *   **requiredAttestors**: the required witnesses.
    Darabonba::Json policy_ = nullptr;
    // The description.
    std::shared_ptr<string> remark_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **enabled**
    // *   **disabled**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
