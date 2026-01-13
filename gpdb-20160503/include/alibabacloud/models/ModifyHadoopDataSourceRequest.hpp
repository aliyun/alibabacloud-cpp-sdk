// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHADOOPDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHADOOPDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyHadoopDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHadoopDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_TO_JSON(HDFSConf, HDFSConf_);
      DARABONBA_PTR_TO_JSON(HadoopCoreConf, hadoopCoreConf_);
      DARABONBA_PTR_TO_JSON(HadoopCreateType, hadoopCreateType_);
      DARABONBA_PTR_TO_JSON(HadoopHostsAddress, hadoopHostsAddress_);
      DARABONBA_PTR_TO_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_TO_JSON(MapReduceConf, mapReduceConf_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(YarnConf, yarnConf_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHadoopDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_FROM_JSON(HDFSConf, HDFSConf_);
      DARABONBA_PTR_FROM_JSON(HadoopCoreConf, hadoopCoreConf_);
      DARABONBA_PTR_FROM_JSON(HadoopCreateType, hadoopCreateType_);
      DARABONBA_PTR_FROM_JSON(HadoopHostsAddress, hadoopHostsAddress_);
      DARABONBA_PTR_FROM_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_FROM_JSON(MapReduceConf, mapReduceConf_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(YarnConf, yarnConf_);
    };
    ModifyHadoopDataSourceRequest() = default ;
    ModifyHadoopDataSourceRequest(const ModifyHadoopDataSourceRequest &) = default ;
    ModifyHadoopDataSourceRequest(ModifyHadoopDataSourceRequest &&) = default ;
    ModifyHadoopDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHadoopDataSourceRequest() = default ;
    ModifyHadoopDataSourceRequest& operator=(const ModifyHadoopDataSourceRequest &) = default ;
    ModifyHadoopDataSourceRequest& operator=(ModifyHadoopDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->dataSourceDescription_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceType_ == nullptr && this->emrInstanceId_ == nullptr && this->HDFSConf_ == nullptr
        && this->hadoopCoreConf_ == nullptr && this->hadoopCreateType_ == nullptr && this->hadoopHostsAddress_ == nullptr && this->hiveConf_ == nullptr && this->mapReduceConf_ == nullptr
        && this->regionId_ == nullptr && this->yarnConf_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyHadoopDataSourceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline ModifyHadoopDataSourceRequest& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ModifyHadoopDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ModifyHadoopDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // emrInstanceId Field Functions 
    bool hasEmrInstanceId() const { return this->emrInstanceId_ != nullptr;};
    void deleteEmrInstanceId() { this->emrInstanceId_ = nullptr;};
    inline string getEmrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(emrInstanceId_, "") };
    inline ModifyHadoopDataSourceRequest& setEmrInstanceId(string emrInstanceId) { DARABONBA_PTR_SET_VALUE(emrInstanceId_, emrInstanceId) };


    // HDFSConf Field Functions 
    bool hasHDFSConf() const { return this->HDFSConf_ != nullptr;};
    void deleteHDFSConf() { this->HDFSConf_ = nullptr;};
    inline string getHDFSConf() const { DARABONBA_PTR_GET_DEFAULT(HDFSConf_, "") };
    inline ModifyHadoopDataSourceRequest& setHDFSConf(string HDFSConf) { DARABONBA_PTR_SET_VALUE(HDFSConf_, HDFSConf) };


    // hadoopCoreConf Field Functions 
    bool hasHadoopCoreConf() const { return this->hadoopCoreConf_ != nullptr;};
    void deleteHadoopCoreConf() { this->hadoopCoreConf_ = nullptr;};
    inline string getHadoopCoreConf() const { DARABONBA_PTR_GET_DEFAULT(hadoopCoreConf_, "") };
    inline ModifyHadoopDataSourceRequest& setHadoopCoreConf(string hadoopCoreConf) { DARABONBA_PTR_SET_VALUE(hadoopCoreConf_, hadoopCoreConf) };


    // hadoopCreateType Field Functions 
    bool hasHadoopCreateType() const { return this->hadoopCreateType_ != nullptr;};
    void deleteHadoopCreateType() { this->hadoopCreateType_ = nullptr;};
    inline string getHadoopCreateType() const { DARABONBA_PTR_GET_DEFAULT(hadoopCreateType_, "") };
    inline ModifyHadoopDataSourceRequest& setHadoopCreateType(string hadoopCreateType) { DARABONBA_PTR_SET_VALUE(hadoopCreateType_, hadoopCreateType) };


    // hadoopHostsAddress Field Functions 
    bool hasHadoopHostsAddress() const { return this->hadoopHostsAddress_ != nullptr;};
    void deleteHadoopHostsAddress() { this->hadoopHostsAddress_ = nullptr;};
    inline string getHadoopHostsAddress() const { DARABONBA_PTR_GET_DEFAULT(hadoopHostsAddress_, "") };
    inline ModifyHadoopDataSourceRequest& setHadoopHostsAddress(string hadoopHostsAddress) { DARABONBA_PTR_SET_VALUE(hadoopHostsAddress_, hadoopHostsAddress) };


    // hiveConf Field Functions 
    bool hasHiveConf() const { return this->hiveConf_ != nullptr;};
    void deleteHiveConf() { this->hiveConf_ = nullptr;};
    inline string getHiveConf() const { DARABONBA_PTR_GET_DEFAULT(hiveConf_, "") };
    inline ModifyHadoopDataSourceRequest& setHiveConf(string hiveConf) { DARABONBA_PTR_SET_VALUE(hiveConf_, hiveConf) };


    // mapReduceConf Field Functions 
    bool hasMapReduceConf() const { return this->mapReduceConf_ != nullptr;};
    void deleteMapReduceConf() { this->mapReduceConf_ = nullptr;};
    inline string getMapReduceConf() const { DARABONBA_PTR_GET_DEFAULT(mapReduceConf_, "") };
    inline ModifyHadoopDataSourceRequest& setMapReduceConf(string mapReduceConf) { DARABONBA_PTR_SET_VALUE(mapReduceConf_, mapReduceConf) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHadoopDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // yarnConf Field Functions 
    bool hasYarnConf() const { return this->yarnConf_ != nullptr;};
    void deleteYarnConf() { this->yarnConf_ = nullptr;};
    inline string getYarnConf() const { DARABONBA_PTR_GET_DEFAULT(yarnConf_, "") };
    inline ModifyHadoopDataSourceRequest& setYarnConf(string yarnConf) { DARABONBA_PTR_SET_VALUE(yarnConf_, yarnConf) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Service description, with a maximum length of 256 characters.
    shared_ptr<string> dataSourceDescription_ {};
    // The data source ID.
    shared_ptr<string> dataSourceId_ {};
    // The type of the data source. Valid values:
    // 
    // *   mysql
    // 
    // - postgresql
    // 
    // *   hdfs
    // 
    // - hive
    shared_ptr<string> dataSourceType_ {};
    // When HadoopCreateType is Emr, the value of this field is the EMR instance ID.
    shared_ptr<string> emrInstanceId_ {};
    // The content of the Hadoop hdfs-site.xml file. This parameter must be specified when DataSourceType is set to HDFS.
    shared_ptr<string> HDFSConf_ {};
    // The content of the Hadoop core-site.xml file.
    shared_ptr<string> hadoopCoreConf_ {};
    // The type of the external service. Valid values:
    // 
    // *   emr: E-MapReduce (EMR) Hadoop cluster.
    // *   selfCreate: self-managed Hadoop cluster.
    shared_ptr<string> hadoopCreateType_ {};
    // The IP address and hostname of the Hadoop cluster (data source) in the /etc/hosts file.
    shared_ptr<string> hadoopHostsAddress_ {};
    // The content of the Hadoop hive-site.xml file. This parameter must be specified when DataSourceType is set to Hive.
    shared_ptr<string> hiveConf_ {};
    // The content of the Hadoop mapred-site.xml file. This parameter must be specified when DataSourceType is set to HDFS.
    shared_ptr<string> mapReduceConf_ {};
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The content of the Hadoop yarn-site.xml file. This parameter must be specified when DataSourceType is set to HDFS.
    shared_ptr<string> yarnConf_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
