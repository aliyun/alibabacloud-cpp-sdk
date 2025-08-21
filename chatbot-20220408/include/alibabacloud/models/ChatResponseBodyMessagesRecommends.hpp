// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESRECOMMENDS_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESRECOMMENDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessagesRecommends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessagesRecommends& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessagesRecommends& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ChatResponseBodyMessagesRecommends() = default ;
    ChatResponseBodyMessagesRecommends(const ChatResponseBodyMessagesRecommends &) = default ;
    ChatResponseBodyMessagesRecommends(ChatResponseBodyMessagesRecommends &&) = default ;
    ChatResponseBodyMessagesRecommends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessagesRecommends() = default ;
    ChatResponseBodyMessagesRecommends& operator=(const ChatResponseBodyMessagesRecommends &) = default ;
    ChatResponseBodyMessagesRecommends& operator=(ChatResponseBodyMessagesRecommends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerSource_ != nullptr
        && this->knowledgeId_ != nullptr && this->score_ != nullptr && this->title_ != nullptr; };
    // answerSource Field Functions 
    bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
    void deleteAnswerSource() { this->answerSource_ = nullptr;};
    inline string answerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
    inline ChatResponseBodyMessagesRecommends& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline ChatResponseBodyMessagesRecommends& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ChatResponseBodyMessagesRecommends& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ChatResponseBodyMessagesRecommends& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> answerSource_ = nullptr;
    std::shared_ptr<string> knowledgeId_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
