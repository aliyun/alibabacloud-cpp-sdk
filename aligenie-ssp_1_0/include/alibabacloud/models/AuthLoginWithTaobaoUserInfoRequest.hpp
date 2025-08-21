// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHTAOBAOUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHTAOBAOUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithTaobaoUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithTaobaoUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedTaobaoUserIdentifier, encryptedTaobaoUserIdentifier_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithTaobaoUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedTaobaoUserIdentifier, encryptedTaobaoUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AuthLoginWithTaobaoUserInfoRequest() = default ;
    AuthLoginWithTaobaoUserInfoRequest(const AuthLoginWithTaobaoUserInfoRequest &) = default ;
    AuthLoginWithTaobaoUserInfoRequest(AuthLoginWithTaobaoUserInfoRequest &&) = default ;
    AuthLoginWithTaobaoUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithTaobaoUserInfoRequest() = default ;
    AuthLoginWithTaobaoUserInfoRequest& operator=(const AuthLoginWithTaobaoUserInfoRequest &) = default ;
    AuthLoginWithTaobaoUserInfoRequest& operator=(AuthLoginWithTaobaoUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptedTaobaoUserIdentifier_ != nullptr
        && this->sessionId_ != nullptr; };
    // encryptedTaobaoUserIdentifier Field Functions 
    bool hasEncryptedTaobaoUserIdentifier() const { return this->encryptedTaobaoUserIdentifier_ != nullptr;};
    void deleteEncryptedTaobaoUserIdentifier() { this->encryptedTaobaoUserIdentifier_ = nullptr;};
    inline string encryptedTaobaoUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(encryptedTaobaoUserIdentifier_, "") };
    inline AuthLoginWithTaobaoUserInfoRequest& setEncryptedTaobaoUserIdentifier(string encryptedTaobaoUserIdentifier) { DARABONBA_PTR_SET_VALUE(encryptedTaobaoUserIdentifier_, encryptedTaobaoUserIdentifier) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AuthLoginWithTaobaoUserInfoRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encryptedTaobaoUserIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
