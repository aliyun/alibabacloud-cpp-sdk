// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCSUMMARYRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCSUMMARYRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocSummaryResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocSummaryResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocSummaryResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocSummaryResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocSummaryResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocSummaryResponseBodyPayload() = default ;
    RunDocSummaryResponseBodyPayload(const RunDocSummaryResponseBodyPayload &) = default ;
    RunDocSummaryResponseBodyPayload(RunDocSummaryResponseBodyPayload &&) = default ;
    RunDocSummaryResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocSummaryResponseBodyPayload() = default ;
    RunDocSummaryResponseBodyPayload& operator=(const RunDocSummaryResponseBodyPayload &) = default ;
    RunDocSummaryResponseBodyPayload& operator=(RunDocSummaryResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocSummaryResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocSummaryResponseBodyPayloadOutput) };
    inline Models::RunDocSummaryResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocSummaryResponseBodyPayloadOutput) };
    inline RunDocSummaryResponseBodyPayload& setOutput(const Models::RunDocSummaryResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocSummaryResponseBodyPayload& setOutput(Models::RunDocSummaryResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocSummaryResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocSummaryResponseBodyPayloadUsage) };
    inline Models::RunDocSummaryResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocSummaryResponseBodyPayloadUsage) };
    inline RunDocSummaryResponseBodyPayload& setUsage(const Models::RunDocSummaryResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocSummaryResponseBodyPayload& setUsage(Models::RunDocSummaryResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocSummaryResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocSummaryResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
