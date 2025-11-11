// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNBOOKBRAINMAPRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunBookBrainmapResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunBookBrainmapResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunBookBrainmapResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunBookBrainmapResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunBookBrainmapResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunBookBrainmapResponseBodyPayload() = default ;
    RunBookBrainmapResponseBodyPayload(const RunBookBrainmapResponseBodyPayload &) = default ;
    RunBookBrainmapResponseBodyPayload(RunBookBrainmapResponseBodyPayload &&) = default ;
    RunBookBrainmapResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunBookBrainmapResponseBodyPayload() = default ;
    RunBookBrainmapResponseBodyPayload& operator=(const RunBookBrainmapResponseBodyPayload &) = default ;
    RunBookBrainmapResponseBodyPayload& operator=(RunBookBrainmapResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunBookBrainmapResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunBookBrainmapResponseBodyPayloadOutput) };
    inline Models::RunBookBrainmapResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunBookBrainmapResponseBodyPayloadOutput) };
    inline RunBookBrainmapResponseBodyPayload& setOutput(const Models::RunBookBrainmapResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunBookBrainmapResponseBodyPayload& setOutput(Models::RunBookBrainmapResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunBookBrainmapResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunBookBrainmapResponseBodyPayloadUsage) };
    inline Models::RunBookBrainmapResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunBookBrainmapResponseBodyPayloadUsage) };
    inline RunBookBrainmapResponseBodyPayload& setUsage(const Models::RunBookBrainmapResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunBookBrainmapResponseBodyPayload& setUsage(Models::RunBookBrainmapResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunBookBrainmapResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunBookBrainmapResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
