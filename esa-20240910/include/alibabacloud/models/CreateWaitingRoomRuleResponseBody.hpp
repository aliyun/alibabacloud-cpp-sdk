// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAITINGROOMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAITINGROOMRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateWaitingRoomRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWaitingRoomRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWaitingRoomRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    CreateWaitingRoomRuleResponseBody() = default ;
    CreateWaitingRoomRuleResponseBody(const CreateWaitingRoomRuleResponseBody &) = default ;
    CreateWaitingRoomRuleResponseBody(CreateWaitingRoomRuleResponseBody &&) = default ;
    CreateWaitingRoomRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWaitingRoomRuleResponseBody() = default ;
    CreateWaitingRoomRuleResponseBody& operator=(const CreateWaitingRoomRuleResponseBody &) = default ;
    CreateWaitingRoomRuleResponseBody& operator=(CreateWaitingRoomRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->waitingRoomRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWaitingRoomRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRoomRuleId Field Functions 
    bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
    void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
    inline int64_t getWaitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
    inline CreateWaitingRoomRuleResponseBody& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Waiting room bypass rule ID.
    shared_ptr<int64_t> waitingRoomRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
