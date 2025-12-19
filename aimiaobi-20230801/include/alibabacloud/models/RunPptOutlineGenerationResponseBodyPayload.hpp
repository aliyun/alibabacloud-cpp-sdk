// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPPTOUTLINEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNPPTOUTLINEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunPptOutlineGenerationResponseBodyPayloadOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunPptOutlineGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPptOutlineGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, RunPptOutlineGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    RunPptOutlineGenerationResponseBodyPayload() = default ;
    RunPptOutlineGenerationResponseBodyPayload(const RunPptOutlineGenerationResponseBodyPayload &) = default ;
    RunPptOutlineGenerationResponseBodyPayload(RunPptOutlineGenerationResponseBodyPayload &&) = default ;
    RunPptOutlineGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPptOutlineGenerationResponseBodyPayload() = default ;
    RunPptOutlineGenerationResponseBodyPayload& operator=(const RunPptOutlineGenerationResponseBodyPayload &) = default ;
    RunPptOutlineGenerationResponseBodyPayload& operator=(RunPptOutlineGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunPptOutlineGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunPptOutlineGenerationResponseBodyPayloadOutput) };
    inline Models::RunPptOutlineGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunPptOutlineGenerationResponseBodyPayloadOutput) };
    inline RunPptOutlineGenerationResponseBodyPayload& setOutput(const Models::RunPptOutlineGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunPptOutlineGenerationResponseBodyPayload& setOutput(Models::RunPptOutlineGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


  protected:
    std::shared_ptr<Models::RunPptOutlineGenerationResponseBodyPayloadOutput> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
