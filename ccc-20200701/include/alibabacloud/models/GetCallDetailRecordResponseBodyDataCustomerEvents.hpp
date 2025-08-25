// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATACUSTOMEREVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATACUSTOMEREVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataCustomerEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataCustomerEvents& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(EventSequence, eventSequence_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataCustomerEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(EventSequence, eventSequence_);
    };
    GetCallDetailRecordResponseBodyDataCustomerEvents() = default ;
    GetCallDetailRecordResponseBodyDataCustomerEvents(const GetCallDetailRecordResponseBodyDataCustomerEvents &) = default ;
    GetCallDetailRecordResponseBodyDataCustomerEvents(GetCallDetailRecordResponseBodyDataCustomerEvents &&) = default ;
    GetCallDetailRecordResponseBodyDataCustomerEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataCustomerEvents() = default ;
    GetCallDetailRecordResponseBodyDataCustomerEvents& operator=(const GetCallDetailRecordResponseBodyDataCustomerEvents &) = default ;
    GetCallDetailRecordResponseBodyDataCustomerEvents& operator=(GetCallDetailRecordResponseBodyDataCustomerEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerId_ != nullptr
        && this->eventSequence_ != nullptr; };
    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetCallDetailRecordResponseBodyDataCustomerEvents& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // eventSequence Field Functions 
    bool hasEventSequence() const { return this->eventSequence_ != nullptr;};
    void deleteEventSequence() { this->eventSequence_ = nullptr;};
    inline const vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence> & eventSequence() const { DARABONBA_PTR_GET_CONST(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence>) };
    inline vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence> eventSequence() { DARABONBA_PTR_GET(eventSequence_, vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence>) };
    inline GetCallDetailRecordResponseBodyDataCustomerEvents& setEventSequence(const vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence> & eventSequence) { DARABONBA_PTR_SET_VALUE(eventSequence_, eventSequence) };
    inline GetCallDetailRecordResponseBodyDataCustomerEvents& setEventSequence(vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence> && eventSequence) { DARABONBA_PTR_SET_RVALUE(eventSequence_, eventSequence) };


  protected:
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<vector<Models::GetCallDetailRecordResponseBodyDataCustomerEventsEventSequence>> eventSequence_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
