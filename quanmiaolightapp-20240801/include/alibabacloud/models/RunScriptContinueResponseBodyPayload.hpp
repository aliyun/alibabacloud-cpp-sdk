// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCONTINUERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptContinueResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunScriptContinueResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptContinueResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptContinueResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptContinueResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunScriptContinueResponseBodyPayload() = default ;
    RunScriptContinueResponseBodyPayload(const RunScriptContinueResponseBodyPayload &) = default ;
    RunScriptContinueResponseBodyPayload(RunScriptContinueResponseBodyPayload &&) = default ;
    RunScriptContinueResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptContinueResponseBodyPayload() = default ;
    RunScriptContinueResponseBodyPayload& operator=(const RunScriptContinueResponseBodyPayload &) = default ;
    RunScriptContinueResponseBodyPayload& operator=(RunScriptContinueResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunScriptContinueResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunScriptContinueResponseBodyPayloadOutput) };
    inline Models::RunScriptContinueResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunScriptContinueResponseBodyPayloadOutput) };
    inline RunScriptContinueResponseBodyPayload& setOutput(const Models::RunScriptContinueResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunScriptContinueResponseBodyPayload& setOutput(Models::RunScriptContinueResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunScriptContinueResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunScriptContinueResponseBodyPayloadUsage) };
    inline Models::RunScriptContinueResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunScriptContinueResponseBodyPayloadUsage) };
    inline RunScriptContinueResponseBodyPayload& setUsage(const Models::RunScriptContinueResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunScriptContinueResponseBodyPayload& setUsage(Models::RunScriptContinueResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunScriptContinueResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunScriptContinueResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
