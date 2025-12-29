// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Rooms, rooms_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Rooms, rooms_);
    };
    ListHotelAlarmRequest() = default ;
    ListHotelAlarmRequest(const ListHotelAlarmRequest &) = default ;
    ListHotelAlarmRequest(ListHotelAlarmRequest &&) = default ;
    ListHotelAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelAlarmRequest() = default ;
    ListHotelAlarmRequest& operator=(const ListHotelAlarmRequest &) = default ;
    ListHotelAlarmRequest& operator=(ListHotelAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->rooms_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListHotelAlarmRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline const vector<string> & getRooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<string>) };
    inline vector<string> getRooms() { DARABONBA_PTR_GET(rooms_, vector<string>) };
    inline ListHotelAlarmRequest& setRooms(const vector<string> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
    inline ListHotelAlarmRequest& setRooms(vector<string> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


  protected:
    shared_ptr<string> hotelId_ {};
    shared_ptr<vector<string>> rooms_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
