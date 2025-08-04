// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKSMARTCARDRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKSMARTCARDRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunBookSmartCardResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunBookSmartCardResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookSmartCardResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookSmartCardResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookSmartCardResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunBookSmartCardResponseBodyPayload() = default ;
    RunBookSmartCardResponseBodyPayload(const RunBookSmartCardResponseBodyPayload &) = default ;
    RunBookSmartCardResponseBodyPayload(RunBookSmartCardResponseBodyPayload &&) = default ;
    RunBookSmartCardResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookSmartCardResponseBodyPayload() = default ;
    RunBookSmartCardResponseBodyPayload& operator=(const RunBookSmartCardResponseBodyPayload &) = default ;
    RunBookSmartCardResponseBodyPayload& operator=(RunBookSmartCardResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunBookSmartCardResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunBookSmartCardResponseBodyPayloadOutput) };
    inline Models::RunBookSmartCardResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunBookSmartCardResponseBodyPayloadOutput) };
    inline RunBookSmartCardResponseBodyPayload& setOutput(const Models::RunBookSmartCardResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunBookSmartCardResponseBodyPayload& setOutput(Models::RunBookSmartCardResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunBookSmartCardResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunBookSmartCardResponseBodyPayloadUsage) };
    inline Models::RunBookSmartCardResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunBookSmartCardResponseBodyPayloadUsage) };
    inline RunBookSmartCardResponseBodyPayload& setUsage(const Models::RunBookSmartCardResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunBookSmartCardResponseBodyPayload& setUsage(Models::RunBookSmartCardResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunBookSmartCardResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunBookSmartCardResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
