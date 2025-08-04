// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocIntroductionResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocIntroductionResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocIntroductionResponseBodyPayload() = default ;
    RunDocIntroductionResponseBodyPayload(const RunDocIntroductionResponseBodyPayload &) = default ;
    RunDocIntroductionResponseBodyPayload(RunDocIntroductionResponseBodyPayload &&) = default ;
    RunDocIntroductionResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBodyPayload() = default ;
    RunDocIntroductionResponseBodyPayload& operator=(const RunDocIntroductionResponseBodyPayload &) = default ;
    RunDocIntroductionResponseBodyPayload& operator=(RunDocIntroductionResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocIntroductionResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocIntroductionResponseBodyPayloadOutput) };
    inline Models::RunDocIntroductionResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocIntroductionResponseBodyPayloadOutput) };
    inline RunDocIntroductionResponseBodyPayload& setOutput(const Models::RunDocIntroductionResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocIntroductionResponseBodyPayload& setOutput(Models::RunDocIntroductionResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocIntroductionResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocIntroductionResponseBodyPayloadUsage) };
    inline Models::RunDocIntroductionResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocIntroductionResponseBodyPayloadUsage) };
    inline RunDocIntroductionResponseBodyPayload& setUsage(const Models::RunDocIntroductionResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocIntroductionResponseBodyPayload& setUsage(Models::RunDocIntroductionResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocIntroductionResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocIntroductionResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
