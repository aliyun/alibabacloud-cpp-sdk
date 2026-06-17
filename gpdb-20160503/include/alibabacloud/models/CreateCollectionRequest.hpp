// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_TO_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_TO_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_TO_JSON(HnswM, hnswM_);
      DARABONBA_PTR_TO_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_TO_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(MetadataIndices, metadataIndices_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Parser, parser_);
      DARABONBA_PTR_TO_JSON(PqEnable, pqEnable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SparseVectorIndexConfig, sparseVectorIndexConfig_);
      DARABONBA_PTR_TO_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_FROM_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_FROM_JSON(HnswM, hnswM_);
      DARABONBA_PTR_FROM_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_FROM_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(MetadataIndices, metadataIndices_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Parser, parser_);
      DARABONBA_PTR_FROM_JSON(PqEnable, pqEnable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SparseVectorIndexConfig, sparseVectorIndexConfig_);
      DARABONBA_PTR_FROM_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCollectionRequest() = default ;
    CreateCollectionRequest(const CreateCollectionRequest &) = default ;
    CreateCollectionRequest(CreateCollectionRequest &&) = default ;
    CreateCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectionRequest() = default ;
    CreateCollectionRequest& operator=(const CreateCollectionRequest &) = default ;
    CreateCollectionRequest& operator=(CreateCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VectorIndexConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VectorIndexConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Nlist, nlist_);
        DARABONBA_PTR_TO_JSON(RabitqBits, rabitqBits_);
      };
      friend void from_json(const Darabonba::Json& j, VectorIndexConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Nlist, nlist_);
        DARABONBA_PTR_FROM_JSON(RabitqBits, rabitqBits_);
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
      virtual bool empty() const override { return this->nlist_ == nullptr
        && this->rabitqBits_ == nullptr; };
      // nlist Field Functions 
      bool hasNlist() const { return this->nlist_ != nullptr;};
      void deleteNlist() { this->nlist_ = nullptr;};
      inline int32_t getNlist() const { DARABONBA_PTR_GET_DEFAULT(nlist_, 0) };
      inline VectorIndexConfig& setNlist(int32_t nlist) { DARABONBA_PTR_SET_VALUE(nlist_, nlist) };


      // rabitqBits Field Functions 
      bool hasRabitqBits() const { return this->rabitqBits_ != nullptr;};
      void deleteRabitqBits() { this->rabitqBits_ = nullptr;};
      inline int32_t getRabitqBits() const { DARABONBA_PTR_GET_DEFAULT(rabitqBits_, 0) };
      inline VectorIndexConfig& setRabitqBits(int32_t rabitqBits) { DARABONBA_PTR_SET_VALUE(rabitqBits_, rabitqBits) };


    protected:
      // The number of lists (partitions) for a `novad` index. The value must be an integer from 2 to 1,073,741,824. The default is 256.
      shared_ptr<int32_t> nlist_ {};
      // The number of bits for `rabitq` compression. The value must be an integer from 1 to 8. The default is 3.
      shared_ptr<int32_t> rabitqBits_ {};
    };

    class SparseVectorIndexConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SparseVectorIndexConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(HnswEfConstruction, hnswEfConstruction_);
        DARABONBA_PTR_TO_JSON(HnswM, hnswM_);
      };
      friend void from_json(const Darabonba::Json& j, SparseVectorIndexConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(HnswEfConstruction, hnswEfConstruction_);
        DARABONBA_PTR_FROM_JSON(HnswM, hnswM_);
      };
      SparseVectorIndexConfig() = default ;
      SparseVectorIndexConfig(const SparseVectorIndexConfig &) = default ;
      SparseVectorIndexConfig(SparseVectorIndexConfig &&) = default ;
      SparseVectorIndexConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SparseVectorIndexConfig() = default ;
      SparseVectorIndexConfig& operator=(const SparseVectorIndexConfig &) = default ;
      SparseVectorIndexConfig& operator=(SparseVectorIndexConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->hnswEfConstruction_ == nullptr && this->hnswM_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline SparseVectorIndexConfig& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // hnswEfConstruction Field Functions 
      bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
      void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
      inline int32_t getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, 0) };
      inline SparseVectorIndexConfig& setHnswEfConstruction(int32_t hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


      // hnswM Field Functions 
      bool hasHnswM() const { return this->hnswM_ != nullptr;};
      void deleteHnswM() { this->hnswM_ = nullptr;};
      inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
      inline SparseVectorIndexConfig& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    protected:
      // The vector index algorithm.
      // 
      // Valid values:
      // 
      // - `hnswflat`: (Default) An HNSW index without quantization compression.
      // 
      // - `novam`: A graph index without quantization compression. This algorithm is suitable for high-performance scenarios, such as real-time recommendations.
      shared_ptr<string> algorithm_ {};
      // The size of the candidate set for HNSW index construction. The value must be an integer from 4 to 1,000. The default is 64.
      // 
      // > This parameter is required only for AnalyticDB for PostgreSQL V7.0 instances, and its value must be greater than or equal to `2 * HnswM`.
      shared_ptr<int32_t> hnswEfConstruction_ {};
      // The maximum number of neighbors for the HNSW algorithm. You do not typically need to set this parameter, as the system automatically determines a value based on the vector dimension.
      // 
      // > Value range:
      // >
      // > - For AnalyticDB for PostgreSQL V6.0 instances: 1 to 1000.
      // >
      // > - For AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. The default value is 16.
      // 
      // > We recommend that you set this parameter based on the vector dimension:
      // >
      // > - 16 for dimensions less than or equal to 384.
      // >
      // > - 32 for dimensions greater than 384 and less than or equal to 768.
      // >
      // > - 64 for dimensions greater than 768 and less than or equal to 1024.
      // >
      // > - 128 for dimensions greater than 1024.
      shared_ptr<int32_t> hnswM_ {};
    };

    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->dimension_ == nullptr && this->externalStorage_ == nullptr && this->fullTextRetrievalFields_ == nullptr
        && this->hnswEfConstruction_ == nullptr && this->hnswM_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->metadata_ == nullptr
        && this->metadataIndices_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->ownerId_ == nullptr && this->parser_ == nullptr
        && this->pqEnable_ == nullptr && this->regionId_ == nullptr && this->sparseVectorIndexConfig_ == nullptr && this->supportSparse_ == nullptr && this->vectorIndexConfig_ == nullptr
        && this->workspaceId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateCollectionRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateCollectionRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateCollectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int64_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0L) };
    inline CreateCollectionRequest& setDimension(int64_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t getExternalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateCollectionRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline CreateCollectionRequest& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline string getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, "") };
    inline CreateCollectionRequest& setHnswEfConstruction(string hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateCollectionRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateCollectionRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateCollectionRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateCollectionRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metadataIndices Field Functions 
    bool hasMetadataIndices() const { return this->metadataIndices_ != nullptr;};
    void deleteMetadataIndices() { this->metadataIndices_ = nullptr;};
    inline string getMetadataIndices() const { DARABONBA_PTR_GET_DEFAULT(metadataIndices_, "") };
    inline CreateCollectionRequest& setMetadataIndices(string metadataIndices) { DARABONBA_PTR_SET_VALUE(metadataIndices_, metadataIndices) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateCollectionRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateCollectionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCollectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline CreateCollectionRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t getPqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateCollectionRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCollectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sparseVectorIndexConfig Field Functions 
    bool hasSparseVectorIndexConfig() const { return this->sparseVectorIndexConfig_ != nullptr;};
    void deleteSparseVectorIndexConfig() { this->sparseVectorIndexConfig_ = nullptr;};
    inline const CreateCollectionRequest::SparseVectorIndexConfig & getSparseVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(sparseVectorIndexConfig_, CreateCollectionRequest::SparseVectorIndexConfig) };
    inline CreateCollectionRequest::SparseVectorIndexConfig getSparseVectorIndexConfig() { DARABONBA_PTR_GET(sparseVectorIndexConfig_, CreateCollectionRequest::SparseVectorIndexConfig) };
    inline CreateCollectionRequest& setSparseVectorIndexConfig(const CreateCollectionRequest::SparseVectorIndexConfig & sparseVectorIndexConfig) { DARABONBA_PTR_SET_VALUE(sparseVectorIndexConfig_, sparseVectorIndexConfig) };
    inline CreateCollectionRequest& setSparseVectorIndexConfig(CreateCollectionRequest::SparseVectorIndexConfig && sparseVectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(sparseVectorIndexConfig_, sparseVectorIndexConfig) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool getSupportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline CreateCollectionRequest& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


    // vectorIndexConfig Field Functions 
    bool hasVectorIndexConfig() const { return this->vectorIndexConfig_ != nullptr;};
    void deleteVectorIndexConfig() { this->vectorIndexConfig_ = nullptr;};
    inline const CreateCollectionRequest::VectorIndexConfig & getVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(vectorIndexConfig_, CreateCollectionRequest::VectorIndexConfig) };
    inline CreateCollectionRequest::VectorIndexConfig getVectorIndexConfig() { DARABONBA_PTR_GET(vectorIndexConfig_, CreateCollectionRequest::VectorIndexConfig) };
    inline CreateCollectionRequest& setVectorIndexConfig(const CreateCollectionRequest::VectorIndexConfig & vectorIndexConfig) { DARABONBA_PTR_SET_VALUE(vectorIndexConfig_, vectorIndexConfig) };
    inline CreateCollectionRequest& setVectorIndexConfig(CreateCollectionRequest::VectorIndexConfig && vectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfig_, vectorIndexConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCollectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The vector index algorithm.
    // 
    // Valid values:
    // 
    // - `hnswflat`: (Default) An HNSW index without quantization compression.
    // 
    // - `novam`: A graph index without quantization compression. This algorithm is suitable for high-performance scenarios, such as real-time recommendations.
    // 
    // - `novad`: A partitioned index with `rabitq` quantization. This algorithm is suitable for large-scale, low-cost retrieval scenarios.
    shared_ptr<string> algorithm_ {};
    // The name of the collection to create.
    // 
    // > The name must comply with PostgreSQL object naming conventions.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in a specific region.
    shared_ptr<string> DBInstanceId_ {};
    // The vector dimension.
    // 
    // > If you specify this parameter, a vector index is created. In subsequent calls to the [UpsertCollectionData](https://help.aliyun.com/document_detail/2401493.html) operation, the length of `Rows.Vector` must match this dimension. If you do not specify this parameter, you must call the [CreateVectorIndex](https://help.aliyun.com/document_detail/2401499.html) operation to create an index later.
    shared_ptr<int64_t> dimension_ {};
    // Specifies whether to use `mmap` to build the HNSW index. The default value is 0. We recommend setting this to 1 if your data does not require deletion and you need high-performance data ingestion.
    // 
    // Valid values:
    // 
    // - `0`: (Default) Builds the index by using segmented page storage. This mode can use the `shared_buffer` in PostgreSQL for caching and supports `DELETE` and `UPDATE` operations.
    // 
    // - `1`: Builds the index by using `mmap`. This mode does not support `DELETE` or `UPDATE` operations.
    // 
    // >Notice: 
    // 
    // The `ExternalStorage` parameter is available only for AnalyticDB for PostgreSQL v6.0 instances and is not supported in v7.0.
    shared_ptr<int32_t> externalStorage_ {};
    // The fields to use for full-text search. Use commas (`,`) to separate multiple field names. These fields must be keys defined in the `Metadata` parameter.
    shared_ptr<string> fullTextRetrievalFields_ {};
    // The size of the candidate set for HNSW index construction. The value must be greater than or equal to `2 * HnswM`.
    // 
    // > Value range:
    // >
    // > - For AnalyticDB for PostgreSQL V6.0 instances: 40 to 4000.
    // >
    // > - For AnalyticDB for PostgreSQL V7.0 instances: 4 to 1000. The default value is 64.
    shared_ptr<string> hnswEfConstruction_ {};
    // The maximum number of neighbors for the HNSW algorithm. You do not typically need to set this parameter, as the system automatically determines a value based on the vector dimension.
    // 
    // > Value range:
    // >
    // > - For AnalyticDB for PostgreSQL V6.0 instances: 1 to 1000.
    // >
    // > - For AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. The default value is 16.
    // 
    // > We recommend that you set this parameter based on the vector dimension:
    // >
    // > - 16 for dimensions less than or equal to 384.
    // >
    // > - 32 for dimensions greater than 384 and less than or equal to 768.
    // >
    // > - 64 for dimensions greater than 768 and less than or equal to 1024.
    // >
    // > - 128 for dimensions greater than 1024.
    shared_ptr<int32_t> hnswM_ {};
    // The name of the management account that has the `rds_superuser` privilege.
    // 
    // > You can call the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation to create an account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password of the management account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // A JSON string that defines the metadata schema as a map. The keys are field names, and the values are their corresponding data types.
    // 
    // > Supported data types
    // >
    // > - For a list of supported data types, see [Data types](https://help.aliyun.com/document_detail/424383.html).
    // >
    // > - The `money` data type is not supported.
    // 
    // >Warning: 
    // 
    // The field names `id`, `vector`, `to_tsvector`, and `source` are reserved and cannot be used.
    // 
    // This parameter is required.
    shared_ptr<string> metadata_ {};
    // The scalar index fields. Separate multiple fields with commas (`,`). The fields must be keys that are defined in `Metadata`.
    shared_ptr<string> metadataIndices_ {};
    // The distance metric used to build the vector index. Valid values:
    // 
    // - `l2`: Euclidean distance.
    // 
    // - `ip`: dot product.
    // 
    // - `cosine`: cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace or the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to list existing namespaces.
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The parser for full-text search. The default is `zh_cn`.
    shared_ptr<string> parser_ {};
    // Specifies whether to enable Product Quantization (PQ) for index acceleration. This is recommended for datasets with more than 500,000 entries. Valid values:
    // 
    // - `0`: Disabled.
    // 
    // - `1`: (Default) Enabled.
    shared_ptr<int32_t> pqEnable_ {};
    // The ID of the region where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The configuration for the sparse vector index. If specified, a sparse vector index is created.
    shared_ptr<CreateCollectionRequest::SparseVectorIndexConfig> sparseVectorIndexConfig_ {};
    // Specifies whether to enable support for sparse vectors. The default value is `false`.
    shared_ptr<bool> supportSparse_ {};
    // The configuration for the dense vector index.
    shared_ptr<CreateCollectionRequest::VectorIndexConfig> vectorIndexConfig_ {};
    // The ID of the workspace, which contains multiple database instances. You must specify either `WorkspaceId` or `DBInstanceId`. If both are specified, `WorkspaceId` takes precedence.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
