// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
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
  class DescribeNetworkPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody(DescribeNetworkPackagesResponseBody &&) = default ;
    DescribeNetworkPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody& operator=(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody& operator=(DescribeNetworkPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkPackages& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NetworkPackages& obj) { 
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
      NetworkPackages() = default ;
      NetworkPackages(const NetworkPackages &) = default ;
      NetworkPackages(NetworkPackages &&) = default ;
      NetworkPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkPackages() = default ;
      NetworkPackages& operator=(const NetworkPackages &) = default ;
      NetworkPackages& operator=(NetworkPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->businessStatus_ == nullptr && this->createTime_ == nullptr && this->eipAddresses_ == nullptr && this->expiredTime_ == nullptr && this->internetChargeType_ == nullptr
        && this->networkPackageId_ == nullptr && this->networkPackageStatus_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteVpcType_ == nullptr
        && this->payType_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline NetworkPackages& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline NetworkPackages& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline NetworkPackages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eipAddresses Field Functions 
      bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
      void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
      inline const vector<string> & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, vector<string>) };
      inline vector<string> getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, vector<string>) };
      inline NetworkPackages& setEipAddresses(const vector<string> & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
      inline NetworkPackages& setEipAddresses(vector<string> && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline NetworkPackages& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline NetworkPackages& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // networkPackageId Field Functions 
      bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
      void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
      inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
      inline NetworkPackages& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


      // networkPackageStatus Field Functions 
      bool hasNetworkPackageStatus() const { return this->networkPackageStatus_ != nullptr;};
      void deleteNetworkPackageStatus() { this->networkPackageStatus_ = nullptr;};
      inline string getNetworkPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(networkPackageStatus_, "") };
      inline NetworkPackages& setNetworkPackageStatus(string networkPackageStatus) { DARABONBA_PTR_SET_VALUE(networkPackageStatus_, networkPackageStatus) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline NetworkPackages& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline NetworkPackages& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteVpcType Field Functions 
      bool hasOfficeSiteVpcType() const { return this->officeSiteVpcType_ != nullptr;};
      void deleteOfficeSiteVpcType() { this->officeSiteVpcType_ = nullptr;};
      inline string getOfficeSiteVpcType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteVpcType_, "") };
      inline NetworkPackages& setOfficeSiteVpcType(string officeSiteVpcType) { DARABONBA_PTR_SET_VALUE(officeSiteVpcType_, officeSiteVpcType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline NetworkPackages& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // reservationActiveTime Field Functions 
      bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
      void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
      inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
      inline NetworkPackages& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


      // reservationBandwidth Field Functions 
      bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
      void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
      inline int32_t getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, 0) };
      inline NetworkPackages& setReservationBandwidth(int32_t reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


      // reservationInternetChargeType Field Functions 
      bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
      void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
      inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
      inline NetworkPackages& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    protected:
      // The bandwidth provided by the premium bandwidth plan. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
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
      shared_ptr<string> businessStatus_ {};
      // The time when the premium bandwidth plan was created.
      shared_ptr<string> createTime_ {};
      // The public egress IP address of the premium bandwidth plan.
      shared_ptr<vector<string>> eipAddresses_ {};
      // The time when the premium bandwidth plan expires.
      // 
      // *   If the plan is a subscription one, the time when the plan expires is returned.
      // *   If the plan is a pay-as-you-go one, `2099-12-31T15:59:59Z` is returned.
      shared_ptr<string> expiredTime_ {};
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
      shared_ptr<string> internetChargeType_ {};
      // The ID of the premium bandwidth plan.
      shared_ptr<string> networkPackageId_ {};
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
      shared_ptr<string> networkPackageStatus_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The type of the office network.
      // 
      // Valid values:
      // 
      // *   standard: advanced office network
      // *   customized: custom office network
      // *   basic: basic office network
      shared_ptr<string> officeSiteVpcType_ {};
      // The billing method of the premium bandwidth plan.
      // 
      // Valid values:
      // 
      // *   PostPaid: pay-as-you-go
      // *   PrePaid: subscription
      shared_ptr<string> payType_ {};
      // The time when the reserved network bandwidth took effect.
      shared_ptr<string> reservationActiveTime_ {};
      // The peak bandwidth that is reserved for the premium bandwidth plan. Unit: Mbit/s.
      shared_ptr<int32_t> reservationBandwidth_ {};
      // The billing method of the reserved network bandwidth.
      // 
      // Valid values:
      // 
      // *   PayByTraffic: charges by data transfer.
      // 
      // *   PayByBandwidth: charges by fixed bandwidth.
      shared_ptr<string> reservationInternetChargeType_ {};
    };

    virtual bool empty() const override { return this->networkPackages_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // networkPackages Field Functions 
    bool hasNetworkPackages() const { return this->networkPackages_ != nullptr;};
    void deleteNetworkPackages() { this->networkPackages_ = nullptr;};
    inline const vector<DescribeNetworkPackagesResponseBody::NetworkPackages> & getNetworkPackages() const { DARABONBA_PTR_GET_CONST(networkPackages_, vector<DescribeNetworkPackagesResponseBody::NetworkPackages>) };
    inline vector<DescribeNetworkPackagesResponseBody::NetworkPackages> getNetworkPackages() { DARABONBA_PTR_GET(networkPackages_, vector<DescribeNetworkPackagesResponseBody::NetworkPackages>) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(const vector<DescribeNetworkPackagesResponseBody::NetworkPackages> & networkPackages) { DARABONBA_PTR_SET_VALUE(networkPackages_, networkPackages) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(vector<DescribeNetworkPackagesResponseBody::NetworkPackages> && networkPackages) { DARABONBA_PTR_SET_RVALUE(networkPackages_, networkPackages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkPackagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The premium bandwidth plans.
    shared_ptr<vector<DescribeNetworkPackagesResponseBody::NetworkPackages>> networkPackages_ {};
    // The token that is used to start the next query. If the value of this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
