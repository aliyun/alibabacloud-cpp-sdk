// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSETICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSETICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class CloseTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CloseTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CloseTicketRequest() = default ;
    CloseTicketRequest(const CloseTicketRequest &) = default ;
    CloseTicketRequest(CloseTicketRequest &&) = default ;
    CloseTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseTicketRequest() = default ;
    CloseTicketRequest& operator=(const CloseTicketRequest &) = default ;
    CloseTicketRequest& operator=(CloseTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticketId_ == nullptr
        && this->uid_ == nullptr; };
    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline CloseTicketRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CloseTicketRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The ticket ID.
    // 
    // This parameter is required.
    shared_ptr<string> ticketId_ {};
    // The user UID. You can find your UID by clicking the profile picture in the upper-right corner of the DMS console.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
