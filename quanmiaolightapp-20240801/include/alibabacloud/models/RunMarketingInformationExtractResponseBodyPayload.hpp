// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunMarketingInformationExtractResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunMarketingInformationExtractResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationExtractResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationExtractResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationExtractResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunMarketingInformationExtractResponseBodyPayload() = default ;
    RunMarketingInformationExtractResponseBodyPayload(const RunMarketingInformationExtractResponseBodyPayload &) = default ;
    RunMarketingInformationExtractResponseBodyPayload(RunMarketingInformationExtractResponseBodyPayload &&) = default ;
    RunMarketingInformationExtractResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationExtractResponseBodyPayload() = default ;
    RunMarketingInformationExtractResponseBodyPayload& operator=(const RunMarketingInformationExtractResponseBodyPayload &) = default ;
    RunMarketingInformationExtractResponseBodyPayload& operator=(RunMarketingInformationExtractResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunMarketingInformationExtractResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunMarketingInformationExtractResponseBodyPayloadOutput) };
    inline Models::RunMarketingInformationExtractResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunMarketingInformationExtractResponseBodyPayloadOutput) };
    inline RunMarketingInformationExtractResponseBodyPayload& setOutput(const Models::RunMarketingInformationExtractResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunMarketingInformationExtractResponseBodyPayload& setOutput(Models::RunMarketingInformationExtractResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunMarketingInformationExtractResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunMarketingInformationExtractResponseBodyPayloadUsage) };
    inline Models::RunMarketingInformationExtractResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunMarketingInformationExtractResponseBodyPayloadUsage) };
    inline RunMarketingInformationExtractResponseBodyPayload& setUsage(const Models::RunMarketingInformationExtractResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunMarketingInformationExtractResponseBodyPayload& setUsage(Models::RunMarketingInformationExtractResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunMarketingInformationExtractResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunMarketingInformationExtractResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
