// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataExportDownloadURLResponseBodyDownloadURLResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportDownloadURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadURLResult, downloadURLResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportDownloadURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadURLResult, downloadURLResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataExportDownloadURLResponseBody() = default ;
    GetDataExportDownloadURLResponseBody(const GetDataExportDownloadURLResponseBody &) = default ;
    GetDataExportDownloadURLResponseBody(GetDataExportDownloadURLResponseBody &&) = default ;
    GetDataExportDownloadURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportDownloadURLResponseBody() = default ;
    GetDataExportDownloadURLResponseBody& operator=(const GetDataExportDownloadURLResponseBody &) = default ;
    GetDataExportDownloadURLResponseBody& operator=(GetDataExportDownloadURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadURLResult_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // downloadURLResult Field Functions 
    bool hasDownloadURLResult() const { return this->downloadURLResult_ != nullptr;};
    void deleteDownloadURLResult() { this->downloadURLResult_ = nullptr;};
    inline const GetDataExportDownloadURLResponseBodyDownloadURLResult & downloadURLResult() const { DARABONBA_PTR_GET_CONST(downloadURLResult_, GetDataExportDownloadURLResponseBodyDownloadURLResult) };
    inline GetDataExportDownloadURLResponseBodyDownloadURLResult downloadURLResult() { DARABONBA_PTR_GET(downloadURLResult_, GetDataExportDownloadURLResponseBodyDownloadURLResult) };
    inline GetDataExportDownloadURLResponseBody& setDownloadURLResult(const GetDataExportDownloadURLResponseBodyDownloadURLResult & downloadURLResult) { DARABONBA_PTR_SET_VALUE(downloadURLResult_, downloadURLResult) };
    inline GetDataExportDownloadURLResponseBody& setDownloadURLResult(GetDataExportDownloadURLResponseBodyDownloadURLResult && downloadURLResult) { DARABONBA_PTR_SET_RVALUE(downloadURLResult_, downloadURLResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataExportDownloadURLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataExportDownloadURLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataExportDownloadURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataExportDownloadURLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the download URL of the file that records the export results for the ticket.
    std::shared_ptr<GetDataExportDownloadURLResponseBodyDownloadURLResult> downloadURLResult_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
