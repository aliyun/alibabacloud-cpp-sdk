// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATEDISPLAYMODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATEDISPLAYMODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateDisPlayModesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateDisPlayModesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelDeviceModeList, hotelDeviceModeListShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateDisPlayModesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelDeviceModeList, hotelDeviceModeListShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    AddOrUpdateDisPlayModesShrinkRequest() = default ;
    AddOrUpdateDisPlayModesShrinkRequest(const AddOrUpdateDisPlayModesShrinkRequest &) = default ;
    AddOrUpdateDisPlayModesShrinkRequest(AddOrUpdateDisPlayModesShrinkRequest &&) = default ;
    AddOrUpdateDisPlayModesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateDisPlayModesShrinkRequest() = default ;
    AddOrUpdateDisPlayModesShrinkRequest& operator=(const AddOrUpdateDisPlayModesShrinkRequest &) = default ;
    AddOrUpdateDisPlayModesShrinkRequest& operator=(AddOrUpdateDisPlayModesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelDeviceModeListShrink_ == nullptr
        && this->hotelId_ == nullptr; };
    // hotelDeviceModeListShrink Field Functions 
    bool hasHotelDeviceModeListShrink() const { return this->hotelDeviceModeListShrink_ != nullptr;};
    void deleteHotelDeviceModeListShrink() { this->hotelDeviceModeListShrink_ = nullptr;};
    inline string getHotelDeviceModeListShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelDeviceModeListShrink_, "") };
    inline AddOrUpdateDisPlayModesShrinkRequest& setHotelDeviceModeListShrink(string hotelDeviceModeListShrink) { DARABONBA_PTR_SET_VALUE(hotelDeviceModeListShrink_, hotelDeviceModeListShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateDisPlayModesShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelDeviceModeListShrink_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
