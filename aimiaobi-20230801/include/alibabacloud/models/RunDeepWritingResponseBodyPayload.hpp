// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDeepWritingResponseBodyPayloadOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    RunDeepWritingResponseBodyPayload() = default ;
    RunDeepWritingResponseBodyPayload(const RunDeepWritingResponseBodyPayload &) = default ;
    RunDeepWritingResponseBodyPayload(RunDeepWritingResponseBodyPayload &&) = default ;
    RunDeepWritingResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBodyPayload() = default ;
    RunDeepWritingResponseBodyPayload& operator=(const RunDeepWritingResponseBodyPayload &) = default ;
    RunDeepWritingResponseBodyPayload& operator=(RunDeepWritingResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunDeepWritingResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunDeepWritingResponseBodyPayloadOutput) };
    inline Models::RunDeepWritingResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunDeepWritingResponseBodyPayloadOutput) };
    inline RunDeepWritingResponseBodyPayload& setOutput(const Models::RunDeepWritingResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunDeepWritingResponseBodyPayload& setOutput(Models::RunDeepWritingResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


  protected:
    std::shared_ptr<Models::RunDeepWritingResponseBodyPayloadOutput> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
