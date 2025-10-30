// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSMERGEMETHODARGS_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTKNOWLEDGEPARAMSMERGEMETHODARGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Rrf, rrf_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Rrf, rrf_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs &&) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs() = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& operator=(const ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs &) = default ;
    ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& operator=(ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rrf_ == nullptr
        && return this->weight_ == nullptr; };
    // rrf Field Functions 
    bool hasRrf() const { return this->rrf_ != nullptr;};
    void deleteRrf() { this->rrf_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf & rrf() const { DARABONBA_PTR_GET_CONST(rrf_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf) };
    inline Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf rrf() { DARABONBA_PTR_GET(rrf_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& setRrf(const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf & rrf) { DARABONBA_PTR_SET_VALUE(rrf_, rrf) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& setRrf(Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf && rrf) { DARABONBA_PTR_SET_RVALUE(rrf_, rrf) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight & weight() const { DARABONBA_PTR_GET_CONST(weight_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight) };
    inline Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight weight() { DARABONBA_PTR_GET(weight_, Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& setWeight(const Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight & weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };
    inline ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgs& setWeight(Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight && weight) { DARABONBA_PTR_SET_RVALUE(weight_, weight) };


  protected:
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsRrf> rrf_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamRequestKnowledgeParamsMergeMethodArgsWeight> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
