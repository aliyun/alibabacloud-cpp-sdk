// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunWritingResponseBodyPayload() = default ;
    RunWritingResponseBodyPayload(const RunWritingResponseBodyPayload &) = default ;
    RunWritingResponseBodyPayload(RunWritingResponseBodyPayload &&) = default ;
    RunWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingResponseBodyPayload() = default ;
    RunWritingResponseBodyPayload& operator=(const RunWritingResponseBodyPayload &) = default ;
    RunWritingResponseBodyPayload& operator=(RunWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunWritingResponseBodyPayloadOutput) };
    inline Models::RunWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunWritingResponseBodyPayloadOutput) };
    inline RunWritingResponseBodyPayload& setOutput(const Models::RunWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunWritingResponseBodyPayload& setOutput(Models::RunWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunWritingResponseBodyPayloadUsage) };
    inline Models::RunWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunWritingResponseBodyPayloadUsage) };
    inline RunWritingResponseBodyPayload& setUsage(const Models::RunWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunWritingResponseBodyPayload& setUsage(Models::RunWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunWritingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
