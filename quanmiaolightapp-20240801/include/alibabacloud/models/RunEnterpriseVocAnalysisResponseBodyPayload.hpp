// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunEnterpriseVocAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunEnterpriseVocAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEnterpriseVocAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunEnterpriseVocAnalysisResponseBodyPayload() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayload(const RunEnterpriseVocAnalysisResponseBodyPayload &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayload(RunEnterpriseVocAnalysisResponseBodyPayload &&) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisResponseBodyPayload() = default ;
    RunEnterpriseVocAnalysisResponseBodyPayload& operator=(const RunEnterpriseVocAnalysisResponseBodyPayload &) = default ;
    RunEnterpriseVocAnalysisResponseBodyPayload& operator=(RunEnterpriseVocAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput) };
    inline Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput) };
    inline RunEnterpriseVocAnalysisResponseBodyPayload& setOutput(const Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunEnterpriseVocAnalysisResponseBodyPayload& setOutput(Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage) };
    inline Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage) };
    inline RunEnterpriseVocAnalysisResponseBodyPayload& setUsage(const Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunEnterpriseVocAnalysisResponseBodyPayload& setUsage(Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunEnterpriseVocAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunEnterpriseVocAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
