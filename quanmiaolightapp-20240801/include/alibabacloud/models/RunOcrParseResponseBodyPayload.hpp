// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNOCRPARSERESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNOCRPARSERESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunOcrParseResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunOcrParseResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunOcrParseResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunOcrParseResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunOcrParseResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunOcrParseResponseBodyPayload() = default ;
    RunOcrParseResponseBodyPayload(const RunOcrParseResponseBodyPayload &) = default ;
    RunOcrParseResponseBodyPayload(RunOcrParseResponseBodyPayload &&) = default ;
    RunOcrParseResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunOcrParseResponseBodyPayload() = default ;
    RunOcrParseResponseBodyPayload& operator=(const RunOcrParseResponseBodyPayload &) = default ;
    RunOcrParseResponseBodyPayload& operator=(RunOcrParseResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunOcrParseResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunOcrParseResponseBodyPayloadOutput) };
    inline Models::RunOcrParseResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunOcrParseResponseBodyPayloadOutput) };
    inline RunOcrParseResponseBodyPayload& setOutput(const Models::RunOcrParseResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunOcrParseResponseBodyPayload& setOutput(Models::RunOcrParseResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunOcrParseResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunOcrParseResponseBodyPayloadUsage) };
    inline Models::RunOcrParseResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunOcrParseResponseBodyPayloadUsage) };
    inline RunOcrParseResponseBodyPayload& setUsage(const Models::RunOcrParseResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunOcrParseResponseBodyPayload& setUsage(Models::RunOcrParseResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunOcrParseResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunOcrParseResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
