// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITETONEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITETONEGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWriteToneGenerationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunWriteToneGenerationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWriteToneGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWriteToneGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunWriteToneGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunWriteToneGenerationResponseBodyPayload() = default ;
    RunWriteToneGenerationResponseBodyPayload(const RunWriteToneGenerationResponseBodyPayload &) = default ;
    RunWriteToneGenerationResponseBodyPayload(RunWriteToneGenerationResponseBodyPayload &&) = default ;
    RunWriteToneGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWriteToneGenerationResponseBodyPayload() = default ;
    RunWriteToneGenerationResponseBodyPayload& operator=(const RunWriteToneGenerationResponseBodyPayload &) = default ;
    RunWriteToneGenerationResponseBodyPayload& operator=(RunWriteToneGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunWriteToneGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunWriteToneGenerationResponseBodyPayloadOutput) };
    inline Models::RunWriteToneGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunWriteToneGenerationResponseBodyPayloadOutput) };
    inline RunWriteToneGenerationResponseBodyPayload& setOutput(const Models::RunWriteToneGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunWriteToneGenerationResponseBodyPayload& setOutput(Models::RunWriteToneGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunWriteToneGenerationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunWriteToneGenerationResponseBodyPayloadUsage) };
    inline Models::RunWriteToneGenerationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunWriteToneGenerationResponseBodyPayloadUsage) };
    inline RunWriteToneGenerationResponseBodyPayload& setUsage(const Models::RunWriteToneGenerationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunWriteToneGenerationResponseBodyPayload& setUsage(Models::RunWriteToneGenerationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunWriteToneGenerationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunWriteToneGenerationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
