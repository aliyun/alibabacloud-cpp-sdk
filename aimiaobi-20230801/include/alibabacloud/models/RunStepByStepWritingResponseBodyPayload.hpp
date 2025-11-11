// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSTEPBYSTEPWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunStepByStepWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStepByStepWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStepByStepWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunStepByStepWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunStepByStepWritingResponseBodyPayload() = default ;
    RunStepByStepWritingResponseBodyPayload(const RunStepByStepWritingResponseBodyPayload &) = default ;
    RunStepByStepWritingResponseBodyPayload(RunStepByStepWritingResponseBodyPayload &&) = default ;
    RunStepByStepWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStepByStepWritingResponseBodyPayload() = default ;
    RunStepByStepWritingResponseBodyPayload& operator=(const RunStepByStepWritingResponseBodyPayload &) = default ;
    RunStepByStepWritingResponseBodyPayload& operator=(RunStepByStepWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunStepByStepWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunStepByStepWritingResponseBodyPayloadOutput) };
    inline Models::RunStepByStepWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunStepByStepWritingResponseBodyPayloadOutput) };
    inline RunStepByStepWritingResponseBodyPayload& setOutput(const Models::RunStepByStepWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunStepByStepWritingResponseBodyPayload& setOutput(Models::RunStepByStepWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunStepByStepWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunStepByStepWritingResponseBodyPayloadUsage) };
    inline Models::RunStepByStepWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunStepByStepWritingResponseBodyPayloadUsage) };
    inline RunStepByStepWritingResponseBodyPayload& setUsage(const Models::RunStepByStepWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunStepByStepWritingResponseBodyPayload& setUsage(Models::RunStepByStepWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunStepByStepWritingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunStepByStepWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
