// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateAuthorizationResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuthorizationResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResourceId, authorizationResourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthorizationResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAuthorizationResourceResponseBody() = default ;
    CreateAuthorizationResourceResponseBody(const CreateAuthorizationResourceResponseBody &) = default ;
    CreateAuthorizationResourceResponseBody(CreateAuthorizationResourceResponseBody &&) = default ;
    CreateAuthorizationResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuthorizationResourceResponseBody() = default ;
    CreateAuthorizationResourceResponseBody& operator=(const CreateAuthorizationResourceResponseBody &) = default ;
    CreateAuthorizationResourceResponseBody& operator=(CreateAuthorizationResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceId_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationResourceId Field Functions 
    bool hasAuthorizationResourceId() const { return this->authorizationResourceId_ != nullptr;};
    void deleteAuthorizationResourceId() { this->authorizationResourceId_ = nullptr;};
    inline string getAuthorizationResourceId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceId_, "") };
    inline CreateAuthorizationResourceResponseBody& setAuthorizationResourceId(string authorizationResourceId) { DARABONBA_PTR_SET_VALUE(authorizationResourceId_, authorizationResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAuthorizationResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> authorizationResourceId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
