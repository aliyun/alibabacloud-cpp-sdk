// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTWORDRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTWORDRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotwordResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunHotwordResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunHotwordResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotwordResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotwordResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunHotwordResponseBodyPayload() = default ;
    RunHotwordResponseBodyPayload(const RunHotwordResponseBodyPayload &) = default ;
    RunHotwordResponseBodyPayload(RunHotwordResponseBodyPayload &&) = default ;
    RunHotwordResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotwordResponseBodyPayload() = default ;
    RunHotwordResponseBodyPayload& operator=(const RunHotwordResponseBodyPayload &) = default ;
    RunHotwordResponseBodyPayload& operator=(RunHotwordResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunHotwordResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunHotwordResponseBodyPayloadOutput) };
    inline Models::RunHotwordResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunHotwordResponseBodyPayloadOutput) };
    inline RunHotwordResponseBodyPayload& setOutput(const Models::RunHotwordResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunHotwordResponseBodyPayload& setOutput(Models::RunHotwordResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunHotwordResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunHotwordResponseBodyPayloadUsage) };
    inline Models::RunHotwordResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunHotwordResponseBodyPayloadUsage) };
    inline RunHotwordResponseBodyPayload& setUsage(const Models::RunHotwordResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunHotwordResponseBodyPayload& setUsage(Models::RunHotwordResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunHotwordResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunHotwordResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
