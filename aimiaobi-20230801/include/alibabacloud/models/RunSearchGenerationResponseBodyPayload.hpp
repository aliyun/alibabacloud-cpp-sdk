// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunSearchGenerationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunSearchGenerationResponseBodyPayload() = default ;
    RunSearchGenerationResponseBodyPayload(const RunSearchGenerationResponseBodyPayload &) = default ;
    RunSearchGenerationResponseBodyPayload(RunSearchGenerationResponseBodyPayload &&) = default ;
    RunSearchGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationResponseBodyPayload() = default ;
    RunSearchGenerationResponseBodyPayload& operator=(const RunSearchGenerationResponseBodyPayload &) = default ;
    RunSearchGenerationResponseBodyPayload& operator=(RunSearchGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunSearchGenerationResponseBodyPayloadOutput) };
    inline Models::RunSearchGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunSearchGenerationResponseBodyPayloadOutput) };
    inline RunSearchGenerationResponseBodyPayload& setOutput(const Models::RunSearchGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunSearchGenerationResponseBodyPayload& setOutput(Models::RunSearchGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunSearchGenerationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunSearchGenerationResponseBodyPayloadUsage) };
    inline Models::RunSearchGenerationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunSearchGenerationResponseBodyPayloadUsage) };
    inline RunSearchGenerationResponseBodyPayload& setUsage(const Models::RunSearchGenerationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunSearchGenerationResponseBodyPayload& setUsage(Models::RunSearchGenerationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunSearchGenerationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
