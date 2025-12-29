// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSCENEITEMDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSCENEITEMDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelSceneItemDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelSceneItemDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelSceneItemDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetHotelSceneItemDetailRequest() = default ;
    GetHotelSceneItemDetailRequest(const GetHotelSceneItemDetailRequest &) = default ;
    GetHotelSceneItemDetailRequest(GetHotelSceneItemDetailRequest &&) = default ;
    GetHotelSceneItemDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelSceneItemDetailRequest() = default ;
    GetHotelSceneItemDetailRequest& operator=(const GetHotelSceneItemDetailRequest &) = default ;
    GetHotelSceneItemDetailRequest& operator=(GetHotelSceneItemDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->itemId_ == nullptr && this->name_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline GetHotelSceneItemDetailRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline GetHotelSceneItemDetailRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetHotelSceneItemDetailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // hotelID
    // 
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<int64_t> itemId_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
