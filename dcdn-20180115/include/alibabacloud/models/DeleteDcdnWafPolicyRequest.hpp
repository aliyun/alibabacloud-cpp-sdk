// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDCDNWAFPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDCDNWAFPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteDcdnWafPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDcdnWafPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DeleteDcdnWafPolicyRequest() = default ;
    DeleteDcdnWafPolicyRequest(const DeleteDcdnWafPolicyRequest &) = default ;
    DeleteDcdnWafPolicyRequest(DeleteDcdnWafPolicyRequest &&) = default ;
    DeleteDcdnWafPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDcdnWafPolicyRequest() = default ;
    DeleteDcdnWafPolicyRequest& operator=(const DeleteDcdnWafPolicyRequest &) = default ;
    DeleteDcdnWafPolicyRequest& operator=(DeleteDcdnWafPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DeleteDcdnWafPolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The ID of the protection policy that you want to delete. You can specify only one ID in each request.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
