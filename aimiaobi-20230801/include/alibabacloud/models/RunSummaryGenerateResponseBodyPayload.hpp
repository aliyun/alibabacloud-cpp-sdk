// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSUMMARYGENERATERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSUMMARYGENERATERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSummaryGenerateResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunSummaryGenerateResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSummaryGenerateResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSummaryGenerateResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunSummaryGenerateResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunSummaryGenerateResponseBodyPayload() = default ;
    RunSummaryGenerateResponseBodyPayload(const RunSummaryGenerateResponseBodyPayload &) = default ;
    RunSummaryGenerateResponseBodyPayload(RunSummaryGenerateResponseBodyPayload &&) = default ;
    RunSummaryGenerateResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSummaryGenerateResponseBodyPayload() = default ;
    RunSummaryGenerateResponseBodyPayload& operator=(const RunSummaryGenerateResponseBodyPayload &) = default ;
    RunSummaryGenerateResponseBodyPayload& operator=(RunSummaryGenerateResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunSummaryGenerateResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunSummaryGenerateResponseBodyPayloadOutput) };
    inline Models::RunSummaryGenerateResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunSummaryGenerateResponseBodyPayloadOutput) };
    inline RunSummaryGenerateResponseBodyPayload& setOutput(const Models::RunSummaryGenerateResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunSummaryGenerateResponseBodyPayload& setOutput(Models::RunSummaryGenerateResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunSummaryGenerateResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunSummaryGenerateResponseBodyPayloadUsage) };
    inline Models::RunSummaryGenerateResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunSummaryGenerateResponseBodyPayloadUsage) };
    inline RunSummaryGenerateResponseBodyPayload& setUsage(const Models::RunSummaryGenerateResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunSummaryGenerateResponseBodyPayload& setUsage(Models::RunSummaryGenerateResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunSummaryGenerateResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunSummaryGenerateResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
