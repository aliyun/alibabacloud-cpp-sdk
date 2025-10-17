// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOURESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOURESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfoShrink_);
      DARABONBA_PTR_TO_JSON(LakehouseId, lakehouseIdShrink_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfoShrink_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfoShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfoShrink_);
      DARABONBA_PTR_FROM_JSON(LakehouseId, lakehouseIdShrink_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfoShrink_);
    };
    ModifyApsDatasoureShrinkRequest() = default ;
    ModifyApsDatasoureShrinkRequest(const ModifyApsDatasoureShrinkRequest &) = default ;
    ModifyApsDatasoureShrinkRequest(ModifyApsDatasoureShrinkRequest &&) = default ;
    ModifyApsDatasoureShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureShrinkRequest() = default ;
    ModifyApsDatasoureShrinkRequest& operator=(const ModifyApsDatasoureShrinkRequest &) = default ;
    ModifyApsDatasoureShrinkRequest& operator=(ModifyApsDatasoureShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->datasourceDescription_ == nullptr && return this->datasourceId_ == nullptr && return this->datasourceName_ == nullptr && return this->kafkaInfoShrink_ == nullptr && return this->lakehouseIdShrink_ == nullptr
        && return this->polarDBMysqlInfoShrink_ == nullptr && return this->rdsMysqlInfoShrink_ == nullptr && return this->regionId_ == nullptr && return this->slsInfoShrink_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsDatasoureShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline ModifyApsDatasoureShrinkRequest& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline int64_t datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
    inline ModifyApsDatasoureShrinkRequest& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ModifyApsDatasoureShrinkRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // kafkaInfoShrink Field Functions 
    bool hasKafkaInfoShrink() const { return this->kafkaInfoShrink_ != nullptr;};
    void deleteKafkaInfoShrink() { this->kafkaInfoShrink_ = nullptr;};
    inline string kafkaInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(kafkaInfoShrink_, "") };
    inline ModifyApsDatasoureShrinkRequest& setKafkaInfoShrink(string kafkaInfoShrink) { DARABONBA_PTR_SET_VALUE(kafkaInfoShrink_, kafkaInfoShrink) };


    // lakehouseIdShrink Field Functions 
    bool hasLakehouseIdShrink() const { return this->lakehouseIdShrink_ != nullptr;};
    void deleteLakehouseIdShrink() { this->lakehouseIdShrink_ = nullptr;};
    inline string lakehouseIdShrink() const { DARABONBA_PTR_GET_DEFAULT(lakehouseIdShrink_, "") };
    inline ModifyApsDatasoureShrinkRequest& setLakehouseIdShrink(string lakehouseIdShrink) { DARABONBA_PTR_SET_VALUE(lakehouseIdShrink_, lakehouseIdShrink) };


    // polarDBMysqlInfoShrink Field Functions 
    bool hasPolarDBMysqlInfoShrink() const { return this->polarDBMysqlInfoShrink_ != nullptr;};
    void deletePolarDBMysqlInfoShrink() { this->polarDBMysqlInfoShrink_ = nullptr;};
    inline string polarDBMysqlInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(polarDBMysqlInfoShrink_, "") };
    inline ModifyApsDatasoureShrinkRequest& setPolarDBMysqlInfoShrink(string polarDBMysqlInfoShrink) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfoShrink_, polarDBMysqlInfoShrink) };


    // rdsMysqlInfoShrink Field Functions 
    bool hasRdsMysqlInfoShrink() const { return this->rdsMysqlInfoShrink_ != nullptr;};
    void deleteRdsMysqlInfoShrink() { this->rdsMysqlInfoShrink_ = nullptr;};
    inline string rdsMysqlInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(rdsMysqlInfoShrink_, "") };
    inline ModifyApsDatasoureShrinkRequest& setRdsMysqlInfoShrink(string rdsMysqlInfoShrink) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfoShrink_, rdsMysqlInfoShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsDatasoureShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsInfoShrink Field Functions 
    bool hasSlsInfoShrink() const { return this->slsInfoShrink_ != nullptr;};
    void deleteSlsInfoShrink() { this->slsInfoShrink_ = nullptr;};
    inline string slsInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(slsInfoShrink_, "") };
    inline ModifyApsDatasoureShrinkRequest& setSlsInfoShrink(string slsInfoShrink) { DARABONBA_PTR_SET_VALUE(slsInfoShrink_, slsInfoShrink) };


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
    std::shared_ptr<string> kafkaInfoShrink_ = nullptr;
    // The lakehouse ID.
    std::shared_ptr<string> lakehouseIdShrink_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<string> polarDBMysqlInfoShrink_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<string> rdsMysqlInfoShrink_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The information about Simple Log Service (SLS).
    std::shared_ptr<string> slsInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
