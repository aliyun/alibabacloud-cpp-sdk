// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTranslateGenerationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunTranslateGenerationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTranslateGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTranslateGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunTranslateGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunTranslateGenerationResponseBodyPayload() = default ;
    RunTranslateGenerationResponseBodyPayload(const RunTranslateGenerationResponseBodyPayload &) = default ;
    RunTranslateGenerationResponseBodyPayload(RunTranslateGenerationResponseBodyPayload &&) = default ;
    RunTranslateGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTranslateGenerationResponseBodyPayload() = default ;
    RunTranslateGenerationResponseBodyPayload& operator=(const RunTranslateGenerationResponseBodyPayload &) = default ;
    RunTranslateGenerationResponseBodyPayload& operator=(RunTranslateGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunTranslateGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunTranslateGenerationResponseBodyPayloadOutput) };
    inline Models::RunTranslateGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunTranslateGenerationResponseBodyPayloadOutput) };
    inline RunTranslateGenerationResponseBodyPayload& setOutput(const Models::RunTranslateGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunTranslateGenerationResponseBodyPayload& setOutput(Models::RunTranslateGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunTranslateGenerationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunTranslateGenerationResponseBodyPayloadUsage) };
    inline Models::RunTranslateGenerationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunTranslateGenerationResponseBodyPayloadUsage) };
    inline RunTranslateGenerationResponseBodyPayload& setUsage(const Models::RunTranslateGenerationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunTranslateGenerationResponseBodyPayload& setUsage(Models::RunTranslateGenerationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunTranslateGenerationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunTranslateGenerationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
