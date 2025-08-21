// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMESSAGETOANDROIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHMESSAGETOANDROIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushMessageToAndroidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMessageToAndroidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushMessageToAndroidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushMessageToAndroidResponseBody() = default ;
    PushMessageToAndroidResponseBody(const PushMessageToAndroidResponseBody &) = default ;
    PushMessageToAndroidResponseBody(PushMessageToAndroidResponseBody &&) = default ;
    PushMessageToAndroidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMessageToAndroidResponseBody() = default ;
    PushMessageToAndroidResponseBody& operator=(const PushMessageToAndroidResponseBody &) = default ;
    PushMessageToAndroidResponseBody& operator=(PushMessageToAndroidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageId_ != nullptr
        && this->requestId_ != nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline PushMessageToAndroidResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushMessageToAndroidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
