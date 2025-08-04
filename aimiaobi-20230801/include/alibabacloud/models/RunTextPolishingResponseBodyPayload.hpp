// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTextPolishingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunTextPolishingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTextPolishingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTextPolishingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunTextPolishingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunTextPolishingResponseBodyPayload() = default ;
    RunTextPolishingResponseBodyPayload(const RunTextPolishingResponseBodyPayload &) = default ;
    RunTextPolishingResponseBodyPayload(RunTextPolishingResponseBodyPayload &&) = default ;
    RunTextPolishingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTextPolishingResponseBodyPayload() = default ;
    RunTextPolishingResponseBodyPayload& operator=(const RunTextPolishingResponseBodyPayload &) = default ;
    RunTextPolishingResponseBodyPayload& operator=(RunTextPolishingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunTextPolishingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunTextPolishingResponseBodyPayloadOutput) };
    inline Models::RunTextPolishingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunTextPolishingResponseBodyPayloadOutput) };
    inline RunTextPolishingResponseBodyPayload& setOutput(const Models::RunTextPolishingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunTextPolishingResponseBodyPayload& setOutput(Models::RunTextPolishingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunTextPolishingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunTextPolishingResponseBodyPayloadUsage) };
    inline Models::RunTextPolishingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunTextPolishingResponseBodyPayloadUsage) };
    inline RunTextPolishingResponseBodyPayload& setUsage(const Models::RunTextPolishingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunTextPolishingResponseBodyPayload& setUsage(Models::RunTextPolishingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunTextPolishingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunTextPolishingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
