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
    };
    friend void from_json(const Darabonba::Json& j, CreateDocumentCollectionShrinkRequest& obj) { 
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
    virtual bool empty() const override { this->collection_ != nullptr
        && this->DBInstanceId_ != nullptr && this->dimension_ != nullptr && this->embeddingModel_ != nullptr && this->enableGraph_ != nullptr && this->entityTypesShrink_ != nullptr
        && this->externalStorage_ != nullptr && this->fullTextRetrievalFields_ != nullptr && this->hnswEfConstruction_ != nullptr && this->hnswM_ != nullptr && this->LLMModel_ != nullptr
        && this->language_ != nullptr && this->managerAccount_ != nullptr && this->managerAccountPassword_ != nullptr && this->metadata_ != nullptr && this->metadataIndices_ != nullptr
        && this->metrics_ != nullptr && this->namespace_ != nullptr && this->ownerId_ != nullptr && this->parser_ != nullptr && this->pqEnable_ != nullptr
        && this->regionId_ != nullptr && this->relationshipTypesShrink_ != nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateDocumentCollectionShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDocumentCollectionShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string embeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateDocumentCollectionShrinkRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // enableGraph Field Functions 
    bool hasEnableGraph() const { return this->enableGraph_ != nullptr;};
    void deleteEnableGraph() { this->enableGraph_ = nullptr;};
    inline bool enableGraph() const { DARABONBA_PTR_GET_DEFAULT(enableGraph_, false) };
    inline CreateDocumentCollectionShrinkRequest& setEnableGraph(bool enableGraph) { DARABONBA_PTR_SET_VALUE(enableGraph_, enableGraph) };


    // entityTypesShrink Field Functions 
    bool hasEntityTypesShrink() const { return this->entityTypesShrink_ != nullptr;};
    void deleteEntityTypesShrink() { this->entityTypesShrink_ = nullptr;};
    inline string entityTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(entityTypesShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setEntityTypesShrink(string entityTypesShrink) { DARABONBA_PTR_SET_VALUE(entityTypesShrink_, entityTypesShrink) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t externalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string fullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline CreateDocumentCollectionShrinkRequest& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline string hnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, "") };
    inline CreateDocumentCollectionShrinkRequest& setHnswEfConstruction(string hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t hnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string LLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline CreateDocumentCollectionShrinkRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateDocumentCollectionShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string managerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateDocumentCollectionShrinkRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string managerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateDocumentCollectionShrinkRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metadataIndices Field Functions 
    bool hasMetadataIndices() const { return this->metadataIndices_ != nullptr;};
    void deleteMetadataIndices() { this->metadataIndices_ = nullptr;};
    inline string metadataIndices() const { DARABONBA_PTR_GET_DEFAULT(metadataIndices_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetadataIndices(string metadataIndices) { DARABONBA_PTR_SET_VALUE(metadataIndices_, metadataIndices) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateDocumentCollectionShrinkRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateDocumentCollectionShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDocumentCollectionShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string parser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline CreateDocumentCollectionShrinkRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t pqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateDocumentCollectionShrinkRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocumentCollectionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationshipTypesShrink Field Functions 
    bool hasRelationshipTypesShrink() const { return this->relationshipTypesShrink_ != nullptr;};
    void deleteRelationshipTypesShrink() { this->relationshipTypesShrink_ = nullptr;};
    inline string relationshipTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(relationshipTypesShrink_, "") };
    inline CreateDocumentCollectionShrinkRequest& setRelationshipTypesShrink(string relationshipTypesShrink) { DARABONBA_PTR_SET_VALUE(relationshipTypesShrink_, relationshipTypesShrink) };


  protected:
    // The name of the document collection that you want to create.
    // 
    // > The name must comply with PostgreSQL object naming restrictions.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int32_t> dimension_ = nullptr;
    // The vectorization algorithm.
    // 
    // >  Supported algorithms:
    // 
    // *   text-embedding-v1: the algorithm that produces 1536-dimensional vectors.
    // 
    // *   text-embedding-v2: the algorithm that produces 1536-dimensional vectors.
    // 
    // *   text2vec: the algorithm that produces 1024-dimensional vectors.
    // 
    // *   m3e-base: the algorithm that produces 768-dimensional vectors.
    // 
    // *   m3e-small: the algorithm that produces 512-dimensional vectors.
    // 
    // *   clip-vit-b-32: the image vectorization algorithm that uses the Contrastive Language-Image Pre-Training (CLIP) ViT-B/32 model and produces 512-dimensional vectors.
    // 
    // *   clip-vit-b-16: the image vectorization algorithm that uses the CLIP ViT-B/16 model and produces 512-dimensional vectors.
    // 
    // *   clip-vit-l-14: the image vectorization algorithm that uses the CLIP ViT-L/14 model and produces 768-dimensional vectors.
    // 
    // *   clip-vit-l-14-336px: the image vectorization algorithm that uses the CLIP ViT-L/14@336px model and produces 768-dimensional vectors.
    // 
    // *   clip-rn50: the image vectorization algorithm that uses the CLIP RN50 model and produces 1024-dimensional vectors.
    // 
    // *   clip-rn101: the image vectorization algorithm that uses the CLIP RN101 model and produces 512-dimensional vectors.
    // 
    // *   clip-rn50x4: the image vectorization algorithm that uses the CLIP RN50x4 model and produces 640-dimensional vectors.
    // 
    // *   clip-rn50x16: the image vectorization algorithm that uses the CLIP RN50x16 model and produces 768-dimensional vectors.
    // 
    // *   clip-rn50x64: the image vectorization algorithm that uses the CLIP RN50x64 model and produces 1024-dimensional vectors.
    std::shared_ptr<string> embeddingModel_ = nullptr;
    std::shared_ptr<bool> enableGraph_ = nullptr;
    std::shared_ptr<string> entityTypesShrink_ = nullptr;
    // Specifies whether to use the memory mapping technology to create HNSW indexes. Valid values: 0 and 1. Default value: 0. We recommend that you set the value to 1 in scenarios that require upload speed but not data deletion.
    // 
    // > 
    // 
    // *   0: uses segmented paging storage to create indexes. This method uses the shared buffer of PostgreSQL for caching and supports the delete and update operations.
    // 
    // *   1: uses the memory mapping technology to create indexes. This method does not support the delete or update operation.
    std::shared_ptr<int32_t> externalStorage_ = nullptr;
    // The fields used for full-text search. Separate multiple fields with commas (,). These fields must be keys defined in Metadata.
    std::shared_ptr<string> fullTextRetrievalFields_ = nullptr;
    std::shared_ptr<string> hnswEfConstruction_ = nullptr;
    // The maximum number of neighbors for the Hierarchical Navigable Small World (HNSW) algorithm. Valid values: 1 to 1000. In most cases, this parameter is automatically configured based on the value of the Dimension parameter. You do not need to configure this parameter.
    // 
    // >  We recommend that you configure this parameter based on the value of the Dimension parameter.
    // 
    // *   If you set Dimension to a value less than or equal to 384, set the value of HnswM to 16.
    // 
    // *   If you set Dimension to a value greater than 384 and less than or equal to 768, set the value of HnswM to 32.
    // 
    // *   If you set Dimension to a value greater than 768 and less than or equal to 1024, set the value of HnswM to 64.
    // 
    // *   If you set Dimension to a value greater than 1024, set the value of HnswM to 128.
    std::shared_ptr<int32_t> hnswM_ = nullptr;
    std::shared_ptr<string> LLMModel_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // The name of the manager account that has the rds_superuser permission.
    // 
    // > You can create an account through the console -> Account Management, or by using the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<string> managerAccount_ = nullptr;
    // The password of the management account.
    // 
    // This parameter is required.
    std::shared_ptr<string> managerAccountPassword_ = nullptr;
    // The metadata of the vector data, which is a JSON string in the MAP format. The key specifies the field name, and the value specifies the data type.
    // 
    // > Supported data types:
    // > - For information about data types, see: [Data Types](https://www.alibabacloud.com/help/en/analyticdb/analyticdb-for-postgresql/developer-reference/data-types-1/).
    // > - The money type is not supported.
    // 
    // >Warning: The fields id, vector, doc_name, content, loader_metadata, source, and to_tsvector are reserved and should not be used.
    std::shared_ptr<string> metadata_ = nullptr;
    std::shared_ptr<string> metadataIndices_ = nullptr;
    // The method that is used to create vector indexes.
    // 
    // Valid values:
    // 
    // *   **l2**: Euclidean distance.
    // *   **ip**: inner product distance.
    // *   **cosine** (default): cosine similarity.
    std::shared_ptr<string> metrics_ = nullptr;
    // The name of the namespace. Default value: public.
    // 
    // >  You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The analyzer that is used for full-text search. Default value: zh_cn.
    std::shared_ptr<string> parser_ = nullptr;
    // Specifies whether to enable the product quantization (PQ) feature for index acceleration. We recommend that you enable this feature for more than 500,000 rows of data. Valid values:
    // 
    // *   0: no.
    // *   1 (default): yes.
    std::shared_ptr<int32_t> pqEnable_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> relationshipTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
