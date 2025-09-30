// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSSOURCECOLLECTIONQUERYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSSOURCECOLLECTIONQUERYPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_TO_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_ANY_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_FROM_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_ANY_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams(const ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams(ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams &&) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& operator=(const ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& operator=(ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->graphEnhance_ != nullptr && this->graphSearchArgs_ != nullptr && this->hybridSearch_ != nullptr && this->hybridSearchArgs_ != nullptr && this->metrics_ != nullptr
        && this->recallWindow_ != nullptr && this->rerankFactor_ != nullptr && this->topK_ != nullptr && this->useFullTextRetrieval_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // graphEnhance Field Functions 
    bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
    void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
    inline bool graphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


    // graphSearchArgs Field Functions 
    bool hasGraphSearchArgs() const { return this->graphSearchArgs_ != nullptr;};
    void deleteGraphSearchArgs() { this->graphSearchArgs_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs & graphSearchArgs() const { DARABONBA_PTR_GET_CONST(graphSearchArgs_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs) };
    inline Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs graphSearchArgs() { DARABONBA_PTR_GET(graphSearchArgs_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setGraphSearchArgs(const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs & graphSearchArgs) { DARABONBA_PTR_SET_VALUE(graphSearchArgs_, graphSearchArgs) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setGraphSearchArgs(Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs && graphSearchArgs) { DARABONBA_PTR_SET_RVALUE(graphSearchArgs_, graphSearchArgs) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string hybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline     const Darabonba::Json & hybridSearchArgs() const { DARABONBA_GET(hybridSearchArgs_) };
    Darabonba::Json & hybridSearchArgs() { DARABONBA_GET(hybridSearchArgs_) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setHybridSearchArgs(const Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setHybridSearchArgs(Darabonba::Json & hybridSearchArgs) { DARABONBA_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string metrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // recallWindow Field Functions 
    bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
    void deleteRecallWindow() { this->recallWindow_ = nullptr;};
    inline const vector<int64_t> & recallWindow() const { DARABONBA_PTR_GET_CONST(recallWindow_, vector<int64_t>) };
    inline vector<int64_t> recallWindow() { DARABONBA_PTR_GET(recallWindow_, vector<int64_t>) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setRecallWindow(const vector<int64_t> & recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setRecallWindow(vector<int64_t> && recallWindow) { DARABONBA_PTR_SET_RVALUE(recallWindow_, recallWindow) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // useFullTextRetrieval Field Functions 
    bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
    void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
    inline bool useFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParams& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


  protected:
    std::shared_ptr<string> filter_ = nullptr;
    std::shared_ptr<bool> graphEnhance_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollectionQueryParamsGraphSearchArgs> graphSearchArgs_ = nullptr;
    std::shared_ptr<string> hybridSearch_ = nullptr;
    Darabonba::Json hybridSearchArgs_ = nullptr;
    std::shared_ptr<string> metrics_ = nullptr;
    std::shared_ptr<vector<int64_t>> recallWindow_ = nullptr;
    std::shared_ptr<double> rerankFactor_ = nullptr;
    std::shared_ptr<int64_t> topK_ = nullptr;
    std::shared_ptr<bool> useFullTextRetrieval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
