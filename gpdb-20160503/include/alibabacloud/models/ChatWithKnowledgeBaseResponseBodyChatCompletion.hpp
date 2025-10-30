// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETION_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASERESPONSEBODYCHATCOMPLETION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletionChoices.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseResponseBodyChatCompletionUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseResponseBodyChatCompletion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseResponseBodyChatCompletion& obj) { 
      DARABONBA_PTR_TO_JSON(Choices, choices_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseResponseBodyChatCompletion& obj) { 
      DARABONBA_PTR_FROM_JSON(Choices, choices_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ChatWithKnowledgeBaseResponseBodyChatCompletion() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletion(const ChatWithKnowledgeBaseResponseBodyChatCompletion &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletion(ChatWithKnowledgeBaseResponseBodyChatCompletion &&) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseResponseBodyChatCompletion() = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletion& operator=(const ChatWithKnowledgeBaseResponseBodyChatCompletion &) = default ;
    ChatWithKnowledgeBaseResponseBodyChatCompletion& operator=(ChatWithKnowledgeBaseResponseBodyChatCompletion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->id_ == nullptr && return this->model_ == nullptr && return this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices>) };
    inline vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices> choices() { DARABONBA_PTR_GET(choices_, vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices>) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setChoices(const vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setChoices(vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage) };
    inline Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage usage() { DARABONBA_PTR_GET(usage_, Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setUsage(const Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline ChatWithKnowledgeBaseResponseBodyChatCompletion& setUsage(Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionChoices>> choices_ = nullptr;
    std::shared_ptr<int64_t> created_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseResponseBodyChatCompletionUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
