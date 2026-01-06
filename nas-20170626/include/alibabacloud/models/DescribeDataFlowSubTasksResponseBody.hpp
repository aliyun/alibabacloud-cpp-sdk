// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowSubTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowSubTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowSubTask, dataFlowSubTask_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowSubTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowSubTask, dataFlowSubTask_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataFlowSubTasksResponseBody() = default ;
    DescribeDataFlowSubTasksResponseBody(const DescribeDataFlowSubTasksResponseBody &) = default ;
    DescribeDataFlowSubTasksResponseBody(DescribeDataFlowSubTasksResponseBody &&) = default ;
    DescribeDataFlowSubTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowSubTasksResponseBody() = default ;
    DescribeDataFlowSubTasksResponseBody& operator=(const DescribeDataFlowSubTasksResponseBody &) = default ;
    DescribeDataFlowSubTasksResponseBody& operator=(DescribeDataFlowSubTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataFlowSubTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataFlowSubTask& obj) { 
        DARABONBA_PTR_TO_JSON(DataFlowSubTask, dataFlowSubTask_);
      };
      friend void from_json(const Darabonba::Json& j, DataFlowSubTask& obj) { 
        DARABONBA_PTR_FROM_JSON(DataFlowSubTask, dataFlowSubTask_);
      };
      DataFlowSubTask() = default ;
      DataFlowSubTask(const DataFlowSubTask &) = default ;
      DataFlowSubTask(DataFlowSubTask &&) = default ;
      DataFlowSubTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataFlowSubTask() = default ;
      DataFlowSubTask& operator=(const DataFlowSubTask &) = default ;
      DataFlowSubTask& operator=(DataFlowSubTask &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataFlowSubTaskItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataFlowSubTaskItem& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_TO_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
          DARABONBA_PTR_TO_JSON(DataFlowTaskId, dataFlowTaskId_);
          DARABONBA_PTR_TO_JSON(DstFilePath, dstFilePath_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(FileDetail, fileDetail_);
          DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(ProgressStats, progressStats_);
          DARABONBA_PTR_TO_JSON(SrcFilePath, srcFilePath_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataFlowSubTaskItem& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_FROM_JSON(DataFlowSubTaskId, dataFlowSubTaskId_);
          DARABONBA_PTR_FROM_JSON(DataFlowTaskId, dataFlowTaskId_);
          DARABONBA_PTR_FROM_JSON(DstFilePath, dstFilePath_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(FileDetail, fileDetail_);
          DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(ProgressStats, progressStats_);
          DARABONBA_PTR_FROM_JSON(SrcFilePath, srcFilePath_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataFlowSubTaskItem() = default ;
        DataFlowSubTaskItem(const DataFlowSubTaskItem &) = default ;
        DataFlowSubTaskItem(DataFlowSubTaskItem &&) = default ;
        DataFlowSubTaskItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataFlowSubTaskItem() = default ;
        DataFlowSubTaskItem& operator=(const DataFlowSubTaskItem &) = default ;
        DataFlowSubTaskItem& operator=(DataFlowSubTaskItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProgressStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProgressStats& obj) { 
            DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
            DARABONBA_PTR_TO_JSON(AverageSpeed, averageSpeed_);
            DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
            DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
          };
          friend void from_json(const Darabonba::Json& j, ProgressStats& obj) { 
            DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
            DARABONBA_PTR_FROM_JSON(AverageSpeed, averageSpeed_);
            DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
            DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
          };
          ProgressStats() = default ;
          ProgressStats(const ProgressStats &) = default ;
          ProgressStats(ProgressStats &&) = default ;
          ProgressStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProgressStats() = default ;
          ProgressStats& operator=(const ProgressStats &) = default ;
          ProgressStats& operator=(ProgressStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->averageSpeed_ == nullptr && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr; };
          // actualBytes Field Functions 
          bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
          void deleteActualBytes() { this->actualBytes_ = nullptr;};
          inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
          inline ProgressStats& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


          // averageSpeed Field Functions 
          bool hasAverageSpeed() const { return this->averageSpeed_ != nullptr;};
          void deleteAverageSpeed() { this->averageSpeed_ = nullptr;};
          inline int64_t getAverageSpeed() const { DARABONBA_PTR_GET_DEFAULT(averageSpeed_, 0L) };
          inline ProgressStats& setAverageSpeed(int64_t averageSpeed) { DARABONBA_PTR_SET_VALUE(averageSpeed_, averageSpeed) };


          // bytesDone Field Functions 
          bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
          void deleteBytesDone() { this->bytesDone_ = nullptr;};
          inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
          inline ProgressStats& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


          // bytesTotal Field Functions 
          bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
          void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
          inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
          inline ProgressStats& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


        protected:
          // The actual amount of data for which the data flow task is complete. Unit: bytes.
          shared_ptr<int64_t> actualBytes_ {};
          // The average flow velocity. Unit: bytes/s.
          shared_ptr<int64_t> averageSpeed_ {};
          // The amount of data (including skipped data) for which the data flow task is complete. Unit: bytes.
          shared_ptr<int64_t> bytesDone_ {};
          // The amount of data scanned on the source. Unit: bytes.
          shared_ptr<int64_t> bytesTotal_ {};
        };

        class FileDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileDetail& obj) { 
            DARABONBA_PTR_TO_JSON(Checksum, checksum_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, FileDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
          };
          FileDetail() = default ;
          FileDetail(const FileDetail &) = default ;
          FileDetail(FileDetail &&) = default ;
          FileDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileDetail() = default ;
          FileDetail& operator=(const FileDetail &) = default ;
          FileDetail& operator=(FileDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checksum_ == nullptr
        && this->modifyTime_ == nullptr && this->size_ == nullptr; };
          // checksum Field Functions 
          bool hasChecksum() const { return this->checksum_ != nullptr;};
          void deleteChecksum() { this->checksum_ = nullptr;};
          inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
          inline FileDetail& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline FileDetail& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline FileDetail& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          // The checksum. Format example: crc64:123456.
          shared_ptr<string> checksum_ {};
          // The time when the file was modified. The value is a UNIX timestamp. Unit: ns.
          shared_ptr<int64_t> modifyTime_ {};
          // The file size. Unit: bytes.
          shared_ptr<int64_t> size_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataFlowId_ == nullptr && this->dataFlowSubTaskId_ == nullptr && this->dataFlowTaskId_ == nullptr && this->dstFilePath_ == nullptr && this->endTime_ == nullptr
        && this->errorMsg_ == nullptr && this->fileDetail_ == nullptr && this->fileSystemId_ == nullptr && this->progress_ == nullptr && this->progressStats_ == nullptr
        && this->srcFilePath_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DataFlowSubTaskItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataFlowId Field Functions 
        bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
        void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
        inline string getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, "") };
        inline DataFlowSubTaskItem& setDataFlowId(string dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


        // dataFlowSubTaskId Field Functions 
        bool hasDataFlowSubTaskId() const { return this->dataFlowSubTaskId_ != nullptr;};
        void deleteDataFlowSubTaskId() { this->dataFlowSubTaskId_ = nullptr;};
        inline string getDataFlowSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowSubTaskId_, "") };
        inline DataFlowSubTaskItem& setDataFlowSubTaskId(string dataFlowSubTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowSubTaskId_, dataFlowSubTaskId) };


        // dataFlowTaskId Field Functions 
        bool hasDataFlowTaskId() const { return this->dataFlowTaskId_ != nullptr;};
        void deleteDataFlowTaskId() { this->dataFlowTaskId_ = nullptr;};
        inline string getDataFlowTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowTaskId_, "") };
        inline DataFlowSubTaskItem& setDataFlowTaskId(string dataFlowTaskId) { DARABONBA_PTR_SET_VALUE(dataFlowTaskId_, dataFlowTaskId) };


        // dstFilePath Field Functions 
        bool hasDstFilePath() const { return this->dstFilePath_ != nullptr;};
        void deleteDstFilePath() { this->dstFilePath_ = nullptr;};
        inline string getDstFilePath() const { DARABONBA_PTR_GET_DEFAULT(dstFilePath_, "") };
        inline DataFlowSubTaskItem& setDstFilePath(string dstFilePath) { DARABONBA_PTR_SET_VALUE(dstFilePath_, dstFilePath) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DataFlowSubTaskItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline DataFlowSubTaskItem& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // fileDetail Field Functions 
        bool hasFileDetail() const { return this->fileDetail_ != nullptr;};
        void deleteFileDetail() { this->fileDetail_ = nullptr;};
        inline const DataFlowSubTaskItem::FileDetail & getFileDetail() const { DARABONBA_PTR_GET_CONST(fileDetail_, DataFlowSubTaskItem::FileDetail) };
        inline DataFlowSubTaskItem::FileDetail getFileDetail() { DARABONBA_PTR_GET(fileDetail_, DataFlowSubTaskItem::FileDetail) };
        inline DataFlowSubTaskItem& setFileDetail(const DataFlowSubTaskItem::FileDetail & fileDetail) { DARABONBA_PTR_SET_VALUE(fileDetail_, fileDetail) };
        inline DataFlowSubTaskItem& setFileDetail(DataFlowSubTaskItem::FileDetail && fileDetail) { DARABONBA_PTR_SET_RVALUE(fileDetail_, fileDetail) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline DataFlowSubTaskItem& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline DataFlowSubTaskItem& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // progressStats Field Functions 
        bool hasProgressStats() const { return this->progressStats_ != nullptr;};
        void deleteProgressStats() { this->progressStats_ = nullptr;};
        inline const DataFlowSubTaskItem::ProgressStats & getProgressStats() const { DARABONBA_PTR_GET_CONST(progressStats_, DataFlowSubTaskItem::ProgressStats) };
        inline DataFlowSubTaskItem::ProgressStats getProgressStats() { DARABONBA_PTR_GET(progressStats_, DataFlowSubTaskItem::ProgressStats) };
        inline DataFlowSubTaskItem& setProgressStats(const DataFlowSubTaskItem::ProgressStats & progressStats) { DARABONBA_PTR_SET_VALUE(progressStats_, progressStats) };
        inline DataFlowSubTaskItem& setProgressStats(DataFlowSubTaskItem::ProgressStats && progressStats) { DARABONBA_PTR_SET_RVALUE(progressStats_, progressStats) };


        // srcFilePath Field Functions 
        bool hasSrcFilePath() const { return this->srcFilePath_ != nullptr;};
        void deleteSrcFilePath() { this->srcFilePath_ = nullptr;};
        inline string getSrcFilePath() const { DARABONBA_PTR_GET_DEFAULT(srcFilePath_, "") };
        inline DataFlowSubTaskItem& setSrcFilePath(string srcFilePath) { DARABONBA_PTR_SET_VALUE(srcFilePath_, srcFilePath) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline DataFlowSubTaskItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataFlowSubTaskItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the data streaming task was created.
        shared_ptr<string> createTime_ {};
        // The ID of the data flow.
        shared_ptr<string> dataFlowId_ {};
        // The ID of the data streaming task.
        shared_ptr<string> dataFlowSubTaskId_ {};
        // The ID of the data flow task.
        shared_ptr<string> dataFlowTaskId_ {};
        // The path of the destination file. Limits:
        // 
        // *   The path must be 1 to 1,023 characters in length.
        // *   The path must be encoded in UTF-8.
        // *   The path must start with a forward slash (/).
        // *   The path must end with the file name.
        shared_ptr<string> dstFilePath_ {};
        // The time when the data streaming task ended.
        shared_ptr<string> endTime_ {};
        // The error message returned when the task failed.
        shared_ptr<string> errorMsg_ {};
        // The file information.
        shared_ptr<DataFlowSubTaskItem::FileDetail> fileDetail_ {};
        // The ID of the file system.
        shared_ptr<string> fileSystemId_ {};
        // The progress of the data streaming task. Valid values: 0 to 10000.
        shared_ptr<int32_t> progress_ {};
        // The progress information about data streaming tasks.
        shared_ptr<DataFlowSubTaskItem::ProgressStats> progressStats_ {};
        // The path of the source file. Limits:
        // 
        // *   The path must be 1 to 1,023 characters in length.
        // *   The path must be encoded in UTF-8.
        // *   The path must start with a forward slash (/).
        // *   The path must end with the file name.
        shared_ptr<string> srcFilePath_ {};
        // The time when the data streaming task started.
        shared_ptr<string> startTime_ {};
        // The status of the data streaming task. Valid values:
        // 
        // *   EXPIRED: The task is terminated.
        // *   CREATED: The task is created.
        // *   RUNNING: The task is running.
        // *   COMPLETE: The task is complete.
        // *   CANCELING: The task is being canceled.
        // *   FAILED: The task failed to be executed.
        // *   CANCELED: The task is canceled.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->dataFlowSubTask_ == nullptr; };
      // dataFlowSubTask Field Functions 
      bool hasDataFlowSubTask() const { return this->dataFlowSubTask_ != nullptr;};
      void deleteDataFlowSubTask() { this->dataFlowSubTask_ = nullptr;};
      inline const vector<DataFlowSubTask::DataFlowSubTaskItem> & getDataFlowSubTask() const { DARABONBA_PTR_GET_CONST(dataFlowSubTask_, vector<DataFlowSubTask::DataFlowSubTaskItem>) };
      inline vector<DataFlowSubTask::DataFlowSubTaskItem> getDataFlowSubTask() { DARABONBA_PTR_GET(dataFlowSubTask_, vector<DataFlowSubTask::DataFlowSubTaskItem>) };
      inline DataFlowSubTask& setDataFlowSubTask(const vector<DataFlowSubTask::DataFlowSubTaskItem> & dataFlowSubTask) { DARABONBA_PTR_SET_VALUE(dataFlowSubTask_, dataFlowSubTask) };
      inline DataFlowSubTask& setDataFlowSubTask(vector<DataFlowSubTask::DataFlowSubTaskItem> && dataFlowSubTask) { DARABONBA_PTR_SET_RVALUE(dataFlowSubTask_, dataFlowSubTask) };


    protected:
      shared_ptr<vector<DataFlowSubTask::DataFlowSubTaskItem>> dataFlowSubTask_ {};
    };

    virtual bool empty() const override { return this->dataFlowSubTask_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // dataFlowSubTask Field Functions 
    bool hasDataFlowSubTask() const { return this->dataFlowSubTask_ != nullptr;};
    void deleteDataFlowSubTask() { this->dataFlowSubTask_ = nullptr;};
    inline const DescribeDataFlowSubTasksResponseBody::DataFlowSubTask & getDataFlowSubTask() const { DARABONBA_PTR_GET_CONST(dataFlowSubTask_, DescribeDataFlowSubTasksResponseBody::DataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBody::DataFlowSubTask getDataFlowSubTask() { DARABONBA_PTR_GET(dataFlowSubTask_, DescribeDataFlowSubTasksResponseBody::DataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBody& setDataFlowSubTask(const DescribeDataFlowSubTasksResponseBody::DataFlowSubTask & dataFlowSubTask) { DARABONBA_PTR_SET_VALUE(dataFlowSubTask_, dataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBody& setDataFlowSubTask(DescribeDataFlowSubTasksResponseBody::DataFlowSubTask && dataFlowSubTask) { DARABONBA_PTR_SET_RVALUE(dataFlowSubTask_, dataFlowSubTask) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowSubTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataFlowSubTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about data streaming tasks.
    shared_ptr<DescribeDataFlowSubTasksResponseBody::DataFlowSubTask> dataFlowSubTask_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
