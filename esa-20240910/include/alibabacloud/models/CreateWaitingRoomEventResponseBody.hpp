// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAITINGROOMEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAITINGROOMEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateWaitingRoomEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWaitingRoomEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEventId, waitingRoomEventId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWaitingRoomEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEventId, waitingRoomEventId_);
    };
    CreateWaitingRoomEventResponseBody() = default ;
    CreateWaitingRoomEventResponseBody(const CreateWaitingRoomEventResponseBody &) = default ;
    CreateWaitingRoomEventResponseBody(CreateWaitingRoomEventResponseBody &&) = default ;
    CreateWaitingRoomEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWaitingRoomEventResponseBody() = default ;
    CreateWaitingRoomEventResponseBody& operator=(const CreateWaitingRoomEventResponseBody &) = default ;
    CreateWaitingRoomEventResponseBody& operator=(CreateWaitingRoomEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->waitingRoomEventId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWaitingRoomEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRoomEventId Field Functions 
    bool hasWaitingRoomEventId() const { return this->waitingRoomEventId_ != nullptr;};
    void deleteWaitingRoomEventId() { this->waitingRoomEventId_ = nullptr;};
    inline int64_t waitingRoomEventId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomEventId_, 0L) };
    inline CreateWaitingRoomEventResponseBody& setWaitingRoomEventId(int64_t waitingRoomEventId) { DARABONBA_PTR_SET_VALUE(waitingRoomEventId_, waitingRoomEventId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> waitingRoomEventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
