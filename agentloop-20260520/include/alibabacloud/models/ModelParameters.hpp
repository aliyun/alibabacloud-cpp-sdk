// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_MODELPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ModelParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelParameters& obj) { 
      DARABONBA_PTR_TO_JSON(enableCacheControl, enableCacheControl_);
      DARABONBA_PTR_TO_JSON(enableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(extraBody, extraBody_);
      DARABONBA_PTR_TO_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_TO_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_TO_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_TO_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
      DARABONBA_PTR_TO_JSON(stopSequences, stopSequences_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(thinkingBudget, thinkingBudget_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, ModelParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(enableCacheControl, enableCacheControl_);
      DARABONBA_PTR_FROM_JSON(enableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(extraBody, extraBody_);
      DARABONBA_PTR_FROM_JSON(frequencyPenalty, frequencyPenalty_);
      DARABONBA_PTR_FROM_JSON(maxCompletionTokens, maxCompletionTokens_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(presencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(reasoningEffort, reasoningEffort_);
      DARABONBA_PTR_FROM_JSON(repetitionPenalty, repetitionPenalty_);
      DARABONBA_PTR_FROM_JSON(responseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
      DARABONBA_PTR_FROM_JSON(stopSequences, stopSequences_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(thinkingBudget, thinkingBudget_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    ModelParameters() = default ;
    ModelParameters(const ModelParameters &) = default ;
    ModelParameters(ModelParameters &&) = default ;
    ModelParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelParameters() = default ;
    ModelParameters& operator=(const ModelParameters &) = default ;
    ModelParameters& operator=(ModelParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseFormat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseFormat& obj) { 
        DARABONBA_PTR_TO_JSON(jsonSchema, jsonSchema_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseFormat& obj) { 
        DARABONBA_PTR_FROM_JSON(jsonSchema, jsonSchema_);
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
      class JsonSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JsonSchema& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(schema, schema_);
          DARABONBA_PTR_TO_JSON(strict, strict_);
        };
        friend void from_json(const Darabonba::Json& j, JsonSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(schema, schema_);
          DARABONBA_PTR_FROM_JSON(strict, strict_);
        };
        JsonSchema() = default ;
        JsonSchema(const JsonSchema &) = default ;
        JsonSchema(JsonSchema &&) = default ;
        JsonSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JsonSchema() = default ;
        JsonSchema& operator=(const JsonSchema &) = default ;
        JsonSchema& operator=(JsonSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->schema_ == nullptr && this->strict_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline JsonSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline JsonSchema& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // strict Field Functions 
        bool hasStrict() const { return this->strict_ != nullptr;};
        void deleteStrict() { this->strict_ = nullptr;};
        inline bool getStrict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
        inline JsonSchema& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


      protected:
        // The schema name.
        shared_ptr<string> name_ {};
        // The JSON Schema definition, which is a serialized string of a JSON object.
        shared_ptr<string> schema_ {};
        // Specifies whether to strictly adhere to the schema structure. Set this to true.
        shared_ptr<bool> strict_ {};
      };

      virtual bool empty() const override { return this->jsonSchema_ == nullptr
        && this->type_ == nullptr; };
      // jsonSchema Field Functions 
      bool hasJsonSchema() const { return this->jsonSchema_ != nullptr;};
      void deleteJsonSchema() { this->jsonSchema_ = nullptr;};
      inline const ResponseFormat::JsonSchema & getJsonSchema() const { DARABONBA_PTR_GET_CONST(jsonSchema_, ResponseFormat::JsonSchema) };
      inline ResponseFormat::JsonSchema getJsonSchema() { DARABONBA_PTR_GET(jsonSchema_, ResponseFormat::JsonSchema) };
      inline ResponseFormat& setJsonSchema(const ResponseFormat::JsonSchema & jsonSchema) { DARABONBA_PTR_SET_VALUE(jsonSchema_, jsonSchema) };
      inline ResponseFormat& setJsonSchema(ResponseFormat::JsonSchema && jsonSchema) { DARABONBA_PTR_SET_RVALUE(jsonSchema_, jsonSchema) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResponseFormat& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The JSON Schema constraint, which is required when the type is json_schema.
      shared_ptr<ResponseFormat::JsonSchema> jsonSchema_ {};
      // The format type. Valid values: text, json_object, and json_schema. When using json_object, the prompt must explicitly request JSON output.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->enableCacheControl_ == nullptr
        && this->enableThinking_ == nullptr && this->extraBody_ == nullptr && this->frequencyPenalty_ == nullptr && this->maxCompletionTokens_ == nullptr && this->maxTokens_ == nullptr
        && this->presencePenalty_ == nullptr && this->reasoningEffort_ == nullptr && this->repetitionPenalty_ == nullptr && this->responseFormat_ == nullptr && this->seed_ == nullptr
        && this->stopSequences_ == nullptr && this->temperature_ == nullptr && this->thinkingBudget_ == nullptr && this->topK_ == nullptr && this->topP_ == nullptr; };
    // enableCacheControl Field Functions 
    bool hasEnableCacheControl() const { return this->enableCacheControl_ != nullptr;};
    void deleteEnableCacheControl() { this->enableCacheControl_ = nullptr;};
    inline bool getEnableCacheControl() const { DARABONBA_PTR_GET_DEFAULT(enableCacheControl_, false) };
    inline ModelParameters& setEnableCacheControl(bool enableCacheControl) { DARABONBA_PTR_SET_VALUE(enableCacheControl_, enableCacheControl) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline ModelParameters& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // extraBody Field Functions 
    bool hasExtraBody() const { return this->extraBody_ != nullptr;};
    void deleteExtraBody() { this->extraBody_ = nullptr;};
    inline string getExtraBody() const { DARABONBA_PTR_GET_DEFAULT(extraBody_, "") };
    inline ModelParameters& setExtraBody(string extraBody) { DARABONBA_PTR_SET_VALUE(extraBody_, extraBody) };


    // frequencyPenalty Field Functions 
    bool hasFrequencyPenalty() const { return this->frequencyPenalty_ != nullptr;};
    void deleteFrequencyPenalty() { this->frequencyPenalty_ = nullptr;};
    inline float getFrequencyPenalty() const { DARABONBA_PTR_GET_DEFAULT(frequencyPenalty_, 0.0) };
    inline ModelParameters& setFrequencyPenalty(float frequencyPenalty) { DARABONBA_PTR_SET_VALUE(frequencyPenalty_, frequencyPenalty) };


    // maxCompletionTokens Field Functions 
    bool hasMaxCompletionTokens() const { return this->maxCompletionTokens_ != nullptr;};
    void deleteMaxCompletionTokens() { this->maxCompletionTokens_ = nullptr;};
    inline int32_t getMaxCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(maxCompletionTokens_, 0) };
    inline ModelParameters& setMaxCompletionTokens(int32_t maxCompletionTokens) { DARABONBA_PTR_SET_VALUE(maxCompletionTokens_, maxCompletionTokens) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
    inline ModelParameters& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline float getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, 0.0) };
    inline ModelParameters& setPresencePenalty(float presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // reasoningEffort Field Functions 
    bool hasReasoningEffort() const { return this->reasoningEffort_ != nullptr;};
    void deleteReasoningEffort() { this->reasoningEffort_ = nullptr;};
    inline string getReasoningEffort() const { DARABONBA_PTR_GET_DEFAULT(reasoningEffort_, "") };
    inline ModelParameters& setReasoningEffort(string reasoningEffort) { DARABONBA_PTR_SET_VALUE(reasoningEffort_, reasoningEffort) };


    // repetitionPenalty Field Functions 
    bool hasRepetitionPenalty() const { return this->repetitionPenalty_ != nullptr;};
    void deleteRepetitionPenalty() { this->repetitionPenalty_ = nullptr;};
    inline double getRepetitionPenalty() const { DARABONBA_PTR_GET_DEFAULT(repetitionPenalty_, 0.0) };
    inline ModelParameters& setRepetitionPenalty(double repetitionPenalty) { DARABONBA_PTR_SET_VALUE(repetitionPenalty_, repetitionPenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline const ModelParameters::ResponseFormat & getResponseFormat() const { DARABONBA_PTR_GET_CONST(responseFormat_, ModelParameters::ResponseFormat) };
    inline ModelParameters::ResponseFormat getResponseFormat() { DARABONBA_PTR_GET(responseFormat_, ModelParameters::ResponseFormat) };
    inline ModelParameters& setResponseFormat(const ModelParameters::ResponseFormat & responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };
    inline ModelParameters& setResponseFormat(ModelParameters::ResponseFormat && responseFormat) { DARABONBA_PTR_SET_RVALUE(responseFormat_, responseFormat) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline ModelParameters& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // stopSequences Field Functions 
    bool hasStopSequences() const { return this->stopSequences_ != nullptr;};
    void deleteStopSequences() { this->stopSequences_ = nullptr;};
    inline const vector<string> & getStopSequences() const { DARABONBA_PTR_GET_CONST(stopSequences_, vector<string>) };
    inline vector<string> getStopSequences() { DARABONBA_PTR_GET(stopSequences_, vector<string>) };
    inline ModelParameters& setStopSequences(const vector<string> & stopSequences) { DARABONBA_PTR_SET_VALUE(stopSequences_, stopSequences) };
    inline ModelParameters& setStopSequences(vector<string> && stopSequences) { DARABONBA_PTR_SET_RVALUE(stopSequences_, stopSequences) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline ModelParameters& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // thinkingBudget Field Functions 
    bool hasThinkingBudget() const { return this->thinkingBudget_ != nullptr;};
    void deleteThinkingBudget() { this->thinkingBudget_ = nullptr;};
    inline int32_t getThinkingBudget() const { DARABONBA_PTR_GET_DEFAULT(thinkingBudget_, 0) };
    inline ModelParameters& setThinkingBudget(int32_t thinkingBudget) { DARABONBA_PTR_SET_VALUE(thinkingBudget_, thinkingBudget) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ModelParameters& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline ModelParameters& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    // Specifies whether to enable explicit caching for system messages.
    shared_ptr<bool> enableCacheControl_ {};
    // Specifies whether to enable thinking mode. This takes effect only for hybrid thinking models and defaults to false if not specified.
    shared_ptr<bool> enableThinking_ {};
    // The extended parameters, which are a serialized string of a JSON object. These are merged into the top level of the model request body to pass through other Model Studio parameters.
    shared_ptr<string> extraBody_ {};
    // The frequency penalty where positive values reduce repetition, with a range of -2.0 to 2.0.
    shared_ptr<float> frequencyPenalty_ {};
    // The maximum number of output tokens, including the chain-of-thought and the response. This is recommended for thinking models.
    shared_ptr<int32_t> maxCompletionTokens_ {};
    // The maximum number of output tokens.
    shared_ptr<int64_t> maxTokens_ {};
    // The presence penalty where positive values encourage new topics, with a range of -2.0 to 2.0.
    shared_ptr<float> presencePenalty_ {};
    // The reasoning effort level. This takes effect only when thinking mode is enabled. For the Qwen3.8 series, valid values are low, medium, and xhigh. This cannot be set simultaneously with thinkingBudget.
    shared_ptr<string> reasoningEffort_ {};
    // The repetition penalty that controls the repetition of consecutive sequences. The value must be greater than 0. A value of 1.0 indicates no penalty, and a larger value results in less repetition.
    shared_ptr<double> repetitionPenalty_ {};
    // The response content format, which defaults to text if not specified.
    shared_ptr<ModelParameters::ResponseFormat> responseFormat_ {};
    // The random seed, with a range of 0 to 2147483647, which attempts to return the same result for the same input and parameters.
    shared_ptr<int32_t> seed_ {};
    // The stop sequences that immediately halt generation when encountered.
    shared_ptr<vector<string>> stopSequences_ {};
    // The temperature parameter that controls the randomness of the output, with a range of 0 to 2.
    shared_ptr<float> temperature_ {};
    // The maximum number of tokens for the thinking process. This takes effect only when thinking mode is enabled and cannot be set simultaneously with reasoningEffort.
    shared_ptr<int32_t> thinkingBudget_ {};
    // The Top K sampling parameter, with a range of 1 to 100.
    shared_ptr<int32_t> topK_ {};
    // The Top P sampling parameter, with a range of 0 to 1.
    shared_ptr<float> topP_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
