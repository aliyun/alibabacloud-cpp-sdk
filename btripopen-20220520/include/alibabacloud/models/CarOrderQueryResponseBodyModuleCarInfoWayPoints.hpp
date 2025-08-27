// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULECARINFOWAYPOINTS_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODYMODULECARINFOWAYPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderQueryResponseBodyModuleCarInfoWayPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryResponseBodyModuleCarInfoWayPoints& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(latitude, latitude_);
      DARABONBA_PTR_TO_JSON(longitude, longitude_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryResponseBodyModuleCarInfoWayPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(longitude, longitude_);
    };
    CarOrderQueryResponseBodyModuleCarInfoWayPoints() = default ;
    CarOrderQueryResponseBodyModuleCarInfoWayPoints(const CarOrderQueryResponseBodyModuleCarInfoWayPoints &) = default ;
    CarOrderQueryResponseBodyModuleCarInfoWayPoints(CarOrderQueryResponseBodyModuleCarInfoWayPoints &&) = default ;
    CarOrderQueryResponseBodyModuleCarInfoWayPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryResponseBodyModuleCarInfoWayPoints() = default ;
    CarOrderQueryResponseBodyModuleCarInfoWayPoints& operator=(const CarOrderQueryResponseBodyModuleCarInfoWayPoints &) = default ;
    CarOrderQueryResponseBodyModuleCarInfoWayPoints& operator=(CarOrderQueryResponseBodyModuleCarInfoWayPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->index_ != nullptr && this->latitude_ != nullptr && this->longitude_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfoWayPoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfoWayPoints& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline string latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfoWayPoints& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline string longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
    inline CarOrderQueryResponseBodyModuleCarInfoWayPoints& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> latitude_ = nullptr;
    std::shared_ptr<string> longitude_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
