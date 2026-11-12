// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateCollectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectionShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SparseVectorIndexConfig, sparseVectorIndexConfigShrink_);
      DARABONBA_PTR_TO_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfigShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectionShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SparseVectorIndexConfig, sparseVectorIndexConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfigShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCollectionShrinkRequest() = default ;
    CreateCollectionShrinkRequest(const CreateCollectionShrinkRequest &) = default ;
    CreateCollectionShrinkRequest(CreateCollectionShrinkRequest &&) = default ;
    CreateCollectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectionShrinkRequest() = default ;
    CreateCollectionShrinkRequest& operator=(const CreateCollectionShrinkRequest &) = default ;
    CreateCollectionShrinkRequest& operator=(CreateCollectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->dimension_ == nullptr && this->externalStorage_ == nullptr && this->fullTextRetrievalFields_ == nullptr
        && this->hnswEfConstruction_ == nullptr && this->hnswM_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->metadata_ == nullptr
        && this->metadataIndices_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->ownerId_ == nullptr && this->parser_ == nullptr
        && this->pqEnable_ == nullptr && this->regionId_ == nullptr && this->sparseVectorIndexConfigShrink_ == nullptr && this->supportSparse_ == nullptr && this->vectorIndexConfigShrink_ == nullptr
        && this->workspaceId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateCollectionShrinkRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateCollectionShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateCollectionShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int64_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0L) };
    inline CreateCollectionShrinkRequest& setDimension(int64_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t getExternalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateCollectionShrinkRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline CreateCollectionShrinkRequest& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline string getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, "") };
    inline CreateCollectionShrinkRequest& setHnswEfConstruction(string hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateCollectionShrinkRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateCollectionShrinkRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateCollectionShrinkRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateCollectionShrinkRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metadataIndices Field Functions 
    bool hasMetadataIndices() const { return this->metadataIndices_ != nullptr;};
    void deleteMetadataIndices() { this->metadataIndices_ = nullptr;};
    inline string getMetadataIndices() const { DARABONBA_PTR_GET_DEFAULT(metadataIndices_, "") };
    inline CreateCollectionShrinkRequest& setMetadataIndices(string metadataIndices) { DARABONBA_PTR_SET_VALUE(metadataIndices_, metadataIndices) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateCollectionShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateCollectionShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCollectionShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline CreateCollectionShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t getPqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateCollectionShrinkRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCollectionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sparseVectorIndexConfigShrink Field Functions 
    bool hasSparseVectorIndexConfigShrink() const { return this->sparseVectorIndexConfigShrink_ != nullptr;};
    void deleteSparseVectorIndexConfigShrink() { this->sparseVectorIndexConfigShrink_ = nullptr;};
    inline string getSparseVectorIndexConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sparseVectorIndexConfigShrink_, "") };
    inline CreateCollectionShrinkRequest& setSparseVectorIndexConfigShrink(string sparseVectorIndexConfigShrink) { DARABONBA_PTR_SET_VALUE(sparseVectorIndexConfigShrink_, sparseVectorIndexConfigShrink) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool getSupportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline CreateCollectionShrinkRequest& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


    // vectorIndexConfigShrink Field Functions 
    bool hasVectorIndexConfigShrink() const { return this->vectorIndexConfigShrink_ != nullptr;};
    void deleteVectorIndexConfigShrink() { this->vectorIndexConfigShrink_ = nullptr;};
    inline string getVectorIndexConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(vectorIndexConfigShrink_, "") };
    inline CreateCollectionShrinkRequest& setVectorIndexConfigShrink(string vectorIndexConfigShrink) { DARABONBA_PTR_SET_VALUE(vectorIndexConfigShrink_, vectorIndexConfigShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCollectionShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The vector index algorithm.
    // 
    // Valid values:
    // - hnswflat: HNSW index without quantization compression (default).
    // - novam: Graph index without quantization compression, suitable for high-performance scenarios such as real-time recommendation.
    // - novad: Partitioned index with rabitq quantization, suitable for large-scale, low-cost retrieval scenarios.
    shared_ptr<string> algorithm_ {};
    // The name of the collection to be created.
    // 
    // > The name must comply with the PostgreSQL object naming conventions.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // Instance ID of the instance.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query instance IDs of all AnalyticDB for PostgreSQL instances in the target region.
    shared_ptr<string> DBInstanceId_ {};
    // The vector dimensions.
    // 
    // > If you specify this value, an index is built, and the length of Rows.Vector in the subsequent [UpsertCollectionData](https://help.aliyun.com/document_detail/2401493.html) operation for uploading vector data must be consistent with this value. If you do not specify this value, you can call the [CreateVectorIndex](https://help.aliyun.com/document_detail/2401499.html) operation later to build an index.
    shared_ptr<int64_t> dimension_ {};
    // Specifies whether to use mmap to build the HNSW index. Default value: 0. If the data does not need to be deleted and you have high requirements for the data upload speed, set this parameter to 1.
    // 
    // Valid values:
    // - 0: Build the index by using segment-page storage. This is the default value. In this mode, shared_buffers in PostgreSQL can be used for caching, and operations such as deletion and update are supported.
    // - 1: Build the index by using mmap. This mode does not support operations such as deletion and update.
    // 
    // >Notice: The ExternalStorage parameter is supported only in V6.0. It is not supported in V7.0.</notice>
    shared_ptr<int32_t> externalStorage_ {};
    // The fields used to retrieve data via full-text index. Separate multiple fields with commas (,). The fields must be keys defined in Metadata.
    shared_ptr<string> fullTextRetrievalFields_ {};
    // The size of the candidate set when building the index by using the HNSW algorithm. The value must be greater than or equal to 2 × HNSW_M.
    // 
    // > Valid values:
    // >- AnalyticDB for PostgreSQL V6.0 instances: 40 to 4000.
    // >- AnalyticDB for PostgreSQL V7.0 instances: 4 to 1000. Default value: 64.
    shared_ptr<string> hnswEfConstruction_ {};
    // The maximum number of neighbors in the HNSW algorithm. The operation automatically sets this value based on the vector dimensions. Typically, you do not need to manually set this value.
    // 
    // > Valid values:
    // >- AnalyticDB for PostgreSQL V6.0 instances: 1 to 1000.
    // >- AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. Default value: 16.
    // 
    // > Recommended settings based on vector dimensions:
    // >- Less than or equal to 384: 16.
    // >- Greater than 384 and less than or equal to 768: 32.
    // >- Greater than 768 and less than or equal to 1024: 64.
    // >- Greater than 1024: 128.
    shared_ptr<int32_t> hnswM_ {};
    // The name of the administrator account that has the rds_superuser permission.
    // 
    // > You can call the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation to create an account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password of the administrator account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The metadata of the vector data, which is a JSON string in MAP format. The key represents the field name, and the value represents the data type.
    // 
    // > Supported data types:
    // > - For the list of data types, see [Data types](https://help.aliyun.com/document_detail/424383.html).
    // > - The money data type is not supported.
    // 
    // >Warning: The id, vector, to_tsvector, and source fields are reserved fields and cannot be used.</warning>
    // 
    // This parameter is required.
    shared_ptr<string> metadata_ {};
    // The scalar index fields. Separate multiple fields with commas (,). The fields must be keys defined in Metadata.
    shared_ptr<string> metadataIndices_ {};
    // The distance metric used to build the vector index. Valid values:
    // - l2: Euclidean distance.
    // - ip: Inner product.
    // - cosine: Cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace, and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to view the namespace list.
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The tokenizer used to retrieve data via full-text index. Default value: zh_cn.
    shared_ptr<string> parser_ {};
    // Specifies whether to enable the Product Quantization (PQ) algorithm to accelerate the index. Enable this feature when the data volume exceeds 500,000. Valid values:
    // - 0: Disable.
    // - 1: Enable (default).
    shared_ptr<int32_t> pqEnable_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The sparse vector index configuration. If this parameter is passed, a sparse vector index is created.
    shared_ptr<string> sparseVectorIndexConfigShrink_ {};
    // Specifies whether to support sparse vectors. Default value: false.
    shared_ptr<bool> supportSparse_ {};
    // The dense vector index configuration.
    shared_ptr<string> vectorIndexConfigShrink_ {};
    // The ID of the workspace that consists of multiple database instances. This parameter and the DBInstanceId parameter cannot be empty at the same time. If both parameters are specified, this parameter takes precedence.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
