// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESKNOWLEDGERELATEDKNOWLEDGES_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESKNOWLEDGERELATEDKNOWLEDGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessagesKnowledgeRelatedKnowledges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessagesKnowledgeRelatedKnowledges& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessagesKnowledgeRelatedKnowledges& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges() = default ;
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges(const ChatResponseBodyMessagesKnowledgeRelatedKnowledges &) = default ;
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges(ChatResponseBodyMessagesKnowledgeRelatedKnowledges &&) = default ;
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessagesKnowledgeRelatedKnowledges() = default ;
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges& operator=(const ChatResponseBodyMessagesKnowledgeRelatedKnowledges &) = default ;
    ChatResponseBodyMessagesKnowledgeRelatedKnowledges& operator=(ChatResponseBodyMessagesKnowledgeRelatedKnowledges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->knowledgeId_ != nullptr
        && this->title_ != nullptr; };
    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline ChatResponseBodyMessagesKnowledgeRelatedKnowledges& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ChatResponseBodyMessagesKnowledgeRelatedKnowledges& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> knowledgeId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
