// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESKNOWLEDGE_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESKNOWLEDGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatResponseBodyMessagesKnowledgeRelatedKnowledges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessagesKnowledge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessagesKnowledge& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(HitStatement, hitStatement_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RelatedKnowledges, relatedKnowledges_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessagesKnowledge& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(HitStatement, hitStatement_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RelatedKnowledges, relatedKnowledges_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ChatResponseBodyMessagesKnowledge() = default ;
    ChatResponseBodyMessagesKnowledge(const ChatResponseBodyMessagesKnowledge &) = default ;
    ChatResponseBodyMessagesKnowledge(ChatResponseBodyMessagesKnowledge &&) = default ;
    ChatResponseBodyMessagesKnowledge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessagesKnowledge() = default ;
    ChatResponseBodyMessagesKnowledge& operator=(const ChatResponseBodyMessagesKnowledge &) = default ;
    ChatResponseBodyMessagesKnowledge& operator=(ChatResponseBodyMessagesKnowledge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answerSource_ == nullptr
        && return this->category_ == nullptr && return this->content_ == nullptr && return this->contentType_ == nullptr && return this->hitStatement_ == nullptr && return this->id_ == nullptr
        && return this->relatedKnowledges_ == nullptr && return this->score_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr; };
    // answerSource Field Functions 
    bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
    void deleteAnswerSource() { this->answerSource_ = nullptr;};
    inline string answerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
    inline ChatResponseBodyMessagesKnowledge& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ChatResponseBodyMessagesKnowledge& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatResponseBodyMessagesKnowledge& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ChatResponseBodyMessagesKnowledge& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // hitStatement Field Functions 
    bool hasHitStatement() const { return this->hitStatement_ != nullptr;};
    void deleteHitStatement() { this->hitStatement_ = nullptr;};
    inline string hitStatement() const { DARABONBA_PTR_GET_DEFAULT(hitStatement_, "") };
    inline ChatResponseBodyMessagesKnowledge& setHitStatement(string hitStatement) { DARABONBA_PTR_SET_VALUE(hitStatement_, hitStatement) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ChatResponseBodyMessagesKnowledge& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // relatedKnowledges Field Functions 
    bool hasRelatedKnowledges() const { return this->relatedKnowledges_ != nullptr;};
    void deleteRelatedKnowledges() { this->relatedKnowledges_ = nullptr;};
    inline const vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges> & relatedKnowledges() const { DARABONBA_PTR_GET_CONST(relatedKnowledges_, vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges>) };
    inline vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges> relatedKnowledges() { DARABONBA_PTR_GET(relatedKnowledges_, vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges>) };
    inline ChatResponseBodyMessagesKnowledge& setRelatedKnowledges(const vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges> & relatedKnowledges) { DARABONBA_PTR_SET_VALUE(relatedKnowledges_, relatedKnowledges) };
    inline ChatResponseBodyMessagesKnowledge& setRelatedKnowledges(vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges> && relatedKnowledges) { DARABONBA_PTR_SET_RVALUE(relatedKnowledges_, relatedKnowledges) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ChatResponseBodyMessagesKnowledge& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ChatResponseBodyMessagesKnowledge& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ChatResponseBodyMessagesKnowledge& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> answerSource_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> hitStatement_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<Models::ChatResponseBodyMessagesKnowledgeRelatedKnowledges>> relatedKnowledges_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
