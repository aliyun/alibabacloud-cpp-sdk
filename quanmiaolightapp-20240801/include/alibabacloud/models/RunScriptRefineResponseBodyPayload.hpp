// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTREFINERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTREFINERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptRefineResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunScriptRefineResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptRefineResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptRefineResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptRefineResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunScriptRefineResponseBodyPayload() = default ;
    RunScriptRefineResponseBodyPayload(const RunScriptRefineResponseBodyPayload &) = default ;
    RunScriptRefineResponseBodyPayload(RunScriptRefineResponseBodyPayload &&) = default ;
    RunScriptRefineResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptRefineResponseBodyPayload() = default ;
    RunScriptRefineResponseBodyPayload& operator=(const RunScriptRefineResponseBodyPayload &) = default ;
    RunScriptRefineResponseBodyPayload& operator=(RunScriptRefineResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunScriptRefineResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunScriptRefineResponseBodyPayloadOutput) };
    inline Models::RunScriptRefineResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunScriptRefineResponseBodyPayloadOutput) };
    inline RunScriptRefineResponseBodyPayload& setOutput(const Models::RunScriptRefineResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunScriptRefineResponseBodyPayload& setOutput(Models::RunScriptRefineResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunScriptRefineResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunScriptRefineResponseBodyPayloadUsage) };
    inline Models::RunScriptRefineResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunScriptRefineResponseBodyPayloadUsage) };
    inline RunScriptRefineResponseBodyPayload& setUsage(const Models::RunScriptRefineResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunScriptRefineResponseBodyPayload& setUsage(Models::RunScriptRefineResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunScriptRefineResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunScriptRefineResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
