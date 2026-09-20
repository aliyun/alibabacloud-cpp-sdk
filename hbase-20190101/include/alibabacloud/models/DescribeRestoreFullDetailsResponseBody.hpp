// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREFULLDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREFULLDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRestoreFullDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreFullDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreFull, restoreFull_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreFullDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreFull, restoreFull_);
    };
    DescribeRestoreFullDetailsResponseBody() = default ;
    DescribeRestoreFullDetailsResponseBody(const DescribeRestoreFullDetailsResponseBody &) = default ;
    DescribeRestoreFullDetailsResponseBody(DescribeRestoreFullDetailsResponseBody &&) = default ;
    DescribeRestoreFullDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreFullDetailsResponseBody() = default ;
    DescribeRestoreFullDetailsResponseBody& operator=(const DescribeRestoreFullDetailsResponseBody &) = default ;
    DescribeRestoreFullDetailsResponseBody& operator=(DescribeRestoreFullDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreFull : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreFull& obj) { 
        DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RestoreFullDetails, restoreFullDetails_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(Succeed, succeed_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreFull& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RestoreFullDetails, restoreFullDetails_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      RestoreFull() = default ;
      RestoreFull(const RestoreFull &) = default ;
      RestoreFull(RestoreFull &&) = default ;
      RestoreFull(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreFull() = default ;
      RestoreFull& operator=(const RestoreFull &) = default ;
      RestoreFull& operator=(RestoreFull &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestoreFullDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestoreFullDetails& obj) { 
          DARABONBA_PTR_TO_JSON(RestoreFullDetail, restoreFullDetail_);
        };
        friend void from_json(const Darabonba::Json& j, RestoreFullDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(RestoreFullDetail, restoreFullDetail_);
        };
        RestoreFullDetails() = default ;
        RestoreFullDetails(const RestoreFullDetails &) = default ;
        RestoreFullDetails(RestoreFullDetails &&) = default ;
        RestoreFullDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestoreFullDetails() = default ;
        RestoreFullDetails& operator=(const RestoreFullDetails &) = default ;
        RestoreFullDetails& operator=(RestoreFullDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RestoreFullDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RestoreFullDetail& obj) { 
            DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Process, process_);
            DARABONBA_PTR_TO_JSON(Speed, speed_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(State, state_);
            DARABONBA_PTR_TO_JSON(Table, table_);
          };
          friend void from_json(const Darabonba::Json& j, RestoreFullDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Process, process_);
            DARABONBA_PTR_FROM_JSON(Speed, speed_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(State, state_);
            DARABONBA_PTR_FROM_JSON(Table, table_);
          };
          RestoreFullDetail() = default ;
          RestoreFullDetail(const RestoreFullDetail &) = default ;
          RestoreFullDetail(RestoreFullDetail &&) = default ;
          RestoreFullDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RestoreFullDetail() = default ;
          RestoreFullDetail& operator=(const RestoreFullDetail &) = default ;
          RestoreFullDetail& operator=(RestoreFullDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->endTime_ == nullptr && this->message_ == nullptr && this->process_ == nullptr && this->speed_ == nullptr && this->startTime_ == nullptr
        && this->state_ == nullptr && this->table_ == nullptr; };
          // dataSize Field Functions 
          bool hasDataSize() const { return this->dataSize_ != nullptr;};
          void deleteDataSize() { this->dataSize_ = nullptr;};
          inline string getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
          inline RestoreFullDetail& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline RestoreFullDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline RestoreFullDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // process Field Functions 
          bool hasProcess() const { return this->process_ != nullptr;};
          void deleteProcess() { this->process_ = nullptr;};
          inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
          inline RestoreFullDetail& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


          // speed Field Functions 
          bool hasSpeed() const { return this->speed_ != nullptr;};
          void deleteSpeed() { this->speed_ = nullptr;};
          inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
          inline RestoreFullDetail& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline RestoreFullDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline RestoreFullDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
          inline RestoreFullDetail& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


        protected:
          shared_ptr<string> dataSize_ {};
          shared_ptr<string> endTime_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> process_ {};
          shared_ptr<string> speed_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> state_ {};
          shared_ptr<string> table_ {};
        };

        virtual bool empty() const override { return this->restoreFullDetail_ == nullptr; };
        // restoreFullDetail Field Functions 
        bool hasRestoreFullDetail() const { return this->restoreFullDetail_ != nullptr;};
        void deleteRestoreFullDetail() { this->restoreFullDetail_ = nullptr;};
        inline const vector<RestoreFullDetails::RestoreFullDetail> & getRestoreFullDetail() const { DARABONBA_PTR_GET_CONST(restoreFullDetail_, vector<RestoreFullDetails::RestoreFullDetail>) };
        inline vector<RestoreFullDetails::RestoreFullDetail> getRestoreFullDetail() { DARABONBA_PTR_GET(restoreFullDetail_, vector<RestoreFullDetails::RestoreFullDetail>) };
        inline RestoreFullDetails& setRestoreFullDetail(const vector<RestoreFullDetails::RestoreFullDetail> & restoreFullDetail) { DARABONBA_PTR_SET_VALUE(restoreFullDetail_, restoreFullDetail) };
        inline RestoreFullDetails& setRestoreFullDetail(vector<RestoreFullDetails::RestoreFullDetail> && restoreFullDetail) { DARABONBA_PTR_SET_RVALUE(restoreFullDetail_, restoreFullDetail) };


      protected:
        shared_ptr<vector<RestoreFullDetails::RestoreFullDetail>> restoreFullDetail_ {};
      };

      virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->fail_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->restoreFullDetails_ == nullptr && this->speed_ == nullptr
        && this->succeed_ == nullptr && this->total_ == nullptr; };
      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline string getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
      inline RestoreFull& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline int32_t getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, 0) };
      inline RestoreFull& setFail(int32_t fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline RestoreFull& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline RestoreFull& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // restoreFullDetails Field Functions 
      bool hasRestoreFullDetails() const { return this->restoreFullDetails_ != nullptr;};
      void deleteRestoreFullDetails() { this->restoreFullDetails_ = nullptr;};
      inline const RestoreFull::RestoreFullDetails & getRestoreFullDetails() const { DARABONBA_PTR_GET_CONST(restoreFullDetails_, RestoreFull::RestoreFullDetails) };
      inline RestoreFull::RestoreFullDetails getRestoreFullDetails() { DARABONBA_PTR_GET(restoreFullDetails_, RestoreFull::RestoreFullDetails) };
      inline RestoreFull& setRestoreFullDetails(const RestoreFull::RestoreFullDetails & restoreFullDetails) { DARABONBA_PTR_SET_VALUE(restoreFullDetails_, restoreFullDetails) };
      inline RestoreFull& setRestoreFullDetails(RestoreFull::RestoreFullDetails && restoreFullDetails) { DARABONBA_PTR_SET_RVALUE(restoreFullDetails_, restoreFullDetails) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
      inline RestoreFull& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // succeed Field Functions 
      bool hasSucceed() const { return this->succeed_ != nullptr;};
      void deleteSucceed() { this->succeed_ = nullptr;};
      inline int32_t getSucceed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, 0) };
      inline RestoreFull& setSucceed(int32_t succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline RestoreFull& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The total data size.
      shared_ptr<string> dataSize_ {};
      // The number of failed restorations.
      shared_ptr<int32_t> fail_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<RestoreFull::RestoreFullDetails> restoreFullDetails_ {};
      // The total restoration speed.
      shared_ptr<string> speed_ {};
      // The number of successful restorations.
      shared_ptr<int32_t> succeed_ {};
      // The total number of records.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->restoreFull_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreFullDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreFull Field Functions 
    bool hasRestoreFull() const { return this->restoreFull_ != nullptr;};
    void deleteRestoreFull() { this->restoreFull_ = nullptr;};
    inline const DescribeRestoreFullDetailsResponseBody::RestoreFull & getRestoreFull() const { DARABONBA_PTR_GET_CONST(restoreFull_, DescribeRestoreFullDetailsResponseBody::RestoreFull) };
    inline DescribeRestoreFullDetailsResponseBody::RestoreFull getRestoreFull() { DARABONBA_PTR_GET(restoreFull_, DescribeRestoreFullDetailsResponseBody::RestoreFull) };
    inline DescribeRestoreFullDetailsResponseBody& setRestoreFull(const DescribeRestoreFullDetailsResponseBody::RestoreFull & restoreFull) { DARABONBA_PTR_SET_VALUE(restoreFull_, restoreFull) };
    inline DescribeRestoreFullDetailsResponseBody& setRestoreFull(DescribeRestoreFullDetailsResponseBody::RestoreFull && restoreFull) { DARABONBA_PTR_SET_RVALUE(restoreFull_, restoreFull) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The full restoration details.
    shared_ptr<DescribeRestoreFullDetailsResponseBody::RestoreFull> restoreFull_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
