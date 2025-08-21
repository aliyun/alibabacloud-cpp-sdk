// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQueryOptimizeDataStatsResponseBodyDataListRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataStatsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataStatsResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataStatsResponseBodyDataList& obj) { 
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
    GetQueryOptimizeDataStatsResponseBodyDataList() = default ;
    GetQueryOptimizeDataStatsResponseBodyDataList(const GetQueryOptimizeDataStatsResponseBodyDataList &) = default ;
    GetQueryOptimizeDataStatsResponseBodyDataList(GetQueryOptimizeDataStatsResponseBodyDataList &&) = default ;
    GetQueryOptimizeDataStatsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataStatsResponseBodyDataList() = default ;
    GetQueryOptimizeDataStatsResponseBodyDataList& operator=(const GetQueryOptimizeDataStatsResponseBodyDataList &) = default ;
    GetQueryOptimizeDataStatsResponseBodyDataList& operator=(GetQueryOptimizeDataStatsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgLockTime_ != nullptr
        && this->avgQueryTime_ != nullptr && this->avgRowsAffected_ != nullptr && this->avgRowsExamined_ != nullptr && this->avgRowsSent_ != nullptr && this->count_ != nullptr
        && this->dbname_ != nullptr && this->instanceId_ != nullptr && this->maxLockTime_ != nullptr && this->maxQueryTime_ != nullptr && this->maxRowsAffected_ != nullptr
        && this->maxRowsExamined_ != nullptr && this->maxRowsSent_ != nullptr && this->psql_ != nullptr && this->ruleList_ != nullptr && this->sqlId_ != nullptr
        && this->sqlSample_ != nullptr && this->sqlType_ != nullptr && this->user_ != nullptr; };
    // avgLockTime Field Functions 
    bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
    void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
    inline double avgLockTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockTime_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setAvgLockTime(double avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };


    // avgQueryTime Field Functions 
    bool hasAvgQueryTime() const { return this->avgQueryTime_ != nullptr;};
    void deleteAvgQueryTime() { this->avgQueryTime_ = nullptr;};
    inline double avgQueryTime() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTime_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setAvgQueryTime(double avgQueryTime) { DARABONBA_PTR_SET_VALUE(avgQueryTime_, avgQueryTime) };


    // avgRowsAffected Field Functions 
    bool hasAvgRowsAffected() const { return this->avgRowsAffected_ != nullptr;};
    void deleteAvgRowsAffected() { this->avgRowsAffected_ = nullptr;};
    inline double avgRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(avgRowsAffected_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setAvgRowsAffected(double avgRowsAffected) { DARABONBA_PTR_SET_VALUE(avgRowsAffected_, avgRowsAffected) };


    // avgRowsExamined Field Functions 
    bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
    void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
    inline double avgRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(avgRowsExamined_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setAvgRowsExamined(double avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };


    // avgRowsSent Field Functions 
    bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
    void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
    inline double avgRowsSent() const { DARABONBA_PTR_GET_DEFAULT(avgRowsSent_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setAvgRowsSent(double avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dbname Field Functions 
    bool hasDbname() const { return this->dbname_ != nullptr;};
    void deleteDbname() { this->dbname_ = nullptr;};
    inline string dbname() const { DARABONBA_PTR_GET_DEFAULT(dbname_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setDbname(string dbname) { DARABONBA_PTR_SET_VALUE(dbname_, dbname) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxLockTime Field Functions 
    bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
    void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
    inline double maxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setMaxLockTime(double maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


    // maxQueryTime Field Functions 
    bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
    void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
    inline double maxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0.0) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setMaxQueryTime(double maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


    // maxRowsAffected Field Functions 
    bool hasMaxRowsAffected() const { return this->maxRowsAffected_ != nullptr;};
    void deleteMaxRowsAffected() { this->maxRowsAffected_ = nullptr;};
    inline int64_t maxRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(maxRowsAffected_, 0L) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setMaxRowsAffected(int64_t maxRowsAffected) { DARABONBA_PTR_SET_VALUE(maxRowsAffected_, maxRowsAffected) };


    // maxRowsExamined Field Functions 
    bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
    void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
    inline int64_t maxRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(maxRowsExamined_, 0L) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setMaxRowsExamined(int64_t maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };


    // maxRowsSent Field Functions 
    bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
    void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
    inline int64_t maxRowsSent() const { DARABONBA_PTR_GET_DEFAULT(maxRowsSent_, 0L) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setMaxRowsSent(int64_t maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };


    // psql Field Functions 
    bool hasPsql() const { return this->psql_ != nullptr;};
    void deletePsql() { this->psql_ = nullptr;};
    inline string psql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList>) };
    inline vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList>) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setRuleList(const vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setRuleList(vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlSample Field Functions 
    bool hasSqlSample() const { return this->sqlSample_ != nullptr;};
    void deleteSqlSample() { this->sqlSample_ = nullptr;};
    inline string sqlSample() const { DARABONBA_PTR_GET_DEFAULT(sqlSample_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setSqlSample(string sqlSample) { DARABONBA_PTR_SET_VALUE(sqlSample_, sqlSample) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyDataList& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The average lock wait time. Unit: seconds.
    std::shared_ptr<double> avgLockTime_ = nullptr;
    // The average query execution time. Unit: seconds.
    std::shared_ptr<double> avgQueryTime_ = nullptr;
    // The average number of rows affected by the SQL statement.
    // 
    // > A value of -1 indicates that this parameter is not collected.
    std::shared_ptr<double> avgRowsAffected_ = nullptr;
    // The average number of scanned rows.
    std::shared_ptr<double> avgRowsExamined_ = nullptr;
    // The average number of returned rows.
    std::shared_ptr<double> avgRowsSent_ = nullptr;
    // The number of times that the SQL template is executed.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the database to which the SQL template belongs.
    std::shared_ptr<string> dbname_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The longest lock wait time. Unit: seconds.
    std::shared_ptr<double> maxLockTime_ = nullptr;
    // The longest query execution time. Unit: seconds.
    std::shared_ptr<double> maxQueryTime_ = nullptr;
    // The largest number of rows affected by the SQL template.
    // 
    // > A value of -1 indicates that this parameter is not collected.
    std::shared_ptr<int64_t> maxRowsAffected_ = nullptr;
    // The largest number of scanned rows.
    std::shared_ptr<int64_t> maxRowsExamined_ = nullptr;
    // The largest number of returned rows.
    std::shared_ptr<int64_t> maxRowsSent_ = nullptr;
    // The SQL template.
    std::shared_ptr<string> psql_ = nullptr;
    // The information about the rules.
    std::shared_ptr<vector<Models::GetQueryOptimizeDataStatsResponseBodyDataListRuleList>> ruleList_ = nullptr;
    // The SQL template ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The sample query that took the longest time to execute.
    std::shared_ptr<string> sqlSample_ = nullptr;
    // The type of the SQL statement.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The account of the database.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
