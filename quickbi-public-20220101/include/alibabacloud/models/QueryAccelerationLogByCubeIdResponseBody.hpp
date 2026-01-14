// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAccelerationLogByCubeIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccelerationLogByCubeIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccelerationLogByCubeIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAccelerationLogByCubeIdResponseBody() = default ;
    QueryAccelerationLogByCubeIdResponseBody(const QueryAccelerationLogByCubeIdResponseBody &) = default ;
    QueryAccelerationLogByCubeIdResponseBody(QueryAccelerationLogByCubeIdResponseBody &&) = default ;
    QueryAccelerationLogByCubeIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccelerationLogByCubeIdResponseBody() = default ;
    QueryAccelerationLogByCubeIdResponseBody& operator=(const QueryAccelerationLogByCubeIdResponseBody &) = default ;
    QueryAccelerationLogByCubeIdResponseBody& operator=(QueryAccelerationLogByCubeIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Next, next_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pre, pre_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Next, next_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pre, pre_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_TO_JSON(JonStartDate, jonStartDate_);
          DARABONBA_PTR_TO_JSON(Log, log_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
          DARABONBA_PTR_FROM_JSON(JonStartDate, jonStartDate_);
          DARABONBA_PTR_FROM_JSON(Log, log_);
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
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->jobHistoryId_ == nullptr && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->jonStartDate_ == nullptr && this->log_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // jobHistoryId Field Functions 
        bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
        void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
        inline string getJobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
        inline Data& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobStatus Field Functions 
        bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
        void deleteJobStatus() { this->jobStatus_ = nullptr;};
        inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
        inline Data& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


        // jonStartDate Field Functions 
        bool hasJonStartDate() const { return this->jonStartDate_ != nullptr;};
        void deleteJonStartDate() { this->jonStartDate_ = nullptr;};
        inline string getJonStartDate() const { DARABONBA_PTR_GET_DEFAULT(jonStartDate_, "") };
        inline Data& setJonStartDate(string jonStartDate) { DARABONBA_PTR_SET_VALUE(jonStartDate_, jonStartDate) };


        // log Field Functions 
        bool hasLog() const { return this->log_ != nullptr;};
        void deleteLog() { this->log_ = nullptr;};
        inline string getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
        inline Data& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


      protected:
        shared_ptr<string> duration_ {};
        shared_ptr<string> jobHistoryId_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<string> jobStatus_ {};
        shared_ptr<string> jonStartDate_ {};
        shared_ptr<string> log_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->next_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pre_ == nullptr && this->totalNum_ == nullptr
        && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // next Field Functions 
      bool hasNext() const { return this->next_ != nullptr;};
      void deleteNext() { this->next_ = nullptr;};
      inline int32_t getNext() const { DARABONBA_PTR_GET_DEFAULT(next_, 0) };
      inline Result& setNext(int32_t next) { DARABONBA_PTR_SET_VALUE(next_, next) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pre Field Functions 
      bool hasPre() const { return this->pre_ != nullptr;};
      void deletePre() { this->pre_ = nullptr;};
      inline int32_t getPre() const { DARABONBA_PTR_GET_DEFAULT(pre_, 0) };
      inline Result& setPre(int32_t pre) { DARABONBA_PTR_SET_VALUE(pre_, pre) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      shared_ptr<vector<Result::Data>> data_ {};
      shared_ptr<int32_t> next_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> pre_ {};
      shared_ptr<int32_t> totalNum_ {};
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccelerationLogByCubeIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryAccelerationLogByCubeIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryAccelerationLogByCubeIdResponseBody::Result) };
    inline QueryAccelerationLogByCubeIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryAccelerationLogByCubeIdResponseBody::Result) };
    inline QueryAccelerationLogByCubeIdResponseBody& setResult(const QueryAccelerationLogByCubeIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryAccelerationLogByCubeIdResponseBody& setResult(QueryAccelerationLogByCubeIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAccelerationLogByCubeIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryAccelerationLogByCubeIdResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
