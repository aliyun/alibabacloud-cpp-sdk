// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETERESOURCETOKENAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class CompleteResourceTokenAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteResourceTokenAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_TO_JSON(UserIdentifier, userIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteResourceTokenAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionURI, sessionURI_);
      DARABONBA_PTR_FROM_JSON(UserIdentifier, userIdentifier_);
    };
    CompleteResourceTokenAuthRequest() = default ;
    CompleteResourceTokenAuthRequest(const CompleteResourceTokenAuthRequest &) = default ;
    CompleteResourceTokenAuthRequest(CompleteResourceTokenAuthRequest &&) = default ;
    CompleteResourceTokenAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteResourceTokenAuthRequest() = default ;
    CompleteResourceTokenAuthRequest& operator=(const CompleteResourceTokenAuthRequest &) = default ;
    CompleteResourceTokenAuthRequest& operator=(CompleteResourceTokenAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserIdentifier : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserIdentifier& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserJWT, userJWT_);
      };
      friend void from_json(const Darabonba::Json& j, UserIdentifier& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserJWT, userJWT_);
      };
      UserIdentifier() = default ;
      UserIdentifier(const UserIdentifier &) = default ;
      UserIdentifier(UserIdentifier &&) = default ;
      UserIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserIdentifier() = default ;
      UserIdentifier& operator=(const UserIdentifier &) = default ;
      UserIdentifier& operator=(UserIdentifier &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userId_ == nullptr
        && this->userJWT_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserIdentifier& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userJWT Field Functions 
      bool hasUserJWT() const { return this->userJWT_ != nullptr;};
      void deleteUserJWT() { this->userJWT_ = nullptr;};
      inline string getUserJWT() const { DARABONBA_PTR_GET_DEFAULT(userJWT_, "") };
      inline UserIdentifier& setUserJWT(string userJWT) { DARABONBA_PTR_SET_VALUE(userJWT_, userJWT) };


    protected:
      shared_ptr<string> userId_ {};
      shared_ptr<string> userJWT_ {};
    };

    virtual bool empty() const override { return this->sessionURI_ == nullptr
        && this->userIdentifier_ == nullptr; };
    // sessionURI Field Functions 
    bool hasSessionURI() const { return this->sessionURI_ != nullptr;};
    void deleteSessionURI() { this->sessionURI_ = nullptr;};
    inline string getSessionURI() const { DARABONBA_PTR_GET_DEFAULT(sessionURI_, "") };
    inline CompleteResourceTokenAuthRequest& setSessionURI(string sessionURI) { DARABONBA_PTR_SET_VALUE(sessionURI_, sessionURI) };


    // userIdentifier Field Functions 
    bool hasUserIdentifier() const { return this->userIdentifier_ != nullptr;};
    void deleteUserIdentifier() { this->userIdentifier_ = nullptr;};
    inline const CompleteResourceTokenAuthRequest::UserIdentifier & getUserIdentifier() const { DARABONBA_PTR_GET_CONST(userIdentifier_, CompleteResourceTokenAuthRequest::UserIdentifier) };
    inline CompleteResourceTokenAuthRequest::UserIdentifier getUserIdentifier() { DARABONBA_PTR_GET(userIdentifier_, CompleteResourceTokenAuthRequest::UserIdentifier) };
    inline CompleteResourceTokenAuthRequest& setUserIdentifier(const CompleteResourceTokenAuthRequest::UserIdentifier & userIdentifier) { DARABONBA_PTR_SET_VALUE(userIdentifier_, userIdentifier) };
    inline CompleteResourceTokenAuthRequest& setUserIdentifier(CompleteResourceTokenAuthRequest::UserIdentifier && userIdentifier) { DARABONBA_PTR_SET_RVALUE(userIdentifier_, userIdentifier) };


  protected:
    shared_ptr<string> sessionURI_ {};
    shared_ptr<CompleteResourceTokenAuthRequest::UserIdentifier> userIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
