// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSRESPONSEBODY_HPP_
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
  class ListConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListConnectionsResponseBody() = default ;
    ListConnectionsResponseBody(const ListConnectionsResponseBody &) = default ;
    ListConnectionsResponseBody(ListConnectionsResponseBody &&) = default ;
    ListConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsResponseBody() = default ;
    ListConnectionsResponseBody& operator=(const ListConnectionsResponseBody &) = default ;
    ListConnectionsResponseBody& operator=(ListConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Connections, connections_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Connections, connections_);
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
      class Connections : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Connections& obj) { 
          DARABONBA_PTR_TO_JSON(BindingCalcEngineId, bindingCalcEngineId_);
          DARABONBA_PTR_TO_JSON(ConnectStatus, connectStatus_);
          DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_TO_JSON(Content, content_);
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
        friend void from_json(const Darabonba::Json& j, Connections& obj) { 
          DARABONBA_PTR_FROM_JSON(BindingCalcEngineId, bindingCalcEngineId_);
          DARABONBA_PTR_FROM_JSON(ConnectStatus, connectStatus_);
          DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
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
        Connections() = default ;
        Connections(const Connections &) = default ;
        Connections(Connections &&) = default ;
        Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Connections() = default ;
        Connections& operator=(const Connections &) = default ;
        Connections& operator=(Connections &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindingCalcEngineId_ == nullptr
        && this->connectStatus_ == nullptr && this->connectionType_ == nullptr && this->content_ == nullptr && this->defaultEngine_ == nullptr && this->description_ == nullptr
        && this->envType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->operator_ == nullptr && this->projectId_ == nullptr && this->sequence_ == nullptr && this->shared_ == nullptr && this->status_ == nullptr
        && this->subType_ == nullptr && this->tenantId_ == nullptr; };
        // bindingCalcEngineId Field Functions 
        bool hasBindingCalcEngineId() const { return this->bindingCalcEngineId_ != nullptr;};
        void deleteBindingCalcEngineId() { this->bindingCalcEngineId_ = nullptr;};
        inline int32_t getBindingCalcEngineId() const { DARABONBA_PTR_GET_DEFAULT(bindingCalcEngineId_, 0) };
        inline Connections& setBindingCalcEngineId(int32_t bindingCalcEngineId) { DARABONBA_PTR_SET_VALUE(bindingCalcEngineId_, bindingCalcEngineId) };


        // connectStatus Field Functions 
        bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
        void deleteConnectStatus() { this->connectStatus_ = nullptr;};
        inline int32_t getConnectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, 0) };
        inline Connections& setConnectStatus(int32_t connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


        // connectionType Field Functions 
        bool hasConnectionType() const { return this->connectionType_ != nullptr;};
        void deleteConnectionType() { this->connectionType_ = nullptr;};
        inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
        inline Connections& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Connections& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // defaultEngine Field Functions 
        bool hasDefaultEngine() const { return this->defaultEngine_ != nullptr;};
        void deleteDefaultEngine() { this->defaultEngine_ = nullptr;};
        inline bool getDefaultEngine() const { DARABONBA_PTR_GET_DEFAULT(defaultEngine_, false) };
        inline Connections& setDefaultEngine(bool defaultEngine) { DARABONBA_PTR_SET_VALUE(defaultEngine_, defaultEngine) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Connections& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
        inline Connections& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Connections& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Connections& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline Connections& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Connections& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Connections& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
        inline Connections& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
        inline Connections& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // shared Field Functions 
        bool hasShared() const { return this->shared_ != nullptr;};
        void deleteShared() { this->shared_ = nullptr;};
        inline bool getShared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
        inline Connections& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Connections& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline Connections& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline Connections& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      protected:
        // The ID of the compute engine with which the data source is associated.
        shared_ptr<int32_t> bindingCalcEngineId_ {};
        // The status of the data source. Valid values:
        // 
        // *   1: The data source is normal.
        // *   2: The data source is disabled.
        shared_ptr<int32_t> connectStatus_ {};
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
        shared_ptr<string> connectionType_ {};
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
        shared_ptr<string> content_ {};
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
        shared_ptr<int32_t> id_ {};
        // The name of the data source.
        shared_ptr<string> name_ {};
        // The ID of the Alibaba Cloud account that is used to last modify the data source.
        shared_ptr<string> operator_ {};
        // The ID of the workspace with which the data source is associated.
        shared_ptr<int32_t> projectId_ {};
        // The field that is used to sort data sources. Data sources are sorted in descending order based on the value of this parameter.
        shared_ptr<int32_t> sequence_ {};
        // Indicates whether the data source is a shared data source.
        shared_ptr<bool> shared_ {};
        // The status of the data source. Valid values:
        // 
        // *   1: The data source is normal.
        // *   2: The data source is disabled.
        shared_ptr<int32_t> status_ {};
        // The subtype of the data source. This parameter is used in scenarios where a type includes subtypes. The following type and subtypes are supported:
        // 
        // *   Type: `rds`
        // *   Subtypes: `mysql`, `sqlserver`, and `postgresql`.
        shared_ptr<string> subType_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
      };

      virtual bool empty() const override { return this->connections_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // connections Field Functions 
      bool hasConnections() const { return this->connections_ != nullptr;};
      void deleteConnections() { this->connections_ = nullptr;};
      inline const vector<Data::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Data::Connections>) };
      inline vector<Data::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<Data::Connections>) };
      inline Data& setConnections(const vector<Data::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
      inline Data& setConnections(vector<Data::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


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
      shared_ptr<vector<Data::Connections>> connections_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of data sources returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListConnectionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListConnectionsResponseBody::Data) };
    inline ListConnectionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListConnectionsResponseBody::Data) };
    inline ListConnectionsResponseBody& setData(const ListConnectionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConnectionsResponseBody& setData(ListConnectionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListConnectionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListConnectionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The query results for data sources that are returned on multiple pages.
    shared_ptr<ListConnectionsResponseBody::Data> data_ {};
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
