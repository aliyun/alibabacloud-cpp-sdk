// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETSRESPONSEBODY_HPP_
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
  class ListDatasetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody(ListDatasetsResponseBody &&) = default ;
    ListDatasetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetsResponseBody() = default ;
    ListDatasetsResponseBody& operator=(const ListDatasetsResponseBody &) = default ;
    ListDatasetsResponseBody& operator=(ListDatasetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_TO_JSON(DataCellName, dataCellName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LockOwner, lockOwner_);
          DARABONBA_PTR_TO_JSON(LockOwnerName, lockOwnerName_);
          DARABONBA_PTR_TO_JSON(MetadataStorageType, metadataStorageType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VersionList, versionList_);
        };
        friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
          DARABONBA_PTR_FROM_JSON(DataCellName, dataCellName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LockOwner, lockOwner_);
          DARABONBA_PTR_FROM_JSON(LockOwnerName, lockOwnerName_);
          DARABONBA_PTR_FROM_JSON(MetadataStorageType, metadataStorageType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VersionList, versionList_);
        };
        ResultData() = default ;
        ResultData(const ResultData &) = default ;
        ResultData(ResultData &&) = default ;
        ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultData() = default ;
        ResultData& operator=(const ResultData &) = default ;
        ResultData& operator=(ResultData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VersionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VersionList& obj) { 
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(DataVersionConfig, dataVersionConfig_);
            DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, VersionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(DataVersionConfig, dataVersionConfig_);
            DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          VersionList() = default ;
          VersionList(const VersionList &) = default ;
          VersionList(VersionList &&) = default ;
          VersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VersionList() = default ;
          VersionList& operator=(const VersionList &) = default ;
          VersionList& operator=(VersionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DataVersionConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataVersionConfig& obj) { 
              DARABONBA_PTR_TO_JSON(FileStorageConfig, fileStorageConfig_);
              DARABONBA_PTR_TO_JSON(MetadataStorageConfig, metadataStorageConfig_);
              DARABONBA_PTR_TO_JSON(RealtimeMetaTableConfig, realtimeMetaTableConfig_);
              DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
            };
            friend void from_json(const Darabonba::Json& j, DataVersionConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(FileStorageConfig, fileStorageConfig_);
              DARABONBA_PTR_FROM_JSON(MetadataStorageConfig, metadataStorageConfig_);
              DARABONBA_PTR_FROM_JSON(RealtimeMetaTableConfig, realtimeMetaTableConfig_);
              DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
            };
            DataVersionConfig() = default ;
            DataVersionConfig(const DataVersionConfig &) = default ;
            DataVersionConfig(DataVersionConfig &&) = default ;
            DataVersionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataVersionConfig() = default ;
            DataVersionConfig& operator=(const DataVersionConfig &) = default ;
            DataVersionConfig& operator=(DataVersionConfig &&) = default ;
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
                    inline                     const Darabonba::Json & getIndexParams() const { DARABONBA_GET(indexParams_) };
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
                    // The index build parameters.
                    Darabonba::Json indexParams_ {};
                    // The index type. PG supports IVFFlat and HNSW. Milvus supports all index types.
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
                  // **The field description.**
                  shared_ptr<string> comment_ {};
                  // **The array element subtype. This parameter takes effect only when type is set to ARRAY.**
                  shared_ptr<string> elementType_ {};
                  // **The maximum array capacity. This parameter takes effect only when type is set to ARRAY. Default value: 4096.**
                  shared_ptr<int32_t> maxCapacity_ {};
                  // **The field name.**
                  // 
                  // This parameter is required.
                  shared_ptr<string> name_ {};
                  // Indicates whether the field is a primary key.
                  // 
                  // This parameter is required.
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
              // The meta table data source type (only KAFKA is available in this release).
              // 
              // This parameter is required.
              shared_ptr<string> datasourceType_ {};
              // The meta table name.
              // 
              // This parameter is required.
              shared_ptr<string> metaTableName_ {};
              // The project ID of the meta table (cross-project access is supported).
              // 
              // This parameter is required.
              shared_ptr<int64_t> projectId_ {};
              // The table schema configuration (reuses `MetadataStorageConfigDTO.TableSchemaDTO`).
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
                    inline                     const Darabonba::Json & getIndexParams() const { DARABONBA_GET(indexParams_) };
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
                    // The index build parameters.
                    Darabonba::Json indexParams_ {};
                    // The index type. PG supports IVFFlat and HNSW. Milvus supports all index types.
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
                  // The array element subtype. This parameter takes effect only when type is set to ARRAY.
                  shared_ptr<string> elementType_ {};
                  // The maximum array capacity. This parameter takes effect only when type is set to ARRAY. Default value: 4096.
                  shared_ptr<int32_t> maxCapacity_ {};
                  // The field name.
                  // 
                  // This parameter is required.
                  shared_ptr<string> name_ {};
                  // Indicates whether the field is a primary key.
                  // 
                  // This parameter is required.
                  shared_ptr<bool> pk_ {};
                  // The field type.
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
              // The data source ID.
              // 
              // This parameter is required.
              shared_ptr<string> dataSourceId_ {};
              // The data source name.
              shared_ptr<string> dataSourceName_ {};
              // The development database/schema.
              shared_ptr<string> devSchema_ {};
              // The storage destination (new table or existing table).
              // 
              // This parameter is required.
              shared_ptr<string> metadataStorageMode_ {};
              // The metastore type.
              shared_ptr<string> metadataStorageType_ {};
              // The production database/schema.
              // 
              // This parameter is required.
              shared_ptr<string> prodSchema_ {};
              // The table name.
              // 
              // This parameter is required.
              shared_ptr<string> tableName_ {};
              // The table schema configuration.
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
              // The data source ID.
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
            inline const DataVersionConfig::FileStorageConfig & getFileStorageConfig() const { DARABONBA_PTR_GET_CONST(fileStorageConfig_, DataVersionConfig::FileStorageConfig) };
            inline DataVersionConfig::FileStorageConfig getFileStorageConfig() { DARABONBA_PTR_GET(fileStorageConfig_, DataVersionConfig::FileStorageConfig) };
            inline DataVersionConfig& setFileStorageConfig(const DataVersionConfig::FileStorageConfig & fileStorageConfig) { DARABONBA_PTR_SET_VALUE(fileStorageConfig_, fileStorageConfig) };
            inline DataVersionConfig& setFileStorageConfig(DataVersionConfig::FileStorageConfig && fileStorageConfig) { DARABONBA_PTR_SET_RVALUE(fileStorageConfig_, fileStorageConfig) };


            // metadataStorageConfig Field Functions 
            bool hasMetadataStorageConfig() const { return this->metadataStorageConfig_ != nullptr;};
            void deleteMetadataStorageConfig() { this->metadataStorageConfig_ = nullptr;};
            inline const DataVersionConfig::MetadataStorageConfig & getMetadataStorageConfig() const { DARABONBA_PTR_GET_CONST(metadataStorageConfig_, DataVersionConfig::MetadataStorageConfig) };
            inline DataVersionConfig::MetadataStorageConfig getMetadataStorageConfig() { DARABONBA_PTR_GET(metadataStorageConfig_, DataVersionConfig::MetadataStorageConfig) };
            inline DataVersionConfig& setMetadataStorageConfig(const DataVersionConfig::MetadataStorageConfig & metadataStorageConfig) { DARABONBA_PTR_SET_VALUE(metadataStorageConfig_, metadataStorageConfig) };
            inline DataVersionConfig& setMetadataStorageConfig(DataVersionConfig::MetadataStorageConfig && metadataStorageConfig) { DARABONBA_PTR_SET_RVALUE(metadataStorageConfig_, metadataStorageConfig) };


            // realtimeMetaTableConfig Field Functions 
            bool hasRealtimeMetaTableConfig() const { return this->realtimeMetaTableConfig_ != nullptr;};
            void deleteRealtimeMetaTableConfig() { this->realtimeMetaTableConfig_ = nullptr;};
            inline const DataVersionConfig::RealtimeMetaTableConfig & getRealtimeMetaTableConfig() const { DARABONBA_PTR_GET_CONST(realtimeMetaTableConfig_, DataVersionConfig::RealtimeMetaTableConfig) };
            inline DataVersionConfig::RealtimeMetaTableConfig getRealtimeMetaTableConfig() { DARABONBA_PTR_GET(realtimeMetaTableConfig_, DataVersionConfig::RealtimeMetaTableConfig) };
            inline DataVersionConfig& setRealtimeMetaTableConfig(const DataVersionConfig::RealtimeMetaTableConfig & realtimeMetaTableConfig) { DARABONBA_PTR_SET_VALUE(realtimeMetaTableConfig_, realtimeMetaTableConfig) };
            inline DataVersionConfig& setRealtimeMetaTableConfig(DataVersionConfig::RealtimeMetaTableConfig && realtimeMetaTableConfig) { DARABONBA_PTR_SET_RVALUE(realtimeMetaTableConfig_, realtimeMetaTableConfig) };


            // versionDescription Field Functions 
            bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
            void deleteVersionDescription() { this->versionDescription_ = nullptr;};
            inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
            inline DataVersionConfig& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


          protected:
            // The file storage configuration.
            shared_ptr<DataVersionConfig::FileStorageConfig> fileStorageConfig_ {};
            // The metastore configuration.
            shared_ptr<DataVersionConfig::MetadataStorageConfig> metadataStorageConfig_ {};
            // The real-time meta table configuration (takes effect only when `metadataStorageType=REALTIME_META_TABLE`).
            shared_ptr<DataVersionConfig::RealtimeMetaTableConfig> realtimeMetaTableConfig_ {};
            // The version description.
            shared_ptr<string> versionDescription_ {};
          };

          virtual bool empty() const override { return this->creator_ == nullptr
        && this->dataVersionConfig_ == nullptr && this->datasetId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->version_ == nullptr; };
          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
          inline VersionList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


          // dataVersionConfig Field Functions 
          bool hasDataVersionConfig() const { return this->dataVersionConfig_ != nullptr;};
          void deleteDataVersionConfig() { this->dataVersionConfig_ = nullptr;};
          inline const VersionList::DataVersionConfig & getDataVersionConfig() const { DARABONBA_PTR_GET_CONST(dataVersionConfig_, VersionList::DataVersionConfig) };
          inline VersionList::DataVersionConfig getDataVersionConfig() { DARABONBA_PTR_GET(dataVersionConfig_, VersionList::DataVersionConfig) };
          inline VersionList& setDataVersionConfig(const VersionList::DataVersionConfig & dataVersionConfig) { DARABONBA_PTR_SET_VALUE(dataVersionConfig_, dataVersionConfig) };
          inline VersionList& setDataVersionConfig(VersionList::DataVersionConfig && dataVersionConfig) { DARABONBA_PTR_SET_RVALUE(dataVersionConfig_, dataVersionConfig) };


          // datasetId Field Functions 
          bool hasDatasetId() const { return this->datasetId_ != nullptr;};
          void deleteDatasetId() { this->datasetId_ = nullptr;};
          inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
          inline VersionList& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline VersionList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline VersionList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline VersionList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline VersionList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The creator ID.
          shared_ptr<string> creator_ {};
          // The dataset version configuration.
          shared_ptr<VersionList::DataVersionConfig> dataVersionConfig_ {};
          // The dataset ID.
          shared_ptr<int64_t> datasetId_ {};
          // The creation time.
          shared_ptr<string> gmtCreate_ {};
          // The modification time.
          shared_ptr<string> gmtModified_ {};
          // The version ID.
          shared_ptr<int64_t> id_ {};
          // The version number.
          shared_ptr<string> version_ {};
        };

        class OwnerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerList& obj) { 
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerList& obj) { 
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          OwnerList() = default ;
          OwnerList(const OwnerList &) = default ;
          OwnerList(OwnerList &&) = default ;
          OwnerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerList() = default ;
          OwnerList& operator=(const OwnerList &) = default ;
          OwnerList& operator=(OwnerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline OwnerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline OwnerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The user ID.
          shared_ptr<string> userId_ {};
          // The username.
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->contentType_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dataCellId_ == nullptr && this->dataCellName_ == nullptr && this->description_ == nullptr
        && this->directory_ == nullptr && this->fileId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->lockOwner_ == nullptr && this->lockOwnerName_ == nullptr && this->metadataStorageType_ == nullptr && this->name_ == nullptr && this->ownerList_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->scenario_ == nullptr && this->storageType_ == nullptr && this->tenantId_ == nullptr
        && this->type_ == nullptr && this->versionList_ == nullptr; };
        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline ResultData& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline ResultData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline ResultData& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // dataCellId Field Functions 
        bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
        void deleteDataCellId() { this->dataCellId_ = nullptr;};
        inline string getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, "") };
        inline ResultData& setDataCellId(string dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


        // dataCellName Field Functions 
        bool hasDataCellName() const { return this->dataCellName_ != nullptr;};
        void deleteDataCellName() { this->dataCellName_ = nullptr;};
        inline string getDataCellName() const { DARABONBA_PTR_GET_DEFAULT(dataCellName_, "") };
        inline ResultData& setDataCellName(string dataCellName) { DARABONBA_PTR_SET_VALUE(dataCellName_, dataCellName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ResultData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
        inline ResultData& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline ResultData& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResultData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lockOwner Field Functions 
        bool hasLockOwner() const { return this->lockOwner_ != nullptr;};
        void deleteLockOwner() { this->lockOwner_ = nullptr;};
        inline string getLockOwner() const { DARABONBA_PTR_GET_DEFAULT(lockOwner_, "") };
        inline ResultData& setLockOwner(string lockOwner) { DARABONBA_PTR_SET_VALUE(lockOwner_, lockOwner) };


        // lockOwnerName Field Functions 
        bool hasLockOwnerName() const { return this->lockOwnerName_ != nullptr;};
        void deleteLockOwnerName() { this->lockOwnerName_ = nullptr;};
        inline string getLockOwnerName() const { DARABONBA_PTR_GET_DEFAULT(lockOwnerName_, "") };
        inline ResultData& setLockOwnerName(string lockOwnerName) { DARABONBA_PTR_SET_VALUE(lockOwnerName_, lockOwnerName) };


        // metadataStorageType Field Functions 
        bool hasMetadataStorageType() const { return this->metadataStorageType_ != nullptr;};
        void deleteMetadataStorageType() { this->metadataStorageType_ = nullptr;};
        inline string getMetadataStorageType() const { DARABONBA_PTR_GET_DEFAULT(metadataStorageType_, "") };
        inline ResultData& setMetadataStorageType(string metadataStorageType) { DARABONBA_PTR_SET_VALUE(metadataStorageType_, metadataStorageType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ResultData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerList Field Functions 
        bool hasOwnerList() const { return this->ownerList_ != nullptr;};
        void deleteOwnerList() { this->ownerList_ = nullptr;};
        inline const vector<ResultData::OwnerList> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<ResultData::OwnerList>) };
        inline vector<ResultData::OwnerList> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<ResultData::OwnerList>) };
        inline ResultData& setOwnerList(const vector<ResultData::OwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
        inline ResultData& setOwnerList(vector<ResultData::OwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ResultData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline ResultData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline ResultData& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline ResultData& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline ResultData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ResultData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // versionList Field Functions 
        bool hasVersionList() const { return this->versionList_ != nullptr;};
        void deleteVersionList() { this->versionList_ = nullptr;};
        inline const vector<ResultData::VersionList> & getVersionList() const { DARABONBA_PTR_GET_CONST(versionList_, vector<ResultData::VersionList>) };
        inline vector<ResultData::VersionList> getVersionList() { DARABONBA_PTR_GET(versionList_, vector<ResultData::VersionList>) };
        inline ResultData& setVersionList(const vector<ResultData::VersionList> & versionList) { DARABONBA_PTR_SET_VALUE(versionList_, versionList) };
        inline ResultData& setVersionList(vector<ResultData::VersionList> && versionList) { DARABONBA_PTR_SET_RVALUE(versionList_, versionList) };


      protected:
        // The content type.
        shared_ptr<string> contentType_ {};
        // The creator ID.
        shared_ptr<string> creator_ {};
        // The creator name.
        shared_ptr<string> creatorName_ {};
        // The data domain ID.
        shared_ptr<string> dataCellId_ {};
        // **The data domain name.**
        shared_ptr<string> dataCellName_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The directory (retrieved from the file service by fileId).
        shared_ptr<string> directory_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The dataset ID (business primary key).
        shared_ptr<int64_t> id_ {};
        // The development owner ID.
        shared_ptr<string> lockOwner_ {};
        // The name of the development owner (interface Displayed Fields).
        shared_ptr<string> lockOwnerName_ {};
        // **The metastore type.**
        shared_ptr<string> metadataStorageType_ {};
        // The dataset name.
        shared_ptr<string> name_ {};
        // The owner list.
        shared_ptr<vector<ResultData::OwnerList>> ownerList_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The project name.
        shared_ptr<string> projectName_ {};
        // The dataset scenarios. Valid values:
        // - OFFLINE: offline (default).
        // - REALTIME: real-time.
        shared_ptr<string> scenario_ {};
        // **The storage type.**
        shared_ptr<string> storageType_ {};
        // The tenant ID.
        shared_ptr<int64_t> tenantId_ {};
        // **The dataset type.**
        shared_ptr<string> type_ {};
        // The version list.
        shared_ptr<vector<ResultData::VersionList>> versionList_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->resultData_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageResult& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // resultData Field Functions 
      bool hasResultData() const { return this->resultData_ != nullptr;};
      void deleteResultData() { this->resultData_ = nullptr;};
      inline const vector<PageResult::ResultData> & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, vector<PageResult::ResultData>) };
      inline vector<PageResult::ResultData> getResultData() { DARABONBA_PTR_GET(resultData_, vector<PageResult::ResultData>) };
      inline PageResult& setResultData(const vector<PageResult::ResultData> & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
      inline PageResult& setResultData(vector<PageResult::ResultData> && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    protected:
      // The total count.
      shared_ptr<int32_t> count_ {};
      // The object.
      shared_ptr<vector<PageResult::ResultData>> resultData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDatasetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDatasetsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDatasetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDatasetsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDatasetsResponseBody::PageResult) };
    inline ListDatasetsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDatasetsResponseBody::PageResult) };
    inline ListDatasetsResponseBody& setPageResult(const ListDatasetsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDatasetsResponseBody& setPageResult(ListDatasetsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDatasetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The paged result.
    shared_ptr<ListDatasetsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
