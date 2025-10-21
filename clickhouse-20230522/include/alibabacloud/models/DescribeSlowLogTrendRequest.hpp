// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(QueryDurationMs, queryDurationMs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSlowLogTrendRequest() = default ;
    DescribeSlowLogTrendRequest(const DescribeSlowLogTrendRequest &) = default ;
    DescribeSlowLogTrendRequest(DescribeSlowLogTrendRequest &&) = default ;
    DescribeSlowLogTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendRequest() = default ;
    DescribeSlowLogTrendRequest& operator=(const DescribeSlowLogTrendRequest &) = default ;
    DescribeSlowLogTrendRequest& operator=(DescribeSlowLogTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->endTime_ == nullptr && return this->product_ == nullptr && return this->queryDurationMs_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowLogTrendRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowLogTrendRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeSlowLogTrendRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // queryDurationMs Field Functions 
    bool hasQueryDurationMs() const { return this->queryDurationMs_ != nullptr;};
    void deleteQueryDurationMs() { this->queryDurationMs_ = nullptr;};
    inline string queryDurationMs() const { DARABONBA_PTR_GET_DEFAULT(queryDurationMs_, "") };
    inline DescribeSlowLogTrendRequest& setQueryDurationMs(string queryDurationMs) { DARABONBA_PTR_SET_VALUE(queryDurationMs_, queryDurationMs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSlowLogTrendRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowLogTrendRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The end of the time range to query. Specify the time in the yyyy-MM-dd hh:mm:ss format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The code of the cloud service.
    std::shared_ptr<string> product_ = nullptr;
    // The execution duration of slow SQL queries. Minimum value: **1000**. Unit: milliseconds.
    std::shared_ptr<string> queryDurationMs_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start of the time range to query. Specify the time in the yyyy-MM-dd hh:mm:ss format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
