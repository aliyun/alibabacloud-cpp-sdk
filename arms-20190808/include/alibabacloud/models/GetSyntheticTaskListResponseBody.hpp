// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSyntheticTaskListResponseBody() = default ;
    GetSyntheticTaskListResponseBody(const GetSyntheticTaskListResponseBody &) = default ;
    GetSyntheticTaskListResponseBody(GetSyntheticTaskListResponseBody &&) = default ;
    GetSyntheticTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskListResponseBody() = default ;
    GetSyntheticTaskListResponseBody& operator=(const GetSyntheticTaskListResponseBody &) = default ;
    GetSyntheticTaskListResponseBody& operator=(GetSyntheticTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_TO_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_TO_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_TO_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(NavigateFirstPage, navigateFirstPage_);
        DARABONBA_PTR_TO_JSON(NavigateLastPage, navigateLastPage_);
        DARABONBA_PTR_TO_JSON(NavigatePageNums, navigatePageNums_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(Prepage, prepage_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_FROM_JSON(HasPreviousPage, hasPreviousPage_);
        DARABONBA_PTR_FROM_JSON(IsFirstPage, isFirstPage_);
        DARABONBA_PTR_FROM_JSON(IsLastPage, isLastPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(NavigateFirstPage, navigateFirstPage_);
        DARABONBA_PTR_FROM_JSON(NavigateLastPage, navigateLastPage_);
        DARABONBA_PTR_FROM_JSON(NavigatePageNums, navigatePageNums_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(Prepage, prepage_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(MonitorNumber, monitorNumber_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Usable, usable_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(MonitorNumber, monitorNumber_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Usable, usable_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->monitorNumber_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->taskStatus_ == nullptr && this->taskType_ == nullptr
        && this->taskTypeName_ == nullptr && this->url_ == nullptr && this->usable_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // monitorNumber Field Functions 
        bool hasMonitorNumber() const { return this->monitorNumber_ != nullptr;};
        void deleteMonitorNumber() { this->monitorNumber_ = nullptr;};
        inline int64_t getMonitorNumber() const { DARABONBA_PTR_GET_DEFAULT(monitorNumber_, 0L) };
        inline List& setMonitorNumber(int64_t monitorNumber) { DARABONBA_PTR_SET_VALUE(monitorNumber_, monitorNumber) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline List& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // taskStatus Field Functions 
        bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
        void deleteTaskStatus() { this->taskStatus_ = nullptr;};
        inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
        inline List& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline int64_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
        inline List& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // taskTypeName Field Functions 
        bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
        void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
        inline string getTaskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
        inline List& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline List& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // usable Field Functions 
        bool hasUsable() const { return this->usable_ != nullptr;};
        void deleteUsable() { this->usable_ = nullptr;};
        inline float getUsable() const { DARABONBA_PTR_GET_DEFAULT(usable_, 0.0) };
        inline List& setUsable(float usable) { DARABONBA_PTR_SET_VALUE(usable_, usable) };


      protected:
        // The time when the task was created.
        shared_ptr<string> createTime_ {};
        // The number of detection points.
        shared_ptr<int64_t> monitorNumber_ {};
        // The ID of the synthetic monitoring task.
        shared_ptr<string> taskId_ {};
        // The task name.
        shared_ptr<string> taskName_ {};
        // The status of the task. Valid values:
        // 
        // *   **0**: The task is stopped.
        // *   **1**: The task is started.
        // *   **9**: The task is ended.
        shared_ptr<string> taskStatus_ {};
        // The type of the task. Valid values:
        // 
        // 1.  3: web page performance - IE
        // 2.  34: web page performance - Chrome
        // 3.  0: network quality
        // 4.  40: file download
        // 5.  7: API performance
        shared_ptr<int64_t> taskType_ {};
        // The name of the task type.
        shared_ptr<string> taskTypeName_ {};
        // The URL for synthetic monitoring.
        shared_ptr<string> url_ {};
        // The availability. Only the data of the last day is counted. If no data is available for the last day, an empty value is returned.
        shared_ptr<float> usable_ {};
      };

      virtual bool empty() const override { return this->hasNextPage_ == nullptr
        && this->hasPreviousPage_ == nullptr && this->isFirstPage_ == nullptr && this->isLastPage_ == nullptr && this->list_ == nullptr && this->navigateFirstPage_ == nullptr
        && this->navigateLastPage_ == nullptr && this->navigatePageNums_ == nullptr && this->nextPage_ == nullptr && this->pages_ == nullptr && this->prepage_ == nullptr
        && this->size_ == nullptr && this->total_ == nullptr; };
      // hasNextPage Field Functions 
      bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
      void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
      inline string getHasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, "") };
      inline PageInfo& setHasNextPage(string hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


      // hasPreviousPage Field Functions 
      bool hasHasPreviousPage() const { return this->hasPreviousPage_ != nullptr;};
      void deleteHasPreviousPage() { this->hasPreviousPage_ = nullptr;};
      inline bool getHasPreviousPage() const { DARABONBA_PTR_GET_DEFAULT(hasPreviousPage_, false) };
      inline PageInfo& setHasPreviousPage(bool hasPreviousPage) { DARABONBA_PTR_SET_VALUE(hasPreviousPage_, hasPreviousPage) };


      // isFirstPage Field Functions 
      bool hasIsFirstPage() const { return this->isFirstPage_ != nullptr;};
      void deleteIsFirstPage() { this->isFirstPage_ = nullptr;};
      inline bool getIsFirstPage() const { DARABONBA_PTR_GET_DEFAULT(isFirstPage_, false) };
      inline PageInfo& setIsFirstPage(bool isFirstPage) { DARABONBA_PTR_SET_VALUE(isFirstPage_, isFirstPage) };


      // isLastPage Field Functions 
      bool hasIsLastPage() const { return this->isLastPage_ != nullptr;};
      void deleteIsLastPage() { this->isLastPage_ = nullptr;};
      inline bool getIsLastPage() const { DARABONBA_PTR_GET_DEFAULT(isLastPage_, false) };
      inline PageInfo& setIsLastPage(bool isLastPage) { DARABONBA_PTR_SET_VALUE(isLastPage_, isLastPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<PageInfo::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<PageInfo::List>) };
      inline vector<PageInfo::List> getList() { DARABONBA_PTR_GET(list_, vector<PageInfo::List>) };
      inline PageInfo& setList(const vector<PageInfo::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline PageInfo& setList(vector<PageInfo::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // navigateFirstPage Field Functions 
      bool hasNavigateFirstPage() const { return this->navigateFirstPage_ != nullptr;};
      void deleteNavigateFirstPage() { this->navigateFirstPage_ = nullptr;};
      inline string getNavigateFirstPage() const { DARABONBA_PTR_GET_DEFAULT(navigateFirstPage_, "") };
      inline PageInfo& setNavigateFirstPage(string navigateFirstPage) { DARABONBA_PTR_SET_VALUE(navigateFirstPage_, navigateFirstPage) };


      // navigateLastPage Field Functions 
      bool hasNavigateLastPage() const { return this->navigateLastPage_ != nullptr;};
      void deleteNavigateLastPage() { this->navigateLastPage_ = nullptr;};
      inline string getNavigateLastPage() const { DARABONBA_PTR_GET_DEFAULT(navigateLastPage_, "") };
      inline PageInfo& setNavigateLastPage(string navigateLastPage) { DARABONBA_PTR_SET_VALUE(navigateLastPage_, navigateLastPage) };


      // navigatePageNums Field Functions 
      bool hasNavigatePageNums() const { return this->navigatePageNums_ != nullptr;};
      void deleteNavigatePageNums() { this->navigatePageNums_ = nullptr;};
      inline string getNavigatePageNums() const { DARABONBA_PTR_GET_DEFAULT(navigatePageNums_, "") };
      inline PageInfo& setNavigatePageNums(string navigatePageNums) { DARABONBA_PTR_SET_VALUE(navigatePageNums_, navigatePageNums) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline string getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, "") };
      inline PageInfo& setNextPage(string nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
      inline PageInfo& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // prepage Field Functions 
      bool hasPrepage() const { return this->prepage_ != nullptr;};
      void deletePrepage() { this->prepage_ = nullptr;};
      inline string getPrepage() const { DARABONBA_PTR_GET_DEFAULT(prepage_, "") };
      inline PageInfo& setPrepage(string prepage) { DARABONBA_PTR_SET_VALUE(prepage_, prepage) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageInfo& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Indicates whether the current page is followed by a page.
      shared_ptr<string> hasNextPage_ {};
      // Indicates whether a previous page exists.
      shared_ptr<bool> hasPreviousPage_ {};
      // Indicates whether the page is the first page.
      shared_ptr<bool> isFirstPage_ {};
      // Indicates whether the page is the last page.
      shared_ptr<bool> isLastPage_ {};
      // The task information.
      shared_ptr<vector<PageInfo::List>> list_ {};
      // The first page on the navigation bar.
      shared_ptr<string> navigateFirstPage_ {};
      // The last page on the navigation bar.
      shared_ptr<string> navigateLastPage_ {};
      // All navigation page numbers.
      shared_ptr<string> navigatePageNums_ {};
      // The next page.
      shared_ptr<string> nextPage_ {};
      // The total number of pages returned.
      shared_ptr<string> pages_ {};
      // The previous page.
      shared_ptr<string> prepage_ {};
      // The number of entries per page.
      shared_ptr<int64_t> size_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetSyntheticTaskListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetSyntheticTaskListResponseBody::PageInfo) };
    inline GetSyntheticTaskListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, GetSyntheticTaskListResponseBody::PageInfo) };
    inline GetSyntheticTaskListResponseBody& setPageInfo(const GetSyntheticTaskListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetSyntheticTaskListResponseBody& setPageInfo(GetSyntheticTaskListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyntheticTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The query results.
    shared_ptr<GetSyntheticTaskListResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
