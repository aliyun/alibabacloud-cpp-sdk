// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASPROSERVICEUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDASPROSERVICEUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasProServiceUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasProServiceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(commodityInstanceId, commodityInstanceId_);
      DARABONBA_PTR_TO_JSON(engine, engine_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(instanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(isSpare, isSpare_);
      DARABONBA_PTR_TO_JSON(migrationPredictRemainingTime, migrationPredictRemainingTime_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(serviceUnitId, serviceUnitId_);
      DARABONBA_PTR_TO_JSON(sqlRetention, sqlRetention_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(storageFreeQuotaInMB, storageFreeQuotaInMB_);
      DARABONBA_PTR_TO_JSON(storageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasProServiceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(commodityInstanceId, commodityInstanceId_);
      DARABONBA_PTR_FROM_JSON(engine, engine_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(instanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(isSpare, isSpare_);
      DARABONBA_PTR_FROM_JSON(migrationPredictRemainingTime, migrationPredictRemainingTime_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(serviceUnitId, serviceUnitId_);
      DARABONBA_PTR_FROM_JSON(sqlRetention, sqlRetention_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(storageFreeQuotaInMB, storageFreeQuotaInMB_);
      DARABONBA_PTR_FROM_JSON(storageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    GetDasProServiceUsageResponseBodyData() = default ;
    GetDasProServiceUsageResponseBodyData(const GetDasProServiceUsageResponseBodyData &) = default ;
    GetDasProServiceUsageResponseBodyData(GetDasProServiceUsageResponseBodyData &&) = default ;
    GetDasProServiceUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasProServiceUsageResponseBodyData() = default ;
    GetDasProServiceUsageResponseBodyData& operator=(const GetDasProServiceUsageResponseBodyData &) = default ;
    GetDasProServiceUsageResponseBodyData& operator=(GetDasProServiceUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityInstanceId_ == nullptr
        && return this->engine_ == nullptr && return this->expireTime_ == nullptr && return this->instanceAlias_ == nullptr && return this->instanceId_ == nullptr && return this->ip_ == nullptr
        && return this->isSpare_ == nullptr && return this->migrationPredictRemainingTime_ == nullptr && return this->port_ == nullptr && return this->region_ == nullptr && return this->serviceUnitId_ == nullptr
        && return this->sqlRetention_ == nullptr && return this->startTime_ == nullptr && return this->storageFreeQuotaInMB_ == nullptr && return this->storageUsed_ == nullptr && return this->userId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // commodityInstanceId Field Functions 
    bool hasCommodityInstanceId() const { return this->commodityInstanceId_ != nullptr;};
    void deleteCommodityInstanceId() { this->commodityInstanceId_ = nullptr;};
    inline string commodityInstanceId() const { DARABONBA_PTR_GET_DEFAULT(commodityInstanceId_, "") };
    inline GetDasProServiceUsageResponseBodyData& setCommodityInstanceId(string commodityInstanceId) { DARABONBA_PTR_SET_VALUE(commodityInstanceId_, commodityInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetDasProServiceUsageResponseBodyData& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GetDasProServiceUsageResponseBodyData& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetDasProServiceUsageResponseBodyData& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDasProServiceUsageResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetDasProServiceUsageResponseBodyData& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isSpare Field Functions 
    bool hasIsSpare() const { return this->isSpare_ != nullptr;};
    void deleteIsSpare() { this->isSpare_ = nullptr;};
    inline bool isSpare() const { DARABONBA_PTR_GET_DEFAULT(isSpare_, false) };
    inline GetDasProServiceUsageResponseBodyData& setIsSpare(bool isSpare) { DARABONBA_PTR_SET_VALUE(isSpare_, isSpare) };


    // migrationPredictRemainingTime Field Functions 
    bool hasMigrationPredictRemainingTime() const { return this->migrationPredictRemainingTime_ != nullptr;};
    void deleteMigrationPredictRemainingTime() { this->migrationPredictRemainingTime_ = nullptr;};
    inline int64_t migrationPredictRemainingTime() const { DARABONBA_PTR_GET_DEFAULT(migrationPredictRemainingTime_, 0L) };
    inline GetDasProServiceUsageResponseBodyData& setMigrationPredictRemainingTime(int64_t migrationPredictRemainingTime) { DARABONBA_PTR_SET_VALUE(migrationPredictRemainingTime_, migrationPredictRemainingTime) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetDasProServiceUsageResponseBodyData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetDasProServiceUsageResponseBodyData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceUnitId Field Functions 
    bool hasServiceUnitId() const { return this->serviceUnitId_ != nullptr;};
    void deleteServiceUnitId() { this->serviceUnitId_ = nullptr;};
    inline string serviceUnitId() const { DARABONBA_PTR_GET_DEFAULT(serviceUnitId_, "") };
    inline GetDasProServiceUsageResponseBodyData& setServiceUnitId(string serviceUnitId) { DARABONBA_PTR_SET_VALUE(serviceUnitId_, serviceUnitId) };


    // sqlRetention Field Functions 
    bool hasSqlRetention() const { return this->sqlRetention_ != nullptr;};
    void deleteSqlRetention() { this->sqlRetention_ = nullptr;};
    inline string sqlRetention() const { DARABONBA_PTR_GET_DEFAULT(sqlRetention_, "") };
    inline GetDasProServiceUsageResponseBodyData& setSqlRetention(string sqlRetention) { DARABONBA_PTR_SET_VALUE(sqlRetention_, sqlRetention) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetDasProServiceUsageResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storageFreeQuotaInMB Field Functions 
    bool hasStorageFreeQuotaInMB() const { return this->storageFreeQuotaInMB_ != nullptr;};
    void deleteStorageFreeQuotaInMB() { this->storageFreeQuotaInMB_ = nullptr;};
    inline double storageFreeQuotaInMB() const { DARABONBA_PTR_GET_DEFAULT(storageFreeQuotaInMB_, 0.0) };
    inline GetDasProServiceUsageResponseBodyData& setStorageFreeQuotaInMB(double storageFreeQuotaInMB) { DARABONBA_PTR_SET_VALUE(storageFreeQuotaInMB_, storageFreeQuotaInMB) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline int64_t storageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0L) };
    inline GetDasProServiceUsageResponseBodyData& setStorageUsed(int64_t storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetDasProServiceUsageResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetDasProServiceUsageResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the DAS Enterprise Edition instance.
    std::shared_ptr<string> commodityInstanceId_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
    // The point of time when DAS Enterprise Edition for the database instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The name of the database instance.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The database instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The endpoint of the database instance.
    std::shared_ptr<string> ip_ = nullptr;
    // Indicates whether DAS Enterprise Edition for the database instance has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isSpare_ = nullptr;
    // The estimated remaining time for migrating the data generated by the SQL Explorer and Audit feature from the previous version to the new version. Unit: milliseconds.
    // 
    // >  This parameter is returned only when the SQL Explorer and Audit feature is migrated from the previous version to the new version.
    std::shared_ptr<int64_t> migrationPredictRemainingTime_ = nullptr;
    // The port number that is used to connect to the database instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The region in which the database instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The service unit ID.
    std::shared_ptr<string> serviceUnitId_ = nullptr;
    // The storage duration of SQL Explorer data. Unit: days.
    std::shared_ptr<string> sqlRetention_ = nullptr;
    // The time when DAS Enterprise Edition was enabled for the database instance. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The SQL Explorer storage space that is offered free-of-charge. Unit: MB.
    std::shared_ptr<double> storageFreeQuotaInMB_ = nullptr;
    // The storage usage of SQL Explorer of the database instance. Unit: bytes.
    std::shared_ptr<int64_t> storageUsed_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    std::shared_ptr<string> userId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
