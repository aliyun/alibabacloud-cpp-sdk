// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSWEIGHT_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGSWEIGHT_HPP_
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
  class ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& obj) { 
      DARABONBA_PTR_TO_JSON(Weights, weights_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& obj) { 
      DARABONBA_PTR_FROM_JSON(Weights, weights_);
    };
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight &&) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& operator=(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& operator=(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->weights_ == nullptr; };
    // weights Field Functions 
    bool hasWeights() const { return this->weights_ != nullptr;};
    void deleteWeights() { this->weights_ = nullptr;};
    inline const vector<double> & weights() const { DARABONBA_PTR_GET_CONST(weights_, vector<double>) };
    inline vector<double> weights() { DARABONBA_PTR_GET(weights_, vector<double>) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& setWeights(const vector<double> & weights) { DARABONBA_PTR_SET_VALUE(weights_, weights) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight& setWeights(vector<double> && weights) { DARABONBA_PTR_SET_RVALUE(weights_, weights) };


  protected:
    // An array of weights for each SourceCollection.
    std::shared_ptr<vector<double>> weights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
