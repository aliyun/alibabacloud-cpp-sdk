// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadOutput.hpp>
#include <alibabacloud/models/RunHotTopicChatResponseBodyPayloadUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayload& obj) { 
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RunHotTopicChatResponseBodyPayload() = default ;
    RunHotTopicChatResponseBodyPayload(const RunHotTopicChatResponseBodyPayload &) = default ;
    RunHotTopicChatResponseBodyPayload(RunHotTopicChatResponseBodyPayload &&) = default ;
    RunHotTopicChatResponseBodyPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayload() = default ;
    RunHotTopicChatResponseBodyPayload& operator=(const RunHotTopicChatResponseBodyPayload &) = default ;
    RunHotTopicChatResponseBodyPayload& operator=(RunHotTopicChatResponseBodyPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->output_ == nullptr
        && return this->usage_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::RunHotTopicChatResponseBodyPayloadOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::RunHotTopicChatResponseBodyPayloadOutput) };
    inline Models::RunHotTopicChatResponseBodyPayloadOutput output() { DARABONBA_PTR_GET(output_, Models::RunHotTopicChatResponseBodyPayloadOutput) };
    inline RunHotTopicChatResponseBodyPayload& setOutput(const Models::RunHotTopicChatResponseBodyPayloadOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline RunHotTopicChatResponseBodyPayload& setOutput(Models::RunHotTopicChatResponseBodyPayloadOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::RunHotTopicChatResponseBodyPayloadUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::RunHotTopicChatResponseBodyPayloadUsage) };
    inline Models::RunHotTopicChatResponseBodyPayloadUsage usage() { DARABONBA_PTR_GET(usage_, Models::RunHotTopicChatResponseBodyPayloadUsage) };
    inline RunHotTopicChatResponseBodyPayload& setUsage(const Models::RunHotTopicChatResponseBodyPayloadUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RunHotTopicChatResponseBodyPayload& setUsage(Models::RunHotTopicChatResponseBodyPayloadUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<Models::RunHotTopicChatResponseBodyPayloadOutput> output_ = nullptr;
    std::shared_ptr<Models::RunHotTopicChatResponseBodyPayloadUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
