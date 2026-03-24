// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(QuerySegList, querySegList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(QuerySegList, querySegList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    ChatResponseBody() = default ;
    ChatResponseBody(const ChatResponseBody &) = default ;
    ChatResponseBody(ChatResponseBody &&) = default ;
    ChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBody() = default ;
    ChatResponseBody& operator=(const ChatResponseBody &) = default ;
    ChatResponseBody& operator=(ChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
        DARABONBA_PTR_TO_JSON(AnswerType, answerType_);
        DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
        DARABONBA_PTR_TO_JSON(Recommends, recommends_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(VoiceTitle, voiceTitle_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
        DARABONBA_PTR_FROM_JSON(AnswerType, answerType_);
        DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
        DARABONBA_PTR_FROM_JSON(Recommends, recommends_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(VoiceTitle, voiceTitle_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Text : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Text& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Text& obj) { 
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
        Text() = default ;
        Text(const Text &) = default ;
        Text(Text &&) = default ;
        Text(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Text() = default ;
        Text& operator=(const Text &) = default ;
        Text& operator=(Text &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Slots : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Slots& obj) { 
            DARABONBA_PTR_TO_JSON(Hit, hit_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Origin, origin_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Slots& obj) { 
            DARABONBA_PTR_FROM_JSON(Hit, hit_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Origin, origin_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Slots() = default ;
          Slots(const Slots &) = default ;
          Slots(Slots &&) = default ;
          Slots(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Slots() = default ;
          Slots& operator=(const Slots &) = default ;
          Slots& operator=(Slots &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hit_ == nullptr
        && this->name_ == nullptr && this->origin_ == nullptr && this->value_ == nullptr; };
          // hit Field Functions 
          bool hasHit() const { return this->hit_ != nullptr;};
          void deleteHit() { this->hit_ = nullptr;};
          inline bool getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
          inline Slots& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Slots& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // origin Field Functions 
          bool hasOrigin() const { return this->origin_ != nullptr;};
          void deleteOrigin() { this->origin_ = nullptr;};
          inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
          inline Slots& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Slots& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<bool> hit_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> origin_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->answerSource_ == nullptr
        && this->articleTitle_ == nullptr && this->commands_ == nullptr && this->content_ == nullptr && this->contentType_ == nullptr && this->dialogName_ == nullptr
        && this->ext_ == nullptr && this->externalFlags_ == nullptr && this->hitStatement_ == nullptr && this->intentName_ == nullptr && this->metaData_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->responseType_ == nullptr && this->score_ == nullptr && this->slots_ == nullptr
        && this->userDefinedChatTitle_ == nullptr; };
        // answerSource Field Functions 
        bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
        void deleteAnswerSource() { this->answerSource_ = nullptr;};
        inline string getAnswerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
        inline Text& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


        // articleTitle Field Functions 
        bool hasArticleTitle() const { return this->articleTitle_ != nullptr;};
        void deleteArticleTitle() { this->articleTitle_ = nullptr;};
        inline string getArticleTitle() const { DARABONBA_PTR_GET_DEFAULT(articleTitle_, "") };
        inline Text& setArticleTitle(string articleTitle) { DARABONBA_PTR_SET_VALUE(articleTitle_, articleTitle) };


        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline         const Darabonba::Json & getCommands() const { DARABONBA_GET(commands_) };
        Darabonba::Json & getCommands() { DARABONBA_GET(commands_) };
        inline Text& setCommands(const Darabonba::Json & commands) { DARABONBA_SET_VALUE(commands_, commands) };
        inline Text& setCommands(Darabonba::Json && commands) { DARABONBA_SET_RVALUE(commands_, commands) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Text& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Text& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // dialogName Field Functions 
        bool hasDialogName() const { return this->dialogName_ != nullptr;};
        void deleteDialogName() { this->dialogName_ = nullptr;};
        inline string getDialogName() const { DARABONBA_PTR_GET_DEFAULT(dialogName_, "") };
        inline Text& setDialogName(string dialogName) { DARABONBA_PTR_SET_VALUE(dialogName_, dialogName) };


        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline         const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
        Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
        inline Text& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
        inline Text& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


        // externalFlags Field Functions 
        bool hasExternalFlags() const { return this->externalFlags_ != nullptr;};
        void deleteExternalFlags() { this->externalFlags_ = nullptr;};
        inline         const Darabonba::Json & getExternalFlags() const { DARABONBA_GET(externalFlags_) };
        Darabonba::Json & getExternalFlags() { DARABONBA_GET(externalFlags_) };
        inline Text& setExternalFlags(const Darabonba::Json & externalFlags) { DARABONBA_SET_VALUE(externalFlags_, externalFlags) };
        inline Text& setExternalFlags(Darabonba::Json && externalFlags) { DARABONBA_SET_RVALUE(externalFlags_, externalFlags) };


        // hitStatement Field Functions 
        bool hasHitStatement() const { return this->hitStatement_ != nullptr;};
        void deleteHitStatement() { this->hitStatement_ = nullptr;};
        inline string getHitStatement() const { DARABONBA_PTR_GET_DEFAULT(hitStatement_, "") };
        inline Text& setHitStatement(string hitStatement) { DARABONBA_PTR_SET_VALUE(hitStatement_, hitStatement) };


        // intentName Field Functions 
        bool hasIntentName() const { return this->intentName_ != nullptr;};
        void deleteIntentName() { this->intentName_ = nullptr;};
        inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
        inline Text& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
        inline Text& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Text& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Text& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // responseType Field Functions 
        bool hasResponseType() const { return this->responseType_ != nullptr;};
        void deleteResponseType() { this->responseType_ = nullptr;};
        inline string getResponseType() const { DARABONBA_PTR_GET_DEFAULT(responseType_, "") };
        inline Text& setResponseType(string responseType) { DARABONBA_PTR_SET_VALUE(responseType_, responseType) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Text& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // slots Field Functions 
        bool hasSlots() const { return this->slots_ != nullptr;};
        void deleteSlots() { this->slots_ = nullptr;};
        inline const vector<Text::Slots> & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, vector<Text::Slots>) };
        inline vector<Text::Slots> getSlots() { DARABONBA_PTR_GET(slots_, vector<Text::Slots>) };
        inline Text& setSlots(const vector<Text::Slots> & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
        inline Text& setSlots(vector<Text::Slots> && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


        // userDefinedChatTitle Field Functions 
        bool hasUserDefinedChatTitle() const { return this->userDefinedChatTitle_ != nullptr;};
        void deleteUserDefinedChatTitle() { this->userDefinedChatTitle_ = nullptr;};
        inline string getUserDefinedChatTitle() const { DARABONBA_PTR_GET_DEFAULT(userDefinedChatTitle_, "") };
        inline Text& setUserDefinedChatTitle(string userDefinedChatTitle) { DARABONBA_PTR_SET_VALUE(userDefinedChatTitle_, userDefinedChatTitle) };


      protected:
        shared_ptr<string> answerSource_ {};
        shared_ptr<string> articleTitle_ {};
        Darabonba::Json commands_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> contentType_ {};
        shared_ptr<string> dialogName_ {};
        Darabonba::Json ext_ {};
        Darabonba::Json externalFlags_ {};
        shared_ptr<string> hitStatement_ {};
        shared_ptr<string> intentName_ {};
        shared_ptr<string> metaData_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<string> responseType_ {};
        shared_ptr<double> score_ {};
        shared_ptr<vector<Text::Slots>> slots_ {};
        shared_ptr<string> userDefinedChatTitle_ {};
      };

      class Recommends : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Recommends& obj) { 
          DARABONBA_PTR_TO_JSON(AnswerSource, answerSource_);
          DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Recommends& obj) { 
          DARABONBA_PTR_FROM_JSON(AnswerSource, answerSource_);
          DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Recommends() = default ;
        Recommends(const Recommends &) = default ;
        Recommends(Recommends &&) = default ;
        Recommends(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Recommends() = default ;
        Recommends& operator=(const Recommends &) = default ;
        Recommends& operator=(Recommends &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerSource_ == nullptr
        && this->knowledgeId_ == nullptr && this->score_ == nullptr && this->title_ == nullptr; };
        // answerSource Field Functions 
        bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
        void deleteAnswerSource() { this->answerSource_ = nullptr;};
        inline string getAnswerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
        inline Recommends& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


        // knowledgeId Field Functions 
        bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
        void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
        inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
        inline Recommends& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Recommends& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Recommends& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> answerSource_ {};
        shared_ptr<string> knowledgeId_ {};
        shared_ptr<double> score_ {};
        shared_ptr<string> title_ {};
      };

      class Knowledge : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Knowledge& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Knowledge& obj) { 
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
        Knowledge() = default ;
        Knowledge(const Knowledge &) = default ;
        Knowledge(Knowledge &&) = default ;
        Knowledge(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Knowledge() = default ;
        Knowledge& operator=(const Knowledge &) = default ;
        Knowledge& operator=(Knowledge &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelatedKnowledges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedKnowledges& obj) { 
            DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedKnowledges& obj) { 
            DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          RelatedKnowledges() = default ;
          RelatedKnowledges(const RelatedKnowledges &) = default ;
          RelatedKnowledges(RelatedKnowledges &&) = default ;
          RelatedKnowledges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedKnowledges() = default ;
          RelatedKnowledges& operator=(const RelatedKnowledges &) = default ;
          RelatedKnowledges& operator=(RelatedKnowledges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->knowledgeId_ == nullptr
        && this->title_ == nullptr; };
          // knowledgeId Field Functions 
          bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
          void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
          inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
          inline RelatedKnowledges& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline RelatedKnowledges& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> knowledgeId_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->answerSource_ == nullptr
        && this->category_ == nullptr && this->content_ == nullptr && this->contentType_ == nullptr && this->hitStatement_ == nullptr && this->id_ == nullptr
        && this->relatedKnowledges_ == nullptr && this->score_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr; };
        // answerSource Field Functions 
        bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
        void deleteAnswerSource() { this->answerSource_ = nullptr;};
        inline string getAnswerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
        inline Knowledge& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Knowledge& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Knowledge& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Knowledge& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // hitStatement Field Functions 
        bool hasHitStatement() const { return this->hitStatement_ != nullptr;};
        void deleteHitStatement() { this->hitStatement_ = nullptr;};
        inline string getHitStatement() const { DARABONBA_PTR_GET_DEFAULT(hitStatement_, "") };
        inline Knowledge& setHitStatement(string hitStatement) { DARABONBA_PTR_SET_VALUE(hitStatement_, hitStatement) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Knowledge& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // relatedKnowledges Field Functions 
        bool hasRelatedKnowledges() const { return this->relatedKnowledges_ != nullptr;};
        void deleteRelatedKnowledges() { this->relatedKnowledges_ = nullptr;};
        inline const vector<Knowledge::RelatedKnowledges> & getRelatedKnowledges() const { DARABONBA_PTR_GET_CONST(relatedKnowledges_, vector<Knowledge::RelatedKnowledges>) };
        inline vector<Knowledge::RelatedKnowledges> getRelatedKnowledges() { DARABONBA_PTR_GET(relatedKnowledges_, vector<Knowledge::RelatedKnowledges>) };
        inline Knowledge& setRelatedKnowledges(const vector<Knowledge::RelatedKnowledges> & relatedKnowledges) { DARABONBA_PTR_SET_VALUE(relatedKnowledges_, relatedKnowledges) };
        inline Knowledge& setRelatedKnowledges(vector<Knowledge::RelatedKnowledges> && relatedKnowledges) { DARABONBA_PTR_SET_RVALUE(relatedKnowledges_, relatedKnowledges) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Knowledge& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Knowledge& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Knowledge& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> answerSource_ {};
        shared_ptr<string> category_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> contentType_ {};
        shared_ptr<string> hitStatement_ {};
        shared_ptr<string> id_ {};
        shared_ptr<vector<Knowledge::RelatedKnowledges>> relatedKnowledges_ {};
        shared_ptr<double> score_ {};
        shared_ptr<string> summary_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->answerSource_ == nullptr
        && this->answerType_ == nullptr && this->knowledge_ == nullptr && this->recommends_ == nullptr && this->text_ == nullptr && this->title_ == nullptr
        && this->voiceTitle_ == nullptr; };
      // answerSource Field Functions 
      bool hasAnswerSource() const { return this->answerSource_ != nullptr;};
      void deleteAnswerSource() { this->answerSource_ = nullptr;};
      inline string getAnswerSource() const { DARABONBA_PTR_GET_DEFAULT(answerSource_, "") };
      inline Messages& setAnswerSource(string answerSource) { DARABONBA_PTR_SET_VALUE(answerSource_, answerSource) };


      // answerType Field Functions 
      bool hasAnswerType() const { return this->answerType_ != nullptr;};
      void deleteAnswerType() { this->answerType_ = nullptr;};
      inline string getAnswerType() const { DARABONBA_PTR_GET_DEFAULT(answerType_, "") };
      inline Messages& setAnswerType(string answerType) { DARABONBA_PTR_SET_VALUE(answerType_, answerType) };


      // knowledge Field Functions 
      bool hasKnowledge() const { return this->knowledge_ != nullptr;};
      void deleteKnowledge() { this->knowledge_ = nullptr;};
      inline const Messages::Knowledge & getKnowledge() const { DARABONBA_PTR_GET_CONST(knowledge_, Messages::Knowledge) };
      inline Messages::Knowledge getKnowledge() { DARABONBA_PTR_GET(knowledge_, Messages::Knowledge) };
      inline Messages& setKnowledge(const Messages::Knowledge & knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };
      inline Messages& setKnowledge(Messages::Knowledge && knowledge) { DARABONBA_PTR_SET_RVALUE(knowledge_, knowledge) };


      // recommends Field Functions 
      bool hasRecommends() const { return this->recommends_ != nullptr;};
      void deleteRecommends() { this->recommends_ = nullptr;};
      inline const vector<Messages::Recommends> & getRecommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Messages::Recommends>) };
      inline vector<Messages::Recommends> getRecommends() { DARABONBA_PTR_GET(recommends_, vector<Messages::Recommends>) };
      inline Messages& setRecommends(const vector<Messages::Recommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
      inline Messages& setRecommends(vector<Messages::Recommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline const Messages::Text & getText() const { DARABONBA_PTR_GET_CONST(text_, Messages::Text) };
      inline Messages::Text getText() { DARABONBA_PTR_GET(text_, Messages::Text) };
      inline Messages& setText(const Messages::Text & text) { DARABONBA_PTR_SET_VALUE(text_, text) };
      inline Messages& setText(Messages::Text && text) { DARABONBA_PTR_SET_RVALUE(text_, text) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Messages& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // voiceTitle Field Functions 
      bool hasVoiceTitle() const { return this->voiceTitle_ != nullptr;};
      void deleteVoiceTitle() { this->voiceTitle_ = nullptr;};
      inline string getVoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(voiceTitle_, "") };
      inline Messages& setVoiceTitle(string voiceTitle) { DARABONBA_PTR_SET_VALUE(voiceTitle_, voiceTitle) };


    protected:
      shared_ptr<string> answerSource_ {};
      shared_ptr<string> answerType_ {};
      shared_ptr<Messages::Knowledge> knowledge_ {};
      shared_ptr<vector<Messages::Recommends>> recommends_ {};
      shared_ptr<Messages::Text> text_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> voiceTitle_ {};
    };

    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->messages_ == nullptr && this->querySegList_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ChatResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ChatResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ChatResponseBody::Messages>) };
    inline vector<ChatResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<ChatResponseBody::Messages>) };
    inline ChatResponseBody& setMessages(const vector<ChatResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ChatResponseBody& setMessages(vector<ChatResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // querySegList Field Functions 
    bool hasQuerySegList() const { return this->querySegList_ != nullptr;};
    void deleteQuerySegList() { this->querySegList_ = nullptr;};
    inline const vector<string> & getQuerySegList() const { DARABONBA_PTR_GET_CONST(querySegList_, vector<string>) };
    inline vector<string> getQuerySegList() { DARABONBA_PTR_GET(querySegList_, vector<string>) };
    inline ChatResponseBody& setQuerySegList(const vector<string> & querySegList) { DARABONBA_PTR_SET_VALUE(querySegList_, querySegList) };
    inline ChatResponseBody& setQuerySegList(vector<string> && querySegList) { DARABONBA_PTR_SET_RVALUE(querySegList_, querySegList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    shared_ptr<string> messageId_ {};
    shared_ptr<vector<ChatResponseBody::Messages>> messages_ {};
    shared_ptr<vector<string>> querySegList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
