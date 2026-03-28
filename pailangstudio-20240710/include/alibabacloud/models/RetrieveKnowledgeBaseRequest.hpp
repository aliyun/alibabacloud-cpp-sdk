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
    // 混合检索策略配置，选填。JSON格式字符串，JSON字段定义如下：
    // 
    // - Strategy：混合检索策略。取值为rrf（RRF融合）和weighted（加权融合）
    // 
    // - RRFK：RRF融合平滑参数，取值范围 [1, 100]
    // 
    // - Weight：weighted策略的权重，该值表示向量语义检索对最终得分的贡献比例。取值范围 [0, 1.0]
    shared_ptr<string> hybridStrategyConfig_ {};
    // 选填。元数据过滤检索条件。格式为JSON格式字符串，JSON字段定义如下：
    // 
    // - FilterCondition: 逻辑关系，取值：and、or。
    // - MetaDataFilters：过滤条件。多个条件之间按FilterCondition的逻辑关系处理。其中Key表示元数据Key；Value表示元数据值；Operator表示运算符，取值：==、!=、contains，contains仅支持file_name字段。
    shared_ptr<string> metaDataFilterConditions_ {};
    // 检索内容。
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // 检索模式。
    // 
    // - dense: 语义检索。
    // - hybrid: 混合检索。
    shared_ptr<string> queryMode_ {};
    // Rerank配置，选填。JSON格式字符串，JSON字段定义如下：
    // 
    // - ConnectionId：模型服务连接ID
    // 
    // - Model：模型名称。若为百炼类型连接，支持的模型为 gte-rerank-v2
    // 
    // - TopK：返回排名最高的结果数
    shared_ptr<string> rerankConfig_ {};
    // Rewrite配置，选填。JSON格式字符串，JSON字段定义如下：
    // 
    // - ConnectionId：模型服务连接ID
    // 
    // - Model：模型名称。百炼连接支持的模型为qwen3-max、qwen-plus、qwen-flash
    // 
    // - Temprature：用于控制大模型生成内容的随机性，值越高结果越随机。取值范围 [0, 2.0]。
    // 
    // - TopP：生成过程中的核采样方法概率阈值，取值范围 [0, 1.0]
    // 
    // - PresensePenalty：存在惩罚，取值范围 [-2.0, 2.0]
    // 
    // - FrequencyPenalty：频率惩罚，取值范围 [-2.0~2.0]
    // 
    // - Seed：随机数种子，取值范围 [0, 2147483647]
    // 
    // - MaxTokens：控制模型生成结果的长度
    // 
    // - Stop：停止序列列表。遇到列表中的任何一个序列，模型停止输出。最多支持4个序列。
    // 
    // - EnableThingking：是否启用推理
    shared_ptr<string> rewriteConfig_ {};
    // 相似度分数阈值。浮点型，取值范围[0, 1]。
    shared_ptr<float> scoreThreshold_ {};
    // 返回排名最高的结果数。
    shared_ptr<int32_t> topK_ {};
    // 知识库版本。默认v1。
    shared_ptr<string> versionName_ {};
    // 知识库所在工作空间ID。
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
