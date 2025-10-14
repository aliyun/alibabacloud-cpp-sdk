// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableDiskType, availableDiskType_);
      DARABONBA_PTR_TO_JSON(AvailableRegion, availableRegion_);
      DARABONBA_PTR_TO_JSON(AvailableSpec, availableSpec_);
      DARABONBA_PTR_TO_JSON(AvailableStorageType, availableStorageType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableDiskType, availableDiskType_);
      DARABONBA_PTR_FROM_JSON(AvailableRegion, availableRegion_);
      DARABONBA_PTR_FROM_JSON(AvailableSpec, availableSpec_);
      DARABONBA_PTR_FROM_JSON(AvailableStorageType, availableStorageType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& operator=(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& operator=(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableDiskType_ == nullptr
        && return this->availableRegion_ == nullptr && return this->availableSpec_ == nullptr && return this->availableStorageType_ == nullptr && return this->commodityCode_ == nullptr && return this->orderType_ == nullptr; };
    // availableDiskType Field Functions 
    bool hasAvailableDiskType() const { return this->availableDiskType_ != nullptr;};
    void deleteAvailableDiskType() { this->availableDiskType_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType> & availableDiskType() const { DARABONBA_PTR_GET_CONST(availableDiskType_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType>) };
    inline vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType> availableDiskType() { DARABONBA_PTR_GET(availableDiskType_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableDiskType(const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType> & availableDiskType) { DARABONBA_PTR_SET_VALUE(availableDiskType_, availableDiskType) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableDiskType(vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType> && availableDiskType) { DARABONBA_PTR_SET_RVALUE(availableDiskType_, availableDiskType) };


    // availableRegion Field Functions 
    bool hasAvailableRegion() const { return this->availableRegion_ != nullptr;};
    void deleteAvailableRegion() { this->availableRegion_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion> & availableRegion() const { DARABONBA_PTR_GET_CONST(availableRegion_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion>) };
    inline vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion> availableRegion() { DARABONBA_PTR_GET(availableRegion_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableRegion(const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion> & availableRegion) { DARABONBA_PTR_SET_VALUE(availableRegion_, availableRegion) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableRegion(vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion> && availableRegion) { DARABONBA_PTR_SET_RVALUE(availableRegion_, availableRegion) };


    // availableSpec Field Functions 
    bool hasAvailableSpec() const { return this->availableSpec_ != nullptr;};
    void deleteAvailableSpec() { this->availableSpec_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec> & availableSpec() const { DARABONBA_PTR_GET_CONST(availableSpec_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec>) };
    inline vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec> availableSpec() { DARABONBA_PTR_GET(availableSpec_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableSpec(const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec> & availableSpec) { DARABONBA_PTR_SET_VALUE(availableSpec_, availableSpec) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableSpec(vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec> && availableSpec) { DARABONBA_PTR_SET_RVALUE(availableSpec_, availableSpec) };


    // availableStorageType Field Functions 
    bool hasAvailableStorageType() const { return this->availableStorageType_ != nullptr;};
    void deleteAvailableStorageType() { this->availableStorageType_ = nullptr;};
    inline const Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType & availableStorageType() const { DARABONBA_PTR_GET_CONST(availableStorageType_, Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType) };
    inline Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType availableStorageType() { DARABONBA_PTR_GET(availableStorageType_, Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableStorageType(const Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType & availableStorageType) { DARABONBA_PTR_SET_VALUE(availableStorageType_, availableStorageType) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setAvailableStorageType(Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType && availableStorageType) { DARABONBA_PTR_SET_RVALUE(availableStorageType_, availableStorageType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResource& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType>> availableDiskType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableRegion>> availableRegion_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableSpec>> availableSpec_ = nullptr;
    std::shared_ptr<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType> availableStorageType_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
