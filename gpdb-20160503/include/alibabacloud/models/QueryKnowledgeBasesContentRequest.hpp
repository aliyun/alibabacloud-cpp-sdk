// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYKNOWLEDGEBASESCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestMergeMethodArgs.hpp>
#include <vector>
#include <alibabacloud/models/QueryKnowledgeBasesContentRequestSourceCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryKnowledgeBasesContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryKnowledgeBasesContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, QueryKnowledgeBasesContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    QueryKnowledgeBasesContentRequest() = default ;
    QueryKnowledgeBasesContentRequest(const QueryKnowledgeBasesContentRequest &) = default ;
    QueryKnowledgeBasesContentRequest(QueryKnowledgeBasesContentRequest &&) = default ;
    QueryKnowledgeBasesContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryKnowledgeBasesContentRequest() = default ;
    QueryKnowledgeBasesContentRequest& operator=(const QueryKnowledgeBasesContentRequest &) = default ;
    QueryKnowledgeBasesContentRequest& operator=(QueryKnowledgeBasesContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->mergeMethod_ == nullptr && return this->mergeMethodArgs_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->rerankFactor_ == nullptr && return this->sourceCollection_ == nullptr && return this->topK_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryKnowledgeBasesContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryKnowledgeBasesContentRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // mergeMethod Field Functions 
    bool hasMergeMethod() const { return this->mergeMethod_ != nullptr;};
    void deleteMergeMethod() { this->mergeMethod_ = nullptr;};
    inline string mergeMethod() const { DARABONBA_PTR_GET_DEFAULT(mergeMethod_, "") };
    inline QueryKnowledgeBasesContentRequest& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


    // mergeMethodArgs Field Functions 
    bool hasMergeMethodArgs() const { return this->mergeMethodArgs_ != nullptr;};
    void deleteMergeMethodArgs() { this->mergeMethodArgs_ = nullptr;};
    inline const QueryKnowledgeBasesContentRequestMergeMethodArgs & mergeMethodArgs() const { DARABONBA_PTR_GET_CONST(mergeMethodArgs_, QueryKnowledgeBasesContentRequestMergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequestMergeMethodArgs mergeMethodArgs() { DARABONBA_PTR_GET(mergeMethodArgs_, QueryKnowledgeBasesContentRequestMergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequest& setMergeMethodArgs(const QueryKnowledgeBasesContentRequestMergeMethodArgs & mergeMethodArgs) { DARABONBA_PTR_SET_VALUE(mergeMethodArgs_, mergeMethodArgs) };
    inline QueryKnowledgeBasesContentRequest& setMergeMethodArgs(QueryKnowledgeBasesContentRequestMergeMethodArgs && mergeMethodArgs) { DARABONBA_PTR_SET_RVALUE(mergeMethodArgs_, mergeMethodArgs) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryKnowledgeBasesContentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryKnowledgeBasesContentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryKnowledgeBasesContentRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // sourceCollection Field Functions 
    bool hasSourceCollection() const { return this->sourceCollection_ != nullptr;};
    void deleteSourceCollection() { this->sourceCollection_ = nullptr;};
    inline const vector<QueryKnowledgeBasesContentRequestSourceCollection> & sourceCollection() const { DARABONBA_PTR_GET_CONST(sourceCollection_, vector<QueryKnowledgeBasesContentRequestSourceCollection>) };
    inline vector<QueryKnowledgeBasesContentRequestSourceCollection> sourceCollection() { DARABONBA_PTR_GET(sourceCollection_, vector<QueryKnowledgeBasesContentRequestSourceCollection>) };
    inline QueryKnowledgeBasesContentRequest& setSourceCollection(const vector<QueryKnowledgeBasesContentRequestSourceCollection> & sourceCollection) { DARABONBA_PTR_SET_VALUE(sourceCollection_, sourceCollection) };
    inline QueryKnowledgeBasesContentRequest& setSourceCollection(vector<QueryKnowledgeBasesContentRequestSourceCollection> && sourceCollection) { DARABONBA_PTR_SET_RVALUE(sourceCollection_, sourceCollection) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryKnowledgeBasesContentRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> mergeMethod_ = nullptr;
    std::shared_ptr<QueryKnowledgeBasesContentRequestMergeMethodArgs> mergeMethodArgs_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<QueryKnowledgeBasesContentRequestSourceCollection>> sourceCollection_ = nullptr;
    std::shared_ptr<int64_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
