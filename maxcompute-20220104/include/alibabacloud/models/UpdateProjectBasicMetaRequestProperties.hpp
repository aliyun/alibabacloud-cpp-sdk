// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUESTPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUESTPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateProjectBasicMetaRequestPropertiesEncryption.hpp>
#include <alibabacloud/models/UpdateProjectBasicMetaRequestPropertiesTableLifecycle.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateProjectBasicMetaRequestProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectBasicMetaRequestProperties& obj) { 
      DARABONBA_PTR_TO_JSON(allowFullScan, allowFullScan_);
      DARABONBA_PTR_TO_JSON(enableDecimal2, enableDecimal2_);
      DARABONBA_PTR_TO_JSON(enableDr, enableDr_);
      DARABONBA_PTR_TO_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
      DARABONBA_PTR_TO_JSON(encryption, encryption_);
      DARABONBA_PTR_TO_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(sqlMeteringMax, sqlMeteringMax_);
      DARABONBA_PTR_TO_JSON(tableLifecycle, tableLifecycle_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
      DARABONBA_PTR_TO_JSON(typeSystem, typeSystem_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectBasicMetaRequestProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(allowFullScan, allowFullScan_);
      DARABONBA_PTR_FROM_JSON(enableDecimal2, enableDecimal2_);
      DARABONBA_PTR_FROM_JSON(enableDr, enableDr_);
      DARABONBA_PTR_FROM_JSON(enableTunnelQuotaRoute, enableTunnelQuotaRoute_);
      DARABONBA_PTR_FROM_JSON(encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(retentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(sqlMeteringMax, sqlMeteringMax_);
      DARABONBA_PTR_FROM_JSON(tableLifecycle, tableLifecycle_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(tunnelQuota, tunnelQuota_);
      DARABONBA_PTR_FROM_JSON(typeSystem, typeSystem_);
    };
    UpdateProjectBasicMetaRequestProperties() = default ;
    UpdateProjectBasicMetaRequestProperties(const UpdateProjectBasicMetaRequestProperties &) = default ;
    UpdateProjectBasicMetaRequestProperties(UpdateProjectBasicMetaRequestProperties &&) = default ;
    UpdateProjectBasicMetaRequestProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectBasicMetaRequestProperties() = default ;
    UpdateProjectBasicMetaRequestProperties& operator=(const UpdateProjectBasicMetaRequestProperties &) = default ;
    UpdateProjectBasicMetaRequestProperties& operator=(UpdateProjectBasicMetaRequestProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowFullScan_ != nullptr
        && this->enableDecimal2_ != nullptr && this->enableDr_ != nullptr && this->enableTunnelQuotaRoute_ != nullptr && this->encryption_ != nullptr && this->retentionDays_ != nullptr
        && this->sqlMeteringMax_ != nullptr && this->tableLifecycle_ != nullptr && this->timezone_ != nullptr && this->tunnelQuota_ != nullptr && this->typeSystem_ != nullptr; };
    // allowFullScan Field Functions 
    bool hasAllowFullScan() const { return this->allowFullScan_ != nullptr;};
    void deleteAllowFullScan() { this->allowFullScan_ = nullptr;};
    inline bool allowFullScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullScan_, false) };
    inline UpdateProjectBasicMetaRequestProperties& setAllowFullScan(bool allowFullScan) { DARABONBA_PTR_SET_VALUE(allowFullScan_, allowFullScan) };


    // enableDecimal2 Field Functions 
    bool hasEnableDecimal2() const { return this->enableDecimal2_ != nullptr;};
    void deleteEnableDecimal2() { this->enableDecimal2_ = nullptr;};
    inline bool enableDecimal2() const { DARABONBA_PTR_GET_DEFAULT(enableDecimal2_, false) };
    inline UpdateProjectBasicMetaRequestProperties& setEnableDecimal2(bool enableDecimal2) { DARABONBA_PTR_SET_VALUE(enableDecimal2_, enableDecimal2) };


    // enableDr Field Functions 
    bool hasEnableDr() const { return this->enableDr_ != nullptr;};
    void deleteEnableDr() { this->enableDr_ = nullptr;};
    inline bool enableDr() const { DARABONBA_PTR_GET_DEFAULT(enableDr_, false) };
    inline UpdateProjectBasicMetaRequestProperties& setEnableDr(bool enableDr) { DARABONBA_PTR_SET_VALUE(enableDr_, enableDr) };


    // enableTunnelQuotaRoute Field Functions 
    bool hasEnableTunnelQuotaRoute() const { return this->enableTunnelQuotaRoute_ != nullptr;};
    void deleteEnableTunnelQuotaRoute() { this->enableTunnelQuotaRoute_ = nullptr;};
    inline bool enableTunnelQuotaRoute() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelQuotaRoute_, false) };
    inline UpdateProjectBasicMetaRequestProperties& setEnableTunnelQuotaRoute(bool enableTunnelQuotaRoute) { DARABONBA_PTR_SET_VALUE(enableTunnelQuotaRoute_, enableTunnelQuotaRoute) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::UpdateProjectBasicMetaRequestPropertiesEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::UpdateProjectBasicMetaRequestPropertiesEncryption) };
    inline Models::UpdateProjectBasicMetaRequestPropertiesEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::UpdateProjectBasicMetaRequestPropertiesEncryption) };
    inline UpdateProjectBasicMetaRequestProperties& setEncryption(const Models::UpdateProjectBasicMetaRequestPropertiesEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline UpdateProjectBasicMetaRequestProperties& setEncryption(Models::UpdateProjectBasicMetaRequestPropertiesEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int64_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0L) };
    inline UpdateProjectBasicMetaRequestProperties& setRetentionDays(int64_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // sqlMeteringMax Field Functions 
    bool hasSqlMeteringMax() const { return this->sqlMeteringMax_ != nullptr;};
    void deleteSqlMeteringMax() { this->sqlMeteringMax_ = nullptr;};
    inline string sqlMeteringMax() const { DARABONBA_PTR_GET_DEFAULT(sqlMeteringMax_, "") };
    inline UpdateProjectBasicMetaRequestProperties& setSqlMeteringMax(string sqlMeteringMax) { DARABONBA_PTR_SET_VALUE(sqlMeteringMax_, sqlMeteringMax) };


    // tableLifecycle Field Functions 
    bool hasTableLifecycle() const { return this->tableLifecycle_ != nullptr;};
    void deleteTableLifecycle() { this->tableLifecycle_ = nullptr;};
    inline const Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle & tableLifecycle() const { DARABONBA_PTR_GET_CONST(tableLifecycle_, Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle) };
    inline Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle tableLifecycle() { DARABONBA_PTR_GET(tableLifecycle_, Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle) };
    inline UpdateProjectBasicMetaRequestProperties& setTableLifecycle(const Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle & tableLifecycle) { DARABONBA_PTR_SET_VALUE(tableLifecycle_, tableLifecycle) };
    inline UpdateProjectBasicMetaRequestProperties& setTableLifecycle(Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle && tableLifecycle) { DARABONBA_PTR_SET_RVALUE(tableLifecycle_, tableLifecycle) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateProjectBasicMetaRequestProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // tunnelQuota Field Functions 
    bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
    void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
    inline string tunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
    inline UpdateProjectBasicMetaRequestProperties& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


    // typeSystem Field Functions 
    bool hasTypeSystem() const { return this->typeSystem_ != nullptr;};
    void deleteTypeSystem() { this->typeSystem_ = nullptr;};
    inline string typeSystem() const { DARABONBA_PTR_GET_DEFAULT(typeSystem_, "") };
    inline UpdateProjectBasicMetaRequestProperties& setTypeSystem(string typeSystem) { DARABONBA_PTR_SET_VALUE(typeSystem_, typeSystem) };


  protected:
    // Indicates whether a full table scan is allowed in the project. A full table scan occupies a large number of resources, which reduces data processing efficiency. By default, the full table scan feature is disabled.
    std::shared_ptr<bool> allowFullScan_ = nullptr;
    // Indicates whether the DECIMAL type of the MaxCompute V2.0 data type edition is enabled.
    std::shared_ptr<bool> enableDecimal2_ = nullptr;
    std::shared_ptr<bool> enableDr_ = nullptr;
    // Indicates whether the routing of the Tunnel resource group is enabled.
    // 
    // - true: The data transfer tasks that are submitted by the project by default use the Tunnel resource group that is bound to the project.
    // - false: The data transfer tasks that are submitted by the project by default use the Tunnel shared resource group.
    std::shared_ptr<bool> enableTunnelQuotaRoute_ = nullptr;
    // The storage encryption properties.
    std::shared_ptr<Models::UpdateProjectBasicMetaRequestPropertiesEncryption> encryption_ = nullptr;
    // The retention period for backup data. Unit: days. During the retention period, you can restore data of the version in use to the backup data of any version. Valid values: [0,30]. Default value: 1. The value 0 indicates that the backup feature is disabled.
    std::shared_ptr<int64_t> retentionDays_ = nullptr;
    // The maximum consumption threshold of a single SQL statement. Formula: Amount of scanned data (GB) × Complexity.
    std::shared_ptr<string> sqlMeteringMax_ = nullptr;
    // The table lifecycle properties.
    std::shared_ptr<Models::UpdateProjectBasicMetaRequestPropertiesTableLifecycle> tableLifecycle_ = nullptr;
    // The time zone that is used by your project. The time zone is the same as the time zone specified by `odps.sql.timezone` .
    std::shared_ptr<string> timezone_ = nullptr;
    // The <props="china">[Data Transmission Service](https://help.aliyun.com/zh/maxcompute/user-guide/overview-of-dts)
    // <props="intl">[Data Transmission Service](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/overview-of-dts) resource group that is bound to the project.
    // 
    // - Default resource group: The Tunnel shared resource group is used. You cannot use the subscription-based Tunnel resource group for the project. The default resource group is automatically used by the Tunnel service of your project, regardless of the parameter setting.
    // - Subscription-based Tunnel resource group: You can use the subscription-based Tunnel resource group for the project.
    std::shared_ptr<string> tunnelQuota_ = nullptr;
    // The data type edition. Valid values:
    // 
    // - *1*: MaxCompute V1.0 data type edition
    // - *2*: MaxCompute V2.0 data type edition
    // - *hive*: Hive-compatible data type edition
    // For more information about the differences among the three data type editions, see <props="china">[Data Type Versions](https://help.aliyun.com/zh/maxcompute/user-guide/data-type-editions)
    // <props="intl">[Data Type Versions](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/data-type-editions).
    std::shared_ptr<string> typeSystem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
