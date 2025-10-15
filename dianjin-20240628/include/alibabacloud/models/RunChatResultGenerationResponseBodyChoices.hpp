// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYCHOICES_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONRESPONSEBODYCHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunChatResultGenerationResponseBodyChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationResponseBodyChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationResponseBodyChoices& obj) { 
      DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationResponseBodyChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    RunChatResultGenerationResponseBodyChoices() = default ;
    RunChatResultGenerationResponseBodyChoices(const RunChatResultGenerationResponseBodyChoices &) = default ;
    RunChatResultGenerationResponseBodyChoices(RunChatResultGenerationResponseBodyChoices &&) = default ;
    RunChatResultGenerationResponseBodyChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationResponseBodyChoices() = default ;
    RunChatResultGenerationResponseBodyChoices& operator=(const RunChatResultGenerationResponseBodyChoices &) = default ;
    RunChatResultGenerationResponseBodyChoices& operator=(RunChatResultGenerationResponseBodyChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishReason_ == nullptr
        && return this->index_ == nullptr && return this->message_ == nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline RunChatResultGenerationResponseBodyChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RunChatResultGenerationResponseBodyChoices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::RunChatResultGenerationResponseBodyChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::RunChatResultGenerationResponseBodyChoicesMessage) };
    inline Models::RunChatResultGenerationResponseBodyChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::RunChatResultGenerationResponseBodyChoicesMessage) };
    inline RunChatResultGenerationResponseBodyChoices& setMessage(const Models::RunChatResultGenerationResponseBodyChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline RunChatResultGenerationResponseBodyChoices& setMessage(Models::RunChatResultGenerationResponseBodyChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::RunChatResultGenerationResponseBodyChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
