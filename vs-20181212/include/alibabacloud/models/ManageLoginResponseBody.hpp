// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGELOGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MANAGELOGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ManageLoginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageLoginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginInfo, loginInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ManageLoginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginInfo, loginInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ManageLoginResponseBody() = default ;
    ManageLoginResponseBody(const ManageLoginResponseBody &) = default ;
    ManageLoginResponseBody(ManageLoginResponseBody &&) = default ;
    ManageLoginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageLoginResponseBody() = default ;
    ManageLoginResponseBody& operator=(const ManageLoginResponseBody &) = default ;
    ManageLoginResponseBody& operator=(ManageLoginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AdbLoginPort, adbLoginPort_);
        DARABONBA_PTR_TO_JSON(LoginHostname, loginHostname_);
        DARABONBA_PTR_TO_JSON(LoginPort, loginPort_);
      };
      friend void from_json(const Darabonba::Json& j, LoginInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AdbLoginPort, adbLoginPort_);
        DARABONBA_PTR_FROM_JSON(LoginHostname, loginHostname_);
        DARABONBA_PTR_FROM_JSON(LoginPort, loginPort_);
      };
      LoginInfo() = default ;
      LoginInfo(const LoginInfo &) = default ;
      LoginInfo(LoginInfo &&) = default ;
      LoginInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginInfo() = default ;
      LoginInfo& operator=(const LoginInfo &) = default ;
      LoginInfo& operator=(LoginInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adbLoginPort_ == nullptr
        && this->loginHostname_ == nullptr && this->loginPort_ == nullptr; };
      // adbLoginPort Field Functions 
      bool hasAdbLoginPort() const { return this->adbLoginPort_ != nullptr;};
      void deleteAdbLoginPort() { this->adbLoginPort_ = nullptr;};
      inline int32_t getAdbLoginPort() const { DARABONBA_PTR_GET_DEFAULT(adbLoginPort_, 0) };
      inline LoginInfo& setAdbLoginPort(int32_t adbLoginPort) { DARABONBA_PTR_SET_VALUE(adbLoginPort_, adbLoginPort) };


      // loginHostname Field Functions 
      bool hasLoginHostname() const { return this->loginHostname_ != nullptr;};
      void deleteLoginHostname() { this->loginHostname_ = nullptr;};
      inline string getLoginHostname() const { DARABONBA_PTR_GET_DEFAULT(loginHostname_, "") };
      inline LoginInfo& setLoginHostname(string loginHostname) { DARABONBA_PTR_SET_VALUE(loginHostname_, loginHostname) };


      // loginPort Field Functions 
      bool hasLoginPort() const { return this->loginPort_ != nullptr;};
      void deleteLoginPort() { this->loginPort_ = nullptr;};
      inline int32_t getLoginPort() const { DARABONBA_PTR_GET_DEFAULT(loginPort_, 0) };
      inline LoginInfo& setLoginPort(int32_t loginPort) { DARABONBA_PTR_SET_VALUE(loginPort_, loginPort) };


    protected:
      shared_ptr<int32_t> adbLoginPort_ {};
      shared_ptr<string> loginHostname_ {};
      shared_ptr<int32_t> loginPort_ {};
    };

    virtual bool empty() const override { return this->loginInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // loginInfo Field Functions 
    bool hasLoginInfo() const { return this->loginInfo_ != nullptr;};
    void deleteLoginInfo() { this->loginInfo_ = nullptr;};
    inline const ManageLoginResponseBody::LoginInfo & getLoginInfo() const { DARABONBA_PTR_GET_CONST(loginInfo_, ManageLoginResponseBody::LoginInfo) };
    inline ManageLoginResponseBody::LoginInfo getLoginInfo() { DARABONBA_PTR_GET(loginInfo_, ManageLoginResponseBody::LoginInfo) };
    inline ManageLoginResponseBody& setLoginInfo(const ManageLoginResponseBody::LoginInfo & loginInfo) { DARABONBA_PTR_SET_VALUE(loginInfo_, loginInfo) };
    inline ManageLoginResponseBody& setLoginInfo(ManageLoginResponseBody::LoginInfo && loginInfo) { DARABONBA_PTR_SET_RVALUE(loginInfo_, loginInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ManageLoginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ManageLoginResponseBody::LoginInfo> loginInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
