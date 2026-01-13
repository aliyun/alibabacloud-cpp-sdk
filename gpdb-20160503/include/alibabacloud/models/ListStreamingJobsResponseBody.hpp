// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTREAMINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTREAMINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListStreamingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStreamingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobItems, jobItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStreamingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobItems, jobItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListStreamingJobsResponseBody() = default ;
    ListStreamingJobsResponseBody(const ListStreamingJobsResponseBody &) = default ;
    ListStreamingJobsResponseBody(ListStreamingJobsResponseBody &&) = default ;
    ListStreamingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStreamingJobsResponseBody() = default ;
    ListStreamingJobsResponseBody& operator=(const ListStreamingJobsResponseBody &) = default ;
    ListStreamingJobsResponseBody& operator=(ListStreamingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobItems& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Consistency, consistency_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DestColumns, destColumns_);
        DARABONBA_PTR_TO_JSON(DestDatabase, destDatabase_);
        DARABONBA_PTR_TO_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_TO_JSON(DestTable, destTable_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FallbackOffset, fallbackOffset_);
        DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(MatchColumns, matchColumns_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(SrcColumns, srcColumns_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateColumns, updateColumns_);
        DARABONBA_PTR_TO_JSON(WriteMode, writeMode_);
      };
      friend void from_json(const Darabonba::Json& j, JobItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Consistency, consistency_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DestColumns, destColumns_);
        DARABONBA_PTR_FROM_JSON(DestDatabase, destDatabase_);
        DARABONBA_PTR_FROM_JSON(DestSchema, destSchema_);
        DARABONBA_PTR_FROM_JSON(DestTable, destTable_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FallbackOffset, fallbackOffset_);
        DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(MatchColumns, matchColumns_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(SrcColumns, srcColumns_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateColumns, updateColumns_);
        DARABONBA_PTR_FROM_JSON(WriteMode, writeMode_);
      };
      JobItems() = default ;
      JobItems(const JobItems &) = default ;
      JobItems(JobItems &&) = default ;
      JobItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobItems() = default ;
      JobItems& operator=(const JobItems &) = default ;
      JobItems& operator=(JobItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->consistency_ == nullptr && this->createTime_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->destColumns_ == nullptr
        && this->destDatabase_ == nullptr && this->destSchema_ == nullptr && this->destTable_ == nullptr && this->errorMessage_ == nullptr && this->fallbackOffset_ == nullptr
        && this->jobDescription_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->matchColumns_ == nullptr && this->mode_ == nullptr
        && this->modifyTime_ == nullptr && this->password_ == nullptr && this->srcColumns_ == nullptr && this->status_ == nullptr && this->updateColumns_ == nullptr
        && this->writeMode_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline JobItems& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // consistency Field Functions 
      bool hasConsistency() const { return this->consistency_ != nullptr;};
      void deleteConsistency() { this->consistency_ = nullptr;};
      inline string getConsistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
      inline JobItems& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobItems& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline JobItems& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline JobItems& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // destColumns Field Functions 
      bool hasDestColumns() const { return this->destColumns_ != nullptr;};
      void deleteDestColumns() { this->destColumns_ = nullptr;};
      inline const vector<string> & getDestColumns() const { DARABONBA_PTR_GET_CONST(destColumns_, vector<string>) };
      inline vector<string> getDestColumns() { DARABONBA_PTR_GET(destColumns_, vector<string>) };
      inline JobItems& setDestColumns(const vector<string> & destColumns) { DARABONBA_PTR_SET_VALUE(destColumns_, destColumns) };
      inline JobItems& setDestColumns(vector<string> && destColumns) { DARABONBA_PTR_SET_RVALUE(destColumns_, destColumns) };


      // destDatabase Field Functions 
      bool hasDestDatabase() const { return this->destDatabase_ != nullptr;};
      void deleteDestDatabase() { this->destDatabase_ = nullptr;};
      inline string getDestDatabase() const { DARABONBA_PTR_GET_DEFAULT(destDatabase_, "") };
      inline JobItems& setDestDatabase(string destDatabase) { DARABONBA_PTR_SET_VALUE(destDatabase_, destDatabase) };


      // destSchema Field Functions 
      bool hasDestSchema() const { return this->destSchema_ != nullptr;};
      void deleteDestSchema() { this->destSchema_ = nullptr;};
      inline string getDestSchema() const { DARABONBA_PTR_GET_DEFAULT(destSchema_, "") };
      inline JobItems& setDestSchema(string destSchema) { DARABONBA_PTR_SET_VALUE(destSchema_, destSchema) };


      // destTable Field Functions 
      bool hasDestTable() const { return this->destTable_ != nullptr;};
      void deleteDestTable() { this->destTable_ = nullptr;};
      inline string getDestTable() const { DARABONBA_PTR_GET_DEFAULT(destTable_, "") };
      inline JobItems& setDestTable(string destTable) { DARABONBA_PTR_SET_VALUE(destTable_, destTable) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline JobItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // fallbackOffset Field Functions 
      bool hasFallbackOffset() const { return this->fallbackOffset_ != nullptr;};
      void deleteFallbackOffset() { this->fallbackOffset_ = nullptr;};
      inline string getFallbackOffset() const { DARABONBA_PTR_GET_DEFAULT(fallbackOffset_, "") };
      inline JobItems& setFallbackOffset(string fallbackOffset) { DARABONBA_PTR_SET_VALUE(fallbackOffset_, fallbackOffset) };


      // jobDescription Field Functions 
      bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
      void deleteJobDescription() { this->jobDescription_ = nullptr;};
      inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
      inline JobItems& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobItems& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline JobItems& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // matchColumns Field Functions 
      bool hasMatchColumns() const { return this->matchColumns_ != nullptr;};
      void deleteMatchColumns() { this->matchColumns_ = nullptr;};
      inline const vector<string> & getMatchColumns() const { DARABONBA_PTR_GET_CONST(matchColumns_, vector<string>) };
      inline vector<string> getMatchColumns() { DARABONBA_PTR_GET(matchColumns_, vector<string>) };
      inline JobItems& setMatchColumns(const vector<string> & matchColumns) { DARABONBA_PTR_SET_VALUE(matchColumns_, matchColumns) };
      inline JobItems& setMatchColumns(vector<string> && matchColumns) { DARABONBA_PTR_SET_RVALUE(matchColumns_, matchColumns) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline JobItems& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline JobItems& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline JobItems& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // srcColumns Field Functions 
      bool hasSrcColumns() const { return this->srcColumns_ != nullptr;};
      void deleteSrcColumns() { this->srcColumns_ = nullptr;};
      inline const vector<string> & getSrcColumns() const { DARABONBA_PTR_GET_CONST(srcColumns_, vector<string>) };
      inline vector<string> getSrcColumns() { DARABONBA_PTR_GET(srcColumns_, vector<string>) };
      inline JobItems& setSrcColumns(const vector<string> & srcColumns) { DARABONBA_PTR_SET_VALUE(srcColumns_, srcColumns) };
      inline JobItems& setSrcColumns(vector<string> && srcColumns) { DARABONBA_PTR_SET_RVALUE(srcColumns_, srcColumns) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateColumns Field Functions 
      bool hasUpdateColumns() const { return this->updateColumns_ != nullptr;};
      void deleteUpdateColumns() { this->updateColumns_ = nullptr;};
      inline const vector<string> & getUpdateColumns() const { DARABONBA_PTR_GET_CONST(updateColumns_, vector<string>) };
      inline vector<string> getUpdateColumns() { DARABONBA_PTR_GET(updateColumns_, vector<string>) };
      inline JobItems& setUpdateColumns(const vector<string> & updateColumns) { DARABONBA_PTR_SET_VALUE(updateColumns_, updateColumns) };
      inline JobItems& setUpdateColumns(vector<string> && updateColumns) { DARABONBA_PTR_SET_RVALUE(updateColumns_, updateColumns) };


      // writeMode Field Functions 
      bool hasWriteMode() const { return this->writeMode_ != nullptr;};
      void deleteWriteMode() { this->writeMode_ = nullptr;};
      inline string getWriteMode() const { DARABONBA_PTR_GET_DEFAULT(writeMode_, "") };
      inline JobItems& setWriteMode(string writeMode) { DARABONBA_PTR_SET_VALUE(writeMode_, writeMode) };


    protected:
      // The name of the database account.
      shared_ptr<string> account_ {};
      // The delivery guarantee setting.
      shared_ptr<string> consistency_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The data source ID.
      shared_ptr<string> dataSourceId_ {};
      // The name of the data source.
      shared_ptr<string> dataSourceName_ {};
      // The mapped fields in the destination table.
      shared_ptr<vector<string>> destColumns_ {};
      // The name of the destination database.
      shared_ptr<string> destDatabase_ {};
      // The name of the destination namespace.
      shared_ptr<string> destSchema_ {};
      // The name of the destination table.
      shared_ptr<string> destTable_ {};
      // The error message returned.
      // 
      // This parameter is returned only when the return value of **Status** is **false**.
      shared_ptr<string> errorMessage_ {};
      // The fallback offset for data consumption.
      // 
      // *   This parameter indicates the starting offset from which data consumption resumes when a consumer does not request a consumption offset or requests a consumption offset that is beyond the range of the offset information recorded in the current Kafka cluster. Valid values: EARLIEST and LATEST.
      shared_ptr<string> fallbackOffset_ {};
      // The description of the job.
      shared_ptr<string> jobDescription_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The name of the job.
      shared_ptr<string> jobName_ {};
      // The update condition columns that are used to join the source data and the destination table. Typically, the columns are all the primary key columns of the destination table. If the values of all columns specified by this parameter in different rows are the same, the rows are considered duplicates.
      shared_ptr<vector<string>> matchColumns_ {};
      // The configuration mode. Valid values:
      // 
      // 1.  basic: In basic mode, you must configure the configuration parameters.
      // 2.  professional: In professional mode, you can submit a YAML configuration file.
      shared_ptr<string> mode_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifyTime_ {};
      // The password of the database account.
      shared_ptr<string> password_ {};
      // The source fields.
      shared_ptr<vector<string>> srcColumns_ {};
      // The status of the job. Valid values:
      // 
      // *   Init
      // *   Running
      // *   Exception
      // *   Paused
      shared_ptr<string> status_ {};
      // The columns to be updated if a row of data meets the update condition. Typically, the columns are all non-primary key columns of the destination table. When the columns specified by the MatchColumns parameter are used as conditions to join the source data and the destination table, data in columns of the UpdateColumns type is updated if data is matched.
      shared_ptr<vector<string>> updateColumns_ {};
      // The write mode.
      shared_ptr<string> writeMode_ {};
    };

    virtual bool empty() const override { return this->jobItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // jobItems Field Functions 
    bool hasJobItems() const { return this->jobItems_ != nullptr;};
    void deleteJobItems() { this->jobItems_ = nullptr;};
    inline const vector<ListStreamingJobsResponseBody::JobItems> & getJobItems() const { DARABONBA_PTR_GET_CONST(jobItems_, vector<ListStreamingJobsResponseBody::JobItems>) };
    inline vector<ListStreamingJobsResponseBody::JobItems> getJobItems() { DARABONBA_PTR_GET(jobItems_, vector<ListStreamingJobsResponseBody::JobItems>) };
    inline ListStreamingJobsResponseBody& setJobItems(const vector<ListStreamingJobsResponseBody::JobItems> & jobItems) { DARABONBA_PTR_SET_VALUE(jobItems_, jobItems) };
    inline ListStreamingJobsResponseBody& setJobItems(vector<ListStreamingJobsResponseBody::JobItems> && jobItems) { DARABONBA_PTR_SET_RVALUE(jobItems_, jobItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStreamingJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListStreamingJobsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStreamingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListStreamingJobsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The queried jobs.
    shared_ptr<vector<ListStreamingJobsResponseBody::JobItems>> jobItems_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of records per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
