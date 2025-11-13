// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATAMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATAMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListWaitingChatsResponseBodyDataMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingChatsResponseBodyDataMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderType, senderType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingChatsResponseBodyDataMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
    };
    ListWaitingChatsResponseBodyDataMessages() = default ;
    ListWaitingChatsResponseBodyDataMessages(const ListWaitingChatsResponseBodyDataMessages &) = default ;
    ListWaitingChatsResponseBodyDataMessages(ListWaitingChatsResponseBodyDataMessages &&) = default ;
    ListWaitingChatsResponseBodyDataMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingChatsResponseBodyDataMessages() = default ;
    ListWaitingChatsResponseBodyDataMessages& operator=(const ListWaitingChatsResponseBodyDataMessages &) = default ;
    ListWaitingChatsResponseBodyDataMessages& operator=(ListWaitingChatsResponseBodyDataMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->senderId_ == nullptr && return this->senderType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListWaitingChatsResponseBodyDataMessages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ListWaitingChatsResponseBodyDataMessages& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderType Field Functions 
    bool hasSenderType() const { return this->senderType_ != nullptr;};
    void deleteSenderType() { this->senderType_ = nullptr;};
    inline string senderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, "") };
    inline ListWaitingChatsResponseBodyDataMessages& setSenderType(string senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> senderId_ = nullptr;
    std::shared_ptr<string> senderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
