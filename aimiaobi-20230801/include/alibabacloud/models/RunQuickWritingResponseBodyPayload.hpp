// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNQUICKWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNQUICKWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunQuickWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunQuickWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunQuickWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunQuickWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunQuickWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunQuickWritingResponseBodyPayload() = default ;
    RunQuickWritingResponseBodyPayload(const RunQuickWritingResponseBodyPayload &) = default ;
    RunQuickWritingResponseBodyPayload(RunQuickWritingResponseBodyPayload &&) = default ;
    RunQuickWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunQuickWritingResponseBodyPayload() = default ;
    RunQuickWritingResponseBodyPayload& operator=(const RunQuickWritingResponseBodyPayload &) = default ;
    RunQuickWritingResponseBodyPayload& operator=(RunQuickWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunQuickWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunQuickWritingResponseBodyPayloadOutput) };
    inline Models::RunQuickWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunQuickWritingResponseBodyPayloadOutput) };
    inline RunQuickWritingResponseBodyPayload& setOutput(const Models::RunQuickWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunQuickWritingResponseBodyPayload& setOutput(Models::RunQuickWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunQuickWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunQuickWritingResponseBodyPayloadUsage) };
    inline Models::RunQuickWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunQuickWritingResponseBodyPayloadUsage) };
    inline RunQuickWritingResponseBodyPayload& setUsage(const Models::RunQuickWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunQuickWritingResponseBodyPayload& setUsage(Models::RunQuickWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunQuickWritingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunQuickWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
