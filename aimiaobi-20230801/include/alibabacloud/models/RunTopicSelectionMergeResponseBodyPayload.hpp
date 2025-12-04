// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunTopicSelectionMergeResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunTopicSelectionMergeResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTopicSelectionMergeResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTopicSelectionMergeResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunTopicSelectionMergeResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunTopicSelectionMergeResponseBodyPayload() = default ;
    RunTopicSelectionMergeResponseBodyPayload(const RunTopicSelectionMergeResponseBodyPayload &) = default ;
    RunTopicSelectionMergeResponseBodyPayload(RunTopicSelectionMergeResponseBodyPayload &&) = default ;
    RunTopicSelectionMergeResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTopicSelectionMergeResponseBodyPayload() = default ;
    RunTopicSelectionMergeResponseBodyPayload& operator=(const RunTopicSelectionMergeResponseBodyPayload &) = default ;
    RunTopicSelectionMergeResponseBodyPayload& operator=(RunTopicSelectionMergeResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunTopicSelectionMergeResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunTopicSelectionMergeResponseBodyPayloadOutput) };
    inline Models::RunTopicSelectionMergeResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunTopicSelectionMergeResponseBodyPayloadOutput) };
    inline RunTopicSelectionMergeResponseBodyPayload& setOutput(const Models::RunTopicSelectionMergeResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunTopicSelectionMergeResponseBodyPayload& setOutput(Models::RunTopicSelectionMergeResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunTopicSelectionMergeResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunTopicSelectionMergeResponseBodyPayloadUsage) };
    inline Models::RunTopicSelectionMergeResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunTopicSelectionMergeResponseBodyPayloadUsage) };
    inline RunTopicSelectionMergeResponseBodyPayload& setUsage(const Models::RunTopicSelectionMergeResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunTopicSelectionMergeResponseBodyPayload& setUsage(Models::RunTopicSelectionMergeResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunTopicSelectionMergeResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunTopicSelectionMergeResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
