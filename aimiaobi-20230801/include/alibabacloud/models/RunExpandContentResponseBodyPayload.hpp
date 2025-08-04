// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNEXPANDCONTENTRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNEXPANDCONTENTRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunExpandContentResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunExpandContentResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunExpandContentResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunExpandContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunExpandContentResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    RunExpandContentResponseBodyPayload() = default ;
    RunExpandContentResponseBodyPayload(const RunExpandContentResponseBodyPayload &) = default ;
    RunExpandContentResponseBodyPayload(RunExpandContentResponseBodyPayload &&) = default ;
    RunExpandContentResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunExpandContentResponseBodyPayload() = default ;
    RunExpandContentResponseBodyPayload& operator=(const RunExpandContentResponseBodyPayload &) = default ;
    RunExpandContentResponseBodyPayload& operator=(RunExpandContentResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->output_ != nullptr
        && this->usage_ != nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunExpandContentResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunExpandContentResponseBodyPayloadOutput) };
    inline Models::RunExpandContentResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunExpandContentResponseBodyPayloadOutput) };
    inline RunExpandContentResponseBodyPayload& setOutput(const Models::RunExpandContentResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunExpandContentResponseBodyPayload& setOutput(Models::RunExpandContentResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunExpandContentResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunExpandContentResponseBodyPayloadUsage) };
    inline Models::RunExpandContentResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunExpandContentResponseBodyPayloadUsage) };
    inline RunExpandContentResponseBodyPayload& setUsage(const Models::RunExpandContentResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunExpandContentResponseBodyPayload& setUsage(Models::RunExpandContentResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunExpandContentResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunExpandContentResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
