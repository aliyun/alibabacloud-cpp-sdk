// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunEssayCorrectionResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunEssayCorrectionResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEssayCorrectionResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunEssayCorrectionResponseBodyPayload() = default ;
    RunEssayCorrectionResponseBodyPayload(const RunEssayCorrectionResponseBodyPayload &) = default ;
    RunEssayCorrectionResponseBodyPayload(RunEssayCorrectionResponseBodyPayload &&) = default ;
    RunEssayCorrectionResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionResponseBodyPayload() = default ;
    RunEssayCorrectionResponseBodyPayload& operator=(const RunEssayCorrectionResponseBodyPayload &) = default ;
    RunEssayCorrectionResponseBodyPayload& operator=(RunEssayCorrectionResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunEssayCorrectionResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunEssayCorrectionResponseBodyPayloadOutput) };
    inline Models::RunEssayCorrectionResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunEssayCorrectionResponseBodyPayloadOutput) };
    inline RunEssayCorrectionResponseBodyPayload& setOutput(const Models::RunEssayCorrectionResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunEssayCorrectionResponseBodyPayload& setOutput(Models::RunEssayCorrectionResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunEssayCorrectionResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunEssayCorrectionResponseBodyPayloadUsage) };
    inline Models::RunEssayCorrectionResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunEssayCorrectionResponseBodyPayloadUsage) };
    inline RunEssayCorrectionResponseBodyPayload& setUsage(const Models::RunEssayCorrectionResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunEssayCorrectionResponseBodyPayload& setUsage(Models::RunEssayCorrectionResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunEssayCorrectionResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunEssayCorrectionResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
