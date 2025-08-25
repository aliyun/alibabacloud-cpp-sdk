// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECALLSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECALLSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateCallSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCallSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCallSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
    };
    UpdateCallSummaryRequest() = default ;
    UpdateCallSummaryRequest(const UpdateCallSummaryRequest &) = default ;
    UpdateCallSummaryRequest(UpdateCallSummaryRequest &&) = default ;
    UpdateCallSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCallSummaryRequest() = default ;
    UpdateCallSummaryRequest& operator=(const UpdateCallSummaryRequest &) = default ;
    UpdateCallSummaryRequest& operator=(UpdateCallSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->instanceId_ != nullptr && this->ticketId_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline UpdateCallSummaryRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCallSummaryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline UpdateCallSummaryRequest& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ticketId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
