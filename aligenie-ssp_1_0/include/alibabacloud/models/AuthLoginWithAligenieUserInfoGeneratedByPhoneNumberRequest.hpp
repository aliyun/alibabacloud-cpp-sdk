// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOGENERATEDBYPHONENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOGENERATEDBYPHONENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest() = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest(AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &&) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest() = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest& operator=(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest& operator=(AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
