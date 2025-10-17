// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunMarketingInformationWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunMarketingInformationWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunMarketingInformationWritingResponseBodyPayload() = default ;
    RunMarketingInformationWritingResponseBodyPayload(const RunMarketingInformationWritingResponseBodyPayload &) = default ;
    RunMarketingInformationWritingResponseBodyPayload(RunMarketingInformationWritingResponseBodyPayload &&) = default ;
    RunMarketingInformationWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationWritingResponseBodyPayload() = default ;
    RunMarketingInformationWritingResponseBodyPayload& operator=(const RunMarketingInformationWritingResponseBodyPayload &) = default ;
    RunMarketingInformationWritingResponseBodyPayload& operator=(RunMarketingInformationWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunMarketingInformationWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunMarketingInformationWritingResponseBodyPayloadOutput) };
    inline Models::RunMarketingInformationWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunMarketingInformationWritingResponseBodyPayloadOutput) };
    inline RunMarketingInformationWritingResponseBodyPayload& setOutput(const Models::RunMarketingInformationWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunMarketingInformationWritingResponseBodyPayload& setOutput(Models::RunMarketingInformationWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunMarketingInformationWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunMarketingInformationWritingResponseBodyPayloadUsage) };
    inline Models::RunMarketingInformationWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunMarketingInformationWritingResponseBodyPayloadUsage) };
    inline RunMarketingInformationWritingResponseBodyPayload& setUsage(const Models::RunMarketingInformationWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunMarketingInformationWritingResponseBodyPayload& setUsage(Models::RunMarketingInformationWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunMarketingInformationWritingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunMarketingInformationWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
