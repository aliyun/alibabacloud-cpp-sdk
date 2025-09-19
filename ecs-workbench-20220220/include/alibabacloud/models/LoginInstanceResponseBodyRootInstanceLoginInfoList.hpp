// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTINSTANCELOGININFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCERESPONSEBODYROOTINSTANCELOGININFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceResponseBodyRootInstanceLoginInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceResponseBodyRootInstanceLoginInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceLoginToken, instanceLoginToken_);
      DARABONBA_PTR_TO_JSON(InstanceLoginView, instanceLoginView_);
      DARABONBA_PTR_TO_JSON(LoginSuccess, loginSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceResponseBodyRootInstanceLoginInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceLoginToken, instanceLoginToken_);
      DARABONBA_PTR_FROM_JSON(InstanceLoginView, instanceLoginView_);
      DARABONBA_PTR_FROM_JSON(LoginSuccess, loginSuccess_);
    };
    LoginInstanceResponseBodyRootInstanceLoginInfoList() = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoList(const LoginInstanceResponseBodyRootInstanceLoginInfoList &) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoList(LoginInstanceResponseBodyRootInstanceLoginInfoList &&) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceResponseBodyRootInstanceLoginInfoList() = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoList& operator=(const LoginInstanceResponseBodyRootInstanceLoginInfoList &) = default ;
    LoginInstanceResponseBodyRootInstanceLoginInfoList& operator=(LoginInstanceResponseBodyRootInstanceLoginInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceLoginToken_ != nullptr && this->instanceLoginView_ != nullptr && this->loginSuccess_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceLoginToken Field Functions 
    bool hasInstanceLoginToken() const { return this->instanceLoginToken_ != nullptr;};
    void deleteInstanceLoginToken() { this->instanceLoginToken_ = nullptr;};
    inline string instanceLoginToken() const { DARABONBA_PTR_GET_DEFAULT(instanceLoginToken_, "") };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoList& setInstanceLoginToken(string instanceLoginToken) { DARABONBA_PTR_SET_VALUE(instanceLoginToken_, instanceLoginToken) };


    // instanceLoginView Field Functions 
    bool hasInstanceLoginView() const { return this->instanceLoginView_ != nullptr;};
    void deleteInstanceLoginView() { this->instanceLoginView_ = nullptr;};
    inline const Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView & instanceLoginView() const { DARABONBA_PTR_GET_CONST(instanceLoginView_, Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView) };
    inline Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView instanceLoginView() { DARABONBA_PTR_GET(instanceLoginView_, Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView) };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoList& setInstanceLoginView(const Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView & instanceLoginView) { DARABONBA_PTR_SET_VALUE(instanceLoginView_, instanceLoginView) };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoList& setInstanceLoginView(Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView && instanceLoginView) { DARABONBA_PTR_SET_RVALUE(instanceLoginView_, instanceLoginView) };


    // loginSuccess Field Functions 
    bool hasLoginSuccess() const { return this->loginSuccess_ != nullptr;};
    void deleteLoginSuccess() { this->loginSuccess_ = nullptr;};
    inline bool loginSuccess() const { DARABONBA_PTR_GET_DEFAULT(loginSuccess_, false) };
    inline LoginInstanceResponseBodyRootInstanceLoginInfoList& setLoginSuccess(bool loginSuccess) { DARABONBA_PTR_SET_VALUE(loginSuccess_, loginSuccess) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceLoginToken_ = nullptr;
    std::shared_ptr<Models::LoginInstanceResponseBodyRootInstanceLoginInfoListInstanceLoginView> instanceLoginView_ = nullptr;
    std::shared_ptr<bool> loginSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
