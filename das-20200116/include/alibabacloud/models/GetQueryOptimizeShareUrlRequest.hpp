// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZESHAREURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZESHAREURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeShareUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeShareUrlRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeShareUrlRequest& obj) { 
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
    GetQueryOptimizeShareUrlRequest() = default ;
    GetQueryOptimizeShareUrlRequest(const GetQueryOptimizeShareUrlRequest &) = default ;
    GetQueryOptimizeShareUrlRequest(GetQueryOptimizeShareUrlRequest &&) = default ;
    GetQueryOptimizeShareUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeShareUrlRequest() = default ;
    GetQueryOptimizeShareUrlRequest& operator=(const GetQueryOptimizeShareUrlRequest &) = default ;
    GetQueryOptimizeShareUrlRequest& operator=(GetQueryOptimizeShareUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && this->dbNames_ == nullptr && this->engine_ == nullptr && this->instanceIds_ == nullptr && this->keywords_ == nullptr && this->logicalOperator_ == nullptr
        && this->onlyOptimizedSql_ == nullptr && this->orderBy_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr
        && this->rules_ == nullptr && this->sqlIds_ == nullptr && this->tagNames_ == nullptr && this->time_ == nullptr && this->user_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GetQueryOptimizeShareUrlRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string getDbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline GetQueryOptimizeShareUrlRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeShareUrlRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeShareUrlRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetQueryOptimizeShareUrlRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string getLogicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline GetQueryOptimizeShareUrlRequest& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // onlyOptimizedSql Field Functions 
    bool hasOnlyOptimizedSql() const { return this->onlyOptimizedSql_ != nullptr;};
    void deleteOnlyOptimizedSql() { this->onlyOptimizedSql_ = nullptr;};
    inline bool getOnlyOptimizedSql() const { DARABONBA_PTR_GET_DEFAULT(onlyOptimizedSql_, false) };
    inline GetQueryOptimizeShareUrlRequest& setOnlyOptimizedSql(bool onlyOptimizedSql) { DARABONBA_PTR_SET_VALUE(onlyOptimizedSql_, onlyOptimizedSql) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetQueryOptimizeShareUrlRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetQueryOptimizeShareUrlRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQueryOptimizeShareUrlRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeShareUrlRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline GetQueryOptimizeShareUrlRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // sqlIds Field Functions 
    bool hasSqlIds() const { return this->sqlIds_ != nullptr;};
    void deleteSqlIds() { this->sqlIds_ = nullptr;};
    inline string getSqlIds() const { DARABONBA_PTR_GET_DEFAULT(sqlIds_, "") };
    inline GetQueryOptimizeShareUrlRequest& setSqlIds(string sqlIds) { DARABONBA_PTR_SET_VALUE(sqlIds_, sqlIds) };


    // tagNames Field Functions 
    bool hasTagNames() const { return this->tagNames_ != nullptr;};
    void deleteTagNames() { this->tagNames_ = nullptr;};
    inline string getTagNames() const { DARABONBA_PTR_GET_DEFAULT(tagNames_, "") };
    inline GetQueryOptimizeShareUrlRequest& setTagNames(string tagNames) { DARABONBA_PTR_SET_VALUE(tagNames_, tagNames) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline GetQueryOptimizeShareUrlRequest& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetQueryOptimizeShareUrlRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // Specifies whether to sort the returned entries in ascending order. Default value: **true**. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> asc_ {};
    // The name of the database to be queried.
    shared_ptr<string> dbNames_ {};
    // The database engine. Valid values:
    // 
    // *   **MySQL**: ApsaraDB RDS for MySQL
    // *   **PolarDBMySQL**: PolarDB for MySQL
    // *   **PostgreSQL**: ApsaraDB RDS for PostgreSQL
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    // The keywords of the SQL template. Separate multiple keywords with spaces.
    shared_ptr<string> keywords_ {};
    // The logical relationship between multiple keywords. Valid values:
    // 
    // *   **or**
    // *   **and**
    shared_ptr<string> logicalOperator_ {};
    // Specifies whether to query only SQL templates that need to be optimized. Default value: **false**. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> onlyOptimizedSql_ {};
    // The field by which to sort the returned entries. Default value: **count**. Valid values:
    // 
    // *   **count**: the number of executions.
    // *   **maxQueryTime**: the longest execution duration.
    // *   **avgQueryTime**: the average execution duration.
    // *   **maxLockTime**: the longest lock wait duration.
    // *   **avgLockTime**: the average lock wait duration.
    // *   **maxRowsExamined**: the largest number of scanned rows.
    // *   **avgRowsExamined**: the average number of scanned rows.
    // *   **maxRowsSent**: the largest number of returned rows.
    // *   **avgRowsSent**: the average number of returned rows.
    shared_ptr<string> orderBy_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the instance resides. Valid values:
    // 
    // *   **cn-china**: Chinese mainland
    // *   **cn-hongkong**: China (Hong Kong)
    // *   **ap-southeast-1**: Singapore
    // 
    // This parameter takes effect only if **InstanceIds** is left empty. If you leave **InstanceIds** empty, the system obtains data from the region set by **Region**. By default, Region is set to **cn-china**. If you specify **InstanceIds**, **Region** does not take effect and the system obtains data from the region in which the first specified instance resides.****
    // 
    // >  If your instances reside in the regions in the Chinese mainland, set this parameter to **cn-china**.
    shared_ptr<string> region_ {};
    // The tags that are used to filter SQL templates. Separate multiple tags with commas (,). For more information, see [Query governance](https://help.aliyun.com/document_detail/290038.html).
    shared_ptr<string> rules_ {};
    // The SQL template IDs. You can call the [GetQueryOptimizeExecErrorStats](https://help.aliyun.com/document_detail/405261.html) operation to obtain the SQL template IDs.
    shared_ptr<string> sqlIds_ {};
    // A reserved parameter.
    shared_ptr<string> tagNames_ {};
    // The date to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> time_ {};
    // The account of the database to be queried.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
