// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSTATICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELSTATICINFOREQUEST_HPP_
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
  class HotelStaticInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelStaticInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotel_ids, hotelIds_);
    };
    friend void from_json(const Darabonba::Json& j, HotelStaticInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotel_ids, hotelIds_);
    };
    HotelStaticInfoRequest() = default ;
    HotelStaticInfoRequest(const HotelStaticInfoRequest &) = default ;
    HotelStaticInfoRequest(HotelStaticInfoRequest &&) = default ;
    HotelStaticInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelStaticInfoRequest() = default ;
    HotelStaticInfoRequest& operator=(const HotelStaticInfoRequest &) = default ;
    HotelStaticInfoRequest& operator=(HotelStaticInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotelIds_ != nullptr; };
    // hotelIds Field Functions 
    bool hasHotelIds() const { return this->hotelIds_ != nullptr;};
    void deleteHotelIds() { this->hotelIds_ = nullptr;};
    inline const vector<string> & hotelIds() const { DARABONBA_PTR_GET_CONST(hotelIds_, vector<string>) };
    inline vector<string> hotelIds() { DARABONBA_PTR_GET(hotelIds_, vector<string>) };
    inline HotelStaticInfoRequest& setHotelIds(const vector<string> & hotelIds) { DARABONBA_PTR_SET_VALUE(hotelIds_, hotelIds) };
    inline HotelStaticInfoRequest& setHotelIds(vector<string> && hotelIds) { DARABONBA_PTR_SET_RVALUE(hotelIds_, hotelIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> hotelIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
