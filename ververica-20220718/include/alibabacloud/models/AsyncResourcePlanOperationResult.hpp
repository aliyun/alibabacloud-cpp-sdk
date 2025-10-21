// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCRESOURCEPLANOPERATIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_ASYNCRESOURCEPLANOPERATIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class AsyncResourcePlanOperationResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncResourcePlanOperationResult& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(ticketStatus, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncResourcePlanOperationResult& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(ticketStatus, ticketStatus_);
    };
    AsyncResourcePlanOperationResult() = default ;
    AsyncResourcePlanOperationResult(const AsyncResourcePlanOperationResult &) = default ;
    AsyncResourcePlanOperationResult(AsyncResourcePlanOperationResult &&) = default ;
    AsyncResourcePlanOperationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncResourcePlanOperationResult() = default ;
    AsyncResourcePlanOperationResult& operator=(const AsyncResourcePlanOperationResult &) = default ;
    AsyncResourcePlanOperationResult& operator=(AsyncResourcePlanOperationResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->plan_ == nullptr && return this->ticketStatus_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AsyncResourcePlanOperationResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string plan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline AsyncResourcePlanOperationResult& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string ticketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline AsyncResourcePlanOperationResult& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> plan_ = nullptr;
    std::shared_ptr<string> ticketStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
