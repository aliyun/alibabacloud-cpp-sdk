// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTITIESFORPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENTITIESFORPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListEntitiesForPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEntitiesForPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEntitiesForPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    ListEntitiesForPolicyRequest() = default ;
    ListEntitiesForPolicyRequest(const ListEntitiesForPolicyRequest &) = default ;
    ListEntitiesForPolicyRequest(ListEntitiesForPolicyRequest &&) = default ;
    ListEntitiesForPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEntitiesForPolicyRequest() = default ;
    ListEntitiesForPolicyRequest& operator=(const ListEntitiesForPolicyRequest &) = default ;
    ListEntitiesForPolicyRequest& operator=(ListEntitiesForPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && this->policyType_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListEntitiesForPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListEntitiesForPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The name of the policy.
    shared_ptr<string> policyName_ {};
    // The type of the policy. Valid values: `System` and `Custom`.
    shared_ptr<string> policyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
