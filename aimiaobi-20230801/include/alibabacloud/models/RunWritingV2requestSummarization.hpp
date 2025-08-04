// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTSUMMARIZATION_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2REQUESTSUMMARIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2RequestSummarization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2RequestSummarization& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2RequestSummarization& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    RunWritingV2RequestSummarization() = default ;
    RunWritingV2RequestSummarization(const RunWritingV2RequestSummarization &) = default ;
    RunWritingV2RequestSummarization(RunWritingV2RequestSummarization &&) = default ;
    RunWritingV2RequestSummarization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2RequestSummarization() = default ;
    RunWritingV2RequestSummarization& operator=(const RunWritingV2RequestSummarization &) = default ;
    RunWritingV2RequestSummarization& operator=(RunWritingV2RequestSummarization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->message_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline RunWritingV2RequestSummarization& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunWritingV2RequestSummarization& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
