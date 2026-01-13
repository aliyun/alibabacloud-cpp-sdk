// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHADOOPDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHADOOPDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeHadoopDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHadoopDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_TO_JSON(DataSourceDir, dataSourceDir_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_TO_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_TO_JSON(HDFSConf, HDFSConf_);
      DARABONBA_PTR_TO_JSON(HadoopCoreConf, hadoopCoreConf_);
      DARABONBA_PTR_TO_JSON(HadoopCreateType, hadoopCreateType_);
      DARABONBA_PTR_TO_JSON(HadoopHostsAddress, hadoopHostsAddress_);
      DARABONBA_PTR_TO_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_TO_JSON(MapReduceConf, mapReduceConf_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(YarnConf, yarnConf_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHadoopDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceDescription, dataSourceDescription_);
      DARABONBA_PTR_FROM_JSON(DataSourceDir, dataSourceDir_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(EmrInstanceId, emrInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExternalDataServiceId, externalDataServiceId_);
      DARABONBA_PTR_FROM_JSON(HDFSConf, HDFSConf_);
      DARABONBA_PTR_FROM_JSON(HadoopCoreConf, hadoopCoreConf_);
      DARABONBA_PTR_FROM_JSON(HadoopCreateType, hadoopCreateType_);
      DARABONBA_PTR_FROM_JSON(HadoopHostsAddress, hadoopHostsAddress_);
      DARABONBA_PTR_FROM_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_FROM_JSON(MapReduceConf, mapReduceConf_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(YarnConf, yarnConf_);
    };
    DescribeHadoopDataSourceResponseBody() = default ;
    DescribeHadoopDataSourceResponseBody(const DescribeHadoopDataSourceResponseBody &) = default ;
    DescribeHadoopDataSourceResponseBody(DescribeHadoopDataSourceResponseBody &&) = default ;
    DescribeHadoopDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHadoopDataSourceResponseBody() = default ;
    DescribeHadoopDataSourceResponseBody& operator=(const DescribeHadoopDataSourceResponseBody &) = default ;
    DescribeHadoopDataSourceResponseBody& operator=(DescribeHadoopDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceDescription_ == nullptr && this->dataSourceDir_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceStatus_ == nullptr
        && this->dataSourceType_ == nullptr && this->emrInstanceId_ == nullptr && this->externalDataServiceId_ == nullptr && this->HDFSConf_ == nullptr && this->hadoopCoreConf_ == nullptr
        && this->hadoopCreateType_ == nullptr && this->hadoopHostsAddress_ == nullptr && this->hiveConf_ == nullptr && this->mapReduceConf_ == nullptr && this->modifyTime_ == nullptr
        && this->requestId_ == nullptr && this->statusMessage_ == nullptr && this->yarnConf_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHadoopDataSourceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceDescription Field Functions 
    bool hasDataSourceDescription() const { return this->dataSourceDescription_ != nullptr;};
    void deleteDataSourceDescription() { this->dataSourceDescription_ = nullptr;};
    inline string getDataSourceDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDescription_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceDescription(string dataSourceDescription) { DARABONBA_PTR_SET_VALUE(dataSourceDescription_, dataSourceDescription) };


    // dataSourceDir Field Functions 
    bool hasDataSourceDir() const { return this->dataSourceDir_ != nullptr;};
    void deleteDataSourceDir() { this->dataSourceDir_ = nullptr;};
    inline string getDataSourceDir() const { DARABONBA_PTR_GET_DEFAULT(dataSourceDir_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceDir(string dataSourceDir) { DARABONBA_PTR_SET_VALUE(dataSourceDir_, dataSourceDir) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string getDataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeHadoopDataSourceResponseBody& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // emrInstanceId Field Functions 
    bool hasEmrInstanceId() const { return this->emrInstanceId_ != nullptr;};
    void deleteEmrInstanceId() { this->emrInstanceId_ = nullptr;};
    inline string getEmrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(emrInstanceId_, "") };
    inline DescribeHadoopDataSourceResponseBody& setEmrInstanceId(string emrInstanceId) { DARABONBA_PTR_SET_VALUE(emrInstanceId_, emrInstanceId) };


    // externalDataServiceId Field Functions 
    bool hasExternalDataServiceId() const { return this->externalDataServiceId_ != nullptr;};
    void deleteExternalDataServiceId() { this->externalDataServiceId_ = nullptr;};
    inline string getExternalDataServiceId() const { DARABONBA_PTR_GET_DEFAULT(externalDataServiceId_, "") };
    inline DescribeHadoopDataSourceResponseBody& setExternalDataServiceId(string externalDataServiceId) { DARABONBA_PTR_SET_VALUE(externalDataServiceId_, externalDataServiceId) };


    // HDFSConf Field Functions 
    bool hasHDFSConf() const { return this->HDFSConf_ != nullptr;};
    void deleteHDFSConf() { this->HDFSConf_ = nullptr;};
    inline string getHDFSConf() const { DARABONBA_PTR_GET_DEFAULT(HDFSConf_, "") };
    inline DescribeHadoopDataSourceResponseBody& setHDFSConf(string HDFSConf) { DARABONBA_PTR_SET_VALUE(HDFSConf_, HDFSConf) };


    // hadoopCoreConf Field Functions 
    bool hasHadoopCoreConf() const { return this->hadoopCoreConf_ != nullptr;};
    void deleteHadoopCoreConf() { this->hadoopCoreConf_ = nullptr;};
    inline string getHadoopCoreConf() const { DARABONBA_PTR_GET_DEFAULT(hadoopCoreConf_, "") };
    inline DescribeHadoopDataSourceResponseBody& setHadoopCoreConf(string hadoopCoreConf) { DARABONBA_PTR_SET_VALUE(hadoopCoreConf_, hadoopCoreConf) };


    // hadoopCreateType Field Functions 
    bool hasHadoopCreateType() const { return this->hadoopCreateType_ != nullptr;};
    void deleteHadoopCreateType() { this->hadoopCreateType_ = nullptr;};
    inline string getHadoopCreateType() const { DARABONBA_PTR_GET_DEFAULT(hadoopCreateType_, "") };
    inline DescribeHadoopDataSourceResponseBody& setHadoopCreateType(string hadoopCreateType) { DARABONBA_PTR_SET_VALUE(hadoopCreateType_, hadoopCreateType) };


    // hadoopHostsAddress Field Functions 
    bool hasHadoopHostsAddress() const { return this->hadoopHostsAddress_ != nullptr;};
    void deleteHadoopHostsAddress() { this->hadoopHostsAddress_ = nullptr;};
    inline string getHadoopHostsAddress() const { DARABONBA_PTR_GET_DEFAULT(hadoopHostsAddress_, "") };
    inline DescribeHadoopDataSourceResponseBody& setHadoopHostsAddress(string hadoopHostsAddress) { DARABONBA_PTR_SET_VALUE(hadoopHostsAddress_, hadoopHostsAddress) };


    // hiveConf Field Functions 
    bool hasHiveConf() const { return this->hiveConf_ != nullptr;};
    void deleteHiveConf() { this->hiveConf_ = nullptr;};
    inline string getHiveConf() const { DARABONBA_PTR_GET_DEFAULT(hiveConf_, "") };
    inline DescribeHadoopDataSourceResponseBody& setHiveConf(string hiveConf) { DARABONBA_PTR_SET_VALUE(hiveConf_, hiveConf) };


    // mapReduceConf Field Functions 
    bool hasMapReduceConf() const { return this->mapReduceConf_ != nullptr;};
    void deleteMapReduceConf() { this->mapReduceConf_ = nullptr;};
    inline string getMapReduceConf() const { DARABONBA_PTR_GET_DEFAULT(mapReduceConf_, "") };
    inline DescribeHadoopDataSourceResponseBody& setMapReduceConf(string mapReduceConf) { DARABONBA_PTR_SET_VALUE(mapReduceConf_, mapReduceConf) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeHadoopDataSourceResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHadoopDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeHadoopDataSourceResponseBody& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // yarnConf Field Functions 
    bool hasYarnConf() const { return this->yarnConf_ != nullptr;};
    void deleteYarnConf() { this->yarnConf_ = nullptr;};
    inline string getYarnConf() const { DARABONBA_PTR_GET_DEFAULT(yarnConf_, "") };
    inline DescribeHadoopDataSourceResponseBody& setYarnConf(string yarnConf) { DARABONBA_PTR_SET_VALUE(yarnConf_, yarnConf) };


  protected:
    // The time when the service was created.
    shared_ptr<string> createTime_ {};
    // The description of the service. The description can be up to 256 characters in length.
    shared_ptr<string> dataSourceDescription_ {};
    // The service directory in which Hadoop-related configuration files are stored.
    shared_ptr<string> dataSourceDir_ {};
    // The data source ID.
    shared_ptr<string> dataSourceId_ {};
    // The name of the service.
    shared_ptr<string> dataSourceName_ {};
    // The status of the service. Valid values:
    // 
    // *   Init
    // *   Running
    // *   Exception
    shared_ptr<string> dataSourceStatus_ {};
    // The type of the data source.
    shared_ptr<string> dataSourceType_ {};
    // The E-MapReduce (EMR) Hadoop cluster ID.
    shared_ptr<string> emrInstanceId_ {};
    // The ID of the external data service.
    shared_ptr<string> externalDataServiceId_ {};
    // The content of the Hadoop hdfs-site.xml file.
    shared_ptr<string> HDFSConf_ {};
    // The content of the Hadoop core-site.xml file.
    shared_ptr<string> hadoopCoreConf_ {};
    // The type of the external service. Valid values:
    // 
    // *   emr
    // *   selfCreate
    shared_ptr<string> hadoopCreateType_ {};
    // The IP address and hostname of the Hadoop cluster (data source) in the /etc/hosts file.
    shared_ptr<string> hadoopHostsAddress_ {};
    // The content of the Hadoop hive-site.xml file.
    shared_ptr<string> hiveConf_ {};
    // The content of the Hadoop mapred-site.xml file.
    shared_ptr<string> mapReduceConf_ {};
    // The time when the data source was last modified.
    shared_ptr<string> modifyTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the service status. For example, if the service is in the exception state, the cause of the exception is displayed. If the service is in the running state, this parameter is left empty.
    shared_ptr<string> statusMessage_ {};
    // The content of the Hadoop yarn-site.xml file.
    shared_ptr<string> yarnConf_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
