// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESPROVINCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESPROVINCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBodyAddressesProvince : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBodyAddressesProvince& obj) { 
      DARABONBA_PTR_TO_JSON(ProvinceId, provinceId_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBodyAddressesProvince& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvinceId, provinceId_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
    };
    DescribeDeliveryAddressResponseBodyAddressesProvince() = default ;
    DescribeDeliveryAddressResponseBodyAddressesProvince(const DescribeDeliveryAddressResponseBodyAddressesProvince &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesProvince(DescribeDeliveryAddressResponseBodyAddressesProvince &&) = default ;
    DescribeDeliveryAddressResponseBodyAddressesProvince(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBodyAddressesProvince() = default ;
    DescribeDeliveryAddressResponseBodyAddressesProvince& operator=(const DescribeDeliveryAddressResponseBodyAddressesProvince &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesProvince& operator=(DescribeDeliveryAddressResponseBodyAddressesProvince &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->provinceId_ != nullptr
        && this->provinceName_ != nullptr; };
    // provinceId Field Functions 
    bool hasProvinceId() const { return this->provinceId_ != nullptr;};
    void deleteProvinceId() { this->provinceId_ = nullptr;};
    inline int64_t provinceId() const { DARABONBA_PTR_GET_DEFAULT(provinceId_, 0L) };
    inline DescribeDeliveryAddressResponseBodyAddressesProvince& setProvinceId(int64_t provinceId) { DARABONBA_PTR_SET_VALUE(provinceId_, provinceId) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline DescribeDeliveryAddressResponseBodyAddressesProvince& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


  protected:
    std::shared_ptr<int64_t> provinceId_ = nullptr;
    std::shared_ptr<string> provinceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
