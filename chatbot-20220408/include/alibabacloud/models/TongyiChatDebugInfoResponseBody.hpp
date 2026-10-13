// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
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
  class TongyiChatDebugInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnswerInfo, answerInfo_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnswerInfo, answerInfo_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody(TongyiChatDebugInfoResponseBody &&) = default ;
    TongyiChatDebugInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody& operator=(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody& operator=(TongyiChatDebugInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
        DARABONBA_ANY_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_ANY_TO_JSON(Output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_ANY_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_ANY_FROM_JSON(Output, output_);
      };
      Pipeline() = default ;
      Pipeline(const Pipeline &) = default ;
      Pipeline(Pipeline &&) = default ;
      Pipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipeline() = default ;
      Pipeline& operator=(const Pipeline &) = default ;
      Pipeline& operator=(Pipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->input_ == nullptr
        && this->name_ == nullptr && this->nodeType_ == nullptr && this->output_ == nullptr; };
      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline       const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
      Darabonba::Json & getInput() { DARABONBA_GET(input_) };
      inline Pipeline& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
      inline Pipeline& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Pipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Pipeline& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline       const Darabonba::Json & getOutput() const { DARABONBA_GET(output_) };
      Darabonba::Json & getOutput() { DARABONBA_GET(output_) };
      inline Pipeline& setOutput(const Darabonba::Json & output) { DARABONBA_SET_VALUE(output_, output) };
      inline Pipeline& setOutput(Darabonba::Json && output) { DARABONBA_SET_RVALUE(output_, output) };


    protected:
      // The debugging input information.
      Darabonba::Json input_ {};
      // The policy name. Valid values:
      // - High-frequency Q&A direct output
      // - Keyword-based transfer to agent
      // - Global sensitive words
      // 
      // This field is available only when NodeType is system_strategy.
      shared_ptr<string> name_ {};
      // The node type. Valid values:
      // * **system_strategy**: system policy.
      // * **rewrite_query**: retrieved question.
      // * **invoke_llm**: LLM invocation.
      // * **invoke_tools**: tool calling.
      shared_ptr<string> nodeType_ {};
      // The output information.
      Darabonba::Json output_ {};
    };

    class AnswerInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnswerInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AnswerReferenceInfo, answerReferenceInfo_);
        DARABONBA_PTR_TO_JSON(MessageBody, messageBody_);
      };
      friend void from_json(const Darabonba::Json& j, AnswerInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AnswerReferenceInfo, answerReferenceInfo_);
        DARABONBA_PTR_FROM_JSON(MessageBody, messageBody_);
      };
      AnswerInfo() = default ;
      AnswerInfo(const AnswerInfo &) = default ;
      AnswerInfo(AnswerInfo &&) = default ;
      AnswerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnswerInfo() = default ;
      AnswerInfo& operator=(const AnswerInfo &) = default ;
      AnswerInfo& operator=(AnswerInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MessageBody : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MessageBody& obj) { 
          DARABONBA_ANY_TO_JSON(Commands, commands_);
          DARABONBA_PTR_TO_JSON(DirectMessageBody, directMessageBody_);
        };
        friend void from_json(const Darabonba::Json& j, MessageBody& obj) { 
          DARABONBA_ANY_FROM_JSON(Commands, commands_);
          DARABONBA_PTR_FROM_JSON(DirectMessageBody, directMessageBody_);
        };
        MessageBody() = default ;
        MessageBody(const MessageBody &) = default ;
        MessageBody(MessageBody &&) = default ;
        MessageBody(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MessageBody() = default ;
        MessageBody& operator=(const MessageBody &) = default ;
        MessageBody& operator=(MessageBody &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DirectMessageBody : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DirectMessageBody& obj) { 
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
            DARABONBA_PTR_TO_JSON(HitSystemAskConfig, hitSystemAskConfig_);
            DARABONBA_PTR_TO_JSON(RtDetail, rtDetail_);
            DARABONBA_PTR_TO_JSON(TransitionList, transitionList_);
            DARABONBA_PTR_TO_JSON(relatedQuestionList, relatedQuestionList_);
            DARABONBA_PTR_TO_JSON(sentenceList, sentenceList_);
          };
          friend void from_json(const Darabonba::Json& j, DirectMessageBody& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
            DARABONBA_PTR_FROM_JSON(HitSystemAskConfig, hitSystemAskConfig_);
            DARABONBA_PTR_FROM_JSON(RtDetail, rtDetail_);
            DARABONBA_PTR_FROM_JSON(TransitionList, transitionList_);
            DARABONBA_PTR_FROM_JSON(relatedQuestionList, relatedQuestionList_);
            DARABONBA_PTR_FROM_JSON(sentenceList, sentenceList_);
          };
          DirectMessageBody() = default ;
          DirectMessageBody(const DirectMessageBody &) = default ;
          DirectMessageBody(DirectMessageBody &&) = default ;
          DirectMessageBody(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DirectMessageBody() = default ;
          DirectMessageBody& operator=(const DirectMessageBody &) = default ;
          DirectMessageBody& operator=(DirectMessageBody &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SentenceList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SentenceList& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(ReferNumber, referNumber_);
            };
            friend void from_json(const Darabonba::Json& j, SentenceList& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(ReferNumber, referNumber_);
            };
            SentenceList() = default ;
            SentenceList(const SentenceList &) = default ;
            SentenceList(SentenceList &&) = default ;
            SentenceList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SentenceList() = default ;
            SentenceList& operator=(const SentenceList &) = default ;
            SentenceList& operator=(SentenceList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->referNumber_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline SentenceList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // referNumber Field Functions 
            bool hasReferNumber() const { return this->referNumber_ != nullptr;};
            void deleteReferNumber() { this->referNumber_ = nullptr;};
            inline int32_t getReferNumber() const { DARABONBA_PTR_GET_DEFAULT(referNumber_, 0) };
            inline SentenceList& setReferNumber(int32_t referNumber) { DARABONBA_PTR_SET_VALUE(referNumber_, referNumber) };


          protected:
            // The formal answer entry.
            shared_ptr<string> content_ {};
            // The number that corresponds one-to-one with the Number in AnswerReferenceInfo.ItemList for generating this answer.
            shared_ptr<int32_t> referNumber_ {};
          };

          class RtDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RtDetail& obj) { 
              DARABONBA_ANY_TO_JSON(SentenceRtList, sentenceRtList_);
              DARABONBA_ANY_TO_JSON(TransitionRtList, transitionRtList_);
            };
            friend void from_json(const Darabonba::Json& j, RtDetail& obj) { 
              DARABONBA_ANY_FROM_JSON(SentenceRtList, sentenceRtList_);
              DARABONBA_ANY_FROM_JSON(TransitionRtList, transitionRtList_);
            };
            RtDetail() = default ;
            RtDetail(const RtDetail &) = default ;
            RtDetail(RtDetail &&) = default ;
            RtDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RtDetail() = default ;
            RtDetail& operator=(const RtDetail &) = default ;
            RtDetail& operator=(RtDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->sentenceRtList_ == nullptr
        && this->transitionRtList_ == nullptr; };
            // sentenceRtList Field Functions 
            bool hasSentenceRtList() const { return this->sentenceRtList_ != nullptr;};
            void deleteSentenceRtList() { this->sentenceRtList_ = nullptr;};
            inline             const Darabonba::Json & getSentenceRtList() const { DARABONBA_GET(sentenceRtList_) };
            Darabonba::Json & getSentenceRtList() { DARABONBA_GET(sentenceRtList_) };
            inline RtDetail& setSentenceRtList(const Darabonba::Json & sentenceRtList) { DARABONBA_SET_VALUE(sentenceRtList_, sentenceRtList) };
            inline RtDetail& setSentenceRtList(Darabonba::Json && sentenceRtList) { DARABONBA_SET_RVALUE(sentenceRtList_, sentenceRtList) };


            // transitionRtList Field Functions 
            bool hasTransitionRtList() const { return this->transitionRtList_ != nullptr;};
            void deleteTransitionRtList() { this->transitionRtList_ = nullptr;};
            inline             const Darabonba::Json & getTransitionRtList() const { DARABONBA_GET(transitionRtList_) };
            Darabonba::Json & getTransitionRtList() { DARABONBA_GET(transitionRtList_) };
            inline RtDetail& setTransitionRtList(const Darabonba::Json & transitionRtList) { DARABONBA_SET_VALUE(transitionRtList_, transitionRtList) };
            inline RtDetail& setTransitionRtList(Darabonba::Json && transitionRtList) { DARABONBA_SET_RVALUE(transitionRtList_, transitionRtList) };


          protected:
            // The list of RTs for each segment from the time the user question is received on the text side to the sequential generation of the formal answer.
            Darabonba::Json sentenceRtList_ {};
            // The list of RTs for each segment from the time the user question is received on the text side to the sequential generation of the transition phrases.
            Darabonba::Json transitionRtList_ {};
          };

          virtual bool empty() const override { return this->contentType_ == nullptr
        && this->hitSystemAskConfig_ == nullptr && this->rtDetail_ == nullptr && this->transitionList_ == nullptr && this->relatedQuestionList_ == nullptr && this->sentenceList_ == nullptr; };
          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline DirectMessageBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // hitSystemAskConfig Field Functions 
          bool hasHitSystemAskConfig() const { return this->hitSystemAskConfig_ != nullptr;};
          void deleteHitSystemAskConfig() { this->hitSystemAskConfig_ = nullptr;};
          inline string getHitSystemAskConfig() const { DARABONBA_PTR_GET_DEFAULT(hitSystemAskConfig_, "") };
          inline DirectMessageBody& setHitSystemAskConfig(string hitSystemAskConfig) { DARABONBA_PTR_SET_VALUE(hitSystemAskConfig_, hitSystemAskConfig) };


          // rtDetail Field Functions 
          bool hasRtDetail() const { return this->rtDetail_ != nullptr;};
          void deleteRtDetail() { this->rtDetail_ = nullptr;};
          inline const DirectMessageBody::RtDetail & getRtDetail() const { DARABONBA_PTR_GET_CONST(rtDetail_, DirectMessageBody::RtDetail) };
          inline DirectMessageBody::RtDetail getRtDetail() { DARABONBA_PTR_GET(rtDetail_, DirectMessageBody::RtDetail) };
          inline DirectMessageBody& setRtDetail(const DirectMessageBody::RtDetail & rtDetail) { DARABONBA_PTR_SET_VALUE(rtDetail_, rtDetail) };
          inline DirectMessageBody& setRtDetail(DirectMessageBody::RtDetail && rtDetail) { DARABONBA_PTR_SET_RVALUE(rtDetail_, rtDetail) };


          // transitionList Field Functions 
          bool hasTransitionList() const { return this->transitionList_ != nullptr;};
          void deleteTransitionList() { this->transitionList_ = nullptr;};
          inline const vector<string> & getTransitionList() const { DARABONBA_PTR_GET_CONST(transitionList_, vector<string>) };
          inline vector<string> getTransitionList() { DARABONBA_PTR_GET(transitionList_, vector<string>) };
          inline DirectMessageBody& setTransitionList(const vector<string> & transitionList) { DARABONBA_PTR_SET_VALUE(transitionList_, transitionList) };
          inline DirectMessageBody& setTransitionList(vector<string> && transitionList) { DARABONBA_PTR_SET_RVALUE(transitionList_, transitionList) };


          // relatedQuestionList Field Functions 
          bool hasRelatedQuestionList() const { return this->relatedQuestionList_ != nullptr;};
          void deleteRelatedQuestionList() { this->relatedQuestionList_ = nullptr;};
          inline const vector<string> & getRelatedQuestionList() const { DARABONBA_PTR_GET_CONST(relatedQuestionList_, vector<string>) };
          inline vector<string> getRelatedQuestionList() { DARABONBA_PTR_GET(relatedQuestionList_, vector<string>) };
          inline DirectMessageBody& setRelatedQuestionList(const vector<string> & relatedQuestionList) { DARABONBA_PTR_SET_VALUE(relatedQuestionList_, relatedQuestionList) };
          inline DirectMessageBody& setRelatedQuestionList(vector<string> && relatedQuestionList) { DARABONBA_PTR_SET_RVALUE(relatedQuestionList_, relatedQuestionList) };


          // sentenceList Field Functions 
          bool hasSentenceList() const { return this->sentenceList_ != nullptr;};
          void deleteSentenceList() { this->sentenceList_ = nullptr;};
          inline const vector<DirectMessageBody::SentenceList> & getSentenceList() const { DARABONBA_PTR_GET_CONST(sentenceList_, vector<DirectMessageBody::SentenceList>) };
          inline vector<DirectMessageBody::SentenceList> getSentenceList() { DARABONBA_PTR_GET(sentenceList_, vector<DirectMessageBody::SentenceList>) };
          inline DirectMessageBody& setSentenceList(const vector<DirectMessageBody::SentenceList> & sentenceList) { DARABONBA_PTR_SET_VALUE(sentenceList_, sentenceList) };
          inline DirectMessageBody& setSentenceList(vector<DirectMessageBody::SentenceList> && sentenceList) { DARABONBA_PTR_SET_RVALUE(sentenceList_, sentenceList) };


        protected:
          // The answer type.
          shared_ptr<string> contentType_ {};
          // The matched system Q&A policy.
          shared_ptr<string> hitSystemAskConfig_ {};
          // The response time (RT) debugging information for the current Q&A.
          shared_ptr<DirectMessageBody::RtDetail> rtDetail_ {};
          // The list of transition phrases.
          shared_ptr<vector<string>> transitionList_ {};
          // The list of similar questions.
          shared_ptr<vector<string>> relatedQuestionList_ {};
          // The list of formal answers.
          shared_ptr<vector<DirectMessageBody::SentenceList>> sentenceList_ {};
        };

        virtual bool empty() const override { return this->commands_ == nullptr
        && this->directMessageBody_ == nullptr; };
        // commands Field Functions 
        bool hasCommands() const { return this->commands_ != nullptr;};
        void deleteCommands() { this->commands_ = nullptr;};
        inline         const Darabonba::Json & getCommands() const { DARABONBA_GET(commands_) };
        Darabonba::Json & getCommands() { DARABONBA_GET(commands_) };
        inline MessageBody& setCommands(const Darabonba::Json & commands) { DARABONBA_SET_VALUE(commands_, commands) };
        inline MessageBody& setCommands(Darabonba::Json && commands) { DARABONBA_SET_RVALUE(commands_, commands) };


        // directMessageBody Field Functions 
        bool hasDirectMessageBody() const { return this->directMessageBody_ != nullptr;};
        void deleteDirectMessageBody() { this->directMessageBody_ = nullptr;};
        inline const MessageBody::DirectMessageBody & getDirectMessageBody() const { DARABONBA_PTR_GET_CONST(directMessageBody_, MessageBody::DirectMessageBody) };
        inline MessageBody::DirectMessageBody getDirectMessageBody() { DARABONBA_PTR_GET(directMessageBody_, MessageBody::DirectMessageBody) };
        inline MessageBody& setDirectMessageBody(const MessageBody::DirectMessageBody & directMessageBody) { DARABONBA_PTR_SET_VALUE(directMessageBody_, directMessageBody) };
        inline MessageBody& setDirectMessageBody(MessageBody::DirectMessageBody && directMessageBody) { DARABONBA_PTR_SET_RVALUE(directMessageBody_, directMessageBody) };


      protected:
        // The command parameters, such as the skill group for the transfer-to-agent command.
        Darabonba::Json commands_ {};
        // The message body that contains the Q&A results, including the answer, text type, recommended questions, and matched system type.
        shared_ptr<MessageBody::DirectMessageBody> directMessageBody_ {};
      };

      class AnswerReferenceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnswerReferenceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ItemList, itemList_);
        };
        friend void from_json(const Darabonba::Json& j, AnswerReferenceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
        };
        AnswerReferenceInfo() = default ;
        AnswerReferenceInfo(const AnswerReferenceInfo &) = default ;
        AnswerReferenceInfo(AnswerReferenceInfo &&) = default ;
        AnswerReferenceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnswerReferenceInfo() = default ;
        AnswerReferenceInfo& operator=(const AnswerReferenceInfo &) = default ;
        AnswerReferenceInfo& operator=(AnswerReferenceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ItemList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ItemList& obj) { 
            DARABONBA_PTR_TO_JSON(ContentType, contentType_);
            DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Number, number_);
            DARABONBA_ANY_TO_JSON(ReferenceExt, referenceExt_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, ItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
            DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Number, number_);
            DARABONBA_ANY_FROM_JSON(ReferenceExt, referenceExt_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          ItemList() = default ;
          ItemList(const ItemList &) = default ;
          ItemList(ItemList &&) = default ;
          ItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ItemList() = default ;
          ItemList& operator=(const ItemList &) = default ;
          ItemList& operator=(ItemList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentType_ == nullptr
        && this->dataSource_ == nullptr && this->id_ == nullptr && this->number_ == nullptr && this->referenceExt_ == nullptr && this->title_ == nullptr; };
          // contentType Field Functions 
          bool hasContentType() const { return this->contentType_ != nullptr;};
          void deleteContentType() { this->contentType_ = nullptr;};
          inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
          inline ItemList& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


          // dataSource Field Functions 
          bool hasDataSource() const { return this->dataSource_ != nullptr;};
          void deleteDataSource() { this->dataSource_ = nullptr;};
          inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
          inline ItemList& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline ItemList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // number Field Functions 
          bool hasNumber() const { return this->number_ != nullptr;};
          void deleteNumber() { this->number_ = nullptr;};
          inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
          inline ItemList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


          // referenceExt Field Functions 
          bool hasReferenceExt() const { return this->referenceExt_ != nullptr;};
          void deleteReferenceExt() { this->referenceExt_ = nullptr;};
          inline           const Darabonba::Json & getReferenceExt() const { DARABONBA_GET(referenceExt_) };
          Darabonba::Json & getReferenceExt() { DARABONBA_GET(referenceExt_) };
          inline ItemList& setReferenceExt(const Darabonba::Json & referenceExt) { DARABONBA_SET_VALUE(referenceExt_, referenceExt) };
          inline ItemList& setReferenceExt(Darabonba::Json && referenceExt) { DARABONBA_SET_RVALUE(referenceExt_, referenceExt) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline ItemList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          // The type of the referenced text.
          shared_ptr<string> contentType_ {};
          // The source of the referenced knowledge.
          shared_ptr<string> dataSource_ {};
          // The ID of the referenced knowledge.
          shared_ptr<string> id_ {};
          // The number that corresponds one-to-one with the ReferNumber in AnswerInfo.MessageBody.DirectMessageBody.SentenceList.
          shared_ptr<int32_t> number_ {};
          // The extension information specific to the knowledge type.
          Darabonba::Json referenceExt_ {};
          // The title of the referenced knowledge.
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->itemList_ == nullptr; };
        // itemList Field Functions 
        bool hasItemList() const { return this->itemList_ != nullptr;};
        void deleteItemList() { this->itemList_ = nullptr;};
        inline const vector<AnswerReferenceInfo::ItemList> & getItemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<AnswerReferenceInfo::ItemList>) };
        inline vector<AnswerReferenceInfo::ItemList> getItemList() { DARABONBA_PTR_GET(itemList_, vector<AnswerReferenceInfo::ItemList>) };
        inline AnswerReferenceInfo& setItemList(const vector<AnswerReferenceInfo::ItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
        inline AnswerReferenceInfo& setItemList(vector<AnswerReferenceInfo::ItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


      protected:
        // The list of referenced knowledge entries.
        shared_ptr<vector<AnswerReferenceInfo::ItemList>> itemList_ {};
      };

      virtual bool empty() const override { return this->answerReferenceInfo_ == nullptr
        && this->messageBody_ == nullptr; };
      // answerReferenceInfo Field Functions 
      bool hasAnswerReferenceInfo() const { return this->answerReferenceInfo_ != nullptr;};
      void deleteAnswerReferenceInfo() { this->answerReferenceInfo_ = nullptr;};
      inline const AnswerInfo::AnswerReferenceInfo & getAnswerReferenceInfo() const { DARABONBA_PTR_GET_CONST(answerReferenceInfo_, AnswerInfo::AnswerReferenceInfo) };
      inline AnswerInfo::AnswerReferenceInfo getAnswerReferenceInfo() { DARABONBA_PTR_GET(answerReferenceInfo_, AnswerInfo::AnswerReferenceInfo) };
      inline AnswerInfo& setAnswerReferenceInfo(const AnswerInfo::AnswerReferenceInfo & answerReferenceInfo) { DARABONBA_PTR_SET_VALUE(answerReferenceInfo_, answerReferenceInfo) };
      inline AnswerInfo& setAnswerReferenceInfo(AnswerInfo::AnswerReferenceInfo && answerReferenceInfo) { DARABONBA_PTR_SET_RVALUE(answerReferenceInfo_, answerReferenceInfo) };


      // messageBody Field Functions 
      bool hasMessageBody() const { return this->messageBody_ != nullptr;};
      void deleteMessageBody() { this->messageBody_ = nullptr;};
      inline const AnswerInfo::MessageBody & getMessageBody() const { DARABONBA_PTR_GET_CONST(messageBody_, AnswerInfo::MessageBody) };
      inline AnswerInfo::MessageBody getMessageBody() { DARABONBA_PTR_GET(messageBody_, AnswerInfo::MessageBody) };
      inline AnswerInfo& setMessageBody(const AnswerInfo::MessageBody & messageBody) { DARABONBA_PTR_SET_VALUE(messageBody_, messageBody) };
      inline AnswerInfo& setMessageBody(AnswerInfo::MessageBody && messageBody) { DARABONBA_PTR_SET_RVALUE(messageBody_, messageBody) };


    protected:
      // The referenced knowledge information of the matched answer.
      shared_ptr<AnswerInfo::AnswerReferenceInfo> answerReferenceInfo_ {};
      // The message body.
      shared_ptr<AnswerInfo::MessageBody> messageBody_ {};
    };

    virtual bool empty() const override { return this->answerInfo_ == nullptr
        && this->messageId_ == nullptr && this->pipeline_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // answerInfo Field Functions 
    bool hasAnswerInfo() const { return this->answerInfo_ != nullptr;};
    void deleteAnswerInfo() { this->answerInfo_ = nullptr;};
    inline const TongyiChatDebugInfoResponseBody::AnswerInfo & getAnswerInfo() const { DARABONBA_PTR_GET_CONST(answerInfo_, TongyiChatDebugInfoResponseBody::AnswerInfo) };
    inline TongyiChatDebugInfoResponseBody::AnswerInfo getAnswerInfo() { DARABONBA_PTR_GET(answerInfo_, TongyiChatDebugInfoResponseBody::AnswerInfo) };
    inline TongyiChatDebugInfoResponseBody& setAnswerInfo(const TongyiChatDebugInfoResponseBody::AnswerInfo & answerInfo) { DARABONBA_PTR_SET_VALUE(answerInfo_, answerInfo) };
    inline TongyiChatDebugInfoResponseBody& setAnswerInfo(TongyiChatDebugInfoResponseBody::AnswerInfo && answerInfo) { DARABONBA_PTR_SET_RVALUE(answerInfo_, answerInfo) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline TongyiChatDebugInfoResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const vector<TongyiChatDebugInfoResponseBody::Pipeline> & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<TongyiChatDebugInfoResponseBody::Pipeline>) };
    inline vector<TongyiChatDebugInfoResponseBody::Pipeline> getPipeline() { DARABONBA_PTR_GET(pipeline_, vector<TongyiChatDebugInfoResponseBody::Pipeline>) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(const vector<TongyiChatDebugInfoResponseBody::Pipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(vector<TongyiChatDebugInfoResponseBody::Pipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TongyiChatDebugInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TongyiChatDebugInfoResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The answer information corresponding to the conversation.
    shared_ptr<TongyiChatDebugInfoResponseBody::AnswerInfo> answerInfo_ {};
    // The ID of the response message for the current session.
    shared_ptr<string> messageId_ {};
    // The information about the entire Q&A process.
    shared_ptr<vector<TongyiChatDebugInfoResponseBody::Pipeline>> pipeline_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The ID of the session to which the current response message belongs.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
