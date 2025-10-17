// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCHATRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunScriptChatResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunScriptChatResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptChatResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptChatResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptChatResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunScriptChatResponseBodyPayload() = default ;
    RunScriptChatResponseBodyPayload(const RunScriptChatResponseBodyPayload &) = default ;
    RunScriptChatResponseBodyPayload(RunScriptChatResponseBodyPayload &&) = default ;
    RunScriptChatResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptChatResponseBodyPayload() = default ;
    RunScriptChatResponseBodyPayload& operator=(const RunScriptChatResponseBodyPayload &) = default ;
    RunScriptChatResponseBodyPayload& operator=(RunScriptChatResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunScriptChatResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunScriptChatResponseBodyPayloadOutput) };
    inline Models::RunScriptChatResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunScriptChatResponseBodyPayloadOutput) };
    inline RunScriptChatResponseBodyPayload& setOutput(const Models::RunScriptChatResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunScriptChatResponseBodyPayload& setOutput(Models::RunScriptChatResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunScriptChatResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunScriptChatResponseBodyPayloadUsage) };
    inline Models::RunScriptChatResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunScriptChatResponseBodyPayloadUsage) };
    inline RunScriptChatResponseBodyPayload& setUsage(const Models::RunScriptChatResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunScriptChatResponseBodyPayload& setUsage(Models::RunScriptChatResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunScriptChatResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunScriptChatResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
