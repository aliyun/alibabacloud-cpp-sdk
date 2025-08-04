// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKINTRODUCTIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunBookIntroductionResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunBookIntroductionResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookIntroductionResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookIntroductionResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunBookIntroductionResponseBodyPayload() = default ;
    RunBookIntroductionResponseBodyPayload(const RunBookIntroductionResponseBodyPayload &) = default ;
    RunBookIntroductionResponseBodyPayload(RunBookIntroductionResponseBodyPayload &&) = default ;
    RunBookIntroductionResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookIntroductionResponseBodyPayload() = default ;
    RunBookIntroductionResponseBodyPayload& operator=(const RunBookIntroductionResponseBodyPayload &) = default ;
    RunBookIntroductionResponseBodyPayload& operator=(RunBookIntroductionResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunBookIntroductionResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunBookIntroductionResponseBodyPayloadOutput) };
    inline Models::RunBookIntroductionResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunBookIntroductionResponseBodyPayloadOutput) };
    inline RunBookIntroductionResponseBodyPayload& setOutput(const Models::RunBookIntroductionResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunBookIntroductionResponseBodyPayload& setOutput(Models::RunBookIntroductionResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunBookIntroductionResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunBookIntroductionResponseBodyPayloadUsage) };
    inline Models::RunBookIntroductionResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunBookIntroductionResponseBodyPayloadUsage) };
    inline RunBookIntroductionResponseBodyPayload& setUsage(const Models::RunBookIntroductionResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunBookIntroductionResponseBodyPayload& setUsage(Models::RunBookIntroductionResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunBookIntroductionResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunBookIntroductionResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
