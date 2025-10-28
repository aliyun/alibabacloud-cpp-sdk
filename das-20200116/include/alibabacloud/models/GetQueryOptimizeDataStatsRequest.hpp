// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_TO_JSON(OnlyOptimizedSql, onlyOptimizedSql_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SqlIds, sqlIds_);
      DARABONBA_PTR_TO_JSON(TagNames, tagNames_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_FROM_JSON(OnlyOptimizedSql, onlyOptimizedSql_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SqlIds, sqlIds_);
      DARABONBA_PTR_FROM_JSON(TagNames, tagNames_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetQueryOptimizeDataStatsRequest() = default ;
    GetQueryOptimizeDataStatsRequest(const GetQueryOptimizeDataStatsRequest &) = default ;
    GetQueryOptimizeDataStatsRequest(GetQueryOptimizeDataStatsRequest &&) = default ;
    GetQueryOptimizeDataStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataStatsRequest() = default ;
    GetQueryOptimizeDataStatsRequest& operator=(const GetQueryOptimizeDataStatsRequest &) = default ;
    GetQueryOptimizeDataStatsRequest& operator=(GetQueryOptimizeDataStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && return this->dbNames_ == nullptr && return this->engine_ == nullptr && return this->instanceIds_ == nullptr && return this->keywords_ == nullptr && return this->logicalOperator_ == nullptr
        && return this->onlyOptimizedSql_ == nullptr && return this->orderBy_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->region_ == nullptr
        && return this->rules_ == nullptr && return this->sqlIds_ == nullptr && return this->tagNames_ == nullptr && return this->time_ == nullptr && return this->user_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline string asc() const { DARABONBA_PTR_GET_DEFAULT(asc_, "") };
    inline GetQueryOptimizeDataStatsRequest& setAsc(string asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline GetQueryOptimizeDataStatsRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeDataStatsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeDataStatsRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetQueryOptimizeDataStatsRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string logicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline GetQueryOptimizeDataStatsRequest& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // onlyOptimizedSql Field Functions 
    bool hasOnlyOptimizedSql() const { return this->onlyOptimizedSql_ != nullptr;};
    void deleteOnlyOptimizedSql() { this->onlyOptimizedSql_ = nullptr;};
    inline string onlyOptimizedSql() const { DARABONBA_PTR_GET_DEFAULT(onlyOptimizedSql_, "") };
    inline GetQueryOptimizeDataStatsRequest& setOnlyOptimizedSql(string onlyOptimizedSql) { DARABONBA_PTR_SET_VALUE(onlyOptimizedSql_, onlyOptimizedSql) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetQueryOptimizeDataStatsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetQueryOptimizeDataStatsRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetQueryOptimizeDataStatsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeDataStatsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline GetQueryOptimizeDataStatsRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // sqlIds Field Functions 
    bool hasSqlIds() const { return this->sqlIds_ != nullptr;};
    void deleteSqlIds() { this->sqlIds_ = nullptr;};
    inline string sqlIds() const { DARABONBA_PTR_GET_DEFAULT(sqlIds_, "") };
    inline GetQueryOptimizeDataStatsRequest& setSqlIds(string sqlIds) { DARABONBA_PTR_SET_VALUE(sqlIds_, sqlIds) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string tagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline GetQueryOptimizeDataStatsRequest& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetQueryOptimizeDataStatsRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetQueryOptimizeDataStatsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // Specifies whether to sort the returned entries in ascending order. Default value: **true**. Valid values:
    // 
    // *   **true**: sorts the returned entries in ascending order.
    // *   **false**: does not sort the returned entries in ascending order.
    std::shared_ptr<string> asc_ = nullptr;
    // The name of the database to be queried.
    std::shared_ptr<string> dbNames_ = nullptr;
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PolarDBMySQL**
    // *   **PostgreSQL**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The instance IDs. Separate multiple IDs with commas (,).
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The keywords of the SQL template. Separate multiple keywords with spaces.
    std::shared_ptr<string> keywords_ = nullptr;
    // The logical relationship between multiple keywords. Valid values:
    // 
    // *   **or**
    // *   **and**
    std::shared_ptr<string> logicalOperator_ = nullptr;
    // Specifies whether to query only SQL templates that need to be optimized. Default value: **false**. Valid values:
    // 
    // *   **true**: queries only SQL templates that need to be optimized.
    // *   **false**: does not query only SQL statements that need to be optimized.
    std::shared_ptr<string> onlyOptimizedSql_ = nullptr;
    // The field by which to sort the returned entries. Default value: **count**. Valid values:
    // 
    // *   **count**: the number of executions.
    // *   **maxQueryTime**: the longest execution time.
    // *   **avgQueryTime**: the average execution time.
    // *   **maxLockTime**: the longest lock wait time.
    // *   **avgLockTime**: the longest lock wait time.
    // *   **maxRowsExamined**: the largest number of scanned rows.
    // *   **avgRowsExamined**: the average number of scanned rows.
    // *   **maxRowsSent**: the largest number of returned rows.
    // *   **avgRowsSent**: the average number of returned rows.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The region in which the instance resides. Valid values:
    // 
    // *   **cn-china**: Chinese mainland
    // *   **cn-hongkong**: China (Hong Kong)
    // *   **ap-southeast-1**: Singapore
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region set by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  Set this parameter to **cn-china** for the instances that are created in the regions in the Chinese mainland.
    std::shared_ptr<string> region_ = nullptr;
    // The tags that are used to filter SQL templates. Separate multiple tags with commas (,). For more information, see [Query governance](https://help.aliyun.com/document_detail/290038.html).
    std::shared_ptr<string> rules_ = nullptr;
    // The SQL template ID. You can query the ID of a template by calling the [GetQueryOptimizeExecErrorStats](https://help.aliyun.com/document_detail/405235.html) operation.
    std::shared_ptr<string> sqlIds_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<string> tagNames_ = nullptr;
    // The time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> time_ = nullptr;
    // The account of the database to be queried.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
