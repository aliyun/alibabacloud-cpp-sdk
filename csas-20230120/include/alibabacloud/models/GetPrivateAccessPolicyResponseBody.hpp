// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPrivateAccessPolicyResponseBodyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPrivateAccessPolicyResponseBody() = default ;
    GetPrivateAccessPolicyResponseBody(const GetPrivateAccessPolicyResponseBody &) = default ;
    GetPrivateAccessPolicyResponseBody(GetPrivateAccessPolicyResponseBody &&) = default ;
    GetPrivateAccessPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessPolicyResponseBody() = default ;
    GetPrivateAccessPolicyResponseBody& operator=(const GetPrivateAccessPolicyResponseBody &) = default ;
    GetPrivateAccessPolicyResponseBody& operator=(GetPrivateAccessPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policy_ != nullptr
        && this->requestId_ != nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const GetPrivateAccessPolicyResponseBodyPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, GetPrivateAccessPolicyResponseBodyPolicy) };
    inline GetPrivateAccessPolicyResponseBodyPolicy policy() { DARABONBA_PTR_GET(policy_, GetPrivateAccessPolicyResponseBodyPolicy) };
    inline GetPrivateAccessPolicyResponseBody& setPolicy(const GetPrivateAccessPolicyResponseBodyPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline GetPrivateAccessPolicyResponseBody& setPolicy(GetPrivateAccessPolicyResponseBodyPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrivateAccessPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Intranet access policy.
    std::shared_ptr<GetPrivateAccessPolicyResponseBodyPolicy> policy_ = nullptr;
    // The ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
