// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINDEVELOPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOGINDEVELOPERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class LoginDeveloperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginDeveloperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, LoginDeveloperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    LoginDeveloperRequest() = default ;
    LoginDeveloperRequest(const LoginDeveloperRequest &) = default ;
    LoginDeveloperRequest(LoginDeveloperRequest &&) = default ;
    LoginDeveloperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginDeveloperRequest() = default ;
    LoginDeveloperRequest& operator=(const LoginDeveloperRequest &) = default ;
    LoginDeveloperRequest& operator=(LoginDeveloperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline LoginDeveloperRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline LoginDeveloperRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The password of the developer account. This field is marked as sensitive in the API definition.
    shared_ptr<string> password_ {};
    // The developer logon username.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
