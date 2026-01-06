// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeletePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DeletePolicyV2Request() = default ;
    DeletePolicyV2Request(const DeletePolicyV2Request &) = default ;
    DeletePolicyV2Request(DeletePolicyV2Request &&) = default ;
    DeletePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyV2Request() = default ;
    DeletePolicyV2Request& operator=(const DeletePolicyV2Request &) = default ;
    DeletePolicyV2Request& operator=(DeletePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DeletePolicyV2Request& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The ID of the backup policy.
    shared_ptr<string> policyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
