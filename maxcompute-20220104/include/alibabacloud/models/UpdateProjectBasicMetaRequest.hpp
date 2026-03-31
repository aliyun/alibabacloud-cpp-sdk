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
        // - *mandatory*: The lifecycle clause is required in a table creation statement.
        // - *optional*: The lifecycle clause is optional in a table creation statement. If you do not configure a lifecycle for a table, the table does not expire.
        // - *inherit*: If you do not configure a lifecycle for a table when you create the table, the value of the odps.table.lifecycle.value parameter is used as the table lifecycle by default.
        shared_ptr<string> type_ {};
        // The table lifecycle. Unit: days. Valid values: 1 to 37231. Default value: 37231.
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
        // The data encryption algorithm that is supported by the key. Valid values: AES256, AESCTR, and RC4.
        shared_ptr<string> algorithm_ {};
        // Indicates whether the data encryption feature needs to be enabled for the project. For more information about data encryption, see
        // <props="china">[Storage Encryption](https://help.aliyun.com/zh/maxcompute/security-and-compliance/storage-encryption)
        // <props="intl">[Storage Encryption](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/storage-encryption).
        shared_ptr<bool> enable_ {};
        // The type of key that is used for data encryption. You can select MaxCompute Default Key or Bring Your Own Key (BYOK) as the key type. If you select MaxCompute Default Key, the default key that is created by MaxCompute is used.
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
      // Indicates whether a full table scan is allowed in the project. A full table scan occupies a large number of resources, which reduces data processing efficiency. By default, the full table scan feature is disabled.
      shared_ptr<bool> allowFullScan_ {};
      // Indicates whether the DECIMAL type of the MaxCompute V2.0 data type edition is enabled.
      shared_ptr<bool> enableDecimal2_ {};
      shared_ptr<bool> enableDr_ {};
      // Indicates whether the routing of the Tunnel resource group is enabled.
      // 
      // - true: The data transfer tasks that are submitted by the project by default use the Tunnel resource group that is bound to the project.
      // - false: The data transfer tasks that are submitted by the project by default use the Tunnel shared resource group.
      shared_ptr<bool> enableTunnelQuotaRoute_ {};
      // The storage encryption properties.
      shared_ptr<Properties::Encryption> encryption_ {};
      // The retention period for backup data. Unit: days. During the retention period, you can restore data of the version in use to the backup data of any version. Valid values: [0,30]. Default value: 1. The value 0 indicates that the backup feature is disabled.
      shared_ptr<int64_t> retentionDays_ {};
      // The maximum consumption threshold of a single SQL statement. Formula: Amount of scanned data (GB) × Complexity.
      shared_ptr<string> sqlMeteringMax_ {};
      // The table lifecycle properties.
      shared_ptr<Properties::TableLifecycle> tableLifecycle_ {};
      // The time zone that is used by your project. The time zone is the same as the time zone specified by `odps.sql.timezone` .
      shared_ptr<string> timezone_ {};
      // The <props="china">[Data Transmission Service](https://help.aliyun.com/zh/maxcompute/user-guide/overview-of-dts)
      // <props="intl">[Data Transmission Service](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/overview-of-dts) resource group that is bound to the project.
      // 
      // - Default resource group: The Tunnel shared resource group is used. You cannot use the subscription-based Tunnel resource group for the project. The default resource group is automatically used by the Tunnel service of your project, regardless of the parameter setting.
      // - Subscription-based Tunnel resource group: You can use the subscription-based Tunnel resource group for the project.
      shared_ptr<string> tunnelQuota_ {};
      // The data type edition. Valid values:
      // 
      // - *1*: MaxCompute V1.0 data type edition
      // - *2*: MaxCompute V2.0 data type edition
      // - *hive*: Hive-compatible data type edition
      // For more information about the differences among the three data type editions, see <props="china">[Data Type Versions](https://help.aliyun.com/zh/maxcompute/user-guide/data-type-editions)
      // <props="intl">[Data Type Versions](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/data-type-editions).
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
    // The project description.
    shared_ptr<string> comment_ {};
    // The basic properties of the project.
    shared_ptr<UpdateProjectBasicMetaRequest::Properties> properties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
