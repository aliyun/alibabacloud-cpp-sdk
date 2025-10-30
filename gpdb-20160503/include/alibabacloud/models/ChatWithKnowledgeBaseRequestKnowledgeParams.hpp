// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestKnowledgeParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestKnowledgeParams& obj) { 
      DARABONBA_PTR_TO_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_TO_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestKnowledgeParams& obj) { 
      DARABONBA_PTR_FROM_JSON(MergeMethod, mergeMethod_);
      DARABONBA_PTR_FROM_JSON(MergeMethodArgs, mergeMethodArgs_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(SourceCollection, sourceCollection_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    ChatWithKnowledgeBaseRequestKnowledgeParams() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParams(const ChatWithKnowledgeBaseRequestKnowledgeParams &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParams(ChatWithKnowledgeBaseRequestKnowledgeParams &&) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestKnowledgeParams() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParams& operator=(const ChatWithKnowledgeBaseRequestKnowledgeParams &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParams& operator=(ChatWithKnowledgeBaseRequestKnowledgeParams &&) = default ;
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
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setMergeMethod(string mergeMethod) { DARABONBA_PTR_SET_VALUE(mergeMethod_, mergeMethod) };


    // mergeMethodArgs Field Functions 
    bool hasMergeMethodArgs() const { return this->mergeMethodArgs_ != nullptr;};
    void deleteMergeMethodArgs() { this->mergeMethodArgs_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs & mergeMethodArgs() const { DARABONBA_PTR_GET_CONST(mergeMethodArgs_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs) };
    inline Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs mergeMethodArgs() { DARABONBA_PTR_GET(mergeMethodArgs_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setMergeMethodArgs(const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs & mergeMethodArgs) { DARABONBA_PTR_SET_VALUE(mergeMethodArgs_, mergeMethodArgs) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setMergeMethodArgs(Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs && mergeMethodArgs) { DARABONBA_PTR_SET_RVALUE(mergeMethodArgs_, mergeMethodArgs) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double rerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // sourceCollection Field Functions 
    bool hasSourceCollection() const { return this->sourceCollection_ != nullptr;};
    void deleteSourceCollection() { this->sourceCollection_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection> & sourceCollection() const { DARABONBA_PTR_GET_CONST(sourceCollection_, vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection>) };
    inline vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection> sourceCollection() { DARABONBA_PTR_GET(sourceCollection_, vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection>) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setSourceCollection(const vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection> & sourceCollection) { DARABONBA_PTR_SET_VALUE(sourceCollection_, sourceCollection) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setSourceCollection(vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection> && sourceCollection) { DARABONBA_PTR_SET_RVALUE(sourceCollection_, sourceCollection) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    std::shared_ptr<string> mergeMethod_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs> mergeMethodArgs_ = nullptr;
    std::shared_ptr<double> rerankFactor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsSourceCollection>> sourceCollection_ = nullptr;
    std::shared_ptr<int64_t> topK_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
