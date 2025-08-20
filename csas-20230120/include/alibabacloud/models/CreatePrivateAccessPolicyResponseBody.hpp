// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePrivateAccessPolicyResponseBody() = default ;
    CreatePrivateAccessPolicyResponseBody(const CreatePrivateAccessPolicyResponseBody &) = default ;
    CreatePrivateAccessPolicyResponseBody(CreatePrivateAccessPolicyResponseBody &&) = default ;
    CreatePrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateAccessPolicyResponseBody() = default ;
    CreatePrivateAccessPolicyResponseBody& operator=(const CreatePrivateAccessPolicyResponseBody &) = default ;
    CreatePrivateAccessPolicyResponseBody& operator=(CreatePrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->requestId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreatePrivateAccessPolicyResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the private access policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
