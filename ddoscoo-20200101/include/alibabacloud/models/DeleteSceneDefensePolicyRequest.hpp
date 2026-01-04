// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCENEDEFENSEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCENEDEFENSEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DeleteSceneDefensePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DeleteSceneDefensePolicyRequest() = default ;
    DeleteSceneDefensePolicyRequest(const DeleteSceneDefensePolicyRequest &) = default ;
    DeleteSceneDefensePolicyRequest(DeleteSceneDefensePolicyRequest &&) = default ;
    DeleteSceneDefensePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSceneDefensePolicyRequest() = default ;
    DeleteSceneDefensePolicyRequest& operator=(const DeleteSceneDefensePolicyRequest &) = default ;
    DeleteSceneDefensePolicyRequest& operator=(DeleteSceneDefensePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DeleteSceneDefensePolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The ID of the policy that you want to delete.
    // 
    // > You can call the [DescribeSceneDefensePolicies](https://help.aliyun.com/document_detail/159382.html) operation to query the IDs of all policies.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
