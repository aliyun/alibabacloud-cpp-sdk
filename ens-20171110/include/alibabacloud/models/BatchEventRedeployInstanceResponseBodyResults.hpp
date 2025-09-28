// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCERESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    BatchEventRedeployInstanceResponseBodyResults() = default ;
    BatchEventRedeployInstanceResponseBodyResults(const BatchEventRedeployInstanceResponseBodyResults &) = default ;
    BatchEventRedeployInstanceResponseBodyResults(BatchEventRedeployInstanceResponseBodyResults &&) = default ;
    BatchEventRedeployInstanceResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceResponseBodyResults() = default ;
    BatchEventRedeployInstanceResponseBodyResults& operator=(const BatchEventRedeployInstanceResponseBodyResults &) = default ;
    BatchEventRedeployInstanceResponseBodyResults& operator=(BatchEventRedeployInstanceResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->eventId_ != nullptr && this->message_ != nullptr && this->resourceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline BatchEventRedeployInstanceResponseBodyResults& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline BatchEventRedeployInstanceResponseBodyResults& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchEventRedeployInstanceResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline BatchEventRedeployInstanceResponseBodyResults& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
