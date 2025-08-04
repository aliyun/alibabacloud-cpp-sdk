// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNKEYWORDSEXTRACTIONGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNKEYWORDSEXTRACTIONGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunKeywordsExtractionGenerationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunKeywordsExtractionGenerationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunKeywordsExtractionGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunKeywordsExtractionGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunKeywordsExtractionGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunKeywordsExtractionGenerationResponseBodyPayload() = default ;
    RunKeywordsExtractionGenerationResponseBodyPayload(const RunKeywordsExtractionGenerationResponseBodyPayload &) = default ;
    RunKeywordsExtractionGenerationResponseBodyPayload(RunKeywordsExtractionGenerationResponseBodyPayload &&) = default ;
    RunKeywordsExtractionGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunKeywordsExtractionGenerationResponseBodyPayload() = default ;
    RunKeywordsExtractionGenerationResponseBodyPayload& operator=(const RunKeywordsExtractionGenerationResponseBodyPayload &) = default ;
    RunKeywordsExtractionGenerationResponseBodyPayload& operator=(RunKeywordsExtractionGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput) };
    inline Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput) };
    inline RunKeywordsExtractionGenerationResponseBodyPayload& setOutput(const Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunKeywordsExtractionGenerationResponseBodyPayload& setOutput(Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage) };
    inline Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage) };
    inline RunKeywordsExtractionGenerationResponseBodyPayload& setUsage(const Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunKeywordsExtractionGenerationResponseBodyPayload& setUsage(Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunKeywordsExtractionGenerationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunKeywordsExtractionGenerationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
