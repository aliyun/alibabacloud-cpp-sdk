// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYAGENTICNOTIFICATIONCHANNELAUTHORIZEURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMYAGENTICNOTIFICATIONCHANNELAUTHORIZEURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetMyAgenticNotificationChannelAuthorizeUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody() = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody(const GetMyAgenticNotificationChannelAuthorizeUrlResponseBody &) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody(GetMyAgenticNotificationChannelAuthorizeUrlResponseBody &&) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyAgenticNotificationChannelAuthorizeUrlResponseBody() = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& operator=(const GetMyAgenticNotificationChannelAuthorizeUrlResponseBody &) = default ;
    GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& operator=(GetMyAgenticNotificationChannelAuthorizeUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizeUrl, authorizeUrl_);
        DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizeUrl, authorizeUrl_);
        DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
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
      virtual bool empty() const override { return this->authorizeUrl_ == nullptr
        && this->redirectUri_ == nullptr; };
      // authorizeUrl Field Functions 
      bool hasAuthorizeUrl() const { return this->authorizeUrl_ != nullptr;};
      void deleteAuthorizeUrl() { this->authorizeUrl_ = nullptr;};
      inline string getAuthorizeUrl() const { DARABONBA_PTR_GET_DEFAULT(authorizeUrl_, "") };
      inline Data& setAuthorizeUrl(string authorizeUrl) { DARABONBA_PTR_SET_VALUE(authorizeUrl_, authorizeUrl) };


      // redirectUri Field Functions 
      bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
      void deleteRedirectUri() { this->redirectUri_ = nullptr;};
      inline string getRedirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
      inline Data& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


    protected:
      // The URL of the Lark OAuth authorization page. After the user opens the URL in a browser and completes the authorization, the system binds the Lark account as the notification identity for the current user, and the channel switch remains unchanged. The state parameter in the URL is valid for 180 seconds and can be used only once.
      shared_ptr<string> authorizeUrl_ {};
      // The callback URL after the authorization is completed. You must add this URL to the redirect URL whitelist of the tenant\\"s Lark application. Otherwise, the authorization fails.
      shared_ptr<string> redirectUri_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data) };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data) };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setData(const GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setData(GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMyAgenticNotificationChannelAuthorizeUrlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The authorization URL information.
    shared_ptr<GetMyAgenticNotificationChannelAuthorizeUrlResponseBody::Data> data_ {};
    // The error code returned when the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the request fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // - true: The request is successful.
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
