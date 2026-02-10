// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPROCESSDETAILRESPONSEBODY_HPP_
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
  class ListOperationProcessDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(ProcessDetails, processDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationProcessDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(ProcessDetails, processDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationProcessDetailResponseBody() = default ;
    ListOperationProcessDetailResponseBody(const ListOperationProcessDetailResponseBody &) = default ;
    ListOperationProcessDetailResponseBody(ListOperationProcessDetailResponseBody &&) = default ;
    ListOperationProcessDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationProcessDetailResponseBody() = default ;
    ListOperationProcessDetailResponseBody& operator=(const ListOperationProcessDetailResponseBody &) = default ;
    ListOperationProcessDetailResponseBody& operator=(ListOperationProcessDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AssetVendor, assetVendor_);
        DARABONBA_PTR_TO_JSON(Checks, checks_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DetailTaskId, detailTaskId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AssetVendor, assetVendor_);
        DARABONBA_PTR_FROM_JSON(Checks, checks_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DetailTaskId, detailTaskId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      ProcessDetails() = default ;
      ProcessDetails(const ProcessDetails &) = default ;
      ProcessDetails(ProcessDetails &&) = default ;
      ProcessDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessDetails() = default ;
      ProcessDetails& operator=(const ProcessDetails &) = default ;
      ProcessDetails& operator=(ProcessDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Checks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Checks& obj) { 
          DARABONBA_PTR_TO_JSON(CheckId, checkId_);
          DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
        };
        friend void from_json(const Darabonba::Json& j, Checks& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
          DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
        };
        Checks() = default ;
        Checks(const Checks &) = default ;
        Checks(Checks &&) = default ;
        Checks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Checks() = default ;
        Checks& operator=(const Checks &) = default ;
        Checks& operator=(Checks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkShowName_ == nullptr; };
        // checkId Field Functions 
        bool hasCheckId() const { return this->checkId_ != nullptr;};
        void deleteCheckId() { this->checkId_ = nullptr;};
        inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
        inline Checks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


        // checkShowName Field Functions 
        bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
        void deleteCheckShowName() { this->checkShowName_ = nullptr;};
        inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
        inline Checks& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      protected:
        // The ID of the check item associated with the operation subtask.
        shared_ptr<int64_t> checkId_ {};
        // The name of the check item associated with the operation subtask.
        shared_ptr<string> checkShowName_ {};
      };

      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->assetVendor_ == nullptr && this->checks_ == nullptr && this->createTime_ == nullptr && this->detailTaskId_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->statusCode_ == nullptr && this->taskId_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
      inline ProcessDetails& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline ProcessDetails& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // assetVendor Field Functions 
      bool hasAssetVendor() const { return this->assetVendor_ != nullptr;};
      void deleteAssetVendor() { this->assetVendor_ = nullptr;};
      inline int32_t getAssetVendor() const { DARABONBA_PTR_GET_DEFAULT(assetVendor_, 0) };
      inline ProcessDetails& setAssetVendor(int32_t assetVendor) { DARABONBA_PTR_SET_VALUE(assetVendor_, assetVendor) };


      // checks Field Functions 
      bool hasChecks() const { return this->checks_ != nullptr;};
      void deleteChecks() { this->checks_ = nullptr;};
      inline const vector<ProcessDetails::Checks> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<ProcessDetails::Checks>) };
      inline vector<ProcessDetails::Checks> getChecks() { DARABONBA_PTR_GET(checks_, vector<ProcessDetails::Checks>) };
      inline ProcessDetails& setChecks(const vector<ProcessDetails::Checks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
      inline ProcessDetails& setChecks(vector<ProcessDetails::Checks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ProcessDetails& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detailTaskId Field Functions 
      bool hasDetailTaskId() const { return this->detailTaskId_ != nullptr;};
      void deleteDetailTaskId() { this->detailTaskId_ = nullptr;};
      inline string getDetailTaskId() const { DARABONBA_PTR_GET_DEFAULT(detailTaskId_, "") };
      inline ProcessDetails& setDetailTaskId(string detailTaskId) { DARABONBA_PTR_SET_VALUE(detailTaskId_, detailTaskId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ProcessDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ProcessDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
      inline ProcessDetails& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ProcessDetails& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The subtype of the asset associated with the operation subtask.
      shared_ptr<int32_t> assetSubType_ {};
      // The type of the asset associated with the operation subtask.
      shared_ptr<int32_t> assetType_ {};
      // The vendor of the asset associated with the operation subtask.
      shared_ptr<int32_t> assetVendor_ {};
      // The check items associated with the operation subtask.
      shared_ptr<vector<ProcessDetails::Checks>> checks_ {};
      // The timestamp when the task was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the operation subtask.
      shared_ptr<string> detailTaskId_ {};
      // The end timestamp of the operation subtask. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The start timestamp of the operation subtask. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The subtask status code. Enumerated values:
      // 
      // *   0: not started.
      // *   1: running.
      // *   2: successful.
      // *   3: times out.
      // *   4: failed.
      shared_ptr<int32_t> statusCode_ {};
      // The ID of the operation subtask.
      shared_ptr<string> taskId_ {};
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->processDetails_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOperationProcessDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOperationProcessDetailResponseBody::PageInfo) };
    inline ListOperationProcessDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOperationProcessDetailResponseBody::PageInfo) };
    inline ListOperationProcessDetailResponseBody& setPageInfo(const ListOperationProcessDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOperationProcessDetailResponseBody& setPageInfo(ListOperationProcessDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // processDetails Field Functions 
    bool hasProcessDetails() const { return this->processDetails_ != nullptr;};
    void deleteProcessDetails() { this->processDetails_ = nullptr;};
    inline const vector<ListOperationProcessDetailResponseBody::ProcessDetails> & getProcessDetails() const { DARABONBA_PTR_GET_CONST(processDetails_, vector<ListOperationProcessDetailResponseBody::ProcessDetails>) };
    inline vector<ListOperationProcessDetailResponseBody::ProcessDetails> getProcessDetails() { DARABONBA_PTR_GET(processDetails_, vector<ListOperationProcessDetailResponseBody::ProcessDetails>) };
    inline ListOperationProcessDetailResponseBody& setProcessDetails(const vector<ListOperationProcessDetailResponseBody::ProcessDetails> & processDetails) { DARABONBA_PTR_SET_VALUE(processDetails_, processDetails) };
    inline ListOperationProcessDetailResponseBody& setProcessDetails(vector<ListOperationProcessDetailResponseBody::ProcessDetails> && processDetails) { DARABONBA_PTR_SET_RVALUE(processDetails_, processDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationProcessDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListOperationProcessDetailResponseBody::PageInfo> pageInfo_ {};
    // The information about the operation subtasks.
    shared_ptr<vector<ListOperationProcessDetailResponseBody::ProcessDetails>> processDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
