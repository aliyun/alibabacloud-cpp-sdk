// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESTEXT_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODYMESSAGESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatResponseBodyMessagesTextSlots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBodyMessagesText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBodyMessagesText& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_TO_JSON(ArticleTitle, articleTitle_);
      DARABONBA_ANY_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DialogName, dialogName_);
      DARABONBA_ANY_TO_JSON(Ext, ext_);
      DARABONBA_ANY_TO_JSON(ExternalFlags, externalFlags_);
      DARABONBA_PTR_TO_JSON(HitStatement, hitStatement_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ResponseType, responseType_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Slots, slots_);
      DARABONBA_PTR_TO_JSON(UserDefinedChatTitle, userDefinedChatTitle_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBodyMessagesText& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
      DARABONBA_PTR_FROM_JSON(ArticleTitle, articleTitle_);
      DARABONBA_ANY_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DialogName, dialogName_);
      DARABONBA_ANY_FROM_JSON(Ext, ext_);
      DARABONBA_ANY_FROM_JSON(ExternalFlags, externalFlags_);
      DARABONBA_PTR_FROM_JSON(HitStatement, hitStatement_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ResponseType, responseType_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Slots, slots_);
      DARABONBA_PTR_FROM_JSON(UserDefinedChatTitle, userDefinedChatTitle_);
    };
    ChatResponseBodyMessagesText() = default ;
    ChatResponseBodyMessagesText(const ChatResponseBodyMessagesText &) = default ;
    ChatResponseBodyMessagesText(ChatResponseBodyMessagesText &&) = default ;
    ChatResponseBodyMessagesText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBodyMessagesText() = default ;
    ChatResponseBodyMessagesText& operator=(const ChatResponseBodyMessagesText &) = default ;
    ChatResponseBodyMessagesText& operator=(ChatResponseBodyMessagesText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->answerSource_ != nullptr
        && this->articleTitle_ != nullptr && this->commands_ != nullptr && this->content_ != nullptr && this->contentType_ != nullptr && this->dialogName_ != nullptr
        && this->ext_ != nullptr && this->externalFlags_ != nullptr && this->hitStatement_ != nullptr && this->intentName_ != nullptr && this->metaData_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->responseType_ != nullptr && this->score_ != nullptr && this->slots_ != nullptr
        && this->userDefinedChatTitle_ != nullptr; };
    // answerSource Field Functions 
    bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
    void deleteAnswerSource() { this->answerSource_ = nullptr;};
    inline string answerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
    inline ChatResponseBodyMessagesText& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


    // articleTitle Field Functions 
    bool hasArticleTitle() const { return this->articleTitle_ != nullptr;};
    void deleteArticleTitle() { this->articleTitle_ = nullptr;};
    inline string articleTitle() const { DARABONBA_PTR_GET_DEFAULT(articleTitle_, "") };
    inline ChatResponseBodyMessagesText& setArticleTitle(string articleTitle) { DARABONBA_PTR_SET_VALUE(articleTitle_, articleTitle) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline     const Darabonba::Json & commands() const { DARABONBA_GET(commands_) };
    Darabonba::Json & commands() { DARABONBA_GET(commands_) };
    inline ChatResponseBodyMessagesText& setCommands(const Darabonba::Json & commands) { DARABONBA_SET_VALUE(commands_, commands) };
    inline ChatResponseBodyMessagesText& setCommands(Darabonba::Json & commands) { DARABONBA_SET_RVALUE(commands_, commands) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatResponseBodyMessagesText& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ChatResponseBodyMessagesText& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // dialogName Field Functions 
    bool hasDialogName() const { return this->dialogName_ != nullptr;};
    void deleteDialogName() { this->dialogName_ = nullptr;};
    inline string dialogName() const { DARABONBA_PTR_GET_DEFAULT(dialogName_, "") };
    inline ChatResponseBodyMessagesText& setDialogName(string dialogName) { DARABONBA_PTR_SET_VALUE(dialogName_, dialogName) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline     const Darabonba::Json & ext() const { DARABONBA_GET(ext_) };
    Darabonba::Json & ext() { DARABONBA_GET(ext_) };
    inline ChatResponseBodyMessagesText& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
    inline ChatResponseBodyMessagesText& setExt(Darabonba::Json & ext) { DARABONBA_SET_RVALUE(ext_, ext) };


    // externalFlags Field Functions 
    bool hasExternalFlags() const { return this->externalFlags_ != nullptr;};
    void deleteExternalFlags() { this->externalFlags_ = nullptr;};
    inline     const Darabonba::Json & externalFlags() const { DARABONBA_GET(externalFlags_) };
    Darabonba::Json & externalFlags() { DARABONBA_GET(externalFlags_) };
    inline ChatResponseBodyMessagesText& setExternalFlags(const Darabonba::Json & externalFlags) { DARABONBA_SET_VALUE(externalFlags_, externalFlags) };
    inline ChatResponseBodyMessagesText& setExternalFlags(Darabonba::Json & externalFlags) { DARABONBA_SET_RVALUE(externalFlags_, externalFlags) };


    // hitStatement Field Functions 
    bool hasHitStatement() const { return this->hitStatement_ != nullptr;};
    void deleteHitStatement() { this->hitStatement_ = nullptr;};
    inline string hitStatement() const { DARABONBA_PTR_GET_DEFAULT(hitStatement_, "") };
    inline ChatResponseBodyMessagesText& setHitStatement(string hitStatement) { DARABONBA_PTR_SET_VALUE(hitStatement_, hitStatement) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline ChatResponseBodyMessagesText& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string metaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline ChatResponseBodyMessagesText& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ChatResponseBodyMessagesText& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ChatResponseBodyMessagesText& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // responseType Field Functions 
    bool hasResponseType() const { return this->responseType_ != nullptr;};
    void deleteResponseType() { this->responseType_ = nullptr;};
    inline string responseType() const { DARABONBA_PTR_GET_DEFAULT(responseType_, "") };
    inline ChatResponseBodyMessagesText& setResponseType(string responseType) { DARABONBA_PTR_SET_VALUE(responseType_, responseType) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ChatResponseBodyMessagesText& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // slots Field Functions 
    bool hasSlots() const { return this->slots_ != nullptr;};
    void deleteSlots() { this->slots_ = nullptr;};
    inline const vector<Models::ChatResponseBodyMessagesTextSlots> & slots() const { DARABONBA_PTR_GET_CONST(slots_, vector<Models::ChatResponseBodyMessagesTextSlots>) };
    inline vector<Models::ChatResponseBodyMessagesTextSlots> slots() { DARABONBA_PTR_GET(slots_, vector<Models::ChatResponseBodyMessagesTextSlots>) };
    inline ChatResponseBodyMessagesText& setSlots(const vector<Models::ChatResponseBodyMessagesTextSlots> & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
    inline ChatResponseBodyMessagesText& setSlots(vector<Models::ChatResponseBodyMessagesTextSlots> && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


    // userDefinedChatTitle Field Functions 
    bool hasUserDefinedChatTitle() const { return this->userDefinedChatTitle_ != nullptr;};
    void deleteUserDefinedChatTitle() { this->userDefinedChatTitle_ = nullptr;};
    inline string userDefinedChatTitle() const { DARABONBA_PTR_GET_DEFAULT(userDefinedChatTitle_, "") };
    inline ChatResponseBodyMessagesText& setUserDefinedChatTitle(string userDefinedChatTitle) { DARABONBA_PTR_SET_VALUE(userDefinedChatTitle_, userDefinedChatTitle) };


  protected:
    std::shared_ptr<string> answerSource_ = nullptr;
    std::shared_ptr<string> articleTitle_ = nullptr;
    Darabonba::Json commands_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> dialogName_ = nullptr;
    Darabonba::Json ext_ = nullptr;
    Darabonba::Json externalFlags_ = nullptr;
    std::shared_ptr<string> hitStatement_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> metaData_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> responseType_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<vector<Models::ChatResponseBodyMessagesTextSlots>> slots_ = nullptr;
    std::shared_ptr<string> userDefinedChatTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
