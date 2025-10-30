// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETION_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMRESPONSEBODYCHATCOMPLETION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamResponseBodyChatCompletion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& obj) { 
      DARABONBA_PTR_TO_JSON(Choices, choices_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& obj) { 
      DARABONBA_PTR_FROM_JSON(Choices, choices_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletion &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion(ChatWithKnowledgeBaseStreamResponseBodyChatCompletion &&) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamResponseBodyChatCompletion() = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& operator=(const ChatWithKnowledgeBaseStreamResponseBodyChatCompletion &) = default ;
    ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& operator=(ChatWithKnowledgeBaseStreamResponseBodyChatCompletion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->choices_ == nullptr
        && return this->created_ == nullptr && return this->id_ == nullptr && return this->model_ == nullptr && return this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices> & choices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices>) };
    inline vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices> choices() { DARABONBA_PTR_GET(choices_, vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices>) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setChoices(const vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setChoices(vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage) };
    inline Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage usage() { DARABONBA_PTR_GET(usage_, Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setUsage(const Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline ChatWithKnowledgeBaseStreamResponseBodyChatCompletion& setUsage(Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionChoices>> choices_ = nullptr;
    std::shared_ptr<int64_t> created_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<Models::ChatWithKnowledgeBaseStreamResponseBodyChatCompletionUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
