// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotTopicSummaryResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunHotTopicSummaryResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunHotTopicSummaryResponseBodyPayload() = default ;
    RunHotTopicSummaryResponseBodyPayload(const RunHotTopicSummaryResponseBodyPayload &) = default ;
    RunHotTopicSummaryResponseBodyPayload(RunHotTopicSummaryResponseBodyPayload &&) = default ;
    RunHotTopicSummaryResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryResponseBodyPayload() = default ;
    RunHotTopicSummaryResponseBodyPayload& operator=(const RunHotTopicSummaryResponseBodyPayload &) = default ;
    RunHotTopicSummaryResponseBodyPayload& operator=(RunHotTopicSummaryResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunHotTopicSummaryResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunHotTopicSummaryResponseBodyPayloadOutput) };
    inline Models::RunHotTopicSummaryResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunHotTopicSummaryResponseBodyPayloadOutput) };
    inline RunHotTopicSummaryResponseBodyPayload& setOutput(const Models::RunHotTopicSummaryResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunHotTopicSummaryResponseBodyPayload& setOutput(Models::RunHotTopicSummaryResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunHotTopicSummaryResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunHotTopicSummaryResponseBodyPayloadUsage) };
    inline Models::RunHotTopicSummaryResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunHotTopicSummaryResponseBodyPayloadUsage) };
    inline RunHotTopicSummaryResponseBodyPayload& setUsage(const Models::RunHotTopicSummaryResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunHotTopicSummaryResponseBodyPayload& setUsage(Models::RunHotTopicSummaryResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunHotTopicSummaryResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunHotTopicSummaryResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
