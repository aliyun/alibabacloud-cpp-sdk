// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOREPAIRPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOREPAIRPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateAutoRepairPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoRepairPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(policy_id, policyId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoRepairPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(policy_id, policyId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
    };
    CreateAutoRepairPolicyResponseBody() = default ;
    CreateAutoRepairPolicyResponseBody(const CreateAutoRepairPolicyResponseBody &) = default ;
    CreateAutoRepairPolicyResponseBody(CreateAutoRepairPolicyResponseBody &&) = default ;
    CreateAutoRepairPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoRepairPolicyResponseBody() = default ;
    CreateAutoRepairPolicyResponseBody& operator=(const CreateAutoRepairPolicyResponseBody &) = default ;
    CreateAutoRepairPolicyResponseBody& operator=(CreateAutoRepairPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && this->requestId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreateAutoRepairPolicyResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAutoRepairPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> policyId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
