// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRegistrationPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateRegistrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRegistrationPolicyResponseBody() = default ;
    CreateRegistrationPolicyResponseBody(const CreateRegistrationPolicyResponseBody &) = default ;
    CreateRegistrationPolicyResponseBody(CreateRegistrationPolicyResponseBody &&) = default ;
    CreateRegistrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistrationPolicyResponseBody() = default ;
    CreateRegistrationPolicyResponseBody& operator=(const CreateRegistrationPolicyResponseBody &) = default ;
    CreateRegistrationPolicyResponseBody& operator=(CreateRegistrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && return this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const CreateRegistrationPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, CreateRegistrationPolicyResponseBodyPolicy) };
    inline CreateRegistrationPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, CreateRegistrationPolicyResponseBodyPolicy) };
    inline CreateRegistrationPolicyResponseBody& setPolicy(const CreateRegistrationPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline CreateRegistrationPolicyResponseBody& setPolicy(CreateRegistrationPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRegistrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateRegistrationPolicyResponseBodyPolicy> policy_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
