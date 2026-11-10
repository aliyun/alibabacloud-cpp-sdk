// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVOKEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InvokeAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(delta, delta_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outcome, outcome_);
      DARABONBA_PTR_TO_JSON(parentMessageId, parentMessageId_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_ANY_TO_JSON(snapshot, snapshot_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
      DARABONBA_PTR_TO_JSON(toolCallName, toolCallName_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(delta, delta_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outcome, outcome_);
      DARABONBA_PTR_FROM_JSON(parentMessageId, parentMessageId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_ANY_FROM_JSON(snapshot, snapshot_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
      DARABONBA_PTR_FROM_JSON(toolCallName, toolCallName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    InvokeAgentResponseBody() = default ;
    InvokeAgentResponseBody(const InvokeAgentResponseBody &) = default ;
    InvokeAgentResponseBody(InvokeAgentResponseBody &&) = default ;
    InvokeAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAgentResponseBody() = default ;
    InvokeAgentResponseBody& operator=(const InvokeAgentResponseBody &) = default ;
    InvokeAgentResponseBody& operator=(InvokeAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Outcome : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outcome& obj) { 
        DARABONBA_PTR_TO_JSON(interrupts, interrupts_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Outcome& obj) { 
        DARABONBA_PTR_FROM_JSON(interrupts, interrupts_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Outcome() = default ;
      Outcome(const Outcome &) = default ;
      Outcome(Outcome &&) = default ;
      Outcome(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outcome() = default ;
      Outcome& operator=(const Outcome &) = default ;
      Outcome& operator=(Outcome &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Interrupts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Interrupts& obj) { 
          DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_ANY_TO_JSON(metadata, metadata_);
          DARABONBA_PTR_TO_JSON(reason, reason_);
          DARABONBA_ANY_TO_JSON(responseSchema, responseSchema_);
          DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
        };
        friend void from_json(const Darabonba::Json& j, Interrupts& obj) { 
          DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_ANY_FROM_JSON(metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(reason, reason_);
          DARABONBA_ANY_FROM_JSON(responseSchema, responseSchema_);
          DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
        };
        Interrupts() = default ;
        Interrupts(const Interrupts &) = default ;
        Interrupts(Interrupts &&) = default ;
        Interrupts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Interrupts() = default ;
        Interrupts& operator=(const Interrupts &) = default ;
        Interrupts& operator=(Interrupts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->id_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr && this->reason_ == nullptr && this->responseSchema_ == nullptr
        && this->toolCallId_ == nullptr; };
        // expiresAt Field Functions 
        bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
        void deleteExpiresAt() { this->expiresAt_ = nullptr;};
        inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
        inline Interrupts& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Interrupts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Interrupts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Interrupts& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Interrupts& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Interrupts& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // responseSchema Field Functions 
        bool hasResponseSchema() const { return this->responseSchema_ != nullptr;};
        void deleteResponseSchema() { this->responseSchema_ = nullptr;};
        inline         const Darabonba::Json & getResponseSchema() const { DARABONBA_GET(responseSchema_) };
        Darabonba::Json & getResponseSchema() { DARABONBA_GET(responseSchema_) };
        inline Interrupts& setResponseSchema(const Darabonba::Json & responseSchema) { DARABONBA_SET_VALUE(responseSchema_, responseSchema) };
        inline Interrupts& setResponseSchema(Darabonba::Json && responseSchema) { DARABONBA_SET_RVALUE(responseSchema_, responseSchema) };


        // toolCallId Field Functions 
        bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
        void deleteToolCallId() { this->toolCallId_ = nullptr;};
        inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
        inline Interrupts& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


      protected:
        shared_ptr<string> expiresAt_ {};
        // This parameter is required.
        shared_ptr<string> id_ {};
        shared_ptr<string> message_ {};
        Darabonba::Json metadata_ {};
        // This parameter is required.
        shared_ptr<string> reason_ {};
        Darabonba::Json responseSchema_ {};
        shared_ptr<string> toolCallId_ {};
      };

      virtual bool empty() const override { return this->interrupts_ == nullptr
        && this->type_ == nullptr; };
      // interrupts Field Functions 
      bool hasInterrupts() const { return this->interrupts_ != nullptr;};
      void deleteInterrupts() { this->interrupts_ = nullptr;};
      inline const vector<Outcome::Interrupts> & getInterrupts() const { DARABONBA_PTR_GET_CONST(interrupts_, vector<Outcome::Interrupts>) };
      inline vector<Outcome::Interrupts> getInterrupts() { DARABONBA_PTR_GET(interrupts_, vector<Outcome::Interrupts>) };
      inline Outcome& setInterrupts(const vector<Outcome::Interrupts> & interrupts) { DARABONBA_PTR_SET_VALUE(interrupts_, interrupts) };
      inline Outcome& setInterrupts(vector<Outcome::Interrupts> && interrupts) { DARABONBA_PTR_SET_RVALUE(interrupts_, interrupts) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Outcome& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Outcome::Interrupts>> interrupts_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->delta_ == nullptr && this->message_ == nullptr && this->messageId_ == nullptr && this->name_ == nullptr
        && this->outcome_ == nullptr && this->parentMessageId_ == nullptr && this->role_ == nullptr && this->runId_ == nullptr && this->snapshot_ == nullptr
        && this->threadId_ == nullptr && this->toolCallId_ == nullptr && this->toolCallName_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InvokeAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline InvokeAgentResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline string getDelta() const { DARABONBA_PTR_GET_DEFAULT(delta_, "") };
    inline InvokeAgentResponseBody& setDelta(string delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InvokeAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline InvokeAgentResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InvokeAgentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outcome Field Functions 
    bool hasOutcome() const { return this->outcome_ != nullptr;};
    void deleteOutcome() { this->outcome_ = nullptr;};
    inline const InvokeAgentResponseBody::Outcome & getOutcome() const { DARABONBA_PTR_GET_CONST(outcome_, InvokeAgentResponseBody::Outcome) };
    inline InvokeAgentResponseBody::Outcome getOutcome() { DARABONBA_PTR_GET(outcome_, InvokeAgentResponseBody::Outcome) };
    inline InvokeAgentResponseBody& setOutcome(const InvokeAgentResponseBody::Outcome & outcome) { DARABONBA_PTR_SET_VALUE(outcome_, outcome) };
    inline InvokeAgentResponseBody& setOutcome(InvokeAgentResponseBody::Outcome && outcome) { DARABONBA_PTR_SET_RVALUE(outcome_, outcome) };


    // parentMessageId Field Functions 
    bool hasParentMessageId() const { return this->parentMessageId_ != nullptr;};
    void deleteParentMessageId() { this->parentMessageId_ = nullptr;};
    inline string getParentMessageId() const { DARABONBA_PTR_GET_DEFAULT(parentMessageId_, "") };
    inline InvokeAgentResponseBody& setParentMessageId(string parentMessageId) { DARABONBA_PTR_SET_VALUE(parentMessageId_, parentMessageId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline InvokeAgentResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline InvokeAgentResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline     const Darabonba::Json & getSnapshot() const { DARABONBA_GET(snapshot_) };
    Darabonba::Json & getSnapshot() { DARABONBA_GET(snapshot_) };
    inline InvokeAgentResponseBody& setSnapshot(const Darabonba::Json & snapshot) { DARABONBA_SET_VALUE(snapshot_, snapshot) };
    inline InvokeAgentResponseBody& setSnapshot(Darabonba::Json && snapshot) { DARABONBA_SET_RVALUE(snapshot_, snapshot) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline InvokeAgentResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline InvokeAgentResponseBody& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


    // toolCallName Field Functions 
    bool hasToolCallName() const { return this->toolCallName_ != nullptr;};
    void deleteToolCallName() { this->toolCallName_ = nullptr;};
    inline string getToolCallName() const { DARABONBA_PTR_GET_DEFAULT(toolCallName_, "") };
    inline InvokeAgentResponseBody& setToolCallName(string toolCallName) { DARABONBA_PTR_SET_VALUE(toolCallName_, toolCallName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InvokeAgentResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
    Darabonba::Json & getValue() { DARABONBA_GET(value_) };
    inline InvokeAgentResponseBody& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline InvokeAgentResponseBody& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> delta_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> messageId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<InvokeAgentResponseBody::Outcome> outcome_ {};
    shared_ptr<string> parentMessageId_ {};
    shared_ptr<string> role_ {};
    shared_ptr<string> runId_ {};
    Darabonba::Json snapshot_ {};
    shared_ptr<string> threadId_ {};
    shared_ptr<string> toolCallId_ {};
    shared_ptr<string> toolCallName_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
    Darabonba::Json value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
