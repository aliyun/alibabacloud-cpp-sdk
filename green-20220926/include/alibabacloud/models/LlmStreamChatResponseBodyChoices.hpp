// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYCHOICES_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYCHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LlmStreamChatResponseBodyChoicesDelta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatResponseBodyChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatResponseBodyChoices& obj) { 
      DARABONBA_PTR_TO_JSON(Delta, delta_);
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Logprobs, logprobs_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatResponseBodyChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(Delta, delta_);
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Logprobs, logprobs_);
    };
    LlmStreamChatResponseBodyChoices() = default ;
    LlmStreamChatResponseBodyChoices(const LlmStreamChatResponseBodyChoices &) = default ;
    LlmStreamChatResponseBodyChoices(LlmStreamChatResponseBodyChoices &&) = default ;
    LlmStreamChatResponseBodyChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatResponseBodyChoices() = default ;
    LlmStreamChatResponseBodyChoices& operator=(const LlmStreamChatResponseBodyChoices &) = default ;
    LlmStreamChatResponseBodyChoices& operator=(LlmStreamChatResponseBodyChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delta_ == nullptr
        && return this->finishReason_ == nullptr && return this->index_ == nullptr && return this->logprobs_ == nullptr; };
    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline const Models::LlmStreamChatResponseBodyChoicesDelta & delta() const { DARABONBA_PTR_GET_CONST(delta_, Models::LlmStreamChatResponseBodyChoicesDelta) };
    inline Models::LlmStreamChatResponseBodyChoicesDelta delta() { DARABONBA_PTR_GET(delta_, Models::LlmStreamChatResponseBodyChoicesDelta) };
    inline LlmStreamChatResponseBodyChoices& setDelta(const Models::LlmStreamChatResponseBodyChoicesDelta & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
    inline LlmStreamChatResponseBodyChoices& setDelta(Models::LlmStreamChatResponseBodyChoicesDelta && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline LlmStreamChatResponseBodyChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline LlmStreamChatResponseBodyChoices& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline string logprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, "") };
    inline LlmStreamChatResponseBodyChoices& setLogprobs(string logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


  protected:
    // Incremental content object
    std::shared_ptr<Models::LlmStreamChatResponseBodyChoicesDelta> delta_ = nullptr;
    // For streaming output, it is null while generating and becomes \\"stop\\" if the generation ends due to a stop token.
    std::shared_ptr<string> finishReason_ = nullptr;
    // Stream sequence number
    std::shared_ptr<int64_t> index_ = nullptr;
    // Token probability information
    std::shared_ptr<string> logprobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
