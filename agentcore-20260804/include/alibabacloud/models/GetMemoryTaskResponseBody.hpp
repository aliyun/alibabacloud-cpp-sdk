// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMemoryTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMemoryTaskResponseBody() = default ;
    GetMemoryTaskResponseBody(const GetMemoryTaskResponseBody &) = default ;
    GetMemoryTaskResponseBody(GetMemoryTaskResponseBody &&) = default ;
    GetMemoryTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryTaskResponseBody() = default ;
    GetMemoryTaskResponseBody& operator=(const GetMemoryTaskResponseBody &) = default ;
    GetMemoryTaskResponseBody& operator=(GetMemoryTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(changes, changes_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(error, error_);
        DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(input, input_);
        DARABONBA_PTR_TO_JSON(inputMessageCount, inputMessageCount_);
        DARABONBA_PTR_TO_JSON(inputTokenCount, inputTokenCount_);
        DARABONBA_PTR_TO_JSON(memories, memories_);
        DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(strategyConfig, strategyConfig_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(changes, changes_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(error, error_);
        DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(input, input_);
        DARABONBA_PTR_FROM_JSON(inputMessageCount, inputMessageCount_);
        DARABONBA_PTR_FROM_JSON(inputTokenCount, inputTokenCount_);
        DARABONBA_PTR_FROM_JSON(memories, memories_);
        DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(strategyConfig, strategyConfig_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StrategyConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StrategyConfig& obj) { 
          DARABONBA_PTR_TO_JSON(instruction, instruction_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, StrategyConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        StrategyConfig() = default ;
        StrategyConfig(const StrategyConfig &) = default ;
        StrategyConfig(StrategyConfig &&) = default ;
        StrategyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StrategyConfig() = default ;
        StrategyConfig& operator=(const StrategyConfig &) = default ;
        StrategyConfig& operator=(StrategyConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruction_ == nullptr
        && this->type_ == nullptr; };
        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline StrategyConfig& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StrategyConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The custom extraction instructions used to restrict the content to be retained. If a conflict occurs with the memory base extraction instructions, this rule prevails. The auto type does not support non-empty instructions.
        shared_ptr<string> instruction_ {};
        // The memory extraction strategy type. Valid values:
        // - auto: automatic extraction that currently generates semantic memories
        // - semantic: semantic memory
        // - skill: skill
        // - user_profile: user preference
        // - session_summary: session summary
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class Memories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memories& obj) { 
          DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
        };
        friend void from_json(const Darabonba::Json& j, Memories& obj) { 
          DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
        };
        Memories() = default ;
        Memories(const Memories &) = default ;
        Memories(Memories &&) = default ;
        Memories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memories() = default ;
        Memories& operator=(const Memories &) = default ;
        Memories& operator=(Memories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memoryId_ == nullptr; };
        // memoryId Field Functions 
        bool hasMemoryId() const { return this->memoryId_ != nullptr;};
        void deleteMemoryId() { this->memoryId_ = nullptr;};
        inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
        inline Memories& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


      protected:
        // The long-term memory ID.
        // 
        // This parameter is required.
        shared_ptr<string> memoryId_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(events, events_);
          DARABONBA_PTR_TO_JSON(messages, messages_);
          DARABONBA_PTR_TO_JSON(metadata, metadata_);
          DARABONBA_PTR_TO_JSON(referenceTime, referenceTime_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(events, events_);
          DARABONBA_PTR_FROM_JSON(messages, messages_);
          DARABONBA_PTR_FROM_JSON(metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(referenceTime, referenceTime_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Messages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Messages& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(referenceTime, referenceTime_);
            DARABONBA_PTR_TO_JSON(role, role_);
          };
          friend void from_json(const Darabonba::Json& j, Messages& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(referenceTime, referenceTime_);
            DARABONBA_PTR_FROM_JSON(role, role_);
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
          virtual bool empty() const override { return this->content_ == nullptr
        && this->referenceTime_ == nullptr && this->role_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // referenceTime Field Functions 
          bool hasReferenceTime() const { return this->referenceTime_ != nullptr;};
          void deleteReferenceTime() { this->referenceTime_ = nullptr;};
          inline string getReferenceTime() const { DARABONBA_PTR_GET_DEFAULT(referenceTime_, "") };
          inline Messages& setReferenceTime(string referenceTime) { DARABONBA_PTR_SET_VALUE(referenceTime_, referenceTime) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        protected:
          // The body content of the memory.
          // 
          // This parameter is required.
          shared_ptr<string> content_ {};
          // The reference time of this message in RFC 3339 format with time zone. If omitted, the request-level referenceTime is used. If both are omitted, the current request time is used.
          shared_ptr<string> referenceTime_ {};
          // The message role. For example, user indicates the user, and assistant indicates the assistant.
          // 
          // This parameter is required.
          shared_ptr<string> role_ {};
        };

        class Events : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Events& obj) { 
            DARABONBA_PTR_TO_JSON(data, data_);
            DARABONBA_PTR_TO_JSON(eventId, eventId_);
            DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Events& obj) { 
            DARABONBA_PTR_FROM_JSON(data, data_);
            DARABONBA_PTR_FROM_JSON(eventId, eventId_);
            DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Events() = default ;
          Events(const Events &) = default ;
          Events(Events &&) = default ;
          Events(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Events() = default ;
          Events& operator=(const Events &) = default ;
          Events& operator=(Events &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_PTR_TO_JSON(callId, callId_);
              DARABONBA_PTR_TO_JSON(content, content_);
              DARABONBA_PTR_TO_JSON(eventIds, eventIds_);
              DARABONBA_PTR_TO_JSON(parentEventId, parentEventId_);
              DARABONBA_PTR_TO_JSON(parentScope, parentScope_);
              DARABONBA_PTR_TO_JSON(role, role_);
              DARABONBA_PTR_TO_JSON(summary, summary_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(callId, callId_);
              DARABONBA_PTR_FROM_JSON(content, content_);
              DARABONBA_PTR_FROM_JSON(eventIds, eventIds_);
              DARABONBA_PTR_FROM_JSON(parentEventId, parentEventId_);
              DARABONBA_PTR_FROM_JSON(parentScope, parentScope_);
              DARABONBA_PTR_FROM_JSON(role, role_);
              DARABONBA_PTR_FROM_JSON(summary, summary_);
            };
            Data() = default ;
            Data(const Data &) = default ;
            Data(Data &&) = default ;
            Data(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Data() = default ;
            Data& operator=(const Data &) = default ;
            Data& operator=(Data &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ParentScope : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ParentScope& obj) { 
                DARABONBA_PTR_TO_JSON(agentId, agentId_);
                DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
                DARABONBA_PTR_TO_JSON(teamId, teamId_);
                DARABONBA_PTR_TO_JSON(userId, userId_);
              };
              friend void from_json(const Darabonba::Json& j, ParentScope& obj) { 
                DARABONBA_PTR_FROM_JSON(agentId, agentId_);
                DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
                DARABONBA_PTR_FROM_JSON(teamId, teamId_);
                DARABONBA_PTR_FROM_JSON(userId, userId_);
              };
              ParentScope() = default ;
              ParentScope(const ParentScope &) = default ;
              ParentScope(ParentScope &&) = default ;
              ParentScope(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ParentScope() = default ;
              ParentScope& operator=(const ParentScope &) = default ;
              ParentScope& operator=(ParentScope &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->teamId_ == nullptr && this->userId_ == nullptr; };
              // agentId Field Functions 
              bool hasAgentId() const { return this->agentId_ != nullptr;};
              void deleteAgentId() { this->agentId_ = nullptr;};
              inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
              inline ParentScope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


              // sessionId Field Functions 
              bool hasSessionId() const { return this->sessionId_ != nullptr;};
              void deleteSessionId() { this->sessionId_ = nullptr;};
              inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
              inline ParentScope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


              // teamId Field Functions 
              bool hasTeamId() const { return this->teamId_ != nullptr;};
              void deleteTeamId() { this->teamId_ = nullptr;};
              inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
              inline ParentScope& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


              // userId Field Functions 
              bool hasUserId() const { return this->userId_ != nullptr;};
              void deleteUserId() { this->userId_ = nullptr;};
              inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
              inline ParentScope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


            protected:
              // The agent ID defined by the caller. If provided, it cannot be empty and can contain up to 128 UTF-8 bytes.
              shared_ptr<string> agentId_ {};
              // The session ID defined by the caller. If provided, it cannot be empty and can contain up to 128 UTF-8 bytes.
              // 
              // This parameter is required.
              shared_ptr<string> sessionId_ {};
              // The business team ID defined by the caller. If provided, it cannot be empty and can contain up to 128 UTF-8 bytes.
              shared_ptr<string> teamId_ {};
              // The business user ID defined by the caller. If provided, it cannot be empty and can contain up to 128 UTF-8 bytes.
              shared_ptr<string> userId_ {};
            };

            class Content : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Content& obj) { 
                DARABONBA_ANY_TO_JSON(arguments, arguments_);
                DARABONBA_PTR_TO_JSON(callId, callId_);
                DARABONBA_PTR_TO_JSON(format, format_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(text, text_);
                DARABONBA_PTR_TO_JSON(type, type_);
                DARABONBA_ANY_TO_JSON(value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Content& obj) { 
                DARABONBA_ANY_FROM_JSON(arguments, arguments_);
                DARABONBA_PTR_FROM_JSON(callId, callId_);
                DARABONBA_PTR_FROM_JSON(format, format_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(text, text_);
                DARABONBA_PTR_FROM_JSON(type, type_);
                DARABONBA_ANY_FROM_JSON(value, value_);
              };
              Content() = default ;
              Content(const Content &) = default ;
              Content(Content &&) = default ;
              Content(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Content() = default ;
              Content& operator=(const Content &) = default ;
              Content& operator=(Content &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->arguments_ == nullptr
        && this->callId_ == nullptr && this->format_ == nullptr && this->name_ == nullptr && this->text_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
              // arguments Field Functions 
              bool hasArguments() const { return this->arguments_ != nullptr;};
              void deleteArguments() { this->arguments_ = nullptr;};
              inline               const Darabonba::Json & getArguments() const { DARABONBA_GET(arguments_) };
              Darabonba::Json & getArguments() { DARABONBA_GET(arguments_) };
              inline Content& setArguments(const Darabonba::Json & arguments) { DARABONBA_SET_VALUE(arguments_, arguments) };
              inline Content& setArguments(Darabonba::Json && arguments) { DARABONBA_SET_RVALUE(arguments_, arguments) };


              // callId Field Functions 
              bool hasCallId() const { return this->callId_ != nullptr;};
              void deleteCallId() { this->callId_ = nullptr;};
              inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
              inline Content& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


              // format Field Functions 
              bool hasFormat() const { return this->format_ != nullptr;};
              void deleteFormat() { this->format_ = nullptr;};
              inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
              inline Content& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline               const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
              Darabonba::Json & getValue() { DARABONBA_GET(value_) };
              inline Content& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
              inline Content& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


            protected:
              // The tool invocation parameters. This field is required for tool_call content blocks and supports JSON values.
              Darabonba::Json arguments_ {};
              // The tool invocation ID. This field is required for tool_call content blocks and is used to associate subsequent tool messages.
              shared_ptr<string> callId_ {};
              // The data format identifier for the opaque content block. A non-empty string is required.
              shared_ptr<string> format_ {};
              // The tool name. This field is required for the tool_call type.
              shared_ptr<string> name_ {};
              // The text of the text or reasoning content block. This field is required and can be an empty string.
              shared_ptr<string> text_ {};
              // The type of the message content block. Valid values: text, reasoning, tool_call, json, and opaque.
              // 
              // This parameter is required.
              shared_ptr<string> type_ {};
              // The data carried by the content block. This field is required for json and opaque content blocks and supports JSON values.
              Darabonba::Json value_ {};
            };

            virtual bool empty() const override { return this->callId_ == nullptr
        && this->content_ == nullptr && this->eventIds_ == nullptr && this->parentEventId_ == nullptr && this->parentScope_ == nullptr && this->role_ == nullptr
        && this->summary_ == nullptr; };
            // callId Field Functions 
            bool hasCallId() const { return this->callId_ != nullptr;};
            void deleteCallId() { this->callId_ = nullptr;};
            inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
            inline Data& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
            inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
            inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
            inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


            // eventIds Field Functions 
            bool hasEventIds() const { return this->eventIds_ != nullptr;};
            void deleteEventIds() { this->eventIds_ = nullptr;};
            inline const vector<string> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<string>) };
            inline vector<string> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<string>) };
            inline Data& setEventIds(const vector<string> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
            inline Data& setEventIds(vector<string> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


            // parentEventId Field Functions 
            bool hasParentEventId() const { return this->parentEventId_ != nullptr;};
            void deleteParentEventId() { this->parentEventId_ = nullptr;};
            inline string getParentEventId() const { DARABONBA_PTR_GET_DEFAULT(parentEventId_, "") };
            inline Data& setParentEventId(string parentEventId) { DARABONBA_PTR_SET_VALUE(parentEventId_, parentEventId) };


            // parentScope Field Functions 
            bool hasParentScope() const { return this->parentScope_ != nullptr;};
            void deleteParentScope() { this->parentScope_ = nullptr;};
            inline const Data::ParentScope & getParentScope() const { DARABONBA_PTR_GET_CONST(parentScope_, Data::ParentScope) };
            inline Data::ParentScope getParentScope() { DARABONBA_PTR_GET(parentScope_, Data::ParentScope) };
            inline Data& setParentScope(const Data::ParentScope & parentScope) { DARABONBA_PTR_SET_VALUE(parentScope_, parentScope) };
            inline Data& setParentScope(Data::ParentScope && parentScope) { DARABONBA_PTR_SET_RVALUE(parentScope_, parentScope) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Data& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          protected:
            // The tool invocation ID. It is used to associate a tool invocation with its response message.
            shared_ptr<string> callId_ {};
            // The list of message content blocks. This field is required and can be an empty array.
            shared_ptr<vector<Data::Content>> content_ {};
            // The list of visible event IDs referenced by the summary. This field cannot be empty.
            shared_ptr<vector<string>> eventIds_ {};
            // The event ID that serves as the cutoff position for historical references in the parent session.
            shared_ptr<string> parentEventId_ {};
            // The full association scope of the parent session. Each dimension must be consistent with those specified when the parent session was created.
            shared_ptr<Data::ParentScope> parentScope_ {};
            // The message role. Valid values: system, developer, user, assistant, and tool. The tool role also requires a callId.
            shared_ptr<string> role_ {};
            // The summary content for the referenced events. This field cannot be empty.
            shared_ptr<string> summary_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->eventId_ == nullptr && this->timestamp_ == nullptr && this->type_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const Events::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Events::Data) };
          inline Events::Data getData() { DARABONBA_PTR_GET(data_, Events::Data) };
          inline Events& setData(const Events::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Events& setData(Events::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // eventId Field Functions 
          bool hasEventId() const { return this->eventId_ != nullptr;};
          void deleteEventId() { this->eventId_ = nullptr;};
          inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
          inline Events& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline Events& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Events& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The event content. Select fields based on the event type. For message events, use role, content, and an optional callId. For compaction events, use eventIds and summary. For fork events, use parentScope and parentEventId. Do not mix fields from different event types.
          // 
          // This parameter is required.
          shared_ptr<Events::Data> data_ {};
          // The unique identifier of the event.
          // 
          // This parameter is required.
          shared_ptr<string> eventId_ {};
          // The actual occurrence time of the event in Unix milliseconds, provided by the caller.
          // 
          // This parameter is required.
          shared_ptr<int64_t> timestamp_ {};
          // The event type. Valid values:
          // - message: message
          // - compaction: summary
          // - fork: session branch
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->events_ == nullptr
        && this->messages_ == nullptr && this->metadata_ == nullptr && this->referenceTime_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
        // events Field Functions 
        bool hasEvents() const { return this->events_ != nullptr;};
        void deleteEvents() { this->events_ = nullptr;};
        inline const vector<Input::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<Input::Events>) };
        inline vector<Input::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<Input::Events>) };
        inline Input& setEvents(const vector<Input::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
        inline Input& setEvents(vector<Input::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


        // messages Field Functions 
        bool hasMessages() const { return this->messages_ != nullptr;};
        void deleteMessages() { this->messages_ = nullptr;};
        inline const vector<Input::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Input::Messages>) };
        inline vector<Input::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Input::Messages>) };
        inline Input& setMessages(const vector<Input::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
        inline Input& setMessages(vector<Input::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
        inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
        inline Input& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
        inline Input& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


        // referenceTime Field Functions 
        bool hasReferenceTime() const { return this->referenceTime_ != nullptr;};
        void deleteReferenceTime() { this->referenceTime_ = nullptr;};
        inline string getReferenceTime() const { DARABONBA_PTR_GET_DEFAULT(referenceTime_, "") };
        inline Input& setReferenceTime(string referenceTime) { DARABONBA_PTR_SET_VALUE(referenceTime_, referenceTime) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Input& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of session events to be processed.
        shared_ptr<vector<Input::Events>> events_ {};
        // The list of messages to be processed.
        shared_ptr<vector<Input::Messages>> messages_ {};
        // The string key-value tags set by the caller. A maximum of 16 tags are supported. A key can contain up to 64 Unicode characters, and a value can contain up to 1024 Unicode characters. Empty strings are allowed. Nested objects or arrays are not supported.
        shared_ptr<map<string, string>> metadata_ {};
        // The reference time for interpreting relative times in the content, in RFC 3339 format with a time zone. If not provided, the time of the current request is used.
        shared_ptr<string> referenceTime_ {};
        // The raw text to be extracted for this task.
        shared_ptr<string> text_ {};
        // The input content format. Valid values:
        // - text: text
        // - messages: message list
        // - events: event list
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      class Error : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Error& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Error& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
        };
        Error() = default ;
        Error(const Error &) = default ;
        Error(Error &&) = default ;
        Error(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Error() = default ;
        Error& operator=(const Error &) = default ;
        Error& operator=(Error &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        // The task error code.
        // 
        // This parameter is required.
        shared_ptr<string> code_ {};
        // The task error message.
        // 
        // This parameter is required.
        shared_ptr<string> message_ {};
      };

      class Changes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Changes& obj) { 
          DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
          DARABONBA_PTR_TO_JSON(operation, operation_);
        };
        friend void from_json(const Darabonba::Json& j, Changes& obj) { 
          DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
          DARABONBA_PTR_FROM_JSON(operation, operation_);
        };
        Changes() = default ;
        Changes(const Changes &) = default ;
        Changes(Changes &&) = default ;
        Changes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Changes() = default ;
        Changes& operator=(const Changes &) = default ;
        Changes& operator=(Changes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memoryId_ == nullptr
        && this->operation_ == nullptr; };
        // memoryId Field Functions 
        bool hasMemoryId() const { return this->memoryId_ != nullptr;};
        void deleteMemoryId() { this->memoryId_ = nullptr;};
        inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
        inline Changes& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline Changes& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      protected:
        // The unique identifier of the memory.
        // 
        // This parameter is required.
        shared_ptr<string> memoryId_ {};
        // The memory change type. Valid values:
        // - ADD: Adds a memory.
        // - UPDATE: Updates a memory.
        // - DELETE: Deletes a memory.
        // 
        // This parameter is required.
        shared_ptr<string> operation_ {};
      };

      virtual bool empty() const override { return this->changes_ == nullptr
        && this->createdAt_ == nullptr && this->error_ == nullptr && this->finishedAt_ == nullptr && this->input_ == nullptr && this->inputMessageCount_ == nullptr
        && this->inputTokenCount_ == nullptr && this->memories_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr && this->strategyConfig_ == nullptr
        && this->taskId_ == nullptr && this->triggerType_ == nullptr; };
      // changes Field Functions 
      bool hasChanges() const { return this->changes_ != nullptr;};
      void deleteChanges() { this->changes_ = nullptr;};
      inline const vector<Data::Changes> & getChanges() const { DARABONBA_PTR_GET_CONST(changes_, vector<Data::Changes>) };
      inline vector<Data::Changes> getChanges() { DARABONBA_PTR_GET(changes_, vector<Data::Changes>) };
      inline Data& setChanges(const vector<Data::Changes> & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
      inline Data& setChanges(vector<Data::Changes> && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline const Data::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Data::Error) };
      inline Data::Error getError() { DARABONBA_PTR_GET(error_, Data::Error) };
      inline Data& setError(const Data::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
      inline Data& setError(Data::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline Data& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const Data::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Data::Input) };
      inline Data::Input getInput() { DARABONBA_PTR_GET(input_, Data::Input) };
      inline Data& setInput(const Data::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Data& setInput(Data::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // inputMessageCount Field Functions 
      bool hasInputMessageCount() const { return this->inputMessageCount_ != nullptr;};
      void deleteInputMessageCount() { this->inputMessageCount_ = nullptr;};
      inline int64_t getInputMessageCount() const { DARABONBA_PTR_GET_DEFAULT(inputMessageCount_, 0L) };
      inline Data& setInputMessageCount(int64_t inputMessageCount) { DARABONBA_PTR_SET_VALUE(inputMessageCount_, inputMessageCount) };


      // inputTokenCount Field Functions 
      bool hasInputTokenCount() const { return this->inputTokenCount_ != nullptr;};
      void deleteInputTokenCount() { this->inputTokenCount_ = nullptr;};
      inline int64_t getInputTokenCount() const { DARABONBA_PTR_GET_DEFAULT(inputTokenCount_, 0L) };
      inline Data& setInputTokenCount(int64_t inputTokenCount) { DARABONBA_PTR_SET_VALUE(inputTokenCount_, inputTokenCount) };


      // memories Field Functions 
      bool hasMemories() const { return this->memories_ != nullptr;};
      void deleteMemories() { this->memories_ = nullptr;};
      inline const vector<Data::Memories> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<Data::Memories>) };
      inline vector<Data::Memories> getMemories() { DARABONBA_PTR_GET(memories_, vector<Data::Memories>) };
      inline Data& setMemories(const vector<Data::Memories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
      inline Data& setMemories(vector<Data::Memories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
      inline Data& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyConfig Field Functions 
      bool hasStrategyConfig() const { return this->strategyConfig_ != nullptr;};
      void deleteStrategyConfig() { this->strategyConfig_ = nullptr;};
      inline const Data::StrategyConfig & getStrategyConfig() const { DARABONBA_PTR_GET_CONST(strategyConfig_, Data::StrategyConfig) };
      inline Data::StrategyConfig getStrategyConfig() { DARABONBA_PTR_GET(strategyConfig_, Data::StrategyConfig) };
      inline Data& setStrategyConfig(const Data::StrategyConfig & strategyConfig) { DARABONBA_PTR_SET_VALUE(strategyConfig_, strategyConfig) };
      inline Data& setStrategyConfig(Data::StrategyConfig && strategyConfig) { DARABONBA_PTR_SET_RVALUE(strategyConfig_, strategyConfig) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // triggerType Field Functions 
      bool hasTriggerType() const { return this->triggerType_ != nullptr;};
      void deleteTriggerType() { this->triggerType_ = nullptr;};
      inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
      inline Data& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    protected:
      // The list of memory changes generated by the task, excluding memories that are not modified.
      shared_ptr<vector<Data::Changes>> changes_ {};
      // The creation time in RFC 3339 format with time zone.
      shared_ptr<string> createdAt_ {};
      // The task error returned only when the status is FAILED or UNKNOWN. This does not indicate that the current query failed.
      shared_ptr<Data::Error> error_ {};
      // The task completion time in RFC 3339 format with time zone. This field is not returned if the task has not finished.
      shared_ptr<string> finishedAt_ {};
      // The input content processed by this task.
      shared_ptr<Data::Input> input_ {};
      // The number of messages, events, or text entries input for this task.
      shared_ptr<int64_t> inputMessageCount_ {};
      // The number of tokens in the input content for this task.
      shared_ptr<int64_t> inputTokenCount_ {};
      // Returned only when the task succeeds. An empty array is allowed.
      shared_ptr<vector<Data::Memories>> memories_ {};
      // The task start time in RFC 3339 format with time zone. This field is not returned if the task has not started.
      shared_ptr<string> startedAt_ {};
      // The extraction task status.
      shared_ptr<string> status_ {};
      // The extraction strategy used for this task.
      shared_ptr<Data::StrategyConfig> strategyConfig_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task trigger type. Valid values:
      // - AUTO: Automatically triggered by session events.
      // - MANUAL: Triggered when writing to memory.
      shared_ptr<string> triggerType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMemoryTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMemoryTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMemoryTaskResponseBody::Data) };
    inline GetMemoryTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMemoryTaskResponseBody::Data) };
    inline GetMemoryTaskResponseBody& setData(const GetMemoryTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMemoryTaskResponseBody& setData(GetMemoryTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMemoryTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMemoryTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMemoryTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The task details.
    shared_ptr<GetMemoryTaskResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
