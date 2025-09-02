// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateConnectionRequest() = default ;
    UpdateConnectionRequest(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest(UpdateConnectionRequest &&) = default ;
    UpdateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequest() = default ;
    UpdateConnectionRequest& operator=(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest& operator=(UpdateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionId_ != nullptr
        && this->content_ != nullptr && this->description_ != nullptr && this->envType_ != nullptr && this->status_ != nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline int64_t connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
    inline UpdateConnectionRequest& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateConnectionRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline UpdateConnectionRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateConnectionRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The data source ID. You can call the [ListConnections](https://help.aliyun.com/document_detail/173911.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> connectionId_ = nullptr;
    // The details of the data source. Examples of details of some common data sources:
    // 
    // *   odps
    // 
    // <!---->
    // 
    //     {
    //       "accessId": "xssssss",
    //       "accessKey": "xsaxsaxsa",
    //       "authType": 2,
    //       "endpoint": "http://service.odps.aliyun.com/api",
    //       "project": "xsaxsax",
    //       "tag": "public"
    //     }
    // 
    // *   mysql
    // 
    // <!---->
    // 
    //     {
    //       "database": "xsaxsa",
    //       "instanceName": "rm-xsaxsa",
    //       "password": "xsaxsa",
    //       "rdsOwnerId": "xasxsa",
    //       "regionId": "cn-shanghai",
    //       "tag": "rds",
    //       "username": "xsaxsa"
    //     }
    // 
    // *   rds
    // 
    // <!---->
    // 
    //     {
    //       "configType": 1,
    //       "tag": "rds",
    //       "database": "xsaxsa",
    //       "username": "xsaxsa",
    //       "password": "xssaxsa$32050",
    //       "instanceName": "rm-xsaxs",
    //       "rdsOwnerId": "11111111"
    //     }
    // 
    // *   oss
    // 
    // <!---->
    // 
    //     {
    //       "accessId": "sssssxx",
    //       "accessKey": "xsaxaxsaxs",
    //       "bucket": "xsa-xs-xs",
    //       "endpoint": "http://oss-cn-shanghai.aliyuncs.com",
    //       "tag": "public"
    //     }
    // 
    // *   sqlserver
    // 
    // <!---->
    // 
    //     {
    //       "jdbcUrl": "jdbc:sqlserver://xsaxsa-xsaxsa.database.xxx.cn:123;DatabaseName=xsxs-xsxs",
    //       "password": "sdasda$fs",
    //       "tag": "public",
    //       "username": "sxaxacdacdd"
    //     }
    // 
    // *   polardb
    // 
    // <!---->
    // 
    //     {
    //       "clusterId": "pc-sdadsadsa",
    //       "database": "dsadsadsa",
    //       "ownerId": "121212122",
    //       "password": "sdasdafssa",
    //       "region": "cn-shanghai",
    //       "tag": "polardb",
    //       "username": "asdadsads"
    //     }
    // 
    // *   oracle
    // 
    // <!---->
    // 
    //     {
    //       "jdbcUrl": "jdbc:oracle:saaa:@xxxxx:1521:PROD",
    //       "password": "sxasaxsa",
    //       "tag": "public",
    //       "username": "sasfadfa"
    //     }
    // 
    // *   mongodb
    // 
    // <!---->
    // 
    //     {
    //       "address": "[\\"xsaxxsa.mongodb.rds.aliyuncs.com:3717\\"]",
    //       "database": "admin",
    //       "password": "sadsda@",
    //       "tag": "public",
    //       "username": "dsadsadas"
    //     }
    // 
    // *   emr
    // 
    // <!---->
    // 
    //     {
    //       "accessId": "xsaxsa",
    //       "emrClusterId": "C-dsads",
    //       "emrResourceQueueName": "default",
    //       "emrEndpoint": "emr.aliyuncs.com",
    //       "accessKey": "dsadsad",
    //       "emrUserId": "224833315798889783",
    //       "name": "sasdsadsa",
    //       "emrAccessMode": "simple",
    //       "region": "cn-shanghai",
    //       "authType": "2",
    //       "emrProjectId": "FP-sdadsad"
    //     }
    // 
    // *   postgresql
    // 
    // <!---->
    // 
    //     {
    //       "jdbcUrl": "jdbc:postgresql://xxxx:1921/ssss",
    //       "password": "sdadsads",
    //       "tag": "public",
    //       "username": "sdsasda"
    //     }
    // 
    // *   analyticdb_for_mysql
    // 
    // <!---->
    // 
    //     {
    //       "instanceId": "am-sadsada",
    //       "database": "xsxsx",
    //       "username": "xsxsa",
    //       "password": "asdadsa",
    //       "connectionString": "am-xssxsxs.ads.aliyuncs.com:3306"
    //     }
    // 
    // *   hybriddb_for_postgresql
    // 
    // <!---->
    // 
    //     {
    //       "connectionString": "gp-xsaxsaxa-master.gpdbmaster.rds.aliyuncs.com",
    //       "database": "xsaxsaxas",
    //       "password": "xsaxsaxsa@11",
    //       "instanceId": "gp-xsaxsaxsa",
    //       "port": "541132",
    //       "ownerId": "xsaxsaxsas",
    //       "username": "sadsad"
    //     }
    // 
    // *   holo
    // 
    // <!---->
    // 
    //     {
    //       "accessId": "xsaxsaxs",
    //       "accessKey": "xsaxsaxsa",
    //       "database": "xsaxsaxsa",
    //       "instanceId": "xsaxa",
    //       "tag": "aliyun"
    //     }
    // 
    // *   kafka
    // 
    // <!---->
    // 
    //     {
    //       "instanceId": "xsax-cn-xsaxsa",
    //       "regionId": "cn-shanghai",
    //       "tag": "aliyun",
    //       "ownerId": "1212121212112"
    //     }
    std::shared_ptr<string> content_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The environment in which the data source is used. Valid values: 0 and 1. The value 0 indicates the development environment. The value 1 indicates the production environment.
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The status of the data source. Valid values: ENABLED and DISABLED. The value ENABLED indicates that the data source is in the normal state. The value DISABLED indicates that the data source is in an abnormal state.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
