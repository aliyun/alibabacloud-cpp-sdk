// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNMULTIDOCINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunMultiDocIntroductionResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunMultiDocIntroductionResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunMultiDocIntroductionResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMultiDocIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunMultiDocIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunMultiDocIntroductionResponseBodyPayload() = default ;
    RunMultiDocIntroductionResponseBodyPayload(const RunMultiDocIntroductionResponseBodyPayload &) = default ;
    RunMultiDocIntroductionResponseBodyPayload(RunMultiDocIntroductionResponseBodyPayload &&) = default ;
    RunMultiDocIntroductionResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMultiDocIntroductionResponseBodyPayload() = default ;
    RunMultiDocIntroductionResponseBodyPayload& operator=(const RunMultiDocIntroductionResponseBodyPayload &) = default ;
    RunMultiDocIntroductionResponseBodyPayload& operator=(RunMultiDocIntroductionResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunMultiDocIntroductionResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunMultiDocIntroductionResponseBodyPayloadOutput) };
    inline Models::RunMultiDocIntroductionResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunMultiDocIntroductionResponseBodyPayloadOutput) };
    inline RunMultiDocIntroductionResponseBodyPayload& setOutput(const Models::RunMultiDocIntroductionResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunMultiDocIntroductionResponseBodyPayload& setOutput(Models::RunMultiDocIntroductionResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunMultiDocIntroductionResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunMultiDocIntroductionResponseBodyPayloadUsage) };
    inline Models::RunMultiDocIntroductionResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunMultiDocIntroductionResponseBodyPayloadUsage) };
    inline RunMultiDocIntroductionResponseBodyPayload& setUsage(const Models::RunMultiDocIntroductionResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunMultiDocIntroductionResponseBodyPayload& setUsage(Models::RunMultiDocIntroductionResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunMultiDocIntroductionResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunMultiDocIntroductionResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
