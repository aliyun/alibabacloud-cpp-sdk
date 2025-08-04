// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocQaResponseBodyPayload() = default ;
    RunDocQaResponseBodyPayload(const RunDocQaResponseBodyPayload &) = default ;
    RunDocQaResponseBodyPayload(RunDocQaResponseBodyPayload &&) = default ;
    RunDocQaResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBodyPayload() = default ;
    RunDocQaResponseBodyPayload& operator=(const RunDocQaResponseBodyPayload &) = default ;
    RunDocQaResponseBodyPayload& operator=(RunDocQaResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocQaResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocQaResponseBodyPayloadOutput) };
    inline Models::RunDocQaResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocQaResponseBodyPayloadOutput) };
    inline RunDocQaResponseBodyPayload& setOutput(const Models::RunDocQaResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocQaResponseBodyPayload& setOutput(Models::RunDocQaResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocQaResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocQaResponseBodyPayloadUsage) };
    inline Models::RunDocQaResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocQaResponseBodyPayloadUsage) };
    inline RunDocQaResponseBodyPayload& setUsage(const Models::RunDocQaResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocQaResponseBodyPayload& setUsage(Models::RunDocQaResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocQaResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocQaResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
