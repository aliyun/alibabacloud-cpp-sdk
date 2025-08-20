// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyApsDatasoureRequestKafkaInfo.hpp>
#include <alibabacloud/models/ModifyApsDatasoureRequestLakehouseId.hpp>
#include <alibabacloud/models/ModifyApsDatasoureRequestPolarDBMysqlInfo.hpp>
#include <alibabacloud/models/ModifyApsDatasoureRequestRdsMysqlInfo.hpp>
#include <alibabacloud/models/ModifyApsDatasoureRequestSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_TO_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_FROM_JSON(LakehouseId, lakehouseId_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    ModifyApsDatasoureRequest() = default ;
    ModifyApsDatasoureRequest(const ModifyApsDatasoureRequest &) = default ;
    ModifyApsDatasoureRequest(ModifyApsDatasoureRequest &&) = default ;
    ModifyApsDatasoureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureRequest() = default ;
    ModifyApsDatasoureRequest& operator=(const ModifyApsDatasoureRequest &) = default ;
    ModifyApsDatasoureRequest& operator=(ModifyApsDatasoureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->datasourceDescription_ != nullptr && this->datasourceId_ != nullptr && this->datasourceName_ != nullptr && this->kafkaInfo_ != nullptr && this->lakehouseId_ != nullptr
        && this->polarDBMysqlInfo_ != nullptr && this->rdsMysqlInfo_ != nullptr && this->regionId_ != nullptr && this->slsInfo_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsDatasoureRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline ModifyApsDatasoureRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline ModifyApsDatasoureRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ModifyApsDatasoureRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // kafkaInfo Field Functions 
    bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
    void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequestKafkaInfo & kafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, ModifyApsDatasoureRequestKafkaInfo) };
    inline ModifyApsDatasoureRequestKafkaInfo kafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, ModifyApsDatasoureRequestKafkaInfo) };
    inline ModifyApsDatasoureRequest& setKafkaInfo(const ModifyApsDatasoureRequestKafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
    inline ModifyApsDatasoureRequest& setKafkaInfo(ModifyApsDatasoureRequestKafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


    // lakehouseId Field Functions 
    bool hasLakehouseId() const { return this->lakehouseId_ != nullptr;};
    void deleteLakehouseId() { this->lakehouseId_ = nullptr;};
    inline const ModifyApsDatasoureRequestLakehouseId & lakehouseId() const { DARABONBA_PTR_GET_CONST(lakehouseId_, ModifyApsDatasoureRequestLakehouseId) };
    inline ModifyApsDatasoureRequestLakehouseId lakehouseId() { DARABONBA_PTR_GET(lakehouseId_, ModifyApsDatasoureRequestLakehouseId) };
    inline ModifyApsDatasoureRequest& setLakehouseId(const ModifyApsDatasoureRequestLakehouseId & lakehouseId) { DARABONBA_PTR_SET_VALUE(lakehouseId_, lakehouseId) };
    inline ModifyApsDatasoureRequest& setLakehouseId(ModifyApsDatasoureRequestLakehouseId && lakehouseId) { DARABONBA_PTR_SET_RVALUE(lakehouseId_, lakehouseId) };


    // polarDBMysqlInfo Field Functions 
    bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
    void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequestPolarDBMysqlInfo & polarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, ModifyApsDatasoureRequestPolarDBMysqlInfo) };
    inline ModifyApsDatasoureRequestPolarDBMysqlInfo polarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, ModifyApsDatasoureRequestPolarDBMysqlInfo) };
    inline ModifyApsDatasoureRequest& setPolarDBMysqlInfo(const ModifyApsDatasoureRequestPolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
    inline ModifyApsDatasoureRequest& setPolarDBMysqlInfo(ModifyApsDatasoureRequestPolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


    // rdsMysqlInfo Field Functions 
    bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
    void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequestRdsMysqlInfo & rdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, ModifyApsDatasoureRequestRdsMysqlInfo) };
    inline ModifyApsDatasoureRequestRdsMysqlInfo rdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, ModifyApsDatasoureRequestRdsMysqlInfo) };
    inline ModifyApsDatasoureRequest& setRdsMysqlInfo(const ModifyApsDatasoureRequestRdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
    inline ModifyApsDatasoureRequest& setRdsMysqlInfo(ModifyApsDatasoureRequestRdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsDatasoureRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const ModifyApsDatasoureRequestSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, ModifyApsDatasoureRequestSlsInfo) };
    inline ModifyApsDatasoureRequestSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, ModifyApsDatasoureRequestSlsInfo) };
    inline ModifyApsDatasoureRequest& setSlsInfo(const ModifyApsDatasoureRequestSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline ModifyApsDatasoureRequest& setSlsInfo(ModifyApsDatasoureRequestSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> datasourceDescription_ = nullptr;
    // The data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> datasourceId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The information about the Kafka instance.
    std::shared_ptr<ModifyApsDatasoureRequestKafkaInfo> kafkaInfo_ = nullptr;
    // The lakehouse ID.
    std::shared_ptr<ModifyApsDatasoureRequestLakehouseId> lakehouseId_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<ModifyApsDatasoureRequestPolarDBMysqlInfo> polarDBMysqlInfo_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<ModifyApsDatasoureRequestRdsMysqlInfo> rdsMysqlInfo_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about Simple Log Service (SLS).
    std::shared_ptr<ModifyApsDatasoureRequestSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
