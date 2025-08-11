// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryTicketInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTicketInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ticket, ticket_);
    };
    QueryTicketInfoRequest() = default ;
    QueryTicketInfoRequest(const QueryTicketInfoRequest &) = default ;
    QueryTicketInfoRequest(QueryTicketInfoRequest &&) = default ;
    QueryTicketInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketInfoRequest() = default ;
    QueryTicketInfoRequest& operator=(const QueryTicketInfoRequest &) = default ;
    QueryTicketInfoRequest& operator=(QueryTicketInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ticket_ != nullptr; };
    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline QueryTicketInfoRequest& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    // The value of the bill.
    // 
    // This parameter is required.
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
