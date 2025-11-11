// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNGENERATEQUESTIONSRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunGenerateQuestionsResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunGenerateQuestionsResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunGenerateQuestionsResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunGenerateQuestionsResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunGenerateQuestionsResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunGenerateQuestionsResponseBodyPayload() = default ;
    RunGenerateQuestionsResponseBodyPayload(const RunGenerateQuestionsResponseBodyPayload &) = default ;
    RunGenerateQuestionsResponseBodyPayload(RunGenerateQuestionsResponseBodyPayload &&) = default ;
    RunGenerateQuestionsResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunGenerateQuestionsResponseBodyPayload() = default ;
    RunGenerateQuestionsResponseBodyPayload& operator=(const RunGenerateQuestionsResponseBodyPayload &) = default ;
    RunGenerateQuestionsResponseBodyPayload& operator=(RunGenerateQuestionsResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunGenerateQuestionsResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunGenerateQuestionsResponseBodyPayloadOutput) };
    inline Models::RunGenerateQuestionsResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunGenerateQuestionsResponseBodyPayloadOutput) };
    inline RunGenerateQuestionsResponseBodyPayload& setOutput(const Models::RunGenerateQuestionsResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunGenerateQuestionsResponseBodyPayload& setOutput(Models::RunGenerateQuestionsResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunGenerateQuestionsResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunGenerateQuestionsResponseBodyPayloadUsage) };
    inline Models::RunGenerateQuestionsResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunGenerateQuestionsResponseBodyPayloadUsage) };
    inline RunGenerateQuestionsResponseBodyPayload& setUsage(const Models::RunGenerateQuestionsResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunGenerateQuestionsResponseBodyPayload& setUsage(Models::RunGenerateQuestionsResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunGenerateQuestionsResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunGenerateQuestionsResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
