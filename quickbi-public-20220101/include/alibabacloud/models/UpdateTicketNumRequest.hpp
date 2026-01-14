// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETICKETNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETICKETNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateTicketNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTicketNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
      DARABONBA_PTR_TO_JSON(TicketNum, ticketNum_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTicketNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
      DARABONBA_PTR_FROM_JSON(TicketNum, ticketNum_);
    };
    UpdateTicketNumRequest() = default ;
    UpdateTicketNumRequest(const UpdateTicketNumRequest &) = default ;
    UpdateTicketNumRequest(UpdateTicketNumRequest &&) = default ;
    UpdateTicketNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTicketNumRequest() = default ;
    UpdateTicketNumRequest& operator=(const UpdateTicketNumRequest &) = default ;
    UpdateTicketNumRequest& operator=(UpdateTicketNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticket_ == nullptr
        && this->ticketNum_ == nullptr; };
    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string getTicket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline UpdateTicketNumRequest& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


    // ticketNum Field Functions 
    bool hasTicketNum() const { return this->ticketNum_ != nullptr;};
    void deleteTicketNum() { this->ticketNum_ = nullptr;};
    inline int32_t getTicketNum() const { DARABONBA_PTR_GET_DEFAULT(ticketNum_, 0) };
    inline UpdateTicketNumRequest& setTicketNum(int32_t ticketNum) { DARABONBA_PTR_SET_VALUE(ticketNum_, ticketNum) };


  protected:
    // The value of the third-party embedded ticket, that is, the accessTicket value in the URL.
    // 
    // This parameter is required.
    shared_ptr<string> ticket_ {};
    // The number of bills.
    // 
    // *   Valid values: 1 to 99998. Recommended value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ticketNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
