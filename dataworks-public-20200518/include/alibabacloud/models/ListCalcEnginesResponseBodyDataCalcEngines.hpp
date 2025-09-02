// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCENGINESRESPONSEBODYDATACALCENGINES_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCENGINESRESPONSEBODYDATACALCENGINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCalcEnginesResponseBodyDataCalcEngines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalcEnginesResponseBodyDataCalcEngines& obj) { 
      DARABONBA_PTR_TO_JSON(BindingProjectId, bindingProjectId_);
      DARABONBA_PTR_TO_JSON(BindingProjectName, bindingProjectName_);
      DARABONBA_PTR_TO_JSON(CalcEngineType, calcEngineType_);
      DARABONBA_PTR_TO_JSON(DwRegion, dwRegion_);
      DARABONBA_PTR_TO_JSON(EngineId, engineId_);
      DARABONBA_ANY_TO_JSON(EngineInfo, engineInfo_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TaskAuthType, taskAuthType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalcEnginesResponseBodyDataCalcEngines& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingProjectId, bindingProjectId_);
      DARABONBA_PTR_FROM_JSON(BindingProjectName, bindingProjectName_);
      DARABONBA_PTR_FROM_JSON(CalcEngineType, calcEngineType_);
      DARABONBA_PTR_FROM_JSON(DwRegion, dwRegion_);
      DARABONBA_PTR_FROM_JSON(EngineId, engineId_);
      DARABONBA_ANY_FROM_JSON(EngineInfo, engineInfo_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TaskAuthType, taskAuthType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListCalcEnginesResponseBodyDataCalcEngines() = default ;
    ListCalcEnginesResponseBodyDataCalcEngines(const ListCalcEnginesResponseBodyDataCalcEngines &) = default ;
    ListCalcEnginesResponseBodyDataCalcEngines(ListCalcEnginesResponseBodyDataCalcEngines &&) = default ;
    ListCalcEnginesResponseBodyDataCalcEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalcEnginesResponseBodyDataCalcEngines() = default ;
    ListCalcEnginesResponseBodyDataCalcEngines& operator=(const ListCalcEnginesResponseBodyDataCalcEngines &) = default ;
    ListCalcEnginesResponseBodyDataCalcEngines& operator=(ListCalcEnginesResponseBodyDataCalcEngines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindingProjectId_ != nullptr
        && this->bindingProjectName_ != nullptr && this->calcEngineType_ != nullptr && this->dwRegion_ != nullptr && this->engineId_ != nullptr && this->engineInfo_ != nullptr
        && this->envType_ != nullptr && this->gmtCreate_ != nullptr && this->isDefault_ != nullptr && this->name_ != nullptr && this->region_ != nullptr
        && this->taskAuthType_ != nullptr && this->tenantId_ != nullptr; };
    // bindingProjectId Field Functions 
    bool hasBindingProjectId() const { return this->bindingProjectId_ != nullptr;};
    void deleteBindingProjectId() { this->bindingProjectId_ = nullptr;};
    inline int32_t bindingProjectId() const { DARABONBA_PTR_GET_DEFAULT(bindingProjectId_, 0) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setBindingProjectId(int32_t bindingProjectId) { DARABONBA_PTR_SET_VALUE(bindingProjectId_, bindingProjectId) };


    // bindingProjectName Field Functions 
    bool hasBindingProjectName() const { return this->bindingProjectName_ != nullptr;};
    void deleteBindingProjectName() { this->bindingProjectName_ = nullptr;};
    inline string bindingProjectName() const { DARABONBA_PTR_GET_DEFAULT(bindingProjectName_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setBindingProjectName(string bindingProjectName) { DARABONBA_PTR_SET_VALUE(bindingProjectName_, bindingProjectName) };


    // calcEngineType Field Functions 
    bool hasCalcEngineType() const { return this->calcEngineType_ != nullptr;};
    void deleteCalcEngineType() { this->calcEngineType_ = nullptr;};
    inline string calcEngineType() const { DARABONBA_PTR_GET_DEFAULT(calcEngineType_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setCalcEngineType(string calcEngineType) { DARABONBA_PTR_SET_VALUE(calcEngineType_, calcEngineType) };


    // dwRegion Field Functions 
    bool hasDwRegion() const { return this->dwRegion_ != nullptr;};
    void deleteDwRegion() { this->dwRegion_ = nullptr;};
    inline string dwRegion() const { DARABONBA_PTR_GET_DEFAULT(dwRegion_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setDwRegion(string dwRegion) { DARABONBA_PTR_SET_VALUE(dwRegion_, dwRegion) };


    // engineId Field Functions 
    bool hasEngineId() const { return this->engineId_ != nullptr;};
    void deleteEngineId() { this->engineId_ = nullptr;};
    inline int32_t engineId() const { DARABONBA_PTR_GET_DEFAULT(engineId_, 0) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setEngineId(int32_t engineId) { DARABONBA_PTR_SET_VALUE(engineId_, engineId) };


    // engineInfo Field Functions 
    bool hasEngineInfo() const { return this->engineInfo_ != nullptr;};
    void deleteEngineInfo() { this->engineInfo_ = nullptr;};
    inline     const Darabonba::Json & engineInfo() const { DARABONBA_GET(engineInfo_) };
    Darabonba::Json & engineInfo() { DARABONBA_GET(engineInfo_) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setEngineInfo(const Darabonba::Json & engineInfo) { DARABONBA_SET_VALUE(engineInfo_, engineInfo) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setEngineInfo(Darabonba::Json & engineInfo) { DARABONBA_SET_RVALUE(engineInfo_, engineInfo) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // taskAuthType Field Functions 
    bool hasTaskAuthType() const { return this->taskAuthType_ != nullptr;};
    void deleteTaskAuthType() { this->taskAuthType_ = nullptr;};
    inline string taskAuthType() const { DARABONBA_PTR_GET_DEFAULT(taskAuthType_, "") };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setTaskAuthType(string taskAuthType) { DARABONBA_PTR_SET_VALUE(taskAuthType_, taskAuthType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListCalcEnginesResponseBodyDataCalcEngines& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the workspace with which the compute engine is associated.
    std::shared_ptr<int32_t> bindingProjectId_ = nullptr;
    // The name of the workspace with which the compute engine is associated.
    std::shared_ptr<string> bindingProjectName_ = nullptr;
    // The type of the compute engine.
    std::shared_ptr<string> calcEngineType_ = nullptr;
    // The region where the DataWorks workspace with which the compute engine is associated resides.
    std::shared_ptr<string> dwRegion_ = nullptr;
    // The compute engine ID.
    std::shared_ptr<int32_t> engineId_ = nullptr;
    // The details of the compute engine.
    // 
    // *   ODPS
    // 
    //         {
    //           "pubEndpoint": "service.cn.maxcompute.aliyun.com/api",
    //           "endpoint": "service.cn.maxcompute.aliyun-inc.com/api",
    //           "initProperties": " 
    //           {\\"odpsTypeMode\\":\\"STANDARD\\",\\"openPai\\":false,\\"openPaiGpu\\":false}",
    //           "resourceGroupType": "ODPS",
    //           "resourceGroupId": "361826516****",
    //           "vpcEndpoint": "service.cn.maxcompute.aliyun-inc.com/api",
    //           "projectName": "onefall_test_zjk",
    //           "taskSameAsOwner": "true"
    //         }
    // 
    // *   EMR
    // 
    //         {
    //           "emrClusterId": "C-xxx",
    //           "specs": "{\\"emrClusterId\\":\\"C-xxx\\",\\"emrAccessMode\\":\\"simple\\",\\"emrResourceQueueName\\":\\"default\\",\\"emrProjectId\\":\\"FP-xxx\\"}",
    //           "endpoint": "emr.aliyuncs.com",
    //           "emrResourceQueueName": "default",
    //           "emrAccessMode": "simple",
    //           "resourceGroupType": "DW",
    //           "projectName": "xx-xxxx",
    //           "emrProjectId": "FP-xxxx",
    //           "taskSameAsOwner": "false"
    //         }   
    // 
    // *   BLINK
    // 
    //         {
    //           "bayesProjectId": "xxxx",
    //           "bayesProjectName": "xc_blxxixxxnk_1",
    //           "cluster": "xxxssxsx",
    //           "endpoint": "https://stream.console.aliyun.com",
    //           "engineType": "BLINK",
    //           "name": "xsxsxxxxx",
    //           "projectName": "xc_blxxxsxink_1",
    //           "queue": "root.xc_blxsxxxxxxink_1",
    //           "resourceGroupType": "DW",
    //           "specs": "{\\"cluster\\":\\"xxxxxx\\",\\"bayesProjectName\\":\\"xc_blxxixxxnk_1\\",\\"bayesProjectId\\":\\"ssxxxsa\\",\\"name\\":\\"sxsxsxxx\\",\\"queue\\":\\"root.sxxsxxsx\\"}",
    //           "taskSameAsOwner": false
    //         }
    // 
    // *   HOLO
    // 
    //         {
    //           "endpoint": "hgprecn-cn-xsxssxsx-cn-shanghai-internal.hologres.aliyuncs.com:80",
    //           "engineType": "ODPS",
    //           "odpsEndpoint": "hgprecn-cn-xsxssxxs-cn-shanghai-internal.hologres.aliyuncs.com:80",
    //           "odpsProjectName": "xsxssxsxsx",
    //           "projectName": "xsxssxsxsx",
    //           "resourceGroupType": "DW",
    //           "specs": "{\\"pubEndpoint\\":\\"hgprecn-cn-xsxssxsxs-cn-shanghai.hologres.aliyuncs.com:80\\",\\"commonBuyInstanceId\\":\\"hgprecn-cn-xsxsxsxs\\",\\"project\\":\\"holo_upxsxgrade1\\",\\"common_buy_instance_id\\":\\"hgprecn-cn-xsxsxs\\",\\"endpoint\\":\\"hgprecn-cn-xsxxsxs-cn-shanghai-internal.hologres.aliyuncs.com:80\\",\\"port\\":\\"80\\",\\"host\\":\\"hgprecn-cn-xsxsxsxs-cn-shanghai-internal.hologres.aliyuncs.com\\",\\"vpcEndpoint\\":\\"hgprecn-cn-xsxsxsxs-cn-shanghai-vpc.hologres.aliyuncs.com:80\\",\\"authType\\":2,\\"region\\":\\"cn-shanghai\\"}",
    //           "taskSameAsOwner": false
    //         }
    // 
    // *   MaxGraph
    // 
    //         {
    //           "endpoint": "http://pre-graphcompute.aliyuncs.com",
    //           "engineType": "ODPS",
    //           "odpsEndpoint": "http://pre-graphcompute.aliyuncs.com",
    //           "odpsProjectName": "xsxsxsxs",
    //           "projectName": "xsxsxsxs",
    //           "resourceGroupType": "DW",
    //           "taskSameAsOwner": false
    //         }
    // 
    // *   HYBRIDDB_FOR_POSTGRESQL
    // 
    //         {
    //           "endpoint": "hybriddb_for_postgresql_mo12121ck_endpoint",
    //           "engineType": "ODPS",
    //           "odpsEndpoint": "hybriddb_for_postgresql_m121212ock_endpoint",
    //           "odpsProjectName": "sxasaxsaxaxas",
    //           "projectName": "sxasaxsaxaxas",
    //           "resourceGroupType": "DW",
    //           "specs": "{\\"connectionString\\":\\"gp-xsxsxsxxs.gpdb.rds.aliyuncs.com\\",\\"database\\":\\"xsxsxxsxs\\",\\"password\\":\\"xxxxxxx\\",\\"instanceId\\":\\"gp-cdcdacdacda\\",\\"port\\":\\"3432\\",\\"ownerId\\":\\"12121212\\",\\"username\\":\\"sdasaddsa\\"}",
    //           "taskSameAsOwner": false
    //         }
    // 
    // *   ADB_MYSQL
    // 
    //         {
    //           "endpoint": "adb_mysql_mock_endpoint",
    //           "engineType": "ODPS",
    //           "odpsEndpoint": "adb_mysql_mock_endpoint",
    //           "odpsProjectName": "am-xsaxaxa",
    //           "projectName": "am-xsxsaxa",
    //           "resourceGroupType": "DW",
    //           "specs": "{\\"connectionString\\":\\"am-xsaxsa.ads.aliyuncs.com:3306\\",\\"database\\":\\"xsaxsaxa\\",\\"password\\":\\"xsaxsaxassxsa\\",\\"instanceId\\":\\"am-xsaxsasx\\",\\"username\\":\\"xsaxsadsd\\"}",
    //           "taskSameAsOwner": false
    //         }
    // 
    // *   HADOOP_CDH
    // 
    //         {
    //           "bindingBaseId": "xsaxsaxs",
    //           "endpoint": "xsaaaaa",
    //           "engineType": "ODPS",
    //           "odpsEndpoint": "axsxaxssxs",
    //           "odpsProjectName": "ssxxax",
    //           "projectName": "xsaxsaxsa",
    //           "resourceGroupId": 45208xxxxxx,
    //           "resourceGroupType": "GATEWAY",
    //           "specs": "{\\"cluster\\":{\\"hive\\":{\\"hiveServer2Url\\":\\"jdbc:hive2://xxxxxxer-1-cn-shanghai-pre-kerberos-1:10000\\",\\"hiveMetastore\\":\\"thrift://xxxxxxxr-1-cn-shanghai-pre-kerberos-1:9083\\",\\"version\\":\\"2.1.1\\"},\\"configFiles\\":{\\"coreSite\\":\\"4534574xxxxxx\\",\\"hdfsSite\\":\\"453457919xxxxxxx\\",\\"mapredSite\\":\\"45345750xxxxxx\\",\\"yarnSite\\":\\"4534575xxxxx\\",\\"krb5Conf\\":\\"4534576xxxxx1\\",\\"hiveSite\\":\\"453457xxxxx20\\"},\\"spark\\":{\\"version\\":\\"2.4.0\\"},\\"cdh\\":{\\"version\\":\\"6.3.2\\"},\\"hdfs\\":{\\"version\\":\\"3.0.0\\"},\\"impala\\":{\\"impalaUrl\\":\\"jdbc:impala://cdh-xsxssxxsx-1-cn-shanghai-pre-kerberos-1:21050\\",\\"version\\":\\"3.2.0\\"},\\"yarn\\":{\\"YarnUrl\\":\\"http://cdh-xsxsxsxsxs-1-cn-shanghai-pre-kerberos-1:8032\\",\\"webUrl\\":\\"http://cdh-xsxsxssxxssx-1-cn-shanghai-pre-kerberos-1:8088\\",\\"version\\":\\"3.0.0\\"},\\"presto\\":{\\"prestoUrl\\":\\"jdbc:presto://cdh-xssxsxxsxsxs-1-cn-shanghai-pre-kerberos-1:8080/hive/default\\",\\"version\\":\\"0.244.1\\"}},\\"instanceId\\":161sdads733,\\"authDetail\\":{\\"principal\\":\\"hive@HADOOP.COM\\",\\"keytabFileId\\":\\"45345815xsxsxs3\\",\\"type\\":\\"kerberos\\",\\"username\\":\\"xsxsxsxsa@HADOOP.COM\\"},\\"resGroupStatus\\":\\"\\",\\"hadoopAuthType\\":\\"kerberos\\",\\"clusterIdentifier\\":\\"xssxsxsxsx\\",\\"clusterId\\":xsxsx,\\"resGroupId\\":4520870619xsxssxxs,\\"accessMode\\":\\"security\\",\\"authType\\":2}",
    //           "taskSameAsOwner": false
    //         }
    Darabonba::Json engineInfo_ = nullptr;
    // The environment in which the compute engine is used. Valid values:
    // 
    // *   **DEV**
    // *   **PRD**
    std::shared_ptr<string> envType_ = nullptr;
    // The time when the compute engine was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Indicates whether the compute engine is the default engine of the current type.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The display name of the compute engine.
    std::shared_ptr<string> name_ = nullptr;
    // The region where the compute engine resides.
    std::shared_ptr<string> region_ = nullptr;
    // The identity that is used to access the compute engine. Valid values:
    // 
    // *   **USER**: the current user
    // *   **PROJECT**: the workspace executor
    // *   **SUBACCOUNT**: a RAM user
    // *   **STS_ROLE**: the Security Token Service (STS) role
    std::shared_ptr<string> taskAuthType_ = nullptr;
    // The tenant ID.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
