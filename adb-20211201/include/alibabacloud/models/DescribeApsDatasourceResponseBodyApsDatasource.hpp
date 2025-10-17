// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo.hpp>
#include <alibabacloud/models/DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBodyApsDatasource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBodyApsDatasource& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_TO_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_TO_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_TO_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_TO_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_TO_JSON(SlsInfo, slsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBodyApsDatasource& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DatabricksInfo, databricksInfo_);
      DARABONBA_PTR_FROM_JSON(DatasourceDescription, datasourceDescription_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(HiveInfo, hiveInfo_);
      DARABONBA_PTR_FROM_JSON(KafkaInfo, kafkaInfo_);
      DARABONBA_PTR_FROM_JSON(PolarDBMysqlInfo, polarDBMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(RdsMysqlInfo, rdsMysqlInfo_);
      DARABONBA_PTR_FROM_JSON(SlsInfo, slsInfo_);
    };
    DescribeApsDatasourceResponseBodyApsDatasource() = default ;
    DescribeApsDatasourceResponseBodyApsDatasource(const DescribeApsDatasourceResponseBodyApsDatasource &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasource(DescribeApsDatasourceResponseBodyApsDatasource &&) = default ;
    DescribeApsDatasourceResponseBodyApsDatasource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBodyApsDatasource() = default ;
    DescribeApsDatasourceResponseBodyApsDatasource& operator=(const DescribeApsDatasourceResponseBodyApsDatasource &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasource& operator=(DescribeApsDatasourceResponseBodyApsDatasource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->databricksInfo_ == nullptr && return this->datasourceDescription_ == nullptr && return this->datasourceName_ == nullptr && return this->datasourceType_ == nullptr
        && return this->hiveInfo_ == nullptr && return this->kafkaInfo_ == nullptr && return this->polarDBMysqlInfo_ == nullptr && return this->rdsMysqlInfo_ == nullptr && return this->slsInfo_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // databricksInfo Field Functions 
    bool hasDatabricksInfo() const { return this->databricksInfo_ != nullptr;};
    void deleteDatabricksInfo() { this->databricksInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo & databricksInfo() const { DARABONBA_PTR_GET_CONST(databricksInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo databricksInfo() { DARABONBA_PTR_GET(databricksInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDatabricksInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo & databricksInfo) { DARABONBA_PTR_SET_VALUE(databricksInfo_, databricksInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDatabricksInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo && databricksInfo) { DARABONBA_PTR_SET_RVALUE(databricksInfo_, databricksInfo) };


    // datasourceDescription Field Functions 
    bool hasDatasourceDescription() const { return this->datasourceDescription_ != nullptr;};
    void deleteDatasourceDescription() { this->datasourceDescription_ = nullptr;};
    inline string datasourceDescription() const { DARABONBA_PTR_GET_DEFAULT(datasourceDescription_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDatasourceDescription(string datasourceDescription) { DARABONBA_PTR_SET_VALUE(datasourceDescription_, datasourceDescription) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline string datasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


    // hiveInfo Field Functions 
    bool hasHiveInfo() const { return this->hiveInfo_ != nullptr;};
    void deleteHiveInfo() { this->hiveInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo & hiveInfo() const { DARABONBA_PTR_GET_CONST(hiveInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo hiveInfo() { DARABONBA_PTR_GET(hiveInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setHiveInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo & hiveInfo) { DARABONBA_PTR_SET_VALUE(hiveInfo_, hiveInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setHiveInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo && hiveInfo) { DARABONBA_PTR_SET_RVALUE(hiveInfo_, hiveInfo) };


    // kafkaInfo Field Functions 
    bool hasKafkaInfo() const { return this->kafkaInfo_ != nullptr;};
    void deleteKafkaInfo() { this->kafkaInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo & kafkaInfo() const { DARABONBA_PTR_GET_CONST(kafkaInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo kafkaInfo() { DARABONBA_PTR_GET(kafkaInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setKafkaInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo & kafkaInfo) { DARABONBA_PTR_SET_VALUE(kafkaInfo_, kafkaInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setKafkaInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo && kafkaInfo) { DARABONBA_PTR_SET_RVALUE(kafkaInfo_, kafkaInfo) };


    // polarDBMysqlInfo Field Functions 
    bool hasPolarDBMysqlInfo() const { return this->polarDBMysqlInfo_ != nullptr;};
    void deletePolarDBMysqlInfo() { this->polarDBMysqlInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo & polarDBMysqlInfo() const { DARABONBA_PTR_GET_CONST(polarDBMysqlInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo polarDBMysqlInfo() { DARABONBA_PTR_GET(polarDBMysqlInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setPolarDBMysqlInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo & polarDBMysqlInfo) { DARABONBA_PTR_SET_VALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setPolarDBMysqlInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo && polarDBMysqlInfo) { DARABONBA_PTR_SET_RVALUE(polarDBMysqlInfo_, polarDBMysqlInfo) };


    // rdsMysqlInfo Field Functions 
    bool hasRdsMysqlInfo() const { return this->rdsMysqlInfo_ != nullptr;};
    void deleteRdsMysqlInfo() { this->rdsMysqlInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo & rdsMysqlInfo() const { DARABONBA_PTR_GET_CONST(rdsMysqlInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo rdsMysqlInfo() { DARABONBA_PTR_GET(rdsMysqlInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setRdsMysqlInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo & rdsMysqlInfo) { DARABONBA_PTR_SET_VALUE(rdsMysqlInfo_, rdsMysqlInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setRdsMysqlInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo && rdsMysqlInfo) { DARABONBA_PTR_SET_RVALUE(rdsMysqlInfo_, rdsMysqlInfo) };


    // slsInfo Field Functions 
    bool hasSlsInfo() const { return this->slsInfo_ != nullptr;};
    void deleteSlsInfo() { this->slsInfo_ = nullptr;};
    inline const Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo & slsInfo() const { DARABONBA_PTR_GET_CONST(slsInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo) };
    inline Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo slsInfo() { DARABONBA_PTR_GET(slsInfo_, Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setSlsInfo(const Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo & slsInfo) { DARABONBA_PTR_SET_VALUE(slsInfo_, slsInfo) };
    inline DescribeApsDatasourceResponseBodyApsDatasource& setSlsInfo(Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo && slsInfo) { DARABONBA_PTR_SET_RVALUE(slsInfo_, slsInfo) };


  protected:
    // The time when the data source was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The information about Databricks.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourceDatabricksInfo> databricksInfo_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> datasourceDescription_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> datasourceType_ = nullptr;
    // The information about the Hive data source.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourceHiveInfo> hiveInfo_ = nullptr;
    // The information about the Kafka instance.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo> kafkaInfo_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourcePolarDBMysqlInfo> polarDBMysqlInfo_ = nullptr;
    // The parameter is no longer supported.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourceRdsMysqlInfo> rdsMysqlInfo_ = nullptr;
    // The Simple Log Service (SLS) project.
    std::shared_ptr<Models::DescribeApsDatasourceResponseBodyApsDatasourceSlsInfo> slsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
