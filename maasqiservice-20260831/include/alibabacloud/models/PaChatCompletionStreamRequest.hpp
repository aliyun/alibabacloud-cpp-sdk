// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PACHATCOMPLETIONSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PACHATCOMPLETIONSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class PaChatCompletionStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PaChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(allowedTokenIds, allowedTokenIds_);
      DARABONBA_PTR_TO_JSON(badWords, badWords_);
      DARABONBA_PTR_TO_JSON(chatTemplateKwargs, chatTemplateKwargs_);
      DARABONBA_PTR_TO_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_TO_JSON(ignoreEos, ignoreEos_);
      DARABONBA_PTR_TO_JSON(includeReasoning, includeReasoning_);
      DARABONBA_PTR_TO_JSON(logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(minP, minP_);
      DARABONBA_PTR_TO_JSON(minTokens, minTokens_);
      DARABONBA_PTR_TO_JSON(mmProcessorKwargs, mmProcessorKwargs_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(n, n_);
      DARABONBA_PTR_TO_JSON(parallelToolCalls, parallelToolCalls_);
      DARABONBA_PTR_TO_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(promptLogprobs, promptLogprobs_);
      DARABONBA_PTR_TO_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_TO_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_TO_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
      DARABONBA_PTR_TO_JSON(skipSpecialTokens, skipSpecialTokens_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(stopTokenIds, stopTokenIds_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_TO_JSON(structuredOutputs, structuredOutputs_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(toolChoice, toolChoice_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(topLogprobs, topLogprobs_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, PaChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedTokenIds, allowedTokenIds_);
      DARABONBA_PTR_FROM_JSON(badWords, badWords_);
      DARABONBA_PTR_FROM_JSON(chatTemplateKwargs, chatTemplateKwargs_);
      DARABONBA_PTR_FROM_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_FROM_JSON(ignoreEos, ignoreEos_);
      DARABONBA_PTR_FROM_JSON(includeReasoning, includeReasoning_);
      DARABONBA_PTR_FROM_JSON(logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(minP, minP_);
      DARABONBA_PTR_FROM_JSON(minTokens, minTokens_);
      DARABONBA_PTR_FROM_JSON(mmProcessorKwargs, mmProcessorKwargs_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(n, n_);
      DARABONBA_PTR_FROM_JSON(parallelToolCalls, parallelToolCalls_);
      DARABONBA_PTR_FROM_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(promptLogprobs, promptLogprobs_);
      DARABONBA_PTR_FROM_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_FROM_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_FROM_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
      DARABONBA_PTR_FROM_JSON(skipSpecialTokens, skipSpecialTokens_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(stopTokenIds, stopTokenIds_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(streamOptions, streamOptions_);
      DARABONBA_PTR_FROM_JSON(structuredOutputs, structuredOutputs_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(toolChoice, toolChoice_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(topLogprobs, topLogprobs_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    PaChatCompletionStreamRequest() = default ;
    PaChatCompletionStreamRequest(const PaChatCompletionStreamRequest &) = default ;
    PaChatCompletionStreamRequest(PaChatCompletionStreamRequest &&) = default ;
    PaChatCompletionStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PaChatCompletionStreamRequest() = default ;
    PaChatCompletionStreamRequest& operator=(const PaChatCompletionStreamRequest &) = default ;
    PaChatCompletionStreamRequest& operator=(PaChatCompletionStreamRequest &&) = default ;
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
          DARABONBA_PTR_TO_JSON(strict, strict_);
        };
        friend void from_json(const Darabonba::Json& j, Function& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(strict, strict_);
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
            DARABONBA_PTR_TO_JSON(properties, properties_);
            DARABONBA_PTR_TO_JSON(required, required_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(properties, properties_);
            DARABONBA_PTR_FROM_JSON(required, required_);
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
          class Properties : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Properties& obj) { 
              DARABONBA_PTR_TO_JSON(city, city_);
            };
            friend void from_json(const Darabonba::Json& j, Properties& obj) { 
              DARABONBA_PTR_FROM_JSON(city, city_);
            };
            Properties() = default ;
            Properties(const Properties &) = default ;
            Properties(Properties &&) = default ;
            Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Properties() = default ;
            Properties& operator=(const Properties &) = default ;
            Properties& operator=(Properties &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class City : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const City& obj) { 
                DARABONBA_PTR_TO_JSON(description, description_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, City& obj) { 
                DARABONBA_PTR_FROM_JSON(description, description_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              City() = default ;
              City(const City &) = default ;
              City(City &&) = default ;
              City(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~City() = default ;
              City& operator=(const City &) = default ;
              City& operator=(City &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->description_ == nullptr
        && this->type_ == nullptr; };
              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline City& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline City& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The sample parameter description.
              shared_ptr<string> description_ {};
              // The JSON Schema type of the sample city field.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->city_ == nullptr; };
            // city Field Functions 
            bool hasCity() const { return this->city_ != nullptr;};
            void deleteCity() { this->city_ = nullptr;};
            inline const Properties::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, Properties::City) };
            inline Properties::City getCity() { DARABONBA_PTR_GET(city_, Properties::City) };
            inline Properties& setCity(const Properties::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
            inline Properties& setCity(Properties::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


          protected:
            // The Schema for the sample business parameter city. The actual fields are determined by the caller\\"s tool definition.
            shared_ptr<Properties::City> city_ {};
          };

          virtual bool empty() const override { return this->properties_ == nullptr
        && this->required_ == nullptr && this->type_ == nullptr; };
          // properties Field Functions 
          bool hasProperties() const { return this->properties_ != nullptr;};
          void deleteProperties() { this->properties_ = nullptr;};
          inline const Parameters::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Parameters::Properties) };
          inline Parameters::Properties getProperties() { DARABONBA_PTR_GET(properties_, Parameters::Properties) };
          inline Parameters& setProperties(const Parameters::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
          inline Parameters& setProperties(Parameters::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline const vector<string> & getRequired() const { DARABONBA_PTR_GET_CONST(required_, vector<string>) };
          inline vector<string> getRequired() { DARABONBA_PTR_GET(required_, vector<string>) };
          inline Parameters& setRequired(const vector<string> & required) { DARABONBA_PTR_SET_VALUE(required_, required) };
          inline Parameters& setRequired(vector<string> && required) { DARABONBA_PTR_SET_RVALUE(required_, required) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The property definitions of the JSON Schema.
          shared_ptr<Parameters::Properties> properties_ {};
          // The array of required field names in the JSON Schema.
          shared_ptr<vector<string>> required_ {};
          // The root Schema type of the function parameters. Typically set to object.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr && this->strict_ == nullptr; };
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


        // strict Field Functions 
        bool hasStrict() const { return this->strict_ != nullptr;};
        void deleteStrict() { this->strict_ = nullptr;};
        inline bool getStrict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
        inline Function& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


      protected:
        // The description of the function purpose. The model uses this to determine when to call the tool.
        shared_ptr<string> description_ {};
        // The function name. This parameter is required. Used to match assistant.tool_calls with subsequent tool results.
        shared_ptr<string> name_ {};
        // The JSON Schema for function parameters, passed to the model as raw JSON. If not provided, an empty object Schema is used.
        shared_ptr<Function::Parameters> parameters_ {};
        // Specifies whether the model must strictly follow the function parameter JSON Schema.
        shared_ptr<bool> strict_ {};
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
      // The function tool definition, including the name, description, and JSON Schema parameters.
      shared_ptr<Tools::Function> function_ {};
      // The tool type. This parameter must be set to function.
      shared_ptr<string> type_ {};
    };

    class StructuredOutputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructuredOutputs& obj) { 
        DARABONBA_PTR_TO_JSON(choice, choice_);
      };
      friend void from_json(const Darabonba::Json& j, StructuredOutputs& obj) { 
        DARABONBA_PTR_FROM_JSON(choice, choice_);
      };
      StructuredOutputs() = default ;
      StructuredOutputs(const StructuredOutputs &) = default ;
      StructuredOutputs(StructuredOutputs &&) = default ;
      StructuredOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructuredOutputs() = default ;
      StructuredOutputs& operator=(const StructuredOutputs &) = default ;
      StructuredOutputs& operator=(StructuredOutputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->choice_ == nullptr; };
      // choice Field Functions 
      bool hasChoice() const { return this->choice_ != nullptr;};
      void deleteChoice() { this->choice_ = nullptr;};
      inline const vector<string> & getChoice() const { DARABONBA_PTR_GET_CONST(choice_, vector<string>) };
      inline vector<string> getChoice() { DARABONBA_PTR_GET(choice_, vector<string>) };
      inline StructuredOutputs& setChoice(const vector<string> & choice) { DARABONBA_PTR_SET_VALUE(choice_, choice) };
      inline StructuredOutputs& setChoice(vector<string> && choice) { DARABONBA_PTR_SET_RVALUE(choice_, choice) };


    protected:
      // The set of allowed enumeration text values.
      shared_ptr<vector<string>> choice_ {};
    };

    class StreamOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
        DARABONBA_PTR_TO_JSON(includeUsage, includeUsage_);
      };
      friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(includeUsage, includeUsage_);
      };
      StreamOptions() = default ;
      StreamOptions(const StreamOptions &) = default ;
      StreamOptions(StreamOptions &&) = default ;
      StreamOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamOptions() = default ;
      StreamOptions& operator=(const StreamOptions &) = default ;
      StreamOptions& operator=(StreamOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeUsage_ == nullptr; };
      // includeUsage Field Functions 
      bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
      void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
      inline bool getIncludeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
      inline StreamOptions& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    protected:
      // Specifies whether to output a usage statistics chunk before data:[DONE].
      shared_ptr<bool> includeUsage_ {};
    };

    class ResponseFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseFormat& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      ResponseFormat() = default ;
      ResponseFormat(const ResponseFormat &) = default ;
      ResponseFormat(ResponseFormat &&) = default ;
      ResponseFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseFormat() = default ;
      ResponseFormat& operator=(const ResponseFormat &) = default ;
      ResponseFormat& operator=(ResponseFormat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResponseFormat& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The response format type, such as text, json_object, or json_schema.
      shared_ptr<string> type_ {};
    };

    class MmProcessorKwargs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MmProcessorKwargs& obj) { 
        DARABONBA_PTR_TO_JSON(maxDynamicPatch, maxDynamicPatch_);
      };
      friend void from_json(const Darabonba::Json& j, MmProcessorKwargs& obj) { 
        DARABONBA_PTR_FROM_JSON(maxDynamicPatch, maxDynamicPatch_);
      };
      MmProcessorKwargs() = default ;
      MmProcessorKwargs(const MmProcessorKwargs &) = default ;
      MmProcessorKwargs(MmProcessorKwargs &&) = default ;
      MmProcessorKwargs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MmProcessorKwargs() = default ;
      MmProcessorKwargs& operator=(const MmProcessorKwargs &) = default ;
      MmProcessorKwargs& operator=(MmProcessorKwargs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxDynamicPatch_ == nullptr; };
      // maxDynamicPatch Field Functions 
      bool hasMaxDynamicPatch() const { return this->maxDynamicPatch_ != nullptr;};
      void deleteMaxDynamicPatch() { this->maxDynamicPatch_ = nullptr;};
      inline int64_t getMaxDynamicPatch() const { DARABONBA_PTR_GET_DEFAULT(maxDynamicPatch_, 0L) };
      inline MmProcessorKwargs& setMaxDynamicPatch(int64_t maxDynamicPatch) { DARABONBA_PTR_SET_VALUE(maxDynamicPatch_, maxDynamicPatch) };


    protected:
      // Example: the maximum number of dynamic image patches allowed by the vision model.
      shared_ptr<int64_t> maxDynamicPatch_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
        DARABONBA_PTR_TO_JSON(toolCalls, toolCalls_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
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
          DARABONBA_PTR_TO_JSON(function, function_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ToolCalls& obj) { 
          DARABONBA_PTR_FROM_JSON(function, function_);
          DARABONBA_PTR_FROM_JSON(id, id_);
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
          // The JSON object string of function arguments.
          shared_ptr<string> arguments_ {};
          // The name of the function to call.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->function_ == nullptr
        && this->id_ == nullptr && this->type_ == nullptr; };
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


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ToolCalls& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The function information of a historical tool invocation entry, including name and arguments as a JSON character string. Retain the actual returned values in subsequent turns.
        shared_ptr<ToolCalls::Function> function_ {};
        // The tool invocation ID. Subsequent tool messages reference this through tool_call_id.
        shared_ptr<string> id_ {};
        // The tool invocation type. Currently fixed as function.
        shared_ptr<string> type_ {};
      };

      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
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
        class ImageUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageUrl& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ImageUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          ImageUrl() = default ;
          ImageUrl(const ImageUrl &) = default ;
          ImageUrl(ImageUrl &&) = default ;
          ImageUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageUrl() = default ;
          ImageUrl& operator=(const ImageUrl &) = default ;
          ImageUrl& operator=(ImageUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ImageUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The image URL. Remote images must use HTTPS. Base64 Data URLs are also accepted.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->text_ == nullptr && this->type_ == nullptr; };
        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
        inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
        inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
        inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


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


      protected:
        // The image reference when type=image_url. Supports HTTPS URLs or data:image/...;base64,... format.
        shared_ptr<Content::ImageUrl> imageUrl_ {};
        // The non-empty text when type=text.
        shared_ptr<string> text_ {};
        // The content part type. Mobile Planner Agent user messages support text or image_url.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr && this->toolCallId_ == nullptr && this->toolCalls_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
      inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
      inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


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
      // The message content. Mobile Planner Agent supports text and multimodal content. Image URLs or base64 Data URLs are passed through to the Mobile Planner Agent model if it supports multimodal input.
      shared_ptr<vector<Messages::Content>> content_ {};
      // The message role: user, assistant, tool, system, or developer. system/developer is used for optional per-turn text instruction overrides. If omitted, the instructions from the instance configuration are used. Tool results use tool and are associated with tool_call_id.
      shared_ptr<string> role_ {};
      // Required when role=tool. Must match an id from the preceding assistant.tool_calls.
      shared_ptr<string> toolCallId_ {};
      // The list of function invocation entries that can be carried when role=assistant. Used for multi-turn tool invocation continuation.
      shared_ptr<vector<Messages::ToolCalls>> toolCalls_ {};
    };

    class ChatTemplateKwargs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChatTemplateKwargs& obj) { 
        DARABONBA_PTR_TO_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_TO_JSON(preserveThinking, preserveThinking_);
      };
      friend void from_json(const Darabonba::Json& j, ChatTemplateKwargs& obj) { 
        DARABONBA_PTR_FROM_JSON(enableThinking, enableThinking_);
        DARABONBA_PTR_FROM_JSON(preserveThinking, preserveThinking_);
      };
      ChatTemplateKwargs() = default ;
      ChatTemplateKwargs(const ChatTemplateKwargs &) = default ;
      ChatTemplateKwargs(ChatTemplateKwargs &&) = default ;
      ChatTemplateKwargs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChatTemplateKwargs() = default ;
      ChatTemplateKwargs& operator=(const ChatTemplateKwargs &) = default ;
      ChatTemplateKwargs& operator=(ChatTemplateKwargs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableThinking_ == nullptr
        && this->preserveThinking_ == nullptr; };
      // enableThinking Field Functions 
      bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
      void deleteEnableThinking() { this->enableThinking_ = nullptr;};
      inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
      inline ChatTemplateKwargs& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


      // preserveThinking Field Functions 
      bool hasPreserveThinking() const { return this->preserveThinking_ != nullptr;};
      void deletePreserveThinking() { this->preserveThinking_ = nullptr;};
      inline bool getPreserveThinking() const { DARABONBA_PTR_GET_DEFAULT(preserveThinking_, false) };
      inline ChatTemplateKwargs& setPreserveThinking(bool preserveThinking) { DARABONBA_PTR_SET_VALUE(preserveThinking_, preserveThinking) };


    protected:
      // Controls whether the model generates reasoning_content through chat_template_kwargs. This value is passed to the model used by the Mobile Planner Agent.
      shared_ptr<bool> enableThinking_ {};
      // Specifies whether the model preserves and reuses existing reasoning content in subsequent turns. Passed through as-is per vLLM/Qwen chat_template_kwargs.
      shared_ptr<bool> preserveThinking_ {};
    };

    virtual bool empty() const override { return this->allowedTokenIds_ == nullptr
        && this->badWords_ == nullptr && this->chatTemplateKwargs_ == nullptr && this->frequencyPenalty_ == nullptr && this->ignoreEos_ == nullptr && this->includeReasoning_ == nullptr
        && this->logprobs_ == nullptr && this->maxCompletionTokens_ == nullptr && this->maxTokens_ == nullptr && this->messages_ == nullptr && this->minP_ == nullptr
        && this->minTokens_ == nullptr && this->mmProcessorKwargs_ == nullptr && this->model_ == nullptr && this->n_ == nullptr && this->parallelToolCalls_ == nullptr
        && this->presencePenalty_ == nullptr && this->promptLogprobs_ == nullptr && this->reasoningEffort_ == nullptr && this->repetitionPenalty_ == nullptr && this->responseFormat_ == nullptr
        && this->seed_ == nullptr && this->skipSpecialTokens_ == nullptr && this->stop_ == nullptr && this->stopTokenIds_ == nullptr && this->stream_ == nullptr
        && this->streamOptions_ == nullptr && this->structuredOutputs_ == nullptr && this->temperature_ == nullptr && this->toolChoice_ == nullptr && this->tools_ == nullptr
        && this->topK_ == nullptr && this->topLogprobs_ == nullptr && this->topP_ == nullptr; };
    // allowedTokenIds Field Functions 
    bool hasAllowedTokenIds() const { return this->allowedTokenIds_ != nullptr;};
    void deleteAllowedTokenIds() { this->allowedTokenIds_ = nullptr;};
    inline const vector<int64_t> & getAllowedTokenIds() const { DARABONBA_PTR_GET_CONST(allowedTokenIds_, vector<int64_t>) };
    inline vector<int64_t> getAllowedTokenIds() { DARABONBA_PTR_GET(allowedTokenIds_, vector<int64_t>) };
    inline PaChatCompletionStreamRequest& setAllowedTokenIds(const vector<int64_t> & allowedTokenIds) { DARABONBA_PTR_SET_VALUE(allowedTokenIds_, allowedTokenIds) };
    inline PaChatCompletionStreamRequest& setAllowedTokenIds(vector<int64_t> && allowedTokenIds) { DARABONBA_PTR_SET_RVALUE(allowedTokenIds_, allowedTokenIds) };


    // badWords Field Functions 
    bool hasBadWords() const { return this->badWords_ != nullptr;};
    void deleteBadWords() { this->badWords_ = nullptr;};
    inline const vector<string> & getBadWords() const { DARABONBA_PTR_GET_CONST(badWords_, vector<string>) };
    inline vector<string> getBadWords() { DARABONBA_PTR_GET(badWords_, vector<string>) };
    inline PaChatCompletionStreamRequest& setBadWords(const vector<string> & badWords) { DARABONBA_PTR_SET_VALUE(badWords_, badWords) };
    inline PaChatCompletionStreamRequest& setBadWords(vector<string> && badWords) { DARABONBA_PTR_SET_RVALUE(badWords_, badWords) };


    // chatTemplateKwargs Field Functions 
    bool hasChatTemplateKwargs() const { return this->chatTemplateKwargs_ != nullptr;};
    void deleteChatTemplateKwargs() { this->chatTemplateKwargs_ = nullptr;};
    inline const PaChatCompletionStreamRequest::ChatTemplateKwargs & getChatTemplateKwargs() const { DARABONBA_PTR_GET_CONST(chatTemplateKwargs_, PaChatCompletionStreamRequest::ChatTemplateKwargs) };
    inline PaChatCompletionStreamRequest::ChatTemplateKwargs getChatTemplateKwargs() { DARABONBA_PTR_GET(chatTemplateKwargs_, PaChatCompletionStreamRequest::ChatTemplateKwargs) };
    inline PaChatCompletionStreamRequest& setChatTemplateKwargs(const PaChatCompletionStreamRequest::ChatTemplateKwargs & chatTemplateKwargs) { DARABONBA_PTR_SET_VALUE(chatTemplateKwargs_, chatTemplateKwargs) };
    inline PaChatCompletionStreamRequest& setChatTemplateKwargs(PaChatCompletionStreamRequest::ChatTemplateKwargs && chatTemplateKwargs) { DARABONBA_PTR_SET_RVALUE(chatTemplateKwargs_, chatTemplateKwargs) };


    // frequencyPenalty Field Functions 
    bool hasFrequencyPenalty() const { return this->frequencyPenalty_ != nullptr;};
    void deleteFrequencyPenalty() { this->frequencyPenalty_ = nullptr;};
    inline double getFrequencyPenalty() const { DARABONBA_PTR_GET_DEFAULT(frequencyPenalty_, 0.0) };
    inline PaChatCompletionStreamRequest& setFrequencyPenalty(double frequencyPenalty) { DARABONBA_PTR_SET_VALUE(frequencyPenalty_, frequencyPenalty) };


    // ignoreEos Field Functions 
    bool hasIgnoreEos() const { return this->ignoreEos_ != nullptr;};
    void deleteIgnoreEos() { this->ignoreEos_ = nullptr;};
    inline bool getIgnoreEos() const { DARABONBA_PTR_GET_DEFAULT(ignoreEos_, false) };
    inline PaChatCompletionStreamRequest& setIgnoreEos(bool ignoreEos) { DARABONBA_PTR_SET_VALUE(ignoreEos_, ignoreEos) };


    // includeReasoning Field Functions 
    bool hasIncludeReasoning() const { return this->includeReasoning_ != nullptr;};
    void deleteIncludeReasoning() { this->includeReasoning_ = nullptr;};
    inline bool getIncludeReasoning() const { DARABONBA_PTR_GET_DEFAULT(includeReasoning_, false) };
    inline PaChatCompletionStreamRequest& setIncludeReasoning(bool includeReasoning) { DARABONBA_PTR_SET_VALUE(includeReasoning_, includeReasoning) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline bool getLogprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, false) };
    inline PaChatCompletionStreamRequest& setLogprobs(bool logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    // maxCompletionTokens Field Functions 
    bool hasMaxCompletionTokens() const { return this->maxCompletionTokens_ != nullptr;};
    void deleteMaxCompletionTokens() { this->maxCompletionTokens_ = nullptr;};
    inline int64_t getMaxCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(maxCompletionTokens_, 0L) };
    inline PaChatCompletionStreamRequest& setMaxCompletionTokens(int64_t maxCompletionTokens) { DARABONBA_PTR_SET_VALUE(maxCompletionTokens_, maxCompletionTokens) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
    inline PaChatCompletionStreamRequest& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<PaChatCompletionStreamRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<PaChatCompletionStreamRequest::Messages>) };
    inline vector<PaChatCompletionStreamRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<PaChatCompletionStreamRequest::Messages>) };
    inline PaChatCompletionStreamRequest& setMessages(const vector<PaChatCompletionStreamRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline PaChatCompletionStreamRequest& setMessages(vector<PaChatCompletionStreamRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // minP Field Functions 
    bool hasMinP() const { return this->minP_ != nullptr;};
    void deleteMinP() { this->minP_ = nullptr;};
    inline double getMinP() const { DARABONBA_PTR_GET_DEFAULT(minP_, 0.0) };
    inline PaChatCompletionStreamRequest& setMinP(double minP) { DARABONBA_PTR_SET_VALUE(minP_, minP) };


    // minTokens Field Functions 
    bool hasMinTokens() const { return this->minTokens_ != nullptr;};
    void deleteMinTokens() { this->minTokens_ = nullptr;};
    inline int64_t getMinTokens() const { DARABONBA_PTR_GET_DEFAULT(minTokens_, 0L) };
    inline PaChatCompletionStreamRequest& setMinTokens(int64_t minTokens) { DARABONBA_PTR_SET_VALUE(minTokens_, minTokens) };


    // mmProcessorKwargs Field Functions 
    bool hasMmProcessorKwargs() const { return this->mmProcessorKwargs_ != nullptr;};
    void deleteMmProcessorKwargs() { this->mmProcessorKwargs_ = nullptr;};
    inline const PaChatCompletionStreamRequest::MmProcessorKwargs & getMmProcessorKwargs() const { DARABONBA_PTR_GET_CONST(mmProcessorKwargs_, PaChatCompletionStreamRequest::MmProcessorKwargs) };
    inline PaChatCompletionStreamRequest::MmProcessorKwargs getMmProcessorKwargs() { DARABONBA_PTR_GET(mmProcessorKwargs_, PaChatCompletionStreamRequest::MmProcessorKwargs) };
    inline PaChatCompletionStreamRequest& setMmProcessorKwargs(const PaChatCompletionStreamRequest::MmProcessorKwargs & mmProcessorKwargs) { DARABONBA_PTR_SET_VALUE(mmProcessorKwargs_, mmProcessorKwargs) };
    inline PaChatCompletionStreamRequest& setMmProcessorKwargs(PaChatCompletionStreamRequest::MmProcessorKwargs && mmProcessorKwargs) { DARABONBA_PTR_SET_RVALUE(mmProcessorKwargs_, mmProcessorKwargs) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline PaChatCompletionStreamRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int64_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
    inline PaChatCompletionStreamRequest& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // parallelToolCalls Field Functions 
    bool hasParallelToolCalls() const { return this->parallelToolCalls_ != nullptr;};
    void deleteParallelToolCalls() { this->parallelToolCalls_ = nullptr;};
    inline bool getParallelToolCalls() const { DARABONBA_PTR_GET_DEFAULT(parallelToolCalls_, false) };
    inline PaChatCompletionStreamRequest& setParallelToolCalls(bool parallelToolCalls) { DARABONBA_PTR_SET_VALUE(parallelToolCalls_, parallelToolCalls) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline double getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
    inline PaChatCompletionStreamRequest& setPresencePenalty(double presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // promptLogprobs Field Functions 
    bool hasPromptLogprobs() const { return this->promptLogprobs_ != nullptr;};
    void deletePromptLogprobs() { this->promptLogprobs_ = nullptr;};
    inline int64_t getPromptLogprobs() const { DARABONBA_PTR_GET_DEFAULT(promptLogprobs_, 0L) };
    inline PaChatCompletionStreamRequest& setPromptLogprobs(int64_t promptLogprobs) { DARABONBA_PTR_SET_VALUE(promptLogprobs_, promptLogprobs) };


    // reasoningEffort Field Functions 
    bool hasReasoningEffort() const { return this->reasoningEffort_ != nullptr;};
    void deleteReasoningEffort() { this->reasoningEffort_ = nullptr;};
    inline string getReasoningEffort() const { DARABONBA_PTR_GET_DEFAULT(reasoningEffort_, "") };
    inline PaChatCompletionStreamRequest& setReasoningEffort(string reasoningEffort) { DARABONBA_PTR_SET_VALUE(reasoningEffort_, reasoningEffort) };


    // repetitionPenalty Field Functions 
    bool hasRepetitionPenalty() const { return this->repetitionPenalty_ != nullptr;};
    void deleteRepetitionPenalty() { this->repetitionPenalty_ = nullptr;};
    inline double getRepetitionPenalty() const { DARABONBA_PTR_GET_DEFAULT(repetitionPenalty_, 0.0) };
    inline PaChatCompletionStreamRequest& setRepetitionPenalty(double repetitionPenalty) { DARABONBA_PTR_SET_VALUE(repetitionPenalty_, repetitionPenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline const PaChatCompletionStreamRequest::ResponseFormat & getResponseFormat() const { DARABONBA_PTR_GET_CONST(responseFormat_, PaChatCompletionStreamRequest::ResponseFormat) };
    inline PaChatCompletionStreamRequest::ResponseFormat getResponseFormat() { DARABONBA_PTR_GET(responseFormat_, PaChatCompletionStreamRequest::ResponseFormat) };
    inline PaChatCompletionStreamRequest& setResponseFormat(const PaChatCompletionStreamRequest::ResponseFormat & responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };
    inline PaChatCompletionStreamRequest& setResponseFormat(PaChatCompletionStreamRequest::ResponseFormat && responseFormat) { DARABONBA_PTR_SET_RVALUE(responseFormat_, responseFormat) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int64_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
    inline PaChatCompletionStreamRequest& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // skipSpecialTokens Field Functions 
    bool hasSkipSpecialTokens() const { return this->skipSpecialTokens_ != nullptr;};
    void deleteSkipSpecialTokens() { this->skipSpecialTokens_ = nullptr;};
    inline bool getSkipSpecialTokens() const { DARABONBA_PTR_GET_DEFAULT(skipSpecialTokens_, false) };
    inline PaChatCompletionStreamRequest& setSkipSpecialTokens(bool skipSpecialTokens) { DARABONBA_PTR_SET_VALUE(skipSpecialTokens_, skipSpecialTokens) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline const vector<string> & getStop() const { DARABONBA_PTR_GET_CONST(stop_, vector<string>) };
    inline vector<string> getStop() { DARABONBA_PTR_GET(stop_, vector<string>) };
    inline PaChatCompletionStreamRequest& setStop(const vector<string> & stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };
    inline PaChatCompletionStreamRequest& setStop(vector<string> && stop) { DARABONBA_PTR_SET_RVALUE(stop_, stop) };


    // stopTokenIds Field Functions 
    bool hasStopTokenIds() const { return this->stopTokenIds_ != nullptr;};
    void deleteStopTokenIds() { this->stopTokenIds_ = nullptr;};
    inline const vector<int64_t> & getStopTokenIds() const { DARABONBA_PTR_GET_CONST(stopTokenIds_, vector<int64_t>) };
    inline vector<int64_t> getStopTokenIds() { DARABONBA_PTR_GET(stopTokenIds_, vector<int64_t>) };
    inline PaChatCompletionStreamRequest& setStopTokenIds(const vector<int64_t> & stopTokenIds) { DARABONBA_PTR_SET_VALUE(stopTokenIds_, stopTokenIds) };
    inline PaChatCompletionStreamRequest& setStopTokenIds(vector<int64_t> && stopTokenIds) { DARABONBA_PTR_SET_RVALUE(stopTokenIds_, stopTokenIds) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline PaChatCompletionStreamRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // streamOptions Field Functions 
    bool hasStreamOptions() const { return this->streamOptions_ != nullptr;};
    void deleteStreamOptions() { this->streamOptions_ = nullptr;};
    inline const PaChatCompletionStreamRequest::StreamOptions & getStreamOptions() const { DARABONBA_PTR_GET_CONST(streamOptions_, PaChatCompletionStreamRequest::StreamOptions) };
    inline PaChatCompletionStreamRequest::StreamOptions getStreamOptions() { DARABONBA_PTR_GET(streamOptions_, PaChatCompletionStreamRequest::StreamOptions) };
    inline PaChatCompletionStreamRequest& setStreamOptions(const PaChatCompletionStreamRequest::StreamOptions & streamOptions) { DARABONBA_PTR_SET_VALUE(streamOptions_, streamOptions) };
    inline PaChatCompletionStreamRequest& setStreamOptions(PaChatCompletionStreamRequest::StreamOptions && streamOptions) { DARABONBA_PTR_SET_RVALUE(streamOptions_, streamOptions) };


    // structuredOutputs Field Functions 
    bool hasStructuredOutputs() const { return this->structuredOutputs_ != nullptr;};
    void deleteStructuredOutputs() { this->structuredOutputs_ = nullptr;};
    inline const PaChatCompletionStreamRequest::StructuredOutputs & getStructuredOutputs() const { DARABONBA_PTR_GET_CONST(structuredOutputs_, PaChatCompletionStreamRequest::StructuredOutputs) };
    inline PaChatCompletionStreamRequest::StructuredOutputs getStructuredOutputs() { DARABONBA_PTR_GET(structuredOutputs_, PaChatCompletionStreamRequest::StructuredOutputs) };
    inline PaChatCompletionStreamRequest& setStructuredOutputs(const PaChatCompletionStreamRequest::StructuredOutputs & structuredOutputs) { DARABONBA_PTR_SET_VALUE(structuredOutputs_, structuredOutputs) };
    inline PaChatCompletionStreamRequest& setStructuredOutputs(PaChatCompletionStreamRequest::StructuredOutputs && structuredOutputs) { DARABONBA_PTR_SET_RVALUE(structuredOutputs_, structuredOutputs) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline PaChatCompletionStreamRequest& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // toolChoice Field Functions 
    bool hasToolChoice() const { return this->toolChoice_ != nullptr;};
    void deleteToolChoice() { this->toolChoice_ = nullptr;};
    inline string getToolChoice() const { DARABONBA_PTR_GET_DEFAULT(toolChoice_, "") };
    inline PaChatCompletionStreamRequest& setToolChoice(string toolChoice) { DARABONBA_PTR_SET_VALUE(toolChoice_, toolChoice) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<PaChatCompletionStreamRequest::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<PaChatCompletionStreamRequest::Tools>) };
    inline vector<PaChatCompletionStreamRequest::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<PaChatCompletionStreamRequest::Tools>) };
    inline PaChatCompletionStreamRequest& setTools(const vector<PaChatCompletionStreamRequest::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline PaChatCompletionStreamRequest& setTools(vector<PaChatCompletionStreamRequest::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline PaChatCompletionStreamRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topLogprobs Field Functions 
    bool hasTopLogprobs() const { return this->topLogprobs_ != nullptr;};
    void deleteTopLogprobs() { this->topLogprobs_ = nullptr;};
    inline int64_t getTopLogprobs() const { DARABONBA_PTR_GET_DEFAULT(topLogprobs_, 0L) };
    inline PaChatCompletionStreamRequest& setTopLogprobs(int64_t topLogprobs) { DARABONBA_PTR_SET_VALUE(topLogprobs_, topLogprobs) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline PaChatCompletionStreamRequest& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    // The whitelist of token IDs allowed for generation.
    shared_ptr<vector<int64_t>> allowedTokenIds_ {};
    // The list of words or strings prohibited from generation.
    shared_ptr<vector<string>> badWords_ {};
    // The vLLM/OpenAI-Compatible template parameter object. Request values are merged with model defaults, with request keys taking precedence, and passed to the model as-is.
    shared_ptr<PaChatCompletionStreamRequest::ChatTemplateKwargs> chatTemplateKwargs_ {};
    // The frequency penalty parameter passed through to the Mobile Planner Agent model.
    shared_ptr<double> frequencyPenalty_ {};
    // Specifies whether to ignore EOS and continue generation.
    shared_ptr<bool> ignoreEos_ {};
    // Specifies whether to request reasoning content from the upstream. The actual capability depends on the model.
    shared_ptr<bool> includeReasoning_ {};
    // A model-compatible parameter with the JSON field name logprobs. Whether it is accepted and takes effect depends on the model used by the instance. The current Agent response does not provide token log probability details.
    shared_ptr<bool> logprobs_ {};
    // The maximum number of completion tokens. Must be greater than 0 if provided, and is passed as an OpenAI-compatible model parameter.
    shared_ptr<int64_t> maxCompletionTokens_ {};
    // The OpenAI-compatible maximum number of generated tokens. Must be greater than 0 if provided.
    shared_ptr<int64_t> maxTokens_ {};
    // The list of conversation messages. The first call can submit one turn or an existing multi-turn conversation. When continuing with an existing session ID, retain the complete and unmodified historical message prefix and append the current turn messages. Tool results are associated through role=tool and the corresponding tool_call_id.
    // 
    // This parameter is required.
    shared_ptr<vector<PaChatCompletionStreamRequest::Messages>> messages_ {};
    // The vLLM Min-P sampling parameter.
    shared_ptr<double> minP_ {};
    // The minimum number of tokens to generate.
    shared_ptr<int64_t> minTokens_ {};
    // The multimodal preprocessor parameters passed through to vLLM as-is by key.
    shared_ptr<PaChatCompletionStreamRequest::MmProcessorKwargs> mmProcessorKwargs_ {};
    // Reserved for OpenAI client compatibility. Ignored during routing. The actual model is determined by the published instance configuration. The model field in the response is always an empty string.
    shared_ptr<string> model_ {};
    // Set this parameter to 1. Whether the model accepts this parameter depends on the model. The current Mobile Planner Agent response does not return multiple candidate results. Do not use this parameter for multiple-candidate responses.
    shared_ptr<int64_t> n_ {};
    // Specifies whether the model is allowed to generate multiple tool calling requests in parallel. The model invokes tools concurrently when this parameter is enabled.
    shared_ptr<bool> parallelToolCalls_ {};
    // The presence penalty parameter, passed through to the Mobile Planner Agent model.
    shared_ptr<double> presencePenalty_ {};
    // A model compatibility parameter. The JSON field is prompt_logprobs. Whether the model accepts this parameter depends on the model. The current Agent response does not return probability details for input tokens.
    shared_ptr<int64_t> promptLogprobs_ {};
    // The OpenAI-compatible reasoning effort level, such as low, medium, or high.
    shared_ptr<string> reasoningEffort_ {};
    // The vLLM repetition penalty parameter.
    shared_ptr<double> repetitionPenalty_ {};
    // The structured response format, such as json_object or json_schema.
    shared_ptr<PaChatCompletionStreamRequest::ResponseFormat> responseFormat_ {};
    // The random seed.
    shared_ptr<int64_t> seed_ {};
    // Specifies whether to skip special tokens.
    shared_ptr<bool> skipSpecialTokens_ {};
    // The stop sequences. Compatible with a single string or an array of strings. This field is displayed in array format.
    shared_ptr<vector<string>> stop_ {};
    // The vLLM stop token ID list.
    shared_ptr<vector<int64_t>> stopTokenIds_ {};
    // Specifies whether to use SSE streaming responses. This parameter must be set to true for this operation.
    // 
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    // The OpenAI-compatible streaming options.
    shared_ptr<PaChatCompletionStreamRequest::StreamOptions> streamOptions_ {};
    // The vLLM structured output constraints.
    shared_ptr<PaChatCompletionStreamRequest::StructuredOutputs> structuredOutputs_ {};
    // The sampling temperature. Passed as an OpenAI-compatible model parameter to override the model default value.
    shared_ptr<double> temperature_ {};
    // The tool choice strategy. Valid values: auto, none, required, or a named selection supported by the model.
    shared_ptr<string> toolChoice_ {};
    // The array of function tool definitions available for this request. Mobile Planner Agent registers each named function in the runtime Toolkit and returns tool_calls in the streaming response.
    shared_ptr<vector<PaChatCompletionStreamRequest::Tools>> tools_ {};
    // The vLLM Top-K sampling parameter.
    shared_ptr<int64_t> topK_ {};
    // A model compatibility parameter. The JSON field is top_logprobs. Used for models that support this feature. The current Agent response does not provide candidate token probability details.
    shared_ptr<int64_t> topLogprobs_ {};
    // Top-P sampling parameter. Passed as an OpenAI-compatible model parameter to override the model default value.
    shared_ptr<double> topP_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
