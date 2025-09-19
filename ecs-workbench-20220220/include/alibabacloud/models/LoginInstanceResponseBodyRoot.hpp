// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceResponseBodyRootDisposableAccount.hpp>
#include <vector>
#include <alibabacloud/models/LoginInstanceResponseBodyRootInstanceLoginInfoList.hpp>
#include <alibabacloud/models/LoginInstanceResponseBodyRootSessionControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(DisposableAccount, disposableAccount_);
      DARABONBA_PTR_TO_JSON(InstanceLoginInfoList, instanceLoginInfoList_);
      DARABONBA_PTR_TO_JSON(SessionControl, sessionControl_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(DisposableAccount, disposableAccount_);
      DARABONBA_PTR_FROM_JSON(InstanceLoginInfoList, instanceLoginInfoList_);
      DARABONBA_PTR_FROM_JSON(SessionControl, sessionControl_);
    };
    LoginInstanceResponseBodyRoot() = default ;
    LoginInstanceResponseBodyRoot(const LoginInstanceResponseBodyRoot &) = default ;
    LoginInstanceResponseBodyRoot(LoginInstanceResponseBodyRoot &&) = default ;
    LoginInstanceResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBodyRoot() = default ;
    LoginInstanceResponseBodyRoot& operator=(const LoginInstanceResponseBodyRoot &) = default ;
    LoginInstanceResponseBodyRoot& operator=(LoginInstanceResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disposableAccount_ != nullptr
        && this->instanceLoginInfoList_ != nullptr && this->sessionControl_ != nullptr; };
    // disposableAccount Field Functions 
    bool hasDisposableAccount() const { return this->disposableAccount_ != nullptr;};
    void deleteDisposableAccount() { this->disposableAccount_ = nullptr;};
    inline const Models::LoginInstanceResponseBodyRootDisposableAccount & disposableAccount() const { DARABONBA_PTR_GET_CONST(disposableAccount_, Models::LoginInstanceResponseBodyRootDisposableAccount) };
    inline Models::LoginInstanceResponseBodyRootDisposableAccount disposableAccount() { DARABONBA_PTR_GET(disposableAccount_, Models::LoginInstanceResponseBodyRootDisposableAccount) };
    inline LoginInstanceResponseBodyRoot& setDisposableAccount(const Models::LoginInstanceResponseBodyRootDisposableAccount & disposableAccount) { DARABONBA_PTR_SET_VALUE(disposableAccount_, disposableAccount) };
    inline LoginInstanceResponseBodyRoot& setDisposableAccount(Models::LoginInstanceResponseBodyRootDisposableAccount && disposableAccount) { DARABONBA_PTR_SET_RVALUE(disposableAccount_, disposableAccount) };


    // instanceLoginInfoList Field Functions 
    bool hasInstanceLoginInfoList() const { return this->instanceLoginInfoList_ != nullptr;};
    void deleteInstanceLoginInfoList() { this->instanceLoginInfoList_ = nullptr;};
    inline const vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList> & instanceLoginInfoList() const { DARABONBA_PTR_GET_CONST(instanceLoginInfoList_, vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList>) };
    inline vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList> instanceLoginInfoList() { DARABONBA_PTR_GET(instanceLoginInfoList_, vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList>) };
    inline LoginInstanceResponseBodyRoot& setInstanceLoginInfoList(const vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList> & instanceLoginInfoList) { DARABONBA_PTR_SET_VALUE(instanceLoginInfoList_, instanceLoginInfoList) };
    inline LoginInstanceResponseBodyRoot& setInstanceLoginInfoList(vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList> && instanceLoginInfoList) { DARABONBA_PTR_SET_RVALUE(instanceLoginInfoList_, instanceLoginInfoList) };


    // sessionControl Field Functions 
    bool hasSessionControl() const { return this->sessionControl_ != nullptr;};
    void deleteSessionControl() { this->sessionControl_ = nullptr;};
    inline const Models::LoginInstanceResponseBodyRootSessionControl & sessionControl() const { DARABONBA_PTR_GET_CONST(sessionControl_, Models::LoginInstanceResponseBodyRootSessionControl) };
    inline Models::LoginInstanceResponseBodyRootSessionControl sessionControl() { DARABONBA_PTR_GET(sessionControl_, Models::LoginInstanceResponseBodyRootSessionControl) };
    inline LoginInstanceResponseBodyRoot& setSessionControl(const Models::LoginInstanceResponseBodyRootSessionControl & sessionControl) { DARABONBA_PTR_SET_VALUE(sessionControl_, sessionControl) };
    inline LoginInstanceResponseBodyRoot& setSessionControl(Models::LoginInstanceResponseBodyRootSessionControl && sessionControl) { DARABONBA_PTR_SET_RVALUE(sessionControl_, sessionControl) };


  protected:
    std::shared_ptr<Models::LoginInstanceResponseBodyRootDisposableAccount> disposableAccount_ = nullptr;
    std::shared_ptr<vector<Models::LoginInstanceResponseBodyRootInstanceLoginInfoList>> instanceLoginInfoList_ = nullptr;
    std::shared_ptr<Models::LoginInstanceResponseBodyRootSessionControl> sessionControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
