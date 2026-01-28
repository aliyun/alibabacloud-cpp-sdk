// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateAuthorizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAuthorizationRuleResponseBody() = default ;
    CreateAuthorizationRuleResponseBody(const CreateAuthorizationRuleResponseBody &) = default ;
    CreateAuthorizationRuleResponseBody(CreateAuthorizationRuleResponseBody &&) = default ;
    CreateAuthorizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuthorizationRuleResponseBody() = default ;
    CreateAuthorizationRuleResponseBody& operator=(const CreateAuthorizationRuleResponseBody &) = default ;
    CreateAuthorizationRuleResponseBody& operator=(CreateAuthorizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline CreateAuthorizationRuleResponseBody& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAuthorizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> authorizationRuleId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
