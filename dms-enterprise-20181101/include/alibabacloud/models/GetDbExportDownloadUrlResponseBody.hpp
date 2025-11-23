// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDbExportDownloadURLResponseBodyDownloadURLResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDbExportDownloadURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDbExportDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadURLResult, downloadURLResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDbExportDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadURLResult, downloadURLResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDbExportDownloadURLResponseBody() = default ;
    GetDbExportDownloadURLResponseBody(const GetDbExportDownloadURLResponseBody &) = default ;
    GetDbExportDownloadURLResponseBody(GetDbExportDownloadURLResponseBody &&) = default ;
    GetDbExportDownloadURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDbExportDownloadURLResponseBody() = default ;
    GetDbExportDownloadURLResponseBody& operator=(const GetDbExportDownloadURLResponseBody &) = default ;
    GetDbExportDownloadURLResponseBody& operator=(GetDbExportDownloadURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadURLResult_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // downloadURLResult Field Functions 
    bool hasDownloadURLResult() const { return this->downloadURLResult_ != nullptr;};
    void deleteDownloadURLResult() { this->downloadURLResult_ = nullptr;};
    inline const GetDbExportDownloadURLResponseBodyDownloadURLResult & downloadURLResult() const { DARABONBA_PTR_GET_CONST(downloadURLResult_, GetDbExportDownloadURLResponseBodyDownloadURLResult) };
    inline GetDbExportDownloadURLResponseBodyDownloadURLResult downloadURLResult() { DARABONBA_PTR_GET(downloadURLResult_, GetDbExportDownloadURLResponseBodyDownloadURLResult) };
    inline GetDbExportDownloadURLResponseBody& setDownloadURLResult(const GetDbExportDownloadURLResponseBodyDownloadURLResult & downloadURLResult) { DARABONBA_PTR_SET_VALUE(downloadURLResult_, downloadURLResult) };
    inline GetDbExportDownloadURLResponseBody& setDownloadURLResult(GetDbExportDownloadURLResponseBodyDownloadURLResult && downloadURLResult) { DARABONBA_PTR_SET_RVALUE(downloadURLResult_, downloadURLResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDbExportDownloadURLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDbExportDownloadURLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDbExportDownloadURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDbExportDownloadURLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the exported file.
    std::shared_ptr<GetDbExportDownloadURLResponseBodyDownloadURLResult> downloadURLResult_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request succeeded.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
