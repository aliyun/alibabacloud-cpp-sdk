// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->dataSourceId_ != nullptr && this->description_ != nullptr && this->envType_ != nullptr && this->status_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDataSourceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline UpdateDataSourceRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline UpdateDataSourceRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateDataSourceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details about the data source. You are not allowed to change the type of the data source. For example, you are not allowed to change the data source type from MaxCompute to MySQL. Examples of details of some common data sources:
    // 
    // *   odps
    // 
    //         {
    //           "accessId": "*****",
    //           "accessKey": "*****",
    //           "authType": 2,
    //           "endpoint": "http://service.odps.aliyun.com/api",
    //           "project": "xsaxsax",
    //           "tag": "public"
    //         }
    // 
    // *   mysql
    // 
    //         {
    //           "database": "xsaxsa",
    //           "instanceName": "rm-xsaxsa",
    //           "password": "xsaxsa",
    //           "rdsOwnerId": "xasxsa",
    //           "regionId": "cn-shanghai",
    //           "tag": "rds",
    //           "username": "xsaxsa"
    //         }
    // 
    // *   rds
    // 
    //         {
    //           "configType": 1,
    //           "tag": "rds",
    //           "database": "xsaxsa",
    //           "username": "xsaxsa",
    //           "password": "xssaxsa$32050",
    //           "instanceName": "rm-xsaxs",
    //           "rdsOwnerId": "11111111"
    //         }
    // 
    // *   oss
    // 
    //         {
    //           "accessId": "*****",
    //           "accessKey": "*****",
    //           "bucket": "xsa-xs-xs",
    //           "endpoint": "http://oss-cn-shanghai.aliyuncs.com",
    //           "tag": "public"
    //         }
    // 
    // *   sqlserver
    // 
    //         {
    //           "jdbcUrl": "jdbc:sqlserver://xsaxsa-xsaxsa.database.xxx.cn:123;DatabaseName=xsxs-xsxs",
    //           "password": "sdasda$fs",
    //           "tag": "public",
    //           "username": "sxaxacdacdd"
    //         }
    // 
    // *   polardb
    // 
    //         {
    //           "clusterId": "pc-sdadsadsa",
    //           "database": "dsadsadsa",
    //           "ownerId": "121212122",
    //           "password": "sdasdafssa",
    //           "region": "cn-shanghai",
    //           "tag": "polardb",
    //           "username": "asdadsads"
    //         }
    // 
    // *   oracle
    // 
    //         {
    //           "jdbcUrl": "jdbc:oracle:saaa:@xxxxx:1521:PROD",
    //           "password": "sxasaxsa",
    //           "tag": "public",
    //           "username": "sasfadfa"
    //         }
    // 
    // *   mongodb
    // 
    //         {
    //           "address": "[\\"xsaxxsa.mongodb.rds.aliyuncs.com:3717\\"]",
    //           "database": "admin",
    //           "password": "sadsda@",
    //           "tag": "public",
    //           "username": "dsadsadas"
    //         }
    // 
    // *   emr
    // 
    //         {
    //           "accessId": "*****",
    //           "emrClusterId": "C-dsads",
    //           "emrResourceQueueName": "default",
    //           "emrEndpoint": "emr.aliyuncs.com",
    //           "accessKey": "*****",
    //           "emrUserId": "224833315798889783",
    //           "name": "sasdsadsa",
    //           "emrAccessMode": "simple",
    //           "region": "cn-shanghai",
    //           "authType": "2",
    //           "emrProjectId": "FP-sdadsad"
    //         }
    // 
    // *   postgresql
    // 
    //         {
    //           "jdbcUrl": "jdbc:postgresql://xxxx:1921/ssss",
    //           "password": "sdadsads",
    //           "tag": "public",
    //           "username": "sdsasda"
    //         }
    // 
    // *   analyticdb_for_mysql
    // 
    //         {
    //           "instanceId": "am-sadsada",
    //           "database": "xsxsx",
    //           "username": "xsxsa",
    //           "password": "asdadsa",
    //           "connectionString": "am-xssxsxs.ads.aliyuncs.com:3306"
    //         }
    // 
    // *   hybriddb_for_postgresql
    // 
    //         {
    //           "connectionString": "gp-xsaxsaxa-master.gpdbmaster.rds.aliyuncs.com",
    //           "database": "xsaxsaxas",
    //           "password": "xsaxsaxsa@11",
    //           "instanceId": "gp-xsaxsaxsa",
    //           "port": "541132",
    //           "ownerId": "xsaxsaxsas",
    //           "username": "sadsad"
    //         }
    // 
    // *   holo
    // 
    //         {
    //           "accessId": "*****",
    //           "accessKey": "*****",
    //           "database": "xsaxsaxsa",
    //           "instanceId": "xsaxa",
    //           "tag": "aliyun"
    //         }
    // 
    // *   kafka
    // 
    //         {
    //           "instanceId": "xsax-cn-xsaxsa",
    //           "regionId": "cn-shanghai",
    //           "tag": "aliyun",
    //           "ownerId": "1212121212112"
    //         }
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the data source. You can call the [ListDataSources](https://help.aliyun.com/document_detail/2780072.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The environment in which the data source resides. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The status of the data source. This parameter is deprecated. Do not use this parameter.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
