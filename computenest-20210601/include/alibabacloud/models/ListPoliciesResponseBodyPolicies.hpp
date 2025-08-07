// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->policyDocument_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPoliciesResponseBodyPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline ListPoliciesResponseBodyPolicies& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListPoliciesResponseBodyPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPoliciesResponseBodyPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // Permission policy description.
    std::shared_ptr<string> description_ = nullptr;
    // Policy content.
    std::shared_ptr<string> policyDocument_ = nullptr;
    // Permission policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Permission policy type.
    // 
    // - Custom: Custom policy.
    // - System: System policy.
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
