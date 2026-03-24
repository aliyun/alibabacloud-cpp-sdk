// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERUSAGEDATAEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserUsageDataExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserUsageDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserUsageDataExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageDataPerPage, usageDataPerPage_);
    };
    DescribeUserUsageDataExportTaskResponseBody() = default ;
    DescribeUserUsageDataExportTaskResponseBody(const DescribeUserUsageDataExportTaskResponseBody &) = default ;
    DescribeUserUsageDataExportTaskResponseBody(DescribeUserUsageDataExportTaskResponseBody &&) = default ;
    DescribeUserUsageDataExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserUsageDataExportTaskResponseBody() = default ;
    DescribeUserUsageDataExportTaskResponseBody& operator=(const DescribeUserUsageDataExportTaskResponseBody &) = default ;
    DescribeUserUsageDataExportTaskResponseBody& operator=(DescribeUserUsageDataExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageDataPerPage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageDataPerPage& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, UsageDataPerPage& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      UsageDataPerPage() = default ;
      UsageDataPerPage(const UsageDataPerPage &) = default ;
      UsageDataPerPage(UsageDataPerPage &&) = default ;
      UsageDataPerPage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageDataPerPage() = default ;
      UsageDataPerPage& operator=(const UsageDataPerPage &) = default ;
      UsageDataPerPage& operator=(UsageDataPerPage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(DataItem, dataItem_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(DataItem, dataItem_);
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
        class DataItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskConfig, taskConfig_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(TaskName, taskName_);
            DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfig_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
            DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          };
          DataItem() = default ;
          DataItem(const DataItem &) = default ;
          DataItem(DataItem &&) = default ;
          DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataItem() = default ;
          DataItem& operator=(const DataItem &) = default ;
          DataItem& operator=(DataItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TaskConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TaskConfig& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, TaskConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            TaskConfig() = default ;
            TaskConfig(const TaskConfig &) = default ;
            TaskConfig(TaskConfig &&) = default ;
            TaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TaskConfig() = default ;
            TaskConfig& operator=(const TaskConfig &) = default ;
            TaskConfig& operator=(TaskConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline TaskConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline TaskConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            shared_ptr<string> endTime_ {};
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->createTime_ == nullptr
        && this->downloadUrl_ == nullptr && this->status_ == nullptr && this->taskConfig_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->updateTime_ == nullptr; };
          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline DataItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // downloadUrl Field Functions 
          bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
          void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
          inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
          inline DataItem& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline DataItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskConfig Field Functions 
          bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
          void deleteTaskConfig() { this->taskConfig_ = nullptr;};
          inline const DataItem::TaskConfig & getTaskConfig() const { DARABONBA_PTR_GET_CONST(taskConfig_, DataItem::TaskConfig) };
          inline DataItem::TaskConfig getTaskConfig() { DARABONBA_PTR_GET(taskConfig_, DataItem::TaskConfig) };
          inline DataItem& setTaskConfig(const DataItem::TaskConfig & taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };
          inline DataItem& setTaskConfig(DataItem::TaskConfig && taskConfig) { DARABONBA_PTR_SET_RVALUE(taskConfig_, taskConfig) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline DataItem& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // taskName Field Functions 
          bool hasTaskName() const { return this->taskName_ != nullptr;};
          void deleteTaskName() { this->taskName_ = nullptr;};
          inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
          inline DataItem& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
          inline DataItem& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<string> createTime_ {};
          shared_ptr<string> downloadUrl_ {};
          shared_ptr<string> status_ {};
          shared_ptr<DataItem::TaskConfig> taskConfig_ {};
          shared_ptr<string> taskId_ {};
          shared_ptr<string> taskName_ {};
          shared_ptr<string> updateTime_ {};
        };

        virtual bool empty() const override { return this->dataItem_ == nullptr; };
        // dataItem Field Functions 
        bool hasDataItem() const { return this->dataItem_ != nullptr;};
        void deleteDataItem() { this->dataItem_ = nullptr;};
        inline const vector<Data::DataItem> & getDataItem() const { DARABONBA_PTR_GET_CONST(dataItem_, vector<Data::DataItem>) };
        inline vector<Data::DataItem> getDataItem() { DARABONBA_PTR_GET(dataItem_, vector<Data::DataItem>) };
        inline Data& setDataItem(const vector<Data::DataItem> & dataItem) { DARABONBA_PTR_SET_VALUE(dataItem_, dataItem) };
        inline Data& setDataItem(vector<Data::DataItem> && dataItem) { DARABONBA_PTR_SET_RVALUE(dataItem_, dataItem) };


      protected:
        shared_ptr<vector<Data::DataItem>> dataItem_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const UsageDataPerPage::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UsageDataPerPage::Data) };
      inline UsageDataPerPage::Data getData() { DARABONBA_PTR_GET(data_, UsageDataPerPage::Data) };
      inline UsageDataPerPage& setData(const UsageDataPerPage::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline UsageDataPerPage& setData(UsageDataPerPage::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline UsageDataPerPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline UsageDataPerPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline UsageDataPerPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<UsageDataPerPage::Data> data_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageDataPerPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserUsageDataExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageDataPerPage Field Functions 
    bool hasUsageDataPerPage() const { return this->usageDataPerPage_ != nullptr;};
    void deleteUsageDataPerPage() { this->usageDataPerPage_ = nullptr;};
    inline const DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage & getUsageDataPerPage() const { DARABONBA_PTR_GET_CONST(usageDataPerPage_, DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage getUsageDataPerPage() { DARABONBA_PTR_GET(usageDataPerPage_, DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBody& setUsageDataPerPage(const DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage & usageDataPerPage) { DARABONBA_PTR_SET_VALUE(usageDataPerPage_, usageDataPerPage) };
    inline DescribeUserUsageDataExportTaskResponseBody& setUsageDataPerPage(DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage && usageDataPerPage) { DARABONBA_PTR_SET_RVALUE(usageDataPerPage_, usageDataPerPage) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The usage details returned per page.
    shared_ptr<DescribeUserUsageDataExportTaskResponseBody::UsageDataPerPage> usageDataPerPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
