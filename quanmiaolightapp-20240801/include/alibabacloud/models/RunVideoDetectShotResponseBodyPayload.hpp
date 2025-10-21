// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEODETECTSHOTRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEODETECTSHOTRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoDetectShotResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunVideoDetectShotResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoDetectShotResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoDetectShotResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoDetectShotResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunVideoDetectShotResponseBodyPayload() = default ;
    RunVideoDetectShotResponseBodyPayload(const RunVideoDetectShotResponseBodyPayload &) = default ;
    RunVideoDetectShotResponseBodyPayload(RunVideoDetectShotResponseBodyPayload &&) = default ;
    RunVideoDetectShotResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoDetectShotResponseBodyPayload() = default ;
    RunVideoDetectShotResponseBodyPayload& operator=(const RunVideoDetectShotResponseBodyPayload &) = default ;
    RunVideoDetectShotResponseBodyPayload& operator=(RunVideoDetectShotResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunVideoDetectShotResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunVideoDetectShotResponseBodyPayloadOutput) };
    inline Models::RunVideoDetectShotResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunVideoDetectShotResponseBodyPayloadOutput) };
    inline RunVideoDetectShotResponseBodyPayload& setOutput(const Models::RunVideoDetectShotResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunVideoDetectShotResponseBodyPayload& setOutput(Models::RunVideoDetectShotResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunVideoDetectShotResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunVideoDetectShotResponseBodyPayloadUsage) };
    inline Models::RunVideoDetectShotResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunVideoDetectShotResponseBodyPayloadUsage) };
    inline RunVideoDetectShotResponseBodyPayload& setUsage(const Models::RunVideoDetectShotResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunVideoDetectShotResponseBodyPayload& setUsage(Models::RunVideoDetectShotResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunVideoDetectShotResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunVideoDetectShotResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
