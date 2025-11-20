// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyBindingList, policyBindingListShrink_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyBindingList, policyBindingListShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    CreatePolicyBindingsShrinkRequest() = default ;
    CreatePolicyBindingsShrinkRequest(const CreatePolicyBindingsShrinkRequest &) = default ;
    CreatePolicyBindingsShrinkRequest(CreatePolicyBindingsShrinkRequest &&) = default ;
    CreatePolicyBindingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsShrinkRequest() = default ;
    CreatePolicyBindingsShrinkRequest& operator=(const CreatePolicyBindingsShrinkRequest &) = default ;
    CreatePolicyBindingsShrinkRequest& operator=(CreatePolicyBindingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyBindingListShrink_ == nullptr
        && return this->policyId_ == nullptr; };
    // policyBindingListShrink Field Functions 
    bool hasPolicyBindingListShrink() const { return this->policyBindingListShrink_ != nullptr;};
    void deletePolicyBindingListShrink() { this->policyBindingListShrink_ = nullptr;};
    inline string policyBindingListShrink() const { DARABONBA_PTR_GET_DEFAULT(policyBindingListShrink_, "") };
    inline CreatePolicyBindingsShrinkRequest& setPolicyBindingListShrink(string policyBindingListShrink) { DARABONBA_PTR_SET_VALUE(policyBindingListShrink_, policyBindingListShrink) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePolicyBindingsShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The data sources that you want to bind to the backup policy.
    std::shared_ptr<string> policyBindingListShrink_ = nullptr;
    // The ID of the backup policy.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
