// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTaskDetailResponseBody() = default ;
    ListTaskDetailResponseBody(const ListTaskDetailResponseBody &) = default ;
    ListTaskDetailResponseBody(ListTaskDetailResponseBody &&) = default ;
    ListTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskDetailResponseBody() = default ;
    ListTaskDetailResponseBody& operator=(const ListTaskDetailResponseBody &) = default ;
    ListTaskDetailResponseBody& operator=(ListTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Record, record_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Record, record_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Record : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Record& obj) { 
          DARABONBA_PTR_TO_JSON(Called, called_);
          DARABONBA_PTR_TO_JSON(Caller, caller_);
          DARABONBA_PTR_TO_JSON(Direction, direction_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RetryCurTimes, retryCurTimes_);
          DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(StatusCodeDesc, statusCodeDesc_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Record& obj) { 
          DARABONBA_PTR_FROM_JSON(Called, called_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(Direction, direction_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RetryCurTimes, retryCurTimes_);
          DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(StatusCodeDesc, statusCodeDesc_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Record() = default ;
        Record(const Record &) = default ;
        Record(Record &&) = default ;
        Record(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Record() = default ;
        Record& operator=(const Record &) = default ;
        Record& operator=(Record &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->called_ == nullptr
        && this->caller_ == nullptr && this->direction_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr
        && this->retryCurTimes_ == nullptr && this->retryTimes_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr
        && this->statusCodeDesc_ == nullptr && this->tags_ == nullptr; };
        // called Field Functions 
        bool hasCalled() const { return this->called_ != nullptr;};
        void deleteCalled() { this->called_ = nullptr;};
        inline string getCalled() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
        inline Record& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


        // caller Field Functions 
        bool hasCaller() const { return this->caller_ != nullptr;};
        void deleteCaller() { this->caller_ = nullptr;};
        inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
        inline Record& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


        // direction Field Functions 
        bool hasDirection() const { return this->direction_ != nullptr;};
        void deleteDirection() { this->direction_ = nullptr;};
        inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
        inline Record& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline Record& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Record& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Record& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // retryCurTimes Field Functions 
        bool hasRetryCurTimes() const { return this->retryCurTimes_ != nullptr;};
        void deleteRetryCurTimes() { this->retryCurTimes_ = nullptr;};
        inline int32_t getRetryCurTimes() const { DARABONBA_PTR_GET_DEFAULT(retryCurTimes_, 0) };
        inline Record& setRetryCurTimes(int32_t retryCurTimes) { DARABONBA_PTR_SET_VALUE(retryCurTimes_, retryCurTimes) };


        // retryTimes Field Functions 
        bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
        void deleteRetryTimes() { this->retryTimes_ = nullptr;};
        inline int32_t getRetryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
        inline Record& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Record& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Record& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline Record& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // statusCodeDesc Field Functions 
        bool hasStatusCodeDesc() const { return this->statusCodeDesc_ != nullptr;};
        void deleteStatusCodeDesc() { this->statusCodeDesc_ = nullptr;};
        inline string getStatusCodeDesc() const { DARABONBA_PTR_GET_DEFAULT(statusCodeDesc_, "") };
        inline Record& setStatusCodeDesc(string statusCodeDesc) { DARABONBA_PTR_SET_VALUE(statusCodeDesc_, statusCodeDesc) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Record& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      protected:
        shared_ptr<string> called_ {};
        shared_ptr<string> caller_ {};
        shared_ptr<string> direction_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> retryCurTimes_ {};
        shared_ptr<int32_t> retryTimes_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> statusCode_ {};
        shared_ptr<string> statusCodeDesc_ {};
        shared_ptr<string> tags_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->record_ == nullptr && this->total_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // record Field Functions 
      bool hasRecord() const { return this->record_ != nullptr;};
      void deleteRecord() { this->record_ = nullptr;};
      inline const vector<Data::Record> & getRecord() const { DARABONBA_PTR_GET_CONST(record_, vector<Data::Record>) };
      inline vector<Data::Record> getRecord() { DARABONBA_PTR_GET(record_, vector<Data::Record>) };
      inline Data& setRecord(const vector<Data::Record> & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
      inline Data& setRecord(vector<Data::Record> && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::Record>> record_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTaskDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTaskDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTaskDetailResponseBody::Data) };
    inline ListTaskDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTaskDetailResponseBody::Data) };
    inline ListTaskDetailResponseBody& setData(const ListTaskDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTaskDetailResponseBody& setData(ListTaskDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTaskDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListTaskDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
