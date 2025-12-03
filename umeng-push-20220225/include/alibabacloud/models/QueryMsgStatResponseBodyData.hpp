// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMSGSTATRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYMSGSTATRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class QueryMsgStatResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMsgStatResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Accept, accept_);
      DARABONBA_PTR_TO_JSON(Arrive, arrive_);
      DARABONBA_PTR_TO_JSON(ClosePush, closePush_);
      DARABONBA_PTR_TO_JSON(Dismiss, dismiss_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(Open, open_);
      DARABONBA_PTR_TO_JSON(Sent, sent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMsgStatResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Accept, accept_);
      DARABONBA_PTR_FROM_JSON(Arrive, arrive_);
      DARABONBA_PTR_FROM_JSON(ClosePush, closePush_);
      DARABONBA_PTR_FROM_JSON(Dismiss, dismiss_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(Open, open_);
      DARABONBA_PTR_FROM_JSON(Sent, sent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryMsgStatResponseBodyData() = default ;
    QueryMsgStatResponseBodyData(const QueryMsgStatResponseBodyData &) = default ;
    QueryMsgStatResponseBodyData(QueryMsgStatResponseBodyData &&) = default ;
    QueryMsgStatResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMsgStatResponseBodyData() = default ;
    QueryMsgStatResponseBodyData& operator=(const QueryMsgStatResponseBodyData &) = default ;
    QueryMsgStatResponseBodyData& operator=(QueryMsgStatResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accept_ == nullptr
        && return this->arrive_ == nullptr && return this->closePush_ == nullptr && return this->dismiss_ == nullptr && return this->msgId_ == nullptr && return this->open_ == nullptr
        && return this->sent_ == nullptr && return this->status_ == nullptr; };
    // accept Field Functions 
    bool hasAccept() const { return this->accept_ != nullptr;};
    void deleteAccept() { this->accept_ = nullptr;};
    inline int64_t accept() const { DARABONBA_PTR_GET_DEFAULT(accept_, 0L) };
    inline QueryMsgStatResponseBodyData& setAccept(int64_t accept) { DARABONBA_PTR_SET_VALUE(accept_, accept) };


    // arrive Field Functions 
    bool hasArrive() const { return this->arrive_ != nullptr;};
    void deleteArrive() { this->arrive_ = nullptr;};
    inline int64_t arrive() const { DARABONBA_PTR_GET_DEFAULT(arrive_, 0L) };
    inline QueryMsgStatResponseBodyData& setArrive(int64_t arrive) { DARABONBA_PTR_SET_VALUE(arrive_, arrive) };


    // closePush Field Functions 
    bool hasClosePush() const { return this->closePush_ != nullptr;};
    void deleteClosePush() { this->closePush_ = nullptr;};
    inline int64_t closePush() const { DARABONBA_PTR_GET_DEFAULT(closePush_, 0L) };
    inline QueryMsgStatResponseBodyData& setClosePush(int64_t closePush) { DARABONBA_PTR_SET_VALUE(closePush_, closePush) };


    // dismiss Field Functions 
    bool hasDismiss() const { return this->dismiss_ != nullptr;};
    void deleteDismiss() { this->dismiss_ = nullptr;};
    inline int64_t dismiss() const { DARABONBA_PTR_GET_DEFAULT(dismiss_, 0L) };
    inline QueryMsgStatResponseBodyData& setDismiss(int64_t dismiss) { DARABONBA_PTR_SET_VALUE(dismiss_, dismiss) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline QueryMsgStatResponseBodyData& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // open Field Functions 
    bool hasOpen() const { return this->open_ != nullptr;};
    void deleteOpen() { this->open_ = nullptr;};
    inline int64_t open() const { DARABONBA_PTR_GET_DEFAULT(open_, 0L) };
    inline QueryMsgStatResponseBodyData& setOpen(int64_t open) { DARABONBA_PTR_SET_VALUE(open_, open) };


    // sent Field Functions 
    bool hasSent() const { return this->sent_ != nullptr;};
    void deleteSent() { this->sent_ = nullptr;};
    inline int64_t sent() const { DARABONBA_PTR_GET_DEFAULT(sent_, 0L) };
    inline QueryMsgStatResponseBodyData& setSent(int64_t sent) { DARABONBA_PTR_SET_VALUE(sent_, sent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryMsgStatResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> accept_ = nullptr;
    std::shared_ptr<int64_t> arrive_ = nullptr;
    std::shared_ptr<int64_t> closePush_ = nullptr;
    std::shared_ptr<int64_t> dismiss_ = nullptr;
    std::shared_ptr<string> msgId_ = nullptr;
    std::shared_ptr<int64_t> open_ = nullptr;
    std::shared_ptr<int64_t> sent_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
