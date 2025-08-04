// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODYNETWORKPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODYNETWORKPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNetworkPackagesResponseBodyNetworkPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesResponseBodyNetworkPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(NetworkPackageStatus, networkPackageStatus_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteVpcType, officeSiteVpcType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesResponseBodyNetworkPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageStatus, networkPackageStatus_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteVpcType, officeSiteVpcType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
    };
    DescribeNetworkPackagesResponseBodyNetworkPackages() = default ;
    DescribeNetworkPackagesResponseBodyNetworkPackages(const DescribeNetworkPackagesResponseBodyNetworkPackages &) = default ;
    DescribeNetworkPackagesResponseBodyNetworkPackages(DescribeNetworkPackagesResponseBodyNetworkPackages &&) = default ;
    DescribeNetworkPackagesResponseBodyNetworkPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesResponseBodyNetworkPackages() = default ;
    DescribeNetworkPackagesResponseBodyNetworkPackages& operator=(const DescribeNetworkPackagesResponseBodyNetworkPackages &) = default ;
    DescribeNetworkPackagesResponseBodyNetworkPackages& operator=(DescribeNetworkPackagesResponseBodyNetworkPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->businessStatus_ != nullptr && this->createTime_ != nullptr && this->eipAddresses_ != nullptr && this->expiredTime_ != nullptr && this->internetChargeType_ != nullptr
        && this->networkPackageId_ != nullptr && this->networkPackageStatus_ != nullptr && this->officeSiteId_ != nullptr && this->officeSiteName_ != nullptr && this->officeSiteVpcType_ != nullptr
        && this->payType_ != nullptr && this->reservationActiveTime_ != nullptr && this->reservationBandwidth_ != nullptr && this->reservationInternetChargeType_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const vector<string> & eipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, vector<string>) };
    inline vector<string> eipAddresses() { DARABONBA_PTR_GET(eipAddresses_, vector<string>) };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setEipAddresses(const vector<string> & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setEipAddresses(vector<string> && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string networkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // networkPackageStatus Field Functions 
    bool hasNetworkPackageStatus() const { return this->networkPackageStatus_ != nullptr;};
    void deleteNetworkPackageStatus() { this->networkPackageStatus_ = nullptr;};
    inline string networkPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(networkPackageStatus_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setNetworkPackageStatus(string networkPackageStatus) { DARABONBA_PTR_SET_VALUE(networkPackageStatus_, networkPackageStatus) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteVpcType Field Functions 
    bool hasOfficeSiteVpcType() const { return this->officeSiteVpcType_ != nullptr;};
    void deleteOfficeSiteVpcType() { this->officeSiteVpcType_ = nullptr;};
    inline string officeSiteVpcType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteVpcType_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setOfficeSiteVpcType(string officeSiteVpcType) { DARABONBA_PTR_SET_VALUE(officeSiteVpcType_, officeSiteVpcType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline int32_t reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, 0) };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setReservationBandwidth(int32_t reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeNetworkPackagesResponseBodyNetworkPackages& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


  protected:
    // The bandwidth provided by the premium bandwidth plan. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The business status.
    // 
    // Valid values:
    // 
    // *   Expired
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Normal
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the premium bandwidth plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The public egress IP address of the premium bandwidth plan.
    std::shared_ptr<vector<string>> eipAddresses_ = nullptr;
    // The time when the premium bandwidth plan expires.
    // 
    // *   If the plan is a subscription one, the time when the plan expires is returned.
    // *   If the plan is a pay-as-you-go one, `2099-12-31T15:59:59Z` is returned.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The charge type of the premium bandwidth plan.
    // 
    // *   Valid value when the `PayType` parameter is set to `PrePaid`:
    // 
    //     *   PayByBandwidth: charges by fixed bandwidth.
    // 
    // *   Valid values when the `PayType` parameter is set to `PostPaid`:
    // 
    //     *   PayByTraffic: charges by data transfer.
    //     *   PayByBandwidth: charges by fixed bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The ID of the premium bandwidth plan.
    std::shared_ptr<string> networkPackageId_ = nullptr;
    // The status of the premium bandwidth plan.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Released
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   InUse
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Releasing
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> networkPackageStatus_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The type of the office network.
    // 
    // Valid values:
    // 
    // *   standard: advanced office network
    // *   customized: custom office network
    // *   basic: basic office network
    std::shared_ptr<string> officeSiteVpcType_ = nullptr;
    // The billing method of the premium bandwidth plan.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    std::shared_ptr<string> payType_ = nullptr;
    // The time when the reserved network bandwidth took effect.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The peak bandwidth that is reserved for the premium bandwidth plan. Unit: Mbit/s.
    std::shared_ptr<int32_t> reservationBandwidth_ = nullptr;
    // The billing method of the reserved network bandwidth.
    // 
    // Valid values:
    // 
    // *   PayByTraffic: charges by data transfer.
    // 
    // *   PayByBandwidth: charges by fixed bandwidth.
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
