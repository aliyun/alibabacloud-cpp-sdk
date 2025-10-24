// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesEncryption.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesExternalProjectProperties.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesStorageTierInfo.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesTableLifecycle.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesTableLifecycleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataProperties& obj) { 
      DARABONBA_PTR_TO_JSON(allowFullScan, allowFullScan_);
      DARABONBA_PTR_TO_JSON(autoMvQuotaGb, autoMvQuotaGb_);
      DARABONBA_PTR_TO_JSON(elderTunnelQuota, elderTunnelQuota_);
      DARABONBA_PTR_TO_JSON(enableAutoMv, enableAutoMv_);
      DARABONBA_PTR_TO_JSON(enableDecimal2, enableDecimal2_);
      DARABONBA_PTR_TO_JSON(enableDr, enableDr_);
      DARABONBA_PTR_TO_JSON(enableFdcCacheForce, enableFdcCacheForce_);
      DARABONBA_PTR_TO_JSON(enableTieredStorage, enableTieredStorage_);
      DARABONBA_PTR_TO_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
      DARABONBA_PTR_TO_JSON(encryption, encryption_);
      DARABONBA_PTR_TO_JSON(externalProjectProperties, externalProjectProperties_);
      DARABONBA_PTR_TO_JSON(fdcQuota, fdcQuota_);
      DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(sqlMeteringMax, sqlMeteringMax_);
      DARABONBA_PTR_TO_JSON(storageTierInfo, storageTierInfo_);
      DARABONBA_PTR_TO_JSON(tableLifecycle, tableLifecycle_);
      DARABONBA_PTR_TO_JSON(tableLifecycleConfig, tableLifecycleConfig_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
      DARABONBA_PTR_TO_JSON(typeSystem, typeSystem_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(allowFullScan, allowFullScan_);
      DARABONBA_PTR_FROM_JSON(autoMvQuotaGb, autoMvQuotaGb_);
      DARABONBA_PTR_FROM_JSON(elderTunnelQuota, elderTunnelQuota_);
      DARABONBA_PTR_FROM_JSON(enableAutoMv, enableAutoMv_);
      DARABONBA_PTR_FROM_JSON(enableDecimal2, enableDecimal2_);
      DARABONBA_PTR_FROM_JSON(enableDr, enableDr_);
      DARABONBA_PTR_FROM_JSON(enableFdcCacheForce, enableFdcCacheForce_);
      DARABONBA_PTR_FROM_JSON(enableTieredStorage, enableTieredStorage_);
      DARABONBA_PTR_FROM_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
      DARABONBA_PTR_FROM_JSON(encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(externalProjectProperties, externalProjectProperties_);
      DARABONBA_PTR_FROM_JSON(fdcQuota, fdcQuota_);
      DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(sqlMeteringMax, sqlMeteringMax_);
      DARABONBA_PTR_FROM_JSON(storageTierInfo, storageTierInfo_);
      DARABONBA_PTR_FROM_JSON(tableLifecycle, tableLifecycle_);
      DARABONBA_PTR_FROM_JSON(tableLifecycleConfig, tableLifecycleConfig_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(tunnelQuota, tunnelQuota_);
      DARABONBA_PTR_FROM_JSON(typeSystem, typeSystem_);
    };
    GetProjectResponseBodyDataProperties() = default ;
    GetProjectResponseBodyDataProperties(const GetProjectResponseBodyDataProperties &) = default ;
    GetProjectResponseBodyDataProperties(GetProjectResponseBodyDataProperties &&) = default ;
    GetProjectResponseBodyDataProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataProperties() = default ;
    GetProjectResponseBodyDataProperties& operator=(const GetProjectResponseBodyDataProperties &) = default ;
    GetProjectResponseBodyDataProperties& operator=(GetProjectResponseBodyDataProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowFullScan_ == nullptr
        && return this->autoMvQuotaGb_ == nullptr && return this->elderTunnelQuota_ == nullptr && return this->enableAutoMv_ == nullptr && return this->enableDecimal2_ == nullptr && return this->enableDr_ == nullptr
        && return this->enableFdcCacheForce_ == nullptr && return this->enableTieredStorage_ == nullptr && return this->enableTunnelQuotaRoute_ == nullptr && return this->encryption_ == nullptr && return this->externalProjectProperties_ == nullptr
        && return this->fdcQuota_ == nullptr && return this->retentionDays_ == nullptr && return this->sqlMeteringMax_ == nullptr && return this->storageTierInfo_ == nullptr && return this->tableLifecycle_ == nullptr
        && return this->tableLifecycleConfig_ == nullptr && return this->timezone_ == nullptr && return this->tunnelQuota_ == nullptr && return this->typeSystem_ == nullptr; };
    // allowFullScan Field Functions 
    bool hasAllowFullScan() const { return this->allowFullScan_ != nullptr;};
    void deleteAllowFullScan() { this->allowFullScan_ = nullptr;};
    inline bool allowFullScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullScan_, false) };
    inline GetProjectResponseBodyDataProperties& setAllowFullScan(bool allowFullScan) { DARABONBA_PTR_SET_VALUE(allowFullScan_, allowFullScan) };


    // autoMvQuotaGb Field Functions 
    bool hasAutoMvQuotaGb() const { return this->autoMvQuotaGb_ != nullptr;};
    void deleteAutoMvQuotaGb() { this->autoMvQuotaGb_ = nullptr;};
    inline int64_t autoMvQuotaGb() const { DARABONBA_PTR_GET_DEFAULT(autoMvQuotaGb_, 0L) };
    inline GetProjectResponseBodyDataProperties& setAutoMvQuotaGb(int64_t autoMvQuotaGb) { DARABONBA_PTR_SET_VALUE(autoMvQuotaGb_, autoMvQuotaGb) };


    // elderTunnelQuota Field Functions 
    bool hasElderTunnelQuota() const { return this->elderTunnelQuota_ != nullptr;};
    void deleteElderTunnelQuota() { this->elderTunnelQuota_ = nullptr;};
    inline string elderTunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(elderTunnelQuota_, "") };
    inline GetProjectResponseBodyDataProperties& setElderTunnelQuota(string elderTunnelQuota) { DARABONBA_PTR_SET_VALUE(elderTunnelQuota_, elderTunnelQuota) };


    // enableAutoMv Field Functions 
    bool hasEnableAutoMv() const { return this->enableAutoMv_ != nullptr;};
    void deleteEnableAutoMv() { this->enableAutoMv_ = nullptr;};
    inline bool enableAutoMv() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMv_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableAutoMv(bool enableAutoMv) { DARABONBA_PTR_SET_VALUE(enableAutoMv_, enableAutoMv) };


    // enableDecimal2 Field Functions 
    bool hasEnableDecimal2() const { return this->enableDecimal2_ != nullptr;};
    void deleteEnableDecimal2() { this->enableDecimal2_ = nullptr;};
    inline bool enableDecimal2() const { DARABONBA_PTR_GET_DEFAULT(enableDecimal2_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableDecimal2(bool enableDecimal2) { DARABONBA_PTR_SET_VALUE(enableDecimal2_, enableDecimal2) };


    // enableDr Field Functions 
    bool hasEnableDr() const { return this->enableDr_ != nullptr;};
    void deleteEnableDr() { this->enableDr_ = nullptr;};
    inline bool enableDr() const { DARABONBA_PTR_GET_DEFAULT(enableDr_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableDr(bool enableDr) { DARABONBA_PTR_SET_VALUE(enableDr_, enableDr) };


    // enableFdcCacheForce Field Functions 
    bool hasEnableFdcCacheForce() const { return this->enableFdcCacheForce_ != nullptr;};
    void deleteEnableFdcCacheForce() { this->enableFdcCacheForce_ = nullptr;};
    inline bool enableFdcCacheForce() const { DARABONBA_PTR_GET_DEFAULT(enableFdcCacheForce_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableFdcCacheForce(bool enableFdcCacheForce) { DARABONBA_PTR_SET_VALUE(enableFdcCacheForce_, enableFdcCacheForce) };


    // enableTieredStorage Field Functions 
    bool hasEnableTieredStorage() const { return this->enableTieredStorage_ != nullptr;};
    void deleteEnableTieredStorage() { this->enableTieredStorage_ = nullptr;};
    inline bool enableTieredStorage() const { DARABONBA_PTR_GET_DEFAULT(enableTieredStorage_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableTieredStorage(bool enableTieredStorage) { DARABONBA_PTR_SET_VALUE(enableTieredStorage_, enableTieredStorage) };


    // enableTunnelQuotaRoute Field Functions 
    bool hasEnableTunnelQuotaRoute() const { return this->enableTunnelQuotaRoute_ != nullptr;};
    void deleteEnableTunnelQuotaRoute() { this->enableTunnelQuotaRoute_ = nullptr;};
    inline bool enableTunnelQuotaRoute() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelQuotaRoute_, false) };
    inline GetProjectResponseBodyDataProperties& setEnableTunnelQuotaRoute(bool enableTunnelQuotaRoute) { DARABONBA_PTR_SET_VALUE(enableTunnelQuotaRoute_, enableTunnelQuotaRoute) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::GetProjectResponseBodyDataPropertiesEncryption) };
    inline Models::GetProjectResponseBodyDataPropertiesEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::GetProjectResponseBodyDataPropertiesEncryption) };
    inline GetProjectResponseBodyDataProperties& setEncryption(const Models::GetProjectResponseBodyDataPropertiesEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline GetProjectResponseBodyDataProperties& setEncryption(Models::GetProjectResponseBodyDataPropertiesEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // externalProjectProperties Field Functions 
    bool hasExternalProjectProperties() const { return this->externalProjectProperties_ != nullptr;};
    void deleteExternalProjectProperties() { this->externalProjectProperties_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties & externalProjectProperties() const { DARABONBA_PTR_GET_CONST(externalProjectProperties_, Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties) };
    inline Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties externalProjectProperties() { DARABONBA_PTR_GET(externalProjectProperties_, Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties) };
    inline GetProjectResponseBodyDataProperties& setExternalProjectProperties(const Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties & externalProjectProperties) { DARABONBA_PTR_SET_VALUE(externalProjectProperties_, externalProjectProperties) };
    inline GetProjectResponseBodyDataProperties& setExternalProjectProperties(Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties && externalProjectProperties) { DARABONBA_PTR_SET_RVALUE(externalProjectProperties_, externalProjectProperties) };


    // fdcQuota Field Functions 
    bool hasFdcQuota() const { return this->fdcQuota_ != nullptr;};
    void deleteFdcQuota() { this->fdcQuota_ = nullptr;};
    inline string fdcQuota() const { DARABONBA_PTR_GET_DEFAULT(fdcQuota_, "") };
    inline GetProjectResponseBodyDataProperties& setFdcQuota(string fdcQuota) { DARABONBA_PTR_SET_VALUE(fdcQuota_, fdcQuota) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int64_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0L) };
    inline GetProjectResponseBodyDataProperties& setRetentionDays(int64_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // sqlMeteringMax Field Functions 
    bool hasSqlMeteringMax() const { return this->sqlMeteringMax_ != nullptr;};
    void deleteSqlMeteringMax() { this->sqlMeteringMax_ = nullptr;};
    inline string sqlMeteringMax() const { DARABONBA_PTR_GET_DEFAULT(sqlMeteringMax_, "") };
    inline GetProjectResponseBodyDataProperties& setSqlMeteringMax(string sqlMeteringMax) { DARABONBA_PTR_SET_VALUE(sqlMeteringMax_, sqlMeteringMax) };


    // storageTierInfo Field Functions 
    bool hasStorageTierInfo() const { return this->storageTierInfo_ != nullptr;};
    void deleteStorageTierInfo() { this->storageTierInfo_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesStorageTierInfo & storageTierInfo() const { DARABONBA_PTR_GET_CONST(storageTierInfo_, Models::GetProjectResponseBodyDataPropertiesStorageTierInfo) };
    inline Models::GetProjectResponseBodyDataPropertiesStorageTierInfo storageTierInfo() { DARABONBA_PTR_GET(storageTierInfo_, Models::GetProjectResponseBodyDataPropertiesStorageTierInfo) };
    inline GetProjectResponseBodyDataProperties& setStorageTierInfo(const Models::GetProjectResponseBodyDataPropertiesStorageTierInfo & storageTierInfo) { DARABONBA_PTR_SET_VALUE(storageTierInfo_, storageTierInfo) };
    inline GetProjectResponseBodyDataProperties& setStorageTierInfo(Models::GetProjectResponseBodyDataPropertiesStorageTierInfo && storageTierInfo) { DARABONBA_PTR_SET_RVALUE(storageTierInfo_, storageTierInfo) };


    // tableLifecycle Field Functions 
    bool hasTableLifecycle() const { return this->tableLifecycle_ != nullptr;};
    void deleteTableLifecycle() { this->tableLifecycle_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesTableLifecycle & tableLifecycle() const { DARABONBA_PTR_GET_CONST(tableLifecycle_, Models::GetProjectResponseBodyDataPropertiesTableLifecycle) };
    inline Models::GetProjectResponseBodyDataPropertiesTableLifecycle tableLifecycle() { DARABONBA_PTR_GET(tableLifecycle_, Models::GetProjectResponseBodyDataPropertiesTableLifecycle) };
    inline GetProjectResponseBodyDataProperties& setTableLifecycle(const Models::GetProjectResponseBodyDataPropertiesTableLifecycle & tableLifecycle) { DARABONBA_PTR_SET_VALUE(tableLifecycle_, tableLifecycle) };
    inline GetProjectResponseBodyDataProperties& setTableLifecycle(Models::GetProjectResponseBodyDataPropertiesTableLifecycle && tableLifecycle) { DARABONBA_PTR_SET_RVALUE(tableLifecycle_, tableLifecycle) };


    // tableLifecycleConfig Field Functions 
    bool hasTableLifecycleConfig() const { return this->tableLifecycleConfig_ != nullptr;};
    void deleteTableLifecycleConfig() { this->tableLifecycleConfig_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig & tableLifecycleConfig() const { DARABONBA_PTR_GET_CONST(tableLifecycleConfig_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig) };
    inline Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig tableLifecycleConfig() { DARABONBA_PTR_GET(tableLifecycleConfig_, Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig) };
    inline GetProjectResponseBodyDataProperties& setTableLifecycleConfig(const Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig & tableLifecycleConfig) { DARABONBA_PTR_SET_VALUE(tableLifecycleConfig_, tableLifecycleConfig) };
    inline GetProjectResponseBodyDataProperties& setTableLifecycleConfig(Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig && tableLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(tableLifecycleConfig_, tableLifecycleConfig) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline GetProjectResponseBodyDataProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tunnelQuota Field Functions 
    bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
    void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
    inline string tunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
    inline GetProjectResponseBodyDataProperties& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


    // typeSystem Field Functions 
    bool hasTypeSystem() const { return this->typeSystem_ != nullptr;};
    void deleteTypeSystem() { this->typeSystem_ = nullptr;};
    inline string typeSystem() const { DARABONBA_PTR_GET_DEFAULT(typeSystem_, "") };
    inline GetProjectResponseBodyDataProperties& setTypeSystem(string typeSystem) { DARABONBA_PTR_SET_VALUE(typeSystem_, typeSystem) };


  protected:
    // Indicates whether a full table scan is allowed in the project. A full table scan occupies a large number of resources, which reduces data processing efficiency. By default, the full table scan feature is disabled.
    std::shared_ptr<bool> allowFullScan_ = nullptr;
    std::shared_ptr<int64_t> autoMvQuotaGb_ = nullptr;
    // The Tunnel parent resource group that is bound to the project. You do not need to pay attention to this group.
    std::shared_ptr<string> elderTunnelQuota_ = nullptr;
    std::shared_ptr<bool> enableAutoMv_ = nullptr;
    // Indicates whether the DECIMAL type of the MaxCompute V2.0 data type edition is enabled.
    std::shared_ptr<bool> enableDecimal2_ = nullptr;
    std::shared_ptr<bool> enableDr_ = nullptr;
    // Indicates whether external table caching is forcefully enabled.
    std::shared_ptr<bool> enableFdcCacheForce_ = nullptr;
    // Indicates whether [tiered storage](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tiered-storage) is enabled.
    std::shared_ptr<bool> enableTieredStorage_ = nullptr;
    // Indicates whether the routing of the Tunnel resource group is enabled.
    // 
    // *   true: The data transfer tasks that are submitted by the project by default use the Tunnel resource group that is bound to the project.
    // *   false: The data transfer tasks that are submitted by the project by default use the Tunnel shared resource group.
    std::shared_ptr<bool> enableTunnelQuotaRoute_ = nullptr;
    // The storage encryption properties.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesEncryption> encryption_ = nullptr;
    // The properties of the external project.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesExternalProjectProperties> externalProjectProperties_ = nullptr;
    // The quota for external table caching.
    std::shared_ptr<string> fdcQuota_ = nullptr;
    // The retention period for backup data. Unit: days. During the retention period, you can restore data of the version in use to the backup data of any version. Valid values: [0,30]. Default value: 1. The value 0 indicates that the backup feature is disabled.
    std::shared_ptr<int64_t> retentionDays_ = nullptr;
    // The maximum consumption threshold of a single SQL statement. Formula: Amount of scanned data (GB) × Complexity.
    std::shared_ptr<string> sqlMeteringMax_ = nullptr;
    // The [storage tier](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tiered-storage) information.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesStorageTierInfo> storageTierInfo_ = nullptr;
    // The table lifecycle properties.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesTableLifecycle> tableLifecycle_ = nullptr;
    // The [properties of tiered storage lifecycle rules](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tiered-storage#f61fc9db76nna). After you configure the properties, the system triggers automatic switching of storage tiers based on the rules.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesTableLifecycleConfig> tableLifecycleConfig_ = nullptr;
    // The time zone that is used by your project. The time zone is the same as the time zone specified by `odps.sql.timezone`.
    std::shared_ptr<string> timezone_ = nullptr;
    // The [Tunnel](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/overview-of-dts) resource group that is bound to the project.
    // 
    // *   Default resource group: The Tunnel shared resource group is used. You cannot use the subscription-based Tunnel resource group for the project. The default resource group is automatically used by the Tunnel service of your project, regardless of the parameter setting.
    // *   Subscription-based Tunnel resource group: You can use the subscription-based Tunnel resource group for the project.
    std::shared_ptr<string> tunnelQuota_ = nullptr;
    // The data type edition. Valid values:
    // 
    // *   **1**: MaxCompute V1.0 data type edition
    // *   **2**: MaxCompute V2.0 data type edition
    // *   **hive**: Hive-compatible data type edition
    // 
    // For more information about the differences among the three data type editions, see [Data type editions](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/data-type-editions).
    std::shared_ptr<string> typeSystem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
