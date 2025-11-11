// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCustomHotTopicAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunCustomHotTopicAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunCustomHotTopicAnalysisResponseBodyPayload() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayload(const RunCustomHotTopicAnalysisResponseBodyPayload &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayload(RunCustomHotTopicAnalysisResponseBodyPayload &&) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicAnalysisResponseBodyPayload() = default ;
    RunCustomHotTopicAnalysisResponseBodyPayload& operator=(const RunCustomHotTopicAnalysisResponseBodyPayload &) = default ;
    RunCustomHotTopicAnalysisResponseBodyPayload& operator=(RunCustomHotTopicAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput) };
    inline Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput) };
    inline RunCustomHotTopicAnalysisResponseBodyPayload& setOutput(const Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunCustomHotTopicAnalysisResponseBodyPayload& setOutput(Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage) };
    inline Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage) };
    inline RunCustomHotTopicAnalysisResponseBodyPayload& setUsage(const Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunCustomHotTopicAnalysisResponseBodyPayload& setUsage(Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunCustomHotTopicAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunCustomHotTopicAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
