// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    ListPoliciesResponseBodyPolicies() = default ;
    ListPoliciesResponseBodyPolicies(const ListPoliciesResponseBodyPolicies &) = default ;
    ListPoliciesResponseBodyPolicies(ListPoliciesResponseBodyPolicies &&) = default ;
    ListPoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBodyPolicies() = default ;
    ListPoliciesResponseBodyPolicies& operator=(const ListPoliciesResponseBodyPolicies &) = default ;
    ListPoliciesResponseBodyPolicies& operator=(ListPoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->policyId_ != nullptr && this->policyName_ != nullptr && this->priority_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListPoliciesResponseBodyPolicies& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPoliciesResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListPoliciesResponseBodyPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListPoliciesResponseBodyPolicies& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The remarks of the control policy.
    std::shared_ptr<string> comment_ = nullptr;
    // The control policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the control policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The priority of the control policy. A smaller value indicates a higher priority.
    std::shared_ptr<int64_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
