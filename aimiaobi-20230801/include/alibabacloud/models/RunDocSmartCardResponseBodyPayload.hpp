// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSMARTCARDRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocSmartCardResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocSmartCardResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSmartCardResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSmartCardResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSmartCardResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocSmartCardResponseBodyPayload() = default ;
    RunDocSmartCardResponseBodyPayload(const RunDocSmartCardResponseBodyPayload &) = default ;
    RunDocSmartCardResponseBodyPayload(RunDocSmartCardResponseBodyPayload &&) = default ;
    RunDocSmartCardResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSmartCardResponseBodyPayload() = default ;
    RunDocSmartCardResponseBodyPayload& operator=(const RunDocSmartCardResponseBodyPayload &) = default ;
    RunDocSmartCardResponseBodyPayload& operator=(RunDocSmartCardResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocSmartCardResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocSmartCardResponseBodyPayloadOutput) };
    inline Models::RunDocSmartCardResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocSmartCardResponseBodyPayloadOutput) };
    inline RunDocSmartCardResponseBodyPayload& setOutput(const Models::RunDocSmartCardResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocSmartCardResponseBodyPayload& setOutput(Models::RunDocSmartCardResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocSmartCardResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocSmartCardResponseBodyPayloadUsage) };
    inline Models::RunDocSmartCardResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocSmartCardResponseBodyPayloadUsage) };
    inline RunDocSmartCardResponseBodyPayload& setUsage(const Models::RunDocSmartCardResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocSmartCardResponseBodyPayload& setUsage(Models::RunDocSmartCardResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocSmartCardResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocSmartCardResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
