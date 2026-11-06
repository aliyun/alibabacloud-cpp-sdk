// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetAuthCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAuthCodeResponseBody() = default ;
    GetAuthCodeResponseBody(const GetAuthCodeResponseBody &) = default ;
    GetAuthCodeResponseBody(GetAuthCodeResponseBody &&) = default ;
    GetAuthCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthCodeResponseBody() = default ;
    GetAuthCodeResponseBody& operator=(const GetAuthCodeResponseBody &) = default ;
    GetAuthCodeResponseBody& operator=(GetAuthCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
        DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
        DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->appId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appVersionId_ == nullptr && this->authCode_ == nullptr && this->productType_ == nullptr
        && this->regionId_ == nullptr && this->userId_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline Data& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline Data& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appVersionId Field Functions 
      bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
      void deleteAppVersionId() { this->appVersionId_ = nullptr;};
      inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
      inline Data& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


      // authCode Field Functions 
      bool hasAuthCode() const { return this->authCode_ != nullptr;};
      void deleteAuthCode() { this->authCode_ = nullptr;};
      inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
      inline Data& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The network access type supported by the connection resource.
      // 
      // - **INTERNET**: Supports Internet access.
      // - **VPC**: Supports virtual private cloud (VPC) access.
      // - **ANY**: Supports both Internet and VPC access.
      shared_ptr<string> accessType_ {};
      // The application ID, which is used for subsequent application queries or unbinding the image.
      shared_ptr<string> appId_ {};
      // The delivery group ID of the creation or validation resource. It is used together with the user and application information in this response during connection.
      shared_ptr<string> appInstanceGroupId_ {};
      // The application version ID, which is used to locate a specific version of the application. This field is not the image version ID.
      shared_ptr<string> appVersionId_ {};
      // The authorization code used to connect to the creation or validation resource. **The validity period is 180 seconds (3 minutes) from the time of issuance. Use it promptly after obtaining it.** Use it together with the user, delivery group, and application information in the same response, and keep it confidential as a connection credential.
      // 
      // Do not reuse the authorization code after it is redeemed. If it has been used or expired, call this operation again to obtain a new one.
      shared_ptr<string> authCode_ {};
      // The purpose type of the connection resource.
      // 
      // - **ImageBuilder**: Image or application creation resource.
      // - **ImageValidate**: Image or application validation resource.
      shared_ptr<string> productType_ {};
      // The region ID in this response.
      shared_ptr<string> regionId_ {};
      // The user ID used when connecting to the creation or validation environment. Use the value returned in this response.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuthCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAuthCodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAuthCodeResponseBody::Data) };
    inline GetAuthCodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAuthCodeResponseBody::Data) };
    inline GetAuthCodeResponseBody& setData(const GetAuthCodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAuthCodeResponseBody& setData(GetAuthCodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAuthCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuthCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. It is returned when the request fails. A success response may not contain this field.
    shared_ptr<string> code_ {};
    // The business data returned by the operation.
    shared_ptr<GetAuthCodeResponseBody::Data> data_ {};
    // The error or result message. It describes the cause when the request fails. A success response may not contain this field.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can provide this value for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was processed successfully. A value of true indicates that the request was processed successfully. To check whether an asynchronous task is completed, you must query the task status separately.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
