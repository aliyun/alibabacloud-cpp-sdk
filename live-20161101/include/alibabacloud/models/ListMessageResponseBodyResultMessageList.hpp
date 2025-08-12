// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYRESULTMESSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYRESULTMESSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMessageResponseBodyResultMessageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyResultMessageList& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyResultMessageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListMessageResponseBodyResultMessageList() = default ;
    ListMessageResponseBodyResultMessageList(const ListMessageResponseBodyResultMessageList &) = default ;
    ListMessageResponseBodyResultMessageList(ListMessageResponseBodyResultMessageList &&) = default ;
    ListMessageResponseBodyResultMessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyResultMessageList() = default ;
    ListMessageResponseBodyResultMessageList& operator=(const ListMessageResponseBodyResultMessageList &) = default ;
    ListMessageResponseBodyResultMessageList& operator=(ListMessageResponseBodyResultMessageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->groupId_ != nullptr && this->messageId_ != nullptr && this->senderId_ != nullptr && this->type_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListMessageResponseBodyResultMessageList& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListMessageResponseBodyResultMessageList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListMessageResponseBodyResultMessageList& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ListMessageResponseBodyResultMessageList& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListMessageResponseBodyResultMessageList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The message body. The value is a JSON string.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the message group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the message.
    std::shared_ptr<string> messageId_ = nullptr;
    // The ID of the user who sent the message.
    std::shared_ptr<string> senderId_ = nullptr;
    // The type of the message.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
