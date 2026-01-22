// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBEXPORTDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class DownloadURLResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DownloadURLResult& obj) { 
        DARABONBA_PTR_TO_JSON(HasResult, hasResult_);
        DARABONBA_PTR_TO_JSON(TipMessage, tipMessage_);
        DARABONBA_PTR_TO_JSON(URL, URL_);
      };
      friend void from_json(const Darabonba::Json& j, DownloadURLResult& obj) { 
        DARABONBA_PTR_FROM_JSON(HasResult, hasResult_);
        DARABONBA_PTR_FROM_JSON(TipMessage, tipMessage_);
        DARABONBA_PTR_FROM_JSON(URL, URL_);
      };
      DownloadURLResult() = default ;
      DownloadURLResult(const DownloadURLResult &) = default ;
      DownloadURLResult(DownloadURLResult &&) = default ;
      DownloadURLResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DownloadURLResult() = default ;
      DownloadURLResult& operator=(const DownloadURLResult &) = default ;
      DownloadURLResult& operator=(DownloadURLResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasResult_ == nullptr
        && this->tipMessage_ == nullptr && this->URL_ == nullptr; };
      // hasResult Field Functions 
      bool hasHasResult() const { return this->hasResult_ != nullptr;};
      void deleteHasResult() { this->hasResult_ = nullptr;};
      inline bool getHasResult() const { DARABONBA_PTR_GET_DEFAULT(hasResult_, false) };
      inline DownloadURLResult& setHasResult(bool hasResult) { DARABONBA_PTR_SET_VALUE(hasResult_, hasResult) };


      // tipMessage Field Functions 
      bool hasTipMessage() const { return this->tipMessage_ != nullptr;};
      void deleteTipMessage() { this->tipMessage_ = nullptr;};
      inline string getTipMessage() const { DARABONBA_PTR_GET_DEFAULT(tipMessage_, "") };
      inline DownloadURLResult& setTipMessage(string tipMessage) { DARABONBA_PTR_SET_VALUE(tipMessage_, tipMessage) };


      // URL Field Functions 
      bool hasURL() const { return this->URL_ != nullptr;};
      void deleteURL() { this->URL_ = nullptr;};
      inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
      inline DownloadURLResult& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


    protected:
      // Indicates whether export results are available for download. Valid values:
      // 
      // *   **true**: Export results are available for download.
      // *   **false**: No export results are available for download.
      shared_ptr<bool> hasResult_ {};
      // The message that indicates an exception.
      shared_ptr<string> tipMessage_ {};
      // The download URL of the exported file.
      shared_ptr<string> URL_ {};
    };

    virtual bool empty() const override { return this->downloadURLResult_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // downloadURLResult Field Functions 
    bool hasDownloadURLResult() const { return this->downloadURLResult_ != nullptr;};
    void deleteDownloadURLResult() { this->downloadURLResult_ = nullptr;};
    inline const GetDbExportDownloadURLResponseBody::DownloadURLResult & getDownloadURLResult() const { DARABONBA_PTR_GET_CONST(downloadURLResult_, GetDbExportDownloadURLResponseBody::DownloadURLResult) };
    inline GetDbExportDownloadURLResponseBody::DownloadURLResult getDownloadURLResult() { DARABONBA_PTR_GET(downloadURLResult_, GetDbExportDownloadURLResponseBody::DownloadURLResult) };
    inline GetDbExportDownloadURLResponseBody& setDownloadURLResult(const GetDbExportDownloadURLResponseBody::DownloadURLResult & downloadURLResult) { DARABONBA_PTR_SET_VALUE(downloadURLResult_, downloadURLResult) };
    inline GetDbExportDownloadURLResponseBody& setDownloadURLResult(GetDbExportDownloadURLResponseBody::DownloadURLResult && downloadURLResult) { DARABONBA_PTR_SET_RVALUE(downloadURLResult_, downloadURLResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDbExportDownloadURLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDbExportDownloadURLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDbExportDownloadURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDbExportDownloadURLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the exported file.
    shared_ptr<GetDbExportDownloadURLResponseBody::DownloadURLResult> downloadURLResult_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request succeeded.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
