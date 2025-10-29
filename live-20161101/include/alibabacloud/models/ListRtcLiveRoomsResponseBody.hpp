// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCLIVEROOMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCLIVEROOMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRTCLiveRoomsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRTCLiveRoomsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rooms, rooms_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListRTCLiveRoomsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rooms, rooms_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListRTCLiveRoomsResponseBody() = default ;
    ListRTCLiveRoomsResponseBody(const ListRTCLiveRoomsResponseBody &) = default ;
    ListRTCLiveRoomsResponseBody(ListRTCLiveRoomsResponseBody &&) = default ;
    ListRTCLiveRoomsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRTCLiveRoomsResponseBody() = default ;
    ListRTCLiveRoomsResponseBody& operator=(const ListRTCLiveRoomsResponseBody &) = default ;
    ListRTCLiveRoomsResponseBody& operator=(ListRTCLiveRoomsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rooms_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRTCLiveRoomsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline const vector<string> & rooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<string>) };
    inline vector<string> rooms() { DARABONBA_PTR_GET(rooms_, vector<string>) };
    inline ListRTCLiveRoomsResponseBody& setRooms(const vector<string> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
    inline ListRTCLiveRoomsResponseBody& setRooms(vector<string> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListRTCLiveRoomsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> rooms_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
