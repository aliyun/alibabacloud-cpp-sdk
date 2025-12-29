// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATESCREENSAVERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATESCREENSAVERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateScreenSaverShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateScreenSaverShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(HotelScreenSaver, hotelScreenSaverShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateScreenSaverShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(HotelScreenSaver, hotelScreenSaverShrink_);
    };
    AddOrUpdateScreenSaverShrinkRequest() = default ;
    AddOrUpdateScreenSaverShrinkRequest(const AddOrUpdateScreenSaverShrinkRequest &) = default ;
    AddOrUpdateScreenSaverShrinkRequest(AddOrUpdateScreenSaverShrinkRequest &&) = default ;
    AddOrUpdateScreenSaverShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateScreenSaverShrinkRequest() = default ;
    AddOrUpdateScreenSaverShrinkRequest& operator=(const AddOrUpdateScreenSaverShrinkRequest &) = default ;
    AddOrUpdateScreenSaverShrinkRequest& operator=(AddOrUpdateScreenSaverShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->hotelScreenSaverShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateScreenSaverShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelScreenSaverShrink Field Functions 
    bool hasHotelScreenSaverShrink() const { return this->hotelScreenSaverShrink_ != nullptr;};
    void deleteHotelScreenSaverShrink() { this->hotelScreenSaverShrink_ = nullptr;};
    inline string getHotelScreenSaverShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelScreenSaverShrink_, "") };
    inline AddOrUpdateScreenSaverShrinkRequest& setHotelScreenSaverShrink(string hotelScreenSaverShrink) { DARABONBA_PTR_SET_VALUE(hotelScreenSaverShrink_, hotelScreenSaverShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> hotelScreenSaverShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
