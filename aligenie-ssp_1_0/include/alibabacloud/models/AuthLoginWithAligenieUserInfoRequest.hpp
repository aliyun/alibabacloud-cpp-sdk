// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithAligenieUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithAligenieUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedAligenieUserIdentifier, encryptedAligenieUserIdentifier_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithAligenieUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedAligenieUserIdentifier, encryptedAligenieUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AuthLoginWithAligenieUserInfoRequest() = default ;
    AuthLoginWithAligenieUserInfoRequest(const AuthLoginWithAligenieUserInfoRequest &) = default ;
    AuthLoginWithAligenieUserInfoRequest(AuthLoginWithAligenieUserInfoRequest &&) = default ;
    AuthLoginWithAligenieUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithAligenieUserInfoRequest() = default ;
    AuthLoginWithAligenieUserInfoRequest& operator=(const AuthLoginWithAligenieUserInfoRequest &) = default ;
    AuthLoginWithAligenieUserInfoRequest& operator=(AuthLoginWithAligenieUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptedAligenieUserIdentifier_ != nullptr
        && this->sessionId_ != nullptr; };
    // encryptedAligenieUserIdentifier Field Functions 
    bool hasEncryptedAligenieUserIdentifier() const { return this->encryptedAligenieUserIdentifier_ != nullptr;};
    void deleteEncryptedAligenieUserIdentifier() { this->encryptedAligenieUserIdentifier_ = nullptr;};
    inline string encryptedAligenieUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(encryptedAligenieUserIdentifier_, "") };
    inline AuthLoginWithAligenieUserInfoRequest& setEncryptedAligenieUserIdentifier(string encryptedAligenieUserIdentifier) { DARABONBA_PTR_SET_VALUE(encryptedAligenieUserIdentifier_, encryptedAligenieUserIdentifier) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AuthLoginWithAligenieUserInfoRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encryptedAligenieUserIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
