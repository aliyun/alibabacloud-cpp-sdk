// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGINPREFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGINPREFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class UpdateLoginPreferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoginPreferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoginPreferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginPreference, loginPreference_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    UpdateLoginPreferenceRequest() = default ;
    UpdateLoginPreferenceRequest(const UpdateLoginPreferenceRequest &) = default ;
    UpdateLoginPreferenceRequest(UpdateLoginPreferenceRequest &&) = default ;
    UpdateLoginPreferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoginPreferenceRequest() = default ;
    UpdateLoginPreferenceRequest& operator=(const UpdateLoginPreferenceRequest &) = default ;
    UpdateLoginPreferenceRequest& operator=(UpdateLoginPreferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginPreference : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginPreference& obj) { 
        DARABONBA_PTR_TO_JSON(EnablePasswordLogin, enablePasswordLogin_);
      };
      friend void from_json(const Darabonba::Json& j, LoginPreference& obj) { 
        DARABONBA_PTR_FROM_JSON(EnablePasswordLogin, enablePasswordLogin_);
      };
      LoginPreference() = default ;
      LoginPreference(const LoginPreference &) = default ;
      LoginPreference(LoginPreference &&) = default ;
      LoginPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginPreference() = default ;
      LoginPreference& operator=(const LoginPreference &) = default ;
      LoginPreference& operator=(LoginPreference &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enablePasswordLogin_ == nullptr; };
      // enablePasswordLogin Field Functions 
      bool hasEnablePasswordLogin() const { return this->enablePasswordLogin_ != nullptr;};
      void deleteEnablePasswordLogin() { this->enablePasswordLogin_ = nullptr;};
      inline bool getEnablePasswordLogin() const { DARABONBA_PTR_GET_DEFAULT(enablePasswordLogin_, false) };
      inline LoginPreference& setEnablePasswordLogin(bool enablePasswordLogin) { DARABONBA_PTR_SET_VALUE(enablePasswordLogin_, enablePasswordLogin) };


    protected:
      shared_ptr<bool> enablePasswordLogin_ {};
    };

    virtual bool empty() const override { return this->loginPreference_ == nullptr
        && this->userPoolName_ == nullptr; };
    // loginPreference Field Functions 
    bool hasLoginPreference() const { return this->loginPreference_ != nullptr;};
    void deleteLoginPreference() { this->loginPreference_ = nullptr;};
    inline const UpdateLoginPreferenceRequest::LoginPreference & getLoginPreference() const { DARABONBA_PTR_GET_CONST(loginPreference_, UpdateLoginPreferenceRequest::LoginPreference) };
    inline UpdateLoginPreferenceRequest::LoginPreference getLoginPreference() { DARABONBA_PTR_GET(loginPreference_, UpdateLoginPreferenceRequest::LoginPreference) };
    inline UpdateLoginPreferenceRequest& setLoginPreference(const UpdateLoginPreferenceRequest::LoginPreference & loginPreference) { DARABONBA_PTR_SET_VALUE(loginPreference_, loginPreference) };
    inline UpdateLoginPreferenceRequest& setLoginPreference(UpdateLoginPreferenceRequest::LoginPreference && loginPreference) { DARABONBA_PTR_SET_RVALUE(loginPreference_, loginPreference) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline UpdateLoginPreferenceRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<UpdateLoginPreferenceRequest::LoginPreference> loginPreference_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
