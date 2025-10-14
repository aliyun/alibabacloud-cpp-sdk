// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaitingRoomsResponseBodyWaitingRooms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRooms, waitingRooms_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRooms, waitingRooms_);
    };
    ListWaitingRoomsResponseBody() = default ;
    ListWaitingRoomsResponseBody(const ListWaitingRoomsResponseBody &) = default ;
    ListWaitingRoomsResponseBody(ListWaitingRoomsResponseBody &&) = default ;
    ListWaitingRoomsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomsResponseBody() = default ;
    ListWaitingRoomsResponseBody& operator=(const ListWaitingRoomsResponseBody &) = default ;
    ListWaitingRoomsResponseBody& operator=(ListWaitingRoomsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->waitingRooms_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingRoomsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRooms Field Functions 
    bool hasWaitingRooms() const { return this->waitingRooms_ != nullptr;};
    void deleteWaitingRooms() { this->waitingRooms_ = nullptr;};
    inline const vector<ListWaitingRoomsResponseBodyWaitingRooms> & waitingRooms() const { DARABONBA_PTR_GET_CONST(waitingRooms_, vector<ListWaitingRoomsResponseBodyWaitingRooms>) };
    inline vector<ListWaitingRoomsResponseBodyWaitingRooms> waitingRooms() { DARABONBA_PTR_GET(waitingRooms_, vector<ListWaitingRoomsResponseBodyWaitingRooms>) };
    inline ListWaitingRoomsResponseBody& setWaitingRooms(const vector<ListWaitingRoomsResponseBodyWaitingRooms> & waitingRooms) { DARABONBA_PTR_SET_VALUE(waitingRooms_, waitingRooms) };
    inline ListWaitingRoomsResponseBody& setWaitingRooms(vector<ListWaitingRoomsResponseBodyWaitingRooms> && waitingRooms) { DARABONBA_PTR_SET_RVALUE(waitingRooms_, waitingRooms) };


  protected:
    // The request ID, which is used to trace a call.
    std::shared_ptr<string> requestId_ = nullptr;
    // The waiting rooms.
    std::shared_ptr<vector<ListWaitingRoomsResponseBodyWaitingRooms>> waitingRooms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
