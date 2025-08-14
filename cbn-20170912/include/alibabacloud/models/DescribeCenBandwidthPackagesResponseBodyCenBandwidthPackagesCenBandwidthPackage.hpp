// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENBANDWIDTHPACKAGESRESPONSEBODYCENBANDWIDTHPACKAGESCENBANDWIDTHPACKAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds.hpp>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits.hpp>
#include <alibabacloud/models/DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(CenIds, cenIds_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_TO_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_TO_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(IsCrossBorder, isCrossBorder_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrginInterRegionBandwidthLimits, orginInterRegionBandwidthLimits_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageChargeType, bandwidthPackageChargeType_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(CenIds, cenIds_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionAId, geographicRegionAId_);
      DARABONBA_PTR_FROM_JSON(GeographicRegionBId, geographicRegionBId_);
      DARABONBA_PTR_FROM_JSON(GeographicSpanId, geographicSpanId_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(IsCrossBorder, isCrossBorder_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrginInterRegionBandwidthLimits, orginInterRegionBandwidthLimits_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage &&) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage() = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& operator=(const DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage &) = default ;
    DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& operator=(DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->bandwidthPackageChargeType_ != nullptr && this->businessStatus_ != nullptr && this->cenBandwidthPackageId_ != nullptr && this->cenIds_ != nullptr && this->creationTime_ != nullptr
        && this->description_ != nullptr && this->expiredTime_ != nullptr && this->geographicRegionAId_ != nullptr && this->geographicRegionBId_ != nullptr && this->geographicSpanId_ != nullptr
        && this->hasReservationData_ != nullptr && this->isCrossBorder_ != nullptr && this->name_ != nullptr && this->orginInterRegionBandwidthLimits_ != nullptr && this->reservationActiveTime_ != nullptr
        && this->reservationBandwidth_ != nullptr && this->reservationInternetChargeType_ != nullptr && this->reservationOrderType_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthPackageChargeType Field Functions 
    bool hasBandwidthPackageChargeType() const { return this->bandwidthPackageChargeType_ != nullptr;};
    void deleteBandwidthPackageChargeType() { this->bandwidthPackageChargeType_ = nullptr;};
    inline string bandwidthPackageChargeType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageChargeType_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setBandwidthPackageChargeType(string bandwidthPackageChargeType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageChargeType_, bandwidthPackageChargeType) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // cenIds Field Functions 
    bool hasCenIds() const { return this->cenIds_ != nullptr;};
    void deleteCenIds() { this->cenIds_ = nullptr;};
    inline const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds & cenIds() const { DARABONBA_PTR_GET_CONST(cenIds_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds) };
    inline Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds cenIds() { DARABONBA_PTR_GET(cenIds_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setCenIds(const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds & cenIds) { DARABONBA_PTR_SET_VALUE(cenIds_, cenIds) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setCenIds(Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds && cenIds) { DARABONBA_PTR_SET_RVALUE(cenIds_, cenIds) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // geographicRegionAId Field Functions 
    bool hasGeographicRegionAId() const { return this->geographicRegionAId_ != nullptr;};
    void deleteGeographicRegionAId() { this->geographicRegionAId_ = nullptr;};
    inline string geographicRegionAId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionAId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setGeographicRegionAId(string geographicRegionAId) { DARABONBA_PTR_SET_VALUE(geographicRegionAId_, geographicRegionAId) };


    // geographicRegionBId Field Functions 
    bool hasGeographicRegionBId() const { return this->geographicRegionBId_ != nullptr;};
    void deleteGeographicRegionBId() { this->geographicRegionBId_ = nullptr;};
    inline string geographicRegionBId() const { DARABONBA_PTR_GET_DEFAULT(geographicRegionBId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setGeographicRegionBId(string geographicRegionBId) { DARABONBA_PTR_SET_VALUE(geographicRegionBId_, geographicRegionBId) };


    // geographicSpanId Field Functions 
    bool hasGeographicSpanId() const { return this->geographicSpanId_ != nullptr;};
    void deleteGeographicSpanId() { this->geographicSpanId_ = nullptr;};
    inline string geographicSpanId() const { DARABONBA_PTR_GET_DEFAULT(geographicSpanId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setGeographicSpanId(string geographicSpanId) { DARABONBA_PTR_SET_VALUE(geographicSpanId_, geographicSpanId) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline string hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setHasReservationData(string hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // isCrossBorder Field Functions 
    bool hasIsCrossBorder() const { return this->isCrossBorder_ != nullptr;};
    void deleteIsCrossBorder() { this->isCrossBorder_ = nullptr;};
    inline bool isCrossBorder() const { DARABONBA_PTR_GET_DEFAULT(isCrossBorder_, false) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setIsCrossBorder(bool isCrossBorder) { DARABONBA_PTR_SET_VALUE(isCrossBorder_, isCrossBorder) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orginInterRegionBandwidthLimits Field Functions 
    bool hasOrginInterRegionBandwidthLimits() const { return this->orginInterRegionBandwidthLimits_ != nullptr;};
    void deleteOrginInterRegionBandwidthLimits() { this->orginInterRegionBandwidthLimits_ = nullptr;};
    inline const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits & orginInterRegionBandwidthLimits() const { DARABONBA_PTR_GET_CONST(orginInterRegionBandwidthLimits_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits) };
    inline Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits orginInterRegionBandwidthLimits() { DARABONBA_PTR_GET(orginInterRegionBandwidthLimits_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setOrginInterRegionBandwidthLimits(const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits & orginInterRegionBandwidthLimits) { DARABONBA_PTR_SET_VALUE(orginInterRegionBandwidthLimits_, orginInterRegionBandwidthLimits) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setOrginInterRegionBandwidthLimits(Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits && orginInterRegionBandwidthLimits) { DARABONBA_PTR_SET_RVALUE(orginInterRegionBandwidthLimits_, orginInterRegionBandwidthLimits) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline string reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setReservationBandwidth(string reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags) };
    inline Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setTags(const Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackage& setTags(Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The maximum bandwidth of the bandwidth plan.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The billing method of the bandwidth plan.
    std::shared_ptr<string> bandwidthPackageChargeType_ = nullptr;
    // The status of the bandwidth plan. Valid values:
    // 
    // *   **Normal**: running as expected.
    // *   **FinancialLocked**: locked due to overdue payments.
    // *   **SecurityLocked**: locked due to security reasons
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The ID of the bandwidth plan.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // A list of CEN instances that are associated with the bandwidth plan.
    std::shared_ptr<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageCenIds> cenIds_ = nullptr;
    // The time when the bandwidth plan was created. The time is displayed in the ISO8601 standard in the YYYY-MM-DDThh:mmZ format.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the bandwidth plan.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the bandwidth plan expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the area that you want to query. Valid values:
    // 
    // *   **china**: Chinese mainland.
    // *   **asia-pacific**: Asia Pacific
    // *   **europe**: Europe
    // *   **north-america**: North America
    std::shared_ptr<string> geographicRegionAId_ = nullptr;
    // The ID of the other area connected by the bandwidth plan. Valid values:
    // 
    // *   **china**: Chinese mainland.
    // *   **asia-pacific**: Asia Pacific
    // *   **europe**: Europe
    // *   **north-america**: North America
    std::shared_ptr<string> geographicRegionBId_ = nullptr;
    // The ID of the connected area.
    std::shared_ptr<string> geographicSpanId_ = nullptr;
    // Indicates whether renewal data is included.
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter returns **true** only when the **IncludeReservationData** parameter is set to **true** and a pending order exists.
    std::shared_ptr<string> hasReservationData_ = nullptr;
    // Indicates whether the bandwidth plan supports cross-border communication.
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isCrossBorder_ = nullptr;
    // The name of the bandwidth plan.
    std::shared_ptr<string> name_ = nullptr;
    // The details about the connected regions.
    std::shared_ptr<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageOrginInterRegionBandwidthLimits> orginInterRegionBandwidthLimits_ = nullptr;
    // The expiration time of the temporary upgrade.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The bandwidth value to which the bandwidth plan is restored when the temporary upgrade ends.
    std::shared_ptr<string> reservationBandwidth_ = nullptr;
    // The new billing method.
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The renewal method.
    // 
    // *   **TEMP_UPGRADE**: temporary upgrade
    // *   **UPGRADE**: upgrade
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // The ID of the resource group to which the ACL belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the bandwidth plan is associated with a CEN instance.
    // 
    // *   **Idle**
    // *   **InUse**
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the bandwidth plan.
    std::shared_ptr<Models::DescribeCenBandwidthPackagesResponseBodyCenBandwidthPackagesCenBandwidthPackageTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
