// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->dataSourceType_ != nullptr && this->description_ != nullptr && this->envType_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr
        && this->subType_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateDataSourceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline CreateDataSourceRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataSourceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline CreateDataSourceRequest& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


  protected:
    // The details of the data source. Examples of details of some common data sources:
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
    // *   redis
    // 
    //         {    
    //         "password": "xxxxxx",   
    //          "address":"[{\\"host\\":\\"xxxxxxx.redis.rds.aliyuncs.com\\",\\"port\\":6379}]",    
    //         "tag": "public"
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
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   odps
    // *   mysql
    // *   rds
    // *   oss
    // *   sqlserver
    // *   polardb
    // *   oracle
    // *   mongodb
    // *   emr
    // *   postgresql
    // *   analyticdb_for_mysql
    // *   hybriddb_for_postgresql
    // *   holo
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The environment in which the data source is used. Valid values: 0 and 1. The value 0 indicates the development environment. The value 1 indicates the production environment.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The name of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the DataWorks workspace to which the data source belongs. You can call the [ListProjects](https://help.aliyun.com/document_detail/2780068.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The subtype of the data source.
    // 
    // *   This parameter takes effect only if you set the DataSourceType parameter to rds.
    // *   If the DataSourceType parameter is set to rds, this parameter can be set to mysql, sqlserver, or postgresql.
    std::shared_ptr<string> subType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
