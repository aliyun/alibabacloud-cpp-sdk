// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskLogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskLogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskRecordDetails, taskRecordDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskLogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskRecordDetails, taskRecordDetails_);
    };
    DescribeSyncAssetTaskLogDetailResponseBody() = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(const DescribeSyncAssetTaskLogDetailResponseBody &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(DescribeSyncAssetTaskLogDetailResponseBody &&) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskLogDetailResponseBody() = default ;
    DescribeSyncAssetTaskLogDetailResponseBody& operator=(const DescribeSyncAssetTaskLogDetailResponseBody &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody& operator=(DescribeSyncAssetTaskLogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskRecordDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskRecordDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(IdcRegion, idcRegion_);
        DARABONBA_PTR_TO_JSON(LeafTaskId, leafTaskId_);
        DARABONBA_PTR_TO_JSON(LeafTaskStatus, leafTaskStatus_);
        DARABONBA_PTR_TO_JSON(TaskMsg, taskMsg_);
        DARABONBA_PTR_TO_JSON(TaskReportTime, taskReportTime_);
        DARABONBA_PTR_TO_JSON(UnprotectedAssetCount, unprotectedAssetCount_);
      };
      friend void from_json(const Darabonba::Json& j, TaskRecordDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(IdcRegion, idcRegion_);
        DARABONBA_PTR_FROM_JSON(LeafTaskId, leafTaskId_);
        DARABONBA_PTR_FROM_JSON(LeafTaskStatus, leafTaskStatus_);
        DARABONBA_PTR_FROM_JSON(TaskMsg, taskMsg_);
        DARABONBA_PTR_FROM_JSON(TaskReportTime, taskReportTime_);
        DARABONBA_PTR_FROM_JSON(UnprotectedAssetCount, unprotectedAssetCount_);
      };
      TaskRecordDetails() = default ;
      TaskRecordDetails(const TaskRecordDetails &) = default ;
      TaskRecordDetails(TaskRecordDetails &&) = default ;
      TaskRecordDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskRecordDetails() = default ;
      TaskRecordDetails& operator=(const TaskRecordDetails &) = default ;
      TaskRecordDetails& operator=(TaskRecordDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetCount_ == nullptr
        && this->idcRegion_ == nullptr && this->leafTaskId_ == nullptr && this->leafTaskStatus_ == nullptr && this->taskMsg_ == nullptr && this->taskReportTime_ == nullptr
        && this->unprotectedAssetCount_ == nullptr; };
      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int32_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0) };
      inline TaskRecordDetails& setAssetCount(int32_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // idcRegion Field Functions 
      bool hasIdcRegion() const { return this->idcRegion_ != nullptr;};
      void deleteIdcRegion() { this->idcRegion_ = nullptr;};
      inline string getIdcRegion() const { DARABONBA_PTR_GET_DEFAULT(idcRegion_, "") };
      inline TaskRecordDetails& setIdcRegion(string idcRegion) { DARABONBA_PTR_SET_VALUE(idcRegion_, idcRegion) };


      // leafTaskId Field Functions 
      bool hasLeafTaskId() const { return this->leafTaskId_ != nullptr;};
      void deleteLeafTaskId() { this->leafTaskId_ = nullptr;};
      inline string getLeafTaskId() const { DARABONBA_PTR_GET_DEFAULT(leafTaskId_, "") };
      inline TaskRecordDetails& setLeafTaskId(string leafTaskId) { DARABONBA_PTR_SET_VALUE(leafTaskId_, leafTaskId) };


      // leafTaskStatus Field Functions 
      bool hasLeafTaskStatus() const { return this->leafTaskStatus_ != nullptr;};
      void deleteLeafTaskStatus() { this->leafTaskStatus_ = nullptr;};
      inline string getLeafTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(leafTaskStatus_, "") };
      inline TaskRecordDetails& setLeafTaskStatus(string leafTaskStatus) { DARABONBA_PTR_SET_VALUE(leafTaskStatus_, leafTaskStatus) };


      // taskMsg Field Functions 
      bool hasTaskMsg() const { return this->taskMsg_ != nullptr;};
      void deleteTaskMsg() { this->taskMsg_ = nullptr;};
      inline string getTaskMsg() const { DARABONBA_PTR_GET_DEFAULT(taskMsg_, "") };
      inline TaskRecordDetails& setTaskMsg(string taskMsg) { DARABONBA_PTR_SET_VALUE(taskMsg_, taskMsg) };


      // taskReportTime Field Functions 
      bool hasTaskReportTime() const { return this->taskReportTime_ != nullptr;};
      void deleteTaskReportTime() { this->taskReportTime_ = nullptr;};
      inline int64_t getTaskReportTime() const { DARABONBA_PTR_GET_DEFAULT(taskReportTime_, 0L) };
      inline TaskRecordDetails& setTaskReportTime(int64_t taskReportTime) { DARABONBA_PTR_SET_VALUE(taskReportTime_, taskReportTime) };


      // unprotectedAssetCount Field Functions 
      bool hasUnprotectedAssetCount() const { return this->unprotectedAssetCount_ != nullptr;};
      void deleteUnprotectedAssetCount() { this->unprotectedAssetCount_ = nullptr;};
      inline int32_t getUnprotectedAssetCount() const { DARABONBA_PTR_GET_DEFAULT(unprotectedAssetCount_, 0) };
      inline TaskRecordDetails& setUnprotectedAssetCount(int32_t unprotectedAssetCount) { DARABONBA_PTR_SET_VALUE(unprotectedAssetCount_, unprotectedAssetCount) };


    protected:
      // The total number of assets.
      shared_ptr<int32_t> assetCount_ {};
      // The region of the server in the data center.
      shared_ptr<string> idcRegion_ {};
      // The ID of the task.
      shared_ptr<string> leafTaskId_ {};
      // The status of the task. Valid values:
      // 
      // *   **INIT**: The task is not started.
      // *   **START**: The task is started.
      // *   **MESSAGE_SEND**: The command is sent.
      // *   **SUCCESS**: The task is complete.
      // *   **FAIL**: The task failed.
      // *   **TIMEOUT**: The task timed out.
      shared_ptr<string> leafTaskStatus_ {};
      // The description of the task.
      shared_ptr<string> taskMsg_ {};
      // The timestamp when the task results were reported.
      shared_ptr<int64_t> taskReportTime_ {};
      // The number of unprotected assets.
      shared_ptr<int32_t> unprotectedAssetCount_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->taskRecordDetails_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSyncAssetTaskLogDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSyncAssetTaskLogDetailResponseBody::PageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSyncAssetTaskLogDetailResponseBody::PageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setPageInfo(const DescribeSyncAssetTaskLogDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setPageInfo(DescribeSyncAssetTaskLogDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskRecordDetails Field Functions 
    bool hasTaskRecordDetails() const { return this->taskRecordDetails_ != nullptr;};
    void deleteTaskRecordDetails() { this->taskRecordDetails_ = nullptr;};
    inline const vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails> & getTaskRecordDetails() const { DARABONBA_PTR_GET_CONST(taskRecordDetails_, vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails>) };
    inline vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails> getTaskRecordDetails() { DARABONBA_PTR_GET(taskRecordDetails_, vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails>) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setTaskRecordDetails(const vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails> & taskRecordDetails) { DARABONBA_PTR_SET_VALUE(taskRecordDetails_, taskRecordDetails) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setTaskRecordDetails(vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails> && taskRecordDetails) { DARABONBA_PTR_SET_RVALUE(taskRecordDetails_, taskRecordDetails) };


  protected:
    // The pagination information.
    shared_ptr<DescribeSyncAssetTaskLogDetailResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the tasks.
    shared_ptr<vector<DescribeSyncAssetTaskLogDetailResponseBody::TaskRecordDetails>> taskRecordDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
