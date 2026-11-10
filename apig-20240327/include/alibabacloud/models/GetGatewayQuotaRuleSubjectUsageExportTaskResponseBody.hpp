// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULESUBJECTUSAGEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYQUOTARULESUBJECTUSAGEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody() = default ;
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody(const GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody &) = default ;
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody(GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody &&) = default ;
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody() = default ;
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& operator=(const GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody &) = default ;
    GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& operator=(GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(processedCount, processedCount_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subjectId, subjectId_);
        DARABONBA_PTR_TO_JSON(subjectName, subjectName_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskType, taskType_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(processedCount, processedCount_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subjectId, subjectId_);
        DARABONBA_PTR_FROM_JSON(subjectName, subjectName_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskType, taskType_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(downloadUrlExpiredAt, downloadUrlExpiredAt_);
          DARABONBA_PTR_TO_JSON(effectiveWindowStart, effectiveWindowStart_);
          DARABONBA_PTR_TO_JSON(fileExpired, fileExpired_);
          DARABONBA_PTR_TO_JSON(fileExpiredAt, fileExpiredAt_);
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(filterFailedRequests, filterFailedRequests_);
          DARABONBA_PTR_TO_JSON(format, format_);
          DARABONBA_PTR_TO_JSON(queryWindowEnd, queryWindowEnd_);
          DARABONBA_PTR_TO_JSON(queryWindowStart, queryWindowStart_);
          DARABONBA_PTR_TO_JSON(quotaDimension, quotaDimension_);
          DARABONBA_PTR_TO_JSON(rowCount, rowCount_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(downloadUrlExpiredAt, downloadUrlExpiredAt_);
          DARABONBA_PTR_FROM_JSON(effectiveWindowStart, effectiveWindowStart_);
          DARABONBA_PTR_FROM_JSON(fileExpired, fileExpired_);
          DARABONBA_PTR_FROM_JSON(fileExpiredAt, fileExpiredAt_);
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(filterFailedRequests, filterFailedRequests_);
          DARABONBA_PTR_FROM_JSON(format, format_);
          DARABONBA_PTR_FROM_JSON(queryWindowEnd, queryWindowEnd_);
          DARABONBA_PTR_FROM_JSON(queryWindowStart, queryWindowStart_);
          DARABONBA_PTR_FROM_JSON(quotaDimension, quotaDimension_);
          DARABONBA_PTR_FROM_JSON(rowCount, rowCount_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->downloadUrlExpiredAt_ == nullptr && this->effectiveWindowStart_ == nullptr && this->fileExpired_ == nullptr && this->fileExpiredAt_ == nullptr && this->fileSize_ == nullptr
        && this->filterFailedRequests_ == nullptr && this->format_ == nullptr && this->queryWindowEnd_ == nullptr && this->queryWindowStart_ == nullptr && this->quotaDimension_ == nullptr
        && this->rowCount_ == nullptr; };
        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline Result& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // downloadUrlExpiredAt Field Functions 
        bool hasDownloadUrlExpiredAt() const { return this->downloadUrlExpiredAt_ != nullptr;};
        void deleteDownloadUrlExpiredAt() { this->downloadUrlExpiredAt_ = nullptr;};
        inline int64_t getDownloadUrlExpiredAt() const { DARABONBA_PTR_GET_DEFAULT(downloadUrlExpiredAt_, 0L) };
        inline Result& setDownloadUrlExpiredAt(int64_t downloadUrlExpiredAt) { DARABONBA_PTR_SET_VALUE(downloadUrlExpiredAt_, downloadUrlExpiredAt) };


        // effectiveWindowStart Field Functions 
        bool hasEffectiveWindowStart() const { return this->effectiveWindowStart_ != nullptr;};
        void deleteEffectiveWindowStart() { this->effectiveWindowStart_ = nullptr;};
        inline int64_t getEffectiveWindowStart() const { DARABONBA_PTR_GET_DEFAULT(effectiveWindowStart_, 0L) };
        inline Result& setEffectiveWindowStart(int64_t effectiveWindowStart) { DARABONBA_PTR_SET_VALUE(effectiveWindowStart_, effectiveWindowStart) };


        // fileExpired Field Functions 
        bool hasFileExpired() const { return this->fileExpired_ != nullptr;};
        void deleteFileExpired() { this->fileExpired_ = nullptr;};
        inline bool getFileExpired() const { DARABONBA_PTR_GET_DEFAULT(fileExpired_, false) };
        inline Result& setFileExpired(bool fileExpired) { DARABONBA_PTR_SET_VALUE(fileExpired_, fileExpired) };


        // fileExpiredAt Field Functions 
        bool hasFileExpiredAt() const { return this->fileExpiredAt_ != nullptr;};
        void deleteFileExpiredAt() { this->fileExpiredAt_ = nullptr;};
        inline int64_t getFileExpiredAt() const { DARABONBA_PTR_GET_DEFAULT(fileExpiredAt_, 0L) };
        inline Result& setFileExpiredAt(int64_t fileExpiredAt) { DARABONBA_PTR_SET_VALUE(fileExpiredAt_, fileExpiredAt) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline Result& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // filterFailedRequests Field Functions 
        bool hasFilterFailedRequests() const { return this->filterFailedRequests_ != nullptr;};
        void deleteFilterFailedRequests() { this->filterFailedRequests_ = nullptr;};
        inline bool getFilterFailedRequests() const { DARABONBA_PTR_GET_DEFAULT(filterFailedRequests_, false) };
        inline Result& setFilterFailedRequests(bool filterFailedRequests) { DARABONBA_PTR_SET_VALUE(filterFailedRequests_, filterFailedRequests) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Result& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // queryWindowEnd Field Functions 
        bool hasQueryWindowEnd() const { return this->queryWindowEnd_ != nullptr;};
        void deleteQueryWindowEnd() { this->queryWindowEnd_ = nullptr;};
        inline int64_t getQueryWindowEnd() const { DARABONBA_PTR_GET_DEFAULT(queryWindowEnd_, 0L) };
        inline Result& setQueryWindowEnd(int64_t queryWindowEnd) { DARABONBA_PTR_SET_VALUE(queryWindowEnd_, queryWindowEnd) };


        // queryWindowStart Field Functions 
        bool hasQueryWindowStart() const { return this->queryWindowStart_ != nullptr;};
        void deleteQueryWindowStart() { this->queryWindowStart_ = nullptr;};
        inline int64_t getQueryWindowStart() const { DARABONBA_PTR_GET_DEFAULT(queryWindowStart_, 0L) };
        inline Result& setQueryWindowStart(int64_t queryWindowStart) { DARABONBA_PTR_SET_VALUE(queryWindowStart_, queryWindowStart) };


        // quotaDimension Field Functions 
        bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
        void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
        inline string getQuotaDimension() const { DARABONBA_PTR_GET_DEFAULT(quotaDimension_, "") };
        inline Result& setQuotaDimension(string quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };


        // rowCount Field Functions 
        bool hasRowCount() const { return this->rowCount_ != nullptr;};
        void deleteRowCount() { this->rowCount_ = nullptr;};
        inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
        inline Result& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      protected:
        // The temporary signed download URL of the exported file. It is returned only when status=Success and the file is not expired. It is dynamically generated for each query and is valid for 10 minutes from the generation time. If the link expires but fileExpiredAt is not reached, you can call this operation again to obtain the link. You do not need to pass the internal storage path as a request parameter.
        shared_ptr<string> downloadUrl_ {};
        // The expiration time of the downloadUrl returned in this response. It is a UNIX timestamp in seconds. It is provided only when a download link is returned and is approximately 10 minutes after the link generation time. It can be updated by querying again and cannot be used to replace fileExpiredAt.
        shared_ptr<int64_t> downloadUrlExpiredAt_ {};
        // The start time of the actual export time range. It is a UNIX timestamp in seconds. The actual start time is also limited by the rule creation time, rule reset, or the effective start time of clearing history records. No details are available if the start time is not earlier than the end time.
        shared_ptr<int64_t> effectiveWindowStart_ {};
        // Indicates whether the exported file has exceeded the server-side period for providing download links. A value of true indicates that the file has expired, downloadUrl and downloadUrlExpiredAt are not returned, and you need to create a new export task. This field may be omitted when the value is false. To determine whether the file is downloadable, check both status and downloadUrl.
        shared_ptr<bool> fileExpired_ {};
        // The time when the file stops providing new download links. It is a UNIX timestamp in seconds and is usually 24 hours after the file is successfully uploaded. After this time, this operation returns fileExpired=true and no longer generates downloadUrl. The task remains in the Success state. This time is different from the downloadUrlExpiredAt of a single signed link.
        shared_ptr<int64_t> fileExpiredAt_ {};
        // The size of the successfully generated and uploaded GZIP compressed file, in bytes. This field may be omitted when the task is not successful.
        shared_ptr<int64_t> fileSize_ {};
        // Specifies whether to filter out requests with failed or zero usage, which is specified when the task is created. A value of true filters out records with 0 usage and retains only records with usage. This field may be omitted when the value is false.
        shared_ptr<bool> filterFailedRequests_ {};
        // The format of the exported file. The value is currently fixed as CSV_GZIP. The downloaded file is a .csv.gz file, which becomes a CSV file after decompression.
        shared_ptr<string> format_ {};
        // The end time of the request time range determined when the task was created. It is a UNIX timestamp in seconds and does not include this moment. If no time range is specified, this value is the task creation time and is not updated when the task is queried.
        shared_ptr<int64_t> queryWindowEnd_ {};
        // The start time of the request time range determined when the task was created. It is a UNIX timestamp in seconds and includes this moment. If only one time parameter is passed, this value may be derived from the rule period. For the actual export start time, see effectiveWindowStart.
        shared_ptr<int64_t> queryWindowStart_ {};
        // The quota metering dimension determined when the task was created. token indicates token usage, and credit indicates credit usage. The CSV file outputs the corresponding columns based on this dimension. Credit usage retains decimal places.
        shared_ptr<string> quotaDimension_ {};
        // The number of successfully exported consumption detail rows, excluding the CSV header. This field may be omitted when the task is not successful or the export result contains 0 rows. If the task is successful but no matching details exist, the file contains only the header.
        shared_ptr<int64_t> rowCount_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->gatewayId_ == nullptr && this->processedCount_ == nullptr && this->result_ == nullptr && this->ruleId_ == nullptr && this->status_ == nullptr
        && this->subjectId_ == nullptr && this->subjectName_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr && this->totalCount_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // processedCount Field Functions 
      bool hasProcessedCount() const { return this->processedCount_ != nullptr;};
      void deleteProcessedCount() { this->processedCount_ = nullptr;};
      inline int32_t getProcessedCount() const { DARABONBA_PTR_GET_DEFAULT(processedCount_, 0) };
      inline Data& setProcessedCount(int32_t processedCount) { DARABONBA_PTR_SET_VALUE(processedCount_, processedCount) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subjectId Field Functions 
      bool hasSubjectId() const { return this->subjectId_ != nullptr;};
      void deleteSubjectId() { this->subjectId_ = nullptr;};
      inline string getSubjectId() const { DARABONBA_PTR_GET_DEFAULT(subjectId_, "") };
      inline Data& setSubjectId(string subjectId) { DARABONBA_PTR_SET_VALUE(subjectId_, subjectId) };


      // subjectName Field Functions 
      bool hasSubjectName() const { return this->subjectName_ != nullptr;};
      void deleteSubjectName() { this->subjectName_ = nullptr;};
      inline string getSubjectName() const { DARABONBA_PTR_GET_DEFAULT(subjectName_, "") };
      inline Data& setSubjectName(string subjectName) { DARABONBA_PTR_SET_VALUE(subjectName_, subjectName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The error summary when the task fails, which is used to troubleshoot issues such as disabled logs, query failures, exceeded detail limits, processing timeouts, or file generation failures. This field may be omitted when no errors occur.
      shared_ptr<string> errorMessage_ {};
      // The gateway ID recorded when the task was created.
      shared_ptr<string> gatewayId_ {};
      // The number of detail rows written to the exported file, excluding the header. This value is used to check the processing progress. Even if this value equals totalCount, you should determine whether the file is downloadable based on status=Success.
      shared_ptr<int32_t> processedCount_ {};
      // The export conditions and file results determined when the task was created. The time range, format, and metering dimension may be returned even in non-Success states. File and download information is available only after success. Fields with values of 0, false, or empty strings are omitted.
      shared_ptr<Data::Result> result_ {};
      // The quota rule ID recorded when the task was created.
      shared_ptr<string> ruleId_ {};
      // The current status of the task. Valid values:
      // - Pending: The task is submitted and waiting to be processed.
      // - Running: The task is querying details, generating files, or uploading files.
      // - Success: The file is generated and uploaded. You still need to check whether the file is expired.
      // - Failed: The task failed. For the cause, see errorMessage.
      // 
      // Tasks that are not completed within 10 minutes after creation are processed as Failed. After a file expires, the task remains in the Success state.
      shared_ptr<string> status_ {};
      // The consumer or consumer group ID recorded when the task was created.
      shared_ptr<string> subjectId_ {};
      // The subject name recorded when the task was created, which is used to match consumption logs. Subsequent changes to the subject name do not modify the name recorded for this task.
      shared_ptr<string> subjectName_ {};
      // The export task ID, which is the same as the taskId request parameter.
      shared_ptr<string> taskId_ {};
      // The task type. The value is fixed as FinOpsUsageDetailExport, which indicates the export of quota rule subject consumption details.
      shared_ptr<string> taskType_ {};
      // The total number of detail rows to be exported as counted by backend queries, excluding the CSV header. This value may be 0 before the counting is completed. You cannot determine whether the result is empty or the task is completed based solely on this value.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data) };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data) };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& setData(const GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& setData(GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetGatewayQuotaRuleSubjectUsageExportTaskResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID of this OpenAPI query call, which is used to troubleshoot call issues. This is different from the request_id of each consumption record in the exported file.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
