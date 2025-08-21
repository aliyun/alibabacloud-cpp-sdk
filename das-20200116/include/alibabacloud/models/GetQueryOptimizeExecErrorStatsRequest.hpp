// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeExecErrorStatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorStatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorStatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetQueryOptimizeExecErrorStatsRequest() = default ;
    GetQueryOptimizeExecErrorStatsRequest(const GetQueryOptimizeExecErrorStatsRequest &) = default ;
    GetQueryOptimizeExecErrorStatsRequest(GetQueryOptimizeExecErrorStatsRequest &&) = default ;
    GetQueryOptimizeExecErrorStatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorStatsRequest() = default ;
    GetQueryOptimizeExecErrorStatsRequest& operator=(const GetQueryOptimizeExecErrorStatsRequest &) = default ;
    GetQueryOptimizeExecErrorStatsRequest& operator=(GetQueryOptimizeExecErrorStatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asc_ != nullptr
        && this->dbNames_ != nullptr && this->engine_ != nullptr && this->instanceIds_ != nullptr && this->keywords_ != nullptr && this->logicalOperator_ != nullptr
        && this->orderBy_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->region_ != nullptr && this->time_ != nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline string asc() const { DARABONBA_PTR_GET_DEFAULT(asc_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setAsc(string asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline string dbNames() const { DARABONBA_PTR_GET_DEFAULT(dbNames_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setDbNames(string dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string keywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string logicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetQueryOptimizeExecErrorStatsRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


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
    // The field by which to sort the returned entries. Only error_count is supported, which specifies that the entries are sorted based on the number of failed executions.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    // 
    // This parameter is required.
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
    // The time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
