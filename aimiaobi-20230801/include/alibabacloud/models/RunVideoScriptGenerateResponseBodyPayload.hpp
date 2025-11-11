// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOSCRIPTGENERATERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOSCRIPTGENERATERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoScriptGenerateResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunVideoScriptGenerateResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunVideoScriptGenerateResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoScriptGenerateResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoScriptGenerateResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunVideoScriptGenerateResponseBodyPayload() = default ;
    RunVideoScriptGenerateResponseBodyPayload(const RunVideoScriptGenerateResponseBodyPayload &) = default ;
    RunVideoScriptGenerateResponseBodyPayload(RunVideoScriptGenerateResponseBodyPayload &&) = default ;
    RunVideoScriptGenerateResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoScriptGenerateResponseBodyPayload() = default ;
    RunVideoScriptGenerateResponseBodyPayload& operator=(const RunVideoScriptGenerateResponseBodyPayload &) = default ;
    RunVideoScriptGenerateResponseBodyPayload& operator=(RunVideoScriptGenerateResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunVideoScriptGenerateResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunVideoScriptGenerateResponseBodyPayloadOutput) };
    inline Models::RunVideoScriptGenerateResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunVideoScriptGenerateResponseBodyPayloadOutput) };
    inline RunVideoScriptGenerateResponseBodyPayload& setOutput(const Models::RunVideoScriptGenerateResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunVideoScriptGenerateResponseBodyPayload& setOutput(Models::RunVideoScriptGenerateResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoScriptGenerateResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoScriptGenerateResponseBodyPayloadUsage) };
    inline Models::RunVideoScriptGenerateResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoScriptGenerateResponseBodyPayloadUsage) };
    inline RunVideoScriptGenerateResponseBodyPayload& setUsage(const Models::RunVideoScriptGenerateResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoScriptGenerateResponseBodyPayload& setUsage(Models::RunVideoScriptGenerateResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunVideoScriptGenerateResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunVideoScriptGenerateResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
