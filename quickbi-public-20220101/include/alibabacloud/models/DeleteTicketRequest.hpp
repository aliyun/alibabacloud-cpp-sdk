// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    DeleteTicketRequest() = default ;
    DeleteTicketRequest(const DeleteTicketRequest &) = default ;
    DeleteTicketRequest(DeleteTicketRequest &&) = default ;
    DeleteTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTicketRequest() = default ;
    DeleteTicketRequest& operator=(const DeleteTicketRequest &) = default ;
    DeleteTicketRequest& operator=(DeleteTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ticket_ != nullptr; };
    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline DeleteTicketRequest& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The value of the third-party embedded ticket, which is the `accessTicket` in the URL.
    // 
    // This parameter is required.
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
