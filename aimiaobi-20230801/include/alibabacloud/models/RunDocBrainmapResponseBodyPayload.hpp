// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCBRAINMAPRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCBRAINMAPRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocBrainmapResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocBrainmapResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocBrainmapResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocBrainmapResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocBrainmapResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocBrainmapResponseBodyPayload() = default ;
    RunDocBrainmapResponseBodyPayload(const RunDocBrainmapResponseBodyPayload &) = default ;
    RunDocBrainmapResponseBodyPayload(RunDocBrainmapResponseBodyPayload &&) = default ;
    RunDocBrainmapResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocBrainmapResponseBodyPayload() = default ;
    RunDocBrainmapResponseBodyPayload& operator=(const RunDocBrainmapResponseBodyPayload &) = default ;
    RunDocBrainmapResponseBodyPayload& operator=(RunDocBrainmapResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocBrainmapResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocBrainmapResponseBodyPayloadOutput) };
    inline Models::RunDocBrainmapResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocBrainmapResponseBodyPayloadOutput) };
    inline RunDocBrainmapResponseBodyPayload& setOutput(const Models::RunDocBrainmapResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocBrainmapResponseBodyPayload& setOutput(Models::RunDocBrainmapResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocBrainmapResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocBrainmapResponseBodyPayloadUsage) };
    inline Models::RunDocBrainmapResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocBrainmapResponseBodyPayloadUsage) };
    inline RunDocBrainmapResponseBodyPayload& setUsage(const Models::RunDocBrainmapResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocBrainmapResponseBodyPayload& setUsage(Models::RunDocBrainmapResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocBrainmapResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocBrainmapResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
