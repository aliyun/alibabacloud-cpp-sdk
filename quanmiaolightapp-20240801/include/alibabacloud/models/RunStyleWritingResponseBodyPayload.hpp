// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunStyleWritingResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunStyleWritingResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunStyleWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunStyleWritingResponseBodyPayload() = default ;
    RunStyleWritingResponseBodyPayload(const RunStyleWritingResponseBodyPayload &) = default ;
    RunStyleWritingResponseBodyPayload(RunStyleWritingResponseBodyPayload &&) = default ;
    RunStyleWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleWritingResponseBodyPayload() = default ;
    RunStyleWritingResponseBodyPayload& operator=(const RunStyleWritingResponseBodyPayload &) = default ;
    RunStyleWritingResponseBodyPayload& operator=(RunStyleWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunStyleWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunStyleWritingResponseBodyPayloadOutput) };
    inline Models::RunStyleWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunStyleWritingResponseBodyPayloadOutput) };
    inline RunStyleWritingResponseBodyPayload& setOutput(const Models::RunStyleWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunStyleWritingResponseBodyPayload& setOutput(Models::RunStyleWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunStyleWritingResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunStyleWritingResponseBodyPayloadUsage) };
    inline Models::RunStyleWritingResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunStyleWritingResponseBodyPayloadUsage) };
    inline RunStyleWritingResponseBodyPayload& setUsage(const Models::RunStyleWritingResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunStyleWritingResponseBodyPayload& setUsage(Models::RunStyleWritingResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunStyleWritingResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunStyleWritingResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
