// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTINUECONTENTRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTINUECONTENTRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContinueContentResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunContinueContentResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunContinueContentResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContinueContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunContinueContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunContinueContentResponseBodyPayload() = default ;
    RunContinueContentResponseBodyPayload(const RunContinueContentResponseBodyPayload &) = default ;
    RunContinueContentResponseBodyPayload(RunContinueContentResponseBodyPayload &&) = default ;
    RunContinueContentResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContinueContentResponseBodyPayload() = default ;
    RunContinueContentResponseBodyPayload& operator=(const RunContinueContentResponseBodyPayload &) = default ;
    RunContinueContentResponseBodyPayload& operator=(RunContinueContentResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunContinueContentResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunContinueContentResponseBodyPayloadOutput) };
    inline Models::RunContinueContentResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunContinueContentResponseBodyPayloadOutput) };
    inline RunContinueContentResponseBodyPayload& setOutput(const Models::RunContinueContentResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunContinueContentResponseBodyPayload& setOutput(Models::RunContinueContentResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunContinueContentResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunContinueContentResponseBodyPayloadUsage) };
    inline Models::RunContinueContentResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunContinueContentResponseBodyPayloadUsage) };
    inline RunContinueContentResponseBodyPayload& setUsage(const Models::RunContinueContentResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunContinueContentResponseBodyPayload& setUsage(Models::RunContinueContentResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunContinueContentResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunContinueContentResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
