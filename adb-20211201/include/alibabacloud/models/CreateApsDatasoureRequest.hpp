// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSDATASOUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestDatabricksInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestHiveInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestKafkaInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestPolarDBMysqlInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestPolarDBXInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestRdsMysqlInfo.hpp>
#include <alibabacloud/models/CreateApsDatasoureRequestSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsDatasoureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsDatasoureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_TO_JSON(PolarDBXInfo, polarDBXInfo_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsDatasoureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(PolarDBXInfo, polarDBXInfo_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    CreateApsDatasoureRequest() = default ;
    CreateApsDatasoureRequest(const CreateApsDatasoureRequest &) = default ;
    CreateApsDatasoureRequest(CreateApsDatasoureRequest &&) = default ;
    CreateApsDatasoureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsDatasoureRequest() = default ;
    CreateApsDatasoureRequest& operator=(const CreateApsDatasoureRequest &) = default ;
    CreateApsDatasoureRequest& operator=(CreateApsDatasoureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->databricksInfo_ != nullptr && this->datasourceDescription_ != nullptr && this->datasourceName_ != nullptr && this->datasourceType_ != nullptr && this->hiveInfo_ != nullptr
        && this->kafkaInfo_ != nullptr && this->mode_ != nullptr && this->polarDBMysqlInfo_ != nullptr && this->polarDBXInfo_ != nullptr && this->rdsMysqlInfo_ != nullptr
        && this->regionId_ != nullptr && this->slsInfo_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateApsDatasoureRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databricksInfo Field Functions 
    bool hasDatabricksInfo() const { return this->databricksInfo_ != nullptr;};
    void deleteDatabricksInfo() { this->databricksInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestDatabricksInfo & databricksInfo() const { DARABONBA_PTR_GET_CONST(databricksInfo_, CreateApsDatasoureRequestDatabricksInfo) };
    inline CreateApsDatasoureRequestDatabricksInfo databricksInfo() { DARABONBA_PTR_GET(databricksInfo_, CreateApsDatasoureRequestDatabricksInfo) };
    inline CreateApsDatasoureRequest& setDatabricksInfo(const CreateApsDatasoureRequestDatabricksInfo & databricksInfo) { DARABONBA_PTR_SET_VALUE(databricksInfo_, databricksInfo) };
    inline CreateApsDatasoureRequest& setDatabricksInfo(CreateApsDatasoureRequestDatabricksInfo && databricksInfo) { DARABONBA_PTR_SET_RVALUE(databricksInfo_, databricksInfo) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline CreateApsDatasoureRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline CreateApsDatasoureRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline CreateApsDatasoureRequest& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // hiveInfo Field Functions 
    bool hasHiveInfo() const { return this->hiveInfo_ != nullptr;};
    void deleteHiveInfo() { this->hiveInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestHiveInfo & hiveInfo() const { DARABONBA_PTR_GET_CONST(hiveInfo_, CreateApsDatasoureRequestHiveInfo) };
    inline CreateApsDatasoureRequestHiveInfo hiveInfo() { DARABONBA_PTR_GET(hiveInfo_, CreateApsDatasoureRequestHiveInfo) };
    inline CreateApsDatasoureRequest& setHiveInfo(const CreateApsDatasoureRequestHiveInfo & hiveInfo) { DARABONBA_PTR_SET_VALUE(hiveInfo_, hiveInfo) };
    inline CreateApsDatasoureRequest& setHiveInfo(CreateApsDatasoureRequestHiveInfo && hiveInfo) { DARABONBA_PTR_SET_RVALUE(hiveInfo_, hiveInfo) };


    // kafkaInfo Field Functions 
    bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
    void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestKafkaInfo & kafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, CreateApsDatasoureRequestKafkaInfo) };
    inline CreateApsDatasoureRequestKafkaInfo kafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, CreateApsDatasoureRequestKafkaInfo) };
    inline CreateApsDatasoureRequest& setKafkaInfo(const CreateApsDatasoureRequestKafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
    inline CreateApsDatasoureRequest& setKafkaInfo(CreateApsDatasoureRequestKafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateApsDatasoureRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // polarDBMysqlInfo Field Functions 
    bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
    void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestPolarDBMysqlInfo & polarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, CreateApsDatasoureRequestPolarDBMysqlInfo) };
    inline CreateApsDatasoureRequestPolarDBMysqlInfo polarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, CreateApsDatasoureRequestPolarDBMysqlInfo) };
    inline CreateApsDatasoureRequest& setPolarDBMysqlInfo(const CreateApsDatasoureRequestPolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
    inline CreateApsDatasoureRequest& setPolarDBMysqlInfo(CreateApsDatasoureRequestPolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


    // polarDBXInfo Field Functions 
    bool hasPolarDBXInfo() const { return this->polarDBXInfo_ != nullptr;};
    void deletePolarDBXInfo() { this->polarDBXInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestPolarDBXInfo & polarDBXInfo() const { DARABONBA_PTR_GET_CONST(polarDBXInfo_, CreateApsDatasoureRequestPolarDBXInfo) };
    inline CreateApsDatasoureRequestPolarDBXInfo polarDBXInfo() { DARABONBA_PTR_GET(polarDBXInfo_, CreateApsDatasoureRequestPolarDBXInfo) };
    inline CreateApsDatasoureRequest& setPolarDBXInfo(const CreateApsDatasoureRequestPolarDBXInfo & polarDBXInfo) { DARABONBA_PTR_SET_VALUE(polarDBXInfo_, polarDBXInfo) };
    inline CreateApsDatasoureRequest& setPolarDBXInfo(CreateApsDatasoureRequestPolarDBXInfo && polarDBXInfo) { DARABONBA_PTR_SET_RVALUE(polarDBXInfo_, polarDBXInfo) };


    // rdsMysqlInfo Field Functions 
    bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
    void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestRdsMysqlInfo & rdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, CreateApsDatasoureRequestRdsMysqlInfo) };
    inline CreateApsDatasoureRequestRdsMysqlInfo rdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, CreateApsDatasoureRequestRdsMysqlInfo) };
    inline CreateApsDatasoureRequest& setRdsMysqlInfo(const CreateApsDatasoureRequestRdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
    inline CreateApsDatasoureRequest& setRdsMysqlInfo(CreateApsDatasoureRequestRdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateApsDatasoureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const CreateApsDatasoureRequestSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, CreateApsDatasoureRequestSlsInfo) };
    inline CreateApsDatasoureRequestSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, CreateApsDatasoureRequestSlsInfo) };
    inline CreateApsDatasoureRequest& setSlsInfo(const CreateApsDatasoureRequestSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline CreateApsDatasoureRequest& setSlsInfo(CreateApsDatasoureRequestSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The information about the Databricks data source.
    std::shared_ptr<CreateApsDatasoureRequestDatabricksInfo> databricksInfo_ = nullptr;
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
    std::shared_ptr<CreateApsDatasoureRequestHiveInfo> hiveInfo_ = nullptr;
    // The information about the source Apache Kafka instance.
    std::shared_ptr<CreateApsDatasoureRequestKafkaInfo> kafkaInfo_ = nullptr;
    // The mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The information about the source PolarDB for MySQL cluster.
    std::shared_ptr<CreateApsDatasoureRequestPolarDBMysqlInfo> polarDBMysqlInfo_ = nullptr;
    // The information about the source PolarDB-X instance.
    std::shared_ptr<CreateApsDatasoureRequestPolarDBXInfo> polarDBXInfo_ = nullptr;
    // The information about the source ApsaraDB RDS for MySQL instance.
    std::shared_ptr<CreateApsDatasoureRequestRdsMysqlInfo> rdsMysqlInfo_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about the source Simple Log Service (SLS) instance or cluster.
    std::shared_ptr<CreateApsDatasoureRequestSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
