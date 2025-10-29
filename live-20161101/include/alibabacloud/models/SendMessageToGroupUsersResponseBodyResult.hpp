// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPUSERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPUSERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendMessageToGroupUsersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageToGroupUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageToGroupUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    SendMessageToGroupUsersResponseBodyResult() = default ;
    SendMessageToGroupUsersResponseBodyResult(const SendMessageToGroupUsersResponseBodyResult &) = default ;
    SendMessageToGroupUsersResponseBodyResult(SendMessageToGroupUsersResponseBodyResult &&) = default ;
    SendMessageToGroupUsersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageToGroupUsersResponseBodyResult() = default ;
    SendMessageToGroupUsersResponseBodyResult& operator=(const SendMessageToGroupUsersResponseBodyResult &) = default ;
    SendMessageToGroupUsersResponseBodyResult& operator=(SendMessageToGroupUsersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SendMessageToGroupUsersResponseBodyResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // The ID of the message.
    std::shared_ptr<string> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
