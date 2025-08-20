// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeletePrivateAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DeletePrivateAccessPolicyRequest() = default ;
    DeletePrivateAccessPolicyRequest(const DeletePrivateAccessPolicyRequest &) = default ;
    DeletePrivateAccessPolicyRequest(DeletePrivateAccessPolicyRequest &&) = default ;
    DeletePrivateAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateAccessPolicyRequest() = default ;
    DeletePrivateAccessPolicyRequest& operator=(const DeletePrivateAccessPolicyRequest &) = default ;
    DeletePrivateAccessPolicyRequest& operator=(DeletePrivateAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DeletePrivateAccessPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
