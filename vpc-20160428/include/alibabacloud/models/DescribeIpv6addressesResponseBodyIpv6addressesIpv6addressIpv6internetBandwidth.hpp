// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSIPV6INTERNETBANDWIDTH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSIPV6INTERNETBANDWIDTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
      DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(HasReservationData, hasReservationData_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(Ipv6InternetBandwidthId, ipv6InternetBandwidthId_);
      DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
      DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
      DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
    };
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth &&) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& operator=(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& operator=(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->businessStatus_ != nullptr && this->hasReservationData_ != nullptr && this->instanceChargeType_ != nullptr && this->internetChargeType_ != nullptr && this->ipv6InternetBandwidthId_ != nullptr
        && this->reservationActiveTime_ != nullptr && this->reservationBandwidth_ != nullptr && this->reservationInternetChargeType_ != nullptr && this->reservationOrderType_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // hasReservationData Field Functions 
    bool hasHasReservationData() const { return this->hasReservationData_ != nullptr;};
    void deleteHasReservationData() { this->hasReservationData_ = nullptr;};
    inline bool hasReservationData() const { DARABONBA_PTR_GET_DEFAULT(hasReservationData_, false) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setHasReservationData(bool hasReservationData) { DARABONBA_PTR_SET_VALUE(hasReservationData_, hasReservationData) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipv6InternetBandwidthId Field Functions 
    bool hasIpv6InternetBandwidthId() const { return this->ipv6InternetBandwidthId_ != nullptr;};
    void deleteIpv6InternetBandwidthId() { this->ipv6InternetBandwidthId_ = nullptr;};
    inline string ipv6InternetBandwidthId() const { DARABONBA_PTR_GET_DEFAULT(ipv6InternetBandwidthId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setIpv6InternetBandwidthId(string ipv6InternetBandwidthId) { DARABONBA_PTR_SET_VALUE(ipv6InternetBandwidthId_, ipv6InternetBandwidthId) };


    // reservationActiveTime Field Functions 
    bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
    void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
    inline string reservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


    // reservationBandwidth Field Functions 
    bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
    void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
    inline int64_t reservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, 0L) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setReservationBandwidth(int64_t reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


    // reservationInternetChargeType Field Functions 
    bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
    void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
    inline string reservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


  protected:
    // The dedicated Internet bandwidth of the IPv6 address. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The status of the Internet bandwidth of the IPv6 address. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // Indicates whether renewal data is included. Valid values:
    // 
    // *   **false**
    // *   **true** **true** is returned only when **IncludeReservationData** is set to **true** and some orders have not taken effect.
    std::shared_ptr<bool> hasReservationData_ = nullptr;
    // The billing method of the Internet bandwidth of the IPv6 address. Valid values:
    // 
    // Only **PostPaid** may be returned, which indicates the pay-as-you-go billing method.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The billing method of the Internet bandwidth of the IPv6 address. Valid values:
    // 
    // *   **PayByTraffic**
    // *   **PayByBandwidth**
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The Internet bandwidth ID of the IPv6 address.
    std::shared_ptr<string> ipv6InternetBandwidthId_ = nullptr;
    // The time when the renewal takes effect. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> reservationActiveTime_ = nullptr;
    // The maximum bandwidth after the renewal takes effect. Unit: Mbit/s.
    std::shared_ptr<int64_t> reservationBandwidth_ = nullptr;
    // The metering method that is used after the renewal takes effect.
    // 
    // *   **PayByTraffic**
    // *   **PayByBandwidth**
    std::shared_ptr<string> reservationInternetChargeType_ = nullptr;
    // The type of the renewal order. Only **RENEW** may be returned, which indicates that the order is placed for service renewal.
    std::shared_ptr<string> reservationOrderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
