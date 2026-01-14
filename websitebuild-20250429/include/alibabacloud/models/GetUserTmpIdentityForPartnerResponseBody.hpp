// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERTMPIDENTITYFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetUserTmpIdentityForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserTmpIdentityForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserTmpIdentityForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserTmpIdentityForPartnerResponseBody() = default ;
    GetUserTmpIdentityForPartnerResponseBody(const GetUserTmpIdentityForPartnerResponseBody &) = default ;
    GetUserTmpIdentityForPartnerResponseBody(GetUserTmpIdentityForPartnerResponseBody &&) = default ;
    GetUserTmpIdentityForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserTmpIdentityForPartnerResponseBody() = default ;
    GetUserTmpIdentityForPartnerResponseBody& operator=(const GetUserTmpIdentityForPartnerResponseBody &) = default ;
    GetUserTmpIdentityForPartnerResponseBody& operator=(GetUserTmpIdentityForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Credentials, credentials_);
        DARABONBA_PTR_TO_JSON(HasCustomRoleAuth, hasCustomRoleAuth_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
        DARABONBA_PTR_FROM_JSON(HasCustomRoleAuth, hasCustomRoleAuth_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Credentials : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
          DARABONBA_PTR_TO_JSON(EncryptedAccessKeyId, encryptedAccessKeyId_);
          DARABONBA_PTR_TO_JSON(EncryptedAccessKeySecret, encryptedAccessKeySecret_);
          DARABONBA_PTR_TO_JSON(EncryptedSecurityToken, encryptedSecurityToken_);
          DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        };
        friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
          DARABONBA_PTR_FROM_JSON(EncryptedAccessKeyId, encryptedAccessKeyId_);
          DARABONBA_PTR_FROM_JSON(EncryptedAccessKeySecret, encryptedAccessKeySecret_);
          DARABONBA_PTR_FROM_JSON(EncryptedSecurityToken, encryptedSecurityToken_);
          DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        };
        Credentials() = default ;
        Credentials(const Credentials &) = default ;
        Credentials(Credentials &&) = default ;
        Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Credentials() = default ;
        Credentials& operator=(const Credentials &) = default ;
        Credentials& operator=(Credentials &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->encryptedAccessKeyId_ == nullptr
        && this->encryptedAccessKeySecret_ == nullptr && this->encryptedSecurityToken_ == nullptr && this->expiration_ == nullptr; };
        // encryptedAccessKeyId Field Functions 
        bool hasEncryptedAccessKeyId() const { return this->encryptedAccessKeyId_ != nullptr;};
        void deleteEncryptedAccessKeyId() { this->encryptedAccessKeyId_ = nullptr;};
        inline string getEncryptedAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptedAccessKeyId_, "") };
        inline Credentials& setEncryptedAccessKeyId(string encryptedAccessKeyId) { DARABONBA_PTR_SET_VALUE(encryptedAccessKeyId_, encryptedAccessKeyId) };


        // encryptedAccessKeySecret Field Functions 
        bool hasEncryptedAccessKeySecret() const { return this->encryptedAccessKeySecret_ != nullptr;};
        void deleteEncryptedAccessKeySecret() { this->encryptedAccessKeySecret_ = nullptr;};
        inline string getEncryptedAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(encryptedAccessKeySecret_, "") };
        inline Credentials& setEncryptedAccessKeySecret(string encryptedAccessKeySecret) { DARABONBA_PTR_SET_VALUE(encryptedAccessKeySecret_, encryptedAccessKeySecret) };


        // encryptedSecurityToken Field Functions 
        bool hasEncryptedSecurityToken() const { return this->encryptedSecurityToken_ != nullptr;};
        void deleteEncryptedSecurityToken() { this->encryptedSecurityToken_ = nullptr;};
        inline string getEncryptedSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(encryptedSecurityToken_, "") };
        inline Credentials& setEncryptedSecurityToken(string encryptedSecurityToken) { DARABONBA_PTR_SET_VALUE(encryptedSecurityToken_, encryptedSecurityToken) };


        // expiration Field Functions 
        bool hasExpiration() const { return this->expiration_ != nullptr;};
        void deleteExpiration() { this->expiration_ = nullptr;};
        inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
        inline Credentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      protected:
        shared_ptr<string> encryptedAccessKeyId_ {};
        shared_ptr<string> encryptedAccessKeySecret_ {};
        shared_ptr<string> encryptedSecurityToken_ {};
        shared_ptr<string> expiration_ {};
      };

      virtual bool empty() const override { return this->credentials_ == nullptr
        && this->hasCustomRoleAuth_ == nullptr; };
      // credentials Field Functions 
      bool hasCredentials() const { return this->credentials_ != nullptr;};
      void deleteCredentials() { this->credentials_ = nullptr;};
      inline const Data::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, Data::Credentials) };
      inline Data::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, Data::Credentials) };
      inline Data& setCredentials(const Data::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
      inline Data& setCredentials(Data::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


      // hasCustomRoleAuth Field Functions 
      bool hasHasCustomRoleAuth() const { return this->hasCustomRoleAuth_ != nullptr;};
      void deleteHasCustomRoleAuth() { this->hasCustomRoleAuth_ = nullptr;};
      inline bool getHasCustomRoleAuth() const { DARABONBA_PTR_GET_DEFAULT(hasCustomRoleAuth_, false) };
      inline Data& setHasCustomRoleAuth(bool hasCustomRoleAuth) { DARABONBA_PTR_SET_VALUE(hasCustomRoleAuth_, hasCustomRoleAuth) };


    protected:
      shared_ptr<Data::Credentials> credentials_ {};
      shared_ptr<bool> hasCustomRoleAuth_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUserTmpIdentityForPartnerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUserTmpIdentityForPartnerResponseBody::Data) };
    inline GetUserTmpIdentityForPartnerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUserTmpIdentityForPartnerResponseBody::Data) };
    inline GetUserTmpIdentityForPartnerResponseBody& setData(const GetUserTmpIdentityForPartnerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUserTmpIdentityForPartnerResponseBody& setData(GetUserTmpIdentityForPartnerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserTmpIdentityForPartnerResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetUserTmpIdentityForPartnerResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserTmpIdentityForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserTmpIdentityForPartnerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetUserTmpIdentityForPartnerResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
