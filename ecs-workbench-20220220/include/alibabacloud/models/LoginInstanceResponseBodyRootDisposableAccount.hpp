// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTDISPOSABLEACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTDISPOSABLEACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBodyRootDisposableAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBodyRootDisposableAccount& obj) { 
      DARABONBA_PTR_TO_JSON(LoginFormActionUrl, loginFormActionUrl_);
      DARABONBA_PTR_TO_JSON(LoginUrl, loginUrl_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBodyRootDisposableAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginFormActionUrl, loginFormActionUrl_);
      DARABONBA_PTR_FROM_JSON(LoginUrl, loginUrl_);
    };
    LoginInstanceResponseBodyRootDisposableAccount() = default ;
    LoginInstanceResponseBodyRootDisposableAccount(const LoginInstanceResponseBodyRootDisposableAccount &) = default ;
    LoginInstanceResponseBodyRootDisposableAccount(LoginInstanceResponseBodyRootDisposableAccount &&) = default ;
    LoginInstanceResponseBodyRootDisposableAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBodyRootDisposableAccount() = default ;
    LoginInstanceResponseBodyRootDisposableAccount& operator=(const LoginInstanceResponseBodyRootDisposableAccount &) = default ;
    LoginInstanceResponseBodyRootDisposableAccount& operator=(LoginInstanceResponseBodyRootDisposableAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginFormActionUrl_ != nullptr
        && this->loginUrl_ != nullptr; };
    // loginFormActionUrl Field Functions 
    bool hasLoginFormActionUrl() const { return this->loginFormActionUrl_ != nullptr;};
    void deleteLoginFormActionUrl() { this->loginFormActionUrl_ = nullptr;};
    inline string loginFormActionUrl() const { DARABONBA_PTR_GET_DEFAULT(loginFormActionUrl_, "") };
    inline LoginInstanceResponseBodyRootDisposableAccount& setLoginFormActionUrl(string loginFormActionUrl) { DARABONBA_PTR_SET_VALUE(loginFormActionUrl_, loginFormActionUrl) };


    // loginUrl Field Functions 
    bool hasLoginUrl() const { return this->loginUrl_ != nullptr;};
    void deleteLoginUrl() { this->loginUrl_ = nullptr;};
    inline string loginUrl() const { DARABONBA_PTR_GET_DEFAULT(loginUrl_, "") };
    inline LoginInstanceResponseBodyRootDisposableAccount& setLoginUrl(string loginUrl) { DARABONBA_PTR_SET_VALUE(loginUrl_, loginUrl) };


  protected:
    std::shared_ptr<string> loginFormActionUrl_ = nullptr;
    std::shared_ptr<string> loginUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
