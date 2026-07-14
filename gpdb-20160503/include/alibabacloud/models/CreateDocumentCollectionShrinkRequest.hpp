// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCUMENTCOLLECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCUMENTCOLLECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDocumentCollectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocumentCollectionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(EnableGraph, enableGraph_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_TO_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_TO_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_TO_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_TO_JSON(HnswM, hnswM_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Language, language_);
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
      DARABONBA_PTR_TO_JSON(RelationshipTypes, relationshipTypesShrink_);
      DARABONBA_PTR_TO_JSON(SparseRetrievalFields, sparseRetrievalFields_);
      DARABONBA_PTR_TO_JSON(SparseVectorIndexConfig, sparseVectorIndexConfigShrink_);
      DARABONBA_PTR_TO_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocumentCollectionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(EnableGraph, enableGraph_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_FROM_JSON(FullTextRetrievalFields, fullTextRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_FROM_JSON(HnswM, hnswM_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
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
      DARABONBA_PTR_FROM_JSON(RelationshipTypes, relationshipTypesShrink_);
      DARABONBA_PTR_FROM_JSON(SparseRetrievalFields, sparseRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(SparseVectorIndexConfig, sparseVectorIndexConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfigShrink_);
    };
    CreateDocumentCollectionShrinkRequest() = default ;
    CreateDocumentCollectionShrinkRequest(const CreateDocumentCollectionShrinkRequest &) = default ;
    CreateDocumentCollectionShrinkRequest(CreateDocumentCollectionShrinkRequest &&) = default ;
    CreateDocumentCollectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocumentCollectionShrinkRequest() = default ;
    CreateDocumentCollectionShrinkRequest& operator=(const CreateDocumentCollectionShrinkRequest &) = default ;
    CreateDocumentCollectionShrinkRequest& operator=(CreateDocumentCollectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->dimension_ == nullptr && this->embeddingModel_ == nullptr && this->enableGraph_ == nullptr
        && this->entityTypesShrink_ == nullptr && this->externalStorage_ == nullptr && this->fullTextRetrievalFields_ == nullptr && this->hnswEfConstruction_ == nullptr && this->hnswM_ == nullptr
        && this->LLMModel_ == nullptr && this->language_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->metadata_ == nullptr
        && this->metadataIndices_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->ownerId_ == nullptr && this->parser_ == nullptr
        && this->pqEnable_ == nullptr && this->regionId_ == nullptr && this->relationshipTypesShrink_ == nullptr && this->sparseRetrievalFields_ == nullptr && this->sparseVectorIndexConfigShrink_ == nullptr
        && this->supportSparse_ == nullptr && this->vectorIndexConfigShrink_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateDocumentCollectionShrinkRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateDocumentCollectionShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDocumentCollectionShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateDocumentCollectionShrinkRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // enableGraph Field Functions 
    bool hasEnableGraph() const { return this->enableGraph_ != nullptr;};
    void deleteEnableGraph() { this->enableGraph_ = nullptr;};
    inline bool getEnableGraph() const { DARABONBA_PTR_GET_DEFAULT(enableGraph_, false) };
    inline CreateDocumentCollectionShrinkRequest& setEnableGraph(bool enableGraph) { DARABONBA_PTR_SET_VALUE(enableGraph_, enableGraph) };


    // entityTypesShrink Field Functions 
    bool hasEntityTypesShrink() const { return this->entityTypesShrink_ != nullptr;};
    void deleteEntityTypesShrink() { this->entityTypesShrink_ = nullptr;};
    inline string getEntityTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(entityTypesShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setEntityTypesShrink(string entityTypesShrink) { DARABONBA_PTR_SET_VALUE(entityTypesShrink_, entityTypesShrink) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t getExternalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline CreateDocumentCollectionShrinkRequest& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline string getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, "") };
    inline CreateDocumentCollectionShrinkRequest& setHnswEfConstruction(string hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline CreateDocumentCollectionShrinkRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateDocumentCollectionShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateDocumentCollectionShrinkRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateDocumentCollectionShrinkRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metadataIndices Field Functions 
    bool hasMetadataIndices() const { return this->metadataIndices_ != nullptr;};
    void deleteMetadataIndices() { this->metadataIndices_ = nullptr;};
    inline string getMetadataIndices() const { DARABONBA_PTR_GET_DEFAULT(metadataIndices_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetadataIndices(string metadataIndices) { DARABONBA_PTR_SET_VALUE(metadataIndices_, metadataIndices) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateDocumentCollectionShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDocumentCollectionShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline CreateDocumentCollectionShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t getPqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocumentCollectionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationshipTypesShrink Field Functions 
    bool hasRelationshipTypesShrink() const { return this->relationshipTypesShrink_ != nullptr;};
    void deleteRelationshipTypesShrink() { this->relationshipTypesShrink_ = nullptr;};
    inline string getRelationshipTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(relationshipTypesShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setRelationshipTypesShrink(string relationshipTypesShrink) { DARABONBA_PTR_SET_VALUE(relationshipTypesShrink_, relationshipTypesShrink) };


    // sparseRetrievalFields Field Functions 
    bool hasSparseRetrievalFields() const { return this->sparseRetrievalFields_ != nullptr;};
    void deleteSparseRetrievalFields() { this->sparseRetrievalFields_ = nullptr;};
    inline string getSparseRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(sparseRetrievalFields_, "") };
    inline CreateDocumentCollectionShrinkRequest& setSparseRetrievalFields(string sparseRetrievalFields) { DARABONBA_PTR_SET_VALUE(sparseRetrievalFields_, sparseRetrievalFields) };


    // sparseVectorIndexConfigShrink Field Functions 
    bool hasSparseVectorIndexConfigShrink() const { return this->sparseVectorIndexConfigShrink_ != nullptr;};
    void deleteSparseVectorIndexConfigShrink() { this->sparseVectorIndexConfigShrink_ = nullptr;};
    inline string getSparseVectorIndexConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(sparseVectorIndexConfigShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setSparseVectorIndexConfigShrink(string sparseVectorIndexConfigShrink) { DARABONBA_PTR_SET_VALUE(sparseVectorIndexConfigShrink_, sparseVectorIndexConfigShrink) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool getSupportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline CreateDocumentCollectionShrinkRequest& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


    // vectorIndexConfigShrink Field Functions 
    bool hasVectorIndexConfigShrink() const { return this->vectorIndexConfigShrink_ != nullptr;};
    void deleteVectorIndexConfigShrink() { this->vectorIndexConfigShrink_ = nullptr;};
    inline string getVectorIndexConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(vectorIndexConfigShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setVectorIndexConfigShrink(string vectorIndexConfigShrink) { DARABONBA_PTR_SET_VALUE(vectorIndexConfigShrink_, vectorIndexConfigShrink) };


  protected:
    // The vector index algorithm.
    // 
    // Valid values:
    // - hnswflat: HNSW index without quantization compression (default).
    // - novam: graph index without quantization compression, suitable for high-performance scenarios such as real-time recommendations.
    // - novad: partitioned index with RaBitQ quantization, suitable for large-scale low-cost retrieval scenarios.
    shared_ptr<string> algorithm_ {};
    // The name of the knowledge base to create.
    // 
    // > The name must comply with PostgreSQL object naming conventions.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The vector dimensions. The default value is the dimension supported by the embedding model.
    shared_ptr<int32_t> dimension_ {};
    // The embedding model. Default value: text-embedding-v3.
    // 
    // > Supported models:
    // > - text-embedding-v3 (recommended, default): 1024, 768, or 512 dimensions
    // > - multimodal-embedding-v1 (recommended): 1024 dimensions, multimodal embedding model
    // > - text-embedding-v1: 1536 dimensions
    // > - text-embedding-v2: 1536 dimensions
    // > - text2vec (not recommended): 1024 dimensions
    // > - m3e-base (not recommended): 768 dimensions
    // > - m3e-small (not recommended): 512 dimensions
    // > - clip-vit-b-32 (not recommended): CLIP ViT-B/32 model, 512 dimensions, image embedding model
    // > - clip-vit-b-16 (not recommended): CLIP ViT-B/16 model, 512 dimensions, image embedding model
    // > - clip-vit-l-14 (not recommended): CLIP ViT-L/14 model, 768 dimensions, image embedding model
    // > - clip-vit-l-14-336px (not recommended): CLIP ViT-L/14@336px model, 768 dimensions, image embedding model
    // > - clip-rn50 (not recommended): CLIP RN50 model, 1024 dimensions, image embedding model
    // > - clip-rn101 (not recommended): CLIP RN101 model, 512 dimensions, image embedding model
    // > - clip-rn50x4 (not recommended): CLIP RN50x4 model, 640 dimensions, image embedding model
    // > - clip-rn50x16 (not recommended): CLIP RN50x16 model, 768 dimensions, image embedding model
    // > - clip-rn50x64 (not recommended): CLIP RN50x64 model, 1024 dimensions, image embedding model
    shared_ptr<string> embeddingModel_ {};
    // Specifies whether to enable knowledge graph construction. Default value: false.
    // 
    // > Before using this parameter, upgrade the instance to a version that supports the graph engine. (During the public preview, submit a ticket to upgrade the version.)
    shared_ptr<bool> enableGraph_ {};
    // The list of entity types.
    // 
    // > This parameter is required when knowledge graph construction is enabled.
    shared_ptr<string> entityTypesShrink_ {};
    // Specifies whether to use mmap to build the HNSW index. Default value: 0. If data does not need to be deleted and you require high upload performance, set this parameter to 1.
    // 
    // Valid values:
    // - 0: uses segment-page storage to build the index. This mode uses shared_buffer in PostgreSQL as cache and supports delete and update operations.
    // - 1: uses mmap to build the index. This mode does not support delete or update operations.
    // 
    // >Notice: Only version 6.0 supports the ExternalStorage parameter. Version 7.0 does not support this parameter.
    shared_ptr<int32_t> externalStorage_ {};
    // The fields used for full-text retrieval. Separate multiple fields with commas (,). The fields must be keys defined in Metadata.
    shared_ptr<string> fullTextRetrievalFields_ {};
    // The candidate set size when building an index with the HNSW algorithm. The value must be >= 2*HNSW_M.
    // 
    // > Valid values:
    // >- AnalyticDB for PostgreSQL 6.0 instances: 40 to 4000.
    // >- AnalyticDB for PostgreSQL 7.0 instances: 4 to 1000. Default value: 64.
    shared_ptr<string> hnswEfConstruction_ {};
    // The maximum number of neighbors in the HNSW algorithm. This value is automatically set based on the vector dimensions. Manual configuration is generally not required.
    // 
    // > Valid values:
    // >- AnalyticDB for PostgreSQL 6.0 instances: 1 to 1000.
    // >- AnalyticDB for PostgreSQL 7.0 instances: 2 to 100. Default value: 16.
    // 
    // > Recommended values based on vector dimensions:
    // >- 384 or fewer: 16
    // >- Greater than 384 and up to 768: 32
    // >- Greater than 768 and up to 1024: 64
    // >- Greater than 1024: 128
    shared_ptr<int32_t> hnswM_ {};
    // The LLM model name. Valid values:
    // - knowledge-extract-standard: default value.
    // - knowledge-extract-mini
    // > This parameter takes effect only when knowledge graph construction is enabled.
    shared_ptr<string> LLMModel_ {};
    // The language used for knowledge graph construction. Valid values:
    // - Simplified Chinese: Simplified Chinese. Default value.
    // - English: English.
    // > This parameter takes effect only when knowledge graph construction is enabled.
    shared_ptr<string> language_ {};
    // The name of the management account that has the rds_superuser permission.
    // 
    // > You can create an account in the console by navigating to Account Management, or by calling the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password of the management account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The metadata of vector data, in the format of a JSON string representing a MAP. The key represents the field name, and the value represents the data type.
    // 
    // > Supported data types:
    // > - For the list of data types, see [Data types](https://help.aliyun.com/document_detail/424383.html).
    // > - The money type is not supported.
    // 
    // >Warning: The following fields are reserved and cannot be used: id, vector, doc_name, content, loader_metadata, source, and to_tsvector.
    shared_ptr<string> metadata_ {};
    // The scalar index fields. Separate multiple fields with commas (,). The fields must be keys defined in Metadata.
    shared_ptr<string> metadataIndices_ {};
    // The distance metric used for building vector indexes.
    // 
    // Valid values:
    // - **l2**: Euclidean distance.
    // - **ip**: inner product distance.
    // - **cosine** (default): cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace. Default value: public.
    // 
    // > You can create a namespace by calling the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation and query the list of namespaces by calling the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation.
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The tokenizer used for full-text retrieval. Default value: zh_cn.
    shared_ptr<string> parser_ {};
    // Specifies whether to enable Product Quantization (PQ) algorithm acceleration for the index. We recommend enabling this feature when the data volume exceeds 500,000. Valid values:
    // - 0: disabled.
    // - 1: enabled (default).
    shared_ptr<int32_t> pqEnable_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of relationship edge types.
    // 
    // > This parameter is required when knowledge graph construction is enabled.
    shared_ptr<string> relationshipTypesShrink_ {};
    // The metadata fields used for building sparse vectors. Separate multiple fields with commas (,). The fields must be keys defined in Metadata.
    shared_ptr<string> sparseRetrievalFields_ {};
    // The sparse vector index configuration. If specified, a sparse vector index is created.
    shared_ptr<string> sparseVectorIndexConfigShrink_ {};
    // Specifies whether to support sparse vectors. Default value: false.
    shared_ptr<bool> supportSparse_ {};
    // The dense vector index configuration.
    shared_ptr<string> vectorIndexConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
