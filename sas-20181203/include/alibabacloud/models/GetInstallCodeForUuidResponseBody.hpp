// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstallCodeForUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstallCodeForUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstallCode, installCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstallCodeForUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstallCode, installCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstallCodeForUuidResponseBody() = default ;
    GetInstallCodeForUuidResponseBody(const GetInstallCodeForUuidResponseBody &) = default ;
    GetInstallCodeForUuidResponseBody(GetInstallCodeForUuidResponseBody &&) = default ;
    GetInstallCodeForUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstallCodeForUuidResponseBody() = default ;
    GetInstallCodeForUuidResponseBody& operator=(const GetInstallCodeForUuidResponseBody &) = default ;
    GetInstallCodeForUuidResponseBody& operator=(GetInstallCodeForUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstallCode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstallCode& obj) { 
        DARABONBA_PTR_TO_JSON(CaptchaCode, captchaCode_);
        DARABONBA_PTR_TO_JSON(ExpiredDate, expiredDate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      };
      friend void from_json(const Darabonba::Json& j, InstallCode& obj) { 
        DARABONBA_PTR_FROM_JSON(CaptchaCode, captchaCode_);
        DARABONBA_PTR_FROM_JSON(ExpiredDate, expiredDate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      };
      InstallCode() = default ;
      InstallCode(const InstallCode &) = default ;
      InstallCode(InstallCode &&) = default ;
      InstallCode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstallCode() = default ;
      InstallCode& operator=(const InstallCode &) = default ;
      InstallCode& operator=(InstallCode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->captchaCode_ == nullptr
        && this->expiredDate_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->os_ == nullptr && this->vendorName_ == nullptr; };
      // captchaCode Field Functions 
      bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
      void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
      inline string getCaptchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
      inline InstallCode& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


      // expiredDate Field Functions 
      bool hasExpiredDate() const { return this->expiredDate_ != nullptr;};
      void deleteExpiredDate() { this->expiredDate_ = nullptr;};
      inline int64_t getExpiredDate() const { DARABONBA_PTR_GET_DEFAULT(expiredDate_, 0L) };
      inline InstallCode& setExpiredDate(int64_t expiredDate) { DARABONBA_PTR_SET_VALUE(expiredDate_, expiredDate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline InstallCode& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline InstallCode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline InstallCode& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline InstallCode& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    protected:
      // Installation verification code for manually installing the Cloud Security Center client.
      shared_ptr<string> captchaCode_ {};
      // Expiration date of the installation verification code. The format is a 13-digit timestamp.
      // > The installation verification code can only be used within its validity period. Expired codes cannot be used.
      shared_ptr<int64_t> expiredDate_ {};
      // Server group ID.
      shared_ptr<int64_t> groupId_ {};
      // Server group name.
      shared_ptr<string> groupName_ {};
      // Operating system of the server. Values:
      // 
      // - **linux**: Linux
      // 
      // - **windows**: Windows
      shared_ptr<string> os_ {};
      // Name of the server vendor.
      shared_ptr<string> vendorName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->installCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInstallCodeForUuidResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetInstallCodeForUuidResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // installCode Field Functions 
    bool hasInstallCode() const { return this->installCode_ != nullptr;};
    void deleteInstallCode() { this->installCode_ = nullptr;};
    inline const GetInstallCodeForUuidResponseBody::InstallCode & getInstallCode() const { DARABONBA_PTR_GET_CONST(installCode_, GetInstallCodeForUuidResponseBody::InstallCode) };
    inline GetInstallCodeForUuidResponseBody::InstallCode getInstallCode() { DARABONBA_PTR_GET(installCode_, GetInstallCodeForUuidResponseBody::InstallCode) };
    inline GetInstallCodeForUuidResponseBody& setInstallCode(const GetInstallCodeForUuidResponseBody::InstallCode & installCode) { DARABONBA_PTR_SET_VALUE(installCode_, installCode) };
    inline GetInstallCodeForUuidResponseBody& setInstallCode(GetInstallCodeForUuidResponseBody::InstallCode && installCode) { DARABONBA_PTR_SET_RVALUE(installCode_, installCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstallCodeForUuidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstallCodeForUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstallCodeForUuidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API status code.
    shared_ptr<int32_t> code_ {};
    // HTTP status code
    shared_ptr<int64_t> httpStatusCode_ {};
    // Client installation code.
    shared_ptr<GetInstallCodeForUuidResponseBody::InstallCode> installCode_ {};
    // Response message from the request.
    shared_ptr<string> message_ {};
    // The ID of the current request, a unique identifier generated by Alibaba Cloud for troubleshooting and issue localization.
    shared_ptr<string> requestId_ {};
    // The status of the returned query result. Values: - **true**: Success - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
