// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRegistrationPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRegistrationPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistrationPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateRegistrationPolicyResponseBody() = default ;
    UpdateRegistrationPolicyResponseBody(const UpdateRegistrationPolicyResponseBody &) = default ;
    UpdateRegistrationPolicyResponseBody(UpdateRegistrationPolicyResponseBody &&) = default ;
    UpdateRegistrationPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistrationPolicyResponseBody() = default ;
    UpdateRegistrationPolicyResponseBody& operator=(const UpdateRegistrationPolicyResponseBody &) = default ;
    UpdateRegistrationPolicyResponseBody& operator=(UpdateRegistrationPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && return this->requestId_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const UpdateRegistrationPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, UpdateRegistrationPolicyResponseBodyPolicy) };
    inline UpdateRegistrationPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, UpdateRegistrationPolicyResponseBodyPolicy) };
    inline UpdateRegistrationPolicyResponseBody& setPolicy(const UpdateRegistrationPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline UpdateRegistrationPolicyResponseBody& setPolicy(UpdateRegistrationPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateRegistrationPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateRegistrationPolicyResponseBodyPolicy> policy_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
