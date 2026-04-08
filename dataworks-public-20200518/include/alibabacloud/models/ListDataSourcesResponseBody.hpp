// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
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
  class ListDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody(ListDataSourcesResponseBody &&) = default ;
    ListDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody& operator=(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody& operator=(ListDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
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
      class DataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
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
        DataSources() = default ;
        DataSources(const DataSources &) = default ;
        DataSources(DataSources &&) = default ;
        DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSources() = default ;
        DataSources& operator=(const DataSources &) = default ;
        DataSources& operator=(DataSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingCalcEngineId_ == nullptr
        && this->connectStatus_ == nullptr && this->content_ == nullptr && this->dataSourceType_ == nullptr && this->defaultEngine_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->operator_ == nullptr && this->projectId_ == nullptr && this->sequence_ == nullptr && this->shared_ == nullptr && this->status_ == nullptr
        && this->subType_ == nullptr && this->tenantId_ == nullptr; };
        // bindingCalcEngineId Field Functions 
        bool hasBindingCalcEngineId() const { return this->bindingCalcEngineId_ != nullptr;};
        void deleteBindingCalcEngineId() { this->bindingCalcEngineId_ = nullptr;};
        inline int64_t getBindingCalcEngineId() const { DARABONBA_PTR_GET_DEFAULT(bindingCalcEngineId_, 0L) };
        inline DataSources& setBindingCalcEngineId(int64_t bindingCalcEngineId) { DARABONBA_PTR_SET_VALUE(bindingCalcEngineId_, bindingCalcEngineId) };


        // connectStatus Field Functions 
        bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
        void deleteConnectStatus() { this->connectStatus_ = nullptr;};
        inline int32_t getConnectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, 0) };
        inline DataSources& setConnectStatus(int32_t connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline DataSources& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataSourceType Field Functions 
        bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
        void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
        inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
        inline DataSources& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


        // defaultEngine Field Functions 
        bool hasDefaultEngine() const { return this->defaultEngine_ != nullptr;};
        void deleteDefaultEngine() { this->defaultEngine_ = nullptr;};
        inline bool getDefaultEngine() const { DARABONBA_PTR_GET_DEFAULT(defaultEngine_, false) };
        inline DataSources& setDefaultEngine(bool defaultEngine) { DARABONBA_PTR_SET_VALUE(defaultEngine_, defaultEngine) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataSources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
        inline DataSources& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline DataSources& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline DataSources& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataSources& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline DataSources& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline DataSources& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
        inline DataSources& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // shared Field Functions 
        bool hasShared() const { return this->shared_ != nullptr;};
        void deleteShared() { this->shared_ = nullptr;};
        inline bool getShared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
        inline DataSources& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DataSources& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline DataSources& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline DataSources& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The ID of the compute engine with which the data source is associated.
        shared_ptr<int64_t> bindingCalcEngineId_ {};
        // The status of the data source. Valid values:
        // 
        // *   1: The data source is accessible.
        // *   2: The data source is inaccessible.
        shared_ptr<int32_t> connectStatus_ {};
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
        shared_ptr<string> content_ {};
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
        shared_ptr<string> dataSourceType_ {};
        // Indicates whether the compute engine that is associated with the data source is the default compute engine used by data sources of the same type.
        shared_ptr<bool> defaultEngine_ {};
        // The description of the data source.
        shared_ptr<string> description_ {};
        // The environment in which the data source is used. Valid values:
        // 
        // *   0: development environment
        // *   1: production environment
        shared_ptr<int32_t> envType_ {};
        // The time when the data source was created. Example: Mar 17, 2021 4:09:32 PM.
        shared_ptr<string> gmtCreate_ {};
        // The time when the data source was last modified. Example: Mar 17, 2021 4:09:32 PM.
        shared_ptr<string> gmtModified_ {};
        // The data source ID.
        shared_ptr<int64_t> id_ {};
        // The name of the data source.
        shared_ptr<string> name_ {};
        // The ID of the Alibaba Cloud account that is used to last modify the data source.
        shared_ptr<string> operator_ {};
        // The ID of the workspace to which the data source belongs.
        shared_ptr<int32_t> projectId_ {};
        // The sequence number of the data source. Data sources are sorted in descending order based on the value of this parameter.
        shared_ptr<int32_t> sequence_ {};
        // Indicates whether the data source is a shared data source.
        shared_ptr<bool> shared_ {};
        // The status of the data source. Valid values:
        // 
        // *   1: The data source is accessible.
        // *   2: The data source is inaccessible.
        shared_ptr<int32_t> status_ {};
        // The subtype of the data source. This parameter takes effect only when the DataSourceType parameter is set to rds.
        shared_ptr<string> subType_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->dataSources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<Data::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Data::DataSources>) };
      inline vector<Data::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<Data::DataSources>) };
      inline Data& setDataSources(const vector<Data::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline Data& setDataSources(vector<Data::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


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
      // The data sources.
      shared_ptr<vector<Data::DataSources>> dataSources_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of data sources.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataSourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataSourcesResponseBody::Data) };
    inline ListDataSourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataSourcesResponseBody::Data) };
    inline ListDataSourcesResponseBody& setData(const ListDataSourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataSourcesResponseBody& setData(ListDataSourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataSourcesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataSourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The query result returned.
    shared_ptr<ListDataSourcesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
