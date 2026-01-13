// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RERANKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RERANKREQUEST_HPP_
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
  class RerankRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RerankRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(MaxChunksPerDoc, maxChunksPerDoc_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReturnDocuments, returnDocuments_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, RerankRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(MaxChunksPerDoc, maxChunksPerDoc_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReturnDocuments, returnDocuments_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    RerankRequest() = default ;
    RerankRequest(const RerankRequest &) = default ;
    RerankRequest(RerankRequest &&) = default ;
    RerankRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RerankRequest() = default ;
    RerankRequest& operator=(const RerankRequest &) = default ;
    RerankRequest& operator=(RerankRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->documents_ == nullptr && this->maxChunksPerDoc_ == nullptr && this->model_ == nullptr && this->ownerId_ == nullptr && this->query_ == nullptr
        && this->regionId_ == nullptr && this->returnDocuments_ == nullptr && this->topK_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline RerankRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<string> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<string>) };
    inline vector<string> getDocuments() { DARABONBA_PTR_GET(documents_, vector<string>) };
    inline RerankRequest& setDocuments(const vector<string> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline RerankRequest& setDocuments(vector<string> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // maxChunksPerDoc Field Functions 
    bool hasMaxChunksPerDoc() const { return this->maxChunksPerDoc_ != nullptr;};
    void deleteMaxChunksPerDoc() { this->maxChunksPerDoc_ = nullptr;};
    inline int32_t getMaxChunksPerDoc() const { DARABONBA_PTR_GET_DEFAULT(maxChunksPerDoc_, 0) };
    inline RerankRequest& setMaxChunksPerDoc(int32_t maxChunksPerDoc) { DARABONBA_PTR_SET_VALUE(maxChunksPerDoc_, maxChunksPerDoc) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline RerankRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RerankRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RerankRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RerankRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // returnDocuments Field Functions 
    bool hasReturnDocuments() const { return this->returnDocuments_ != nullptr;};
    void deleteReturnDocuments() { this->returnDocuments_ = nullptr;};
    inline bool getReturnDocuments() const { DARABONBA_PTR_GET_DEFAULT(returnDocuments_, false) };
    inline RerankRequest& setReturnDocuments(bool returnDocuments) { DARABONBA_PTR_SET_VALUE(returnDocuments_, returnDocuments) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RerankRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // List of documents to be re-ordered.
    shared_ptr<vector<string>> documents_ {};
    // Maximum number of chunks allowed when the text exceeds the model window:
    // - bge-reranker-v2-m3: default value is 10.
    // - bge-reranker-v2-minicpm-layerwise: default value is 5:
    // 
    // > Example of splitting
    // > - If using the bge-reranker-v2-minicpm-layerwise model, the maximum single inference window is 2048 tokens. If the query is 48 tokens and the content of a single document parameter is 9000 tokens, it will be divided as follows: 1-2000 for the first, 2001-4000 for the second, and so on. If the number of splits exceeds MaxChunksPerDoc, the remaining sentences will be discarded.
    shared_ptr<int32_t> maxChunksPerDoc_ {};
    // Rerank model, currently supports:
    // - bge-reranker-v2-m3: (default), better performance, supports 8192 tokens per inference, if exceeded, it will be split, which may reduce the effect.
    // - bge-reranker-v2-minicpm-layerwise: better performance than v2-m3, supports 2048 tokens per inference, if exceeded, it will be split, which may reduce the effect.
    shared_ptr<string> model_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Query statement for Rerank.
    shared_ptr<string> query_ {};
    // Region ID where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // If set to false, does not return the Documents text, only returns the index of the document order and the rerank score.
    shared_ptr<bool> returnDocuments_ {};
    // Number of most relevant documents to return.
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
