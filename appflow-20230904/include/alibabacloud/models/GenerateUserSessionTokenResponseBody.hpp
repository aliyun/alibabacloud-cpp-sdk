// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUSERSESSIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUSERSESSIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class GenerateUserSessionTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUserSessionTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserSessionToken, userSessionToken_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUserSessionTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserSessionToken, userSessionToken_);
    };
    GenerateUserSessionTokenResponseBody() = default ;
    GenerateUserSessionTokenResponseBody(const GenerateUserSessionTokenResponseBody &) = default ;
    GenerateUserSessionTokenResponseBody(GenerateUserSessionTokenResponseBody &&) = default ;
    GenerateUserSessionTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUserSessionTokenResponseBody() = default ;
    GenerateUserSessionTokenResponseBody& operator=(const GenerateUserSessionTokenResponseBody &) = default ;
    GenerateUserSessionTokenResponseBody& operator=(GenerateUserSessionTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userSessionToken_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateUserSessionTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userSessionToken Field Functions 
    bool hasUserSessionToken() const { return this->userSessionToken_ != nullptr;};
    void deleteUserSessionToken() { this->userSessionToken_ = nullptr;};
    inline string userSessionToken() const { DARABONBA_PTR_GET_DEFAULT(userSessionToken_, "") };
    inline GenerateUserSessionTokenResponseBody& setUserSessionToken(string userSessionToken) { DARABONBA_PTR_SET_VALUE(userSessionToken_, userSessionToken) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Token.
    std::shared_ptr<string> userSessionToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
