// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYREQUESTROOMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYREQUESTROOMINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeApplyRequestRoomInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeApplyRequestRoomInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_date, cancelDate_);
      DARABONBA_PTR_TO_JSON(room_no, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeApplyRequestRoomInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_date, cancelDate_);
      DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
    };
    HotelOrderChangeApplyRequestRoomInfoList() = default ;
    HotelOrderChangeApplyRequestRoomInfoList(const HotelOrderChangeApplyRequestRoomInfoList &) = default ;
    HotelOrderChangeApplyRequestRoomInfoList(HotelOrderChangeApplyRequestRoomInfoList &&) = default ;
    HotelOrderChangeApplyRequestRoomInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeApplyRequestRoomInfoList() = default ;
    HotelOrderChangeApplyRequestRoomInfoList& operator=(const HotelOrderChangeApplyRequestRoomInfoList &) = default ;
    HotelOrderChangeApplyRequestRoomInfoList& operator=(HotelOrderChangeApplyRequestRoomInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelDate_ != nullptr
        && this->roomNo_ != nullptr; };
    // cancelDate Field Functions 
    bool hasCancelDate() const { return this->cancelDate_ != nullptr;};
    void deleteCancelDate() { this->cancelDate_ = nullptr;};
    inline const vector<string> & cancelDate() const { DARABONBA_PTR_GET_CONST(cancelDate_, vector<string>) };
    inline vector<string> cancelDate() { DARABONBA_PTR_GET(cancelDate_, vector<string>) };
    inline HotelOrderChangeApplyRequestRoomInfoList& setCancelDate(const vector<string> & cancelDate) { DARABONBA_PTR_SET_VALUE(cancelDate_, cancelDate) };
    inline HotelOrderChangeApplyRequestRoomInfoList& setCancelDate(vector<string> && cancelDate) { DARABONBA_PTR_SET_RVALUE(cancelDate_, cancelDate) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline int32_t roomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
    inline HotelOrderChangeApplyRequestRoomInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> cancelDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> roomNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
