// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEAGENTREQUEST_HPP_
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
  class InvokeAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(forwardedProps, forwardedProps_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(parentRunId, parentRunId_);
      DARABONBA_PTR_TO_JSON(resume, resume_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_ANY_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(forwardedProps, forwardedProps_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(parentRunId, parentRunId_);
      DARABONBA_PTR_FROM_JSON(resume, resume_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_ANY_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    InvokeAgentRequest() = default ;
    InvokeAgentRequest(const InvokeAgentRequest &) = default ;
    InvokeAgentRequest(InvokeAgentRequest &&) = default ;
    InvokeAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAgentRequest() = default ;
    InvokeAgentRequest& operator=(const InvokeAgentRequest &) = default ;
    InvokeAgentRequest& operator=(InvokeAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tools& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Tools& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(parameters, parameters_);
      };
      Tools() = default ;
      Tools(const Tools &) = default ;
      Tools(Tools &&) = default ;
      Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tools() = default ;
      Tools& operator=(const Tools &) = default ;
      Tools& operator=(Tools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->metadata_ == nullptr && this->name_ == nullptr && this->parameters_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Tools& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Tools& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline Tools& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline Tools& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    protected:
      // This parameter is required.
      shared_ptr<string> description_ {};
      Darabonba::Json metadata_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      Darabonba::Json parameters_ {};
    };

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
      inline       const Darabonba::Json & getPayload() const { DARABONBA_GET(payload_) };
      Darabonba::Json & getPayload() { DARABONBA_GET(payload_) };
      inline Resume& setPayload(const Darabonba::Json & payload) { DARABONBA_SET_VALUE(payload_, payload) };
      inline Resume& setPayload(Darabonba::Json && payload) { DARABONBA_SET_RVALUE(payload_, payload) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Resume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> interruptId_ {};
      Darabonba::Json payload_ {};
      shared_ptr<string> status_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(encryptedValue, encryptedValue_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(subagentRunId, subagentRunId_);
        DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
        DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(encryptedValue, encryptedValue_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(subagentRunId, subagentRunId_);
        DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
        DARABONBA_PTR_FROM_JSON(toolCalls, toolCalls_);
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
          shared_ptr<string> arguments_ {};
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
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline ToolCalls& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline ToolCalls& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ToolCalls& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> encryptedValue_ {};
        shared_ptr<ToolCalls::Function> function_ {};
        shared_ptr<string> id_ {};
        Darabonba::Json metadata_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->encryptedValue_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr && this->role_ == nullptr
        && this->subagentRunId_ == nullptr && this->toolCallId_ == nullptr && this->toolCalls_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // encryptedValue Field Functions 
      bool hasEncryptedValue() const { return this->encryptedValue_ != nullptr;};
      void deleteEncryptedValue() { this->encryptedValue_ = nullptr;};
      inline string getEncryptedValue() const { DARABONBA_PTR_GET_DEFAULT(encryptedValue_, "") };
      inline Messages& setEncryptedValue(string encryptedValue) { DARABONBA_PTR_SET_VALUE(encryptedValue_, encryptedValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Messages& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Messages& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Messages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // subagentRunId Field Functions 
      bool hasSubagentRunId() const { return this->subagentRunId_ != nullptr;};
      void deleteSubagentRunId() { this->subagentRunId_ = nullptr;};
      inline string getSubagentRunId() const { DARABONBA_PTR_GET_DEFAULT(subagentRunId_, "") };
      inline Messages& setSubagentRunId(string subagentRunId) { DARABONBA_PTR_SET_VALUE(subagentRunId_, subagentRunId) };


      // toolCallId Field Functions 
      bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
      void deleteToolCallId() { this->toolCallId_ = nullptr;};
      inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
      inline Messages& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


      // toolCalls Field Functions 
      bool hasToolCalls() const { return this->toolCalls_ != nullptr;};
      void deleteToolCalls() { this->toolCalls_ = nullptr;};
      inline const vector<Messages::ToolCalls> & getToolCalls() const { DARABONBA_PTR_GET_CONST(toolCalls_, vector<Messages::ToolCalls>) };
      inline vector<Messages::ToolCalls> getToolCalls() { DARABONBA_PTR_GET(toolCalls_, vector<Messages::ToolCalls>) };
      inline Messages& setToolCalls(const vector<Messages::ToolCalls> & toolCalls) { DARABONBA_PTR_SET_VALUE(toolCalls_, toolCalls) };
      inline Messages& setToolCalls(vector<Messages::ToolCalls> && toolCalls) { DARABONBA_PTR_SET_RVALUE(toolCalls_, toolCalls) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> encryptedValue_ {};
      shared_ptr<string> id_ {};
      Darabonba::Json metadata_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> subagentRunId_ {};
      shared_ptr<string> toolCallId_ {};
      shared_ptr<vector<Messages::ToolCalls>> toolCalls_ {};
    };

    class ForwardedProps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardedProps& obj) { 
        DARABONBA_PTR_TO_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_TO_JSON(language, language_);
        DARABONBA_PTR_TO_JSON(source, source_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardedProps& obj) { 
        DARABONBA_PTR_FROM_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_FROM_JSON(language, language_);
        DARABONBA_PTR_FROM_JSON(source, source_);
      };
      ForwardedProps() = default ;
      ForwardedProps(const ForwardedProps &) = default ;
      ForwardedProps(ForwardedProps &&) = default ;
      ForwardedProps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardedProps() = default ;
      ForwardedProps& operator=(const ForwardedProps &) = default ;
      ForwardedProps& operator=(ForwardedProps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableThinking_ == nullptr
        && this->language_ == nullptr && this->source_ == nullptr; };
      // enableThinking Field Functions 
      bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
      void deleteEnableThinking() { this->enableThinking_ = nullptr;};
      inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
      inline ForwardedProps& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline ForwardedProps& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ForwardedProps& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      shared_ptr<bool> enableThinking_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> source_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->value_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Context& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Context& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // This parameter is required.
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->forwardedProps_ == nullptr && this->messages_ == nullptr && this->parentRunId_ == nullptr && this->resume_ == nullptr && this->runId_ == nullptr
        && this->state_ == nullptr && this->threadId_ == nullptr && this->tools_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const vector<InvokeAgentRequest::Context> & getContext() const { DARABONBA_PTR_GET_CONST(context_, vector<InvokeAgentRequest::Context>) };
    inline vector<InvokeAgentRequest::Context> getContext() { DARABONBA_PTR_GET(context_, vector<InvokeAgentRequest::Context>) };
    inline InvokeAgentRequest& setContext(const vector<InvokeAgentRequest::Context> & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline InvokeAgentRequest& setContext(vector<InvokeAgentRequest::Context> && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // forwardedProps Field Functions 
    bool hasForwardedProps() const { return this->forwardedProps_ != nullptr;};
    void deleteForwardedProps() { this->forwardedProps_ = nullptr;};
    inline const InvokeAgentRequest::ForwardedProps & getForwardedProps() const { DARABONBA_PTR_GET_CONST(forwardedProps_, InvokeAgentRequest::ForwardedProps) };
    inline InvokeAgentRequest::ForwardedProps getForwardedProps() { DARABONBA_PTR_GET(forwardedProps_, InvokeAgentRequest::ForwardedProps) };
    inline InvokeAgentRequest& setForwardedProps(const InvokeAgentRequest::ForwardedProps & forwardedProps) { DARABONBA_PTR_SET_VALUE(forwardedProps_, forwardedProps) };
    inline InvokeAgentRequest& setForwardedProps(InvokeAgentRequest::ForwardedProps && forwardedProps) { DARABONBA_PTR_SET_RVALUE(forwardedProps_, forwardedProps) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<InvokeAgentRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<InvokeAgentRequest::Messages>) };
    inline vector<InvokeAgentRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<InvokeAgentRequest::Messages>) };
    inline InvokeAgentRequest& setMessages(const vector<InvokeAgentRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline InvokeAgentRequest& setMessages(vector<InvokeAgentRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // parentRunId Field Functions 
    bool hasParentRunId() const { return this->parentRunId_ != nullptr;};
    void deleteParentRunId() { this->parentRunId_ = nullptr;};
    inline string getParentRunId() const { DARABONBA_PTR_GET_DEFAULT(parentRunId_, "") };
    inline InvokeAgentRequest& setParentRunId(string parentRunId) { DARABONBA_PTR_SET_VALUE(parentRunId_, parentRunId) };


    // resume Field Functions 
    bool hasResume() const { return this->resume_ != nullptr;};
    void deleteResume() { this->resume_ = nullptr;};
    inline const vector<InvokeAgentRequest::Resume> & getResume() const { DARABONBA_PTR_GET_CONST(resume_, vector<InvokeAgentRequest::Resume>) };
    inline vector<InvokeAgentRequest::Resume> getResume() { DARABONBA_PTR_GET(resume_, vector<InvokeAgentRequest::Resume>) };
    inline InvokeAgentRequest& setResume(const vector<InvokeAgentRequest::Resume> & resume) { DARABONBA_PTR_SET_VALUE(resume_, resume) };
    inline InvokeAgentRequest& setResume(vector<InvokeAgentRequest::Resume> && resume) { DARABONBA_PTR_SET_RVALUE(resume_, resume) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline InvokeAgentRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline     const Darabonba::Json & getState() const { DARABONBA_GET(state_) };
    Darabonba::Json & getState() { DARABONBA_GET(state_) };
    inline InvokeAgentRequest& setState(const Darabonba::Json & state) { DARABONBA_SET_VALUE(state_, state) };
    inline InvokeAgentRequest& setState(Darabonba::Json && state) { DARABONBA_SET_RVALUE(state_, state) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline InvokeAgentRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<InvokeAgentRequest::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<InvokeAgentRequest::Tools>) };
    inline vector<InvokeAgentRequest::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<InvokeAgentRequest::Tools>) };
    inline InvokeAgentRequest& setTools(const vector<InvokeAgentRequest::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline InvokeAgentRequest& setTools(vector<InvokeAgentRequest::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    shared_ptr<vector<InvokeAgentRequest::Context>> context_ {};
    shared_ptr<InvokeAgentRequest::ForwardedProps> forwardedProps_ {};
    shared_ptr<vector<InvokeAgentRequest::Messages>> messages_ {};
    shared_ptr<string> parentRunId_ {};
    shared_ptr<vector<InvokeAgentRequest::Resume>> resume_ {};
    shared_ptr<string> runId_ {};
    Darabonba::Json state_ {};
    shared_ptr<string> threadId_ {};
    shared_ptr<vector<InvokeAgentRequest::Tools>> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
