// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATACHECKTABLEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDataCheckTableDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataCheckTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiffTableCount, diffTableCount_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(FailedTableCount, failedTableCount_);
      DARABONBA_PTR_TO_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataCheckTableDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiffTableCount, diffTableCount_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(FailedTableCount, failedTableCount_);
      DARABONBA_PTR_FROM_JSON(FinishedCount, finishedCount_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataCheckTableDetailsResponseBody() = default ;
    DescribeDataCheckTableDetailsResponseBody(const DescribeDataCheckTableDetailsResponseBody &) = default ;
    DescribeDataCheckTableDetailsResponseBody(DescribeDataCheckTableDetailsResponseBody &&) = default ;
    DescribeDataCheckTableDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataCheckTableDetailsResponseBody() = default ;
    DescribeDataCheckTableDetailsResponseBody& operator=(const DescribeDataCheckTableDetailsResponseBody &) = default ;
    DescribeDataCheckTableDetailsResponseBody& operator=(DescribeDataCheckTableDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableDetails& obj) { 
        DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
        DARABONBA_PTR_TO_JSON(DiffCount, diffCount_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(SourceDbName, sourceDbName_);
        DARABONBA_PTR_TO_JSON(SourceTbName, sourceTbName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetDbName, targetDbName_);
        DARABONBA_PTR_TO_JSON(TargetTbName, targetTbName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, TableDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
        DARABONBA_PTR_FROM_JSON(DiffCount, diffCount_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(SourceDbName, sourceDbName_);
        DARABONBA_PTR_FROM_JSON(SourceTbName, sourceTbName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetDbName, targetDbName_);
        DARABONBA_PTR_FROM_JSON(TargetTbName, targetTbName_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      TableDetails() = default ;
      TableDetails(const TableDetails &) = default ;
      TableDetails(TableDetails &&) = default ;
      TableDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableDetails() = default ;
      TableDetails& operator=(const TableDetails &) = default ;
      TableDetails& operator=(TableDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bootTime_ == nullptr
        && this->diffCount_ == nullptr && this->errorCode_ == nullptr && this->finishCount_ == nullptr && this->id_ == nullptr && this->sourceDbName_ == nullptr
        && this->sourceTbName_ == nullptr && this->status_ == nullptr && this->targetDbName_ == nullptr && this->targetTbName_ == nullptr && this->totalCount_ == nullptr; };
      // bootTime Field Functions 
      bool hasBootTime() const { return this->bootTime_ != nullptr;};
      void deleteBootTime() { this->bootTime_ = nullptr;};
      inline string getBootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, "") };
      inline TableDetails& setBootTime(string bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


      // diffCount Field Functions 
      bool hasDiffCount() const { return this->diffCount_ != nullptr;};
      void deleteDiffCount() { this->diffCount_ = nullptr;};
      inline int64_t getDiffCount() const { DARABONBA_PTR_GET_DEFAULT(diffCount_, 0L) };
      inline TableDetails& setDiffCount(int64_t diffCount) { DARABONBA_PTR_SET_VALUE(diffCount_, diffCount) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
      inline TableDetails& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // finishCount Field Functions 
      bool hasFinishCount() const { return this->finishCount_ != nullptr;};
      void deleteFinishCount() { this->finishCount_ = nullptr;};
      inline int64_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0L) };
      inline TableDetails& setFinishCount(int64_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline TableDetails& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sourceDbName Field Functions 
      bool hasSourceDbName() const { return this->sourceDbName_ != nullptr;};
      void deleteSourceDbName() { this->sourceDbName_ = nullptr;};
      inline string getSourceDbName() const { DARABONBA_PTR_GET_DEFAULT(sourceDbName_, "") };
      inline TableDetails& setSourceDbName(string sourceDbName) { DARABONBA_PTR_SET_VALUE(sourceDbName_, sourceDbName) };


      // sourceTbName Field Functions 
      bool hasSourceTbName() const { return this->sourceTbName_ != nullptr;};
      void deleteSourceTbName() { this->sourceTbName_ = nullptr;};
      inline string getSourceTbName() const { DARABONBA_PTR_GET_DEFAULT(sourceTbName_, "") };
      inline TableDetails& setSourceTbName(string sourceTbName) { DARABONBA_PTR_SET_VALUE(sourceTbName_, sourceTbName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TableDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetDbName Field Functions 
      bool hasTargetDbName() const { return this->targetDbName_ != nullptr;};
      void deleteTargetDbName() { this->targetDbName_ = nullptr;};
      inline string getTargetDbName() const { DARABONBA_PTR_GET_DEFAULT(targetDbName_, "") };
      inline TableDetails& setTargetDbName(string targetDbName) { DARABONBA_PTR_SET_VALUE(targetDbName_, targetDbName) };


      // targetTbName Field Functions 
      bool hasTargetTbName() const { return this->targetTbName_ != nullptr;};
      void deleteTargetTbName() { this->targetTbName_ = nullptr;};
      inline string getTargetTbName() const { DARABONBA_PTR_GET_DEFAULT(targetTbName_, "") };
      inline TableDetails& setTargetTbName(string targetTbName) { DARABONBA_PTR_SET_VALUE(targetTbName_, targetTbName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline TableDetails& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when data verification was performed.
      shared_ptr<string> bootTime_ {};
      // The number of data rows that contain inconsistent data.
      shared_ptr<int64_t> diffCount_ {};
      // The error code returned if the data verification task failed. Valid values:
      // 
      // *   **1**: The number of tables that do not contain primary keys exceeds the limit.
      // *   **2**: The number of data rows that contain inconsistent data exceeds 300.
      // *   **3**: One or more tables to be verified do not exist.
      // *   **4**: The SQL statements used for verifying data contain a syntax error.
      shared_ptr<int32_t> errorCode_ {};
      // The number of data rows that were verified.
      shared_ptr<int64_t> finishCount_ {};
      // The auto-increment primary key that is used to identify the data in a verification result.
      shared_ptr<int64_t> id_ {};
      // The name of the source database.
      shared_ptr<string> sourceDbName_ {};
      // The name of the source table.
      shared_ptr<string> sourceTbName_ {};
      // The status of data verification results. Valid values:
      // 
      // *   **0**: The data verification task was complete.
      // *   **2**: The data verification task was being initialized.
      // *   **3**: The data verification task was in progress.
      // *   **5**: The data verification task failed.
      shared_ptr<string> status_ {};
      // The name of the destination database.
      shared_ptr<string> targetDbName_ {};
      // The name of the destination table.
      shared_ptr<string> targetTbName_ {};
      // The total number of data rows.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->diffTableCount_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->failedTableCount_ == nullptr
        && this->finishedCount_ == nullptr && this->httpStatusCode_ == nullptr && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->tableDetails_ == nullptr && this->totalCount_ == nullptr; };
    // diffTableCount Field Functions 
    bool hasDiffTableCount() const { return this->diffTableCount_ != nullptr;};
    void deleteDiffTableCount() { this->diffTableCount_ = nullptr;};
    inline int64_t getDiffTableCount() const { DARABONBA_PTR_GET_DEFAULT(diffTableCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setDiffTableCount(int64_t diffTableCount) { DARABONBA_PTR_SET_VALUE(diffTableCount_, diffTableCount) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // failedTableCount Field Functions 
    bool hasFailedTableCount() const { return this->failedTableCount_ != nullptr;};
    void deleteFailedTableCount() { this->failedTableCount_ = nullptr;};
    inline int64_t getFailedTableCount() const { DARABONBA_PTR_GET_DEFAULT(failedTableCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setFailedTableCount(int64_t failedTableCount) { DARABONBA_PTR_SET_VALUE(failedTableCount_, failedTableCount) };


    // finishedCount Field Functions 
    bool hasFinishedCount() const { return this->finishedCount_ != nullptr;};
    void deleteFinishedCount() { this->finishedCount_ = nullptr;};
    inline int64_t getFinishedCount() const { DARABONBA_PTR_GET_DEFAULT(finishedCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setFinishedCount(int64_t finishedCount) { DARABONBA_PTR_SET_VALUE(finishedCount_, finishedCount) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDataCheckTableDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataCheckTableDetailsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataCheckTableDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataCheckTableDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const vector<DescribeDataCheckTableDetailsResponseBody::TableDetails> & getTableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, vector<DescribeDataCheckTableDetailsResponseBody::TableDetails>) };
    inline vector<DescribeDataCheckTableDetailsResponseBody::TableDetails> getTableDetails() { DARABONBA_PTR_GET(tableDetails_, vector<DescribeDataCheckTableDetailsResponseBody::TableDetails>) };
    inline DescribeDataCheckTableDetailsResponseBody& setTableDetails(const vector<DescribeDataCheckTableDetailsResponseBody::TableDetails> & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline DescribeDataCheckTableDetailsResponseBody& setTableDetails(vector<DescribeDataCheckTableDetailsResponseBody::TableDetails> && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDataCheckTableDetailsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of tables that contain inconsistent data.
    shared_ptr<int64_t> diffTableCount_ {};
    // The dynamic error code. This parameter will be discontinued in the future.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > For example, if the returned value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **Type**, the specified **Type** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The total number of data rows that were failed.
    shared_ptr<int64_t> failedTableCount_ {};
    // The total number of data rows that were verified.
    shared_ptr<int64_t> finishedCount_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The details of data verification results.
    shared_ptr<vector<DescribeDataCheckTableDetailsResponseBody::TableDetails>> tableDetails_ {};
    // The total number of tables on which data verification was performed.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
