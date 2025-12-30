// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationRequest& obj) { 
      DARABONBA_ANY_TO_JSON(inferenceParameters, inferenceParameters_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(inferenceParameters, inferenceParameters_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    RunChatResultGenerationRequest() = default ;
    RunChatResultGenerationRequest(const RunChatResultGenerationRequest &) = default ;
    RunChatResultGenerationRequest(RunChatResultGenerationRequest &&) = default ;
    RunChatResultGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationRequest() = default ;
    RunChatResultGenerationRequest& operator=(const RunChatResultGenerationRequest &) = default ;
    RunChatResultGenerationRequest& operator=(RunChatResultGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tools& obj) { 
        DARABONBA_PTR_TO_JSON(function, function_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Tools& obj) { 
        DARABONBA_PTR_FROM_JSON(function, function_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class Function : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Function& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(required, required_);
        };
        friend void from_json(const Darabonba::Json& j, Function& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(required, required_);
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
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_ANY_TO_JSON(properties, properties_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_ANY_FROM_JSON(properties, properties_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->properties_ == nullptr
        && this->type_ == nullptr; };
          // properties Field Functions 
          bool hasProperties() const { return this->properties_ != nullptr;};
          void deleteProperties() { this->properties_ = nullptr;};
          inline           const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
          Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
          inline Parameters& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
          inline Parameters& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          Darabonba::Json properties_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr && this->required_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Function& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Function& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const Function::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Function::Parameters) };
        inline Function::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Function::Parameters) };
        inline Function& setParameters(const Function::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Function& setParameters(Function::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline const vector<string> & getRequired() const { DARABONBA_PTR_GET_CONST(required_, vector<string>) };
        inline vector<string> getRequired() { DARABONBA_PTR_GET(required_, vector<string>) };
        inline Function& setRequired(const vector<string> & required) { DARABONBA_PTR_SET_VALUE(required_, required) };
        inline Function& setRequired(vector<string> && required) { DARABONBA_PTR_SET_RVALUE(required_, required) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<Function::Parameters> parameters_ {};
        shared_ptr<vector<string>> required_ {};
      };

      virtual bool empty() const override { return this->function_ == nullptr
        && this->type_ == nullptr; };
      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline const Tools::Function & getFunction() const { DARABONBA_PTR_GET_CONST(function_, Tools::Function) };
      inline Tools::Function getFunction() { DARABONBA_PTR_GET(function_, Tools::Function) };
      inline Tools& setFunction(const Tools::Function & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
      inline Tools& setFunction(Tools::Function && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Tools& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Tools::Function> function_ {};
      shared_ptr<string> type_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
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
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->inferenceParameters_ == nullptr
        && this->messages_ == nullptr && this->modelId_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->tools_ == nullptr; };
    // inferenceParameters Field Functions 
    bool hasInferenceParameters() const { return this->inferenceParameters_ != nullptr;};
    void deleteInferenceParameters() { this->inferenceParameters_ = nullptr;};
    inline     const Darabonba::Json & getInferenceParameters() const { DARABONBA_GET(inferenceParameters_) };
    Darabonba::Json & getInferenceParameters() { DARABONBA_GET(inferenceParameters_) };
    inline RunChatResultGenerationRequest& setInferenceParameters(const Darabonba::Json & inferenceParameters) { DARABONBA_SET_VALUE(inferenceParameters_, inferenceParameters) };
    inline RunChatResultGenerationRequest& setInferenceParameters(Darabonba::Json && inferenceParameters) { DARABONBA_SET_RVALUE(inferenceParameters_, inferenceParameters) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunChatResultGenerationRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunChatResultGenerationRequest::Messages>) };
    inline vector<RunChatResultGenerationRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<RunChatResultGenerationRequest::Messages>) };
    inline RunChatResultGenerationRequest& setMessages(const vector<RunChatResultGenerationRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunChatResultGenerationRequest& setMessages(vector<RunChatResultGenerationRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunChatResultGenerationRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunChatResultGenerationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline RunChatResultGenerationRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<RunChatResultGenerationRequest::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<RunChatResultGenerationRequest::Tools>) };
    inline vector<RunChatResultGenerationRequest::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<RunChatResultGenerationRequest::Tools>) };
    inline RunChatResultGenerationRequest& setTools(const vector<RunChatResultGenerationRequest::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline RunChatResultGenerationRequest& setTools(vector<RunChatResultGenerationRequest::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    Darabonba::Json inferenceParameters_ {};
    // This parameter is required.
    shared_ptr<vector<RunChatResultGenerationRequest::Messages>> messages_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<vector<RunChatResultGenerationRequest::Tools>> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
