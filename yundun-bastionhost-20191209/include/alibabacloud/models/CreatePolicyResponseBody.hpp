// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreatePolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePolicyResponseBody() = default ;
    CreatePolicyResponseBody(const CreatePolicyResponseBody &) = default ;
    CreatePolicyResponseBody(CreatePolicyResponseBody &&) = default ;
    CreatePolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyResponseBody() = default ;
    CreatePolicyResponseBody& operator=(const CreatePolicyResponseBody &) = default ;
    CreatePolicyResponseBody& operator=(CreatePolicyResponseBody &&) = default ;
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
    inline CreatePolicyResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The control policy ID.
    shared_ptr<string> policyId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
