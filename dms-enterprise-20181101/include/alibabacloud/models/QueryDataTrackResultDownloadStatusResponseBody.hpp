// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATATRACKRESULTDOWNLOADSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATATRACKRESULTDOWNLOADSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class QueryDataTrackResultDownloadStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataTrackResultDownloadStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusResult, statusResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataTrackResultDownloadStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusResult, statusResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDataTrackResultDownloadStatusResponseBody() = default ;
    QueryDataTrackResultDownloadStatusResponseBody(const QueryDataTrackResultDownloadStatusResponseBody &) = default ;
    QueryDataTrackResultDownloadStatusResponseBody(QueryDataTrackResultDownloadStatusResponseBody &&) = default ;
    QueryDataTrackResultDownloadStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataTrackResultDownloadStatusResponseBody() = default ;
    QueryDataTrackResultDownloadStatusResponseBody& operator=(const QueryDataTrackResultDownloadStatusResponseBody &) = default ;
    QueryDataTrackResultDownloadStatusResponseBody& operator=(QueryDataTrackResultDownloadStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatusResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatusResult& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadStatus, downloadStatus_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, StatusResult& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadStatus, downloadStatus_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      StatusResult() = default ;
      StatusResult(const StatusResult &) = default ;
      StatusResult(StatusResult &&) = default ;
      StatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatusResult() = default ;
      StatusResult& operator=(const StatusResult &) = default ;
      StatusResult& operator=(StatusResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadStatus_ == nullptr
        && this->downloadUrl_ == nullptr && this->statusDesc_ == nullptr && this->totalCount_ == nullptr; };
      // downloadStatus Field Functions 
      bool hasDownloadStatus() const { return this->downloadStatus_ != nullptr;};
      void deleteDownloadStatus() { this->downloadStatus_ = nullptr;};
      inline string getDownloadStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadStatus_, "") };
      inline StatusResult& setDownloadStatus(string downloadStatus) { DARABONBA_PTR_SET_VALUE(downloadStatus_, downloadStatus) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline StatusResult& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline StatusResult& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline StatusResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The status of the download task. Valid values:
      // 
      // *   **INIT**: The download task is being initialized.
      // *   **LISTING**: The download task is in a transient intermediate state during the initialization.
      // *   **DOWNLOADING**: The download task is being processed.
      // *   **DOWNLOAD_SUCCESS**: The download task was successfully processed.
      // *   **DOWNLOAD_FAIL**: The download task failed.
      shared_ptr<string> downloadStatus_ {};
      // The URL that is used to download data tracking logs. This parameter is returned only when the value of DownloadStatus is DOWNLOAD_SUCCESS.
      shared_ptr<string> downloadUrl_ {};
      // The description of the state.
      shared_ptr<string> statusDesc_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->statusResult_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusResult Field Functions 
    bool hasStatusResult() const { return this->statusResult_ != nullptr;};
    void deleteStatusResult() { this->statusResult_ = nullptr;};
    inline const QueryDataTrackResultDownloadStatusResponseBody::StatusResult & getStatusResult() const { DARABONBA_PTR_GET_CONST(statusResult_, QueryDataTrackResultDownloadStatusResponseBody::StatusResult) };
    inline QueryDataTrackResultDownloadStatusResponseBody::StatusResult getStatusResult() { DARABONBA_PTR_GET(statusResult_, QueryDataTrackResultDownloadStatusResponseBody::StatusResult) };
    inline QueryDataTrackResultDownloadStatusResponseBody& setStatusResult(const QueryDataTrackResultDownloadStatusResponseBody::StatusResult & statusResult) { DARABONBA_PTR_SET_VALUE(statusResult_, statusResult) };
    inline QueryDataTrackResultDownloadStatusResponseBody& setStatusResult(QueryDataTrackResultDownloadStatusResponseBody::StatusResult && statusResult) { DARABONBA_PTR_SET_RVALUE(statusResult_, statusResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDataTrackResultDownloadStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the download progress.
    shared_ptr<QueryDataTrackResultDownloadStatusResponseBody::StatusResult> statusResult_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
