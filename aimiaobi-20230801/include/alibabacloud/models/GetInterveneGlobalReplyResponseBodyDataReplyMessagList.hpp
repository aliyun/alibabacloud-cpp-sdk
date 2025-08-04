// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODYDATAREPLYMESSAGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODYDATAREPLYMESSAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneGlobalReplyResponseBodyDataReplyMessagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneGlobalReplyResponseBodyDataReplyMessagList& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReplyType, replyType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneGlobalReplyResponseBodyDataReplyMessagList& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReplyType, replyType_);
    };
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList() = default ;
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList(const GetInterveneGlobalReplyResponseBodyDataReplyMessagList &) = default ;
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList(GetInterveneGlobalReplyResponseBodyDataReplyMessagList &&) = default ;
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneGlobalReplyResponseBodyDataReplyMessagList() = default ;
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList& operator=(const GetInterveneGlobalReplyResponseBodyDataReplyMessagList &) = default ;
    GetInterveneGlobalReplyResponseBodyDataReplyMessagList& operator=(GetInterveneGlobalReplyResponseBodyDataReplyMessagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->replyType_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInterveneGlobalReplyResponseBodyDataReplyMessagList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // replyType Field Functions 
    bool hasReplyType() const { return this->replyType_ != nullptr;};
    void deleteReplyType() { this->replyType_ = nullptr;};
    inline string replyType() const { DARABONBA_PTR_GET_DEFAULT(replyType_, "") };
    inline GetInterveneGlobalReplyResponseBodyDataReplyMessagList& setReplyType(string replyType) { DARABONBA_PTR_SET_VALUE(replyType_, replyType) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> replyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
