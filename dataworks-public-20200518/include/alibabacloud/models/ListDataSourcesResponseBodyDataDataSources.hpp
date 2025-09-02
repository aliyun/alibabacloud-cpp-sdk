// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATADATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATADATASOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataSourcesResponseBodyDataDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyDataDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(BindingCalcEngineId, bindingCalcEngineId_);
      DARABONBA_PTR_TO_JSON(ConnectStatus, connectStatus_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DefaultEngine, defaultEngine_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyDataDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingCalcEngineId, bindingCalcEngineId_);
      DARABONBA_PTR_FROM_JSON(ConnectStatus, connectStatus_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DefaultEngine, defaultEngine_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListDataSourcesResponseBodyDataDataSources() = default ;
    ListDataSourcesResponseBodyDataDataSources(const ListDataSourcesResponseBodyDataDataSources &) = default ;
    ListDataSourcesResponseBodyDataDataSources(ListDataSourcesResponseBodyDataDataSources &&) = default ;
    ListDataSourcesResponseBodyDataDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyDataDataSources() = default ;
    ListDataSourcesResponseBodyDataDataSources& operator=(const ListDataSourcesResponseBodyDataDataSources &) = default ;
    ListDataSourcesResponseBodyDataDataSources& operator=(ListDataSourcesResponseBodyDataDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindingCalcEngineId_ != nullptr
        && this->connectStatus_ != nullptr && this->content_ != nullptr && this->dataSourceType_ != nullptr && this->defaultEngine_ != nullptr && this->description_ != nullptr
        && this->envType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->operator_ != nullptr && this->projectId_ != nullptr && this->sequence_ != nullptr && this->shared_ != nullptr && this->status_ != nullptr
        && this->subType_ != nullptr && this->tenantId_ != nullptr; };
    // bindingCalcEngineId Field Functions 
    bool hasBindingCalcEngineId() const { return this->bindingCalcEngineId_ != nullptr;};
    void deleteBindingCalcEngineId() { this->bindingCalcEngineId_ = nullptr;};
    inline int64_t bindingCalcEngineId() const { DARABONBA_PTR_GET_DEFAULT(bindingCalcEngineId_, 0L) };
    inline ListDataSourcesResponseBodyDataDataSources& setBindingCalcEngineId(int64_t bindingCalcEngineId) { DARABONBA_PTR_SET_VALUE(bindingCalcEngineId_, bindingCalcEngineId) };


    // connectStatus Field Functions 
    bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
    void deleteConnectStatus() { this->connectStatus_ = nullptr;};
    inline int32_t connectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, 0) };
    inline ListDataSourcesResponseBodyDataDataSources& setConnectStatus(int32_t connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // defaultEngine Field Functions 
    bool hasDefaultEngine() const { return this->defaultEngine_ != nullptr;};
    void deleteDefaultEngine() { this->defaultEngine_ = nullptr;};
    inline bool defaultEngine() const { DARABONBA_PTR_GET_DEFAULT(defaultEngine_, false) };
    inline ListDataSourcesResponseBodyDataDataSources& setDefaultEngine(bool defaultEngine) { DARABONBA_PTR_SET_VALUE(defaultEngine_, defaultEngine) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline ListDataSourcesResponseBodyDataDataSources& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataSourcesResponseBodyDataDataSources& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ListDataSourcesResponseBodyDataDataSources& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListDataSourcesResponseBodyDataDataSources& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline bool shared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
    inline ListDataSourcesResponseBodyDataDataSources& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDataSourcesResponseBodyDataDataSources& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ListDataSourcesResponseBodyDataDataSources& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListDataSourcesResponseBodyDataDataSources& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the compute engine with which the data source is associated.
    std::shared_ptr<int64_t> bindingCalcEngineId_ = nullptr;
    // The status of the data source. Valid values:
    // 
    // *   1: The data source is accessible.
    // *   2: The data source is inaccessible.
    std::shared_ptr<int32_t> connectStatus_ = nullptr;
    // The data connection string. The value of this parameter is in the JSON format. Examples of connection strings of common data sources:
    // 
    // *   MaxCompute
    // 
    //         {
    //           "pubEndpoint": "http://service.cn.maxcompute.aliyun.com/api",
    //           "accessId": "xxxxxxx",
    //           "securityToken": null,
    //           "endpoint": "http://service.cn.maxcompute.aliyun-inc.com/api",
    //           "accessKey": "***",
    //           "name": "PRE_PROJECT_A_engine",
    //           "project": "PRE_PROJECT_A",
    //           "vpcEndpoint": "http://service.cn.maxcompute.aliyun-inc.com/api",
    //           "region": "cn-shanghai",
    //           "authType": "2"
    //         }
    // 
    // *   mysql
    // 
    //         {
    //           "configType": "1",
    //           "database": "mysql_d111b",
    //           "instanceName": "rm-xxxxxx",
    //           "password": "***",
    //           "rdsOwnerId": "12133xxxxxx",
    //           "tag": "rds",
    //           "username": "mysql_db111"
    //         }
    // 
    // *   sqlserver
    // 
    //         {
    //           "configType": "1",
    //           "jdbcUrl": "jdbc:sqlserver://rm-xxxxx.sqlserver.rds.aliyuncs.com:1433;DatabaseName=sqlserver_db1",
    //           "password": "***",
    //           "tag": "public",
    //           "username": "sqlserver_db111"
    //         }
    // 
    // *   oss
    // 
    //         {
    //           "accessId": "***********",
    //           "accessKey": "***********",
    //           "bucket": "bigxxx1223",
    //           "configType": "1",
    //           "endpoint": "http://oss-cn-hangzhou.aliyuncs.com",
    //           "tag": "public"
    //         }
    // 
    // *   postgresql
    // 
    //         {
    //           "configType": "1",
    //           "database": "cdp_xxx",
    //           "instanceName": "rm-xxxx",
    //           "password": "***",
    //           "rdsOwnerId": "121xxxxx",
    //           "tag": "rds",
    //           "username": "cdp_xxx"
    //         }
    // 
    // *   ads
    // 
    //         {
    //           "configType": "1",
    //           "password": "***",
    //           "schema": "ads_demo",
    //           "tag": "public",
    //           "url": "ads-xxx-xxxx.cn-hangzhou-1.ads.aliyuncs.com:3029",
    //           "username": "lslslsls"
    //         }
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
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // Indicates whether the compute engine that is associated with the data source is the default compute engine used by data sources of the same type.
    std::shared_ptr<bool> defaultEngine_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The environment in which the data source is used. Valid values:
    // 
    // *   0: development environment
    // *   1: production environment
    std::shared_ptr<int32_t> envType_ = nullptr;
    // The time when the data source was created. Example: Mar 17, 2021 4:09:32 PM.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the data source was last modified. Example: Mar 17, 2021 4:09:32 PM.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The data source ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to last modify the data source.
    std::shared_ptr<string> operator_ = nullptr;
    // The ID of the workspace to which the data source belongs.
    std::shared_ptr<int32_t> projectId_ = nullptr;
    // The sequence number of the data source. Data sources are sorted in descending order based on the value of this parameter.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // Indicates whether the data source is a shared data source.
    std::shared_ptr<bool> shared_ = nullptr;
    // The status of the data source. Valid values:
    // 
    // *   1: The data source is accessible.
    // *   2: The data source is inaccessible.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The subtype of the data source. This parameter takes effect only when the DataSourceType parameter is set to rds.
    std::shared_ptr<string> subType_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
