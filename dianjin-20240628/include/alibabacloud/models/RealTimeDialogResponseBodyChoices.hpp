// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODYCHOICES_HPP_
#define ALIBABACLOUD_MODELS_REALTIMEDIALOGRESPONSEBODYCHOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RealTimeDialogResponseBodyChoicesDelta.hpp>
#include <alibabacloud/models/RealTimeDialogResponseBodyChoicesMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RealTimeDialogResponseBodyChoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeDialogResponseBodyChoices& obj) { 
      DARABONBA_PTR_TO_JSON(delta, delta_);
      DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeDialogResponseBodyChoices& obj) { 
      DARABONBA_PTR_FROM_JSON(delta, delta_);
      DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    RealTimeDialogResponseBodyChoices() = default ;
    RealTimeDialogResponseBodyChoices(const RealTimeDialogResponseBodyChoices &) = default ;
    RealTimeDialogResponseBodyChoices(RealTimeDialogResponseBodyChoices &&) = default ;
    RealTimeDialogResponseBodyChoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeDialogResponseBodyChoices() = default ;
    RealTimeDialogResponseBodyChoices& operator=(const RealTimeDialogResponseBodyChoices &) = default ;
    RealTimeDialogResponseBodyChoices& operator=(RealTimeDialogResponseBodyChoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delta_ != nullptr
        && this->finishReason_ != nullptr && this->index_ != nullptr && this->message_ != nullptr; };
    // delta Field Functions 
    bool hasDelta() const { return this->delta_ != nullptr;};
    void deleteDelta() { this->delta_ = nullptr;};
    inline const Models::RealTimeDialogResponseBodyChoicesDelta & delta() const { DARABONBA_PTR_GET_CONST(delta_, Models::RealTimeDialogResponseBodyChoicesDelta) };
    inline Models::RealTimeDialogResponseBodyChoicesDelta delta() { DARABONBA_PTR_GET(delta_, Models::RealTimeDialogResponseBodyChoicesDelta) };
    inline RealTimeDialogResponseBodyChoices& setDelta(const Models::RealTimeDialogResponseBodyChoicesDelta & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
    inline RealTimeDialogResponseBodyChoices& setDelta(Models::RealTimeDialogResponseBodyChoicesDelta && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline RealTimeDialogResponseBodyChoices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RealTimeDialogResponseBodyChoices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const Models::RealTimeDialogResponseBodyChoicesMessage & message() const { DARABONBA_PTR_GET_CONST(message_, Models::RealTimeDialogResponseBodyChoicesMessage) };
    inline Models::RealTimeDialogResponseBodyChoicesMessage message() { DARABONBA_PTR_GET(message_, Models::RealTimeDialogResponseBodyChoicesMessage) };
    inline RealTimeDialogResponseBodyChoices& setMessage(const Models::RealTimeDialogResponseBodyChoicesMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline RealTimeDialogResponseBodyChoices& setMessage(Models::RealTimeDialogResponseBodyChoicesMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<Models::RealTimeDialogResponseBodyChoicesDelta> delta_ = nullptr;
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::RealTimeDialogResponseBodyChoicesMessage> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
