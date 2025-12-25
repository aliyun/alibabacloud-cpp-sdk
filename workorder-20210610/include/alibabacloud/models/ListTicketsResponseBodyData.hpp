// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTicketsResponseBodyDataStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListTicketsResponseBodyData() = default ;
    ListTicketsResponseBodyData(const ListTicketsResponseBodyData &) = default ;
    ListTicketsResponseBodyData(ListTicketsResponseBodyData &&) = default ;
    ListTicketsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsResponseBodyData() = default ;
    ListTicketsResponseBodyData& operator=(const ListTicketsResponseBodyData &) = default ;
    ListTicketsResponseBodyData& operator=(ListTicketsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->ticketId_ == nullptr && return this->title_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::ListTicketsResponseBodyDataStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::ListTicketsResponseBodyDataStatus) };
    inline Models::ListTicketsResponseBodyDataStatus status() { DARABONBA_PTR_GET(status_, Models::ListTicketsResponseBodyDataStatus) };
    inline ListTicketsResponseBodyData& setStatus(const Models::ListTicketsResponseBodyDataStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListTicketsResponseBodyData& setStatus(Models::ListTicketsResponseBodyDataStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketsResponseBodyData& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListTicketsResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The status of the ticket. The reference values are as follows 1, "assigned", "Pending Response", 2, "handling", "handling", 3, "wait_feedback", "Pending feedback", 4: "feedback", "Feedback", 5, "wait_confirm", "To be confirmed", 6, "confirmed", "Completed"
    std::shared_ptr<Models::ListTicketsResponseBodyDataStatus> status_ = nullptr;
    // Work Order Number
    std::shared_ptr<string> ticketId_ = nullptr;
    // The title of the ticket.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
