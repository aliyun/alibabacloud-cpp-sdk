// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicViewPointAnalysisResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicViewPointAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicViewPointAnalysisResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload(const RunCustomHotTopicViewPointAnalysisResponseBodyPayload &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload(RunCustomHotTopicViewPointAnalysisResponseBodyPayload &&) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicViewPointAnalysisResponseBodyPayload() = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload& operator=(const RunCustomHotTopicViewPointAnalysisResponseBodyPayload &) = default ;
    RunCustomHotTopicViewPointAnalysisResponseBodyPayload& operator=(RunCustomHotTopicViewPointAnalysisResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput) };
    inline Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayload& setOutput(const Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayload& setOutput(Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage) };
    inline Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayload& setUsage(const Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunCustomHotTopicViewPointAnalysisResponseBodyPayload& setUsage(Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunCustomHotTopicViewPointAnalysisResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
