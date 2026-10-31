// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBatchTemplateVersionsResponseBody() = default ;
    GetBatchTemplateVersionsResponseBody(const GetBatchTemplateVersionsResponseBody &) = default ;
    GetBatchTemplateVersionsResponseBody(GetBatchTemplateVersionsResponseBody &&) = default ;
    GetBatchTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTemplateVersionsResponseBody() = default ;
    GetBatchTemplateVersionsResponseBody& operator=(const GetBatchTemplateVersionsResponseBody &) = default ;
    GetBatchTemplateVersionsResponseBody& operator=(GetBatchTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateVersionList, templateVersionList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateVersionList, templateVersionList_);
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
      class TemplateVersionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TemplateVersionList& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DevResourceGroupId, devResourceGroupId_);
          DARABONBA_PTR_TO_JSON(DevResourceGroupName, devResourceGroupName_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_TO_JSON(ShareRuntimeResource, shareRuntimeResource_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, TemplateVersionList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DevResourceGroupId, devResourceGroupId_);
          DARABONBA_PTR_FROM_JSON(DevResourceGroupName, devResourceGroupName_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
          DARABONBA_PTR_FROM_JSON(ShareRuntimeResource, shareRuntimeResource_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        TemplateVersionList() = default ;
        TemplateVersionList(const TemplateVersionList &) = default ;
        TemplateVersionList(TemplateVersionList &&) = default ;
        TemplateVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TemplateVersionList() = default ;
        TemplateVersionList& operator=(const TemplateVersionList &) = default ;
        TemplateVersionList& operator=(TemplateVersionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PythonModuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PythonModuleList& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PythonVersion, pythonVersion_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, PythonModuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PythonVersion, pythonVersion_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          PythonModuleList() = default ;
          PythonModuleList(const PythonModuleList &) = default ;
          PythonModuleList(PythonModuleList &&) = default ;
          PythonModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PythonModuleList() = default ;
          PythonModuleList& operator=(const PythonModuleList &) = default ;
          PythonModuleList& operator=(PythonModuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->installTime_ == nullptr && this->name_ == nullptr && this->pythonVersion_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline PythonModuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // installTime Field Functions 
          bool hasInstallTime() const { return this->installTime_ != nullptr;};
          void deleteInstallTime() { this->installTime_ = nullptr;};
          inline string getInstallTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
          inline PythonModuleList& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PythonModuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // pythonVersion Field Functions 
          bool hasPythonVersion() const { return this->pythonVersion_ != nullptr;};
          void deletePythonVersion() { this->pythonVersion_ = nullptr;};
          inline string getPythonVersion() const { DARABONBA_PTR_GET_DEFAULT(pythonVersion_, "") };
          inline PythonModuleList& setPythonVersion(string pythonVersion) { DARABONBA_PTR_SET_VALUE(pythonVersion_, pythonVersion) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PythonModuleList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline PythonModuleList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The ID of the Python third-party package.
          shared_ptr<int64_t> id_ {};
          // The installation time.
          shared_ptr<string> installTime_ {};
          // The name of the Python third-party package.
          shared_ptr<string> name_ {};
          // The Python version. Valid values: PYTHON_2_7, PYTHON_3_7, and PYTHON_3_11.
          shared_ptr<string> pythonVersion_ {};
          // The status of the third-party package. Valid values: INSTALL_SUCCESS (installed), INSTALL_FAILED (installation failed), INSTALLING (installing), UPGRADE_SUCCESS (upgraded), UPGRADE_FAILED (upgrade failed), and UPGRADING (upgrading).
          shared_ptr<string> status_ {};
          // The version of the third-party package.
          shared_ptr<string> version_ {};
        };

        class Params : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Params& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(EncryptEnabled, encryptEnabled_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Params& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(EncryptEnabled, encryptEnabled_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Params() = default ;
          Params(const Params &) = default ;
          Params(Params &&) = default ;
          Params(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Params() = default ;
          Params& operator=(const Params &) = default ;
          Params& operator=(Params &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptEnabled_ == nullptr && this->key_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Params& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // encryptEnabled Field Functions 
          bool hasEncryptEnabled() const { return this->encryptEnabled_ != nullptr;};
          void deleteEncryptEnabled() { this->encryptEnabled_ = nullptr;};
          inline bool getEncryptEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptEnabled_, false) };
          inline Params& setEncryptEnabled(bool encryptEnabled) { DARABONBA_PTR_SET_VALUE(encryptEnabled_, encryptEnabled) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Params& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The parameter description.
          shared_ptr<string> description_ {};
          // Indicates whether encryption is enabled for the parameter.
          shared_ptr<bool> encryptEnabled_ {};
          // The key of the parameter.
          shared_ptr<string> key_ {};
          // The default value of the parameter.
          shared_ptr<string> value_ {};
        };

        class DataSourceConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSourceConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Catalog, catalog_);
            DARABONBA_PTR_TO_JSON(DsId, dsId_);
            DARABONBA_PTR_TO_JSON(Schema, schema_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DataSourceConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
            DARABONBA_PTR_FROM_JSON(DsId, dsId_);
            DARABONBA_PTR_FROM_JSON(Schema, schema_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DataSourceConfig() = default ;
          DataSourceConfig(const DataSourceConfig &) = default ;
          DataSourceConfig(DataSourceConfig &&) = default ;
          DataSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSourceConfig() = default ;
          DataSourceConfig& operator=(const DataSourceConfig &) = default ;
          DataSourceConfig& operator=(DataSourceConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->catalog_ == nullptr
        && this->dsId_ == nullptr && this->schema_ == nullptr && this->type_ == nullptr; };
          // catalog Field Functions 
          bool hasCatalog() const { return this->catalog_ != nullptr;};
          void deleteCatalog() { this->catalog_ = nullptr;};
          inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
          inline DataSourceConfig& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


          // dsId Field Functions 
          bool hasDsId() const { return this->dsId_ != nullptr;};
          void deleteDsId() { this->dsId_ = nullptr;};
          inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
          inline DataSourceConfig& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


          // schema Field Functions 
          bool hasSchema() const { return this->schema_ != nullptr;};
          void deleteSchema() { this->schema_ = nullptr;};
          inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
          inline DataSourceConfig& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DataSourceConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The catalog of the data source for the database SQL template.
          shared_ptr<string> catalog_ {};
          // The ID of the data source for the database SQL template.
          shared_ptr<string> dsId_ {};
          // The schema of the data source for the database SQL template.
          shared_ptr<string> schema_ {};
          // The data source type of the database SQL template. Valid values: MYSQL, ORACLE, ADB_FOR_PG, OUSHUDB, PRESTO, POSTGRE_SQL, STARROCKS, CLICKHOUSE, ANALYTICDB, ADB_FOR_MYSQL_V3, GAUSSDB, SELECTDB, DORIS, SQL_SERVER, HOLOGRES, OPENGAUSS, DAMENG, OCEANBASE, TRINO, POLARDB_X2, LINDORM, EMR_SPARK_SERVERLESS, TDSQL_FOR_PG, TDSQL_FOR_MYSQL, GBASE_8A, and TDENGINE.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->comment_ == nullptr
        && this->content_ == nullptr && this->dataSourceConfig_ == nullptr && this->description_ == nullptr && this->devResourceGroupId_ == nullptr && this->devResourceGroupName_ == nullptr
        && this->engine_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->modifier_ == nullptr
        && this->modifierId_ == nullptr && this->name_ == nullptr && this->operatorType_ == nullptr && this->owner_ == nullptr && this->ownerId_ == nullptr
        && this->params_ == nullptr && this->projectId_ == nullptr && this->pythonModuleList_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceGroupName_ == nullptr
        && this->shareRuntimeResource_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline TemplateVersionList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TemplateVersionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataSourceConfig Field Functions 
        bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
        void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
        inline const TemplateVersionList::DataSourceConfig & getDataSourceConfig() const { DARABONBA_PTR_GET_CONST(dataSourceConfig_, TemplateVersionList::DataSourceConfig) };
        inline TemplateVersionList::DataSourceConfig getDataSourceConfig() { DARABONBA_PTR_GET(dataSourceConfig_, TemplateVersionList::DataSourceConfig) };
        inline TemplateVersionList& setDataSourceConfig(const TemplateVersionList::DataSourceConfig & dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };
        inline TemplateVersionList& setDataSourceConfig(TemplateVersionList::DataSourceConfig && dataSourceConfig) { DARABONBA_PTR_SET_RVALUE(dataSourceConfig_, dataSourceConfig) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TemplateVersionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // devResourceGroupId Field Functions 
        bool hasDevResourceGroupId() const { return this->devResourceGroupId_ != nullptr;};
        void deleteDevResourceGroupId() { this->devResourceGroupId_ = nullptr;};
        inline string getDevResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(devResourceGroupId_, "") };
        inline TemplateVersionList& setDevResourceGroupId(string devResourceGroupId) { DARABONBA_PTR_SET_VALUE(devResourceGroupId_, devResourceGroupId) };


        // devResourceGroupName Field Functions 
        bool hasDevResourceGroupName() const { return this->devResourceGroupName_ != nullptr;};
        void deleteDevResourceGroupName() { this->devResourceGroupName_ = nullptr;};
        inline string getDevResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(devResourceGroupName_, "") };
        inline TemplateVersionList& setDevResourceGroupName(string devResourceGroupName) { DARABONBA_PTR_SET_VALUE(devResourceGroupName_, devResourceGroupName) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline TemplateVersionList& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline TemplateVersionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline TemplateVersionList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TemplateVersionList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline TemplateVersionList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline TemplateVersionList& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TemplateVersionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operatorType Field Functions 
        bool hasOperatorType() const { return this->operatorType_ != nullptr;};
        void deleteOperatorType() { this->operatorType_ = nullptr;};
        inline int32_t getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, 0) };
        inline TemplateVersionList& setOperatorType(int32_t operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline TemplateVersionList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline TemplateVersionList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline const vector<TemplateVersionList::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<TemplateVersionList::Params>) };
        inline vector<TemplateVersionList::Params> getParams() { DARABONBA_PTR_GET(params_, vector<TemplateVersionList::Params>) };
        inline TemplateVersionList& setParams(const vector<TemplateVersionList::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
        inline TemplateVersionList& setParams(vector<TemplateVersionList::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline TemplateVersionList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // pythonModuleList Field Functions 
        bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
        void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
        inline const vector<TemplateVersionList::PythonModuleList> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<TemplateVersionList::PythonModuleList>) };
        inline vector<TemplateVersionList::PythonModuleList> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<TemplateVersionList::PythonModuleList>) };
        inline TemplateVersionList& setPythonModuleList(const vector<TemplateVersionList::PythonModuleList> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
        inline TemplateVersionList& setPythonModuleList(vector<TemplateVersionList::PythonModuleList> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline TemplateVersionList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceGroupName Field Functions 
        bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
        void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
        inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
        inline TemplateVersionList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


        // shareRuntimeResource Field Functions 
        bool hasShareRuntimeResource() const { return this->shareRuntimeResource_ != nullptr;};
        void deleteShareRuntimeResource() { this->shareRuntimeResource_ = nullptr;};
        inline bool getShareRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(shareRuntimeResource_, false) };
        inline TemplateVersionList& setShareRuntimeResource(bool shareRuntimeResource) { DARABONBA_PTR_SET_VALUE(shareRuntimeResource_, shareRuntimeResource) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TemplateVersionList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
        inline TemplateVersionList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The template submission comment.
        shared_ptr<string> comment_ {};
        // The template content.
        shared_ptr<string> content_ {};
        // The data source configuration of the database SQL template.
        shared_ptr<TemplateVersionList::DataSourceConfig> dataSourceConfig_ {};
        // The template description.
        shared_ptr<string> description_ {};
        // The ID of the resource group in the development environment.
        shared_ptr<string> devResourceGroupId_ {};
        // The name of the resource group in the development environment.
        shared_ptr<string> devResourceGroupName_ {};
        // The version of the compute engine. Valid values: Python 2.7 and Python 3.7.
        shared_ptr<string> engine_ {};
        // The time when the template was created. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> gmtCreate_ {};
        // The time when the template was updated. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> gmtModified_ {};
        // The ID of the template, which is the same as the menu tree node ID.
        shared_ptr<int64_t> id_ {};
        // The last user who updated the template.
        shared_ptr<string> modifier_ {};
        // The ID of the last user who updated the template.
        shared_ptr<string> modifierId_ {};
        // The name of the template.
        shared_ptr<string> name_ {};
        // The node type. Valid values: 10 (Shell) and 21 (Python).
        shared_ptr<int32_t> operatorType_ {};
        // The owner of the template.
        shared_ptr<string> owner_ {};
        // The ID of the template owner.
        shared_ptr<string> ownerId_ {};
        // The list of template parameters.
        shared_ptr<vector<TemplateVersionList::Params>> params_ {};
        // The ID of the project.
        shared_ptr<int64_t> projectId_ {};
        // The list of dependent Python third-party packages.
        shared_ptr<vector<TemplateVersionList::PythonModuleList>> pythonModuleList_ {};
        // The ID of the resource group in the production environment.
        shared_ptr<string> resourceGroupId_ {};
        // The name of the resource group in the production environment.
        shared_ptr<string> resourceGroupName_ {};
        // Indicates whether runtime resources are shared.
        shared_ptr<bool> shareRuntimeResource_ {};
        // The status of the template. Valid values: 0 (draft), 2 (submitted), and 100 (in development).
        shared_ptr<string> status_ {};
        // The version number.
        shared_ptr<int64_t> version_ {};
      };

      virtual bool empty() const override { return this->templateVersionList_ == nullptr; };
      // templateVersionList Field Functions 
      bool hasTemplateVersionList() const { return this->templateVersionList_ != nullptr;};
      void deleteTemplateVersionList() { this->templateVersionList_ = nullptr;};
      inline const vector<Data::TemplateVersionList> & getTemplateVersionList() const { DARABONBA_PTR_GET_CONST(templateVersionList_, vector<Data::TemplateVersionList>) };
      inline vector<Data::TemplateVersionList> getTemplateVersionList() { DARABONBA_PTR_GET(templateVersionList_, vector<Data::TemplateVersionList>) };
      inline Data& setTemplateVersionList(const vector<Data::TemplateVersionList> & templateVersionList) { DARABONBA_PTR_SET_VALUE(templateVersionList_, templateVersionList) };
      inline Data& setTemplateVersionList(vector<Data::TemplateVersionList> && templateVersionList) { DARABONBA_PTR_SET_RVALUE(templateVersionList_, templateVersionList) };


    protected:
      // The template version list.
      shared_ptr<vector<Data::TemplateVersionList>> templateVersionList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBatchTemplateVersionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBatchTemplateVersionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBatchTemplateVersionsResponseBody::Data) };
    inline GetBatchTemplateVersionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBatchTemplateVersionsResponseBody::Data) };
    inline GetBatchTemplateVersionsResponseBody& setData(const GetBatchTemplateVersionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBatchTemplateVersionsResponseBody& setData(GetBatchTemplateVersionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBatchTemplateVersionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBatchTemplateVersionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBatchTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBatchTemplateVersionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetBatchTemplateVersionsResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
