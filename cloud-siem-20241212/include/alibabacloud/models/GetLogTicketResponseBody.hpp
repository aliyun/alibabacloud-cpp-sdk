// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetLogTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogTicket, logTicket_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogTicket, logTicket_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLogTicketResponseBody() = default ;
    GetLogTicketResponseBody(const GetLogTicketResponseBody &) = default ;
    GetLogTicketResponseBody(GetLogTicketResponseBody &&) = default ;
    GetLogTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogTicketResponseBody() = default ;
    GetLogTicketResponseBody& operator=(const GetLogTicketResponseBody &) = default ;
    GetLogTicketResponseBody& operator=(GetLogTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logTicket_ == nullptr
        && return this->requestId_ == nullptr; };
    // logTicket Field Functions 
    bool hasLogTicket() const { return this->logTicket_ != nullptr;};
    void deleteLogTicket() { this->logTicket_ = nullptr;};
    inline string logTicket() const { DARABONBA_PTR_GET_DEFAULT(logTicket_, "") };
    inline GetLogTicketResponseBody& setLogTicket(string logTicket) { DARABONBA_PTR_SET_VALUE(logTicket_, logTicket) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> logTicket_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
