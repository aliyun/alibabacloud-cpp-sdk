// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunStyleFeatureAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunStyleFeatureAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStyleFeatureAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleFeatureAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleFeatureAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunStyleFeatureAnalysisResponseBodyPayload() = default ;
    RunStyleFeatureAnalysisResponseBodyPayload(const RunStyleFeatureAnalysisResponseBodyPayload &) = default ;
    RunStyleFeatureAnalysisResponseBodyPayload(RunStyleFeatureAnalysisResponseBodyPayload &&) = default ;
    RunStyleFeatureAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleFeatureAnalysisResponseBodyPayload() = default ;
    RunStyleFeatureAnalysisResponseBodyPayload& operator=(const RunStyleFeatureAnalysisResponseBodyPayload &) = default ;
    RunStyleFeatureAnalysisResponseBodyPayload& operator=(RunStyleFeatureAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput) };
    inline Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput) };
    inline RunStyleFeatureAnalysisResponseBodyPayload& setOutput(const Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunStyleFeatureAnalysisResponseBodyPayload& setOutput(Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage) };
    inline Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage) };
    inline RunStyleFeatureAnalysisResponseBodyPayload& setUsage(const Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunStyleFeatureAnalysisResponseBodyPayload& setUsage(Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunStyleFeatureAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunStyleFeatureAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
