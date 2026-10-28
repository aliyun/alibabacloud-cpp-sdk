// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLINSIGHTSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLINSIGHTSTATISTICREQUEST_HPP_
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
  class DescribeSqlInsightStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlInsightStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DoFillTrend, doFillTrend_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlInsightStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DoFillTrend, doFillTrend_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSqlInsightStatisticRequest() = default ;
    DescribeSqlInsightStatisticRequest(const DescribeSqlInsightStatisticRequest &) = default ;
    DescribeSqlInsightStatisticRequest(DescribeSqlInsightStatisticRequest &&) = default ;
    DescribeSqlInsightStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlInsightStatisticRequest() = default ;
    DescribeSqlInsightStatisticRequest& operator=(const DescribeSqlInsightStatisticRequest &) = default ;
    DescribeSqlInsightStatisticRequest& operator=(DescribeSqlInsightStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the conditional filter. The key is not case-sensitive. For active values, see the metric description of the **Filters** parameter.
      shared_ptr<string> key_ {};
      // The value of the filter condition. If the value is null or an empty string, the filter condition is ignored. Separate multiple values with commas. The specific upper limit depends on the corresponding key.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->asc_ == nullptr
        && this->consoleContext_ == nullptr && this->dbName_ == nullptr && this->doFillTrend_ == nullptr && this->endTime_ == nullptr && this->filters_ == nullptr
        && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->keyword_ == nullptr && this->nodeId_ == nullptr && this->orderBy_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->role_ == nullptr && this->sqlType_ == nullptr && this->startTime_ == nullptr
        && this->templateId_ == nullptr && this->type_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline DescribeSqlInsightStatisticRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline DescribeSqlInsightStatisticRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeSqlInsightStatisticRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // doFillTrend Field Functions 
    bool hasDoFillTrend() const { return this->doFillTrend_ != nullptr;};
    void deleteDoFillTrend() { this->doFillTrend_ = nullptr;};
    inline bool getDoFillTrend() const { DARABONBA_PTR_GET_DEFAULT(doFillTrend_, false) };
    inline DescribeSqlInsightStatisticRequest& setDoFillTrend(bool doFillTrend) { DARABONBA_PTR_SET_VALUE(doFillTrend_, doFillTrend) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSqlInsightStatisticRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeSqlInsightStatisticRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeSqlInsightStatisticRequest::Filters>) };
    inline vector<DescribeSqlInsightStatisticRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeSqlInsightStatisticRequest::Filters>) };
    inline DescribeSqlInsightStatisticRequest& setFilters(const vector<DescribeSqlInsightStatisticRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeSqlInsightStatisticRequest& setFilters(vector<DescribeSqlInsightStatisticRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSqlInsightStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSqlInsightStatisticRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeSqlInsightStatisticRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSqlInsightStatisticRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeSqlInsightStatisticRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeSqlInsightStatisticRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlInsightStatisticRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeSqlInsightStatisticRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSqlInsightStatisticRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSqlInsightStatisticRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSqlInsightStatisticRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSqlInsightStatisticRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The sort order. Default value: **false** (descending order). Valid values:
    // 
    // - **true**: ascending order.
    // - **false**: descending order.
    shared_ptr<bool> asc_ {};
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The name of the database used to filter the results.
    // 
    // > In the aggregation storage links of some instances, you can specify multiple database names separated by commas. In other links, you can specify only a single database name.
    shared_ptr<string> dbName_ {};
    // Specifies whether to populate time series trend data for each statistical result, which corresponds to the **Trend** field in the response. Default value: **true**. Valid values:
    // 
    // - **true**: populates trend data.
    // - **false**: does not populate trend data.
    // 
    // > If this parameter is set to true, the system additionally queries data for each time slice for each result, which significantly increases the query overhead. If the trend filling capability is not enabled for the instance, this parameter does not take effect.
    shared_ptr<bool> doFillTrend_ {};
    // The end time of the query. The value is a UNIX timestamp in milliseconds. The system rounds up the value to the nearest minute.
    // 
    // > The time span between **EndTime** and **StartTime** cannot exceed 7 days. If **EndTime** is earlier than the time when the SQL Explorer feature was enabled for the instance, an error indicating that the query time is earlier than the available time is returned.
    // 
    // > Due to delays in data aggregation, the actual effective value is truncated to a few minutes before the current time. Therefore, data from the most recent few minutes may not be queried.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The list of structured filter conditions. The conditions are passed as key-value pairs. The POP format is **Filters.N.Key** and **Filters.N.Value**. A maximum of 100 pairs can be specified. **Key** is not case-sensitive. Entries with an empty **Value** are ignored. Valid values of **Key** that take effect in this operation:
    // 
    // - **keyWord**: the keywords. The keywords are split into multiple words by whitespace characters and take effect together with the **Keyword** parameter.
    // - **hostAddress**: the access source addresses. Separate multiple addresses with commas. This key takes effect together with **TemplateId** when **Type** is set to **OriginHost**.
    // - **accountName**: the database usernames. Separate multiple usernames with commas.
    // - **dbName**: the database names. Separate multiple names with commas. This key takes effect together with the **DbName** parameter.
    // - **sqlType**: the SQL statement types. Separate multiple types with commas. This key takes effect together with the **SqlType** parameter.
    // - **sqlId**: the SQL template IDs. Separate multiple IDs with commas. This key takes effect together with **TemplateId** when **Type** is set to **SQL**.
    // - **insRole**: the primary/secondary role. Valid values are **master** and **slave**. This value is case-sensitive.
    // 
    // > If you specify a **Key** other than the preceding values, the key is ignored.
    // 
    // > This parameter takes effect only in the aggregation storage links of some instances. In other links, this parameter is completely ignored.
    shared_ptr<vector<DescribeSqlInsightStatisticRequest::Filters>> filters_ {};
    // The database instance ID.
    // 
    // > This operation supports ApsaraDB RDS for MySQL, PolarDB for MySQL, PolarDB-X, ApsaraDB RDS for PostgreSQL, PolarDB for PostgreSQL, ApsaraDB RDS for SQL Server, and Lindorm instances that have the SQL Explorer feature enabled. MongoDB and Redis instances are not supported. If you invoke this operation for unsupported instances, a fault indicating that the operation is not supported is returned.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The idempotent ID for querying SQL Explorer data. You do not need to specify this parameter for common queries.
    shared_ptr<string> jobId_ {};
    // The keywords used to retrieve SQL templates by fuzzy match based on the SQL template content. Separate multiple keywords with spaces. The system first performs keyword match to retrieve up to 1,000 corresponding SQL templates, and then performs aggregation statistics based on these templates. If no matching templates are found, an empty list is returned.
    // 
    // > This parameter does not take effect when **Type** is set to **SQL** and **TemplateId** is specified.
    shared_ptr<string> keyword_ {};
    // The ID of the node in the instance. This parameter is used to narrow the statistics scope to the specified node. Only a single node ID is supported. Multiple node IDs separated by commas are not supported.
    // 
    // > This parameter is required only for instances that consist of multiple nodes, such as PolarDB-X and Lindorm instances. You can ignore this parameter for single-node instances.
    shared_ptr<string> nodeId_ {};
    // The field by which to sort the results. If this parameter is not specified or an unsupported value is specified, the results are sorted by **rt** (total response time). Valid values:
    // 
    // - Response time: **rt**, **avgRt**, **maxRt**, **minRt**, and **rtRate**.
    // - Executions: **count**, **countRate**, and **timestamp**.
    // - Scanned rows: **rowsExamined** and **avgRowsExamined**.
    // - Returned rows: **rowsReturned**, **totalRowsReturned**, **avgRowsReturned**, **maxRowsReturned**, **minRowsReturned**, **maxRowReturned**, and **minRowReturned**.
    // - Logical reads: **logicalRead**, **totalLogicalRead**, **avgLogicalRead**, **maxLogicalRead**, and **minLogicalRead**.
    // - Physical reads: **physicalRead**, **totalPhysicalRead**, **avgPhysicalRead**, **maxPhysicalRead**, and **minPhysicalRead**.
    // - Logical writes (valid only for SQL Server instances): **writes**, **totalWrites**, **avgWrites**, **maxWrites**, and **minWrites**.
    // - CPU time (valid only for SQL Server instances): **totalCpuTime**, **avgCpuTime**, **maxCpuTime**, and **minCpuTime**.
    // - PolarDB-X compute nodes (valid only when **Role** is set to **polarx_cn**): **scnt**, **avgScnt**, **rows**, **avgRows**, **frows**, and **avgFrows**.
    // - Affected rows (valid only for Lindorm instances): **totalAffectRows** and **avgAffectRows**.
    // 
    // > **timestamp** indicates that the results are sorted by data timestamp. The timestamp is a UNIX timestamp in milliseconds.
    // 
    // > Only the first letter is case-insensitive. The remaining characters must exactly match the preceding values. For example, **AvgRt** is valid, but **avgrt** is invalid.
    shared_ptr<string> orderBy_ {};
    // The page number. Pages start from page 1. If this parameter is not specified, the default value 1 is used.
    shared_ptr<int32_t> pageNo_ {};
    // The number of statistical entries to return on each page. If this parameter is not specified, the default value 10 is used. The maximum value is 2000.
    // 
    // > If the value exceeds 2000, an InvalidParams error is returned instead of being truncated.
    // 
    // > When statistics are aggregated by access source or database user (when **Type** is set to **FullRequestOrigin** or **FullRequestUser**), a value greater than 100 is reset to 10 in some aggregation storage links.
    shared_ptr<int32_t> pageSize_ {};
    // The role of the instance node. The value is not case-sensitive. If this parameter is not specified, the role is automatically parsed based on **InstanceId**. Valid values:
    // 
    // - **polarx_cn**: PolarDB-X compute node.
    // - **polarx_dn**: PolarDB-X storage node.
    // 
    // > This value affects the scope of returned fields. For example, **Scnt**, **Rows**, and **Frows** are returned only when the value is **polarx_cn**.
    shared_ptr<string> role_ {};
    // The SQL statement type used to filter the results. Valid values:
    // 
    // - **select**
    // - **insert**
    // - **update**
    // - **delete**
    // 
    // > The values must be in lowercase. In the aggregation storage links of some instances, you can specify multiple values separated by commas. In other links, you can specify only a single value.
    shared_ptr<string> sqlType_ {};
    // The start time of the query. The value is a UNIX timestamp in milliseconds. The system rounds down the value to the nearest minute.
    // 
    // > The start time cannot be more than 30 days before the current time. If the specified start time is earlier than the time when the SQL Explorer feature was enabled for the instance, the start time is automatically adjusted to the enabling time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The identifier of the statistics object. The meaning varies based on the value of **Type**. Valid values:
    // 
    // - When **Type** is set to **SQL**: specify the SQL template ID, which is the **SqlId** in the response.
    // - When **Type** is set to **OriginHost**: specify the access source address.
    // - When **Type** is set to **User**: specify the database username.
    // 
    // > This parameter does not take effect when **Type** is empty, **FullRequestOrigin**, or **FullRequestUser**.
    // 
    // > When **Type** is set to **SQL**, you can specify multiple template IDs separated by commas. In this case, **Keyword** does not take effect.
    shared_ptr<string> templateId_ {};
    // The aggregation or filter dimension for statistics. The value is not case-sensitive. If this parameter is not specified, the statistics are aggregated by SQL template by default. Valid values:
    // 
    // - **FullRequestOrigin**: aggregates statistics by access source address.
    // - **FullRequestUser**: aggregates statistics by database user.
    // - **SQL**: filters statistics by SQL template. You must also specify **TemplateId** as the SQL template ID.
    // - **OriginHost**: filters statistics by access source. You must also specify **TemplateId** as the source address.
    // - **User**: filters statistics by database user. You must also specify **TemplateId** as the username.
    // 
    // > If you specify a value other than the preceding values, an InvalidParams error is returned.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
