// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EventCenterQueryEventsResponseBody() = default ;
    EventCenterQueryEventsResponseBody(const EventCenterQueryEventsResponseBody &) = default ;
    EventCenterQueryEventsResponseBody(EventCenterQueryEventsResponseBody &&) = default ;
    EventCenterQueryEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsResponseBody() = default ;
    EventCenterQueryEventsResponseBody& operator=(const EventCenterQueryEventsResponseBody &) = default ;
    EventCenterQueryEventsResponseBody& operator=(EventCenterQueryEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Table, table_);
        DARABONBA_PTR_TO_JSON(TimeSeries, timeSeries_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Table, table_);
        DARABONBA_PTR_FROM_JSON(TimeSeries, timeSeries_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class TimeSeries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeSeries& obj) { 
          DARABONBA_ANY_TO_JSON(RowData, rowData_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, TimeSeries& obj) { 
          DARABONBA_ANY_FROM_JSON(RowData, rowData_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        TimeSeries() = default ;
        TimeSeries(const TimeSeries &) = default ;
        TimeSeries(TimeSeries &&) = default ;
        TimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeSeries() = default ;
        TimeSeries& operator=(const TimeSeries &) = default ;
        TimeSeries& operator=(TimeSeries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rowData_ == nullptr
        && this->time_ == nullptr; };
        // rowData Field Functions 
        bool hasRowData() const { return this->rowData_ != nullptr;};
        void deleteRowData() { this->rowData_ = nullptr;};
        inline         const Darabonba::Json & getRowData() const { DARABONBA_GET(rowData_) };
        Darabonba::Json & getRowData() { DARABONBA_GET(rowData_) };
        inline TimeSeries& setRowData(const Darabonba::Json & rowData) { DARABONBA_SET_VALUE(rowData_, rowData) };
        inline TimeSeries& setRowData(Darabonba::Json && rowData) { DARABONBA_SET_RVALUE(rowData_, rowData) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline TimeSeries& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        Darabonba::Json rowData_ {};
        shared_ptr<string> time_ {};
      };

      class Table : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Table& obj) { 
          DARABONBA_ANY_TO_JSON(RowData, rowData_);
        };
        friend void from_json(const Darabonba::Json& j, Table& obj) { 
          DARABONBA_ANY_FROM_JSON(RowData, rowData_);
        };
        Table() = default ;
        Table(const Table &) = default ;
        Table(Table &&) = default ;
        Table(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Table() = default ;
        Table& operator=(const Table &) = default ;
        Table& operator=(Table &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rowData_ == nullptr; };
        // rowData Field Functions 
        bool hasRowData() const { return this->rowData_ != nullptr;};
        void deleteRowData() { this->rowData_ = nullptr;};
        inline         const Darabonba::Json & getRowData() const { DARABONBA_GET(rowData_) };
        Darabonba::Json & getRowData() { DARABONBA_GET(rowData_) };
        inline Table& setRowData(const Darabonba::Json & rowData) { DARABONBA_SET_VALUE(rowData_, rowData) };
        inline Table& setRowData(Darabonba::Json && rowData) { DARABONBA_SET_RVALUE(rowData_, rowData) };


      protected:
        Darabonba::Json rowData_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->table_ == nullptr && this->timeSeries_ == nullptr && this->totalCount_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline const vector<Data::Table> & getTable() const { DARABONBA_PTR_GET_CONST(table_, vector<Data::Table>) };
      inline vector<Data::Table> getTable() { DARABONBA_PTR_GET(table_, vector<Data::Table>) };
      inline Data& setTable(const vector<Data::Table> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
      inline Data& setTable(vector<Data::Table> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


      // timeSeries Field Functions 
      bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
      void deleteTimeSeries() { this->timeSeries_ = nullptr;};
      inline const vector<Data::TimeSeries> & getTimeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<Data::TimeSeries>) };
      inline vector<Data::TimeSeries> getTimeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<Data::TimeSeries>) };
      inline Data& setTimeSeries(const vector<Data::TimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
      inline Data& setTimeSeries(vector<Data::TimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<vector<Data::Table>> table_ {};
      shared_ptr<vector<Data::TimeSeries>> timeSeries_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EventCenterQueryEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EventCenterQueryEventsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EventCenterQueryEventsResponseBody::Data) };
    inline EventCenterQueryEventsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EventCenterQueryEventsResponseBody::Data) };
    inline EventCenterQueryEventsResponseBody& setData(const EventCenterQueryEventsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EventCenterQueryEventsResponseBody& setData(EventCenterQueryEventsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EventCenterQueryEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EventCenterQueryEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EventCenterQueryEventsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EventCenterQueryEventsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
