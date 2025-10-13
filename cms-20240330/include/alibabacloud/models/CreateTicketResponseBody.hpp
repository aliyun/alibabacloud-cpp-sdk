// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ticket, ticket_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ticket, ticket_);
    };
    CreateTicketResponseBody() = default ;
    CreateTicketResponseBody(const CreateTicketResponseBody &) = default ;
    CreateTicketResponseBody(CreateTicketResponseBody &&) = default ;
    CreateTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketResponseBody() = default ;
    CreateTicketResponseBody& operator=(const CreateTicketResponseBody &) = default ;
    CreateTicketResponseBody& operator=(CreateTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticket_ == nullptr; };
    // ticket Field Functions 
    bool hasTicket() const { return this->ticket_ != nullptr;};
    void deleteTicket() { this->ticket_ = nullptr;};
    inline string ticket() const { DARABONBA_PTR_GET_DEFAULT(ticket_, "") };
    inline CreateTicketResponseBody& setTicket(string ticket) { DARABONBA_PTR_SET_VALUE(ticket_, ticket) };


  protected:
    std::shared_ptr<string> ticket_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
