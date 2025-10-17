// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOURESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOURESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabricksInfo, databricksInfoShrink_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(HiveInfo, hiveInfoShrink_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfoShrink_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfoShrink_);
      DARABONBA_PTR_TO_JSON(PolarDBXInfo, polarDBXInfoShrink_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfoShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabricksInfo, databricksInfoShrink_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(HiveInfo, hiveInfoShrink_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfoShrink_);
      DARABONBA_PTR_FROM_JSON(PolarDBXInfo, polarDBXInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfoShrink_);
    };
    CreateApsDatasoureShrinkRequest() = default ;
    CreateApsDatasoureShrinkRequest(const CreateApsDatasoureShrinkRequest &) = default ;
    CreateApsDatasoureShrinkRequest(CreateApsDatasoureShrinkRequest &&) = default ;
    CreateApsDatasoureShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureShrinkRequest() = default ;
    CreateApsDatasoureShrinkRequest& operator=(const CreateApsDatasoureShrinkRequest &) = default ;
    CreateApsDatasoureShrinkRequest& operator=(CreateApsDatasoureShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->databricksInfoShrink_ == nullptr && return this->datasourceDescription_ == nullptr && return this->datasourceName_ == nullptr && return this->datasourceType_ == nullptr && return this->hiveInfoShrink_ == nullptr
        && return this->kafkaInfoShrink_ == nullptr && return this->mode_ == nullptr && return this->polarDBMysqlInfoShrink_ == nullptr && return this->polarDBXInfoShrink_ == nullptr && return this->rdsMysqlInfoShrink_ == nullptr
        && return this->regionId_ == nullptr && return this->slsInfoShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsDatasoureShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databricksInfoShrink Field Functions 
    bool hasDatabricksInfoShrink() const { return this->databricksInfoShrink_ != nullptr;};
    void deleteDatabricksInfoShrink() { this->databricksInfoShrink_ = nullptr;};
    inline string databricksInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(databricksInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setDatabricksInfoShrink(string databricksInfoShrink) { DARABONBA_PTR_SET_VALUE(databricksInfoShrink_, databricksInfoShrink) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline CreateApsDatasoureShrinkRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline CreateApsDatasoureShrinkRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline CreateApsDatasoureShrinkRequest& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // hiveInfoShrink Field Functions 
    bool hasHiveInfoShrink() const { return this->hiveInfoShrink_ != nullptr;};
    void deleteHiveInfoShrink() { this->hiveInfoShrink_ = nullptr;};
    inline string hiveInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(hiveInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setHiveInfoShrink(string hiveInfoShrink) { DARABONBA_PTR_SET_VALUE(hiveInfoShrink_, hiveInfoShrink) };


    // kafkaInfoShrink Field Functions 
    bool hasKafkaInfoShrink() const { return this->kafkaInfoShrink_ != nullptr;};
    void deleteKafkaInfoShrink() { this->kafkaInfoShrink_ = nullptr;};
    inline string kafkaInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(kafkaInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setKafkaInfoShrink(string kafkaInfoShrink) { DARABONBA_PTR_SET_VALUE(kafkaInfoShrink_, kafkaInfoShrink) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateApsDatasoureShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // polarDBMysqlInfoShrink Field Functions 
    bool hasPolarDBMysqlInfoShrink() const { return this->polarDBMysqlInfoShrink_ != nullptr;};
    void deletePolarDBMysqlInfoShrink() { this->polarDBMysqlInfoShrink_ = nullptr;};
    inline string polarDBMysqlInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(polarDBMysqlInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setPolarDBMysqlInfoShrink(string polarDBMysqlInfoShrink) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfoShrink_, polarDBMysqlInfoShrink) };


    // polarDBXInfoShrink Field Functions 
    bool hasPolarDBXInfoShrink() const { return this->polarDBXInfoShrink_ != nullptr;};
    void deletePolarDBXInfoShrink() { this->polarDBXInfoShrink_ = nullptr;};
    inline string polarDBXInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(polarDBXInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setPolarDBXInfoShrink(string polarDBXInfoShrink) { DARABONBA_PTR_SET_VALUE(polarDBXInfoShrink_, polarDBXInfoShrink) };


    // rdsMysqlInfoShrink Field Functions 
    bool hasRdsMysqlInfoShrink() const { return this->rdsMysqlInfoShrink_ != nullptr;};
    void deleteRdsMysqlInfoShrink() { this->rdsMysqlInfoShrink_ = nullptr;};
    inline string rdsMysqlInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(rdsMysqlInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setRdsMysqlInfoShrink(string rdsMysqlInfoShrink) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfoShrink_, rdsMysqlInfoShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsDatasoureShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfoShrink Field Functions 
    bool hasSlsInfoShrink() const { return this->slsInfoShrink_ != nullptr;};
    void deleteSlsInfoShrink() { this->slsInfoShrink_ = nullptr;};
    inline string slsInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(slsInfoShrink_, "") };
    inline CreateApsDatasoureShrinkRequest& setSlsInfoShrink(string slsInfoShrink) { DARABONBA_PTR_SET_VALUE(slsInfoShrink_, slsInfoShrink) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The information about the Databricks data source.
    std::shared_ptr<string> databricksInfoShrink_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> datasourceDescription_ = nullptr;
    // The name of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The type of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasourceType_ = nullptr;
    // The information about the Hive data source.
    std::shared_ptr<string> hiveInfoShrink_ = nullptr;
    // The information about the source Apache Kafka instance.
    std::shared_ptr<string> kafkaInfoShrink_ = nullptr;
    // The mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The information about the source PolarDB for MySQL cluster.
    std::shared_ptr<string> polarDBMysqlInfoShrink_ = nullptr;
    // The information about the source PolarDB-X instance.
    std::shared_ptr<string> polarDBXInfoShrink_ = nullptr;
    // The information about the source ApsaraDB RDS for MySQL instance.
    std::shared_ptr<string> rdsMysqlInfoShrink_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the source Simple Log Service (SLS) instance or cluster.
    std::shared_ptr<string> slsInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
