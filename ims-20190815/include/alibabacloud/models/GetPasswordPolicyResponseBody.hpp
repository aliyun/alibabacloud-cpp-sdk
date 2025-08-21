// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPasswordPolicyResponseBodyPasswordPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetPasswordPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordPolicy, passwordPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordPolicyResponseBody() = default ;
    GetPasswordPolicyResponseBody(const GetPasswordPolicyResponseBody &) = default ;
    GetPasswordPolicyResponseBody(GetPasswordPolicyResponseBody &&) = default ;
    GetPasswordPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordPolicyResponseBody() = default ;
    GetPasswordPolicyResponseBody& operator=(const GetPasswordPolicyResponseBody &) = default ;
    GetPasswordPolicyResponseBody& operator=(GetPasswordPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passwordPolicy_ != nullptr
        && this->requestId_ != nullptr; };
    // passwordPolicy Field Functions 
    bool hasPasswordPolicy() const { return this->passwordPolicy_ != nullptr;};
    void deletePasswordPolicy() { this->passwordPolicy_ = nullptr;};
    inline const GetPasswordPolicyResponseBodyPasswordPolicy & passwordPolicy() const { DARABONBA_PTR_GET_CONST(passwordPolicy_, GetPasswordPolicyResponseBodyPasswordPolicy) };
    inline GetPasswordPolicyResponseBodyPasswordPolicy passwordPolicy() { DARABONBA_PTR_GET(passwordPolicy_, GetPasswordPolicyResponseBodyPasswordPolicy) };
    inline GetPasswordPolicyResponseBody& setPasswordPolicy(const GetPasswordPolicyResponseBodyPasswordPolicy & passwordPolicy) { DARABONBA_PTR_SET_VALUE(passwordPolicy_, passwordPolicy) };
    inline GetPasswordPolicyResponseBody& setPasswordPolicy(GetPasswordPolicyResponseBodyPasswordPolicy && passwordPolicy) { DARABONBA_PTR_SET_RVALUE(passwordPolicy_, passwordPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the password policy.
    std::shared_ptr<GetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
