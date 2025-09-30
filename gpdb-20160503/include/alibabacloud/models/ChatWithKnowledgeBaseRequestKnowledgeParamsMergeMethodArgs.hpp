// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUESTKNOWLEDGEPARAMSMERGEMETHODARGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Rrf, rrf_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Rrf, rrf_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs &&) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs() = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& operator=(const ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs &) = default ;
    ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& operator=(ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rrf_ != nullptr
        && this->weight_ != nullptr; };
    // rrf Field Functions 
    bool hasRrf() const { return this->rrf_ != nullptr;};
    void deleteRrf() { this->rrf_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf & rrf() const { DARABONBA_PTR_GET_CONST(rrf_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf) };
    inline Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf rrf() { DARABONBA_PTR_GET(rrf_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& setRrf(const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf & rrf) { DARABONBA_PTR_SET_VALUE(rrf_, rrf) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& setRrf(Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf && rrf) { DARABONBA_PTR_SET_RVALUE(rrf_, rrf) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight & weight() const { DARABONBA_PTR_GET_CONST(weight_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight) };
    inline Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight weight() { DARABONBA_PTR_GET(weight_, Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& setWeight(const Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight & weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgs& setWeight(Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight && weight) { DARABONBA_PTR_SET_RVALUE(weight_, weight) };


  protected:
    std::shared_ptr<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsRrf> rrf_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseRequestKnowledgeParamsMergeMethodArgsWeight> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
