// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCWASHINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocWashingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocWashingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocWashingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocWashingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocWashingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocWashingResponseBodyPayload() = default ;
    RunDocWashingResponseBodyPayload(const RunDocWashingResponseBodyPayload &) = default ;
    RunDocWashingResponseBodyPayload(RunDocWashingResponseBodyPayload &&) = default ;
    RunDocWashingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocWashingResponseBodyPayload() = default ;
    RunDocWashingResponseBodyPayload& operator=(const RunDocWashingResponseBodyPayload &) = default ;
    RunDocWashingResponseBodyPayload& operator=(RunDocWashingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocWashingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocWashingResponseBodyPayloadOutput) };
    inline Models::RunDocWashingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocWashingResponseBodyPayloadOutput) };
    inline RunDocWashingResponseBodyPayload& setOutput(const Models::RunDocWashingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocWashingResponseBodyPayload& setOutput(Models::RunDocWashingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocWashingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocWashingResponseBodyPayloadUsage) };
    inline Models::RunDocWashingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocWashingResponseBodyPayloadUsage) };
    inline RunDocWashingResponseBodyPayload& setUsage(const Models::RunDocWashingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocWashingResponseBodyPayload& setUsage(Models::RunDocWashingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocWashingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocWashingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
