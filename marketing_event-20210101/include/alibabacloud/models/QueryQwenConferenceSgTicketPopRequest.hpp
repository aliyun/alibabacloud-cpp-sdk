// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETPOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYQWENCONFERENCESGTICKETPOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QueryQwenConferenceSgTicketPopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQwenConferenceSgTicketPopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TicketToken, ticketToken_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQwenConferenceSgTicketPopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TicketToken, ticketToken_);
    };
    QueryQwenConferenceSgTicketPopRequest() = default ;
    QueryQwenConferenceSgTicketPopRequest(const QueryQwenConferenceSgTicketPopRequest &) = default ;
    QueryQwenConferenceSgTicketPopRequest(QueryQwenConferenceSgTicketPopRequest &&) = default ;
    QueryQwenConferenceSgTicketPopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQwenConferenceSgTicketPopRequest() = default ;
    QueryQwenConferenceSgTicketPopRequest& operator=(const QueryQwenConferenceSgTicketPopRequest &) = default ;
    QueryQwenConferenceSgTicketPopRequest& operator=(QueryQwenConferenceSgTicketPopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ticketToken_ == nullptr; };
    // ticketToken Field Functions 
    bool hasTicketToken() const { return this->ticketToken_ != nullptr;};
    void deleteTicketToken() { this->ticketToken_ = nullptr;};
    inline string getTicketToken() const { DARABONBA_PTR_GET_DEFAULT(ticketToken_, "") };
    inline QueryQwenConferenceSgTicketPopRequest& setTicketToken(string ticketToken) { DARABONBA_PTR_SET_VALUE(ticketToken_, ticketToken) };


  protected:
    shared_ptr<string> ticketToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
