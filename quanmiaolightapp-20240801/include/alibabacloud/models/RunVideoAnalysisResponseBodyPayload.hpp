// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunVideoAnalysisResponseBodyPayload() = default ;
    RunVideoAnalysisResponseBodyPayload(const RunVideoAnalysisResponseBodyPayload &) = default ;
    RunVideoAnalysisResponseBodyPayload(RunVideoAnalysisResponseBodyPayload &&) = default ;
    RunVideoAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayload() = default ;
    RunVideoAnalysisResponseBodyPayload& operator=(const RunVideoAnalysisResponseBodyPayload &) = default ;
    RunVideoAnalysisResponseBodyPayload& operator=(RunVideoAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunVideoAnalysisResponseBodyPayloadOutput) };
    inline Models::RunVideoAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunVideoAnalysisResponseBodyPayloadOutput) };
    inline RunVideoAnalysisResponseBodyPayload& setOutput(const Models::RunVideoAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunVideoAnalysisResponseBodyPayload& setOutput(Models::RunVideoAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoAnalysisResponseBodyPayloadUsage) };
    inline Models::RunVideoAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoAnalysisResponseBodyPayloadUsage) };
    inline RunVideoAnalysisResponseBodyPayload& setUsage(const Models::RunVideoAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoAnalysisResponseBodyPayload& setUsage(Models::RunVideoAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunVideoAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
