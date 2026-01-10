// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TrackResult, trackResult_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TrackResult, trackResult_);
    };
    SearchDataTrackResultResponseBody() = default ;
    SearchDataTrackResultResponseBody(const SearchDataTrackResultResponseBody &) = default ;
    SearchDataTrackResultResponseBody(SearchDataTrackResultResponseBody &&) = default ;
    SearchDataTrackResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBody() = default ;
    SearchDataTrackResultResponseBody& operator=(const SearchDataTrackResultResponseBody &) = default ;
    SearchDataTrackResultResponseBody& operator=(SearchDataTrackResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrackResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrackResult& obj) { 
        DARABONBA_PTR_TO_JSON(EventList, eventList_);
        DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, TrackResult& obj) { 
        DARABONBA_PTR_FROM_JSON(EventList, eventList_);
        DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      TrackResult() = default ;
      TrackResult(const TrackResult &) = default ;
      TrackResult(TrackResult &&) = default ;
      TrackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrackResult() = default ;
      TrackResult& operator=(const TrackResult &) = default ;
      TrackResult& operator=(TrackResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Columns, columns_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Columns, columns_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        TableInfoList() = default ;
        TableInfoList(const TableInfoList &) = default ;
        TableInfoList(TableInfoList &&) = default ;
        TableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableInfoList() = default ;
        TableInfoList& operator=(const TableInfoList &) = default ;
        TableInfoList& operator=(TableInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Columns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Columns& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
            DARABONBA_PTR_TO_JSON(ColumnPosition, columnPosition_);
            DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
            DARABONBA_PTR_TO_JSON(Fictive, fictive_);
          };
          friend void from_json(const Darabonba::Json& j, Columns& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
            DARABONBA_PTR_FROM_JSON(ColumnPosition, columnPosition_);
            DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
            DARABONBA_PTR_FROM_JSON(Fictive, fictive_);
          };
          Columns() = default ;
          Columns(const Columns &) = default ;
          Columns(Columns &&) = default ;
          Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Columns() = default ;
          Columns& operator=(const Columns &) = default ;
          Columns& operator=(Columns &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnPosition_ == nullptr && this->columnType_ == nullptr && this->fictive_ == nullptr; };
          // columnName Field Functions 
          bool hasColumnName() const { return this->columnName_ != nullptr;};
          void deleteColumnName() { this->columnName_ = nullptr;};
          inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
          inline Columns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


          // columnPosition Field Functions 
          bool hasColumnPosition() const { return this->columnPosition_ != nullptr;};
          void deleteColumnPosition() { this->columnPosition_ = nullptr;};
          inline int32_t getColumnPosition() const { DARABONBA_PTR_GET_DEFAULT(columnPosition_, 0) };
          inline Columns& setColumnPosition(int32_t columnPosition) { DARABONBA_PTR_SET_VALUE(columnPosition_, columnPosition) };


          // columnType Field Functions 
          bool hasColumnType() const { return this->columnType_ != nullptr;};
          void deleteColumnType() { this->columnType_ = nullptr;};
          inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
          inline Columns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


          // fictive Field Functions 
          bool hasFictive() const { return this->fictive_ != nullptr;};
          void deleteFictive() { this->fictive_ = nullptr;};
          inline bool getFictive() const { DARABONBA_PTR_GET_DEFAULT(fictive_, false) };
          inline Columns& setFictive(bool fictive) { DARABONBA_PTR_SET_VALUE(fictive_, fictive) };


        protected:
          // The name of the column.
          shared_ptr<string> columnName_ {};
          // The position of the column.
          shared_ptr<int32_t> columnPosition_ {};
          // The data type of the column. Examples: BIGINT, INT, and VARCHAR.
          shared_ptr<string> columnType_ {};
          // Indicates whether the column is a virtual column. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> fictive_ {};
        };

        virtual bool empty() const override { return this->columns_ == nullptr
        && this->description_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<TableInfoList::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableInfoList::Columns>) };
        inline vector<TableInfoList::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableInfoList::Columns>) };
        inline TableInfoList& setColumns(const vector<TableInfoList::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline TableInfoList& setColumns(vector<TableInfoList::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TableInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline TableInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline TableInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The information about columns.
        shared_ptr<vector<TableInfoList::Columns>> columns_ {};
        // The description of the column.
        shared_ptr<string> description_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
      };

      class EventList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventList& obj) { 
          DARABONBA_PTR_TO_JSON(DataAfter, dataAfter_);
          DARABONBA_PTR_TO_JSON(DataBefore, dataBefore_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventLength, eventLength_);
          DARABONBA_PTR_TO_JSON(EventTimestamp, eventTimestamp_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(RollSQL, rollSQL_);
        };
        friend void from_json(const Darabonba::Json& j, EventList& obj) { 
          DARABONBA_PTR_FROM_JSON(DataAfter, dataAfter_);
          DARABONBA_PTR_FROM_JSON(DataBefore, dataBefore_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventLength, eventLength_);
          DARABONBA_PTR_FROM_JSON(EventTimestamp, eventTimestamp_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(RollSQL, rollSQL_);
        };
        EventList() = default ;
        EventList(const EventList &) = default ;
        EventList(EventList &&) = default ;
        EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventList() = default ;
        EventList& operator=(const EventList &) = default ;
        EventList& operator=(EventList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataAfter_ == nullptr
        && this->dataBefore_ == nullptr && this->eventId_ == nullptr && this->eventLength_ == nullptr && this->eventTimestamp_ == nullptr && this->eventType_ == nullptr
        && this->rollSQL_ == nullptr; };
        // dataAfter Field Functions 
        bool hasDataAfter() const { return this->dataAfter_ != nullptr;};
        void deleteDataAfter() { this->dataAfter_ = nullptr;};
        inline const vector<string> & getDataAfter() const { DARABONBA_PTR_GET_CONST(dataAfter_, vector<string>) };
        inline vector<string> getDataAfter() { DARABONBA_PTR_GET(dataAfter_, vector<string>) };
        inline EventList& setDataAfter(const vector<string> & dataAfter) { DARABONBA_PTR_SET_VALUE(dataAfter_, dataAfter) };
        inline EventList& setDataAfter(vector<string> && dataAfter) { DARABONBA_PTR_SET_RVALUE(dataAfter_, dataAfter) };


        // dataBefore Field Functions 
        bool hasDataBefore() const { return this->dataBefore_ != nullptr;};
        void deleteDataBefore() { this->dataBefore_ = nullptr;};
        inline const vector<string> & getDataBefore() const { DARABONBA_PTR_GET_CONST(dataBefore_, vector<string>) };
        inline vector<string> getDataBefore() { DARABONBA_PTR_GET(dataBefore_, vector<string>) };
        inline EventList& setDataBefore(const vector<string> & dataBefore) { DARABONBA_PTR_SET_VALUE(dataBefore_, dataBefore) };
        inline EventList& setDataBefore(vector<string> && dataBefore) { DARABONBA_PTR_SET_RVALUE(dataBefore_, dataBefore) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
        inline EventList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventLength Field Functions 
        bool hasEventLength() const { return this->eventLength_ != nullptr;};
        void deleteEventLength() { this->eventLength_ = nullptr;};
        inline int64_t getEventLength() const { DARABONBA_PTR_GET_DEFAULT(eventLength_, 0L) };
        inline EventList& setEventLength(int64_t eventLength) { DARABONBA_PTR_SET_VALUE(eventLength_, eventLength) };


        // eventTimestamp Field Functions 
        bool hasEventTimestamp() const { return this->eventTimestamp_ != nullptr;};
        void deleteEventTimestamp() { this->eventTimestamp_ = nullptr;};
        inline string getEventTimestamp() const { DARABONBA_PTR_GET_DEFAULT(eventTimestamp_, "") };
        inline EventList& setEventTimestamp(string eventTimestamp) { DARABONBA_PTR_SET_VALUE(eventTimestamp_, eventTimestamp) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline EventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // rollSQL Field Functions 
        bool hasRollSQL() const { return this->rollSQL_ != nullptr;};
        void deleteRollSQL() { this->rollSQL_ = nullptr;};
        inline string getRollSQL() const { DARABONBA_PTR_GET_DEFAULT(rollSQL_, "") };
        inline EventList& setRollSQL(string rollSQL) { DARABONBA_PTR_SET_VALUE(rollSQL_, rollSQL) };


      protected:
        // The data records after you perform data operations in the database.
        shared_ptr<vector<string>> dataAfter_ {};
        // The data records before you perform data operations in the database.
        shared_ptr<vector<string>> dataBefore_ {};
        // The ID of the event.
        shared_ptr<int64_t> eventId_ {};
        // The length of the event content. Unit: bytes.
        shared_ptr<int64_t> eventLength_ {};
        // The event time.
        shared_ptr<string> eventTimestamp_ {};
        // The type of the event. Valid values:
        // 
        // *   **WRITE_ROWS**: indicates an INSERT operation.
        // *   **UPDATE_ROWS**: indicates an UPDATE operation.
        // *   **DELETE_ROWS**: indicates a DELETE operation.
        // *   **EXT_WRITE_ROWS**: indicates an INSERT operation, which is equivalent to WRITE_ROWS.
        // *   **EXT_UPDATE_ROWS**: indicates an UPDATE operation, which is equivalent to UPDATE_ROWS.
        // *   **EXT_DELETE_ROWS**: indicates a DELETE operation, which is equivalent to DELETE_ROWS.
        shared_ptr<string> eventType_ {};
        // The SQL statements used to roll back the data change.
        shared_ptr<string> rollSQL_ {};
      };

      virtual bool empty() const override { return this->eventList_ == nullptr
        && this->tableInfoList_ == nullptr && this->totalCount_ == nullptr; };
      // eventList Field Functions 
      bool hasEventList() const { return this->eventList_ != nullptr;};
      void deleteEventList() { this->eventList_ = nullptr;};
      inline const vector<TrackResult::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<TrackResult::EventList>) };
      inline vector<TrackResult::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<TrackResult::EventList>) };
      inline TrackResult& setEventList(const vector<TrackResult::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
      inline TrackResult& setEventList(vector<TrackResult::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


      // tableInfoList Field Functions 
      bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
      void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
      inline const vector<TrackResult::TableInfoList> & getTableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<TrackResult::TableInfoList>) };
      inline vector<TrackResult::TableInfoList> getTableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<TrackResult::TableInfoList>) };
      inline TrackResult& setTableInfoList(const vector<TrackResult::TableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
      inline TrackResult& setTableInfoList(vector<TrackResult::TableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline TrackResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The details of the event logs.
      shared_ptr<vector<TrackResult::EventList>> eventList_ {};
      // The metadata of tables for which you track data operations.
      shared_ptr<vector<TrackResult::TableInfoList>> tableInfoList_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->trackResult_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchDataTrackResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SearchDataTrackResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchDataTrackResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchDataTrackResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // trackResult Field Functions 
    bool hasTrackResult() const { return this->trackResult_ != nullptr;};
    void deleteTrackResult() { this->trackResult_ = nullptr;};
    inline const SearchDataTrackResultResponseBody::TrackResult & getTrackResult() const { DARABONBA_PTR_GET_CONST(trackResult_, SearchDataTrackResultResponseBody::TrackResult) };
    inline SearchDataTrackResultResponseBody::TrackResult getTrackResult() { DARABONBA_PTR_GET(trackResult_, SearchDataTrackResultResponseBody::TrackResult) };
    inline SearchDataTrackResultResponseBody& setTrackResult(const SearchDataTrackResultResponseBody::TrackResult & trackResult) { DARABONBA_PTR_SET_VALUE(trackResult_, trackResult) };
    inline SearchDataTrackResultResponseBody& setTrackResult(SearchDataTrackResultResponseBody::TrackResult && trackResult) { DARABONBA_PTR_SET_RVALUE(trackResult_, trackResult) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The parsing result of the data tracking task.
    shared_ptr<SearchDataTrackResultResponseBody::TrackResult> trackResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
