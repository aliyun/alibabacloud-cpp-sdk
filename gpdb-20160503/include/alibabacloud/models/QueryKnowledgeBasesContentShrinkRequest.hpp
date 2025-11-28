// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgsShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollectionShrink_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgsShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollectionShrink_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    QueryKnowledgeBasesContentShrinkRequest() = default ;
    QueryKnowledgeBasesContentShrinkRequest(const QueryKnowledgeBasesContentShrinkRequest &) = default ;
    QueryKnowledgeBasesContentShrinkRequest(QueryKnowledgeBasesContentShrinkRequest &&) = default ;
    QueryKnowledgeBasesContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentShrinkRequest() = default ;
    QueryKnowledgeBasesContentShrinkRequest& operator=(const QueryKnowledgeBasesContentShrinkRequest &) = default ;
    QueryKnowledgeBasesContentShrinkRequest& operator=(QueryKnowledgeBasesContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->mergeMethod_ == nullptr && return this->mergeMethodArgsShrink_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->rerankFactor_ == nullptr && return this->sourceCollectionShrink_ == nullptr && return this->topK_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // mergeMethod Field Functions 
    bool hasMergeMethod() const { return this->mergeMethod_ != nullptr;};
    void deleteMergeMethod() { this->mergeMethod_ = nullptr;};
    inline string mergeMethod() const { DARABONBA_PTR_GET_DEFAULT(mergeMethod_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


    // mergeMethodArgsShrink Field Functions 
    bool hasMergeMethodArgsShrink() const { return this->mergeMethodArgsShrink_ != nullptr;};
    void deleteMergeMethodArgsShrink() { this->mergeMethodArgsShrink_ = nullptr;};
    inline string mergeMethodArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(mergeMethodArgsShrink_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setMergeMethodArgsShrink(string mergeMethodArgsShrink) { DARABONBA_PTR_SET_VALUE(mergeMethodArgsShrink_, mergeMethodArgsShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryKnowledgeBasesContentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryKnowledgeBasesContentShrinkRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // sourceCollectionShrink Field Functions 
    bool hasSourceCollectionShrink() const { return this->sourceCollectionShrink_ != nullptr;};
    void deleteSourceCollectionShrink() { this->sourceCollectionShrink_ = nullptr;};
    inline string sourceCollectionShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceCollectionShrink_, "") };
    inline QueryKnowledgeBasesContentShrinkRequest& setSourceCollectionShrink(string sourceCollectionShrink) { DARABONBA_PTR_SET_VALUE(sourceCollectionShrink_, sourceCollectionShrink) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryKnowledgeBasesContentShrinkRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // The text content for retrieval.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The method used to merge multiple knowledge bases. Default value: RRF. Valid values:
    // 
    // *   RRF
    // *   Weight
    std::shared_ptr<string> mergeMethod_ = nullptr;
    // The parameters of the merge method for each SourceCollection.
    std::shared_ptr<string> mergeMethodArgsShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The rerank factor. If you specify this parameter, the vector retrieval results are reranked once more. Valid values: 1\\<RerankFactor<=5.
    // 
    // > 
    // 
    // *   If the document is segmented into sparse parts, reranking is inefficient.
    // 
    // *   We recommend that the number of reranked results (the ceiling of TopK × RerankFactor) not exceed 50.
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // The information about collections to retrieve from.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceCollectionShrink_ = nullptr;
    // Set the number of top results to be returned after merging results from multiple path retrieval.
    std::shared_ptr<int64_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
