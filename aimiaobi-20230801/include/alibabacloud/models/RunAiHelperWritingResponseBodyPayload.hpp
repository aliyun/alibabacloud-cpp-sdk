// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNAIHELPERWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunAiHelperWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunAiHelperWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAiHelperWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAiHelperWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunAiHelperWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunAiHelperWritingResponseBodyPayload() = default ;
    RunAiHelperWritingResponseBodyPayload(const RunAiHelperWritingResponseBodyPayload &) = default ;
    RunAiHelperWritingResponseBodyPayload(RunAiHelperWritingResponseBodyPayload &&) = default ;
    RunAiHelperWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAiHelperWritingResponseBodyPayload() = default ;
    RunAiHelperWritingResponseBodyPayload& operator=(const RunAiHelperWritingResponseBodyPayload &) = default ;
    RunAiHelperWritingResponseBodyPayload& operator=(RunAiHelperWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunAiHelperWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunAiHelperWritingResponseBodyPayloadOutput) };
    inline Models::RunAiHelperWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunAiHelperWritingResponseBodyPayloadOutput) };
    inline RunAiHelperWritingResponseBodyPayload& setOutput(const Models::RunAiHelperWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunAiHelperWritingResponseBodyPayload& setOutput(Models::RunAiHelperWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunAiHelperWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunAiHelperWritingResponseBodyPayloadUsage) };
    inline Models::RunAiHelperWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunAiHelperWritingResponseBodyPayloadUsage) };
    inline RunAiHelperWritingResponseBodyPayload& setUsage(const Models::RunAiHelperWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunAiHelperWritingResponseBodyPayload& setUsage(Models::RunAiHelperWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // AI生成的写作内容
    std::shared_ptr<Models::RunAiHelperWritingResponseBodyPayloadOutput> output_ = nullptr;
    // 本次请求的Token消耗统计
    std::shared_ptr<Models::RunAiHelperWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
