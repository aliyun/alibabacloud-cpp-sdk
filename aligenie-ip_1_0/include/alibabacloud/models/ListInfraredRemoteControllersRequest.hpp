// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFRAREDREMOTECONTROLLERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINFRAREDREMOTECONTROLLERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListInfraredRemoteControllersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfraredRemoteControllersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfraredRemoteControllersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
    };
    ListInfraredRemoteControllersRequest() = default ;
    ListInfraredRemoteControllersRequest(const ListInfraredRemoteControllersRequest &) = default ;
    ListInfraredRemoteControllersRequest(ListInfraredRemoteControllersRequest &&) = default ;
    ListInfraredRemoteControllersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfraredRemoteControllersRequest() = default ;
    ListInfraredRemoteControllersRequest& operator=(const ListInfraredRemoteControllersRequest &) = default ;
    ListInfraredRemoteControllersRequest& operator=(ListInfraredRemoteControllersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brand_ == nullptr
        && this->category_ == nullptr && this->city_ == nullptr && this->hotelId_ == nullptr && this->province_ == nullptr && this->serviceProvider_ == nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline ListInfraredRemoteControllersRequest& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListInfraredRemoteControllersRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline ListInfraredRemoteControllersRequest& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListInfraredRemoteControllersRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListInfraredRemoteControllersRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // serviceProvider Field Functions 
    bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
    void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
    inline string getServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
    inline ListInfraredRemoteControllersRequest& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


  protected:
    shared_ptr<string> brand_ {};
    // This parameter is required.
    shared_ptr<string> category_ {};
    shared_ptr<string> city_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> province_ {};
    shared_ptr<string> serviceProvider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
