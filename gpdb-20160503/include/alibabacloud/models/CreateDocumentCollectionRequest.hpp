// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCUMENTCOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCUMENTCOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDocumentCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocumentCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_TO_JSON(EnableGraph, enableGraph_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
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
      DARABONBA_PTR_TO_JSON(RelationshipTypes, relationshipTypes_);
      DARABONBA_PTR_TO_JSON(SparseRetrievalFields, sparseRetrievalFields_);
      DARABONBA_PTR_TO_JSON(SparseVectorIndexConfig, sparseVectorIndexConfig_);
      DARABONBA_PTR_TO_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_TO_JSON(VectorIndexConfig, vectorIndexConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocumentCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
      DARABONBA_PTR_FROM_JSON(EnableGraph, enableGraph_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
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
      DARABONBA_PTR_FROM_JSON(RelationshipTypes, relationshipTypes_);
      DARABONBA_PTR_FROM_JSON(SparseRetrievalFields, sparseRetrievalFields_);
      DARABONBA_PTR_FROM_JSON(SparseVectorIndexConfig, sparseVectorIndexConfig_);
      DARABONBA_PTR_FROM_JSON(SupportSparse, supportSparse_);
      DARABONBA_PTR_FROM_JSON(VectorIndexConfig, vectorIndexConfig_);
    };
    CreateDocumentCollectionRequest() = default ;
    CreateDocumentCollectionRequest(const CreateDocumentCollectionRequest &) = default ;
    CreateDocumentCollectionRequest(CreateDocumentCollectionRequest &&) = default ;
    CreateDocumentCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocumentCollectionRequest() = default ;
    CreateDocumentCollectionRequest& operator=(const CreateDocumentCollectionRequest &) = default ;
    CreateDocumentCollectionRequest& operator=(CreateDocumentCollectionRequest &&) = default ;
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
      // The number of lists (partitions) for the novad algorithm. Valid values: [2, 1073741824]. The default value is 256.
      shared_ptr<int32_t> nlist_ {};
      // The number of bits used for rabitq compression. Valid values: [1, 8]. The default value is 3.
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
      // - `hnswflat`: An HNSW index without quantization compression. This is the default value.
      // 
      // - `novam`: A graph index without quantization compression. This algorithm is suitable for high-performance scenarios such as real-time recommendation.
      shared_ptr<string> algorithm_ {};
      // The size of the candidate set (`ef_construction`) for HNSW index construction. Valid values: 4 to 1,000. The default value is 64.
      // 
      // > This parameter is applicable only to AnalyticDB for PostgreSQL V7.0 instances, and its value must be greater than or equal to `2 * HnswM`.
      shared_ptr<int32_t> hnswEfConstruction_ {};
      // The maximum number of neighbors (M) for the HNSW algorithm. You do not typically need to set this parameter, as the system automatically sets it based on the vector dimension.
      // 
      // > Value range:
      // >
      // > - For AnalyticDB for PostgreSQL V6.0 instances: 1 to 1,000.
      // >
      // > - For AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. The default value is 16.
      // 
      // > We recommend that you set this parameter based on the vector dimension:
      // >
      // > - If the dimension is 384 or less: 16
      // >
      // > - If the dimension is greater than 384 and less than or equal to 768: 32
      // >
      // > - If the dimension is greater than 768 and less than or equal to 1,024: 64
      // >
      // > - If the dimension is greater than 1,024: 128
      shared_ptr<int32_t> hnswM_ {};
    };

    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->dimension_ == nullptr && this->embeddingModel_ == nullptr && this->enableGraph_ == nullptr
        && this->entityTypes_ == nullptr && this->externalStorage_ == nullptr && this->fullTextRetrievalFields_ == nullptr && this->hnswEfConstruction_ == nullptr && this->hnswM_ == nullptr
        && this->LLMModel_ == nullptr && this->language_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->metadata_ == nullptr
        && this->metadataIndices_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->ownerId_ == nullptr && this->parser_ == nullptr
        && this->pqEnable_ == nullptr && this->regionId_ == nullptr && this->relationshipTypes_ == nullptr && this->sparseRetrievalFields_ == nullptr && this->sparseVectorIndexConfig_ == nullptr
        && this->supportSparse_ == nullptr && this->vectorIndexConfig_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateDocumentCollectionRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateDocumentCollectionRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDocumentCollectionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline CreateDocumentCollectionRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline CreateDocumentCollectionRequest& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


    // enableGraph Field Functions 
    bool hasEnableGraph() const { return this->enableGraph_ != nullptr;};
    void deleteEnableGraph() { this->enableGraph_ = nullptr;};
    inline bool getEnableGraph() const { DARABONBA_PTR_GET_DEFAULT(enableGraph_, false) };
    inline CreateDocumentCollectionRequest& setEnableGraph(bool enableGraph) { DARABONBA_PTR_SET_VALUE(enableGraph_, enableGraph) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline CreateDocumentCollectionRequest& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline CreateDocumentCollectionRequest& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t getExternalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateDocumentCollectionRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // fullTextRetrievalFields Field Functions 
    bool hasFullTextRetrievalFields() const { return this->fullTextRetrievalFields_ != nullptr;};
    void deleteFullTextRetrievalFields() { this->fullTextRetrievalFields_ = nullptr;};
    inline string getFullTextRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(fullTextRetrievalFields_, "") };
    inline CreateDocumentCollectionRequest& setFullTextRetrievalFields(string fullTextRetrievalFields) { DARABONBA_PTR_SET_VALUE(fullTextRetrievalFields_, fullTextRetrievalFields) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline string getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, "") };
    inline CreateDocumentCollectionRequest& setHnswEfConstruction(string hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateDocumentCollectionRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline CreateDocumentCollectionRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateDocumentCollectionRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateDocumentCollectionRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateDocumentCollectionRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateDocumentCollectionRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // metadataIndices Field Functions 
    bool hasMetadataIndices() const { return this->metadataIndices_ != nullptr;};
    void deleteMetadataIndices() { this->metadataIndices_ = nullptr;};
    inline string getMetadataIndices() const { DARABONBA_PTR_GET_DEFAULT(metadataIndices_, "") };
    inline CreateDocumentCollectionRequest& setMetadataIndices(string metadataIndices) { DARABONBA_PTR_SET_VALUE(metadataIndices_, metadataIndices) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateDocumentCollectionRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateDocumentCollectionRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDocumentCollectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parser Field Functions 
    bool hasParser() const { return this->parser_ != nullptr;};
    void deleteParser() { this->parser_ = nullptr;};
    inline string getParser() const { DARABONBA_PTR_GET_DEFAULT(parser_, "") };
    inline CreateDocumentCollectionRequest& setParser(string parser) { DARABONBA_PTR_SET_VALUE(parser_, parser) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t getPqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateDocumentCollectionRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocumentCollectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationshipTypes Field Functions 
    bool hasRelationshipTypes() const { return this->relationshipTypes_ != nullptr;};
    void deleteRelationshipTypes() { this->relationshipTypes_ = nullptr;};
    inline const vector<string> & getRelationshipTypes() const { DARABONBA_PTR_GET_CONST(relationshipTypes_, vector<string>) };
    inline vector<string> getRelationshipTypes() { DARABONBA_PTR_GET(relationshipTypes_, vector<string>) };
    inline CreateDocumentCollectionRequest& setRelationshipTypes(const vector<string> & relationshipTypes) { DARABONBA_PTR_SET_VALUE(relationshipTypes_, relationshipTypes) };
    inline CreateDocumentCollectionRequest& setRelationshipTypes(vector<string> && relationshipTypes) { DARABONBA_PTR_SET_RVALUE(relationshipTypes_, relationshipTypes) };


    // sparseRetrievalFields Field Functions 
    bool hasSparseRetrievalFields() const { return this->sparseRetrievalFields_ != nullptr;};
    void deleteSparseRetrievalFields() { this->sparseRetrievalFields_ = nullptr;};
    inline string getSparseRetrievalFields() const { DARABONBA_PTR_GET_DEFAULT(sparseRetrievalFields_, "") };
    inline CreateDocumentCollectionRequest& setSparseRetrievalFields(string sparseRetrievalFields) { DARABONBA_PTR_SET_VALUE(sparseRetrievalFields_, sparseRetrievalFields) };


    // sparseVectorIndexConfig Field Functions 
    bool hasSparseVectorIndexConfig() const { return this->sparseVectorIndexConfig_ != nullptr;};
    void deleteSparseVectorIndexConfig() { this->sparseVectorIndexConfig_ = nullptr;};
    inline const CreateDocumentCollectionRequest::SparseVectorIndexConfig & getSparseVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(sparseVectorIndexConfig_, CreateDocumentCollectionRequest::SparseVectorIndexConfig) };
    inline CreateDocumentCollectionRequest::SparseVectorIndexConfig getSparseVectorIndexConfig() { DARABONBA_PTR_GET(sparseVectorIndexConfig_, CreateDocumentCollectionRequest::SparseVectorIndexConfig) };
    inline CreateDocumentCollectionRequest& setSparseVectorIndexConfig(const CreateDocumentCollectionRequest::SparseVectorIndexConfig & sparseVectorIndexConfig) { DARABONBA_PTR_SET_VALUE(sparseVectorIndexConfig_, sparseVectorIndexConfig) };
    inline CreateDocumentCollectionRequest& setSparseVectorIndexConfig(CreateDocumentCollectionRequest::SparseVectorIndexConfig && sparseVectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(sparseVectorIndexConfig_, sparseVectorIndexConfig) };


    // supportSparse Field Functions 
    bool hasSupportSparse() const { return this->supportSparse_ != nullptr;};
    void deleteSupportSparse() { this->supportSparse_ = nullptr;};
    inline bool getSupportSparse() const { DARABONBA_PTR_GET_DEFAULT(supportSparse_, false) };
    inline CreateDocumentCollectionRequest& setSupportSparse(bool supportSparse) { DARABONBA_PTR_SET_VALUE(supportSparse_, supportSparse) };


    // vectorIndexConfig Field Functions 
    bool hasVectorIndexConfig() const { return this->vectorIndexConfig_ != nullptr;};
    void deleteVectorIndexConfig() { this->vectorIndexConfig_ = nullptr;};
    inline const CreateDocumentCollectionRequest::VectorIndexConfig & getVectorIndexConfig() const { DARABONBA_PTR_GET_CONST(vectorIndexConfig_, CreateDocumentCollectionRequest::VectorIndexConfig) };
    inline CreateDocumentCollectionRequest::VectorIndexConfig getVectorIndexConfig() { DARABONBA_PTR_GET(vectorIndexConfig_, CreateDocumentCollectionRequest::VectorIndexConfig) };
    inline CreateDocumentCollectionRequest& setVectorIndexConfig(const CreateDocumentCollectionRequest::VectorIndexConfig & vectorIndexConfig) { DARABONBA_PTR_SET_VALUE(vectorIndexConfig_, vectorIndexConfig) };
    inline CreateDocumentCollectionRequest& setVectorIndexConfig(CreateDocumentCollectionRequest::VectorIndexConfig && vectorIndexConfig) { DARABONBA_PTR_SET_RVALUE(vectorIndexConfig_, vectorIndexConfig) };


  protected:
    // The vector index algorithm.
    // 
    // Valid values:
    // 
    // - `hnswflat`: An HNSW index without quantization compression. This is the default value.
    // 
    // - `novam`: A graph index without quantization compression. This algorithm is suitable for high-performance scenarios such as real-time recommendation.
    // 
    // - `novad`: A partitioned index with rabitq quantization. This algorithm is suitable for large-scale, low-cost retrieval scenarios.
    shared_ptr<string> algorithm_ {};
    // The name of the document collection to create.
    // 
    // > The name must comply with PostgreSQL object naming conventions.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The ID of the instance.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in the target region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The vector dimension. If you omit this parameter, the system uses a default dimension for the selected `EmbeddingModel`.
    shared_ptr<int32_t> dimension_ {};
    // The embedding model. The default value is `text-embedding-v3`.
    // 
    // > Supported models:
    // >
    // > - `text-embedding-v3` (Recommended, Default): 1,024, 768, or 512 dimensions
    // >
    // > - `multimodal-embedding-v1` (Recommended): 1,024 dimensions, a multimodal embedding model
    // >
    // > - `text-embedding-v1`: 1,536 dimensions
    // >
    // > - `text-embedding-v2`: 1,536 dimensions
    // >
    // > - `text2vec` (Not recommended): 1,024 dimensions
    // >
    // > - `m3e-base` (Not recommended): 768 dimensions
    // >
    // > - `m3e-small` (Not recommended): 512 dimensions
    // >
    // > - `clip-vit-b-32` (Not recommended): CLIP ViT-B/32 model, 512 dimensions, an image embedding model
    // >
    // > - `clip-vit-b-16` (Not recommended): CLIP ViT-B/16 model, 512 dimensions, an image embedding model
    // >
    // > - `clip-vit-l-14` (Not recommended): CLIP ViT-L/14 model, 768 dimensions, an image embedding model
    // >
    // > - `clip-vit-l-14-336px` (Not recommended): CLIP ViT-L/14\\@336px model, 768 dimensions, an image embedding model
    // >
    // > - `clip-rn50` (Not recommended): CLIP RN50 model, 1,024 dimensions, an image embedding model
    // >
    // > - `clip-rn101` (Not recommended): CLIP RN101 model, 512 dimensions, an image embedding model
    // >
    // > - `clip-rn50x4` (Not recommended): CLIP RN50x4 model, 640 dimensions, an image embedding model
    // >
    // > - `clip-rn50x16` (Not recommended): CLIP RN50x16 model, 768 dimensions, an image embedding model
    // >
    // > - `clip-rn50x64` (Not recommended): CLIP RN50x64 model, 1,024 dimensions, an image embedding model
    shared_ptr<string> embeddingModel_ {};
    // Specifies whether to build a knowledge graph. The default value is `false`.
    // 
    // > To use this parameter, you must first upgrade your instance to a version that supports the graph engine. During the public preview period, submit a ticket to request an upgrade.
    shared_ptr<bool> enableGraph_ {};
    // A list of entity types.
    // 
    // > This parameter is required when `EnableGraph` is set to `true`.
    shared_ptr<vector<string>> entityTypes_ {};
    // Specifies whether to use memory-mapped files (mmap) to build the HNSW index. The default value is 0. Setting this to `1` is recommended if you do not need to delete data and require high upload performance.
    // 
    // Valid values:
    // 
    // - `0`: Builds the index by using segmented page storage. This mode supports delete and update operations and can use the `shared_buffer` in PostgreSQL for caching. This is the default value.
    // 
    // - `1`: Builds the index by using mmap. This mode does not support delete or update operations.
    // 
    // >Notice: 
    // 
    // The `ExternalStorage` parameter is supported only by AnalyticDB for PostgreSQL V6.0 instances. It is not supported by V7.0 instances.
    shared_ptr<int32_t> externalStorage_ {};
    // The metadata fields to use for full-text search. These fields must be keys defined in `Metadata`. Separate multiple fields with a comma (,).
    shared_ptr<string> fullTextRetrievalFields_ {};
    // The size of the candidate set (`ef_construction`) for HNSW index construction. The value must be greater than or equal to `2 * HnswM`.
    // 
    // > Value range:
    // >
    // > - For AnalyticDB for PostgreSQL V6.0 instances: 40 to 4,000.
    // >
    // > - For AnalyticDB for PostgreSQL V7.0 instances: 4 to 1,000. The default value is 64.
    shared_ptr<string> hnswEfConstruction_ {};
    // The maximum number of neighbors (M) for the HNSW algorithm. You do not typically need to set this parameter, as the system automatically sets it based on the vector dimension.
    // 
    // > Value range:
    // >
    // > - For AnalyticDB for PostgreSQL V6.0 instances: 1 to 1,000.
    // >
    // > - For AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. The default value is 16.
    // 
    // > We recommend that you set this parameter based on the vector dimension:
    // >
    // > - If the dimension is 384 or less: 16
    // >
    // > - If the dimension is greater than 384 and less than or equal to 768: 32
    // >
    // > - If the dimension is greater than 768 and less than or equal to 1,024: 64
    // >
    // > - If the dimension is greater than 1,024: 128
    shared_ptr<int32_t> hnswM_ {};
    // The name of the LLM model. Valid values:
    // 
    // - `knowledge-extract-standard`: The default value.
    // 
    // - `knowledge-extract-mini`
    // 
    // > This parameter takes effect only when `EnableGraph` is set to `true`.
    shared_ptr<string> LLMModel_ {};
    // The language used to build the knowledge graph. Valid values:
    // 
    // - `Simplified Chinese`: The default value.
    // 
    // - `English`
    // 
    // > This parameter takes effect only when `EnableGraph` is set to `true`.
    shared_ptr<string> language_ {};
    // The name of the manager account that has `rds_superuser` permissions.
    // 
    // > You can create an account in the console on the \\*\\*Account Management\\*\\* page or by calling the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password for the manager account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The metadata schema for the vector data, specified as a JSON map where keys are field names and values are data types.
    // 
    // > Supported data types
    // >
    // > - For a list of supported data types, see [Data types](https://help.aliyun.com/document_detail/424383.html).
    // >
    // > - The `money` data type is not supported.
    // 
    // >Warning: 
    // 
    // The following fields are reserved and cannot be used: `id`, `vector`, `doc_name`, `content`, `loader_metadata`, `source`, and `to_tsvector`.
    shared_ptr<string> metadata_ {};
    // The metadata fields on which to create scalar indexes. These fields must be keys defined in `Metadata`. Separate multiple fields with a comma (,).
    shared_ptr<string> metadataIndices_ {};
    // The distance metric for the vector index.
    // 
    // Valid values:
    // 
    // - **`l2`**: Euclidean distance.
    // 
    // - **`ip`**: dot product (inner product) distance.
    // 
    // - **`cosine`** (Default): cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace. The default value is `public`.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to list namespaces.
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The tokenizer for full-text search. The default value is `zh_cn`.
    shared_ptr<string> parser_ {};
    // Specifies whether to enable the PQ (product quantization) algorithm to accelerate indexing. This is recommended for datasets with over 500,000 entries. Valid values:
    // 
    // - `0`: Disables the feature.
    // 
    // - `1`: Enables the feature. This is the default value.
    shared_ptr<int32_t> pqEnable_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // A list of relationship types.
    // 
    // > This parameter is required when `EnableGraph` is set to `true`.
    shared_ptr<vector<string>> relationshipTypes_ {};
    // The metadata fields used to build the sparse vector. These fields must be keys defined in `Metadata`. Separate multiple fields with a comma (,).
    shared_ptr<string> sparseRetrievalFields_ {};
    // Configuration for the sparse vector index. Specifying this parameter creates the index.
    shared_ptr<CreateDocumentCollectionRequest::SparseVectorIndexConfig> sparseVectorIndexConfig_ {};
    // Specifies whether to support sparse vectors. The default value is `false`.
    shared_ptr<bool> supportSparse_ {};
    // Configuration for the dense vector index.
    shared_ptr<CreateDocumentCollectionRequest::VectorIndexConfig> vectorIndexConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
