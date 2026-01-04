// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IpsecVpn, ipsecVpn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservationData, reservationData_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SslMaxConnections, sslMaxConnections_);
      DARABONBA_PTR_TO_JSON(SslVpn, sslVpn_);
      DARABONBA_PTR_TO_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(VpnType, vpnType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IpsecVpn, ipsecVpn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservationData, reservationData_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SslMaxConnections, sslMaxConnections_);
      DARABONBA_PTR_FROM_JSON(SslVpn, sslVpn_);
      DARABONBA_PTR_FROM_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(VpnType, vpnType_);
    };
    DescribeVpnGatewayResponseBody() = default ;
    DescribeVpnGatewayResponseBody(const DescribeVpnGatewayResponseBody &) = default ;
    DescribeVpnGatewayResponseBody(DescribeVpnGatewayResponseBody &&) = default ;
    DescribeVpnGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayResponseBody() = default ;
    DescribeVpnGatewayResponseBody& operator=(const DescribeVpnGatewayResponseBody &) = default ;
    DescribeVpnGatewayResponseBody& operator=(DescribeVpnGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

    class ReservationData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReservationData& obj) { 
        DARABONBA_PTR_TO_JSON(ReservationEndTime, reservationEndTime_);
        DARABONBA_PTR_TO_JSON(ReservationIpsec, reservationIpsec_);
        DARABONBA_PTR_TO_JSON(ReservationMaxConnections, reservationMaxConnections_);
        DARABONBA_PTR_TO_JSON(ReservationOrderType, reservationOrderType_);
        DARABONBA_PTR_TO_JSON(ReservationSpec, reservationSpec_);
        DARABONBA_PTR_TO_JSON(ReservationSsl, reservationSsl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ReservationData& obj) { 
        DARABONBA_PTR_FROM_JSON(ReservationEndTime, reservationEndTime_);
        DARABONBA_PTR_FROM_JSON(ReservationIpsec, reservationIpsec_);
        DARABONBA_PTR_FROM_JSON(ReservationMaxConnections, reservationMaxConnections_);
        DARABONBA_PTR_FROM_JSON(ReservationOrderType, reservationOrderType_);
        DARABONBA_PTR_FROM_JSON(ReservationSpec, reservationSpec_);
        DARABONBA_PTR_FROM_JSON(ReservationSsl, reservationSsl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ReservationData() = default ;
      ReservationData(const ReservationData &) = default ;
      ReservationData(ReservationData &&) = default ;
      ReservationData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReservationData() = default ;
      ReservationData& operator=(const ReservationData &) = default ;
      ReservationData& operator=(ReservationData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reservationEndTime_ == nullptr
        && this->reservationIpsec_ == nullptr && this->reservationMaxConnections_ == nullptr && this->reservationOrderType_ == nullptr && this->reservationSpec_ == nullptr && this->reservationSsl_ == nullptr
        && this->status_ == nullptr; };
      // reservationEndTime Field Functions 
      bool hasReservationEndTime() const { return this->reservationEndTime_ != nullptr;};
      void deleteReservationEndTime() { this->reservationEndTime_ = nullptr;};
      inline string getReservationEndTime() const { DARABONBA_PTR_GET_DEFAULT(reservationEndTime_, "") };
      inline ReservationData& setReservationEndTime(string reservationEndTime) { DARABONBA_PTR_SET_VALUE(reservationEndTime_, reservationEndTime) };


      // reservationIpsec Field Functions 
      bool hasReservationIpsec() const { return this->reservationIpsec_ != nullptr;};
      void deleteReservationIpsec() { this->reservationIpsec_ = nullptr;};
      inline string getReservationIpsec() const { DARABONBA_PTR_GET_DEFAULT(reservationIpsec_, "") };
      inline ReservationData& setReservationIpsec(string reservationIpsec) { DARABONBA_PTR_SET_VALUE(reservationIpsec_, reservationIpsec) };


      // reservationMaxConnections Field Functions 
      bool hasReservationMaxConnections() const { return this->reservationMaxConnections_ != nullptr;};
      void deleteReservationMaxConnections() { this->reservationMaxConnections_ = nullptr;};
      inline int32_t getReservationMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(reservationMaxConnections_, 0) };
      inline ReservationData& setReservationMaxConnections(int32_t reservationMaxConnections) { DARABONBA_PTR_SET_VALUE(reservationMaxConnections_, reservationMaxConnections) };


      // reservationOrderType Field Functions 
      bool hasReservationOrderType() const { return this->reservationOrderType_ != nullptr;};
      void deleteReservationOrderType() { this->reservationOrderType_ = nullptr;};
      inline string getReservationOrderType() const { DARABONBA_PTR_GET_DEFAULT(reservationOrderType_, "") };
      inline ReservationData& setReservationOrderType(string reservationOrderType) { DARABONBA_PTR_SET_VALUE(reservationOrderType_, reservationOrderType) };


      // reservationSpec Field Functions 
      bool hasReservationSpec() const { return this->reservationSpec_ != nullptr;};
      void deleteReservationSpec() { this->reservationSpec_ = nullptr;};
      inline string getReservationSpec() const { DARABONBA_PTR_GET_DEFAULT(reservationSpec_, "") };
      inline ReservationData& setReservationSpec(string reservationSpec) { DARABONBA_PTR_SET_VALUE(reservationSpec_, reservationSpec) };


      // reservationSsl Field Functions 
      bool hasReservationSsl() const { return this->reservationSsl_ != nullptr;};
      void deleteReservationSsl() { this->reservationSsl_ = nullptr;};
      inline string getReservationSsl() const { DARABONBA_PTR_GET_DEFAULT(reservationSsl_, "") };
      inline ReservationData& setReservationSsl(string reservationSsl) { DARABONBA_PTR_SET_VALUE(reservationSsl_, reservationSsl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ReservationData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // If the order type is **TEMP_UPGRADE** (temporary upgrade), this parameter specifies the time when the temporary upgrade expires.
      // 
      // If the order type is **RENEWCHANGE** (renewal with a specification change) or **RENEW** (renewal), this parameter indicates the time when the renewal or renewal with a specification change takes effect.
      shared_ptr<string> reservationEndTime_ {};
      // The IPsec-VPN status of the pending order. Valid values:
      // 
      // *   **enable**
      // *   **disable**
      shared_ptr<string> reservationIpsec_ {};
      // The maximum number of concurrent SSL-VPN connections of the pending order.
      shared_ptr<int32_t> reservationMaxConnections_ {};
      // The type of the pending order. Valid values:
      // 
      // *   **RENEWCHANGE**: renewal with upgrade or downgrade
      // *   **TEMP_UPGRADE**: temporary upgrade
      // *   **RENEW**: renewal
      shared_ptr<string> reservationOrderType_ {};
      // The bandwidth of the pending order. Unit: Mbit/s.
      shared_ptr<string> reservationSpec_ {};
      // The SSL-VPN status of the pending order. Valid values:
      // 
      // *   **enable**
      // *   **disable**
      shared_ptr<string> reservationSsl_ {};
      // The status of the pending order. Valid values:
      // 
      // *   **1**: indicates that the order of the renewal or specification change has not taken effect.
      // *   **2**: indicates that the order is an order for temporary upgrade and the order has taken effect. After the temporary upgrade expires, the system restores the VPN gateway to its previous specifications. In this case, **ReservationIpsec**, **ReservationMaxConnections**, **ReservationSpec**, and **ReservationSsl** indicate the previous specification.
      shared_ptr<string> status_ {};
    };

    class EniInstanceIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EniInstanceIds& obj) { 
        DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, EniInstanceIds& obj) { 
        DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
      };
      EniInstanceIds() = default ;
      EniInstanceIds(const EniInstanceIds &) = default ;
      EniInstanceIds(EniInstanceIds &&) = default ;
      EniInstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EniInstanceIds() = default ;
      EniInstanceIds& operator=(const EniInstanceIds &) = default ;
      EniInstanceIds& operator=(EniInstanceIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eniInstanceId_ == nullptr; };
      // eniInstanceId Field Functions 
      bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
      void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
      inline const vector<string> & getEniInstanceId() const { DARABONBA_PTR_GET_CONST(eniInstanceId_, vector<string>) };
      inline vector<string> getEniInstanceId() { DARABONBA_PTR_GET(eniInstanceId_, vector<string>) };
      inline EniInstanceIds& setEniInstanceId(const vector<string> & eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };
      inline EniInstanceIds& setEniInstanceId(vector<string> && eniInstanceId) { DARABONBA_PTR_SET_RVALUE(eniInstanceId_, eniInstanceId) };


    protected:
      shared_ptr<vector<string>> eniInstanceId_ {};
    };

    virtual bool empty() const override { return this->autoPropagate_ == nullptr
        && this->businessStatus_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->disasterRecoveryInternetIp_ == nullptr
        && this->disasterRecoveryVSwitchId_ == nullptr && this->enableBgp_ == nullptr && this->endTime_ == nullptr && this->eniInstanceIds_ == nullptr && this->internetIp_ == nullptr
        && this->ipsecVpn_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->requestId_ == nullptr && this->reservationData_ == nullptr
        && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->sslMaxConnections_ == nullptr && this->sslVpn_ == nullptr && this->sslVpnInternetIp_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->vpnGatewayId_ == nullptr && this->vpnType_ == nullptr; };
    // autoPropagate Field Functions 
    bool hasAutoPropagate() const { return this->autoPropagate_ != nullptr;};
    void deleteAutoPropagate() { this->autoPropagate_ = nullptr;};
    inline bool getAutoPropagate() const { DARABONBA_PTR_GET_DEFAULT(autoPropagate_, false) };
    inline DescribeVpnGatewayResponseBody& setAutoPropagate(bool autoPropagate) { DARABONBA_PTR_SET_VALUE(autoPropagate_, autoPropagate) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeVpnGatewayResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeVpnGatewayResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpnGatewayResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpnGatewayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disasterRecoveryInternetIp Field Functions 
    bool hasDisasterRecoveryInternetIp() const { return this->disasterRecoveryInternetIp_ != nullptr;};
    void deleteDisasterRecoveryInternetIp() { this->disasterRecoveryInternetIp_ = nullptr;};
    inline string getDisasterRecoveryInternetIp() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInternetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setDisasterRecoveryInternetIp(string disasterRecoveryInternetIp) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInternetIp_, disasterRecoveryInternetIp) };


    // disasterRecoveryVSwitchId Field Functions 
    bool hasDisasterRecoveryVSwitchId() const { return this->disasterRecoveryVSwitchId_ != nullptr;};
    void deleteDisasterRecoveryVSwitchId() { this->disasterRecoveryVSwitchId_ = nullptr;};
    inline string getDisasterRecoveryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryVSwitchId_, "") };
    inline DescribeVpnGatewayResponseBody& setDisasterRecoveryVSwitchId(string disasterRecoveryVSwitchId) { DARABONBA_PTR_SET_VALUE(disasterRecoveryVSwitchId_, disasterRecoveryVSwitchId) };


    // enableBgp Field Functions 
    bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
    void deleteEnableBgp() { this->enableBgp_ = nullptr;};
    inline bool getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, false) };
    inline DescribeVpnGatewayResponseBody& setEnableBgp(bool enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeVpnGatewayResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eniInstanceIds Field Functions 
    bool hasEniInstanceIds() const { return this->eniInstanceIds_ != nullptr;};
    void deleteEniInstanceIds() { this->eniInstanceIds_ = nullptr;};
    inline const DescribeVpnGatewayResponseBody::EniInstanceIds & getEniInstanceIds() const { DARABONBA_PTR_GET_CONST(eniInstanceIds_, DescribeVpnGatewayResponseBody::EniInstanceIds) };
    inline DescribeVpnGatewayResponseBody::EniInstanceIds getEniInstanceIds() { DARABONBA_PTR_GET(eniInstanceIds_, DescribeVpnGatewayResponseBody::EniInstanceIds) };
    inline DescribeVpnGatewayResponseBody& setEniInstanceIds(const DescribeVpnGatewayResponseBody::EniInstanceIds & eniInstanceIds) { DARABONBA_PTR_SET_VALUE(eniInstanceIds_, eniInstanceIds) };
    inline DescribeVpnGatewayResponseBody& setEniInstanceIds(DescribeVpnGatewayResponseBody::EniInstanceIds && eniInstanceIds) { DARABONBA_PTR_SET_RVALUE(eniInstanceIds_, eniInstanceIds) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ipsecVpn Field Functions 
    bool hasIpsecVpn() const { return this->ipsecVpn_ != nullptr;};
    void deleteIpsecVpn() { this->ipsecVpn_ = nullptr;};
    inline string getIpsecVpn() const { DARABONBA_PTR_GET_DEFAULT(ipsecVpn_, "") };
    inline DescribeVpnGatewayResponseBody& setIpsecVpn(string ipsecVpn) { DARABONBA_PTR_SET_VALUE(ipsecVpn_, ipsecVpn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpnGatewayResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeVpnGatewayResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservationData Field Functions 
    bool hasReservationData() const { return this->reservationData_ != nullptr;};
    void deleteReservationData() { this->reservationData_ = nullptr;};
    inline const DescribeVpnGatewayResponseBody::ReservationData & getReservationData() const { DARABONBA_PTR_GET_CONST(reservationData_, DescribeVpnGatewayResponseBody::ReservationData) };
    inline DescribeVpnGatewayResponseBody::ReservationData getReservationData() { DARABONBA_PTR_GET(reservationData_, DescribeVpnGatewayResponseBody::ReservationData) };
    inline DescribeVpnGatewayResponseBody& setReservationData(const DescribeVpnGatewayResponseBody::ReservationData & reservationData) { DARABONBA_PTR_SET_VALUE(reservationData_, reservationData) };
    inline DescribeVpnGatewayResponseBody& setReservationData(DescribeVpnGatewayResponseBody::ReservationData && reservationData) { DARABONBA_PTR_SET_RVALUE(reservationData_, reservationData) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpnGatewayResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeVpnGatewayResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // sslMaxConnections Field Functions 
    bool hasSslMaxConnections() const { return this->sslMaxConnections_ != nullptr;};
    void deleteSslMaxConnections() { this->sslMaxConnections_ = nullptr;};
    inline int64_t getSslMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(sslMaxConnections_, 0L) };
    inline DescribeVpnGatewayResponseBody& setSslMaxConnections(int64_t sslMaxConnections) { DARABONBA_PTR_SET_VALUE(sslMaxConnections_, sslMaxConnections) };


    // sslVpn Field Functions 
    bool hasSslVpn() const { return this->sslVpn_ != nullptr;};
    void deleteSslVpn() { this->sslVpn_ = nullptr;};
    inline string getSslVpn() const { DARABONBA_PTR_GET_DEFAULT(sslVpn_, "") };
    inline DescribeVpnGatewayResponseBody& setSslVpn(string sslVpn) { DARABONBA_PTR_SET_VALUE(sslVpn_, sslVpn) };


    // sslVpnInternetIp Field Functions 
    bool hasSslVpnInternetIp() const { return this->sslVpnInternetIp_ != nullptr;};
    void deleteSslVpnInternetIp() { this->sslVpnInternetIp_ = nullptr;};
    inline string getSslVpnInternetIp() const { DARABONBA_PTR_GET_DEFAULT(sslVpnInternetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setSslVpnInternetIp(string sslVpnInternetIp) { DARABONBA_PTR_SET_VALUE(sslVpnInternetIp_, sslVpnInternetIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnGatewayResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeVpnGatewayResponseBody& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVpnGatewayResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVpnGatewayResponseBody::Tags) };
    inline DescribeVpnGatewayResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeVpnGatewayResponseBody::Tags) };
    inline DescribeVpnGatewayResponseBody& setTags(const DescribeVpnGatewayResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpnGatewayResponseBody& setTags(DescribeVpnGatewayResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVpnGatewayResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpnGatewayResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeVpnGatewayResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // vpnType Field Functions 
    bool hasVpnType() const { return this->vpnType_ != nullptr;};
    void deleteVpnType() { this->vpnType_ = nullptr;};
    inline string getVpnType() const { DARABONBA_PTR_GET_DEFAULT(vpnType_, "") };
    inline DescribeVpnGatewayResponseBody& setVpnType(string vpnType) { DARABONBA_PTR_SET_VALUE(vpnType_, vpnType) };


  protected:
    // Indicates whether BGP routes are automatically advertised to the VPC. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoPropagate_ {};
    // The payment status of the VPN gateway. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    shared_ptr<string> businessStatus_ {};
    // The billing method. Valid value:
    // 
    // **POSTPAY**: pay-as-you-go
    shared_ptr<string> chargeType_ {};
    // The timestamp when the VPN gateway was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // The description of the VPN gateway.
    shared_ptr<string> description_ {};
    // The second IP address assigned by the system to create an IPsec-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    shared_ptr<string> disasterRecoveryInternetIp_ {};
    // The ID of the second vSwitch associated with the VPN gateway.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    shared_ptr<string> disasterRecoveryVSwitchId_ {};
    // Indicates whether BGP is enabled for the VPN gateway. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableBgp_ {};
    // The timestamp when the VPN gateway expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> endTime_ {};
    // The ENIs created by the system for the VPN gateway.
    shared_ptr<DescribeVpnGatewayResponseBody::EniInstanceIds> eniInstanceIds_ {};
    // *   If the VPN gateway supports IPsec-VPN connections in single-tunnel mode, the address is the IP address of the VPN gateway and can be used to create an IPsec-VPN connection or an SSL-VPN connection.
    // 
    // *   If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the address is the first IP address used to create an IPsec-VPN connection. The address cannot be used to create an SSL-VPN connection.
    // 
    //     If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the system assigns two IP addresses to the VPN gateway to create two encrypted tunnels.
    shared_ptr<string> internetIp_ {};
    // Indicates whether the IPsec-VPN feature is enabled. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    shared_ptr<string> ipsecVpn_ {};
    // The name of the VPN gateway.
    shared_ptr<string> name_ {};
    // The network type of the VPN gateway.
    // 
    // *   **public**
    // *   **private**
    shared_ptr<string> networkType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about pending orders.
    // 
    // > This set of parameters is returned only when **IncludeReservationData** is set to **true**.
    shared_ptr<DescribeVpnGatewayResponseBody::ReservationData> reservationData_ {};
    // The ID of the resource group to which the VPN gateway belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    shared_ptr<string> resourceGroupId_ {};
    // The maximum bandwidth of the VPN gateway. Unit: Mbit/s.
    shared_ptr<string> spec_ {};
    // The maximum number of concurrent SSL-VPN connections.
    shared_ptr<int64_t> sslMaxConnections_ {};
    // The status of the SSL-VPN feature. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    shared_ptr<string> sslVpn_ {};
    // The IP address of the SSL-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway is a public VPN gateway and supports only the single-tunnel mode. In addition, the VPN gateway must have the SSL-VPN feature enabled.
    shared_ptr<string> sslVpnInternetIp_ {};
    // The status of the VPN gateway. Valid values:
    // 
    // *   **init**
    // *   **provisioning**
    // *   **active**
    // *   **updating**
    // *   **deleting**
    shared_ptr<string> status_ {};
    // The tag that is automatically generated for the VPN gateway. The tag consists of the following parameters:
    // 
    // *   **VpnEnableBgp**: indicates whether the VPN gateway supports BGP. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **VisuallySsl**: indicates whether the VPN gateway allows you to view the connection information of SSL clients. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **PbrPriority**: indicates whether the VPN gateway allows you to configure priorities for policy-based routes. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **VpnNewImage**: indicates whether the VPN gateway is upgraded. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **description**: the description of the VPN gateway. This parameter is only for internal use.
    // 
    // *   **VpnVersion**: the version of the VPN gateway.
    // 
    // *   **IDaaSNewVersion**: indicates whether the VPN gateway can be associated with an EIAM 2.0 instance.
    // 
    //     *   **true**
    //     *   **false**
    shared_ptr<string> tag_ {};
    // The tags that are added to the VPN gateway.
    shared_ptr<DescribeVpnGatewayResponseBody::Tags> tags_ {};
    // The ID of the vSwitch to which the VPN gateway belongs.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC to which the VPN gateway belongs.
    shared_ptr<string> vpcId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
    // The type of VPN gateway. Only **Normal** may be returned, which indicates a standard VPN gateway.
    shared_ptr<string> vpnType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
