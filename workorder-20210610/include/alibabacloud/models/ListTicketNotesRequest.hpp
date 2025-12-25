// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketNotesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
    virtual bool empty() const override { return this->ticketId_ == nullptr
        && return this->uid_ == nullptr; };
    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ListTicketNotesRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListTicketNotesRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Work Order Number
    // 
    // This parameter is required.
    std::shared_ptr<string> ticketId_ = nullptr;
    // UID
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
