// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetImageResponseBody() = default ;
    GetImageResponseBody(const GetImageResponseBody &) = default ;
    GetImageResponseBody(GetImageResponseBody &&) = default ;
    GetImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBody() = default ;
    GetImageResponseBody& operator=(const GetImageResponseBody &) = default ;
    GetImageResponseBody& operator=(GetImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentVersionFullShowName, currentVersionFullShowName_);
        DARABONBA_PTR_TO_JSON(MaxVersionChangelogUrl, maxVersionChangelogUrl_);
        DARABONBA_PTR_TO_JSON(MaxVersionCode, maxVersionCode_);
        DARABONBA_PTR_TO_JSON(MaxVersionFullShowName, maxVersionFullShowName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentVersionFullShowName, currentVersionFullShowName_);
        DARABONBA_PTR_FROM_JSON(MaxVersionChangelogUrl, maxVersionChangelogUrl_);
        DARABONBA_PTR_FROM_JSON(MaxVersionCode, maxVersionCode_);
        DARABONBA_PTR_FROM_JSON(MaxVersionFullShowName, maxVersionFullShowName_);
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
      virtual bool empty() const override { return this->currentVersionFullShowName_ == nullptr
        && this->maxVersionChangelogUrl_ == nullptr && this->maxVersionCode_ == nullptr && this->maxVersionFullShowName_ == nullptr; };
      // currentVersionFullShowName Field Functions 
      bool hasCurrentVersionFullShowName() const { return this->currentVersionFullShowName_ != nullptr;};
      void deleteCurrentVersionFullShowName() { this->currentVersionFullShowName_ = nullptr;};
      inline string getCurrentVersionFullShowName() const { DARABONBA_PTR_GET_DEFAULT(currentVersionFullShowName_, "") };
      inline Data& setCurrentVersionFullShowName(string currentVersionFullShowName) { DARABONBA_PTR_SET_VALUE(currentVersionFullShowName_, currentVersionFullShowName) };


      // maxVersionChangelogUrl Field Functions 
      bool hasMaxVersionChangelogUrl() const { return this->maxVersionChangelogUrl_ != nullptr;};
      void deleteMaxVersionChangelogUrl() { this->maxVersionChangelogUrl_ = nullptr;};
      inline string getMaxVersionChangelogUrl() const { DARABONBA_PTR_GET_DEFAULT(maxVersionChangelogUrl_, "") };
      inline Data& setMaxVersionChangelogUrl(string maxVersionChangelogUrl) { DARABONBA_PTR_SET_VALUE(maxVersionChangelogUrl_, maxVersionChangelogUrl) };


      // maxVersionCode Field Functions 
      bool hasMaxVersionCode() const { return this->maxVersionCode_ != nullptr;};
      void deleteMaxVersionCode() { this->maxVersionCode_ = nullptr;};
      inline string getMaxVersionCode() const { DARABONBA_PTR_GET_DEFAULT(maxVersionCode_, "") };
      inline Data& setMaxVersionCode(string maxVersionCode) { DARABONBA_PTR_SET_VALUE(maxVersionCode_, maxVersionCode) };


      // maxVersionFullShowName Field Functions 
      bool hasMaxVersionFullShowName() const { return this->maxVersionFullShowName_ != nullptr;};
      void deleteMaxVersionFullShowName() { this->maxVersionFullShowName_ = nullptr;};
      inline string getMaxVersionFullShowName() const { DARABONBA_PTR_GET_DEFAULT(maxVersionFullShowName_, "") };
      inline Data& setMaxVersionFullShowName(string maxVersionFullShowName) { DARABONBA_PTR_SET_VALUE(maxVersionFullShowName_, maxVersionFullShowName) };


    protected:
      // The full version number of the current instance image. The parameter is in the X.X.X.X format.
      shared_ptr<string> currentVersionFullShowName_ {};
      // The URL of the changelog for the maximum version to which the current version can be upgraded.
      shared_ptr<string> maxVersionChangelogUrl_ {};
      // The code of the maximum version to which the current version can be upgraded.
      shared_ptr<string> maxVersionCode_ {};
      // The full number of the maximum version to which the current version can be upgraded.
      shared_ptr<string> maxVersionFullShowName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetImageResponseBody::Data) };
    inline GetImageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetImageResponseBody::Data) };
    inline GetImageResponseBody& setData(const GetImageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageResponseBody& setData(GetImageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetImageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetImageResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<GetImageResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<string> httpCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
