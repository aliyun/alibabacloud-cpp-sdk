// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUEST_HPP_
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
  class EventCenterQueryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(BusName, busName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(BusName, busName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    EventCenterQueryEventsRequest() = default ;
    EventCenterQueryEventsRequest(const EventCenterQueryEventsRequest &) = default ;
    EventCenterQueryEventsRequest(EventCenterQueryEventsRequest &&) = default ;
    EventCenterQueryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequest() = default ;
    EventCenterQueryEventsRequest& operator=(const EventCenterQueryEventsRequest &) = default ;
    EventCenterQueryEventsRequest& operator=(EventCenterQueryEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(QueryType, queryType_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(Breakdowns, breakdowns_);
          DARABONBA_PTR_TO_JSON(Calculations, calculations_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(FilterCombination, filterCombination_);
          DARABONBA_PTR_TO_JSON(Filters, filters_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
          DARABONBA_PTR_TO_JSON(Orders, orders_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Breakdowns, breakdowns_);
          DARABONBA_PTR_FROM_JSON(Calculations, calculations_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(FilterCombination, filterCombination_);
          DARABONBA_PTR_FROM_JSON(Filters, filters_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(Limit, limit_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
          DARABONBA_PTR_FROM_JSON(Orders, orders_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Orders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Orders& obj) { 
            DARABONBA_PTR_TO_JSON(Column, column_);
            DARABONBA_PTR_TO_JSON(Desc, desc_);
            DARABONBA_PTR_TO_JSON(Op, op_);
          };
          friend void from_json(const Darabonba::Json& j, Orders& obj) { 
            DARABONBA_PTR_FROM_JSON(Column, column_);
            DARABONBA_PTR_FROM_JSON(Desc, desc_);
            DARABONBA_PTR_FROM_JSON(Op, op_);
          };
          Orders() = default ;
          Orders(const Orders &) = default ;
          Orders(Orders &&) = default ;
          Orders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Orders() = default ;
          Orders& operator=(const Orders &) = default ;
          Orders& operator=(Orders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->column_ == nullptr
        && this->desc_ == nullptr && this->op_ == nullptr; };
          // column Field Functions 
          bool hasColumn() const { return this->column_ != nullptr;};
          void deleteColumn() { this->column_ = nullptr;};
          inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
          inline Orders& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


          // desc Field Functions 
          bool hasDesc() const { return this->desc_ != nullptr;};
          void deleteDesc() { this->desc_ = nullptr;};
          inline bool getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
          inline Orders& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


          // op Field Functions 
          bool hasOp() const { return this->op_ != nullptr;};
          void deleteOp() { this->op_ = nullptr;};
          inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
          inline Orders& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        protected:
          // The column name.
          shared_ptr<string> column_ {};
          // Specifies whether to sort the query results in descending order.
          shared_ptr<bool> desc_ {};
          // The operator.
          shared_ptr<string> op_ {};
        };

        class Filters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Filters& obj) { 
            DARABONBA_PTR_TO_JSON(Column, column_);
            DARABONBA_PTR_TO_JSON(NestedFilterCombination, nestedFilterCombination_);
            DARABONBA_PTR_TO_JSON(NestedFilters, nestedFilters_);
            DARABONBA_PTR_TO_JSON(Op, op_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, Filters& obj) { 
            DARABONBA_PTR_FROM_JSON(Column, column_);
            DARABONBA_PTR_FROM_JSON(NestedFilterCombination, nestedFilterCombination_);
            DARABONBA_PTR_FROM_JSON(NestedFilters, nestedFilters_);
            DARABONBA_PTR_FROM_JSON(Op, op_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          Filters() = default ;
          Filters(const Filters &) = default ;
          Filters(Filters &&) = default ;
          Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Filters() = default ;
          Filters& operator=(const Filters &) = default ;
          Filters& operator=(Filters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NestedFilters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NestedFilters& obj) { 
              DARABONBA_PTR_TO_JSON(Column, column_);
              DARABONBA_PTR_TO_JSON(Op, op_);
              DARABONBA_PTR_TO_JSON(Values, values_);
            };
            friend void from_json(const Darabonba::Json& j, NestedFilters& obj) { 
              DARABONBA_PTR_FROM_JSON(Column, column_);
              DARABONBA_PTR_FROM_JSON(Op, op_);
              DARABONBA_PTR_FROM_JSON(Values, values_);
            };
            NestedFilters() = default ;
            NestedFilters(const NestedFilters &) = default ;
            NestedFilters(NestedFilters &&) = default ;
            NestedFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NestedFilters() = default ;
            NestedFilters& operator=(const NestedFilters &) = default ;
            NestedFilters& operator=(NestedFilters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->column_ == nullptr
        && this->op_ == nullptr && this->values_ == nullptr; };
            // column Field Functions 
            bool hasColumn() const { return this->column_ != nullptr;};
            void deleteColumn() { this->column_ = nullptr;};
            inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
            inline NestedFilters& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


            // op Field Functions 
            bool hasOp() const { return this->op_ != nullptr;};
            void deleteOp() { this->op_ = nullptr;};
            inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
            inline NestedFilters& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


            // values Field Functions 
            bool hasValues() const { return this->values_ != nullptr;};
            void deleteValues() { this->values_ = nullptr;};
            inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
            inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
            inline NestedFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
            inline NestedFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


          protected:
            shared_ptr<string> column_ {};
            shared_ptr<string> op_ {};
            shared_ptr<vector<string>> values_ {};
          };

          virtual bool empty() const override { return this->column_ == nullptr
        && this->nestedFilterCombination_ == nullptr && this->nestedFilters_ == nullptr && this->op_ == nullptr && this->values_ == nullptr; };
          // column Field Functions 
          bool hasColumn() const { return this->column_ != nullptr;};
          void deleteColumn() { this->column_ = nullptr;};
          inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
          inline Filters& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


          // nestedFilterCombination Field Functions 
          bool hasNestedFilterCombination() const { return this->nestedFilterCombination_ != nullptr;};
          void deleteNestedFilterCombination() { this->nestedFilterCombination_ = nullptr;};
          inline string getNestedFilterCombination() const { DARABONBA_PTR_GET_DEFAULT(nestedFilterCombination_, "") };
          inline Filters& setNestedFilterCombination(string nestedFilterCombination) { DARABONBA_PTR_SET_VALUE(nestedFilterCombination_, nestedFilterCombination) };


          // nestedFilters Field Functions 
          bool hasNestedFilters() const { return this->nestedFilters_ != nullptr;};
          void deleteNestedFilters() { this->nestedFilters_ = nullptr;};
          inline const vector<Filters::NestedFilters> & getNestedFilters() const { DARABONBA_PTR_GET_CONST(nestedFilters_, vector<Filters::NestedFilters>) };
          inline vector<Filters::NestedFilters> getNestedFilters() { DARABONBA_PTR_GET(nestedFilters_, vector<Filters::NestedFilters>) };
          inline Filters& setNestedFilters(const vector<Filters::NestedFilters> & nestedFilters) { DARABONBA_PTR_SET_VALUE(nestedFilters_, nestedFilters) };
          inline Filters& setNestedFilters(vector<Filters::NestedFilters> && nestedFilters) { DARABONBA_PTR_SET_RVALUE(nestedFilters_, nestedFilters) };


          // op Field Functions 
          bool hasOp() const { return this->op_ != nullptr;};
          void deleteOp() { this->op_ = nullptr;};
          inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
          inline Filters& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The column name.
          shared_ptr<string> column_ {};
          shared_ptr<string> nestedFilterCombination_ {};
          shared_ptr<vector<Filters::NestedFilters>> nestedFilters_ {};
          // The operator.
          shared_ptr<string> op_ {};
          // The values that are used together with the operator.
          shared_ptr<vector<string>> values_ {};
        };

        class Calculations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Calculations& obj) { 
            DARABONBA_PTR_TO_JSON(Column, column_);
            DARABONBA_PTR_TO_JSON(Op, op_);
          };
          friend void from_json(const Darabonba::Json& j, Calculations& obj) { 
            DARABONBA_PTR_FROM_JSON(Column, column_);
            DARABONBA_PTR_FROM_JSON(Op, op_);
          };
          Calculations() = default ;
          Calculations(const Calculations &) = default ;
          Calculations(Calculations &&) = default ;
          Calculations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Calculations() = default ;
          Calculations& operator=(const Calculations &) = default ;
          Calculations& operator=(Calculations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->column_ == nullptr
        && this->op_ == nullptr; };
          // column Field Functions 
          bool hasColumn() const { return this->column_ != nullptr;};
          void deleteColumn() { this->column_ = nullptr;};
          inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
          inline Calculations& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


          // op Field Functions 
          bool hasOp() const { return this->op_ != nullptr;};
          void deleteOp() { this->op_ = nullptr;};
          inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
          inline Calculations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        protected:
          // The column name.
          shared_ptr<string> column_ {};
          // The operator.
          shared_ptr<string> op_ {};
        };

        virtual bool empty() const override { return this->breakdowns_ == nullptr
        && this->calculations_ == nullptr && this->endTime_ == nullptr && this->filterCombination_ == nullptr && this->filters_ == nullptr && this->granularity_ == nullptr
        && this->limit_ == nullptr && this->offset_ == nullptr && this->orders_ == nullptr && this->startTime_ == nullptr && this->timeRange_ == nullptr; };
        // breakdowns Field Functions 
        bool hasBreakdowns() const { return this->breakdowns_ != nullptr;};
        void deleteBreakdowns() { this->breakdowns_ = nullptr;};
        inline const vector<string> & getBreakdowns() const { DARABONBA_PTR_GET_CONST(breakdowns_, vector<string>) };
        inline vector<string> getBreakdowns() { DARABONBA_PTR_GET(breakdowns_, vector<string>) };
        inline Parameters& setBreakdowns(const vector<string> & breakdowns) { DARABONBA_PTR_SET_VALUE(breakdowns_, breakdowns) };
        inline Parameters& setBreakdowns(vector<string> && breakdowns) { DARABONBA_PTR_SET_RVALUE(breakdowns_, breakdowns) };


        // calculations Field Functions 
        bool hasCalculations() const { return this->calculations_ != nullptr;};
        void deleteCalculations() { this->calculations_ = nullptr;};
        inline const vector<Parameters::Calculations> & getCalculations() const { DARABONBA_PTR_GET_CONST(calculations_, vector<Parameters::Calculations>) };
        inline vector<Parameters::Calculations> getCalculations() { DARABONBA_PTR_GET(calculations_, vector<Parameters::Calculations>) };
        inline Parameters& setCalculations(const vector<Parameters::Calculations> & calculations) { DARABONBA_PTR_SET_VALUE(calculations_, calculations) };
        inline Parameters& setCalculations(vector<Parameters::Calculations> && calculations) { DARABONBA_PTR_SET_RVALUE(calculations_, calculations) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Parameters& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // filterCombination Field Functions 
        bool hasFilterCombination() const { return this->filterCombination_ != nullptr;};
        void deleteFilterCombination() { this->filterCombination_ = nullptr;};
        inline string getFilterCombination() const { DARABONBA_PTR_GET_DEFAULT(filterCombination_, "") };
        inline Parameters& setFilterCombination(string filterCombination) { DARABONBA_PTR_SET_VALUE(filterCombination_, filterCombination) };


        // filters Field Functions 
        bool hasFilters() const { return this->filters_ != nullptr;};
        void deleteFilters() { this->filters_ = nullptr;};
        inline const vector<Parameters::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Parameters::Filters>) };
        inline vector<Parameters::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<Parameters::Filters>) };
        inline Parameters& setFilters(const vector<Parameters::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
        inline Parameters& setFilters(vector<Parameters::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline int32_t getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, 0) };
        inline Parameters& setGranularity(int32_t granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
        inline Parameters& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
        inline Parameters& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // orders Field Functions 
        bool hasOrders() const { return this->orders_ != nullptr;};
        void deleteOrders() { this->orders_ = nullptr;};
        inline const vector<Parameters::Orders> & getOrders() const { DARABONBA_PTR_GET_CONST(orders_, vector<Parameters::Orders>) };
        inline vector<Parameters::Orders> getOrders() { DARABONBA_PTR_GET(orders_, vector<Parameters::Orders>) };
        inline Parameters& setOrders(const vector<Parameters::Orders> & orders) { DARABONBA_PTR_SET_VALUE(orders_, orders) };
        inline Parameters& setOrders(vector<Parameters::Orders> && orders) { DARABONBA_PTR_SET_RVALUE(orders_, orders) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Parameters& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // timeRange Field Functions 
        bool hasTimeRange() const { return this->timeRange_ != nullptr;};
        void deleteTimeRange() { this->timeRange_ = nullptr;};
        inline int64_t getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, 0L) };
        inline Parameters& setTimeRange(int64_t timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


      protected:
        // Specifies whether to further split the dataset based on the column name.
        shared_ptr<vector<string>> breakdowns_ {};
        // The operator that is used to calculate the specified column.
        shared_ptr<vector<Parameters::Calculations>> calculations_ {};
        // The timestamp that specifies the end of the time range to query. Unit: milliseconds.
        shared_ptr<int64_t> endTime_ {};
        // The logic used to filter the combination of conditions.
        shared_ptr<string> filterCombination_ {};
        // The filter conditions.
        shared_ptr<vector<Parameters::Filters>> filters_ {};
        // The minimum time unit for querying time series data. Minimum value: 1. Unit: seconds. The value of this parameter is a recommended value. The actual value returned shall prevail.
        shared_ptr<int32_t> granularity_ {};
        // The maximum number of events to query. Valid values: 1 to 10000.
        shared_ptr<int32_t> limit_ {};
        // The offset of the start position for this query. The offset starts from 0.
        shared_ptr<int32_t> offset_ {};
        // The order of the query results. This parameter is valid only if you set QueryType to table.
        shared_ptr<vector<Parameters::Orders>> orders_ {};
        // The timestamp that specifies the beginning of the time range to query. Unit: milliseconds.
        shared_ptr<int64_t> startTime_ {};
        // The time range during which events are queried. Minimum value: 1000. Unit: milliseconds.
        shared_ptr<int64_t> timeRange_ {};
      };

      virtual bool empty() const override { return this->parameters_ == nullptr
        && this->queryType_ == nullptr && this->schemaId_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const Body::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Body::Parameters) };
      inline Body::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Body::Parameters) };
      inline Body& setParameters(const Body::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Body& setParameters(Body::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // queryType Field Functions 
      bool hasQueryType() const { return this->queryType_ != nullptr;};
      void deleteQueryType() { this->queryType_ = nullptr;};
      inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
      inline Body& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


      // schemaId Field Functions 
      bool hasSchemaId() const { return this->schemaId_ != nullptr;};
      void deleteSchemaId() { this->schemaId_ = nullptr;};
      inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
      inline Body& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    protected:
      // The query parameters.
      // 
      // This parameter is required.
      shared_ptr<Body::Parameters> parameters_ {};
      // The query type. Valid values:
      // 
      // *   **timeseries**: queries time series data.
      // *   **table**: queries table data.
      // *   **timeseries_and_table**: queries time series data and table data at the same time.
      // 
      // This parameter is required.
      shared_ptr<string> queryType_ {};
      // The schema ID.
      // 
      // This parameter is required.
      shared_ptr<string> schemaId_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->busName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EventCenterQueryEventsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, EventCenterQueryEventsRequest::Body) };
    inline EventCenterQueryEventsRequest::Body getBody() { DARABONBA_PTR_GET(body_, EventCenterQueryEventsRequest::Body) };
    inline EventCenterQueryEventsRequest& setBody(const EventCenterQueryEventsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EventCenterQueryEventsRequest& setBody(EventCenterQueryEventsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // busName Field Functions 
    bool hasBusName() const { return this->busName_ != nullptr;};
    void deleteBusName() { this->busName_ = nullptr;};
    inline string getBusName() const { DARABONBA_PTR_GET_DEFAULT(busName_, "") };
    inline EventCenterQueryEventsRequest& setBusName(string busName) { DARABONBA_PTR_SET_VALUE(busName_, busName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EventCenterQueryEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EventCenterQueryEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The request body.
    // 
    // This parameter is required.
    shared_ptr<EventCenterQueryEventsRequest::Body> body_ {};
    // The name of the event bus.
    shared_ptr<string> busName_ {};
    // The number of entries per page. Valid values: 0 to 10000. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // 用来标记当前开始读取的位置。置空表示从头开始。
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
