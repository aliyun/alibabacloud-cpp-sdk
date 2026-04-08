// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCENGINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCENGINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCalcEnginesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalcEnginesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalcEnginesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCalcEnginesResponseBody() = default ;
    ListCalcEnginesResponseBody(const ListCalcEnginesResponseBody &) = default ;
    ListCalcEnginesResponseBody(ListCalcEnginesResponseBody &&) = default ;
    ListCalcEnginesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalcEnginesResponseBody() = default ;
    ListCalcEnginesResponseBody& operator=(const ListCalcEnginesResponseBody &) = default ;
    ListCalcEnginesResponseBody& operator=(ListCalcEnginesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CalcEngines, calcEngines_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CalcEngines, calcEngines_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CalcEngines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CalcEngines& obj) { 
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
        friend void from_json(const Darabonba::Json& j, CalcEngines& obj) { 
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
        CalcEngines() = default ;
        CalcEngines(const CalcEngines &) = default ;
        CalcEngines(CalcEngines &&) = default ;
        CalcEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CalcEngines() = default ;
        CalcEngines& operator=(const CalcEngines &) = default ;
        CalcEngines& operator=(CalcEngines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingProjectId_ == nullptr
        && this->bindingProjectName_ == nullptr && this->calcEngineType_ == nullptr && this->dwRegion_ == nullptr && this->engineId_ == nullptr && this->engineInfo_ == nullptr
        && this->envType_ == nullptr && this->gmtCreate_ == nullptr && this->isDefault_ == nullptr && this->name_ == nullptr && this->region_ == nullptr
        && this->taskAuthType_ == nullptr && this->tenantId_ == nullptr; };
        // bindingProjectId Field Functions 
        bool hasBindingProjectId() const { return this->bindingProjectId_ != nullptr;};
        void deleteBindingProjectId() { this->bindingProjectId_ = nullptr;};
        inline int32_t getBindingProjectId() const { DARABONBA_PTR_GET_DEFAULT(bindingProjectId_, 0) };
        inline CalcEngines& setBindingProjectId(int32_t bindingProjectId) { DARABONBA_PTR_SET_VALUE(bindingProjectId_, bindingProjectId) };


        // bindingProjectName Field Functions 
        bool hasBindingProjectName() const { return this->bindingProjectName_ != nullptr;};
        void deleteBindingProjectName() { this->bindingProjectName_ = nullptr;};
        inline string getBindingProjectName() const { DARABONBA_PTR_GET_DEFAULT(bindingProjectName_, "") };
        inline CalcEngines& setBindingProjectName(string bindingProjectName) { DARABONBA_PTR_SET_VALUE(bindingProjectName_, bindingProjectName) };


        // calcEngineType Field Functions 
        bool hasCalcEngineType() const { return this->calcEngineType_ != nullptr;};
        void deleteCalcEngineType() { this->calcEngineType_ = nullptr;};
        inline string getCalcEngineType() const { DARABONBA_PTR_GET_DEFAULT(calcEngineType_, "") };
        inline CalcEngines& setCalcEngineType(string calcEngineType) { DARABONBA_PTR_SET_VALUE(calcEngineType_, calcEngineType) };


        // dwRegion Field Functions 
        bool hasDwRegion() const { return this->dwRegion_ != nullptr;};
        void deleteDwRegion() { this->dwRegion_ = nullptr;};
        inline string getDwRegion() const { DARABONBA_PTR_GET_DEFAULT(dwRegion_, "") };
        inline CalcEngines& setDwRegion(string dwRegion) { DARABONBA_PTR_SET_VALUE(dwRegion_, dwRegion) };


        // engineId Field Functions 
        bool hasEngineId() const { return this->engineId_ != nullptr;};
        void deleteEngineId() { this->engineId_ = nullptr;};
        inline int32_t getEngineId() const { DARABONBA_PTR_GET_DEFAULT(engineId_, 0) };
        inline CalcEngines& setEngineId(int32_t engineId) { DARABONBA_PTR_SET_VALUE(engineId_, engineId) };


        // engineInfo Field Functions 
        bool hasEngineInfo() const { return this->engineInfo_ != nullptr;};
        void deleteEngineInfo() { this->engineInfo_ = nullptr;};
        inline         const Darabonba::Json & getEngineInfo() const { DARABONBA_GET(engineInfo_) };
        Darabonba::Json & getEngineInfo() { DARABONBA_GET(engineInfo_) };
        inline CalcEngines& setEngineInfo(const Darabonba::Json & engineInfo) { DARABONBA_SET_VALUE(engineInfo_, engineInfo) };
        inline CalcEngines& setEngineInfo(Darabonba::Json && engineInfo) { DARABONBA_SET_RVALUE(engineInfo_, engineInfo) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline CalcEngines& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline CalcEngines& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline CalcEngines& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CalcEngines& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline CalcEngines& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // taskAuthType Field Functions 
        bool hasTaskAuthType() const { return this->taskAuthType_ != nullptr;};
        void deleteTaskAuthType() { this->taskAuthType_ = nullptr;};
        inline string getTaskAuthType() const { DARABONBA_PTR_GET_DEFAULT(taskAuthType_, "") };
        inline CalcEngines& setTaskAuthType(string taskAuthType) { DARABONBA_PTR_SET_VALUE(taskAuthType_, taskAuthType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline CalcEngines& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The ID of the workspace with which the compute engine is associated.
        shared_ptr<int32_t> bindingProjectId_ {};
        // The name of the workspace with which the compute engine is associated.
        shared_ptr<string> bindingProjectName_ {};
        // The type of the compute engine.
        shared_ptr<string> calcEngineType_ {};
        // The region where the DataWorks workspace with which the compute engine is associated resides.
        shared_ptr<string> dwRegion_ {};
        // The compute engine ID.
        shared_ptr<int32_t> engineId_ {};
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
        Darabonba::Json engineInfo_ {};
        // The environment in which the compute engine is used. Valid values:
        // 
        // *   **DEV**
        // *   **PRD**
        shared_ptr<string> envType_ {};
        // The time when the compute engine was created.
        shared_ptr<string> gmtCreate_ {};
        // Indicates whether the compute engine is the default engine of the current type.
        shared_ptr<bool> isDefault_ {};
        // The display name of the compute engine.
        shared_ptr<string> name_ {};
        // The region where the compute engine resides.
        shared_ptr<string> region_ {};
        // The identity that is used to access the compute engine. Valid values:
        // 
        // *   **USER**: the current user
        // *   **PROJECT**: the workspace executor
        // *   **SUBACCOUNT**: a RAM user
        // *   **STS_ROLE**: the Security Token Service (STS) role
        shared_ptr<string> taskAuthType_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->calcEngines_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // calcEngines Field Functions 
      bool hasCalcEngines() const { return this->calcEngines_ != nullptr;};
      void deleteCalcEngines() { this->calcEngines_ = nullptr;};
      inline const vector<Data::CalcEngines> & getCalcEngines() const { DARABONBA_PTR_GET_CONST(calcEngines_, vector<Data::CalcEngines>) };
      inline vector<Data::CalcEngines> getCalcEngines() { DARABONBA_PTR_GET(calcEngines_, vector<Data::CalcEngines>) };
      inline Data& setCalcEngines(const vector<Data::CalcEngines> & calcEngines) { DARABONBA_PTR_SET_VALUE(calcEngines_, calcEngines) };
      inline Data& setCalcEngines(vector<Data::CalcEngines> && calcEngines) { DARABONBA_PTR_SET_RVALUE(calcEngines_, calcEngines) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The compute engines.
      shared_ptr<vector<Data::CalcEngines>> calcEngines_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of compute engine instances.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCalcEnginesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCalcEnginesResponseBody::Data) };
    inline ListCalcEnginesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCalcEnginesResponseBody::Data) };
    inline ListCalcEnginesResponseBody& setData(const ListCalcEnginesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCalcEnginesResponseBody& setData(ListCalcEnginesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCalcEnginesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalcEnginesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCalcEnginesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The query results for compute engines that are returned on multiple pages.
    shared_ptr<ListCalcEnginesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
