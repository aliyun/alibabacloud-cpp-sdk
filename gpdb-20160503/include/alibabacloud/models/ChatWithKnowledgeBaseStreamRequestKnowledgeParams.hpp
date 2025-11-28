// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestKnowledgeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestKnowledgeParams& obj) { 
      DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestKnowledgeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams(const ChatWithKnowledgeBaseStreamRequestKnowledgeParams &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams(ChatWithKnowledgeBaseStreamRequestKnowledgeParams &&) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestKnowledgeParams() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams& operator=(const ChatWithKnowledgeBaseStreamRequestKnowledgeParams &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParams& operator=(ChatWithKnowledgeBaseStreamRequestKnowledgeParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mergeMethod_ == nullptr
        && return this->mergeMethodArgs_ == nullptr && return this->rerankFactor_ == nullptr && return this->sourceCollection_ == nullptr && return this->topK_ == nullptr; };
    // mergeMethod Field Functions 
    bool hasMergeMethod() const { return this->mergeMethod_ != nullptr;};
    void deleteMergeMethod() { this->mergeMethod_ = nullptr;};
    inline string mergeMethod() const { DARABONBA_PTR_GET_DEFAULT(mergeMethod_, "") };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


    // mergeMethodArgs Field Functions 
    bool hasMergeMethodArgs() const { return this->mergeMethodArgs_ != nullptr;};
    void deleteMergeMethodArgs() { this->mergeMethodArgs_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs & mergeMethodArgs() const { DARABONBA_PTR_GET_CONST(mergeMethodArgs_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs) };
    inline Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs mergeMethodArgs() { DARABONBA_PTR_GET(mergeMethodArgs_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setMergeMethodArgs(const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs & mergeMethodArgs) { DARABONBA_PTR_SET_VALUE(mergeMethodArgs_, mergeMethodArgs) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setMergeMethodArgs(Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs && mergeMethodArgs) { DARABONBA_PTR_SET_RVALUE(mergeMethodArgs_, mergeMethodArgs) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // sourceCollection Field Functions 
    bool hasSourceCollection() const { return this->sourceCollection_ != nullptr;};
    void deleteSourceCollection() { this->sourceCollection_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection> & sourceCollection() const { DARABONBA_PTR_GET_CONST(sourceCollection_, vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection>) };
    inline vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection> sourceCollection() { DARABONBA_PTR_GET(sourceCollection_, vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection>) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setSourceCollection(const vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection> & sourceCollection) { DARABONBA_PTR_SET_VALUE(sourceCollection_, sourceCollection) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setSourceCollection(vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection> && sourceCollection) { DARABONBA_PTR_SET_RVALUE(sourceCollection_, sourceCollection) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // The method used to merge multiple knowledge base. Default value: RRF. Valid values:
    // 
    // *   RRF
    // *   Weight
    std::shared_ptr<string> mergeMethod_ = nullptr;
    // Parameters for multi-knowledge-base fusion.
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs> mergeMethodArgs_ = nullptr;
    // The rerank factor. If you specify this parameter, the search result is reranked once again. Valid values: 1\\<RerankFactor<=5.
    // 
    // > 
    // 
    // *   If the document is segmented into sparse parts, reranking is inefficient.
    // 
    // *   We recommend that the number of reranked results (the ceiling of TopK × RerankFactor) not exceed 50.
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // Knowledge base.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsSourceCollection>> sourceCollection_ = nullptr;
    // Specifies the number of top results to return after merging retrieved results from multiple vector collections.
    std::shared_ptr<int64_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
