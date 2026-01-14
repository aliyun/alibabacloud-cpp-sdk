// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELAYTICKETEXPIRETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELAYTICKETEXPIRETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DelayTicketExpireTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DelayTicketExpireTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, DelayTicketExpireTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    DelayTicketExpireTimeRequest() = default ;
    DelayTicketExpireTimeRequest(const DelayTicketExpireTimeRequest &) = default ;
    DelayTicketExpireTimeRequest(DelayTicketExpireTimeRequest &&) = default ;
    DelayTicketExpireTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DelayTicketExpireTimeRequest() = default ;
    DelayTicketExpireTimeRequest& operator=(const DelayTicketExpireTimeRequest &) = default ;
    DelayTicketExpireTimeRequest& operator=(DelayTicketExpireTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->ticket_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline DelayTicketExpireTimeRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline DelayTicketExpireTimeRequest& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The time to postpone.
    // 
    // *   Unit: minutes. Valid values: 0 to 240. Unit: minutes. Valid values: 4 hours.
    // *   Expired bills cannot be extended.
    // 
    // This parameter is required.
    shared_ptr<int32_t> expireTime_ {};
    // The value of the third-party embedded ticket, that is, the accessTicket value in the URL.
    // 
    // This parameter is required.
    shared_ptr<string> ticket_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
