// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REOPENTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REOPENTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ReopenTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReopenTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ReopenTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    ReopenTicketRequest() = default ;
    ReopenTicketRequest(const ReopenTicketRequest &) = default ;
    ReopenTicketRequest(ReopenTicketRequest &&) = default ;
    ReopenTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReopenTicketRequest() = default ;
    ReopenTicketRequest& operator=(const ReopenTicketRequest &) = default ;
    ReopenTicketRequest& operator=(ReopenTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->ticketId_ == nullptr && return this->uid_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ReopenTicketRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline ReopenTicketRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ReopenTicketRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Reply content of rework order
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
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
