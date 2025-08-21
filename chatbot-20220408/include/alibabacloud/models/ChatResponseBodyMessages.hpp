// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatResponseBodyMessagesKnowledge.hpp>
#include <vector>
#include <alibabacloud/models/ChatResponseBodyMessagesRecommends.hpp>
#include <alibabacloud/models/ChatResponseBodyMessagesText.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_TO_JSON(AnswerType, answerType_);
      DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(Recommends, recommends_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(VoiceTitle, voiceTitle_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_FROM_JSON(AnswerType, answerType_);
      DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(Recommends, recommends_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(VoiceTitle, voiceTitle_);
    };
    ChatResponseBodyMessages() = default ;
    ChatResponseBodyMessages(const ChatResponseBodyMessages &) = default ;
    ChatResponseBodyMessages(ChatResponseBodyMessages &&) = default ;
    ChatResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessages() = default ;
    ChatResponseBodyMessages& operator=(const ChatResponseBodyMessages &) = default ;
    ChatResponseBodyMessages& operator=(ChatResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerSource_ != nullptr
        && this->answerType_ != nullptr && this->knowledge_ != nullptr && this->recommends_ != nullptr && this->text_ != nullptr && this->title_ != nullptr
        && this->voiceTitle_ != nullptr; };
    // answerSource Field Functions 
    bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
    void deleteAnswerSource() { this->answerSource_ = nullptr;};
    inline string answerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
    inline ChatResponseBodyMessages& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


    // answerType Field Functions 
    bool hasAnswerType() const { return this->answerType_ != nullptr;};
    void deleteAnswerType() { this->answerType_ = nullptr;};
    inline string answerType() const { DARABONBA_PTR_GET_DEFAULT(answerType_, "") };
    inline ChatResponseBodyMessages& setAnswerType(string answerType) { DARABONBA_PTR_SET_VALUE(answerType_, answerType) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline const Models::ChatResponseBodyMessagesKnowledge & knowledge() const { DARABONBA_PTR_GET_CONST(knowledge_, Models::ChatResponseBodyMessagesKnowledge) };
    inline Models::ChatResponseBodyMessagesKnowledge knowledge() { DARABONBA_PTR_GET(knowledge_, Models::ChatResponseBodyMessagesKnowledge) };
    inline ChatResponseBodyMessages& setKnowledge(const Models::ChatResponseBodyMessagesKnowledge & knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };
    inline ChatResponseBodyMessages& setKnowledge(Models::ChatResponseBodyMessagesKnowledge && knowledge) { DARABONBA_PTR_SET_RVALUE(knowledge_, knowledge) };


    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::ChatResponseBodyMessagesRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::ChatResponseBodyMessagesRecommends>) };
    inline vector<Models::ChatResponseBodyMessagesRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::ChatResponseBodyMessagesRecommends>) };
    inline ChatResponseBodyMessages& setRecommends(const vector<Models::ChatResponseBodyMessagesRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline ChatResponseBodyMessages& setRecommends(vector<Models::ChatResponseBodyMessagesRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline const Models::ChatResponseBodyMessagesText & text() const { DARABONBA_PTR_GET_CONST(text_, Models::ChatResponseBodyMessagesText) };
    inline Models::ChatResponseBodyMessagesText text() { DARABONBA_PTR_GET(text_, Models::ChatResponseBodyMessagesText) };
    inline ChatResponseBodyMessages& setText(const Models::ChatResponseBodyMessagesText & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
    inline ChatResponseBodyMessages& setText(Models::ChatResponseBodyMessagesText && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ChatResponseBodyMessages& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // voiceTitle Field Functions 
    bool hasVoiceTitle() const { return this->voiceTitle_ != nullptr;};
    void deleteVoiceTitle() { this->voiceTitle_ = nullptr;};
    inline string voiceTitle() const { DARABONBA_PTR_GET_DEFAULT(voiceTitle_, "") };
    inline ChatResponseBodyMessages& setVoiceTitle(string voiceTitle) { DARABONBA_PTR_SET_VALUE(voiceTitle_, voiceTitle) };


  protected:
    std::shared_ptr<string> answerSource_ = nullptr;
    std::shared_ptr<string> answerType_ = nullptr;
    std::shared_ptr<Models::ChatResponseBodyMessagesKnowledge> knowledge_ = nullptr;
    std::shared_ptr<vector<Models::ChatResponseBodyMessagesRecommends>> recommends_ = nullptr;
    std::shared_ptr<Models::ChatResponseBodyMessagesText> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> voiceTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
