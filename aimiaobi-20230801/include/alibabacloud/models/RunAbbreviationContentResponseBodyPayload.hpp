// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNABBREVIATIONCONTENTRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNABBREVIATIONCONTENTRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunAbbreviationContentResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunAbbreviationContentResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunAbbreviationContentResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAbbreviationContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunAbbreviationContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunAbbreviationContentResponseBodyPayload() = default ;
    RunAbbreviationContentResponseBodyPayload(const RunAbbreviationContentResponseBodyPayload &) = default ;
    RunAbbreviationContentResponseBodyPayload(RunAbbreviationContentResponseBodyPayload &&) = default ;
    RunAbbreviationContentResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAbbreviationContentResponseBodyPayload() = default ;
    RunAbbreviationContentResponseBodyPayload& operator=(const RunAbbreviationContentResponseBodyPayload &) = default ;
    RunAbbreviationContentResponseBodyPayload& operator=(RunAbbreviationContentResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunAbbreviationContentResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunAbbreviationContentResponseBodyPayloadOutput) };
    inline Models::RunAbbreviationContentResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunAbbreviationContentResponseBodyPayloadOutput) };
    inline RunAbbreviationContentResponseBodyPayload& setOutput(const Models::RunAbbreviationContentResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunAbbreviationContentResponseBodyPayload& setOutput(Models::RunAbbreviationContentResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunAbbreviationContentResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunAbbreviationContentResponseBodyPayloadUsage) };
    inline Models::RunAbbreviationContentResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunAbbreviationContentResponseBodyPayloadUsage) };
    inline RunAbbreviationContentResponseBodyPayload& setUsage(const Models::RunAbbreviationContentResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunAbbreviationContentResponseBodyPayload& setUsage(Models::RunAbbreviationContentResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunAbbreviationContentResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunAbbreviationContentResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
