// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxPeakMemory, maxPeakMemory_);
      DARABONBA_PTR_TO_JSON(MaxScanSize, maxScanSize_);
      DARABONBA_PTR_TO_JSON(MinPeakMemory, minPeakMemory_);
      DARABONBA_PTR_TO_JSON(MinScanSize, minScanSize_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PatternId, patternId_);
      DARABONBA_PTR_TO_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxPeakMemory, maxPeakMemory_);
      DARABONBA_PTR_FROM_JSON(MaxScanSize, maxScanSize_);
      DARABONBA_PTR_FROM_JSON(MinPeakMemory, minPeakMemory_);
      DARABONBA_PTR_FROM_JSON(MinScanSize, minScanSize_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
      DARABONBA_PTR_FROM_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DescribeDiagnosisRecordsRequest() = default ;
    DescribeDiagnosisRecordsRequest(const DescribeDiagnosisRecordsRequest &) = default ;
    DescribeDiagnosisRecordsRequest(DescribeDiagnosisRecordsRequest &&) = default ;
    DescribeDiagnosisRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisRecordsRequest() = default ;
    DescribeDiagnosisRecordsRequest& operator=(const DescribeDiagnosisRecordsRequest &) = default ;
    DescribeDiagnosisRecordsRequest& operator=(DescribeDiagnosisRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->DBClusterId_ != nullptr && this->database_ != nullptr && this->endTime_ != nullptr && this->keyword_ != nullptr && this->lang_ != nullptr
        && this->maxPeakMemory_ != nullptr && this->maxScanSize_ != nullptr && this->minPeakMemory_ != nullptr && this->minScanSize_ != nullptr && this->order_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->patternId_ != nullptr && this->queryCondition_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroup_ != nullptr && this->startTime_ != nullptr && this->userName_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDiagnosisRecordsRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDiagnosisRecordsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosisRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeDiagnosisRecordsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnosisRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxPeakMemory Field Functions 
    bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
    void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
    inline int64_t maxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMaxPeakMemory(int64_t maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


    // maxScanSize Field Functions 
    bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
    void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
    inline int64_t maxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


    // minPeakMemory Field Functions 
    bool hasMinPeakMemory() const { return this->minPeakMemory_ != nullptr;};
    void deleteMinPeakMemory() { this->minPeakMemory_ = nullptr;};
    inline int64_t minPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(minPeakMemory_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMinPeakMemory(int64_t minPeakMemory) { DARABONBA_PTR_SET_VALUE(minPeakMemory_, minPeakMemory) };


    // minScanSize Field Functions 
    bool hasMinScanSize() const { return this->minScanSize_ != nullptr;};
    void deleteMinScanSize() { this->minScanSize_ = nullptr;};
    inline int64_t minScanSize() const { DARABONBA_PTR_GET_DEFAULT(minScanSize_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMinScanSize(int64_t minScanSize) { DARABONBA_PTR_SET_VALUE(minScanSize_, minScanSize) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeDiagnosisRecordsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiagnosisRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiagnosisRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeDiagnosisRecordsRequest& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string queryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline DescribeDiagnosisRecordsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosisRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeDiagnosisRecordsRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosisRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDiagnosisRecordsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The source IP address.
    // 
    // >  You can call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to query the resource groups, database names, usernames, and source IP addresses of the SQL statements that meet a query condition.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database on which the SQL statements are executed.
    // 
    // >  You can call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to query the resource groups, database names, usernames, and source IP addresses of the SQL statements that meet a query condition.
    std::shared_ptr<string> database_ = nullptr;
    // The end of the time range to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // > 
    // 
    // *   The end time must be later than the start time.
    // 
    // *   The maximum time range that can be specified is 24 hours.
    std::shared_ptr<string> endTime_ = nullptr;
    // The query keyword of the SQL statements.
    std::shared_ptr<string> keyword_ = nullptr;
    // The language of file titles and error messages. Valid values:
    // 
    // *   **zh** (default): simplified Chinese.
    // *   **en**: English.
    // *   **ja**: Japanese.
    // *   **zh-tw**: traditional Chinese.
    std::shared_ptr<string> lang_ = nullptr;
    // The maximum peak memory of the SQL statements. Unit: bytes.
    std::shared_ptr<int64_t> maxPeakMemory_ = nullptr;
    // The maximum scan size of the SQL statements. Unit: bytes.
    std::shared_ptr<int64_t> maxScanSize_ = nullptr;
    // The minimum peak memory of the SQL statements. Unit: bytes.
    std::shared_ptr<int64_t> minPeakMemory_ = nullptr;
    // The minimum scan size of the SQL statements. Unit: bytes.
    std::shared_ptr<int64_t> minScanSize_ = nullptr;
    // The order in which to sort the SQL statements by field, which contains the `Field` and `Type` fields. Specify the order in the JSON format. Example: `[{"Field":"StartTime", "Type": "desc"}]`. Fields:
    // 
    // *   `Field` specifies the field that is used to sort the SQL statements. Valid values:
    // 
    //     *   `StartTime`: the execution start time.
    //     *   `Status`: the execution status.
    //     *   `UserName`: the username.
    //     *   `Cost`: the execution duration.
    //     *   `PeakMemory`: the peak memory.
    //     *   `ScanSize`: the amount of data that is scanned.
    //     *   `Database`: the name of the database.
    //     *   `ClientIp`: the source IP address.
    //     *   `ResourceGroup`: the name of the resource group.
    //     *   `QueueTime`: the amount of time that is consumed for queuing.
    //     *   `OutputRows`: the number of output rows.
    //     *   `OutputDataSize`: the amount of output data.
    //     *   `ResourceCostRank`: the execution duration rank of operators that are used in the SQL statements. This value takes effect only when `QueryCondition` is set to `{"Type":"status","Value":"running"}`.
    // 
    // *   `Type` specifies the sorting order. Valid values (case-insensitive):
    // 
    //     *   `Desc`: descending order.
    //     *   `Asc`: ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The SQL pattern ID.
    std::shared_ptr<string> patternId_ = nullptr;
    // The query condition for SQL statements, which can contain the `Type`, `Value`, `Min`, and `Max` fields. Specify the condition in the JSON format. `Type` specifies the query dimension. Valid values for Type: `maxCost`, `status`, and `cost`. `Value`, `Min`, or `Max` specifies the query range for the dimension. Valid values:
    // 
    // *   `{"Type":"maxCost","Value":"100"}`: queries the top 100 most time-consuming SQL statements. Set `Value` to 100.
    // *   `{"Type":"status","Value":"finished"}`: queries the executed SQL statements. You can set `Value` to `running` to query the SQL statements that are being executed. You can also set Value to `failed` to query the SQL statements that failed to be executed.
    // *   `{"Type":"cost","Min":"10","Max":"200"}`: queries the SQL statements whose execution duration is in the range of 10 to 200 milliseconds. You can also specify custom values for the Min and Max fields.
    std::shared_ptr<string> queryCondition_ = nullptr;
    // The region ID of the cluster.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group to which the SQL statements belong.
    // 
    // >  You can call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to query the resource groups, database names, usernames, and source IP addresses of the SQL statements that meet a query condition.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The beginning of the time range to query. Set the time to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  You can query data only within the last 14 days.
    std::shared_ptr<string> startTime_ = nullptr;
    // The username that is used to execute the SQL statements. You can call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to query the resource groups, database names, usernames, and source IP addresses of the SQL statements that meet a query condition.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
