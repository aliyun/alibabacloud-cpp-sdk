// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRAWLERRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCRAWLERRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrawlerRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrawlerRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrawlerRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrawlerRunsResponseBody() = default ;
    ListCrawlerRunsResponseBody(const ListCrawlerRunsResponseBody &) = default ;
    ListCrawlerRunsResponseBody(ListCrawlerRunsResponseBody &&) = default ;
    ListCrawlerRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrawlerRunsResponseBody() = default ;
    ListCrawlerRunsResponseBody& operator=(const ListCrawlerRunsResponseBody &) = default ;
    ListCrawlerRunsResponseBody& operator=(ListCrawlerRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CrawlerRuns, crawlerRuns_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CrawlerRuns, crawlerRuns_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CrawlerRuns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CrawlerRuns& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_TO_JSON(TotalTableCount, totalTableCount_);
        };
        friend void from_json(const Darabonba::Json& j, CrawlerRuns& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
          DARABONBA_PTR_FROM_JSON(TotalTableCount, totalTableCount_);
        };
        CrawlerRuns() = default ;
        CrawlerRuns(const CrawlerRuns &) = default ;
        CrawlerRuns(CrawlerRuns &&) = default ;
        CrawlerRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CrawlerRuns() = default ;
        CrawlerRuns& operator=(const CrawlerRuns &) = default ;
        CrawlerRuns& operator=(CrawlerRuns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->finishedTime_ == nullptr && this->startedTime_ == nullptr && this->status_ == nullptr && this->taskInstanceId_ == nullptr && this->totalTableCount_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline CrawlerRuns& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline int64_t getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
        inline CrawlerRuns& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // startedTime Field Functions 
        bool hasStartedTime() const { return this->startedTime_ != nullptr;};
        void deleteStartedTime() { this->startedTime_ = nullptr;};
        inline int64_t getStartedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
        inline CrawlerRuns& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CrawlerRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskInstanceId Field Functions 
        bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
        void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
        inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
        inline CrawlerRuns& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


        // totalTableCount Field Functions 
        bool hasTotalTableCount() const { return this->totalTableCount_ != nullptr;};
        void deleteTotalTableCount() { this->totalTableCount_ = nullptr;};
        inline int64_t getTotalTableCount() const { DARABONBA_PTR_GET_DEFAULT(totalTableCount_, 0L) };
        inline CrawlerRuns& setTotalTableCount(int64_t totalTableCount) { DARABONBA_PTR_SET_VALUE(totalTableCount_, totalTableCount) };


      protected:
        shared_ptr<double> duration_ {};
        shared_ptr<int64_t> finishedTime_ {};
        shared_ptr<int64_t> startedTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> taskInstanceId_ {};
        shared_ptr<int64_t> totalTableCount_ {};
      };

      virtual bool empty() const override { return this->crawlerRuns_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // crawlerRuns Field Functions 
      bool hasCrawlerRuns() const { return this->crawlerRuns_ != nullptr;};
      void deleteCrawlerRuns() { this->crawlerRuns_ = nullptr;};
      inline const vector<PagingInfo::CrawlerRuns> & getCrawlerRuns() const { DARABONBA_PTR_GET_CONST(crawlerRuns_, vector<PagingInfo::CrawlerRuns>) };
      inline vector<PagingInfo::CrawlerRuns> getCrawlerRuns() { DARABONBA_PTR_GET(crawlerRuns_, vector<PagingInfo::CrawlerRuns>) };
      inline PagingInfo& setCrawlerRuns(const vector<PagingInfo::CrawlerRuns> & crawlerRuns) { DARABONBA_PTR_SET_VALUE(crawlerRuns_, crawlerRuns) };
      inline PagingInfo& setCrawlerRuns(vector<PagingInfo::CrawlerRuns> && crawlerRuns) { DARABONBA_PTR_SET_RVALUE(crawlerRuns_, crawlerRuns) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PagingInfo::CrawlerRuns>> crawlerRuns_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListCrawlerRunsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListCrawlerRunsResponseBody::PagingInfo) };
    inline ListCrawlerRunsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListCrawlerRunsResponseBody::PagingInfo) };
    inline ListCrawlerRunsResponseBody& setPagingInfo(const ListCrawlerRunsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListCrawlerRunsResponseBody& setPagingInfo(ListCrawlerRunsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrawlerRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrawlerRunsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListCrawlerRunsResponseBody::PagingInfo> pagingInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
