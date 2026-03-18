// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTBASICMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateProjectBasicMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectBasicMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectBasicMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
    };
    UpdateProjectBasicMetaRequest() = default ;
    UpdateProjectBasicMetaRequest(const UpdateProjectBasicMetaRequest &) = default ;
    UpdateProjectBasicMetaRequest(UpdateProjectBasicMetaRequest &&) = default ;
    UpdateProjectBasicMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectBasicMetaRequest() = default ;
    UpdateProjectBasicMetaRequest& operator=(const UpdateProjectBasicMetaRequest &) = default ;
    UpdateProjectBasicMetaRequest& operator=(UpdateProjectBasicMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Properties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Properties& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Properties& obj) { 
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
      Properties() = default ;
      Properties(const Properties &) = default ;
      Properties(Properties &&) = default ;
      Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Properties() = default ;
      Properties& operator=(const Properties &) = default ;
      Properties& operator=(Properties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableLifecycle : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableLifecycle& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, TableLifecycle& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        TableLifecycle() = default ;
        TableLifecycle(const TableLifecycle &) = default ;
        TableLifecycle(TableLifecycle &&) = default ;
        TableLifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableLifecycle() = default ;
        TableLifecycle& operator=(const TableLifecycle &) = default ;
        TableLifecycle& operator=(TableLifecycle &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TableLifecycle& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline TableLifecycle& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The lifecycle type. Valid values:
        // 
        // - **mandatory**: The Lifecycle clause is required. You must set a lifecycle for the table.
        // 
        // - **optional**: The Lifecycle clause is optional when you create a table. If you do not set a lifecycle for the table, the table never expires.
        // 
        // - **inherit**: If you do not set a lifecycle for the table when you create it, the lifecycle of the table is the value of odps.table.lifecycle.value.
        shared_ptr<string> type_ {};
        // The lifecycle of the table in days. The value must be an integer from 1 to 37231. The default value is 37231.
        shared_ptr<string> value_ {};
      };

      class Encryption : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Encryption& obj) { 
          DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(key, key_);
        };
        friend void from_json(const Darabonba::Json& j, Encryption& obj) { 
          DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(key, key_);
        };
        Encryption() = default ;
        Encryption(const Encryption &) = default ;
        Encryption(Encryption &&) = default ;
        Encryption(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Encryption() = default ;
        Encryption& operator=(const Encryption &) = default ;
        Encryption& operator=(Encryption &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->enable_ == nullptr && this->key_ == nullptr; };
        // algorithm Field Functions 
        bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
        void deleteAlgorithm() { this->algorithm_ = nullptr;};
        inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
        inline Encryption& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Encryption& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Encryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      protected:
        // The encryption algorithm. The key supports algorithms such as AES256, AESCTR, and RC4.
        shared_ptr<string> algorithm_ {};
        // Specifies whether to enable data encryption for the project. For more information about data encryption, see
        // <props="intl">[Storage encryption](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/storage-encryption).
        shared_ptr<bool> enable_ {};
        // The type of key used for data encryption. This can be the default MaxCompute key or a Bring-Your-Own-Key (BYOK). The default MaxCompute key is created within MaxCompute.
        shared_ptr<string> key_ {};
      };

      virtual bool empty() const override { return this->allowFullScan_ == nullptr
        && this->enableDecimal2_ == nullptr && this->enableDr_ == nullptr && this->enableTunnelQuotaRoute_ == nullptr && this->encryption_ == nullptr && this->retentionDays_ == nullptr
        && this->sqlMeteringMax_ == nullptr && this->tableLifecycle_ == nullptr && this->timezone_ == nullptr && this->tunnelQuota_ == nullptr && this->typeSystem_ == nullptr; };
      // allowFullScan Field Functions 
      bool hasAllowFullScan() const { return this->allowFullScan_ != nullptr;};
      void deleteAllowFullScan() { this->allowFullScan_ = nullptr;};
      inline bool getAllowFullScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullScan_, false) };
      inline Properties& setAllowFullScan(bool allowFullScan) { DARABONBA_PTR_SET_VALUE(allowFullScan_, allowFullScan) };


      // enableDecimal2 Field Functions 
      bool hasEnableDecimal2() const { return this->enableDecimal2_ != nullptr;};
      void deleteEnableDecimal2() { this->enableDecimal2_ = nullptr;};
      inline bool getEnableDecimal2() const { DARABONBA_PTR_GET_DEFAULT(enableDecimal2_, false) };
      inline Properties& setEnableDecimal2(bool enableDecimal2) { DARABONBA_PTR_SET_VALUE(enableDecimal2_, enableDecimal2) };


      // enableDr Field Functions 
      bool hasEnableDr() const { return this->enableDr_ != nullptr;};
      void deleteEnableDr() { this->enableDr_ = nullptr;};
      inline bool getEnableDr() const { DARABONBA_PTR_GET_DEFAULT(enableDr_, false) };
      inline Properties& setEnableDr(bool enableDr) { DARABONBA_PTR_SET_VALUE(enableDr_, enableDr) };


      // enableTunnelQuotaRoute Field Functions 
      bool hasEnableTunnelQuotaRoute() const { return this->enableTunnelQuotaRoute_ != nullptr;};
      void deleteEnableTunnelQuotaRoute() { this->enableTunnelQuotaRoute_ = nullptr;};
      inline bool getEnableTunnelQuotaRoute() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelQuotaRoute_, false) };
      inline Properties& setEnableTunnelQuotaRoute(bool enableTunnelQuotaRoute) { DARABONBA_PTR_SET_VALUE(enableTunnelQuotaRoute_, enableTunnelQuotaRoute) };


      // encryption Field Functions 
      bool hasEncryption() const { return this->encryption_ != nullptr;};
      void deleteEncryption() { this->encryption_ = nullptr;};
      inline const Properties::Encryption & getEncryption() const { DARABONBA_PTR_GET_CONST(encryption_, Properties::Encryption) };
      inline Properties::Encryption getEncryption() { DARABONBA_PTR_GET(encryption_, Properties::Encryption) };
      inline Properties& setEncryption(const Properties::Encryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
      inline Properties& setEncryption(Properties::Encryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


      // retentionDays Field Functions 
      bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
      void deleteRetentionDays() { this->retentionDays_ = nullptr;};
      inline int64_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0L) };
      inline Properties& setRetentionDays(int64_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


      // sqlMeteringMax Field Functions 
      bool hasSqlMeteringMax() const { return this->sqlMeteringMax_ != nullptr;};
      void deleteSqlMeteringMax() { this->sqlMeteringMax_ = nullptr;};
      inline string getSqlMeteringMax() const { DARABONBA_PTR_GET_DEFAULT(sqlMeteringMax_, "") };
      inline Properties& setSqlMeteringMax(string sqlMeteringMax) { DARABONBA_PTR_SET_VALUE(sqlMeteringMax_, sqlMeteringMax) };


      // tableLifecycle Field Functions 
      bool hasTableLifecycle() const { return this->tableLifecycle_ != nullptr;};
      void deleteTableLifecycle() { this->tableLifecycle_ = nullptr;};
      inline const Properties::TableLifecycle & getTableLifecycle() const { DARABONBA_PTR_GET_CONST(tableLifecycle_, Properties::TableLifecycle) };
      inline Properties::TableLifecycle getTableLifecycle() { DARABONBA_PTR_GET(tableLifecycle_, Properties::TableLifecycle) };
      inline Properties& setTableLifecycle(const Properties::TableLifecycle & tableLifecycle) { DARABONBA_PTR_SET_VALUE(tableLifecycle_, tableLifecycle) };
      inline Properties& setTableLifecycle(Properties::TableLifecycle && tableLifecycle) { DARABONBA_PTR_SET_RVALUE(tableLifecycle_, tableLifecycle) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Properties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // tunnelQuota Field Functions 
      bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
      void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
      inline string getTunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
      inline Properties& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


      // typeSystem Field Functions 
      bool hasTypeSystem() const { return this->typeSystem_ != nullptr;};
      void deleteTypeSystem() { this->typeSystem_ = nullptr;};
      inline string getTypeSystem() const { DARABONBA_PTR_GET_DEFAULT(typeSystem_, "") };
      inline Properties& setTypeSystem(string typeSystem) { DARABONBA_PTR_SET_VALUE(typeSystem_, typeSystem) };


    protected:
      // Specifies whether to allow full table scans in the project. A full table scan consumes a large amount of resources. To improve processing efficiency, this feature is disabled by default.
      shared_ptr<bool> allowFullScan_ {};
      // Specifies whether to enable the Decimal data type of MaxCompute V2.0 for the project.
      shared_ptr<bool> enableDecimal2_ {};
      shared_ptr<bool> enableDr_ {};
      // Specifies whether to enable resource group-based routing for Data Transmission Service.
      // 
      // - true: Data transmission tasks submitted in the project use the attached Data Transmission Service resource group by default.
      // 
      // - false: Data transmission tasks submitted in the project use the shared Data Transmission Service resource group by default.
      shared_ptr<bool> enableTunnelQuotaRoute_ {};
      // The storage encryption properties.
      shared_ptr<Properties::Encryption> encryption_ {};
      // The number of days to retain backup data. During this period, you can restore the current version to any backup version.
      // The value must be an integer from 0 to 30. The default value is 1. A value of 0 disables the backup feature.
      shared_ptr<int64_t> retentionDays_ {};
      // The maximum consumption threshold for a single SQL job.
      // Unit: Scanned data (GB) × Complexity.
      shared_ptr<string> sqlMeteringMax_ {};
      // The lifecycle properties of the table.
      shared_ptr<Properties::TableLifecycle> tableLifecycle_ {};
      // The time zone of the project. This is the `odps.sql.timezone` property.
      shared_ptr<string> timezone_ {};
      // The <props="intl">[Data Transmission Service](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/overview-of-dts) resource group attached to the project.
      // 
      // - Default (shared Data Transmission Service resource group): The project is not allowed to use a subscription Data Transmission Service resource group. Regardless of the value of the default Data Transmission Service resource group, data transmission tasks submitted in the project automatically use the Default resource group.
      // 
      // - Subscription Data Transmission Service resource group: The project is allowed to use a subscription Data Transmission Service resource group.
      shared_ptr<string> tunnelQuota_ {};
      // The data type edition. Valid values:
      // 
      // - **1**: Edition 1.0
      // 
      // - **2**: Edition 2.0
      // 
      // - **hive**: Hive-compatible edition
      // 
      // For more information about the differences between the data type editions, see <props="intl">[Data type editions](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/data-type-editions).
      shared_ptr<string> typeSystem_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->properties_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateProjectBasicMetaRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const UpdateProjectBasicMetaRequest::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, UpdateProjectBasicMetaRequest::Properties) };
    inline UpdateProjectBasicMetaRequest::Properties getProperties() { DARABONBA_PTR_GET(properties_, UpdateProjectBasicMetaRequest::Properties) };
    inline UpdateProjectBasicMetaRequest& setProperties(const UpdateProjectBasicMetaRequest::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateProjectBasicMetaRequest& setProperties(UpdateProjectBasicMetaRequest::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    // The description of the project.
    shared_ptr<string> comment_ {};
    // The basic properties of the project.
    shared_ptr<UpdateProjectBasicMetaRequest::Properties> properties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
