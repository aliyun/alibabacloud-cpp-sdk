// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISDIMENSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDiagnosisDimensionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisDimensionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisDimensionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDiagnosisDimensionsRequest() = default ;
    DescribeDiagnosisDimensionsRequest(const DescribeDiagnosisDimensionsRequest &) = default ;
    DescribeDiagnosisDimensionsRequest(DescribeDiagnosisDimensionsRequest &&) = default ;
    DescribeDiagnosisDimensionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisDimensionsRequest() = default ;
    DescribeDiagnosisDimensionsRequest& operator=(const DescribeDiagnosisDimensionsRequest &) = default ;
    DescribeDiagnosisDimensionsRequest& operator=(DescribeDiagnosisDimensionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->queryCondition_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDiagnosisDimensionsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnosisDimensionsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDiagnosisDimensionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string getQueryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline DescribeDiagnosisDimensionsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosisDimensionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnosisDimensionsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition (3.0) clusters in the specified region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query. Specify the time as a UNIX timestamp in milliseconds.
    // 
    // > * The end time must be later than the start time.
    // > * The interval between the start time and the end time cannot exceed 24 hours.
    shared_ptr<string> endTime_ {};
    // The language configuration. Valid values:
    // - **zh-CN**: Simplified Chinese (default).
    // - **en-US**: English.
    // - **ja**: Japanese.
    shared_ptr<string> lang_ {};
    // The search conditions for SQL queries. The value is a JSON string that contains fields such as `Type`, `Value`, `Min`, and `Max`. The `Type` field specifies the query dimension. Valid values: `maxCost`, `status`, and `cost`. The `Value`, `Min`, or `Max` field specifies the query range for the dimension. Valid values:
    // - `{"Type":"maxCost","Value":"100"}`: queries the details of the top 100 SQL statements with the longest execution duration. Currently, you can only set `Value` to 100.
    // - `{"Type":"status","Value":"finished"}`: queries the details of completed SQL statements. You can also set `Value` to `running` or `failed` to query the details of running or failed SQL statements.
    // - `{"Type":"cost","Min":"10","Max":"200"}`: queries the details of SQL statements whose execution duration is between 10 milliseconds and 200 milliseconds. You can also customize the minimum and maximum execution duration in milliseconds.
    shared_ptr<string> queryCondition_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the region ID of the specified AnalyticDB for MySQL Data Lakehouse Edition (3.0) cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start time of the query. Specify the time as a UNIX timestamp in milliseconds.
    // > You can only query data from the last 14 days. If you query data from more than 14 days ago, an empty result is returned.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
