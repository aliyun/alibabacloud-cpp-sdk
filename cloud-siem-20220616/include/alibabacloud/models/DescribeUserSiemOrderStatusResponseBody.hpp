// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSIEMORDERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSIEMORDERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeUserSiemOrderStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSiemOrderStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSiemOrderStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserSiemOrderStatusResponseBody() = default ;
    DescribeUserSiemOrderStatusResponseBody(const DescribeUserSiemOrderStatusResponseBody &) = default ;
    DescribeUserSiemOrderStatusResponseBody(DescribeUserSiemOrderStatusResponseBody &&) = default ;
    DescribeUserSiemOrderStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSiemOrderStatusResponseBody() = default ;
    DescribeUserSiemOrderStatusResponseBody& operator=(const DescribeUserSiemOrderStatusResponseBody &) = default ;
    DescribeUserSiemOrderStatusResponseBody& operator=(DescribeUserSiemOrderStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsocInstanceId, asocInstanceId_);
        DARABONBA_PTR_TO_JSON(AsocSubscriptionInstanceEndTime, asocSubscriptionInstanceEndTime_);
        DARABONBA_PTR_TO_JSON(AsocSubscriptionInstanceStartTime, asocSubscriptionInstanceStartTime_);
        DARABONBA_PTR_TO_JSON(CanBuy, canBuy_);
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(CapacityOrderFrom, capacityOrderFrom_);
        DARABONBA_PTR_TO_JSON(CreditsPostpaidInfo, creditsPostpaidInfo_);
        DARABONBA_PTR_TO_JSON(DeliveryCapacity, deliveryCapacity_);
        DARABONBA_PTR_TO_JSON(DurationDays, durationDays_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FlowCapacity, flowCapacity_);
        DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_TO_JSON(MasterUserId, masterUserId_);
        DARABONBA_PTR_TO_JSON(RdId, rdId_);
        DARABONBA_PTR_TO_JSON(RdOrder, rdOrder_);
        DARABONBA_PTR_TO_JSON(SasInstanceId, sasInstanceId_);
        DARABONBA_PTR_TO_JSON(SiemOrderFrom, siemOrderFrom_);
        DARABONBA_PTR_TO_JSON(SiemOrderStatus, siemOrderStatus_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsocInstanceId, asocInstanceId_);
        DARABONBA_PTR_FROM_JSON(AsocSubscriptionInstanceEndTime, asocSubscriptionInstanceEndTime_);
        DARABONBA_PTR_FROM_JSON(AsocSubscriptionInstanceStartTime, asocSubscriptionInstanceStartTime_);
        DARABONBA_PTR_FROM_JSON(CanBuy, canBuy_);
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(CapacityOrderFrom, capacityOrderFrom_);
        DARABONBA_PTR_FROM_JSON(CreditsPostpaidInfo, creditsPostpaidInfo_);
        DARABONBA_PTR_FROM_JSON(DeliveryCapacity, deliveryCapacity_);
        DARABONBA_PTR_FROM_JSON(DurationDays, durationDays_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FlowCapacity, flowCapacity_);
        DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
        DARABONBA_PTR_FROM_JSON(MasterUserId, masterUserId_);
        DARABONBA_PTR_FROM_JSON(RdId, rdId_);
        DARABONBA_PTR_FROM_JSON(RdOrder, rdOrder_);
        DARABONBA_PTR_FROM_JSON(SasInstanceId, sasInstanceId_);
        DARABONBA_PTR_FROM_JSON(SiemOrderFrom, siemOrderFrom_);
        DARABONBA_PTR_FROM_JSON(SiemOrderStatus, siemOrderStatus_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CreditsPostpaidInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreditsPostpaidInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BillingStatus, billingStatus_);
          DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_TO_JSON(UserSwitchStatus, userSwitchStatus_);
        };
        friend void from_json(const Darabonba::Json& j, CreditsPostpaidInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BillingStatus, billingStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_FROM_JSON(UserSwitchStatus, userSwitchStatus_);
        };
        CreditsPostpaidInfo() = default ;
        CreditsPostpaidInfo(const CreditsPostpaidInfo &) = default ;
        CreditsPostpaidInfo(CreditsPostpaidInfo &&) = default ;
        CreditsPostpaidInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreditsPostpaidInfo() = default ;
        CreditsPostpaidInfo& operator=(const CreditsPostpaidInfo &) = default ;
        CreditsPostpaidInfo& operator=(CreditsPostpaidInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billingStatus_ == nullptr
        && this->instanceSource_ == nullptr && this->userSwitchStatus_ == nullptr; };
        // billingStatus Field Functions 
        bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
        void deleteBillingStatus() { this->billingStatus_ = nullptr;};
        inline int32_t getBillingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, 0) };
        inline CreditsPostpaidInfo& setBillingStatus(int32_t billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


        // instanceSource Field Functions 
        bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
        void deleteInstanceSource() { this->instanceSource_ = nullptr;};
        inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
        inline CreditsPostpaidInfo& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


        // userSwitchStatus Field Functions 
        bool hasUserSwitchStatus() const { return this->userSwitchStatus_ != nullptr;};
        void deleteUserSwitchStatus() { this->userSwitchStatus_ = nullptr;};
        inline int32_t getUserSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(userSwitchStatus_, 0) };
        inline CreditsPostpaidInfo& setUserSwitchStatus(int32_t userSwitchStatus) { DARABONBA_PTR_SET_VALUE(userSwitchStatus_, userSwitchStatus) };


      protected:
        // The billing status of the instance. Valid values:
        // - 1: Normal.
        // - 2: Suspended due to overdue payment.
        shared_ptr<int32_t> billingStatus_ {};
        // The source of the instance. Valid values:
        // - POSTPAID: Independent pay-as-you-go instance.
        // - SUBSCRIPTION_DEFAULT_PAYG: Default pay-as-you-go instance for subscription.
        shared_ptr<string> instanceSource_ {};
        // The user switch status. Valid values:
        // - 1: Enabled.
        // - 0: Disabled.
        shared_ptr<int32_t> userSwitchStatus_ {};
      };

      virtual bool empty() const override { return this->asocInstanceId_ == nullptr
        && this->asocSubscriptionInstanceEndTime_ == nullptr && this->asocSubscriptionInstanceStartTime_ == nullptr && this->canBuy_ == nullptr && this->capacity_ == nullptr && this->capacityOrderFrom_ == nullptr
        && this->creditsPostpaidInfo_ == nullptr && this->deliveryCapacity_ == nullptr && this->durationDays_ == nullptr && this->endTime_ == nullptr && this->flowCapacity_ == nullptr
        && this->mainUserId_ == nullptr && this->masterUserId_ == nullptr && this->rdId_ == nullptr && this->rdOrder_ == nullptr && this->sasInstanceId_ == nullptr
        && this->siemOrderFrom_ == nullptr && this->siemOrderStatus_ == nullptr && this->subUserId_ == nullptr && this->userType_ == nullptr; };
      // asocInstanceId Field Functions 
      bool hasAsocInstanceId() const { return this->asocInstanceId_ != nullptr;};
      void deleteAsocInstanceId() { this->asocInstanceId_ = nullptr;};
      inline string getAsocInstanceId() const { DARABONBA_PTR_GET_DEFAULT(asocInstanceId_, "") };
      inline Data& setAsocInstanceId(string asocInstanceId) { DARABONBA_PTR_SET_VALUE(asocInstanceId_, asocInstanceId) };


      // asocSubscriptionInstanceEndTime Field Functions 
      bool hasAsocSubscriptionInstanceEndTime() const { return this->asocSubscriptionInstanceEndTime_ != nullptr;};
      void deleteAsocSubscriptionInstanceEndTime() { this->asocSubscriptionInstanceEndTime_ = nullptr;};
      inline int64_t getAsocSubscriptionInstanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(asocSubscriptionInstanceEndTime_, 0L) };
      inline Data& setAsocSubscriptionInstanceEndTime(int64_t asocSubscriptionInstanceEndTime) { DARABONBA_PTR_SET_VALUE(asocSubscriptionInstanceEndTime_, asocSubscriptionInstanceEndTime) };


      // asocSubscriptionInstanceStartTime Field Functions 
      bool hasAsocSubscriptionInstanceStartTime() const { return this->asocSubscriptionInstanceStartTime_ != nullptr;};
      void deleteAsocSubscriptionInstanceStartTime() { this->asocSubscriptionInstanceStartTime_ = nullptr;};
      inline int64_t getAsocSubscriptionInstanceStartTime() const { DARABONBA_PTR_GET_DEFAULT(asocSubscriptionInstanceStartTime_, 0L) };
      inline Data& setAsocSubscriptionInstanceStartTime(int64_t asocSubscriptionInstanceStartTime) { DARABONBA_PTR_SET_VALUE(asocSubscriptionInstanceStartTime_, asocSubscriptionInstanceStartTime) };


      // canBuy Field Functions 
      bool hasCanBuy() const { return this->canBuy_ != nullptr;};
      void deleteCanBuy() { this->canBuy_ = nullptr;};
      inline bool getCanBuy() const { DARABONBA_PTR_GET_DEFAULT(canBuy_, false) };
      inline Data& setCanBuy(bool canBuy) { DARABONBA_PTR_SET_VALUE(canBuy_, canBuy) };


      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
      inline Data& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // capacityOrderFrom Field Functions 
      bool hasCapacityOrderFrom() const { return this->capacityOrderFrom_ != nullptr;};
      void deleteCapacityOrderFrom() { this->capacityOrderFrom_ = nullptr;};
      inline string getCapacityOrderFrom() const { DARABONBA_PTR_GET_DEFAULT(capacityOrderFrom_, "") };
      inline Data& setCapacityOrderFrom(string capacityOrderFrom) { DARABONBA_PTR_SET_VALUE(capacityOrderFrom_, capacityOrderFrom) };


      // creditsPostpaidInfo Field Functions 
      bool hasCreditsPostpaidInfo() const { return this->creditsPostpaidInfo_ != nullptr;};
      void deleteCreditsPostpaidInfo() { this->creditsPostpaidInfo_ = nullptr;};
      inline const Data::CreditsPostpaidInfo & getCreditsPostpaidInfo() const { DARABONBA_PTR_GET_CONST(creditsPostpaidInfo_, Data::CreditsPostpaidInfo) };
      inline Data::CreditsPostpaidInfo getCreditsPostpaidInfo() { DARABONBA_PTR_GET(creditsPostpaidInfo_, Data::CreditsPostpaidInfo) };
      inline Data& setCreditsPostpaidInfo(const Data::CreditsPostpaidInfo & creditsPostpaidInfo) { DARABONBA_PTR_SET_VALUE(creditsPostpaidInfo_, creditsPostpaidInfo) };
      inline Data& setCreditsPostpaidInfo(Data::CreditsPostpaidInfo && creditsPostpaidInfo) { DARABONBA_PTR_SET_RVALUE(creditsPostpaidInfo_, creditsPostpaidInfo) };


      // deliveryCapacity Field Functions 
      bool hasDeliveryCapacity() const { return this->deliveryCapacity_ != nullptr;};
      void deleteDeliveryCapacity() { this->deliveryCapacity_ = nullptr;};
      inline int32_t getDeliveryCapacity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCapacity_, 0) };
      inline Data& setDeliveryCapacity(int32_t deliveryCapacity) { DARABONBA_PTR_SET_VALUE(deliveryCapacity_, deliveryCapacity) };


      // durationDays Field Functions 
      bool hasDurationDays() const { return this->durationDays_ != nullptr;};
      void deleteDurationDays() { this->durationDays_ = nullptr;};
      inline int64_t getDurationDays() const { DARABONBA_PTR_GET_DEFAULT(durationDays_, 0L) };
      inline Data& setDurationDays(int64_t durationDays) { DARABONBA_PTR_SET_VALUE(durationDays_, durationDays) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // flowCapacity Field Functions 
      bool hasFlowCapacity() const { return this->flowCapacity_ != nullptr;};
      void deleteFlowCapacity() { this->flowCapacity_ = nullptr;};
      inline int32_t getFlowCapacity() const { DARABONBA_PTR_GET_DEFAULT(flowCapacity_, 0) };
      inline Data& setFlowCapacity(int32_t flowCapacity) { DARABONBA_PTR_SET_VALUE(flowCapacity_, flowCapacity) };


      // mainUserId Field Functions 
      bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
      void deleteMainUserId() { this->mainUserId_ = nullptr;};
      inline int64_t getMainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
      inline Data& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


      // masterUserId Field Functions 
      bool hasMasterUserId() const { return this->masterUserId_ != nullptr;};
      void deleteMasterUserId() { this->masterUserId_ = nullptr;};
      inline int64_t getMasterUserId() const { DARABONBA_PTR_GET_DEFAULT(masterUserId_, 0L) };
      inline Data& setMasterUserId(int64_t masterUserId) { DARABONBA_PTR_SET_VALUE(masterUserId_, masterUserId) };


      // rdId Field Functions 
      bool hasRdId() const { return this->rdId_ != nullptr;};
      void deleteRdId() { this->rdId_ = nullptr;};
      inline string getRdId() const { DARABONBA_PTR_GET_DEFAULT(rdId_, "") };
      inline Data& setRdId(string rdId) { DARABONBA_PTR_SET_VALUE(rdId_, rdId) };


      // rdOrder Field Functions 
      bool hasRdOrder() const { return this->rdOrder_ != nullptr;};
      void deleteRdOrder() { this->rdOrder_ = nullptr;};
      inline int32_t getRdOrder() const { DARABONBA_PTR_GET_DEFAULT(rdOrder_, 0) };
      inline Data& setRdOrder(int32_t rdOrder) { DARABONBA_PTR_SET_VALUE(rdOrder_, rdOrder) };


      // sasInstanceId Field Functions 
      bool hasSasInstanceId() const { return this->sasInstanceId_ != nullptr;};
      void deleteSasInstanceId() { this->sasInstanceId_ = nullptr;};
      inline string getSasInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sasInstanceId_, "") };
      inline Data& setSasInstanceId(string sasInstanceId) { DARABONBA_PTR_SET_VALUE(sasInstanceId_, sasInstanceId) };


      // siemOrderFrom Field Functions 
      bool hasSiemOrderFrom() const { return this->siemOrderFrom_ != nullptr;};
      void deleteSiemOrderFrom() { this->siemOrderFrom_ = nullptr;};
      inline string getSiemOrderFrom() const { DARABONBA_PTR_GET_DEFAULT(siemOrderFrom_, "") };
      inline Data& setSiemOrderFrom(string siemOrderFrom) { DARABONBA_PTR_SET_VALUE(siemOrderFrom_, siemOrderFrom) };


      // siemOrderStatus Field Functions 
      bool hasSiemOrderStatus() const { return this->siemOrderStatus_ != nullptr;};
      void deleteSiemOrderStatus() { this->siemOrderStatus_ = nullptr;};
      inline int32_t getSiemOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(siemOrderStatus_, 0) };
      inline Data& setSiemOrderStatus(int32_t siemOrderStatus) { DARABONBA_PTR_SET_VALUE(siemOrderStatus_, siemOrderStatus) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline Data& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The ID of the Agentic SOC Credits instance. If SiemOrderFrom is CREDITS_PRE_PAY, the ID of the Credits subscription instance is returned. If SiemOrderFrom is CREDITS_POST_PAY, the ID of the Credits pay-as-you-go instance is returned. If no Credits instance is found, this field is empty. The Security Center instance ID for legacy orders is returned by SasInstanceId.
      shared_ptr<string> asocInstanceId_ {};
      // The end time of the Agentic SOC Credits subscription. The value is a UNIX timestamp in milliseconds (13 digits). This field is returned only when SiemOrderFrom is CREDITS_PRE_PAY. Otherwise, this field is empty.
      shared_ptr<int64_t> asocSubscriptionInstanceEndTime_ {};
      // The start time of the Agentic SOC Credits subscription. The value is a UNIX timestamp in milliseconds (13 digits). This field is returned only when SiemOrderFrom is CREDITS_PRE_PAY. Otherwise, this field is empty.
      shared_ptr<int64_t> asocSubscriptionInstanceStartTime_ {};
      // Specifies whether the current account can perform operations on threat analysis orders. Valid values:
      // - true: The account can purchase, upgrade, or change the configuration of threat analysis.
      // - false: The account cannot perform operations on threat analysis orders.
      shared_ptr<bool> canBuy_ {};
      // The purchased Simple Log Service (SLS) capacity for threat analysis. Unit: GB.
      shared_ptr<int32_t> capacity_ {};
      // The source of the log storage capacity order. Valid values:
      // - PRE_PAY_CAPACITY: Prepaid capacity order.
      // - POST_PAY_CAPACITY: Pay-as-you-go capacity order.
      // 
      // The source of the capacity order is independent of the traffic order source represented by SiemOrderFrom.
      shared_ptr<string> capacityOrderFrom_ {};
      // The information about the Credits pay-as-you-go instance. This field is returned when a Credits pay-as-you-go instance is found, and can be returned simultaneously with a valid legacy traffic order.
      shared_ptr<Data::CreditsPostpaidInfo> creditsPostpaidInfo_ {};
      // The purchased SLS capacity for Threat Analysis 1.0. Unit: GB.
      shared_ptr<int32_t> deliveryCapacity_ {};
      // The number of days until the threat analysis service expires.
      shared_ptr<int64_t> durationDays_ {};
      // The expiration time of threat analysis. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The purchased traffic for threat analysis. Unit: GB.
      shared_ptr<int32_t> flowCapacity_ {};
      // The Alibaba Cloud account ID that purchased threat analysis.
      shared_ptr<int64_t> mainUserId_ {};
      // The ID of the master account in the resource directory.
      shared_ptr<int64_t> masterUserId_ {};
      // The ID of the resource directory.
      shared_ptr<string> rdId_ {};
      // Specifies whether the order is a SIEM public preview order.
      shared_ptr<int32_t> rdOrder_ {};
      // The Security Center instance ID.
      shared_ptr<string> sasInstanceId_ {};
      // The source of the traffic order. Valid values:
      // - PRE_PAY_FLOW: Prepaid traffic order for threat analysis.
      // - POST_PAY_FLOW: Pay-as-you-go traffic order for threat analysis.
      // - CREDITS_PRE_PAY: Agentic SOC Credits subscription.
      // - CREDITS_POST_PAY: Agentic SOC Credits pay-as-you-go instance.
      // 
      // This field describes the source of the traffic order. The source of the log storage capacity order is independently represented by CapacityOrderFrom.
      shared_ptr<string> siemOrderFrom_ {};
      // Specifies whether there is a valid SIEM order. Valid values:
      // - 1: The SIEM order is valid.
      // - 0: The SIEM order is invalid.
      shared_ptr<int32_t> siemOrderStatus_ {};
      // The Alibaba Cloud account ID of the current logon.
      shared_ptr<int64_t> subUserId_ {};
      // The user type.
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeUserSiemOrderStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeUserSiemOrderStatusResponseBody::Data) };
    inline DescribeUserSiemOrderStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeUserSiemOrderStatusResponseBody::Data) };
    inline DescribeUserSiemOrderStatusResponseBody& setData(const DescribeUserSiemOrderStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeUserSiemOrderStatusResponseBody& setData(DescribeUserSiemOrderStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserSiemOrderStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<DescribeUserSiemOrderStatusResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
