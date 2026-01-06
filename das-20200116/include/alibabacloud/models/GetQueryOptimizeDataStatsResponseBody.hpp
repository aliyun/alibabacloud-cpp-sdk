// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueryOptimizeDataStatsResponseBody() = default ;
    GetQueryOptimizeDataStatsResponseBody(const GetQueryOptimizeDataStatsResponseBody &) = default ;
    GetQueryOptimizeDataStatsResponseBody(GetQueryOptimizeDataStatsResponseBody &&) = default ;
    GetQueryOptimizeDataStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataStatsResponseBody() = default ;
    GetQueryOptimizeDataStatsResponseBody& operator=(const GetQueryOptimizeDataStatsResponseBody &) = default ;
    GetQueryOptimizeDataStatsResponseBody& operator=(GetQueryOptimizeDataStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AvgLockTime, avgLockTime_);
          DARABONBA_PTR_TO_JSON(AvgQueryTime, avgQueryTime_);
          DARABONBA_PTR_TO_JSON(AvgRowsAffected, avgRowsAffected_);
          DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
          DARABONBA_PTR_TO_JSON(AvgRowsSent, avgRowsSent_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Dbname, dbname_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_TO_JSON(MaxQueryTime, maxQueryTime_);
          DARABONBA_PTR_TO_JSON(MaxRowsAffected, maxRowsAffected_);
          DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
          DARABONBA_PTR_TO_JSON(MaxRowsSent, maxRowsSent_);
          DARABONBA_PTR_TO_JSON(Psql, psql_);
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
          DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
          DARABONBA_PTR_TO_JSON(SqlSample, sqlSample_);
          DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgLockTime, avgLockTime_);
          DARABONBA_PTR_FROM_JSON(AvgQueryTime, avgQueryTime_);
          DARABONBA_PTR_FROM_JSON(AvgRowsAffected, avgRowsAffected_);
          DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
          DARABONBA_PTR_FROM_JSON(AvgRowsSent, avgRowsSent_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Dbname, dbname_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_FROM_JSON(MaxQueryTime, maxQueryTime_);
          DARABONBA_PTR_FROM_JSON(MaxRowsAffected, maxRowsAffected_);
          DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
          DARABONBA_PTR_FROM_JSON(MaxRowsSent, maxRowsSent_);
          DARABONBA_PTR_FROM_JSON(Psql, psql_);
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
          DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
          DARABONBA_PTR_FROM_JSON(SqlSample, sqlSample_);
          DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
          DARABONBA_PTR_FROM_JSON(User, user_);
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
        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          RuleList() = default ;
          RuleList(const RuleList &) = default ;
          RuleList(RuleList &&) = default ;
          RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleList() = default ;
          RuleList& operator=(const RuleList &) = default ;
          RuleList& operator=(RuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RuleList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The rule name.
          shared_ptr<string> name_ {};
          // The type of the rule. Valid values:
          // 
          // * **Predefined**
          // * **UserDefined**
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->avgLockTime_ == nullptr
        && this->avgQueryTime_ == nullptr && this->avgRowsAffected_ == nullptr && this->avgRowsExamined_ == nullptr && this->avgRowsSent_ == nullptr && this->count_ == nullptr
        && this->dbname_ == nullptr && this->instanceId_ == nullptr && this->maxLockTime_ == nullptr && this->maxQueryTime_ == nullptr && this->maxRowsAffected_ == nullptr
        && this->maxRowsExamined_ == nullptr && this->maxRowsSent_ == nullptr && this->psql_ == nullptr && this->ruleList_ == nullptr && this->sqlId_ == nullptr
        && this->sqlSample_ == nullptr && this->sqlType_ == nullptr && this->user_ == nullptr; };
        // avgLockTime Field Functions 
        bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
        void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
        inline double getAvgLockTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockTime_, 0.0) };
        inline List& setAvgLockTime(double avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };


        // avgQueryTime Field Functions 
        bool hasAvgQueryTime() const { return this->avgQueryTime_ != nullptr;};
        void deleteAvgQueryTime() { this->avgQueryTime_ = nullptr;};
        inline double getAvgQueryTime() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTime_, 0.0) };
        inline List& setAvgQueryTime(double avgQueryTime) { DARABONBA_PTR_SET_VALUE(avgQueryTime_, avgQueryTime) };


        // avgRowsAffected Field Functions 
        bool hasAvgRowsAffected() const { return this->avgRowsAffected_ != nullptr;};
        void deleteAvgRowsAffected() { this->avgRowsAffected_ = nullptr;};
        inline double getAvgRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(avgRowsAffected_, 0.0) };
        inline List& setAvgRowsAffected(double avgRowsAffected) { DARABONBA_PTR_SET_VALUE(avgRowsAffected_, avgRowsAffected) };


        // avgRowsExamined Field Functions 
        bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
        void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
        inline double getAvgRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(avgRowsExamined_, 0.0) };
        inline List& setAvgRowsExamined(double avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };


        // avgRowsSent Field Functions 
        bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
        void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
        inline double getAvgRowsSent() const { DARABONBA_PTR_GET_DEFAULT(avgRowsSent_, 0.0) };
        inline List& setAvgRowsSent(double avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline List& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // dbname Field Functions 
        bool hasDbname() const { return this->dbname_ != nullptr;};
        void deleteDbname() { this->dbname_ = nullptr;};
        inline string getDbname() const { DARABONBA_PTR_GET_DEFAULT(dbname_, "") };
        inline List& setDbname(string dbname) { DARABONBA_PTR_SET_VALUE(dbname_, dbname) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // maxLockTime Field Functions 
        bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
        void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
        inline double getMaxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0.0) };
        inline List& setMaxLockTime(double maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


        // maxQueryTime Field Functions 
        bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
        void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
        inline double getMaxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0.0) };
        inline List& setMaxQueryTime(double maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


        // maxRowsAffected Field Functions 
        bool hasMaxRowsAffected() const { return this->maxRowsAffected_ != nullptr;};
        void deleteMaxRowsAffected() { this->maxRowsAffected_ = nullptr;};
        inline int64_t getMaxRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(maxRowsAffected_, 0L) };
        inline List& setMaxRowsAffected(int64_t maxRowsAffected) { DARABONBA_PTR_SET_VALUE(maxRowsAffected_, maxRowsAffected) };


        // maxRowsExamined Field Functions 
        bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
        void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
        inline int64_t getMaxRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(maxRowsExamined_, 0L) };
        inline List& setMaxRowsExamined(int64_t maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };


        // maxRowsSent Field Functions 
        bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
        void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
        inline int64_t getMaxRowsSent() const { DARABONBA_PTR_GET_DEFAULT(maxRowsSent_, 0L) };
        inline List& setMaxRowsSent(int64_t maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };


        // psql Field Functions 
        bool hasPsql() const { return this->psql_ != nullptr;};
        void deletePsql() { this->psql_ = nullptr;};
        inline string getPsql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
        inline List& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const vector<List::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<List::RuleList>) };
        inline vector<List::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<List::RuleList>) };
        inline List& setRuleList(const vector<List::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline List& setRuleList(vector<List::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


        // sqlId Field Functions 
        bool hasSqlId() const { return this->sqlId_ != nullptr;};
        void deleteSqlId() { this->sqlId_ = nullptr;};
        inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
        inline List& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


        // sqlSample Field Functions 
        bool hasSqlSample() const { return this->sqlSample_ != nullptr;};
        void deleteSqlSample() { this->sqlSample_ = nullptr;};
        inline string getSqlSample() const { DARABONBA_PTR_GET_DEFAULT(sqlSample_, "") };
        inline List& setSqlSample(string sqlSample) { DARABONBA_PTR_SET_VALUE(sqlSample_, sqlSample) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline List& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline List& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The average lock wait time. Unit: seconds.
        shared_ptr<double> avgLockTime_ {};
        // The average query execution time. Unit: seconds.
        shared_ptr<double> avgQueryTime_ {};
        // The average number of rows affected by the SQL statement.
        // 
        // > A value of -1 indicates that this parameter is not collected.
        shared_ptr<double> avgRowsAffected_ {};
        // The average number of scanned rows.
        shared_ptr<double> avgRowsExamined_ {};
        // The average number of returned rows.
        shared_ptr<double> avgRowsSent_ {};
        // The number of times that the SQL template is executed.
        shared_ptr<int32_t> count_ {};
        // The name of the database to which the SQL template belongs.
        shared_ptr<string> dbname_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The longest lock wait time. Unit: seconds.
        shared_ptr<double> maxLockTime_ {};
        // The longest query execution time. Unit: seconds.
        shared_ptr<double> maxQueryTime_ {};
        // The largest number of rows affected by the SQL template.
        // 
        // > A value of -1 indicates that this parameter is not collected.
        shared_ptr<int64_t> maxRowsAffected_ {};
        // The largest number of scanned rows.
        shared_ptr<int64_t> maxRowsExamined_ {};
        // The largest number of returned rows.
        shared_ptr<int64_t> maxRowsSent_ {};
        // The SQL template.
        shared_ptr<string> psql_ {};
        // The information about the rules.
        shared_ptr<vector<List::RuleList>> ruleList_ {};
        // The SQL template ID.
        shared_ptr<string> sqlId_ {};
        // The sample query that took the longest time to execute.
        shared_ptr<string> sqlSample_ {};
        // The type of the SQL statement.
        shared_ptr<string> sqlType_ {};
        // The account of the database.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The reserved parameter.
      shared_ptr<string> extra_ {};
      // The information about the SQL templates.
      shared_ptr<vector<Data::List>> list_ {};
      // The reserved parameter.
      shared_ptr<int32_t> pageNo_ {};
      // The reserved parameter.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQueryOptimizeDataStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQueryOptimizeDataStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQueryOptimizeDataStatsResponseBody::Data) };
    inline GetQueryOptimizeDataStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQueryOptimizeDataStatsResponseBody::Data) };
    inline GetQueryOptimizeDataStatsResponseBody& setData(const GetQueryOptimizeDataStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueryOptimizeDataStatsResponseBody& setData(GetQueryOptimizeDataStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueryOptimizeDataStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueryOptimizeDataStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetQueryOptimizeDataStatsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetQueryOptimizeDataStatsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
