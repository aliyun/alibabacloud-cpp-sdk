// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UpdatePolicyDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    UpdatePolicyDescriptionRequest() = default ;
    UpdatePolicyDescriptionRequest(const UpdatePolicyDescriptionRequest &) = default ;
    UpdatePolicyDescriptionRequest(UpdatePolicyDescriptionRequest &&) = default ;
    UpdatePolicyDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyDescriptionRequest() = default ;
    UpdatePolicyDescriptionRequest& operator=(const UpdatePolicyDescriptionRequest &) = default ;
    UpdatePolicyDescriptionRequest& operator=(UpdatePolicyDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newDescription_ == nullptr
        && this->policyName_ == nullptr; };
    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string getNewDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdatePolicyDescriptionRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyDescriptionRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The description of the policy.
    // 
    // The description must be 1 to 1,024 characters in length.
    shared_ptr<string> newDescription_ {};
    // The name of the policy.
    shared_ptr<string> policyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
