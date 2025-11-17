// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESAREA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESAREA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBodyAddressesArea : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBodyAddressesArea& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBodyAddressesArea& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
    };
    DescribeDeliveryAddressResponseBodyAddressesArea() = default ;
    DescribeDeliveryAddressResponseBodyAddressesArea(const DescribeDeliveryAddressResponseBodyAddressesArea &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesArea(DescribeDeliveryAddressResponseBodyAddressesArea &&) = default ;
    DescribeDeliveryAddressResponseBodyAddressesArea(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBodyAddressesArea() = default ;
    DescribeDeliveryAddressResponseBodyAddressesArea& operator=(const DescribeDeliveryAddressResponseBodyAddressesArea &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesArea& operator=(DescribeDeliveryAddressResponseBodyAddressesArea &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->areaId_ == nullptr
        && return this->areaName_ == nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline int64_t areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, 0L) };
    inline DescribeDeliveryAddressResponseBodyAddressesArea& setAreaId(int64_t areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline DescribeDeliveryAddressResponseBodyAddressesArea& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


  protected:
    std::shared_ptr<int64_t> areaId_ = nullptr;
    std::shared_ptr<string> areaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
