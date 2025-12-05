// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYUSERSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyUserScopeResponseBodyUserScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyUserScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyUserScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserScope, userScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyUserScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserScope, userScope_);
    };
    GetPolicyUserScopeResponseBody() = default ;
    GetPolicyUserScopeResponseBody(const GetPolicyUserScopeResponseBody &) = default ;
    GetPolicyUserScopeResponseBody(GetPolicyUserScopeResponseBody &&) = default ;
    GetPolicyUserScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyUserScopeResponseBody() = default ;
    GetPolicyUserScopeResponseBody& operator=(const GetPolicyUserScopeResponseBody &) = default ;
    GetPolicyUserScopeResponseBody& operator=(GetPolicyUserScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userScope_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyUserScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userScope Field Functions 
    bool hasUserScope() const { return this->userScope_ != nullptr;};
    void deleteUserScope() { this->userScope_ = nullptr;};
    inline const GetPolicyUserScopeResponseBodyUserScope & userScope() const { DARABONBA_PTR_GET_CONST(userScope_, GetPolicyUserScopeResponseBodyUserScope) };
    inline GetPolicyUserScopeResponseBodyUserScope userScope() { DARABONBA_PTR_GET(userScope_, GetPolicyUserScopeResponseBodyUserScope) };
    inline GetPolicyUserScopeResponseBody& setUserScope(const GetPolicyUserScopeResponseBodyUserScope & userScope) { DARABONBA_PTR_SET_VALUE(userScope_, userScope) };
    inline GetPolicyUserScopeResponseBody& setUserScope(GetPolicyUserScopeResponseBodyUserScope && userScope) { DARABONBA_PTR_SET_RVALUE(userScope_, userScope) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The users to whom the control policy applies.
    std::shared_ptr<GetPolicyUserScopeResponseBodyUserScope> userScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
