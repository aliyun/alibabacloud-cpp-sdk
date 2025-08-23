// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTAGMININGANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNTAGMININGANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTagMiningAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunTagMiningAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunTagMiningAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTagMiningAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunTagMiningAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunTagMiningAnalysisResponseBodyPayload() = default ;
    RunTagMiningAnalysisResponseBodyPayload(const RunTagMiningAnalysisResponseBodyPayload &) = default ;
    RunTagMiningAnalysisResponseBodyPayload(RunTagMiningAnalysisResponseBodyPayload &&) = default ;
    RunTagMiningAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTagMiningAnalysisResponseBodyPayload() = default ;
    RunTagMiningAnalysisResponseBodyPayload& operator=(const RunTagMiningAnalysisResponseBodyPayload &) = default ;
    RunTagMiningAnalysisResponseBodyPayload& operator=(RunTagMiningAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunTagMiningAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunTagMiningAnalysisResponseBodyPayloadOutput) };
    inline Models::RunTagMiningAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunTagMiningAnalysisResponseBodyPayloadOutput) };
    inline RunTagMiningAnalysisResponseBodyPayload& setOutput(const Models::RunTagMiningAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunTagMiningAnalysisResponseBodyPayload& setOutput(Models::RunTagMiningAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunTagMiningAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunTagMiningAnalysisResponseBodyPayloadUsage) };
    inline Models::RunTagMiningAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunTagMiningAnalysisResponseBodyPayloadUsage) };
    inline RunTagMiningAnalysisResponseBodyPayload& setUsage(const Models::RunTagMiningAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunTagMiningAnalysisResponseBodyPayload& setUsage(Models::RunTagMiningAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunTagMiningAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunTagMiningAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
