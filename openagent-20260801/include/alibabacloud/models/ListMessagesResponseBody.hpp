// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class ListMessagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListMessagesResponseBody() = default ;
    ListMessagesResponseBody(const ListMessagesResponseBody &) = default ;
    ListMessagesResponseBody(ListMessagesResponseBody &&) = default ;
    ListMessagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessagesResponseBody() = default ;
    ListMessagesResponseBody& operator=(const ListMessagesResponseBody &) = default ;
    ListMessagesResponseBody& operator=(ListMessagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(timeline, timeline_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(timeline, timeline_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class Timeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeline& obj) { 
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(runId, runId_);
        };
        friend void from_json(const Darabonba::Json& j, Timeline& obj) { 
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(runId, runId_);
        };
        Timeline() = default ;
        Timeline(const Timeline &) = default ;
        Timeline(Timeline &&) = default ;
        Timeline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timeline() = default ;
        Timeline& operator=(const Timeline &) = default ;
        Timeline& operator=(Timeline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(activityType, activityType_);
            DARABONBA_ANY_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(encryptedValue, encryptedValue_);
            DARABONBA_PTR_TO_JSON(error, error_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(interruptOutcome, interruptOutcome_);
            DARABONBA_ANY_TO_JSON(metadata, metadata_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(resumeInput, resumeInput_);
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
            DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(activityType, activityType_);
            DARABONBA_ANY_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(encryptedValue, encryptedValue_);
            DARABONBA_PTR_FROM_JSON(error, error_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(interruptOutcome, interruptOutcome_);
            DARABONBA_ANY_FROM_JSON(metadata, metadata_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(resumeInput, resumeInput_);
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
            DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ToolCalls : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ToolCalls& obj) { 
              DARABONBA_PTR_TO_JSON(encryptedValue, encryptedValue_);
              DARABONBA_PTR_TO_JSON(function, function_);
              DARABONBA_PTR_TO_JSON(id, id_);
              DARABONBA_ANY_TO_JSON(metadata, metadata_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
              DARABONBA_PTR_FROM_JSON(encryptedValue, encryptedValue_);
              DARABONBA_PTR_FROM_JSON(function, function_);
              DARABONBA_PTR_FROM_JSON(id, id_);
              DARABONBA_ANY_FROM_JSON(metadata, metadata_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            ToolCalls() = default ;
            ToolCalls(const ToolCalls &) = default ;
            ToolCalls(ToolCalls &&) = default ;
            ToolCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ToolCalls() = default ;
            ToolCalls& operator=(const ToolCalls &) = default ;
            ToolCalls& operator=(ToolCalls &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Function : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Function& obj) { 
                DARABONBA_PTR_TO_JSON(arguments, arguments_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, Function& obj) { 
                DARABONBA_PTR_FROM_JSON(arguments, arguments_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              Function() = default ;
              Function(const Function &) = default ;
              Function(Function &&) = default ;
              Function(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Function() = default ;
              Function& operator=(const Function &) = default ;
              Function& operator=(Function &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->arguments_ == nullptr
        && this->name_ == nullptr; };
              // arguments Field Functions 
              bool hasArguments() const { return this->arguments_ != nullptr;};
              void deleteArguments() { this->arguments_ = nullptr;};
              inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
              inline Function& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // The tool parameters in the form of a JSON string.
              shared_ptr<string> arguments_ {};
              // The name of the function or tool.
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->encryptedValue_ == nullptr
        && this->function_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr && this->type_ == nullptr; };
            // encryptedValue Field Functions 
            bool hasEncryptedValue() const { return this->encryptedValue_ != nullptr;};
            void deleteEncryptedValue() { this->encryptedValue_ = nullptr;};
            inline string getEncryptedValue() const { DARABONBA_PTR_GET_DEFAULT(encryptedValue_, "") };
            inline ToolCalls& setEncryptedValue(string encryptedValue) { DARABONBA_PTR_SET_VALUE(encryptedValue_, encryptedValue) };


            // function Field Functions 
            bool hasFunction() const { return this->function_ != nullptr;};
            void deleteFunction() { this->function_ = nullptr;};
            inline const ToolCalls::Function & getFunction() const { DARABONBA_PTR_GET_CONST(function_, ToolCalls::Function) };
            inline ToolCalls::Function getFunction() { DARABONBA_PTR_GET(function_, ToolCalls::Function) };
            inline ToolCalls& setFunction(const ToolCalls::Function & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
            inline ToolCalls& setFunction(ToolCalls::Function && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline ToolCalls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // metadata Field Functions 
            bool hasMetadata() const { return this->metadata_ != nullptr;};
            void deleteMetadata() { this->metadata_ = nullptr;};
            inline             const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
            Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
            inline ToolCalls& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
            inline ToolCalls& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline ToolCalls& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The encrypted content of the tool invocation. The example is only a placeholder value.
            shared_ptr<string> encryptedValue_ {};
            // The information about the function to be executed.
            shared_ptr<ToolCalls::Function> function_ {};
            // The tool invocation ID.
            shared_ptr<string> id_ {};
            // The extended metadata of the tool invocation.
            Darabonba::Json metadata_ {};
            // The type of the tool invocation. The value is fixed to `function`.
            shared_ptr<string> type_ {};
          };

          class ResumeInput : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResumeInput& obj) { 
              DARABONBA_PTR_TO_JSON(resolvedAt, resolvedAt_);
              DARABONBA_PTR_TO_JSON(resume, resume_);
              DARABONBA_PTR_TO_JSON(runId, runId_);
              DARABONBA_PTR_TO_JSON(source, source_);
            };
            friend void from_json(const Darabonba::Json& j, ResumeInput& obj) { 
              DARABONBA_PTR_FROM_JSON(resolvedAt, resolvedAt_);
              DARABONBA_PTR_FROM_JSON(resume, resume_);
              DARABONBA_PTR_FROM_JSON(runId, runId_);
              DARABONBA_PTR_FROM_JSON(source, source_);
            };
            ResumeInput() = default ;
            ResumeInput(const ResumeInput &) = default ;
            ResumeInput(ResumeInput &&) = default ;
            ResumeInput(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResumeInput() = default ;
            ResumeInput& operator=(const ResumeInput &) = default ;
            ResumeInput& operator=(ResumeInput &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Resume : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Resume& obj) { 
                DARABONBA_PTR_TO_JSON(interruptId, interruptId_);
                DARABONBA_ANY_TO_JSON(payload, payload_);
                DARABONBA_PTR_TO_JSON(status, status_);
              };
              friend void from_json(const Darabonba::Json& j, Resume& obj) { 
                DARABONBA_PTR_FROM_JSON(interruptId, interruptId_);
                DARABONBA_ANY_FROM_JSON(payload, payload_);
                DARABONBA_PTR_FROM_JSON(status, status_);
              };
              Resume() = default ;
              Resume(const Resume &) = default ;
              Resume(Resume &&) = default ;
              Resume(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Resume() = default ;
              Resume& operator=(const Resume &) = default ;
              Resume& operator=(Resume &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->interruptId_ == nullptr
        && this->payload_ == nullptr && this->status_ == nullptr; };
              // interruptId Field Functions 
              bool hasInterruptId() const { return this->interruptId_ != nullptr;};
              void deleteInterruptId() { this->interruptId_ = nullptr;};
              inline string getInterruptId() const { DARABONBA_PTR_GET_DEFAULT(interruptId_, "") };
              inline Resume& setInterruptId(string interruptId) { DARABONBA_PTR_SET_VALUE(interruptId_, interruptId) };


              // payload Field Functions 
              bool hasPayload() const { return this->payload_ != nullptr;};
              void deletePayload() { this->payload_ = nullptr;};
              inline               const Darabonba::Json & getPayload() const { DARABONBA_GET(payload_) };
              Darabonba::Json & getPayload() { DARABONBA_GET(payload_) };
              inline Resume& setPayload(const Darabonba::Json & payload) { DARABONBA_SET_VALUE(payload_, payload) };
              inline Resume& setPayload(Darabonba::Json && payload) { DARABONBA_SET_RVALUE(payload_, payload) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
              inline Resume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            protected:
              // The ID of the processed interrupt.
              shared_ptr<string> interruptId_ {};
              // The processing result for the corresponding interrupt, which must comply with the responseSchema of the interrupt.
              Darabonba::Json payload_ {};
              // The response method for the current interrupt. Valid values: `resolved` (the answer, confirmation, or tool result required by the interrupt has been submitted, including the `payload`) and `cancelled` (the interrupt has been canceled, excluding the `payload`).
              shared_ptr<string> status_ {};
            };

            virtual bool empty() const override { return this->resolvedAt_ == nullptr
        && this->resume_ == nullptr && this->runId_ == nullptr && this->source_ == nullptr; };
            // resolvedAt Field Functions 
            bool hasResolvedAt() const { return this->resolvedAt_ != nullptr;};
            void deleteResolvedAt() { this->resolvedAt_ = nullptr;};
            inline string getResolvedAt() const { DARABONBA_PTR_GET_DEFAULT(resolvedAt_, "") };
            inline ResumeInput& setResolvedAt(string resolvedAt) { DARABONBA_PTR_SET_VALUE(resolvedAt_, resolvedAt) };


            // resume Field Functions 
            bool hasResume() const { return this->resume_ != nullptr;};
            void deleteResume() { this->resume_ = nullptr;};
            inline const vector<ResumeInput::Resume> & getResume() const { DARABONBA_PTR_GET_CONST(resume_, vector<ResumeInput::Resume>) };
            inline vector<ResumeInput::Resume> getResume() { DARABONBA_PTR_GET(resume_, vector<ResumeInput::Resume>) };
            inline ResumeInput& setResume(const vector<ResumeInput::Resume> & resume) { DARABONBA_PTR_SET_VALUE(resume_, resume) };
            inline ResumeInput& setResume(vector<ResumeInput::Resume> && resume) { DARABONBA_PTR_SET_RVALUE(resume_, resume) };


            // runId Field Functions 
            bool hasRunId() const { return this->runId_ != nullptr;};
            void deleteRunId() { this->runId_ = nullptr;};
            inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
            inline ResumeInput& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


            // source Field Functions 
            bool hasSource() const { return this->source_ != nullptr;};
            void deleteSource() { this->source_ = nullptr;};
            inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
            inline ResumeInput& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          protected:
            // The time when the interrupt processing was completed, in RFC 3339 format.
            shared_ptr<string> resolvedAt_ {};
            // The submitted processing results for each interrupt.
            shared_ptr<vector<ResumeInput::Resume>> resume_ {};
            // The ID of the original run that was resumed.
            shared_ptr<string> runId_ {};
            // The source of the resume request. Valid values: `USER` (submitted by a user) and `INTERNAL` (submitted by an internal process).
            shared_ptr<string> source_ {};
          };

          class InterruptOutcome : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InterruptOutcome& obj) { 
              DARABONBA_PTR_TO_JSON(interrupts, interrupts_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, InterruptOutcome& obj) { 
              DARABONBA_PTR_FROM_JSON(interrupts, interrupts_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            InterruptOutcome() = default ;
            InterruptOutcome(const InterruptOutcome &) = default ;
            InterruptOutcome(InterruptOutcome &&) = default ;
            InterruptOutcome(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InterruptOutcome() = default ;
            InterruptOutcome& operator=(const InterruptOutcome &) = default ;
            InterruptOutcome& operator=(InterruptOutcome &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Interrupts : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Interrupts& obj) { 
                DARABONBA_PTR_TO_JSON(data, data_);
                DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
                DARABONBA_PTR_TO_JSON(id, id_);
                DARABONBA_PTR_TO_JSON(message, message_);
                DARABONBA_ANY_TO_JSON(metadata, metadata_);
                DARABONBA_PTR_TO_JSON(reason, reason_);
                DARABONBA_ANY_TO_JSON(responseSchema, responseSchema_);
                DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
              };
              friend void from_json(const Darabonba::Json& j, Interrupts& obj) { 
                DARABONBA_PTR_FROM_JSON(data, data_);
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
              class Data : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Data& obj) { 
                  DARABONBA_PTR_TO_JSON(apiCalls, apiCalls_);
                  DARABONBA_PTR_TO_JSON(approvalId, approvalId_);
                  DARABONBA_PTR_TO_JSON(approvalUrl, approvalUrl_);
                  DARABONBA_PTR_TO_JSON(cancellable, cancellable_);
                  DARABONBA_PTR_TO_JSON(changeDigest, changeDigest_);
                  DARABONBA_PTR_TO_JSON(title, title_);
                };
                friend void from_json(const Darabonba::Json& j, Data& obj) { 
                  DARABONBA_PTR_FROM_JSON(apiCalls, apiCalls_);
                  DARABONBA_PTR_FROM_JSON(approvalId, approvalId_);
                  DARABONBA_PTR_FROM_JSON(approvalUrl, approvalUrl_);
                  DARABONBA_PTR_FROM_JSON(cancellable, cancellable_);
                  DARABONBA_PTR_FROM_JSON(changeDigest, changeDigest_);
                  DARABONBA_PTR_FROM_JSON(title, title_);
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
                class ApiCalls : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ApiCalls& obj) { 
                    DARABONBA_PTR_TO_JSON(action, action_);
                    DARABONBA_PTR_TO_JSON(description, description_);
                  };
                  friend void from_json(const Darabonba::Json& j, ApiCalls& obj) { 
                    DARABONBA_PTR_FROM_JSON(action, action_);
                    DARABONBA_PTR_FROM_JSON(description, description_);
                  };
                  ApiCalls() = default ;
                  ApiCalls(const ApiCalls &) = default ;
                  ApiCalls(ApiCalls &&) = default ;
                  ApiCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ApiCalls() = default ;
                  ApiCalls& operator=(const ApiCalls &) = default ;
                  ApiCalls& operator=(ApiCalls &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->action_ == nullptr
        && this->description_ == nullptr; };
                  // action Field Functions 
                  bool hasAction() const { return this->action_ != nullptr;};
                  void deleteAction() { this->action_ = nullptr;};
                  inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
                  inline ApiCalls& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


                  // description Field Functions 
                  bool hasDescription() const { return this->description_ != nullptr;};
                  void deleteDescription() { this->description_ = nullptr;};
                  inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
                  inline ApiCalls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


                protected:
                  // The name of the API action.
                  shared_ptr<string> action_ {};
                  // The description of the operation pending approval.
                  shared_ptr<string> description_ {};
                };

                virtual bool empty() const override { return this->apiCalls_ == nullptr
        && this->approvalId_ == nullptr && this->approvalUrl_ == nullptr && this->cancellable_ == nullptr && this->changeDigest_ == nullptr && this->title_ == nullptr; };
                // apiCalls Field Functions 
                bool hasApiCalls() const { return this->apiCalls_ != nullptr;};
                void deleteApiCalls() { this->apiCalls_ = nullptr;};
                inline const vector<Data::ApiCalls> & getApiCalls() const { DARABONBA_PTR_GET_CONST(apiCalls_, vector<Data::ApiCalls>) };
                inline vector<Data::ApiCalls> getApiCalls() { DARABONBA_PTR_GET(apiCalls_, vector<Data::ApiCalls>) };
                inline Data& setApiCalls(const vector<Data::ApiCalls> & apiCalls) { DARABONBA_PTR_SET_VALUE(apiCalls_, apiCalls) };
                inline Data& setApiCalls(vector<Data::ApiCalls> && apiCalls) { DARABONBA_PTR_SET_RVALUE(apiCalls_, apiCalls) };


                // approvalId Field Functions 
                bool hasApprovalId() const { return this->approvalId_ != nullptr;};
                void deleteApprovalId() { this->approvalId_ = nullptr;};
                inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
                inline Data& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


                // approvalUrl Field Functions 
                bool hasApprovalUrl() const { return this->approvalUrl_ != nullptr;};
                void deleteApprovalUrl() { this->approvalUrl_ = nullptr;};
                inline string getApprovalUrl() const { DARABONBA_PTR_GET_DEFAULT(approvalUrl_, "") };
                inline Data& setApprovalUrl(string approvalUrl) { DARABONBA_PTR_SET_VALUE(approvalUrl_, approvalUrl) };


                // cancellable Field Functions 
                bool hasCancellable() const { return this->cancellable_ != nullptr;};
                void deleteCancellable() { this->cancellable_ = nullptr;};
                inline bool getCancellable() const { DARABONBA_PTR_GET_DEFAULT(cancellable_, false) };
                inline Data& setCancellable(bool cancellable) { DARABONBA_PTR_SET_VALUE(cancellable_, cancellable) };


                // changeDigest Field Functions 
                bool hasChangeDigest() const { return this->changeDigest_ != nullptr;};
                void deleteChangeDigest() { this->changeDigest_ = nullptr;};
                inline string getChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(changeDigest_, "") };
                inline Data& setChangeDigest(string changeDigest) { DARABONBA_PTR_SET_VALUE(changeDigest_, changeDigest) };


                // title Field Functions 
                bool hasTitle() const { return this->title_ != nullptr;};
                void deleteTitle() { this->title_ = nullptr;};
                inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
                inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


              protected:
                // The list of API operations that require approval.
                shared_ptr<vector<Data::ApiCalls>> apiCalls_ {};
                // The associated approval ID.
                shared_ptr<string> approvalId_ {};
                // The URL of the approval page. The example URL cannot be used for actual approval.
                shared_ptr<string> approvalUrl_ {};
                // Specifies whether the approval can be canceled.
                shared_ptr<bool> cancellable_ {};
                // The digest identifier of the change pending approval.
                shared_ptr<string> changeDigest_ {};
                // The title of the approval item.
                shared_ptr<string> title_ {};
              };

              virtual bool empty() const override { return this->data_ == nullptr
        && this->expiresAt_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr && this->reason_ == nullptr
        && this->responseSchema_ == nullptr && this->toolCallId_ == nullptr; };
              // data Field Functions 
              bool hasData() const { return this->data_ != nullptr;};
              void deleteData() { this->data_ = nullptr;};
              inline const Interrupts::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Interrupts::Data) };
              inline Interrupts::Data getData() { DARABONBA_PTR_GET(data_, Interrupts::Data) };
              inline Interrupts& setData(const Interrupts::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
              inline Interrupts& setData(Interrupts::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


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
              inline               const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
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
              inline               const Darabonba::Json & getResponseSchema() const { DARABONBA_GET(responseSchema_) };
              Darabonba::Json & getResponseSchema() { DARABONBA_GET(responseSchema_) };
              inline Interrupts& setResponseSchema(const Darabonba::Json & responseSchema) { DARABONBA_SET_VALUE(responseSchema_, responseSchema) };
              inline Interrupts& setResponseSchema(Darabonba::Json && responseSchema) { DARABONBA_SET_RVALUE(responseSchema_, responseSchema) };


              // toolCallId Field Functions 
              bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
              void deleteToolCallId() { this->toolCallId_ = nullptr;};
              inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
              inline Interrupts& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


            protected:
              // The supplementary business data for the interrupt.
              shared_ptr<Interrupts::Data> data_ {};
              // The expiration time of the interrupt, in RFC 3339 format.
              shared_ptr<string> expiresAt_ {};
              // The interrupt ID.
              shared_ptr<string> id_ {};
              // The interrupt prompt displayed to the user.
              shared_ptr<string> message_ {};
              // The extended metadata of the interrupt.
              Darabonba::Json metadata_ {};
              // The reason for the interrupt. Valid values: `tool_call` (tool invocation requires processing), `input_required` (user input is required), `confirmation` (confirmation is required), and `out_of_band_approval` (waiting for out-of-band approval).
              shared_ptr<string> reason_ {};
              // The JSON schema that the resume result payload must follow.
              Darabonba::Json responseSchema_ {};
              // The ID of the tool invocation associated with the interrupt.
              shared_ptr<string> toolCallId_ {};
            };

            virtual bool empty() const override { return this->interrupts_ == nullptr
        && this->type_ == nullptr; };
            // interrupts Field Functions 
            bool hasInterrupts() const { return this->interrupts_ != nullptr;};
            void deleteInterrupts() { this->interrupts_ = nullptr;};
            inline const vector<InterruptOutcome::Interrupts> & getInterrupts() const { DARABONBA_PTR_GET_CONST(interrupts_, vector<InterruptOutcome::Interrupts>) };
            inline vector<InterruptOutcome::Interrupts> getInterrupts() { DARABONBA_PTR_GET(interrupts_, vector<InterruptOutcome::Interrupts>) };
            inline InterruptOutcome& setInterrupts(const vector<InterruptOutcome::Interrupts> & interrupts) { DARABONBA_PTR_SET_VALUE(interrupts_, interrupts) };
            inline InterruptOutcome& setInterrupts(vector<InterruptOutcome::Interrupts> && interrupts) { DARABONBA_PTR_SET_RVALUE(interrupts_, interrupts) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline InterruptOutcome& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The list of historical interrupts.
            shared_ptr<vector<InterruptOutcome::Interrupts>> interrupts_ {};
            // The type of the interrupt result. The value is fixed to `interrupt`.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->activityType_ == nullptr
        && this->content_ == nullptr && this->encryptedValue_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->interruptOutcome_ == nullptr
        && this->metadata_ == nullptr && this->name_ == nullptr && this->resumeInput_ == nullptr && this->role_ == nullptr && this->toolCallId_ == nullptr
        && this->toolCalls_ == nullptr; };
          // activityType Field Functions 
          bool hasActivityType() const { return this->activityType_ != nullptr;};
          void deleteActivityType() { this->activityType_ = nullptr;};
          inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
          inline Message& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline           const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
          Darabonba::Json & getContent() { DARABONBA_GET(content_) };
          inline Message& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
          inline Message& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


          // encryptedValue Field Functions 
          bool hasEncryptedValue() const { return this->encryptedValue_ != nullptr;};
          void deleteEncryptedValue() { this->encryptedValue_ = nullptr;};
          inline string getEncryptedValue() const { DARABONBA_PTR_GET_DEFAULT(encryptedValue_, "") };
          inline Message& setEncryptedValue(string encryptedValue) { DARABONBA_PTR_SET_VALUE(encryptedValue_, encryptedValue) };


          // error Field Functions 
          bool hasError() const { return this->error_ != nullptr;};
          void deleteError() { this->error_ = nullptr;};
          inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
          inline Message& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Message& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // interruptOutcome Field Functions 
          bool hasInterruptOutcome() const { return this->interruptOutcome_ != nullptr;};
          void deleteInterruptOutcome() { this->interruptOutcome_ = nullptr;};
          inline const Message::InterruptOutcome & getInterruptOutcome() const { DARABONBA_PTR_GET_CONST(interruptOutcome_, Message::InterruptOutcome) };
          inline Message::InterruptOutcome getInterruptOutcome() { DARABONBA_PTR_GET(interruptOutcome_, Message::InterruptOutcome) };
          inline Message& setInterruptOutcome(const Message::InterruptOutcome & interruptOutcome) { DARABONBA_PTR_SET_VALUE(interruptOutcome_, interruptOutcome) };
          inline Message& setInterruptOutcome(Message::InterruptOutcome && interruptOutcome) { DARABONBA_PTR_SET_RVALUE(interruptOutcome_, interruptOutcome) };


          // metadata Field Functions 
          bool hasMetadata() const { return this->metadata_ != nullptr;};
          void deleteMetadata() { this->metadata_ = nullptr;};
          inline           const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
          Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
          inline Message& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
          inline Message& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Message& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // resumeInput Field Functions 
          bool hasResumeInput() const { return this->resumeInput_ != nullptr;};
          void deleteResumeInput() { this->resumeInput_ = nullptr;};
          inline const Message::ResumeInput & getResumeInput() const { DARABONBA_PTR_GET_CONST(resumeInput_, Message::ResumeInput) };
          inline Message::ResumeInput getResumeInput() { DARABONBA_PTR_GET(resumeInput_, Message::ResumeInput) };
          inline Message& setResumeInput(const Message::ResumeInput & resumeInput) { DARABONBA_PTR_SET_VALUE(resumeInput_, resumeInput) };
          inline Message& setResumeInput(Message::ResumeInput && resumeInput) { DARABONBA_PTR_SET_RVALUE(resumeInput_, resumeInput) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // toolCallId Field Functions 
          bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
          void deleteToolCallId() { this->toolCallId_ = nullptr;};
          inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
          inline Message& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


          // toolCalls Field Functions 
          bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
          void deleteToolCalls() { this->toolCalls_ = nullptr;};
          inline const vector<Message::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Message::ToolCalls>) };
          inline vector<Message::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Message::ToolCalls>) };
          inline Message& setToolCalls(const vector<Message::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
          inline Message& setToolCalls(vector<Message::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


        protected:
          // The type identifier of the activity message.
          shared_ptr<string> activityType_ {};
          // The message content. The structure is determined by the message type.
          Darabonba::Json content_ {};
          // The encrypted content. The example is an invalid placeholder value and does not contain real ciphertext.
          shared_ptr<string> encryptedValue_ {};
          // The error description when tool execution fails.
          shared_ptr<string> error_ {};
          // The message ID.
          shared_ptr<string> id_ {};
          // The result information of historical interrupts.
          shared_ptr<Message::InterruptOutcome> interruptOutcome_ {};
          // The extended metadata of the message.
          Darabonba::Json metadata_ {};
          // The name of the message sender.
          shared_ptr<string> name_ {};
          // The resume input corresponding to the historical interrupt.
          shared_ptr<Message::ResumeInput> resumeInput_ {};
          // The role of the message. Valid values: `user` (user message), `assistant` (assistant message), `tool` (tool result), `activity` (activity message), `reasoning` (reasoning message), and `interrupt` (interrupt record).
          shared_ptr<string> role_ {};
          // The ID of the tool invocation associated with the tool result.
          shared_ptr<string> toolCallId_ {};
          // The list of tool invocations initiated by the agent.
          shared_ptr<vector<Message::ToolCalls>> toolCalls_ {};
        };

        virtual bool empty() const override { return this->message_ == nullptr
        && this->runId_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Timeline::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Timeline::Message) };
        inline Timeline::Message getMessage() { DARABONBA_PTR_GET(message_, Timeline::Message) };
        inline Timeline& setMessage(const Timeline::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Timeline& setMessage(Timeline::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


        // runId Field Functions 
        bool hasRunId() const { return this->runId_ != nullptr;};
        void deleteRunId() { this->runId_ = nullptr;};
        inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
        inline Timeline& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      protected:
        // The message object. Different message types are distinguished by role, and each type uses the corresponding fields.
        shared_ptr<Timeline::Message> message_ {};
        // The ID of the run to which the message belongs.
        shared_ptr<string> runId_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->sessionId_ == nullptr && this->timeline_ == nullptr && this->total_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline const vector<Data::Timeline> & getTimeline() const { DARABONBA_PTR_GET_CONST(timeline_, vector<Data::Timeline>) };
      inline vector<Data::Timeline> getTimeline() { DARABONBA_PTR_GET(timeline_, vector<Data::Timeline>) };
      inline Data& setTimeline(const vector<Data::Timeline> & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
      inline Data& setTimeline(vector<Data::Timeline> && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The pagination token for the next page. A value of null indicates that no more data is available.
      shared_ptr<string> nextToken_ {};
      // The ID of the session to which the messages belong.
      shared_ptr<string> sessionId_ {};
      // The message records returned in a timeline.
      shared_ptr<vector<Data::Timeline>> timeline_ {};
      // The number of timeline records on the current page, which is equal to the length of the timeline array.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMessagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMessagesResponseBody::Data) };
    inline ListMessagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMessagesResponseBody::Data) };
    inline ListMessagesResponseBody& setData(const ListMessagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMessagesResponseBody& setData(ListMessagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMessagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The message history and pagination information.
    shared_ptr<ListMessagesResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates success.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
