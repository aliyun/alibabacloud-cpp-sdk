// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWritingV2ResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunWritingV2ResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunWritingV2ResponseBodyPayload() = default ;
    RunWritingV2ResponseBodyPayload(const RunWritingV2ResponseBodyPayload &) = default ;
    RunWritingV2ResponseBodyPayload(RunWritingV2ResponseBodyPayload &&) = default ;
    RunWritingV2ResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ResponseBodyPayload() = default ;
    RunWritingV2ResponseBodyPayload& operator=(const RunWritingV2ResponseBodyPayload &) = default ;
    RunWritingV2ResponseBodyPayload& operator=(RunWritingV2ResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunWritingV2ResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunWritingV2ResponseBodyPayloadOutput) };
    inline Models::RunWritingV2ResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunWritingV2ResponseBodyPayloadOutput) };
    inline RunWritingV2ResponseBodyPayload& setOutput(const Models::RunWritingV2ResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunWritingV2ResponseBodyPayload& setOutput(Models::RunWritingV2ResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunWritingV2ResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunWritingV2ResponseBodyPayloadUsage) };
    inline Models::RunWritingV2ResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunWritingV2ResponseBodyPayloadUsage) };
    inline RunWritingV2ResponseBodyPayload& setUsage(const Models::RunWritingV2ResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunWritingV2ResponseBodyPayload& setUsage(Models::RunWritingV2ResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunWritingV2ResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunWritingV2ResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
