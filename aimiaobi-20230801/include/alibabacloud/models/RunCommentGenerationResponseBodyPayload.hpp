// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCommentGenerationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunCommentGenerationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCommentGenerationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommentGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommentGenerationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunCommentGenerationResponseBodyPayload() = default ;
    RunCommentGenerationResponseBodyPayload(const RunCommentGenerationResponseBodyPayload &) = default ;
    RunCommentGenerationResponseBodyPayload(RunCommentGenerationResponseBodyPayload &&) = default ;
    RunCommentGenerationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommentGenerationResponseBodyPayload() = default ;
    RunCommentGenerationResponseBodyPayload& operator=(const RunCommentGenerationResponseBodyPayload &) = default ;
    RunCommentGenerationResponseBodyPayload& operator=(RunCommentGenerationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunCommentGenerationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunCommentGenerationResponseBodyPayloadOutput) };
    inline Models::RunCommentGenerationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunCommentGenerationResponseBodyPayloadOutput) };
    inline RunCommentGenerationResponseBodyPayload& setOutput(const Models::RunCommentGenerationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunCommentGenerationResponseBodyPayload& setOutput(Models::RunCommentGenerationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunCommentGenerationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunCommentGenerationResponseBodyPayloadUsage) };
    inline Models::RunCommentGenerationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunCommentGenerationResponseBodyPayloadUsage) };
    inline RunCommentGenerationResponseBodyPayload& setUsage(const Models::RunCommentGenerationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunCommentGenerationResponseBodyPayload& setUsage(Models::RunCommentGenerationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunCommentGenerationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunCommentGenerationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
