// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTPLANNINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTPLANNINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptPlanningResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunScriptPlanningResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptPlanningResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptPlanningResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptPlanningResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunScriptPlanningResponseBodyPayload() = default ;
    RunScriptPlanningResponseBodyPayload(const RunScriptPlanningResponseBodyPayload &) = default ;
    RunScriptPlanningResponseBodyPayload(RunScriptPlanningResponseBodyPayload &&) = default ;
    RunScriptPlanningResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptPlanningResponseBodyPayload() = default ;
    RunScriptPlanningResponseBodyPayload& operator=(const RunScriptPlanningResponseBodyPayload &) = default ;
    RunScriptPlanningResponseBodyPayload& operator=(RunScriptPlanningResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunScriptPlanningResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunScriptPlanningResponseBodyPayloadOutput) };
    inline Models::RunScriptPlanningResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunScriptPlanningResponseBodyPayloadOutput) };
    inline RunScriptPlanningResponseBodyPayload& setOutput(const Models::RunScriptPlanningResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunScriptPlanningResponseBodyPayload& setOutput(Models::RunScriptPlanningResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunScriptPlanningResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunScriptPlanningResponseBodyPayloadUsage) };
    inline Models::RunScriptPlanningResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunScriptPlanningResponseBodyPayloadUsage) };
    inline RunScriptPlanningResponseBodyPayload& setUsage(const Models::RunScriptPlanningResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunScriptPlanningResponseBodyPayload& setUsage(Models::RunScriptPlanningResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunScriptPlanningResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunScriptPlanningResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
