// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
namespace Models
{
  class ListTicketNotesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
    };
    ListTicketNotesRequest() = default ;
    ListTicketNotesRequest(const ListTicketNotesRequest &) = default ;
    ListTicketNotesRequest(ListTicketNotesRequest &&) = default ;
    ListTicketNotesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketNotesRequest() = default ;
    ListTicketNotesRequest& operator=(const ListTicketNotesRequest &) = default ;
    ListTicketNotesRequest& operator=(ListTicketNotesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->ticketId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListTicketNotesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketNotesRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> ticketId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200326
#endif
