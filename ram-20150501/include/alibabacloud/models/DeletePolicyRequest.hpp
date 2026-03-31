// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DeletePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CascadingDelete, cascadingDelete_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CascadingDelete, cascadingDelete_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
    };
    DeletePolicyRequest() = default ;
    DeletePolicyRequest(const DeletePolicyRequest &) = default ;
    DeletePolicyRequest(DeletePolicyRequest &&) = default ;
    DeletePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyRequest() = default ;
    DeletePolicyRequest& operator=(const DeletePolicyRequest &) = default ;
    DeletePolicyRequest& operator=(DeletePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cascadingDelete_ == nullptr
        && this->policyName_ == nullptr; };
    // cascadingDelete Field Functions 
    bool hasCascadingDelete() const { return this->cascadingDelete_ != nullptr;};
    void deleteCascadingDelete() { this->cascadingDelete_ = nullptr;};
    inline bool getCascadingDelete() const { DARABONBA_PTR_GET_DEFAULT(cascadingDelete_, false) };
    inline DeletePolicyRequest& setCascadingDelete(bool cascadingDelete) { DARABONBA_PTR_SET_VALUE(cascadingDelete_, cascadingDelete) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DeletePolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // Specifies whether to delete all versions of the policy. Valid values:
    // 
    // *   true: deletes all versions of the policy.
    // *   false: does not delete all versions of the policy. If you set the parameter to false, the non-default versions of the policy are not deleted. Before you delete the policy, you must manually delete all non-default versions of the policy.
    shared_ptr<bool> cascadingDelete_ {};
    // The name of the policy.
    shared_ptr<string> policyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
