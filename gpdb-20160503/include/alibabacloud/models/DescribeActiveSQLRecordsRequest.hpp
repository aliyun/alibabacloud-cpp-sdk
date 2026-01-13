// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVESQLRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeActiveSQLRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveSQLRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_TO_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveSQLRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_FROM_JSON(MinDuration, minDuration_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeActiveSQLRecordsRequest() = default ;
    DescribeActiveSQLRecordsRequest(const DescribeActiveSQLRecordsRequest &) = default ;
    DescribeActiveSQLRecordsRequest(DescribeActiveSQLRecordsRequest &&) = default ;
    DescribeActiveSQLRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveSQLRecordsRequest() = default ;
    DescribeActiveSQLRecordsRequest& operator=(const DescribeActiveSQLRecordsRequest &) = default ;
    DescribeActiveSQLRecordsRequest& operator=(DescribeActiveSQLRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->endTime_ == nullptr && this->keyword_ == nullptr && this->maxDuration_ == nullptr && this->minDuration_ == nullptr
        && this->order_ == nullptr && this->startTime_ == nullptr && this->user_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeActiveSQLRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeActiveSQLRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeActiveSQLRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeActiveSQLRecordsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxDuration Field Functions 
    bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
    void deleteMaxDuration() { this->maxDuration_ = nullptr;};
    inline string getMaxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, "") };
    inline DescribeActiveSQLRecordsRequest& setMaxDuration(string maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


    // minDuration Field Functions 
    bool hasMinDuration() const { return this->minDuration_ != nullptr;};
    void deleteMinDuration() { this->minDuration_ = nullptr;};
    inline string getMinDuration() const { DARABONBA_PTR_GET_DEFAULT(minDuration_, "") };
    inline DescribeActiveSQLRecordsRequest& setMinDuration(string minDuration) { DARABONBA_PTR_SET_VALUE(minDuration_, minDuration) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeActiveSQLRecordsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeActiveSQLRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeActiveSQLRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The instance ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database.
    shared_ptr<string> database_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The keyword used to filter queries.
    shared_ptr<string> keyword_ {};
    // The maxmum amount of time consumed by traces. Unit: milliseconds.
    shared_ptr<string> maxDuration_ {};
    // The minimum amount of time consumed by traces. Unit: milliseconds.
    shared_ptr<string> minDuration_ {};
    // The field used to sort lock diagnostics records and the sorting order.
    // 
    // Default value: `{"Field":"StartTime","Type":"Desc"}`, which indicates that lock diagnostics records are sorted by the start time in descending order. No other values are supported.
    shared_ptr<string> order_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The name of the database account.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
