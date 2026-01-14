// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class RetrieveKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HybridStrategyConfig, hybridStrategyConfig_);
      DARABONBA_PTR_TO_JSON(MetaDataFilterConditions, metaDataFilterConditions_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_TO_JSON(RerankConfig, rerankConfig_);
      DARABONBA_PTR_TO_JSON(RewriteConfig, rewriteConfig_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HybridStrategyConfig, hybridStrategyConfig_);
      DARABONBA_PTR_FROM_JSON(MetaDataFilterConditions, metaDataFilterConditions_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(QueryMode, queryMode_);
      DARABONBA_PTR_FROM_JSON(RerankConfig, rerankConfig_);
      DARABONBA_PTR_FROM_JSON(RewriteConfig, rewriteConfig_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest(RetrieveKnowledgeBaseRequest &&) = default ;
    RetrieveKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest& operator=(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest& operator=(RetrieveKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hybridStrategyConfig_ == nullptr
        && this->metaDataFilterConditions_ == nullptr && this->query_ == nullptr && this->queryMode_ == nullptr && this->rerankConfig_ == nullptr && this->rewriteConfig_ == nullptr
        && this->scoreThreshold_ == nullptr && this->topK_ == nullptr && this->versionName_ == nullptr && this->workspaceId_ == nullptr; };
    // hybridStrategyConfig Field Functions 
    bool hasHybridStrategyConfig() const { return this->hybridStrategyConfig_ != nullptr;};
    void deleteHybridStrategyConfig() { this->hybridStrategyConfig_ = nullptr;};
    inline string getHybridStrategyConfig() const { DARABONBA_PTR_GET_DEFAULT(hybridStrategyConfig_, "") };
    inline RetrieveKnowledgeBaseRequest& setHybridStrategyConfig(string hybridStrategyConfig) { DARABONBA_PTR_SET_VALUE(hybridStrategyConfig_, hybridStrategyConfig) };


    // metaDataFilterConditions Field Functions 
    bool hasMetaDataFilterConditions() const { return this->metaDataFilterConditions_ != nullptr;};
    void deleteMetaDataFilterConditions() { this->metaDataFilterConditions_ = nullptr;};
    inline string getMetaDataFilterConditions() const { DARABONBA_PTR_GET_DEFAULT(metaDataFilterConditions_, "") };
    inline RetrieveKnowledgeBaseRequest& setMetaDataFilterConditions(string metaDataFilterConditions) { DARABONBA_PTR_SET_VALUE(metaDataFilterConditions_, metaDataFilterConditions) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveKnowledgeBaseRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryMode Field Functions 
    bool hasQueryMode() const { return this->queryMode_ != nullptr;};
    void deleteQueryMode() { this->queryMode_ = nullptr;};
    inline string getQueryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
    inline RetrieveKnowledgeBaseRequest& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


    // rerankConfig Field Functions 
    bool hasRerankConfig() const { return this->rerankConfig_ != nullptr;};
    void deleteRerankConfig() { this->rerankConfig_ = nullptr;};
    inline string getRerankConfig() const { DARABONBA_PTR_GET_DEFAULT(rerankConfig_, "") };
    inline RetrieveKnowledgeBaseRequest& setRerankConfig(string rerankConfig) { DARABONBA_PTR_SET_VALUE(rerankConfig_, rerankConfig) };


    // rewriteConfig Field Functions 
    bool hasRewriteConfig() const { return this->rewriteConfig_ != nullptr;};
    void deleteRewriteConfig() { this->rewriteConfig_ = nullptr;};
    inline string getRewriteConfig() const { DARABONBA_PTR_GET_DEFAULT(rewriteConfig_, "") };
    inline RetrieveKnowledgeBaseRequest& setRewriteConfig(string rewriteConfig) { DARABONBA_PTR_SET_VALUE(rewriteConfig_, rewriteConfig) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline float getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline RetrieveKnowledgeBaseRequest& setScoreThreshold(float scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RetrieveKnowledgeBaseRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline RetrieveKnowledgeBaseRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RetrieveKnowledgeBaseRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> hybridStrategyConfig_ {};
    shared_ptr<string> metaDataFilterConditions_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> queryMode_ {};
    shared_ptr<string> rerankConfig_ {};
    shared_ptr<string> rewriteConfig_ {};
    shared_ptr<float> scoreThreshold_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<string> versionName_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
