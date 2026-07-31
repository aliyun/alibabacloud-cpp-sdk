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
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->DBClusterId_ == nullptr && this->database_ == nullptr && this->endTime_ == nullptr && this->keyword_ == nullptr && this->lang_ == nullptr
        && this->maxPeakMemory_ == nullptr && this->maxScanSize_ == nullptr && this->minPeakMemory_ == nullptr && this->minScanSize_ == nullptr && this->order_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->patternId_ == nullptr && this->queryCondition_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroup_ == nullptr && this->startTime_ == nullptr && this->userName_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeDiagnosisRecordsRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDiagnosisRecordsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeDiagnosisRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosisRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeDiagnosisRecordsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnosisRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxPeakMemory Field Functions 
    bool hasMaxPeakMemory() const { return this->maxPeakMemory_ != nullptr;};
    void deleteMaxPeakMemory() { this->maxPeakMemory_ = nullptr;};
    inline int64_t getMaxPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(maxPeakMemory_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMaxPeakMemory(int64_t maxPeakMemory) { DARABONBA_PTR_SET_VALUE(maxPeakMemory_, maxPeakMemory) };


    // maxScanSize Field Functions 
    bool hasMaxScanSize() const { return this->maxScanSize_ != nullptr;};
    void deleteMaxScanSize() { this->maxScanSize_ = nullptr;};
    inline int64_t getMaxScanSize() const { DARABONBA_PTR_GET_DEFAULT(maxScanSize_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMaxScanSize(int64_t maxScanSize) { DARABONBA_PTR_SET_VALUE(maxScanSize_, maxScanSize) };


    // minPeakMemory Field Functions 
    bool hasMinPeakMemory() const { return this->minPeakMemory_ != nullptr;};
    void deleteMinPeakMemory() { this->minPeakMemory_ = nullptr;};
    inline int64_t getMinPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(minPeakMemory_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMinPeakMemory(int64_t minPeakMemory) { DARABONBA_PTR_SET_VALUE(minPeakMemory_, minPeakMemory) };


    // minScanSize Field Functions 
    bool hasMinScanSize() const { return this->minScanSize_ != nullptr;};
    void deleteMinScanSize() { this->minScanSize_ = nullptr;};
    inline int64_t getMinScanSize() const { DARABONBA_PTR_GET_DEFAULT(minScanSize_, 0L) };
    inline DescribeDiagnosisRecordsRequest& setMinScanSize(int64_t minScanSize) { DARABONBA_PTR_SET_VALUE(minScanSize_, minScanSize) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeDiagnosisRecordsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiagnosisRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiagnosisRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string getPatternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeDiagnosisRecordsRequest& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string getQueryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline DescribeDiagnosisRecordsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosisRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeDiagnosisRecordsRequest& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosisRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDiagnosisRecordsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The source IP address.
    // 
    // > Call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to view the resource groups, database names, usernames, and source IP addresses for the SQL statements that meet the specified query conditions.
    shared_ptr<string> clientIp_ {};
    // The ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // 
    // > Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to view the details of all clusters in your account, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The database where the SQL statement is executed.
    // 
    // > Call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to view the resource groups, database names, usernames, and source IP addresses for the SQL statements that meet the specified query conditions.
    shared_ptr<string> database_ {};
    // The end of the time range to query. Specify the time in the UNIX timestamp format. The time must be in milliseconds.
    // 
    // > - The end time must be later than the start time.
    // >
    // > - The interval between the start time and the end time cannot exceed 24 hours.
    shared_ptr<string> endTime_ {};
    // Filters the queries by the keywords contained in the SQL statements.
    shared_ptr<string> keyword_ {};
    // The language of the file title and some error messages in the downloaded file. Valid values:
    // 
    // - **zh**: Simplified Chinese (default).
    // 
    // - **en**: English.
    // 
    // - **ja**: Japanese.
    // 
    // - **zh-tw**: Traditional Chinese.
    shared_ptr<string> lang_ {};
    // The maximum peak memory of the SQL statement. Unit: bytes.
    shared_ptr<int64_t> maxPeakMemory_ {};
    // The maximum scan size of the target SQL statement. Unit: bytes.
    shared_ptr<int64_t> maxScanSize_ {};
    // The minimum peak memory of the SQL statement. Unit: bytes.
    shared_ptr<int64_t> minPeakMemory_ {};
    // The minimum scan size of the SQL statement. Unit: bytes.
    shared_ptr<int64_t> minScanSize_ {};
    // The sorting order of the SQL statements. This parameter is a JSON array that is ordered by the sequence of the input array. It contains the `Field` and `Type` fields. Example: `[{"Field":"StartTime", "Type": "desc" }]`. The fields are described as follows:
    // 
    // - `Field` specifies the field by which to sort the SQL statements. Valid values:
    // 
    //   - `StartTime`: the start time of the execution.
    // 
    //   - `Status`: the execution state.
    // 
    //   - `UserName`: the username.
    // 
    //   - `Cost`: the execution duration.
    // 
    //   - `PeakMemory`: the peak memory.
    // 
    //   - `ScanSize`: the amount of scanned data.
    // 
    //   - `Database`: the database name.
    // 
    //   - `ClientIp`: the source IP address.
    // 
    //   - `ResourceGroup`: the resource group.
    // 
    //   - `QueueTime`: the amount of time that the query waited in a queue.
    // 
    //   - `OutputRows`: the number of output rows.
    // 
    //   - `OutputDataSize`: the amount of output data.
    // 
    //   - `ResourceCostRank`: the ranking of the execution duration of an operator in the SQL statement. This field is returned only when `QueryCondition` is set to `{"Type":"status","Value":"running"}`.
    // 
    // - `Type` specifies the sorting type. Valid values (case-insensitive):
    // 
    //   - `Desc`: descending order.
    // 
    //   - `Asc`: ascending order.
    shared_ptr<string> order_ {};
    // The page number. The value must be an integer that is greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // - **30** (default)
    // 
    // - **50**
    // 
    // - **100**
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the SQL pattern.
    shared_ptr<string> patternId_ {};
    // The conditions for the SQL query. This parameter is a JSON string that contains fields such as Type, `Value`, `Min`, and `Max`. The `Type` field indicates the query dimension. Valid values for `Type`: `maxCost`, `status`, and `cost`. The `Value`, `Min`, and `Max` fields specify the query range for the dimension. Valid values:
    // 
    // - `{"Type":"maxCost","Value":"100"}`: queries the details of the top 100 SQL statements that have the longest execution durations. The `Value` field can only be set to 100.
    // 
    // - `{"Type":"status","Value":"finished"}`: queries the details of completed SQL statements. You can also set `Value` to `running` or `failed` to query SQL statements that are running or have failed.
    // 
    // - `{"Type":"cost","Min":"10","Max":"200"}`: queries the details of SQL statements whose execution durations are between 10 ms and 200 ms. You can customize the minimum and maximum execution durations. Unit: milliseconds.
    shared_ptr<string> queryCondition_ {};
    // The region ID.
    // 
    // > Call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to view the regions and zones supported by AnalyticDB for MySQL, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group to which the SQL statement belongs.
    // 
    // > Call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to view the resource groups, database names, usernames, and source IP addresses for the SQL statements that meet the specified query conditions.
    shared_ptr<string> resourceGroup_ {};
    // The start of the time range to query. Specify the time in the UNIX timestamp format. The time must be in milliseconds.
    // 
    // > Only data from the last 14 days can be queried.
    shared_ptr<string> startTime_ {};
    // The username used to execute the SQL statement.
    // Call the [DescribeDiagnosisDimensions](https://help.aliyun.com/document_detail/308210.html) operation to view the resource groups, database names, usernames, and source IP addresses for the SQL statements that meet the specified query conditions.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
