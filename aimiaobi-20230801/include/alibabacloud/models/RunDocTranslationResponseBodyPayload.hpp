// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCTRANSLATIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDocTranslationResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunDocTranslationResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocTranslationResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocTranslationResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocTranslationResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunDocTranslationResponseBodyPayload() = default ;
    RunDocTranslationResponseBodyPayload(const RunDocTranslationResponseBodyPayload &) = default ;
    RunDocTranslationResponseBodyPayload(RunDocTranslationResponseBodyPayload &&) = default ;
    RunDocTranslationResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocTranslationResponseBodyPayload() = default ;
    RunDocTranslationResponseBodyPayload& operator=(const RunDocTranslationResponseBodyPayload &) = default ;
    RunDocTranslationResponseBodyPayload& operator=(RunDocTranslationResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDocTranslationResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDocTranslationResponseBodyPayloadOutput) };
    inline Models::RunDocTranslationResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDocTranslationResponseBodyPayloadOutput) };
    inline RunDocTranslationResponseBodyPayload& setOutput(const Models::RunDocTranslationResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDocTranslationResponseBodyPayload& setOutput(Models::RunDocTranslationResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunDocTranslationResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunDocTranslationResponseBodyPayloadUsage) };
    inline Models::RunDocTranslationResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunDocTranslationResponseBodyPayloadUsage) };
    inline RunDocTranslationResponseBodyPayload& setUsage(const Models::RunDocTranslationResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunDocTranslationResponseBodyPayload& setUsage(Models::RunDocTranslationResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunDocTranslationResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunDocTranslationResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
