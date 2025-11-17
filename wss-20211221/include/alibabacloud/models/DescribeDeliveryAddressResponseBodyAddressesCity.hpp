// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESCITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESCITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBodyAddressesCity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBodyAddressesCity& obj) { 
      DARABONBA_PTR_TO_JSON(CityId, cityId_);
      DARABONBA_PTR_TO_JSON(CityName, cityName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBodyAddressesCity& obj) { 
      DARABONBA_PTR_FROM_JSON(CityId, cityId_);
      DARABONBA_PTR_FROM_JSON(CityName, cityName_);
    };
    DescribeDeliveryAddressResponseBodyAddressesCity() = default ;
    DescribeDeliveryAddressResponseBodyAddressesCity(const DescribeDeliveryAddressResponseBodyAddressesCity &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesCity(DescribeDeliveryAddressResponseBodyAddressesCity &&) = default ;
    DescribeDeliveryAddressResponseBodyAddressesCity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBodyAddressesCity() = default ;
    DescribeDeliveryAddressResponseBodyAddressesCity& operator=(const DescribeDeliveryAddressResponseBodyAddressesCity &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesCity& operator=(DescribeDeliveryAddressResponseBodyAddressesCity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityId_ == nullptr
        && return this->cityName_ == nullptr; };
    // cityId Field Functions 
    bool hasCityId() const { return this->cityId_ != nullptr;};
    void deleteCityId() { this->cityId_ = nullptr;};
    inline int64_t cityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, 0L) };
    inline DescribeDeliveryAddressResponseBodyAddressesCity& setCityId(int64_t cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline DescribeDeliveryAddressResponseBodyAddressesCity& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


  protected:
    std::shared_ptr<int64_t> cityId_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
