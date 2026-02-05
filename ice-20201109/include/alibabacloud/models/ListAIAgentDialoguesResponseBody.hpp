// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTDIALOGUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentDialoguesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentDialoguesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentDialoguesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAIAgentDialoguesResponseBody() = default ;
    ListAIAgentDialoguesResponseBody(const ListAIAgentDialoguesResponseBody &) = default ;
    ListAIAgentDialoguesResponseBody(ListAIAgentDialoguesResponseBody &&) = default ;
    ListAIAgentDialoguesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentDialoguesResponseBody() = default ;
    ListAIAgentDialoguesResponseBody& operator=(const ListAIAgentDialoguesResponseBody &) = default ;
    ListAIAgentDialoguesResponseBody& operator=(ListAIAgentDialoguesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dialogues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dialogues& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedFileList, attachedFileList_);
        DARABONBA_PTR_TO_JSON(DialogueId, dialogueId_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Producer, producer_);
        DARABONBA_PTR_TO_JSON(ReasoningText, reasoningText_);
        DARABONBA_PTR_TO_JSON(RoundId, roundId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Dialogues& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedFileList, attachedFileList_);
        DARABONBA_PTR_FROM_JSON(DialogueId, dialogueId_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Producer, producer_);
        DARABONBA_PTR_FROM_JSON(ReasoningText, reasoningText_);
        DARABONBA_PTR_FROM_JSON(RoundId, roundId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Dialogues() = default ;
      Dialogues(const Dialogues &) = default ;
      Dialogues(Dialogues &&) = default ;
      Dialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dialogues() = default ;
      Dialogues& operator=(const Dialogues &) = default ;
      Dialogues& operator=(Dialogues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttachedFileList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachedFileList& obj) { 
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, AttachedFileList& obj) { 
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        AttachedFileList() = default ;
        AttachedFileList(const AttachedFileList &) = default ;
        AttachedFileList(AttachedFileList &&) = default ;
        AttachedFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachedFileList() = default ;
        AttachedFileList& operator=(const AttachedFileList &) = default ;
        AttachedFileList& operator=(AttachedFileList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->format_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline AttachedFileList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AttachedFileList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AttachedFileList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline AttachedFileList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline AttachedFileList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> format_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->attachedFileList_ == nullptr
        && this->dialogueId_ == nullptr && this->extend_ == nullptr && this->nodeId_ == nullptr && this->producer_ == nullptr && this->reasoningText_ == nullptr
        && this->roundId_ == nullptr && this->source_ == nullptr && this->text_ == nullptr && this->time_ == nullptr && this->type_ == nullptr; };
      // attachedFileList Field Functions 
      bool hasAttachedFileList() const { return this->attachedFileList_ != nullptr;};
      void deleteAttachedFileList() { this->attachedFileList_ = nullptr;};
      inline const vector<Dialogues::AttachedFileList> & getAttachedFileList() const { DARABONBA_PTR_GET_CONST(attachedFileList_, vector<Dialogues::AttachedFileList>) };
      inline vector<Dialogues::AttachedFileList> getAttachedFileList() { DARABONBA_PTR_GET(attachedFileList_, vector<Dialogues::AttachedFileList>) };
      inline Dialogues& setAttachedFileList(const vector<Dialogues::AttachedFileList> & attachedFileList) { DARABONBA_PTR_SET_VALUE(attachedFileList_, attachedFileList) };
      inline Dialogues& setAttachedFileList(vector<Dialogues::AttachedFileList> && attachedFileList) { DARABONBA_PTR_SET_RVALUE(attachedFileList_, attachedFileList) };


      // dialogueId Field Functions 
      bool hasDialogueId() const { return this->dialogueId_ != nullptr;};
      void deleteDialogueId() { this->dialogueId_ = nullptr;};
      inline string getDialogueId() const { DARABONBA_PTR_GET_DEFAULT(dialogueId_, "") };
      inline Dialogues& setDialogueId(string dialogueId) { DARABONBA_PTR_SET_VALUE(dialogueId_, dialogueId) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline Dialogues& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Dialogues& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // producer Field Functions 
      bool hasProducer() const { return this->producer_ != nullptr;};
      void deleteProducer() { this->producer_ = nullptr;};
      inline string getProducer() const { DARABONBA_PTR_GET_DEFAULT(producer_, "") };
      inline Dialogues& setProducer(string producer) { DARABONBA_PTR_SET_VALUE(producer_, producer) };


      // reasoningText Field Functions 
      bool hasReasoningText() const { return this->reasoningText_ != nullptr;};
      void deleteReasoningText() { this->reasoningText_ = nullptr;};
      inline string getReasoningText() const { DARABONBA_PTR_GET_DEFAULT(reasoningText_, "") };
      inline Dialogues& setReasoningText(string reasoningText) { DARABONBA_PTR_SET_VALUE(reasoningText_, reasoningText) };


      // roundId Field Functions 
      bool hasRoundId() const { return this->roundId_ != nullptr;};
      void deleteRoundId() { this->roundId_ = nullptr;};
      inline string getRoundId() const { DARABONBA_PTR_GET_DEFAULT(roundId_, "") };
      inline Dialogues& setRoundId(string roundId) { DARABONBA_PTR_SET_VALUE(roundId_, roundId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Dialogues& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Dialogues& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline Dialogues& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Dialogues& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Dialogues::AttachedFileList>> attachedFileList_ {};
      // The unique ID of the dialog.
      shared_ptr<string> dialogueId_ {};
      shared_ptr<string> extend_ {};
      shared_ptr<string> nodeId_ {};
      // The speaker. Valid values: 
      // 
      // - user
      // - agent
      shared_ptr<string> producer_ {};
      // The reasoning trace.
      shared_ptr<string> reasoningText_ {};
      // The ID of the conversational turn.
      shared_ptr<string> roundId_ {};
      // The source of the message. Valid values:
      // 
      // chat: messaging conversations.
      // 
      // call: voice calls.
      shared_ptr<string> source_ {};
      // The specific content.
      shared_ptr<string> text_ {};
      // The UNIX timestamp, measured in milliseconds, which indicates the time when the message was generated.
      shared_ptr<int64_t> time_ {};
      // The message type. Valid values:
      // 
      // Voice calls:
      // 
      // 1.  greeting: the welcome message.
      // 2.  normal: the voice response.
      // 3.  speech: the proactive message.
      // 
      // Messaging conversations:
      // 
      // 1.  normal: the text reply.
      // 2.  announcement: the proactive text message.
      // 3.  custom: the custom message.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dialogues_ == nullptr
        && this->requestId_ == nullptr; };
    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const vector<ListAIAgentDialoguesResponseBody::Dialogues> & getDialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, vector<ListAIAgentDialoguesResponseBody::Dialogues>) };
    inline vector<ListAIAgentDialoguesResponseBody::Dialogues> getDialogues() { DARABONBA_PTR_GET(dialogues_, vector<ListAIAgentDialoguesResponseBody::Dialogues>) };
    inline ListAIAgentDialoguesResponseBody& setDialogues(const vector<ListAIAgentDialoguesResponseBody::Dialogues> & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline ListAIAgentDialoguesResponseBody& setDialogues(vector<ListAIAgentDialoguesResponseBody::Dialogues> && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentDialoguesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dialog records.
    shared_ptr<vector<ListAIAgentDialoguesResponseBody::Dialogues>> dialogues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
