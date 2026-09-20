// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORESCHEMADETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORESCHEMADETAILSRESPONSEBODY_HPP_
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
  class DescribeRestoreSchemaDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreSchemaDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreSchema, restoreSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreSchemaDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreSchema, restoreSchema_);
    };
    DescribeRestoreSchemaDetailsResponseBody() = default ;
    DescribeRestoreSchemaDetailsResponseBody(const DescribeRestoreSchemaDetailsResponseBody &) = default ;
    DescribeRestoreSchemaDetailsResponseBody(DescribeRestoreSchemaDetailsResponseBody &&) = default ;
    DescribeRestoreSchemaDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreSchemaDetailsResponseBody() = default ;
    DescribeRestoreSchemaDetailsResponseBody& operator=(const DescribeRestoreSchemaDetailsResponseBody &) = default ;
    DescribeRestoreSchemaDetailsResponseBody& operator=(DescribeRestoreSchemaDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreSchema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreSchema& obj) { 
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RestoreSchemaDetails, restoreSchemaDetails_);
        DARABONBA_PTR_TO_JSON(Succeed, succeed_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreSchema& obj) { 
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RestoreSchemaDetails, restoreSchemaDetails_);
        DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      RestoreSchema() = default ;
      RestoreSchema(const RestoreSchema &) = default ;
      RestoreSchema(RestoreSchema &&) = default ;
      RestoreSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreSchema() = default ;
      RestoreSchema& operator=(const RestoreSchema &) = default ;
      RestoreSchema& operator=(RestoreSchema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestoreSchemaDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestoreSchemaDetails& obj) { 
          DARABONBA_PTR_TO_JSON(RestoreSchemaDetail, restoreSchemaDetail_);
        };
        friend void from_json(const Darabonba::Json& j, RestoreSchemaDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(RestoreSchemaDetail, restoreSchemaDetail_);
        };
        RestoreSchemaDetails() = default ;
        RestoreSchemaDetails(const RestoreSchemaDetails &) = default ;
        RestoreSchemaDetails(RestoreSchemaDetails &&) = default ;
        RestoreSchemaDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestoreSchemaDetails() = default ;
        RestoreSchemaDetails& operator=(const RestoreSchemaDetails &) = default ;
        RestoreSchemaDetails& operator=(RestoreSchemaDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RestoreSchemaDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RestoreSchemaDetail& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(State, state_);
            DARABONBA_PTR_TO_JSON(Table, table_);
          };
          friend void from_json(const Darabonba::Json& j, RestoreSchemaDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(State, state_);
            DARABONBA_PTR_FROM_JSON(Table, table_);
          };
          RestoreSchemaDetail() = default ;
          RestoreSchemaDetail(const RestoreSchemaDetail &) = default ;
          RestoreSchemaDetail(RestoreSchemaDetail &&) = default ;
          RestoreSchemaDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RestoreSchemaDetail() = default ;
          RestoreSchemaDetail& operator=(const RestoreSchemaDetail &) = default ;
          RestoreSchemaDetail& operator=(RestoreSchemaDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->message_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->table_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline RestoreSchemaDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline RestoreSchemaDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline RestoreSchemaDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline RestoreSchemaDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
          inline RestoreSchemaDetail& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> state_ {};
          shared_ptr<string> table_ {};
        };

        virtual bool empty() const override { return this->restoreSchemaDetail_ == nullptr; };
        // restoreSchemaDetail Field Functions 
        bool hasRestoreSchemaDetail() const { return this->restoreSchemaDetail_ != nullptr;};
        void deleteRestoreSchemaDetail() { this->restoreSchemaDetail_ = nullptr;};
        inline const vector<RestoreSchemaDetails::RestoreSchemaDetail> & getRestoreSchemaDetail() const { DARABONBA_PTR_GET_CONST(restoreSchemaDetail_, vector<RestoreSchemaDetails::RestoreSchemaDetail>) };
        inline vector<RestoreSchemaDetails::RestoreSchemaDetail> getRestoreSchemaDetail() { DARABONBA_PTR_GET(restoreSchemaDetail_, vector<RestoreSchemaDetails::RestoreSchemaDetail>) };
        inline RestoreSchemaDetails& setRestoreSchemaDetail(const vector<RestoreSchemaDetails::RestoreSchemaDetail> & restoreSchemaDetail) { DARABONBA_PTR_SET_VALUE(restoreSchemaDetail_, restoreSchemaDetail) };
        inline RestoreSchemaDetails& setRestoreSchemaDetail(vector<RestoreSchemaDetails::RestoreSchemaDetail> && restoreSchemaDetail) { DARABONBA_PTR_SET_RVALUE(restoreSchemaDetail_, restoreSchemaDetail) };


      protected:
        shared_ptr<vector<RestoreSchemaDetails::RestoreSchemaDetail>> restoreSchemaDetail_ {};
      };

      virtual bool empty() const override { return this->fail_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->restoreSchemaDetails_ == nullptr && this->succeed_ == nullptr && this->total_ == nullptr; };
      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline int32_t getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, 0) };
      inline RestoreSchema& setFail(int32_t fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline RestoreSchema& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline RestoreSchema& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // restoreSchemaDetails Field Functions 
      bool hasRestoreSchemaDetails() const { return this->restoreSchemaDetails_ != nullptr;};
      void deleteRestoreSchemaDetails() { this->restoreSchemaDetails_ = nullptr;};
      inline const RestoreSchema::RestoreSchemaDetails & getRestoreSchemaDetails() const { DARABONBA_PTR_GET_CONST(restoreSchemaDetails_, RestoreSchema::RestoreSchemaDetails) };
      inline RestoreSchema::RestoreSchemaDetails getRestoreSchemaDetails() { DARABONBA_PTR_GET(restoreSchemaDetails_, RestoreSchema::RestoreSchemaDetails) };
      inline RestoreSchema& setRestoreSchemaDetails(const RestoreSchema::RestoreSchemaDetails & restoreSchemaDetails) { DARABONBA_PTR_SET_VALUE(restoreSchemaDetails_, restoreSchemaDetails) };
      inline RestoreSchema& setRestoreSchemaDetails(RestoreSchema::RestoreSchemaDetails && restoreSchemaDetails) { DARABONBA_PTR_SET_RVALUE(restoreSchemaDetails_, restoreSchemaDetails) };


      // succeed Field Functions 
      bool hasSucceed() const { return this->succeed_ != nullptr;};
      void deleteSucceed() { this->succeed_ = nullptr;};
      inline int32_t getSucceed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, 0) };
      inline RestoreSchema& setSucceed(int32_t succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline RestoreSchema& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of failed restorations.
      shared_ptr<int32_t> fail_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<RestoreSchema::RestoreSchemaDetails> restoreSchemaDetails_ {};
      // The number of successful restorations.
      shared_ptr<int32_t> succeed_ {};
      // The total number of records.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->restoreSchema_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreSchemaDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreSchema Field Functions 
    bool hasRestoreSchema() const { return this->restoreSchema_ != nullptr;};
    void deleteRestoreSchema() { this->restoreSchema_ = nullptr;};
    inline const DescribeRestoreSchemaDetailsResponseBody::RestoreSchema & getRestoreSchema() const { DARABONBA_PTR_GET_CONST(restoreSchema_, DescribeRestoreSchemaDetailsResponseBody::RestoreSchema) };
    inline DescribeRestoreSchemaDetailsResponseBody::RestoreSchema getRestoreSchema() { DARABONBA_PTR_GET(restoreSchema_, DescribeRestoreSchemaDetailsResponseBody::RestoreSchema) };
    inline DescribeRestoreSchemaDetailsResponseBody& setRestoreSchema(const DescribeRestoreSchemaDetailsResponseBody::RestoreSchema & restoreSchema) { DARABONBA_PTR_SET_VALUE(restoreSchema_, restoreSchema) };
    inline DescribeRestoreSchemaDetailsResponseBody& setRestoreSchema(DescribeRestoreSchemaDetailsResponseBody::RestoreSchema && restoreSchema) { DARABONBA_PTR_SET_RVALUE(restoreSchema_, restoreSchema) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The schema restoration details.
    shared_ptr<DescribeRestoreSchemaDetailsResponseBody::RestoreSchema> restoreSchema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
