// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYSVPNGATEWAYRESERVATIONDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYSVPNGATEWAYRESERVATIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& obj) { 
      DARABONBA_PTR_TO_JSON(ReservationEndTime, reservationEndTime_);
      DARABONBA_PTR_TO_JSON(ReservationIpsec, reservationIpsec_);
      DARABONBA_PTR_TO_JSON(ReservationMaxConnections, reservationMaxConnections_);
      DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_TO_JSON(ReservationSpec, reservationSpec_);
      DARABONBA_PTR_TO_JSON(ReservationSsl, reservationSsl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& obj) { 
      DARABONBA_PTR_FROM_JSON(ReservationEndTime, reservationEndTime_);
      DARABONBA_PTR_FROM_JSON(ReservationIpsec, reservationIpsec_);
      DARABONBA_PTR_FROM_JSON(ReservationMaxConnections, reservationMaxConnections_);
      DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
      DARABONBA_PTR_FROM_JSON(ReservationSpec, reservationSpec_);
      DARABONBA_PTR_FROM_JSON(ReservationSsl, reservationSsl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData() = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData(const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData(DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData &&) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData() = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& operator=(const DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& operator=(DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reservationEndTime_ == nullptr
        && return this->reservationIpsec_ == nullptr && return this->reservationMaxConnections_ == nullptr && return this->reservationOrderType_ == nullptr && return this->reservationSpec_ == nullptr && return this->reservationSsl_ == nullptr
        && return this->status_ == nullptr; };
    // reservationEndTime Field Functions 
    bool hasReservationEndTime() const { return this->reservationEndTime_ != nullptr;};
    void deleteReservationEndTime() { this->reservationEndTime_ = nullptr;};
    inline string reservationEndTime() const { DARABONBA_PTR_GET_DEFAULT(reservationEndTime_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationEndTime(string reservationEndTime) { DARABONBA_PTR_SET_VALUE(reservationEndTime_, reservationEndTime) };


    // reservationIpsec Field Functions 
    bool hasReservationIpsec() const { return this->reservationIpsec_ != nullptr;};
    void deleteReservationIpsec() { this->reservationIpsec_ = nullptr;};
    inline string reservationIpsec() const { DARABONBA_PTR_GET_DEFAULT(reservationIpsec_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationIpsec(string reservationIpsec) { DARABONBA_PTR_SET_VALUE(reservationIpsec_, reservationIpsec) };


    // reservationMaxConnections Field Functions 
    bool hasReservationMaxConnections() const { return this->reservationMaxConnections_ != nullptr;};
    void deleteReservationMaxConnections() { this->reservationMaxConnections_ = nullptr;};
    inline int32_t reservationMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(reservationMaxConnections_, 0) };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationMaxConnections(int32_t reservationMaxConnections) { DARABONBA_PTR_SET_VALUE(reservationMaxConnections_, reservationMaxConnections) };


    // reservationOrderType Field Functions 
    bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
    void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
    inline string reservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


    // reservationSpec Field Functions 
    bool hasReservationSpec() const { return this->reservationSpec_ != nullptr;};
    void deleteReservationSpec() { this->reservationSpec_ = nullptr;};
    inline string reservationSpec() const { DARABONBA_PTR_GET_DEFAULT(reservationSpec_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationSpec(string reservationSpec) { DARABONBA_PTR_SET_VALUE(reservationSpec_, reservationSpec) };


    // reservationSsl Field Functions 
    bool hasReservationSsl() const { return this->reservationSsl_ != nullptr;};
    void deleteReservationSsl() { this->reservationSsl_ = nullptr;};
    inline string reservationSsl() const { DARABONBA_PTR_GET_DEFAULT(reservationSsl_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setReservationSsl(string reservationSsl) { DARABONBA_PTR_SET_VALUE(reservationSsl_, reservationSsl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGatewayReservationData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // If the value of ReservationOrderType is **TEMP_UPGRADE**, this parameter indicates the time when the temporary upgrade expires.
    // 
    // If the value of ReservationOrderType is **RENEWCHANGE** or **RENEW**, this parameter indicates the time when the renewal or renewal with a specification change takes effect.
    std::shared_ptr<string> reservationEndTime_ = nullptr;
    // The IPsec-VPN status of the pending order. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    std::shared_ptr<string> reservationIpsec_ = nullptr;
    // The maximum number of concurrent SSL-VPN connections of the pending order.
    std::shared_ptr<int32_t> reservationMaxConnections_ = nullptr;
    // The type of the order that has not taken effect. Valid values:
    // 
    // *   **RENEWCHANGE**: renewal with upgrade or downgrade
    // *   **TEMP_UPGRADE**: temporary upgrade
    // *   **RENEW**: renewal
    std::shared_ptr<string> reservationOrderType_ = nullptr;
    // The bandwidth of the pending order. Unit: Mbit/s.
    std::shared_ptr<string> reservationSpec_ = nullptr;
    // The SSL-VPN status of the pending order. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    std::shared_ptr<string> reservationSsl_ = nullptr;
    // The status of the pending order.
    // 
    // *   **1**: indicates that the order for renewal or the order for renewal with a specification change has not taken effect.
    // *   **2**: indicates that the order of the temporary upgrade has taken effect. After the temporary upgrade expires, the system restores the VPN gateway to its previous specifications. In this case, the values of **ReservationIpsec**, **ReservationMaxConnections**, **ReservationSpec**, and **ReservationSsl** indicate the previous specifications of the VPN gateway.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
