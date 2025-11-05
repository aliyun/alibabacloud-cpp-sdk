// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterInventoryDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterInventoryDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterInventoryDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryDedicatedBlockStorageClusterInventoryDataRequest() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataRequest(const QueryDedicatedBlockStorageClusterInventoryDataRequest &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataRequest(QueryDedicatedBlockStorageClusterInventoryDataRequest &&) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterInventoryDataRequest() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataRequest& operator=(const QueryDedicatedBlockStorageClusterInventoryDataRequest &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataRequest& operator=(QueryDedicatedBlockStorageClusterInventoryDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->dbscId_ == nullptr && return this->endTime_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryDedicatedBlockStorageClusterInventoryDataRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests.
    // 
    // The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure idempotence ](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbscId_ = nullptr;
    // End timestamp of trend data.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time interval (seconds) between data retrieval points.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The region ID of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Start timestamp of trend data.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
