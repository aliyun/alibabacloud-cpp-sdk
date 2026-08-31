// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
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
  class UpdateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateDatasetRequest() = default ;
    UpdateDatasetRequest(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest(UpdateDatasetRequest &&) = default ;
    UpdateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetRequest() = default ;
    UpdateDatasetRequest& operator=(const UpdateDatasetRequest &) = default ;
    UpdateDatasetRequest& operator=(UpdateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ApiInfo, apiInfo_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MetadataStorageType, metadataStorageType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionConfig, versionConfig_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiInfo, apiInfo_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MetadataStorageType, metadataStorageType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionConfig, versionConfig_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(FileStorageConfig, fileStorageConfig_);
          DARABONBA_PTR_TO_JSON(MetadataStorageConfig, metadataStorageConfig_);
          DARABONBA_PTR_TO_JSON(RealtimeMetaTableConfig, realtimeMetaTableConfig_);
          DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
        };
        friend void from_json(const Darabonba::Json& j, VersionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(FileStorageConfig, fileStorageConfig_);
          DARABONBA_PTR_FROM_JSON(MetadataStorageConfig, metadataStorageConfig_);
          DARABONBA_PTR_FROM_JSON(RealtimeMetaTableConfig, realtimeMetaTableConfig_);
          DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
        };
        VersionConfig() = default ;
        VersionConfig(const VersionConfig &) = default ;
        VersionConfig(VersionConfig &&) = default ;
        VersionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionConfig() = default ;
        VersionConfig& operator=(const VersionConfig &) = default ;
        VersionConfig& operator=(VersionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RealtimeMetaTableConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RealtimeMetaTableConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DatasourceType, datasourceType_);
            DARABONBA_PTR_TO_JSON(MetaTableName, metaTableName_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
          };
          friend void from_json(const Darabonba::Json& j, RealtimeMetaTableConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DatasourceType, datasourceType_);
            DARABONBA_PTR_FROM_JSON(MetaTableName, metaTableName_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
          };
          RealtimeMetaTableConfig() = default ;
          RealtimeMetaTableConfig(const RealtimeMetaTableConfig &) = default ;
          RealtimeMetaTableConfig(RealtimeMetaTableConfig &&) = default ;
          RealtimeMetaTableConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RealtimeMetaTableConfig() = default ;
          RealtimeMetaTableConfig& operator=(const RealtimeMetaTableConfig &) = default ;
          RealtimeMetaTableConfig& operator=(RealtimeMetaTableConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableSchema : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableSchema& obj) { 
              DARABONBA_PTR_TO_JSON(Columns, columns_);
            };
            friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
              DARABONBA_PTR_FROM_JSON(Columns, columns_);
            };
            TableSchema() = default ;
            TableSchema(const TableSchema &) = default ;
            TableSchema(TableSchema &&) = default ;
            TableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableSchema() = default ;
            TableSchema& operator=(const TableSchema &) = default ;
            TableSchema& operator=(TableSchema &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Columns : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Columns& obj) { 
                DARABONBA_PTR_TO_JSON(Comment, comment_);
                DARABONBA_PTR_TO_JSON(ElementType, elementType_);
                DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Pk, pk_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Url, url_);
                DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfig_);
              };
              friend void from_json(const Darabonba::Json& j, Columns& obj) { 
                DARABONBA_PTR_FROM_JSON(Comment, comment_);
                DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
                DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Pk, pk_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Url, url_);
                DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfig_);
              };
              Columns() = default ;
              Columns(const Columns &) = default ;
              Columns(Columns &&) = default ;
              Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Columns() = default ;
              Columns& operator=(const Columns &) = default ;
              Columns& operator=(Columns &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class VectorIndexConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VectorIndexConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(Dimension, dimension_);
                  DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
                  DARABONBA_ANY_TO_JSON(IndexParams, indexParams_);
                  DARABONBA_PTR_TO_JSON(IndexType, indexType_);
                  DARABONBA_PTR_TO_JSON(SimilarityType, similarityType_);
                };
                friend void from_json(const Darabonba::Json& j, VectorIndexConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
                  DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
                  DARABONBA_ANY_FROM_JSON(IndexParams, indexParams_);
                  DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
                  DARABONBA_PTR_FROM_JSON(SimilarityType, similarityType_);
                };
                VectorIndexConfig() = default ;
                VectorIndexConfig(const VectorIndexConfig &) = default ;
                VectorIndexConfig(VectorIndexConfig &&) = default ;
                VectorIndexConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VectorIndexConfig() = default ;
                VectorIndexConfig& operator=(const VectorIndexConfig &) = default ;
                VectorIndexConfig& operator=(VectorIndexConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->dimension_ == nullptr
        && this->embeddingModel_ == nullptr && this->indexParams_ == nullptr && this->indexType_ == nullptr && this->similarityType_ == nullptr; };
                // dimension Field Functions 
                bool hasDimension() const { return this->dimension_ != nullptr;};
                void deleteDimension() { this->dimension_ = nullptr;};
                inline int64_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0L) };
                inline VectorIndexConfig& setDimension(int64_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


                // embeddingModel Field Functions 
                bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
                void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
                inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
                inline VectorIndexConfig& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


                // indexParams Field Functions 
                bool hasIndexParams() const { return this->indexParams_ != nullptr;};
                void deleteIndexParams() { this->indexParams_ = nullptr;};
                inline                 const Darabonba::Json & getIndexParams() const { DARABONBA_GET(indexParams_) };
                Darabonba::Json & getIndexParams() { DARABONBA_GET(indexParams_) };
                inline VectorIndexConfig& setIndexParams(const Darabonba::Json & indexParams) { DARABONBA_SET_VALUE(indexParams_, indexParams) };
                inline VectorIndexConfig& setIndexParams(Darabonba::Json && indexParams) { DARABONBA_SET_RVALUE(indexParams_, indexParams) };


                // indexType Field Functions 
                bool hasIndexType() const { return this->indexType_ != nullptr;};
                void deleteIndexType() { this->indexType_ = nullptr;};
                inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
                inline VectorIndexConfig& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


                // similarityType Field Functions 
                bool hasSimilarityType() const { return this->similarityType_ != nullptr;};
                void deleteSimilarityType() { this->similarityType_ = nullptr;};
                inline string getSimilarityType() const { DARABONBA_PTR_GET_DEFAULT(similarityType_, "") };
                inline VectorIndexConfig& setSimilarityType(string similarityType) { DARABONBA_PTR_SET_VALUE(similarityType_, similarityType) };


              protected:
                // The embedding dimension.
                // 
                // This parameter is required.
                shared_ptr<int64_t> dimension_ {};
                // The embedding model.
                // 
                // This parameter is required.
                shared_ptr<string> embeddingModel_ {};
                // The index build parameters. Different parameters are required based on the indexType. For example, HNSW requires {M:30, efConstruction:360}, and IVF_FLAT requires {nlist:128}.
                Darabonba::Json indexParams_ {};
                // The index type. PostgreSQL supports IVFFlat and HNSW. Milvus supports all types.
                // 
                // This parameter is required.
                shared_ptr<string> indexType_ {};
                // The similarity type. Default value: COSINE. Valid values: COSINE, L2, and IP.
                // 
                // This parameter is required.
                shared_ptr<string> similarityType_ {};
              };

              virtual bool empty() const override { return this->comment_ == nullptr
        && this->elementType_ == nullptr && this->maxCapacity_ == nullptr && this->name_ == nullptr && this->pk_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr && this->vectorIndexConfig_ == nullptr; };
              // comment Field Functions 
              bool hasComment() const { return this->comment_ != nullptr;};
              void deleteComment() { this->comment_ = nullptr;};
              inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
              inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


              // elementType Field Functions 
              bool hasElementType() const { return this->elementType_ != nullptr;};
              void deleteElementType() { this->elementType_ = nullptr;};
              inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
              inline Columns& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


              // maxCapacity Field Functions 
              bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
              void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
              inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
              inline Columns& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // pk Field Functions 
              bool hasPk() const { return this->pk_ != nullptr;};
              void deletePk() { this->pk_ = nullptr;};
              inline bool getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, false) };
              inline Columns& setPk(bool pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline bool getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, false) };
              inline Columns& setUrl(bool url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              // vectorIndexConfig Field Functions 
              bool hasVectorIndexConfig() const { return this->vectorIndexConfig_ != nullptr;};
              void deleteVectorIndexConfig() { this->vectorIndexConfig_ = nullptr;};
              inline const Columns::VectorIndexConfig & getVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(vectorIndexConfig_, Columns::VectorIndexConfig) };
              inline Columns::VectorIndexConfig getVectorIndexConfig() { DARABONBA_PTR_GET(vectorIndexConfig_, Columns::VectorIndexConfig) };
              inline Columns& setVectorIndexConfig(const Columns::VectorIndexConfig & vectorIndexConfig) { DARABONBA_PTR_SET_VALUE(vectorIndexConfig_, vectorIndexConfig) };
              inline Columns& setVectorIndexConfig(Columns::VectorIndexConfig && vectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfig_, vectorIndexConfig) };


            protected:
              // The field description.
              shared_ptr<string> comment_ {};
              // **The array element subtype. Valid only when type is set to ARRAY.**
              shared_ptr<string> elementType_ {};
              // **The maximum capacity of the array. This parameter is valid only when type is set to ARRAY. Default value: 4096.**
              shared_ptr<int32_t> maxCapacity_ {};
              // **The field name.**
              // 
              // This parameter is required.
              shared_ptr<string> name_ {};
              // Indicates whether the field is a primary key.
              shared_ptr<bool> pk_ {};
              // **The field type.**
              // 
              // This parameter is required.
              shared_ptr<string> type_ {};
              // Indicates whether the field is a URL.
              shared_ptr<bool> url_ {};
              // The vector index configuration. Configure this parameter when the field type is FLOAT_VECTOR, FLOAT16_VECTOR, or BFLOAT16_VECTOR. This parameter is used to specify the dimensions, index type, and similarity metric.
              shared_ptr<Columns::VectorIndexConfig> vectorIndexConfig_ {};
            };

            virtual bool empty() const override { return this->columns_ == nullptr; };
            // columns Field Functions 
            bool hasColumns() const { return this->columns_ != nullptr;};
            void deleteColumns() { this->columns_ = nullptr;};
            inline const vector<TableSchema::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableSchema::Columns>) };
            inline vector<TableSchema::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableSchema::Columns>) };
            inline TableSchema& setColumns(const vector<TableSchema::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
            inline TableSchema& setColumns(vector<TableSchema::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


          protected:
            // **The field list.**
            shared_ptr<vector<TableSchema::Columns>> columns_ {};
          };

          virtual bool empty() const override { return this->datasourceType_ == nullptr
        && this->metaTableName_ == nullptr && this->projectId_ == nullptr && this->tableSchema_ == nullptr; };
          // datasourceType Field Functions 
          bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
          void deleteDatasourceType() { this->datasourceType_ = nullptr;};
          inline string getDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(datasourceType_, "") };
          inline RealtimeMetaTableConfig& setDatasourceType(string datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };


          // metaTableName Field Functions 
          bool hasMetaTableName() const { return this->metaTableName_ != nullptr;};
          void deleteMetaTableName() { this->metaTableName_ = nullptr;};
          inline string getMetaTableName() const { DARABONBA_PTR_GET_DEFAULT(metaTableName_, "") };
          inline RealtimeMetaTableConfig& setMetaTableName(string metaTableName) { DARABONBA_PTR_SET_VALUE(metaTableName_, metaTableName) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline RealtimeMetaTableConfig& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // tableSchema Field Functions 
          bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
          void deleteTableSchema() { this->tableSchema_ = nullptr;};
          inline const RealtimeMetaTableConfig::TableSchema & getTableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, RealtimeMetaTableConfig::TableSchema) };
          inline RealtimeMetaTableConfig::TableSchema getTableSchema() { DARABONBA_PTR_GET(tableSchema_, RealtimeMetaTableConfig::TableSchema) };
          inline RealtimeMetaTableConfig& setTableSchema(const RealtimeMetaTableConfig::TableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
          inline RealtimeMetaTableConfig& setTableSchema(RealtimeMetaTableConfig::TableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


        protected:
          // The meta table data source type (only KAFKA is supported in the current release).
          // 
          // This parameter is required.
          shared_ptr<string> datasourceType_ {};
          // The meta table name.
          // 
          // This parameter is required.
          shared_ptr<string> metaTableName_ {};
          // The project ID to which the meta table belongs (cross-project access is supported).
          // 
          // This parameter is required.
          shared_ptr<int64_t> projectId_ {};
          // The table schema.
          shared_ptr<RealtimeMetaTableConfig::TableSchema> tableSchema_ {};
        };

        class MetadataStorageConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetadataStorageConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
            DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_TO_JSON(DevSchema, devSchema_);
            DARABONBA_PTR_TO_JSON(MetadataStorageMode, metadataStorageMode_);
            DARABONBA_PTR_TO_JSON(MetadataStorageType, metadataStorageType_);
            DARABONBA_PTR_TO_JSON(ProdSchema, prodSchema_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
            DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
          };
          friend void from_json(const Darabonba::Json& j, MetadataStorageConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
            DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_FROM_JSON(DevSchema, devSchema_);
            DARABONBA_PTR_FROM_JSON(MetadataStorageMode, metadataStorageMode_);
            DARABONBA_PTR_FROM_JSON(MetadataStorageType, metadataStorageType_);
            DARABONBA_PTR_FROM_JSON(ProdSchema, prodSchema_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
          };
          MetadataStorageConfig() = default ;
          MetadataStorageConfig(const MetadataStorageConfig &) = default ;
          MetadataStorageConfig(MetadataStorageConfig &&) = default ;
          MetadataStorageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetadataStorageConfig() = default ;
          MetadataStorageConfig& operator=(const MetadataStorageConfig &) = default ;
          MetadataStorageConfig& operator=(MetadataStorageConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TableSchema : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableSchema& obj) { 
              DARABONBA_PTR_TO_JSON(Columns, columns_);
            };
            friend void from_json(const Darabonba::Json& j, TableSchema& obj) { 
              DARABONBA_PTR_FROM_JSON(Columns, columns_);
            };
            TableSchema() = default ;
            TableSchema(const TableSchema &) = default ;
            TableSchema(TableSchema &&) = default ;
            TableSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableSchema() = default ;
            TableSchema& operator=(const TableSchema &) = default ;
            TableSchema& operator=(TableSchema &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Columns : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Columns& obj) { 
                DARABONBA_PTR_TO_JSON(Comment, comment_);
                DARABONBA_PTR_TO_JSON(ElementType, elementType_);
                DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Pk, pk_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Url, url_);
                DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfig_);
              };
              friend void from_json(const Darabonba::Json& j, Columns& obj) { 
                DARABONBA_PTR_FROM_JSON(Comment, comment_);
                DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
                DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Pk, pk_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Url, url_);
                DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfig_);
              };
              Columns() = default ;
              Columns(const Columns &) = default ;
              Columns(Columns &&) = default ;
              Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Columns() = default ;
              Columns& operator=(const Columns &) = default ;
              Columns& operator=(Columns &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class VectorIndexConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VectorIndexConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(Dimension, dimension_);
                  DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
                  DARABONBA_ANY_TO_JSON(IndexParams, indexParams_);
                  DARABONBA_PTR_TO_JSON(IndexType, indexType_);
                  DARABONBA_PTR_TO_JSON(SimilarityType, similarityType_);
                };
                friend void from_json(const Darabonba::Json& j, VectorIndexConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
                  DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
                  DARABONBA_ANY_FROM_JSON(IndexParams, indexParams_);
                  DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
                  DARABONBA_PTR_FROM_JSON(SimilarityType, similarityType_);
                };
                VectorIndexConfig() = default ;
                VectorIndexConfig(const VectorIndexConfig &) = default ;
                VectorIndexConfig(VectorIndexConfig &&) = default ;
                VectorIndexConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VectorIndexConfig() = default ;
                VectorIndexConfig& operator=(const VectorIndexConfig &) = default ;
                VectorIndexConfig& operator=(VectorIndexConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->dimension_ == nullptr
        && this->embeddingModel_ == nullptr && this->indexParams_ == nullptr && this->indexType_ == nullptr && this->similarityType_ == nullptr; };
                // dimension Field Functions 
                bool hasDimension() const { return this->dimension_ != nullptr;};
                void deleteDimension() { this->dimension_ = nullptr;};
                inline int64_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0L) };
                inline VectorIndexConfig& setDimension(int64_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


                // embeddingModel Field Functions 
                bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
                void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
                inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
                inline VectorIndexConfig& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


                // indexParams Field Functions 
                bool hasIndexParams() const { return this->indexParams_ != nullptr;};
                void deleteIndexParams() { this->indexParams_ = nullptr;};
                inline                 const Darabonba::Json & getIndexParams() const { DARABONBA_GET(indexParams_) };
                Darabonba::Json & getIndexParams() { DARABONBA_GET(indexParams_) };
                inline VectorIndexConfig& setIndexParams(const Darabonba::Json & indexParams) { DARABONBA_SET_VALUE(indexParams_, indexParams) };
                inline VectorIndexConfig& setIndexParams(Darabonba::Json && indexParams) { DARABONBA_SET_RVALUE(indexParams_, indexParams) };


                // indexType Field Functions 
                bool hasIndexType() const { return this->indexType_ != nullptr;};
                void deleteIndexType() { this->indexType_ = nullptr;};
                inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
                inline VectorIndexConfig& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


                // similarityType Field Functions 
                bool hasSimilarityType() const { return this->similarityType_ != nullptr;};
                void deleteSimilarityType() { this->similarityType_ = nullptr;};
                inline string getSimilarityType() const { DARABONBA_PTR_GET_DEFAULT(similarityType_, "") };
                inline VectorIndexConfig& setSimilarityType(string similarityType) { DARABONBA_PTR_SET_VALUE(similarityType_, similarityType) };


              protected:
                // The embedding dimension.
                // 
                // This parameter is required.
                shared_ptr<int64_t> dimension_ {};
                // The embedding model.
                // 
                // This parameter is required.
                shared_ptr<string> embeddingModel_ {};
                // The index build parameters. Different parameters are required based on the indexType. For example, HNSW requires {M:30, efConstruction:360}, and IVF_FLAT requires {nlist:128}.
                Darabonba::Json indexParams_ {};
                // The index type. PostgreSQL supports IVFFlat and HNSW. Milvus supports all types.
                // 
                // This parameter is required.
                shared_ptr<string> indexType_ {};
                // The similarity type. Default value: COSINE. Valid values: COSINE, L2, and IP.
                // 
                // This parameter is required.
                shared_ptr<string> similarityType_ {};
              };

              virtual bool empty() const override { return this->comment_ == nullptr
        && this->elementType_ == nullptr && this->maxCapacity_ == nullptr && this->name_ == nullptr && this->pk_ == nullptr && this->type_ == nullptr
        && this->url_ == nullptr && this->vectorIndexConfig_ == nullptr; };
              // comment Field Functions 
              bool hasComment() const { return this->comment_ != nullptr;};
              void deleteComment() { this->comment_ = nullptr;};
              inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
              inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


              // elementType Field Functions 
              bool hasElementType() const { return this->elementType_ != nullptr;};
              void deleteElementType() { this->elementType_ = nullptr;};
              inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
              inline Columns& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


              // maxCapacity Field Functions 
              bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
              void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
              inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
              inline Columns& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // pk Field Functions 
              bool hasPk() const { return this->pk_ != nullptr;};
              void deletePk() { this->pk_ = nullptr;};
              inline bool getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, false) };
              inline Columns& setPk(bool pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // url Field Functions 
              bool hasUrl() const { return this->url_ != nullptr;};
              void deleteUrl() { this->url_ = nullptr;};
              inline bool getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, false) };
              inline Columns& setUrl(bool url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              // vectorIndexConfig Field Functions 
              bool hasVectorIndexConfig() const { return this->vectorIndexConfig_ != nullptr;};
              void deleteVectorIndexConfig() { this->vectorIndexConfig_ = nullptr;};
              inline const Columns::VectorIndexConfig & getVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(vectorIndexConfig_, Columns::VectorIndexConfig) };
              inline Columns::VectorIndexConfig getVectorIndexConfig() { DARABONBA_PTR_GET(vectorIndexConfig_, Columns::VectorIndexConfig) };
              inline Columns& setVectorIndexConfig(const Columns::VectorIndexConfig & vectorIndexConfig) { DARABONBA_PTR_SET_VALUE(vectorIndexConfig_, vectorIndexConfig) };
              inline Columns& setVectorIndexConfig(Columns::VectorIndexConfig && vectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfig_, vectorIndexConfig) };


            protected:
              // The field description.
              shared_ptr<string> comment_ {};
              // **The array element subtype. Valid only when type is set to ARRAY.**
              shared_ptr<string> elementType_ {};
              // The maximum capacity of the array. Valid only when type is set to ARRAY. Default value: 4096.
              shared_ptr<int32_t> maxCapacity_ {};
              // **The field name.**
              // 
              // This parameter is required.
              shared_ptr<string> name_ {};
              // Indicates whether the field is a primary key.
              shared_ptr<bool> pk_ {};
              // **The field type.**
              // 
              // This parameter is required.
              shared_ptr<string> type_ {};
              // Indicates whether the field is a URL.
              shared_ptr<bool> url_ {};
              // The vector index configuration.
              shared_ptr<Columns::VectorIndexConfig> vectorIndexConfig_ {};
            };

            virtual bool empty() const override { return this->columns_ == nullptr; };
            // columns Field Functions 
            bool hasColumns() const { return this->columns_ != nullptr;};
            void deleteColumns() { this->columns_ = nullptr;};
            inline const vector<TableSchema::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<TableSchema::Columns>) };
            inline vector<TableSchema::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<TableSchema::Columns>) };
            inline TableSchema& setColumns(const vector<TableSchema::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
            inline TableSchema& setColumns(vector<TableSchema::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


          protected:
            // The field list.
            shared_ptr<vector<TableSchema::Columns>> columns_ {};
          };

          virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceName_ == nullptr && this->devSchema_ == nullptr && this->metadataStorageMode_ == nullptr && this->metadataStorageType_ == nullptr && this->prodSchema_ == nullptr
        && this->tableName_ == nullptr && this->tableSchema_ == nullptr; };
          // dataSourceId Field Functions 
          bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
          void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
          inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
          inline MetadataStorageConfig& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


          // dataSourceName Field Functions 
          bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
          void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
          inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
          inline MetadataStorageConfig& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


          // devSchema Field Functions 
          bool hasDevSchema() const { return this->devSchema_ != nullptr;};
          void deleteDevSchema() { this->devSchema_ = nullptr;};
          inline string getDevSchema() const { DARABONBA_PTR_GET_DEFAULT(devSchema_, "") };
          inline MetadataStorageConfig& setDevSchema(string devSchema) { DARABONBA_PTR_SET_VALUE(devSchema_, devSchema) };


          // metadataStorageMode Field Functions 
          bool hasMetadataStorageMode() const { return this->metadataStorageMode_ != nullptr;};
          void deleteMetadataStorageMode() { this->metadataStorageMode_ = nullptr;};
          inline string getMetadataStorageMode() const { DARABONBA_PTR_GET_DEFAULT(metadataStorageMode_, "") };
          inline MetadataStorageConfig& setMetadataStorageMode(string metadataStorageMode) { DARABONBA_PTR_SET_VALUE(metadataStorageMode_, metadataStorageMode) };


          // metadataStorageType Field Functions 
          bool hasMetadataStorageType() const { return this->metadataStorageType_ != nullptr;};
          void deleteMetadataStorageType() { this->metadataStorageType_ = nullptr;};
          inline string getMetadataStorageType() const { DARABONBA_PTR_GET_DEFAULT(metadataStorageType_, "") };
          inline MetadataStorageConfig& setMetadataStorageType(string metadataStorageType) { DARABONBA_PTR_SET_VALUE(metadataStorageType_, metadataStorageType) };


          // prodSchema Field Functions 
          bool hasProdSchema() const { return this->prodSchema_ != nullptr;};
          void deleteProdSchema() { this->prodSchema_ = nullptr;};
          inline string getProdSchema() const { DARABONBA_PTR_GET_DEFAULT(prodSchema_, "") };
          inline MetadataStorageConfig& setProdSchema(string prodSchema) { DARABONBA_PTR_SET_VALUE(prodSchema_, prodSchema) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline MetadataStorageConfig& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // tableSchema Field Functions 
          bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
          void deleteTableSchema() { this->tableSchema_ = nullptr;};
          inline const MetadataStorageConfig::TableSchema & getTableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, MetadataStorageConfig::TableSchema) };
          inline MetadataStorageConfig::TableSchema getTableSchema() { DARABONBA_PTR_GET(tableSchema_, MetadataStorageConfig::TableSchema) };
          inline MetadataStorageConfig& setTableSchema(const MetadataStorageConfig::TableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
          inline MetadataStorageConfig& setTableSchema(MetadataStorageConfig::TableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


        protected:
          // **The data source ID.**
          // 
          // This parameter is required.
          shared_ptr<string> dataSourceId_ {};
          // **The data source name.**
          shared_ptr<string> dataSourceName_ {};
          // **The development database/schema.**
          shared_ptr<string> devSchema_ {};
          // Specifies whether to store metadata in a new table or an existing table.
          // 
          // This parameter is required.
          shared_ptr<string> metadataStorageMode_ {};
          // **The metastore type.**
          shared_ptr<string> metadataStorageType_ {};
          // **The production database/schema.**
          // 
          // This parameter is required.
          shared_ptr<string> prodSchema_ {};
          // **The table name.**
          // 
          // This parameter is required.
          shared_ptr<string> tableName_ {};
          // The table schema.
          shared_ptr<MetadataStorageConfig::TableSchema> tableSchema_ {};
        };

        class FileStorageConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FileStorageConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
            DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_TO_JSON(DevPath, devPath_);
            DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
            DARABONBA_PTR_TO_JSON(ProdPath, prodPath_);
          };
          friend void from_json(const Darabonba::Json& j, FileStorageConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
            DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
            DARABONBA_PTR_FROM_JSON(DevPath, devPath_);
            DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
            DARABONBA_PTR_FROM_JSON(ProdPath, prodPath_);
          };
          FileStorageConfig() = default ;
          FileStorageConfig(const FileStorageConfig &) = default ;
          FileStorageConfig(FileStorageConfig &&) = default ;
          FileStorageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FileStorageConfig() = default ;
          FileStorageConfig& operator=(const FileStorageConfig &) = default ;
          FileStorageConfig& operator=(FileStorageConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceName_ == nullptr && this->devPath_ == nullptr && this->mountPath_ == nullptr && this->prodPath_ == nullptr; };
          // dataSourceId Field Functions 
          bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
          void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
          inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
          inline FileStorageConfig& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


          // dataSourceName Field Functions 
          bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
          void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
          inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
          inline FileStorageConfig& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


          // devPath Field Functions 
          bool hasDevPath() const { return this->devPath_ != nullptr;};
          void deleteDevPath() { this->devPath_ = nullptr;};
          inline string getDevPath() const { DARABONBA_PTR_GET_DEFAULT(devPath_, "") };
          inline FileStorageConfig& setDevPath(string devPath) { DARABONBA_PTR_SET_VALUE(devPath_, devPath) };


          // mountPath Field Functions 
          bool hasMountPath() const { return this->mountPath_ != nullptr;};
          void deleteMountPath() { this->mountPath_ = nullptr;};
          inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
          inline FileStorageConfig& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


          // prodPath Field Functions 
          bool hasProdPath() const { return this->prodPath_ != nullptr;};
          void deleteProdPath() { this->prodPath_ = nullptr;};
          inline string getProdPath() const { DARABONBA_PTR_GET_DEFAULT(prodPath_, "") };
          inline FileStorageConfig& setProdPath(string prodPath) { DARABONBA_PTR_SET_VALUE(prodPath_, prodPath) };


        protected:
          // **The data source ID.**
          // 
          // This parameter is required.
          shared_ptr<string> dataSourceId_ {};
          // The data source name.
          shared_ptr<string> dataSourceName_ {};
          // The development path (not required for basic projects).
          shared_ptr<string> devPath_ {};
          // The mount path.
          // 
          // This parameter is required.
          shared_ptr<string> mountPath_ {};
          // The production path.
          // 
          // This parameter is required.
          shared_ptr<string> prodPath_ {};
        };

        virtual bool empty() const override { return this->fileStorageConfig_ == nullptr
        && this->metadataStorageConfig_ == nullptr && this->realtimeMetaTableConfig_ == nullptr && this->versionDescription_ == nullptr; };
        // fileStorageConfig Field Functions 
        bool hasFileStorageConfig() const { return this->fileStorageConfig_ != nullptr;};
        void deleteFileStorageConfig() { this->fileStorageConfig_ = nullptr;};
        inline const VersionConfig::FileStorageConfig & getFileStorageConfig() const { DARABONBA_PTR_GET_CONST(fileStorageConfig_, VersionConfig::FileStorageConfig) };
        inline VersionConfig::FileStorageConfig getFileStorageConfig() { DARABONBA_PTR_GET(fileStorageConfig_, VersionConfig::FileStorageConfig) };
        inline VersionConfig& setFileStorageConfig(const VersionConfig::FileStorageConfig & fileStorageConfig) { DARABONBA_PTR_SET_VALUE(fileStorageConfig_, fileStorageConfig) };
        inline VersionConfig& setFileStorageConfig(VersionConfig::FileStorageConfig && fileStorageConfig) { DARABONBA_PTR_SET_RVALUE(fileStorageConfig_, fileStorageConfig) };


        // metadataStorageConfig Field Functions 
        bool hasMetadataStorageConfig() const { return this->metadataStorageConfig_ != nullptr;};
        void deleteMetadataStorageConfig() { this->metadataStorageConfig_ = nullptr;};
        inline const VersionConfig::MetadataStorageConfig & getMetadataStorageConfig() const { DARABONBA_PTR_GET_CONST(metadataStorageConfig_, VersionConfig::MetadataStorageConfig) };
        inline VersionConfig::MetadataStorageConfig getMetadataStorageConfig() { DARABONBA_PTR_GET(metadataStorageConfig_, VersionConfig::MetadataStorageConfig) };
        inline VersionConfig& setMetadataStorageConfig(const VersionConfig::MetadataStorageConfig & metadataStorageConfig) { DARABONBA_PTR_SET_VALUE(metadataStorageConfig_, metadataStorageConfig) };
        inline VersionConfig& setMetadataStorageConfig(VersionConfig::MetadataStorageConfig && metadataStorageConfig) { DARABONBA_PTR_SET_RVALUE(metadataStorageConfig_, metadataStorageConfig) };


        // realtimeMetaTableConfig Field Functions 
        bool hasRealtimeMetaTableConfig() const { return this->realtimeMetaTableConfig_ != nullptr;};
        void deleteRealtimeMetaTableConfig() { this->realtimeMetaTableConfig_ = nullptr;};
        inline const VersionConfig::RealtimeMetaTableConfig & getRealtimeMetaTableConfig() const { DARABONBA_PTR_GET_CONST(realtimeMetaTableConfig_, VersionConfig::RealtimeMetaTableConfig) };
        inline VersionConfig::RealtimeMetaTableConfig getRealtimeMetaTableConfig() { DARABONBA_PTR_GET(realtimeMetaTableConfig_, VersionConfig::RealtimeMetaTableConfig) };
        inline VersionConfig& setRealtimeMetaTableConfig(const VersionConfig::RealtimeMetaTableConfig & realtimeMetaTableConfig) { DARABONBA_PTR_SET_VALUE(realtimeMetaTableConfig_, realtimeMetaTableConfig) };
        inline VersionConfig& setRealtimeMetaTableConfig(VersionConfig::RealtimeMetaTableConfig && realtimeMetaTableConfig) { DARABONBA_PTR_SET_RVALUE(realtimeMetaTableConfig_, realtimeMetaTableConfig) };


        // versionDescription Field Functions 
        bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
        void deleteVersionDescription() { this->versionDescription_ = nullptr;};
        inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
        inline VersionConfig& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


      protected:
        // The file storage configuration.
        shared_ptr<VersionConfig::FileStorageConfig> fileStorageConfig_ {};
        // The metastore configuration.
        shared_ptr<VersionConfig::MetadataStorageConfig> metadataStorageConfig_ {};
        // The real-time meta table configuration. Takes effect when metadataStorageType is set to STREAM_TABLE.
        shared_ptr<VersionConfig::RealtimeMetaTableConfig> realtimeMetaTableConfig_ {};
        // **Version description**
        shared_ptr<string> versionDescription_ {};
      };

      class ApiInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ExecTimeout, execTimeout_);
          DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_TO_JSON(OsApiGroup, osApiGroup_);
          DARABONBA_PTR_TO_JSON(OsProject, osProject_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_TO_JSON(RequestParamList, requestParamList_);
          DARABONBA_PTR_TO_JSON(ResponseParamList, responseParamList_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, ApiInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecTimeout, execTimeout_);
          DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
          DARABONBA_PTR_FROM_JSON(OsApiGroup, osApiGroup_);
          DARABONBA_PTR_FROM_JSON(OsProject, osProject_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(RequestMethod, requestMethod_);
          DARABONBA_PTR_FROM_JSON(RequestParamList, requestParamList_);
          DARABONBA_PTR_FROM_JSON(ResponseParamList, responseParamList_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        };
        ApiInfo() = default ;
        ApiInfo(const ApiInfo &) = default ;
        ApiInfo(ApiInfo &&) = default ;
        ApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiInfo() = default ;
        ApiInfo& operator=(const ApiInfo &) = default ;
        ApiInfo& operator=(ApiInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResponseParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResponseParamList& obj) { 
            DARABONBA_PTR_TO_JSON(Descr, descr_);
            DARABONBA_PTR_TO_JSON(IsUrl, isUrl_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(Sample, sample_);
          };
          friend void from_json(const Darabonba::Json& j, ResponseParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Descr, descr_);
            DARABONBA_PTR_FROM_JSON(IsUrl, isUrl_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(Sample, sample_);
          };
          ResponseParamList() = default ;
          ResponseParamList(const ResponseParamList &) = default ;
          ResponseParamList(ResponseParamList &&) = default ;
          ResponseParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResponseParamList() = default ;
          ResponseParamList& operator=(const ResponseParamList &) = default ;
          ResponseParamList& operator=(ResponseParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->descr_ == nullptr
        && this->isUrl_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr && this->sample_ == nullptr; };
          // descr Field Functions 
          bool hasDescr() const { return this->descr_ != nullptr;};
          void deleteDescr() { this->descr_ = nullptr;};
          inline string getDescr() const { DARABONBA_PTR_GET_DEFAULT(descr_, "") };
          inline ResponseParamList& setDescr(string descr) { DARABONBA_PTR_SET_VALUE(descr_, descr) };


          // isUrl Field Functions 
          bool hasIsUrl() const { return this->isUrl_ != nullptr;};
          void deleteIsUrl() { this->isUrl_ = nullptr;};
          inline bool getIsUrl() const { DARABONBA_PTR_GET_DEFAULT(isUrl_, false) };
          inline ResponseParamList& setIsUrl(bool isUrl) { DARABONBA_PTR_SET_VALUE(isUrl_, isUrl) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline ResponseParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline ResponseParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // sample Field Functions 
          bool hasSample() const { return this->sample_ != nullptr;};
          void deleteSample() { this->sample_ = nullptr;};
          inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
          inline ResponseParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        protected:
          shared_ptr<string> descr_ {};
          shared_ptr<bool> isUrl_ {};
          shared_ptr<string> paramName_ {};
          shared_ptr<string> paramType_ {};
          shared_ptr<string> sample_ {};
        };

        class RequestParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestParamList& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Descr, descr_);
            DARABONBA_PTR_TO_JSON(IsUrl, isUrl_);
            DARABONBA_PTR_TO_JSON(Must, must_);
            DARABONBA_PTR_TO_JSON(ParamName, paramName_);
            DARABONBA_PTR_TO_JSON(ParamType, paramType_);
            DARABONBA_PTR_TO_JSON(Sample, sample_);
          };
          friend void from_json(const Darabonba::Json& j, RequestParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Descr, descr_);
            DARABONBA_PTR_FROM_JSON(IsUrl, isUrl_);
            DARABONBA_PTR_FROM_JSON(Must, must_);
            DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
            DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
            DARABONBA_PTR_FROM_JSON(Sample, sample_);
          };
          RequestParamList() = default ;
          RequestParamList(const RequestParamList &) = default ;
          RequestParamList(RequestParamList &&) = default ;
          RequestParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestParamList() = default ;
          RequestParamList& operator=(const RequestParamList &) = default ;
          RequestParamList& operator=(RequestParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->descr_ == nullptr && this->isUrl_ == nullptr && this->must_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr
        && this->sample_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline RequestParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // descr Field Functions 
          bool hasDescr() const { return this->descr_ != nullptr;};
          void deleteDescr() { this->descr_ = nullptr;};
          inline string getDescr() const { DARABONBA_PTR_GET_DEFAULT(descr_, "") };
          inline RequestParamList& setDescr(string descr) { DARABONBA_PTR_SET_VALUE(descr_, descr) };


          // isUrl Field Functions 
          bool hasIsUrl() const { return this->isUrl_ != nullptr;};
          void deleteIsUrl() { this->isUrl_ = nullptr;};
          inline bool getIsUrl() const { DARABONBA_PTR_GET_DEFAULT(isUrl_, false) };
          inline RequestParamList& setIsUrl(bool isUrl) { DARABONBA_PTR_SET_VALUE(isUrl_, isUrl) };


          // must Field Functions 
          bool hasMust() const { return this->must_ != nullptr;};
          void deleteMust() { this->must_ = nullptr;};
          inline bool getMust() const { DARABONBA_PTR_GET_DEFAULT(must_, false) };
          inline RequestParamList& setMust(bool must) { DARABONBA_PTR_SET_VALUE(must_, must) };


          // paramName Field Functions 
          bool hasParamName() const { return this->paramName_ != nullptr;};
          void deleteParamName() { this->paramName_ = nullptr;};
          inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
          inline RequestParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


          // paramType Field Functions 
          bool hasParamType() const { return this->paramType_ != nullptr;};
          void deleteParamType() { this->paramType_ = nullptr;};
          inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
          inline RequestParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


          // sample Field Functions 
          bool hasSample() const { return this->sample_ != nullptr;};
          void deleteSample() { this->sample_ = nullptr;};
          inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
          inline RequestParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        protected:
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> descr_ {};
          shared_ptr<bool> isUrl_ {};
          shared_ptr<bool> must_ {};
          shared_ptr<string> paramName_ {};
          shared_ptr<string> paramType_ {};
          shared_ptr<string> sample_ {};
        };

        virtual bool empty() const override { return this->execTimeout_ == nullptr
        && this->executeMode_ == nullptr && this->osApiGroup_ == nullptr && this->osProject_ == nullptr && this->protocol_ == nullptr && this->requestMethod_ == nullptr
        && this->requestParamList_ == nullptr && this->responseParamList_ == nullptr && this->timeout_ == nullptr; };
        // execTimeout Field Functions 
        bool hasExecTimeout() const { return this->execTimeout_ != nullptr;};
        void deleteExecTimeout() { this->execTimeout_ = nullptr;};
        inline int32_t getExecTimeout() const { DARABONBA_PTR_GET_DEFAULT(execTimeout_, 0) };
        inline ApiInfo& setExecTimeout(int32_t execTimeout) { DARABONBA_PTR_SET_VALUE(execTimeout_, execTimeout) };


        // executeMode Field Functions 
        bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
        void deleteExecuteMode() { this->executeMode_ = nullptr;};
        inline int32_t getExecuteMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, 0) };
        inline ApiInfo& setExecuteMode(int32_t executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


        // osApiGroup Field Functions 
        bool hasOsApiGroup() const { return this->osApiGroup_ != nullptr;};
        void deleteOsApiGroup() { this->osApiGroup_ = nullptr;};
        inline int32_t getOsApiGroup() const { DARABONBA_PTR_GET_DEFAULT(osApiGroup_, 0) };
        inline ApiInfo& setOsApiGroup(int32_t osApiGroup) { DARABONBA_PTR_SET_VALUE(osApiGroup_, osApiGroup) };


        // osProject Field Functions 
        bool hasOsProject() const { return this->osProject_ != nullptr;};
        void deleteOsProject() { this->osProject_ = nullptr;};
        inline int32_t getOsProject() const { DARABONBA_PTR_GET_DEFAULT(osProject_, 0) };
        inline ApiInfo& setOsProject(int32_t osProject) { DARABONBA_PTR_SET_VALUE(osProject_, osProject) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline int32_t getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, 0) };
        inline ApiInfo& setProtocol(int32_t protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // requestMethod Field Functions 
        bool hasRequestMethod() const { return this->requestMethod_ != nullptr;};
        void deleteRequestMethod() { this->requestMethod_ = nullptr;};
        inline int32_t getRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(requestMethod_, 0) };
        inline ApiInfo& setRequestMethod(int32_t requestMethod) { DARABONBA_PTR_SET_VALUE(requestMethod_, requestMethod) };


        // requestParamList Field Functions 
        bool hasRequestParamList() const { return this->requestParamList_ != nullptr;};
        void deleteRequestParamList() { this->requestParamList_ = nullptr;};
        inline const vector<ApiInfo::RequestParamList> & getRequestParamList() const { DARABONBA_PTR_GET_CONST(requestParamList_, vector<ApiInfo::RequestParamList>) };
        inline vector<ApiInfo::RequestParamList> getRequestParamList() { DARABONBA_PTR_GET(requestParamList_, vector<ApiInfo::RequestParamList>) };
        inline ApiInfo& setRequestParamList(const vector<ApiInfo::RequestParamList> & requestParamList) { DARABONBA_PTR_SET_VALUE(requestParamList_, requestParamList) };
        inline ApiInfo& setRequestParamList(vector<ApiInfo::RequestParamList> && requestParamList) { DARABONBA_PTR_SET_RVALUE(requestParamList_, requestParamList) };


        // responseParamList Field Functions 
        bool hasResponseParamList() const { return this->responseParamList_ != nullptr;};
        void deleteResponseParamList() { this->responseParamList_ = nullptr;};
        inline const vector<ApiInfo::ResponseParamList> & getResponseParamList() const { DARABONBA_PTR_GET_CONST(responseParamList_, vector<ApiInfo::ResponseParamList>) };
        inline vector<ApiInfo::ResponseParamList> getResponseParamList() { DARABONBA_PTR_GET(responseParamList_, vector<ApiInfo::ResponseParamList>) };
        inline ApiInfo& setResponseParamList(const vector<ApiInfo::ResponseParamList> & responseParamList) { DARABONBA_PTR_SET_VALUE(responseParamList_, responseParamList) };
        inline ApiInfo& setResponseParamList(vector<ApiInfo::ResponseParamList> && responseParamList) { DARABONBA_PTR_SET_RVALUE(responseParamList_, responseParamList) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline ApiInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        shared_ptr<int32_t> execTimeout_ {};
        shared_ptr<int32_t> executeMode_ {};
        shared_ptr<int32_t> osApiGroup_ {};
        shared_ptr<int32_t> osProject_ {};
        shared_ptr<int32_t> protocol_ {};
        shared_ptr<int32_t> requestMethod_ {};
        shared_ptr<vector<ApiInfo::RequestParamList>> requestParamList_ {};
        shared_ptr<vector<ApiInfo::ResponseParamList>> responseParamList_ {};
        shared_ptr<int32_t> timeout_ {};
      };

      virtual bool empty() const override { return this->apiInfo_ == nullptr
        && this->contentType_ == nullptr && this->dataCellId_ == nullptr && this->description_ == nullptr && this->fileId_ == nullptr && this->id_ == nullptr
        && this->metadataStorageType_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->scenario_ == nullptr && this->storageType_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr && this->versionConfig_ == nullptr; };
      // apiInfo Field Functions 
      bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
      void deleteApiInfo() { this->apiInfo_ = nullptr;};
      inline const UpdateCommand::ApiInfo & getApiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, UpdateCommand::ApiInfo) };
      inline UpdateCommand::ApiInfo getApiInfo() { DARABONBA_PTR_GET(apiInfo_, UpdateCommand::ApiInfo) };
      inline UpdateCommand& setApiInfo(const UpdateCommand::ApiInfo & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
      inline UpdateCommand& setApiInfo(UpdateCommand::ApiInfo && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline UpdateCommand& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // dataCellId Field Functions 
      bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
      void deleteDataCellId() { this->dataCellId_ = nullptr;};
      inline string getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, "") };
      inline UpdateCommand& setDataCellId(string dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline UpdateCommand& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadataStorageType Field Functions 
      bool hasMetadataStorageType() const { return this->metadataStorageType_ != nullptr;};
      void deleteMetadataStorageType() { this->metadataStorageType_ = nullptr;};
      inline string getMetadataStorageType() const { DARABONBA_PTR_GET_DEFAULT(metadataStorageType_, "") };
      inline UpdateCommand& setMetadataStorageType(string metadataStorageType) { DARABONBA_PTR_SET_VALUE(metadataStorageType_, metadataStorageType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline UpdateCommand& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline UpdateCommand& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline UpdateCommand& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline UpdateCommand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionConfig Field Functions 
      bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
      void deleteVersionConfig() { this->versionConfig_ = nullptr;};
      inline const UpdateCommand::VersionConfig & getVersionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, UpdateCommand::VersionConfig) };
      inline UpdateCommand::VersionConfig getVersionConfig() { DARABONBA_PTR_GET(versionConfig_, UpdateCommand::VersionConfig) };
      inline UpdateCommand& setVersionConfig(const UpdateCommand::VersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
      inline UpdateCommand& setVersionConfig(UpdateCommand::VersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


    protected:
      shared_ptr<UpdateCommand::ApiInfo> apiInfo_ {};
      // **The content type.**
      shared_ptr<string> contentType_ {};
      // The subject area ID.
      shared_ptr<string> dataCellId_ {};
      // **The description.**
      shared_ptr<string> description_ {};
      // The file ID (the file ID at creation time).
      // 
      // This parameter is required.
      shared_ptr<string> fileId_ {};
      // The dataset ID (business primary key).
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // **The metastore type.**
      shared_ptr<string> metadataStorageType_ {};
      // The dataset name.
      shared_ptr<string> name_ {};
      // The list of owner IDs, separated by commas.
      shared_ptr<string> owner_ {};
      // **Scenarios:** `OFFLINE` (offline, default) / `REALTIME` (real-time).
      shared_ptr<string> scenario_ {};
      // **The storage type.**
      shared_ptr<string> storageType_ {};
      // The dataset type.
      shared_ptr<string> type_ {};
      // The version.
      shared_ptr<string> version_ {};
      // The dataset version configuration.
      shared_ptr<UpdateCommand::VersionConfig> versionConfig_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->projectId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateDatasetRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateDatasetRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline UpdateDatasetRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateDatasetRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateDatasetRequest::UpdateCommand) };
    inline UpdateDatasetRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateDatasetRequest::UpdateCommand) };
    inline UpdateDatasetRequest& setUpdateCommand(const UpdateDatasetRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateDatasetRequest& setUpdateCommand(UpdateDatasetRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The update request struct.
    // 
    // This parameter is required.
    shared_ptr<UpdateDatasetRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
