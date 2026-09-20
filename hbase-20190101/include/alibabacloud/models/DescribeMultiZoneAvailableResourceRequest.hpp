// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeMultiZoneAvailableResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiZoneAvailableResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneCombination, zoneCombination_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiZoneAvailableResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneCombination, zoneCombination_);
    };
    DescribeMultiZoneAvailableResourceRequest() = default ;
    DescribeMultiZoneAvailableResourceRequest(const DescribeMultiZoneAvailableResourceRequest &) = default ;
    DescribeMultiZoneAvailableResourceRequest(DescribeMultiZoneAvailableResourceRequest &&) = default ;
    DescribeMultiZoneAvailableResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiZoneAvailableResourceRequest() = default ;
    DescribeMultiZoneAvailableResourceRequest& operator=(const DescribeMultiZoneAvailableResourceRequest &) = default ;
    DescribeMultiZoneAvailableResourceRequest& operator=(DescribeMultiZoneAvailableResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->regionId_ == nullptr && this->zoneCombination_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeMultiZoneAvailableResourceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMultiZoneAvailableResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneCombination Field Functions 
    bool hasZoneCombination() const { return this->zoneCombination_ != nullptr;};
    void deleteZoneCombination() { this->zoneCombination_ = nullptr;};
    inline string getZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(zoneCombination_, "") };
    inline DescribeMultiZoneAvailableResourceRequest& setZoneCombination(string zoneCombination) { DARABONBA_PTR_SET_VALUE(zoneCombination_, zoneCombination) };


  protected:
    // The billing method. Valid values:
    // - Prepaid: subscription.
    // - Postpaid: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The zone combination. If this parameter is not specified, all zone combinations in the region are queried.
    shared_ptr<string> zoneCombination_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
