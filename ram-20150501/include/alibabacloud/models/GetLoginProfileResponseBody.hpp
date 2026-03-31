// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetLoginProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody(GetLoginProfileResponseBody &&) = default ;
    GetLoginProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody& operator=(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody& operator=(GetLoginProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginProfile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginProfile& obj) { 
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(MFABindRequired, MFABindRequired_);
        DARABONBA_PTR_TO_JSON(PasswordResetRequired, passwordResetRequired_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, LoginProfile& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(MFABindRequired, MFABindRequired_);
        DARABONBA_PTR_FROM_JSON(PasswordResetRequired, passwordResetRequired_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      LoginProfile() = default ;
      LoginProfile(const LoginProfile &) = default ;
      LoginProfile(LoginProfile &&) = default ;
      LoginProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginProfile() = default ;
      LoginProfile& operator=(const LoginProfile &) = default ;
      LoginProfile& operator=(LoginProfile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createDate_ == nullptr
        && this->MFABindRequired_ == nullptr && this->passwordResetRequired_ == nullptr && this->userName_ == nullptr; };
      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline LoginProfile& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // MFABindRequired Field Functions 
      bool hasMFABindRequired() const { return this->MFABindRequired_ != nullptr;};
      void deleteMFABindRequired() { this->MFABindRequired_ = nullptr;};
      inline bool getMFABindRequired() const { DARABONBA_PTR_GET_DEFAULT(MFABindRequired_, false) };
      inline LoginProfile& setMFABindRequired(bool MFABindRequired) { DARABONBA_PTR_SET_VALUE(MFABindRequired_, MFABindRequired) };


      // passwordResetRequired Field Functions 
      bool hasPasswordResetRequired() const { return this->passwordResetRequired_ != nullptr;};
      void deletePasswordResetRequired() { this->passwordResetRequired_ = nullptr;};
      inline bool getPasswordResetRequired() const { DARABONBA_PTR_GET_DEFAULT(passwordResetRequired_, false) };
      inline LoginProfile& setPasswordResetRequired(bool passwordResetRequired) { DARABONBA_PTR_SET_VALUE(passwordResetRequired_, passwordResetRequired) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline LoginProfile& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The creation time.
      shared_ptr<string> createDate_ {};
      // Indicates whether a multi-factor authentication (MFA) device must be bound to the RAM user.
      shared_ptr<bool> MFABindRequired_ {};
      // Indicates whether the RAM user must change the password upon logon.
      shared_ptr<bool> passwordResetRequired_ {};
      // The name of the RAM user.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->loginProfile_ == nullptr
        && this->requestId_ == nullptr; };
    // loginProfile Field Functions 
    bool hasLoginProfile() const { return this->loginProfile_ != nullptr;};
    void deleteLoginProfile() { this->loginProfile_ = nullptr;};
    inline const GetLoginProfileResponseBody::LoginProfile & getLoginProfile() const { DARABONBA_PTR_GET_CONST(loginProfile_, GetLoginProfileResponseBody::LoginProfile) };
    inline GetLoginProfileResponseBody::LoginProfile getLoginProfile() { DARABONBA_PTR_GET(loginProfile_, GetLoginProfileResponseBody::LoginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(const GetLoginProfileResponseBody::LoginProfile & loginProfile) { DARABONBA_PTR_SET_VALUE(loginProfile_, loginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(GetLoginProfileResponseBody::LoginProfile && loginProfile) { DARABONBA_PTR_SET_RVALUE(loginProfile_, loginProfile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logon configurations of the RAM user.
    shared_ptr<GetLoginProfileResponseBody::LoginProfile> loginProfile_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
