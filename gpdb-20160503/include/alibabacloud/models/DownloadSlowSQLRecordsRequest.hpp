// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSLOWSQLRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSLOWSQLRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DownloadSlowSQLRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSlowSQLRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_TO_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSlowSQLRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_FROM_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DownloadSlowSQLRecordsRequest() = default ;
    DownloadSlowSQLRecordsRequest(const DownloadSlowSQLRecordsRequest &) = default ;
    DownloadSlowSQLRecordsRequest(DownloadSlowSQLRecordsRequest &&) = default ;
    DownloadSlowSQLRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSlowSQLRecordsRequest() = default ;
    DownloadSlowSQLRecordsRequest& operator=(const DownloadSlowSQLRecordsRequest &) = default ;
    DownloadSlowSQLRecordsRequest& operator=(DownloadSlowSQLRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBName_ == nullptr && this->endTime_ == nullptr && this->keyword_ == nullptr && this->maxDuration_ == nullptr && this->minDuration_ == nullptr
        && this->orderBy_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->userName_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DownloadSlowSQLRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DownloadSlowSQLRecordsRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DownloadSlowSQLRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DownloadSlowSQLRecordsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxDuration Field Functions 
    bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
    void deleteMaxDuration() { this->maxDuration_ = nullptr;};
    inline string getMaxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, "") };
    inline DownloadSlowSQLRecordsRequest& setMaxDuration(string maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline string getMinDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, "") };
    inline DownloadSlowSQLRecordsRequest& setMinDuration(string minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DownloadSlowSQLRecordsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DownloadSlowSQLRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DownloadSlowSQLRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DownloadSlowSQLRecordsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The database name.
    shared_ptr<string> DBName_ {};
    // The end of the time range to query. The time must be in UTC and formatted as *yyyy-MM-dd*T*HH:mm*Z. The time must be in UTC. The end time must be later than the start time.
    // 
    // Defaults to the current time
    shared_ptr<string> endTime_ {};
    // The search keyword.
    shared_ptr<string> keyword_ {};
    // The longest execution duration. Unit: seconds.
    shared_ptr<string> maxDuration_ {};
    // The minimum execution duration. Unit: seconds.
    shared_ptr<string> minDuration_ {};
    // Sort criteria.
    shared_ptr<string> orderBy_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range to query. The time must be in UTC and formatted as *yyyy-MM-dd*T*HH:mm*Z.
    // 
    // Defaults to the current time minus 5 minutes.
    shared_ptr<string> startTime_ {};
    // The database account.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
