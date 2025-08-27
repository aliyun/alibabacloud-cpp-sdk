// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelStaticInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_ids, hotelIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_ids, hotelIdsShrink_);
    };
    HotelStaticInfoShrinkRequest() = default ;
    HotelStaticInfoShrinkRequest(const HotelStaticInfoShrinkRequest &) = default ;
    HotelStaticInfoShrinkRequest(HotelStaticInfoShrinkRequest &&) = default ;
    HotelStaticInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoShrinkRequest() = default ;
    HotelStaticInfoShrinkRequest& operator=(const HotelStaticInfoShrinkRequest &) = default ;
    HotelStaticInfoShrinkRequest& operator=(HotelStaticInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelIdsShrink_ != nullptr; };
    // hotelIdsShrink Field Functions 
    bool hasHotelIdsShrink() const { return this->hotelIdsShrink_ != nullptr;};
    void deleteHotelIdsShrink() { this->hotelIdsShrink_ = nullptr;};
    inline string hotelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelIdsShrink_, "") };
    inline HotelStaticInfoShrinkRequest& setHotelIdsShrink(string hotelIdsShrink) { DARABONBA_PTR_SET_VALUE(hotelIdsShrink_, hotelIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> hotelIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
