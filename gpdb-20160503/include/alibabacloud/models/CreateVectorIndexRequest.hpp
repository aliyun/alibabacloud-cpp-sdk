// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVECTORINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVECTORINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateVectorIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVectorIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_TO_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_TO_JSON(HnswM, hnswM_);
      DARABONBA_PTR_TO_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_TO_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Nlist, nlist_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PqEnable, pqEnable_);
      DARABONBA_PTR_TO_JSON(RabitqBits, rabitqBits_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVectorIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(ExternalStorage, externalStorage_);
      DARABONBA_PTR_FROM_JSON(HnswEfConstruction, hnswEfConstruction_);
      DARABONBA_PTR_FROM_JSON(HnswM, hnswM_);
      DARABONBA_PTR_FROM_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_FROM_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Nlist, nlist_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PqEnable, pqEnable_);
      DARABONBA_PTR_FROM_JSON(RabitqBits, rabitqBits_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateVectorIndexRequest() = default ;
    CreateVectorIndexRequest(const CreateVectorIndexRequest &) = default ;
    CreateVectorIndexRequest(CreateVectorIndexRequest &&) = default ;
    CreateVectorIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVectorIndexRequest() = default ;
    CreateVectorIndexRequest& operator=(const CreateVectorIndexRequest &) = default ;
    CreateVectorIndexRequest& operator=(CreateVectorIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->dimension_ == nullptr && this->externalStorage_ == nullptr && this->hnswEfConstruction_ == nullptr
        && this->hnswM_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr
        && this->nlist_ == nullptr && this->ownerId_ == nullptr && this->pqEnable_ == nullptr && this->rabitqBits_ == nullptr && this->regionId_ == nullptr
        && this->type_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateVectorIndexRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline CreateVectorIndexRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateVectorIndexRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline CreateVectorIndexRequest& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // externalStorage Field Functions 
    bool hasExternalStorage() const { return this->externalStorage_ != nullptr;};
    void deleteExternalStorage() { this->externalStorage_ = nullptr;};
    inline int32_t getExternalStorage() const { DARABONBA_PTR_GET_DEFAULT(externalStorage_, 0) };
    inline CreateVectorIndexRequest& setExternalStorage(int32_t externalStorage) { DARABONBA_PTR_SET_VALUE(externalStorage_, externalStorage) };


    // hnswEfConstruction Field Functions 
    bool hasHnswEfConstruction() const { return this->hnswEfConstruction_ != nullptr;};
    void deleteHnswEfConstruction() { this->hnswEfConstruction_ = nullptr;};
    inline int32_t getHnswEfConstruction() const { DARABONBA_PTR_GET_DEFAULT(hnswEfConstruction_, 0) };
    inline CreateVectorIndexRequest& setHnswEfConstruction(int32_t hnswEfConstruction) { DARABONBA_PTR_SET_VALUE(hnswEfConstruction_, hnswEfConstruction) };


    // hnswM Field Functions 
    bool hasHnswM() const { return this->hnswM_ != nullptr;};
    void deleteHnswM() { this->hnswM_ = nullptr;};
    inline int32_t getHnswM() const { DARABONBA_PTR_GET_DEFAULT(hnswM_, 0) };
    inline CreateVectorIndexRequest& setHnswM(int32_t hnswM) { DARABONBA_PTR_SET_VALUE(hnswM_, hnswM) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline CreateVectorIndexRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline CreateVectorIndexRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline CreateVectorIndexRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateVectorIndexRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nlist Field Functions 
    bool hasNlist() const { return this->nlist_ != nullptr;};
    void deleteNlist() { this->nlist_ = nullptr;};
    inline int32_t getNlist() const { DARABONBA_PTR_GET_DEFAULT(nlist_, 0) };
    inline CreateVectorIndexRequest& setNlist(int32_t nlist) { DARABONBA_PTR_SET_VALUE(nlist_, nlist) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVectorIndexRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pqEnable Field Functions 
    bool hasPqEnable() const { return this->pqEnable_ != nullptr;};
    void deletePqEnable() { this->pqEnable_ = nullptr;};
    inline int32_t getPqEnable() const { DARABONBA_PTR_GET_DEFAULT(pqEnable_, 0) };
    inline CreateVectorIndexRequest& setPqEnable(int32_t pqEnable) { DARABONBA_PTR_SET_VALUE(pqEnable_, pqEnable) };


    // rabitqBits Field Functions 
    bool hasRabitqBits() const { return this->rabitqBits_ != nullptr;};
    void deleteRabitqBits() { this->rabitqBits_ = nullptr;};
    inline int32_t getRabitqBits() const { DARABONBA_PTR_GET_DEFAULT(rabitqBits_, 0) };
    inline CreateVectorIndexRequest& setRabitqBits(int32_t rabitqBits) { DARABONBA_PTR_SET_VALUE(rabitqBits_, rabitqBits) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVectorIndexRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateVectorIndexRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The vector indexing algorithm.
    // 
    // Valid values:
    // 
    // - `hnswflat`: (Default) An HNSW index that does not use quantization compression.
    // 
    // - `novam`: A graph-based index that does not use quantization compression. This algorithm is suitable for high-performance scenarios, such as real-time recommendations.
    // 
    // - `novad`: A partitioned index that uses rabitq quantization. This algorithm is suitable for large-scale, cost-effective retrieval scenarios.
    shared_ptr<string> algorithm_ {};
    // The collection name.
    // 
    // > You can call the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) operation to list all collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to view the details of all AnalyticDB for PostgreSQL instances in a specific region, including the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The vector dimension.
    // 
    // > - This parameter is required for dense vectors.
    // >
    // > - This value must match the length of the `Rows.Vector` data provided when calling the [UpsertCollectionData](https://help.aliyun.com/document_detail/2401493.html) operation.
    shared_ptr<int32_t> dimension_ {};
    // Specifies whether to use `mmap` to build the HNSW index. The default value is 0. Set this to 1 for high-performance data uploads in scenarios where data deletion is not required.
    // 
    // Valid values:
    // 
    // - `0`: (Default) Builds the index by using segmented page storage. This mode uses the `shared_buffer` in PostgreSQL for caching and supports delete and update operations.
    // 
    // - `1`: Builds the index by using `mmap`. This mode does not support delete and update operations.
    // 
    // >Notice: 
    // 
    // The `ExternalStorage` parameter is supported only by AnalyticDB for PostgreSQL V6.0.
    shared_ptr<int32_t> externalStorage_ {};
    // The size of the candidate set for the HNSW algorithm during index construction. The value must be in the range of 4 to 1,000. The default value is 64.
    // 
    // > This parameter applies only to AnalyticDB for PostgreSQL V7.0 instances, and its value must be greater than or equal to `2 * HnswM`.
    shared_ptr<int32_t> hnswEfConstruction_ {};
    // The maximum number of neighbors for the Hierarchical Navigable Small World (HNSW) algorithm. The system automatically sets this value based on the vector dimension. You do not typically need to configure this parameter manually.
    // 
    // > Valid values:
    // >
    // > - For AnalyticDB for PostgreSQL V6.0 instances: 1 to 1,000.
    // >
    // > - For AnalyticDB for PostgreSQL V7.0 instances: 2 to 100. The default value is 16.
    // 
    // > We recommend the following values based on the vector dimension:
    // >
    // > - For dimensions of 384 or less: 16
    // >
    // > - For dimensions from 385 to 768: 32
    // >
    // > - For dimensions from 769 to 1,024: 64
    // >
    // > - For dimensions greater than 1,024: 128
    shared_ptr<int32_t> hnswM_ {};
    // The name of the management account that has `rds_superuser` permissions.
    // 
    // > You can create an account on the \\*\\*account management\\*\\* page in the console or by calling the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password of the management account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The distance metric used to build the vector index. Valid values:
    // 
    // - `l2`: euclidean distance
    // 
    // - `ip`: dot product (inner product)
    // 
    // - `cosine`: cosine similarity
    // 
    // > Sparse vectors support only `ip`.
    shared_ptr<string> metrics_ {};
    // The namespace. The default value is `public`.
    // 
    // > You can call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to list all namespaces.
    shared_ptr<string> namespace_ {};
    // The number of lists (partitions) for the Novad algorithm. The value must be in the range of 2 to 1,073,741,824. The default value is 256.
    shared_ptr<int32_t> nlist_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to enable Product Quantization (PQ) to accelerate indexing. Recommended for collections with over 500,000 vectors. Valid values:
    // 
    // - `0`: Disabled.
    // 
    // - `1`: Enabled. (Default)
    shared_ptr<int32_t> pqEnable_ {};
    // The number of bits for rabitq compression. The valid range is 1 to 8. The default value is 3.
    shared_ptr<int32_t> rabitqBits_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The vector type. Valid values:
    // 
    // - `Dense`: (Default) a dense vector
    // 
    // - `Sparse`: a sparse vector
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
