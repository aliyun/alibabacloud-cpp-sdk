// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCONSOLEMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCONSOLEMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SendConsoleMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendConsoleMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, SendConsoleMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    SendConsoleMessageRequest() = default ;
    SendConsoleMessageRequest(const SendConsoleMessageRequest &) = default ;
    SendConsoleMessageRequest(SendConsoleMessageRequest &&) = default ;
    SendConsoleMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendConsoleMessageRequest() = default ;
    SendConsoleMessageRequest& operator=(const SendConsoleMessageRequest &) = default ;
    SendConsoleMessageRequest& operator=(SendConsoleMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SendConsoleMessageRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The ID of the console message to be sent. You can obtain the ID from the return value of the message creation operation or the query result of DescribeConsoleMessages. Each call supports only one message ID, and the message must belong to the current Alibaba Cloud account. Only messages in the Published state can be sent.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
