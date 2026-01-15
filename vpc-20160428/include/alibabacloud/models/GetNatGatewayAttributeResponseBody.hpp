// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODY_HPP_
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
  class GetNatGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(BillingConfig, billingConfig_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionInfo, deletionProtectionInfo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ForwardTable, forwardTable_);
      DARABONBA_PTR_TO_JSON(FullNatTable, fullNatTable_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatType, natType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PrivateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_TO_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnatTable, snatTable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(BillingConfig, billingConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionInfo, deletionProtectionInfo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ForwardTable, forwardTable_);
      DARABONBA_PTR_FROM_JSON(FullNatTable, fullNatTable_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatType, natType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PrivateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnatTable, snatTable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetNatGatewayAttributeResponseBody() = default ;
    GetNatGatewayAttributeResponseBody(const GetNatGatewayAttributeResponseBody &) = default ;
    GetNatGatewayAttributeResponseBody(GetNatGatewayAttributeResponseBody &&) = default ;
    GetNatGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBody() = default ;
    GetNatGatewayAttributeResponseBody& operator=(const GetNatGatewayAttributeResponseBody &) = default ;
    GetNatGatewayAttributeResponseBody& operator=(GetNatGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnatTable : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatTable& obj) { 
        DARABONBA_PTR_TO_JSON(SnatEntryCount, snatEntryCount_);
        DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
      };
      friend void from_json(const Darabonba::Json& j, SnatTable& obj) { 
        DARABONBA_PTR_FROM_JSON(SnatEntryCount, snatEntryCount_);
        DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
      };
      SnatTable() = default ;
      SnatTable(const SnatTable &) = default ;
      SnatTable(SnatTable &&) = default ;
      SnatTable(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatTable() = default ;
      SnatTable& operator=(const SnatTable &) = default ;
      SnatTable& operator=(SnatTable &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->snatEntryCount_ == nullptr
        && this->snatTableId_ == nullptr; };
      // snatEntryCount Field Functions 
      bool hasSnatEntryCount() const { return this->snatEntryCount_ != nullptr;};
      void deleteSnatEntryCount() { this->snatEntryCount_ = nullptr;};
      inline int32_t getSnatEntryCount() const { DARABONBA_PTR_GET_DEFAULT(snatEntryCount_, 0) };
      inline SnatTable& setSnatEntryCount(int32_t snatEntryCount) { DARABONBA_PTR_SET_VALUE(snatEntryCount_, snatEntryCount) };


      // snatTableId Field Functions 
      bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
      void deleteSnatTableId() { this->snatTableId_ = nullptr;};
      inline string getSnatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
      inline SnatTable& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


    protected:
      // The number of SNAT entries.
      shared_ptr<int32_t> snatEntryCount_ {};
      // The ID of the SNAT table.
      shared_ptr<string> snatTableId_ {};
    };

    class PrivateInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
        DARABONBA_PTR_TO_JSON(IzNo, izNo_);
        DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
        DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
        DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      PrivateInfo() = default ;
      PrivateInfo(const PrivateInfo &) = default ;
      PrivateInfo(PrivateInfo &&) = default ;
      PrivateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateInfo() = default ;
      PrivateInfo& operator=(const PrivateInfo &) = default ;
      PrivateInfo& operator=(PrivateInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eniInstanceId_ == nullptr
        && this->izNo_ == nullptr && this->maxBandwidth_ == nullptr && this->privateIpAddress_ == nullptr && this->vswitchId_ == nullptr; };
      // eniInstanceId Field Functions 
      bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
      void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
      inline string getEniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
      inline PrivateInfo& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


      // izNo Field Functions 
      bool hasIzNo() const { return this->izNo_ != nullptr;};
      void deleteIzNo() { this->izNo_ = nullptr;};
      inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
      inline PrivateInfo& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


      // maxBandwidth Field Functions 
      bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
      void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
      inline int32_t getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
      inline PrivateInfo& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline PrivateInfo& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline PrivateInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // The ID of the elastic network interface (ENI).
      shared_ptr<string> eniInstanceId_ {};
      // The zone where the NAT gateway is deployed.
      shared_ptr<string> izNo_ {};
      // The maximum bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> maxBandwidth_ {};
      // The private IP address.
      shared_ptr<string> privateIpAddress_ {};
      // The ID of the vSwitch to which the NAT gateway belongs.
      shared_ptr<string> vswitchId_ {};
    };

    class LogDelivery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogDelivery& obj) { 
        DARABONBA_PTR_TO_JSON(DeliverLogsErrorMessage, deliverLogsErrorMessage_);
        DARABONBA_PTR_TO_JSON(DeliveryStatus, deliveryStatus_);
        DARABONBA_PTR_TO_JSON(LogDeliveryType, logDeliveryType_);
        DARABONBA_PTR_TO_JSON(LogDestination, logDestination_);
      };
      friend void from_json(const Darabonba::Json& j, LogDelivery& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliverLogsErrorMessage, deliverLogsErrorMessage_);
        DARABONBA_PTR_FROM_JSON(DeliveryStatus, deliveryStatus_);
        DARABONBA_PTR_FROM_JSON(LogDeliveryType, logDeliveryType_);
        DARABONBA_PTR_FROM_JSON(LogDestination, logDestination_);
      };
      LogDelivery() = default ;
      LogDelivery(const LogDelivery &) = default ;
      LogDelivery(LogDelivery &&) = default ;
      LogDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogDelivery() = default ;
      LogDelivery& operator=(const LogDelivery &) = default ;
      LogDelivery& operator=(LogDelivery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliverLogsErrorMessage_ == nullptr
        && this->deliveryStatus_ == nullptr && this->logDeliveryType_ == nullptr && this->logDestination_ == nullptr; };
      // deliverLogsErrorMessage Field Functions 
      bool hasDeliverLogsErrorMessage() const { return this->deliverLogsErrorMessage_ != nullptr;};
      void deleteDeliverLogsErrorMessage() { this->deliverLogsErrorMessage_ = nullptr;};
      inline string getDeliverLogsErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(deliverLogsErrorMessage_, "") };
      inline LogDelivery& setDeliverLogsErrorMessage(string deliverLogsErrorMessage) { DARABONBA_PTR_SET_VALUE(deliverLogsErrorMessage_, deliverLogsErrorMessage) };


      // deliveryStatus Field Functions 
      bool hasDeliveryStatus() const { return this->deliveryStatus_ != nullptr;};
      void deleteDeliveryStatus() { this->deliveryStatus_ = nullptr;};
      inline string getDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(deliveryStatus_, "") };
      inline LogDelivery& setDeliveryStatus(string deliveryStatus) { DARABONBA_PTR_SET_VALUE(deliveryStatus_, deliveryStatus) };


      // logDeliveryType Field Functions 
      bool hasLogDeliveryType() const { return this->logDeliveryType_ != nullptr;};
      void deleteLogDeliveryType() { this->logDeliveryType_ = nullptr;};
      inline string getLogDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryType_, "") };
      inline LogDelivery& setLogDeliveryType(string logDeliveryType) { DARABONBA_PTR_SET_VALUE(logDeliveryType_, logDeliveryType) };


      // logDestination Field Functions 
      bool hasLogDestination() const { return this->logDestination_ != nullptr;};
      void deleteLogDestination() { this->logDestination_ = nullptr;};
      inline string getLogDestination() const { DARABONBA_PTR_GET_DEFAULT(logDestination_, "") };
      inline LogDelivery& setLogDestination(string logDestination) { DARABONBA_PTR_SET_VALUE(logDestination_, logDestination) };


    protected:
      // Error message for session log write failure.
      shared_ptr<string> deliverLogsErrorMessage_ {};
      // Session log write status. Values:
      // - **Success**: Success. 
      // - **Failure**: Failure.
      shared_ptr<string> deliveryStatus_ {};
      // Session log delivery destination type. Value: **sls**, Alibaba Cloud Log Service SLS.
      shared_ptr<string> logDeliveryType_ {};
      // Destination address for session log writing
      shared_ptr<string> logDestination_ {};
    };

    class IpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpList& obj) { 
        DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
      };
      friend void from_json(const Darabonba::Json& j, IpList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
      };
      IpList() = default ;
      IpList(const IpList &) = default ;
      IpList(IpList &&) = default ;
      IpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpList() = default ;
      IpList& operator=(const IpList &) = default ;
      IpList& operator=(IpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->ipAddress_ == nullptr && this->usingStatus_ == nullptr; };
      // allocationId Field Functions 
      bool hasAllocationId() const { return this->allocationId_ != nullptr;};
      void deleteAllocationId() { this->allocationId_ = nullptr;};
      inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
      inline IpList& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline IpList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // usingStatus Field Functions 
      bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
      void deleteUsingStatus() { this->usingStatus_ = nullptr;};
      inline string getUsingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
      inline IpList& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


    protected:
      // The ID of the EIP.
      shared_ptr<string> allocationId_ {};
      // The IP address of the EIP.
      shared_ptr<string> ipAddress_ {};
      // The association status of the EIP.
      // 
      // *   **idle**: The EIP is not specified in an SNAT entry or a DNAT entry.
      // *   **UsedBySnatTable**: The EIP is specified in an SNAT entry.
      // *   **UsedByForwardTable**: The EIP is specified in a DNAT entry.
      shared_ptr<string> usingStatus_ {};
    };

    class FullNatTable : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FullNatTable& obj) { 
        DARABONBA_PTR_TO_JSON(FullNatEntryCount, fullNatEntryCount_);
        DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      };
      friend void from_json(const Darabonba::Json& j, FullNatTable& obj) { 
        DARABONBA_PTR_FROM_JSON(FullNatEntryCount, fullNatEntryCount_);
        DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      };
      FullNatTable() = default ;
      FullNatTable(const FullNatTable &) = default ;
      FullNatTable(FullNatTable &&) = default ;
      FullNatTable(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FullNatTable() = default ;
      FullNatTable& operator=(const FullNatTable &) = default ;
      FullNatTable& operator=(FullNatTable &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fullNatEntryCount_ == nullptr
        && this->fullNatTableId_ == nullptr; };
      // fullNatEntryCount Field Functions 
      bool hasFullNatEntryCount() const { return this->fullNatEntryCount_ != nullptr;};
      void deleteFullNatEntryCount() { this->fullNatEntryCount_ = nullptr;};
      inline int64_t getFullNatEntryCount() const { DARABONBA_PTR_GET_DEFAULT(fullNatEntryCount_, 0L) };
      inline FullNatTable& setFullNatEntryCount(int64_t fullNatEntryCount) { DARABONBA_PTR_SET_VALUE(fullNatEntryCount_, fullNatEntryCount) };


      // fullNatTableId Field Functions 
      bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
      void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
      inline string getFullNatTableId() const { DARABONBA_PTR_GET_DEFAULT(fullNatTableId_, "") };
      inline FullNatTable& setFullNatTableId(string fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };


    protected:
      // The number of FULLNAT entries.
      shared_ptr<int64_t> fullNatEntryCount_ {};
      // The ID of the FULLNAT table.
      shared_ptr<string> fullNatTableId_ {};
    };

    class ForwardTable : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardTable& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardEntryCount, forwardEntryCount_);
        DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardTable& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardEntryCount, forwardEntryCount_);
        DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      };
      ForwardTable() = default ;
      ForwardTable(const ForwardTable &) = default ;
      ForwardTable(ForwardTable &&) = default ;
      ForwardTable(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardTable() = default ;
      ForwardTable& operator=(const ForwardTable &) = default ;
      ForwardTable& operator=(ForwardTable &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->forwardEntryCount_ == nullptr
        && this->forwardTableId_ == nullptr; };
      // forwardEntryCount Field Functions 
      bool hasForwardEntryCount() const { return this->forwardEntryCount_ != nullptr;};
      void deleteForwardEntryCount() { this->forwardEntryCount_ = nullptr;};
      inline int32_t getForwardEntryCount() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryCount_, 0) };
      inline ForwardTable& setForwardEntryCount(int32_t forwardEntryCount) { DARABONBA_PTR_SET_VALUE(forwardEntryCount_, forwardEntryCount) };


      // forwardTableId Field Functions 
      bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
      void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
      inline string getForwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
      inline ForwardTable& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


    protected:
      // The number of DNAT entries.
      shared_ptr<int32_t> forwardEntryCount_ {};
      // The ID of the DNAT table.
      shared_ptr<string> forwardTableId_ {};
    };

    class DeletionProtectionInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeletionProtectionInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, DeletionProtectionInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      DeletionProtectionInfo() = default ;
      DeletionProtectionInfo(const DeletionProtectionInfo &) = default ;
      DeletionProtectionInfo(DeletionProtectionInfo &&) = default ;
      DeletionProtectionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeletionProtectionInfo() = default ;
      DeletionProtectionInfo& operator=(const DeletionProtectionInfo &) = default ;
      DeletionProtectionInfo& operator=(DeletionProtectionInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DeletionProtectionInfo& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // Indicates whether deletion protection is enabled.
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> enabled_ {};
    };

    class BillingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, BillingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
      };
      BillingConfig() = default ;
      BillingConfig(const BillingConfig &) = default ;
      BillingConfig(BillingConfig &&) = default ;
      BillingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillingConfig() = default ;
      BillingConfig& operator=(const BillingConfig &) = default ;
      BillingConfig& operator=(BillingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->spec_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline string getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, "") };
      inline BillingConfig& setAutoPay(string autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline BillingConfig& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline BillingConfig& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline BillingConfig& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      // Indicates whether automatic payment is enabled. If the **InstanceChargeType** parameter is set to **PrePaid**, one of the following values is returned:
      // 
      // *   **false**: disabled. After an order is generated, you must go to the Order Center to complete the payment.
      // *   **true**: enabled. Payments are automatically completed.
      // 
      // The return value of this parameter is empty if **InstanceChargeType** is set to **PostPaid**.
      shared_ptr<string> autoPay_ {};
      // The billing method of the NAT gateway. The value is set to **PostPaid**, which indicates the pay-as-you-go billing method.
      shared_ptr<string> instanceChargeType_ {};
      // The metering method of the NAT gateway. Valid values:
      // 
      // *   **PayBySpec**: pay-by-specification
      // *   **PayByLcu**: pay-by-CU
      shared_ptr<string> internetChargeType_ {};
      // The specification of the Internet NAT gateway. If the **InternetChargeType** parameter is set to **PayBySpec**, one of the following values is returned:
      // 
      // *   **Small**: small
      // 
      // *   **Middle**: medium
      // 
      // *   **Large**: large
      // 
      //     The return value of this parameter is empty if **InternetChargeType** is set to **PayByLcu**.
      shared_ptr<string> spec_ {};
    };

    class AccessMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessMode& obj) { 
        DARABONBA_PTR_TO_JSON(ModeValue, modeValue_);
        DARABONBA_PTR_TO_JSON(TunnelType, tunnelType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessMode& obj) { 
        DARABONBA_PTR_FROM_JSON(ModeValue, modeValue_);
        DARABONBA_PTR_FROM_JSON(TunnelType, tunnelType_);
      };
      AccessMode() = default ;
      AccessMode(const AccessMode &) = default ;
      AccessMode(AccessMode &&) = default ;
      AccessMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessMode() = default ;
      AccessMode& operator=(const AccessMode &) = default ;
      AccessMode& operator=(AccessMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modeValue_ == nullptr
        && this->tunnelType_ == nullptr; };
      // modeValue Field Functions 
      bool hasModeValue() const { return this->modeValue_ != nullptr;};
      void deleteModeValue() { this->modeValue_ = nullptr;};
      inline string getModeValue() const { DARABONBA_PTR_GET_DEFAULT(modeValue_, "") };
      inline AccessMode& setModeValue(string modeValue) { DARABONBA_PTR_SET_VALUE(modeValue_, modeValue) };


      // tunnelType Field Functions 
      bool hasTunnelType() const { return this->tunnelType_ != nullptr;};
      void deleteTunnelType() { this->tunnelType_ = nullptr;};
      inline string getTunnelType() const { DARABONBA_PTR_GET_DEFAULT(tunnelType_, "") };
      inline AccessMode& setTunnelType(string tunnelType) { DARABONBA_PTR_SET_VALUE(tunnelType_, tunnelType) };


    protected:
      // Access mode values:
      // - **route**: Route mode.
      // - **tunnel**: Tunnel mode.
      shared_ptr<string> modeValue_ {};
      // Tunnel mode type:
      // - **geneve**: Geneve type.
      shared_ptr<string> tunnelType_ {};
    };

    virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->billingConfig_ == nullptr && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->deletionProtectionInfo_ == nullptr && this->description_ == nullptr
        && this->ecsMetricEnabled_ == nullptr && this->enableSessionLog_ == nullptr && this->expiredTime_ == nullptr && this->forwardTable_ == nullptr && this->fullNatTable_ == nullptr
        && this->ipList_ == nullptr && this->logDelivery_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->natType_ == nullptr
        && this->networkType_ == nullptr && this->privateInfo_ == nullptr && this->privateLinkEnabled_ == nullptr && this->privateLinkMode_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->snatTable_ == nullptr && this->status_ == nullptr && this->vpcId_ == nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::AccessMode & getAccessMode() const { DARABONBA_PTR_GET_CONST(accessMode_, GetNatGatewayAttributeResponseBody::AccessMode) };
    inline GetNatGatewayAttributeResponseBody::AccessMode getAccessMode() { DARABONBA_PTR_GET(accessMode_, GetNatGatewayAttributeResponseBody::AccessMode) };
    inline GetNatGatewayAttributeResponseBody& setAccessMode(const GetNatGatewayAttributeResponseBody::AccessMode & accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };
    inline GetNatGatewayAttributeResponseBody& setAccessMode(GetNatGatewayAttributeResponseBody::AccessMode && accessMode) { DARABONBA_PTR_SET_RVALUE(accessMode_, accessMode) };


    // billingConfig Field Functions 
    bool hasBillingConfig() const { return this->billingConfig_ != nullptr;};
    void deleteBillingConfig() { this->billingConfig_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::BillingConfig & getBillingConfig() const { DARABONBA_PTR_GET_CONST(billingConfig_, GetNatGatewayAttributeResponseBody::BillingConfig) };
    inline GetNatGatewayAttributeResponseBody::BillingConfig getBillingConfig() { DARABONBA_PTR_GET(billingConfig_, GetNatGatewayAttributeResponseBody::BillingConfig) };
    inline GetNatGatewayAttributeResponseBody& setBillingConfig(const GetNatGatewayAttributeResponseBody::BillingConfig & billingConfig) { DARABONBA_PTR_SET_VALUE(billingConfig_, billingConfig) };
    inline GetNatGatewayAttributeResponseBody& setBillingConfig(GetNatGatewayAttributeResponseBody::BillingConfig && billingConfig) { DARABONBA_PTR_SET_RVALUE(billingConfig_, billingConfig) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline GetNatGatewayAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetNatGatewayAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deletionProtectionInfo Field Functions 
    bool hasDeletionProtectionInfo() const { return this->deletionProtectionInfo_ != nullptr;};
    void deleteDeletionProtectionInfo() { this->deletionProtectionInfo_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::DeletionProtectionInfo & getDeletionProtectionInfo() const { DARABONBA_PTR_GET_CONST(deletionProtectionInfo_, GetNatGatewayAttributeResponseBody::DeletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBody::DeletionProtectionInfo getDeletionProtectionInfo() { DARABONBA_PTR_GET(deletionProtectionInfo_, GetNatGatewayAttributeResponseBody::DeletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBody& setDeletionProtectionInfo(const GetNatGatewayAttributeResponseBody::DeletionProtectionInfo & deletionProtectionInfo) { DARABONBA_PTR_SET_VALUE(deletionProtectionInfo_, deletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBody& setDeletionProtectionInfo(GetNatGatewayAttributeResponseBody::DeletionProtectionInfo && deletionProtectionInfo) { DARABONBA_PTR_SET_RVALUE(deletionProtectionInfo_, deletionProtectionInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetNatGatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsMetricEnabled Field Functions 
    bool hasEcsMetricEnabled() const { return this->ecsMetricEnabled_ != nullptr;};
    void deleteEcsMetricEnabled() { this->ecsMetricEnabled_ = nullptr;};
    inline bool getEcsMetricEnabled() const { DARABONBA_PTR_GET_DEFAULT(ecsMetricEnabled_, false) };
    inline GetNatGatewayAttributeResponseBody& setEcsMetricEnabled(bool ecsMetricEnabled) { DARABONBA_PTR_SET_VALUE(ecsMetricEnabled_, ecsMetricEnabled) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline bool getEnableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, false) };
    inline GetNatGatewayAttributeResponseBody& setEnableSessionLog(bool enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetNatGatewayAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // forwardTable Field Functions 
    bool hasForwardTable() const { return this->forwardTable_ != nullptr;};
    void deleteForwardTable() { this->forwardTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::ForwardTable & getForwardTable() const { DARABONBA_PTR_GET_CONST(forwardTable_, GetNatGatewayAttributeResponseBody::ForwardTable) };
    inline GetNatGatewayAttributeResponseBody::ForwardTable getForwardTable() { DARABONBA_PTR_GET(forwardTable_, GetNatGatewayAttributeResponseBody::ForwardTable) };
    inline GetNatGatewayAttributeResponseBody& setForwardTable(const GetNatGatewayAttributeResponseBody::ForwardTable & forwardTable) { DARABONBA_PTR_SET_VALUE(forwardTable_, forwardTable) };
    inline GetNatGatewayAttributeResponseBody& setForwardTable(GetNatGatewayAttributeResponseBody::ForwardTable && forwardTable) { DARABONBA_PTR_SET_RVALUE(forwardTable_, forwardTable) };


    // fullNatTable Field Functions 
    bool hasFullNatTable() const { return this->fullNatTable_ != nullptr;};
    void deleteFullNatTable() { this->fullNatTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::FullNatTable & getFullNatTable() const { DARABONBA_PTR_GET_CONST(fullNatTable_, GetNatGatewayAttributeResponseBody::FullNatTable) };
    inline GetNatGatewayAttributeResponseBody::FullNatTable getFullNatTable() { DARABONBA_PTR_GET(fullNatTable_, GetNatGatewayAttributeResponseBody::FullNatTable) };
    inline GetNatGatewayAttributeResponseBody& setFullNatTable(const GetNatGatewayAttributeResponseBody::FullNatTable & fullNatTable) { DARABONBA_PTR_SET_VALUE(fullNatTable_, fullNatTable) };
    inline GetNatGatewayAttributeResponseBody& setFullNatTable(GetNatGatewayAttributeResponseBody::FullNatTable && fullNatTable) { DARABONBA_PTR_SET_RVALUE(fullNatTable_, fullNatTable) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<GetNatGatewayAttributeResponseBody::IpList> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<GetNatGatewayAttributeResponseBody::IpList>) };
    inline vector<GetNatGatewayAttributeResponseBody::IpList> getIpList() { DARABONBA_PTR_GET(ipList_, vector<GetNatGatewayAttributeResponseBody::IpList>) };
    inline GetNatGatewayAttributeResponseBody& setIpList(const vector<GetNatGatewayAttributeResponseBody::IpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline GetNatGatewayAttributeResponseBody& setIpList(vector<GetNatGatewayAttributeResponseBody::IpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // logDelivery Field Functions 
    bool hasLogDelivery() const { return this->logDelivery_ != nullptr;};
    void deleteLogDelivery() { this->logDelivery_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::LogDelivery & getLogDelivery() const { DARABONBA_PTR_GET_CONST(logDelivery_, GetNatGatewayAttributeResponseBody::LogDelivery) };
    inline GetNatGatewayAttributeResponseBody::LogDelivery getLogDelivery() { DARABONBA_PTR_GET(logDelivery_, GetNatGatewayAttributeResponseBody::LogDelivery) };
    inline GetNatGatewayAttributeResponseBody& setLogDelivery(const GetNatGatewayAttributeResponseBody::LogDelivery & logDelivery) { DARABONBA_PTR_SET_VALUE(logDelivery_, logDelivery) };
    inline GetNatGatewayAttributeResponseBody& setLogDelivery(GetNatGatewayAttributeResponseBody::LogDelivery && logDelivery) { DARABONBA_PTR_SET_RVALUE(logDelivery_, logDelivery) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNatGatewayAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline GetNatGatewayAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natType Field Functions 
    bool hasNatType() const { return this->natType_ != nullptr;};
    void deleteNatType() { this->natType_ = nullptr;};
    inline string getNatType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
    inline GetNatGatewayAttributeResponseBody& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetNatGatewayAttributeResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::PrivateInfo & getPrivateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, GetNatGatewayAttributeResponseBody::PrivateInfo) };
    inline GetNatGatewayAttributeResponseBody::PrivateInfo getPrivateInfo() { DARABONBA_PTR_GET(privateInfo_, GetNatGatewayAttributeResponseBody::PrivateInfo) };
    inline GetNatGatewayAttributeResponseBody& setPrivateInfo(const GetNatGatewayAttributeResponseBody::PrivateInfo & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline GetNatGatewayAttributeResponseBody& setPrivateInfo(GetNatGatewayAttributeResponseBody::PrivateInfo && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // privateLinkEnabled Field Functions 
    bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
    void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
    inline bool getPrivateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
    inline GetNatGatewayAttributeResponseBody& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


    // privateLinkMode Field Functions 
    bool hasPrivateLinkMode() const { return this->privateLinkMode_ != nullptr;};
    void deletePrivateLinkMode() { this->privateLinkMode_ = nullptr;};
    inline string getPrivateLinkMode() const { DARABONBA_PTR_GET_DEFAULT(privateLinkMode_, "") };
    inline GetNatGatewayAttributeResponseBody& setPrivateLinkMode(string privateLinkMode) { DARABONBA_PTR_SET_VALUE(privateLinkMode_, privateLinkMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNatGatewayAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetNatGatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snatTable Field Functions 
    bool hasSnatTable() const { return this->snatTable_ != nullptr;};
    void deleteSnatTable() { this->snatTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBody::SnatTable & getSnatTable() const { DARABONBA_PTR_GET_CONST(snatTable_, GetNatGatewayAttributeResponseBody::SnatTable) };
    inline GetNatGatewayAttributeResponseBody::SnatTable getSnatTable() { DARABONBA_PTR_GET(snatTable_, GetNatGatewayAttributeResponseBody::SnatTable) };
    inline GetNatGatewayAttributeResponseBody& setSnatTable(const GetNatGatewayAttributeResponseBody::SnatTable & snatTable) { DARABONBA_PTR_SET_VALUE(snatTable_, snatTable) };
    inline GetNatGatewayAttributeResponseBody& setSnatTable(GetNatGatewayAttributeResponseBody::SnatTable && snatTable) { DARABONBA_PTR_SET_RVALUE(snatTable_, snatTable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNatGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetNatGatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Access mode for reverse access to VPC NAT gateway.
    shared_ptr<GetNatGatewayAttributeResponseBody::AccessMode> accessMode_ {};
    // The billing information.
    shared_ptr<GetNatGatewayAttributeResponseBody::BillingConfig> billingConfig_ {};
    // The service status of the NAT gateway. Valid values:
    // 
    // *   **Normal**: normal
    // *   **FinancialLocked**: locked due to overdue payments
    shared_ptr<string> businessStatus_ {};
    // The time when the NAT gateway was created. Format: YYYY-MM-DDThh:mm:ssZ.
    shared_ptr<string> creationTime_ {};
    // The information about the deletion protection feature.
    shared_ptr<GetNatGatewayAttributeResponseBody::DeletionProtectionInfo> deletionProtectionInfo_ {};
    // The description of the NAT gateway.
    shared_ptr<string> description_ {};
    // Indicates whether the traffic monitoring feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> ecsMetricEnabled_ {};
    // Whether to enable session log, with values:
    // - **true**: Session logging is enabled. 
    // - **false**: Session logging is disabled.
    shared_ptr<bool> enableSessionLog_ {};
    // The time when the NAT gateway expires.
    shared_ptr<string> expiredTime_ {};
    // The information about the DNAT table.
    shared_ptr<GetNatGatewayAttributeResponseBody::ForwardTable> forwardTable_ {};
    // The information about the FULLNAT table.
    shared_ptr<GetNatGatewayAttributeResponseBody::FullNatTable> fullNatTable_ {};
    // The elastic IP addresses (EIPs) that are associated with the Internet NAT gateway.
    shared_ptr<vector<GetNatGatewayAttributeResponseBody::IpList>> ipList_ {};
    // Session log configuration information.
    shared_ptr<GetNatGatewayAttributeResponseBody::LogDelivery> logDelivery_ {};
    // The name of the NAT gateway.
    shared_ptr<string> name_ {};
    // The ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The type of the Internet NAT gateway. Only **Enhanced** is returned, which indicates an enhanced Internet NAT gateway.
    shared_ptr<string> natType_ {};
    // The type of the NAT gateway. Valid values:
    // 
    // *   **internet**: an Internet NAT gateway
    // *   **intranet**: a VPC NAT gateway
    shared_ptr<string> networkType_ {};
    // The private network information about the NAT gateway.
    shared_ptr<GetNatGatewayAttributeResponseBody::PrivateInfo> privateInfo_ {};
    // Indicates whether the NAT gateway supports PrivateLink. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> privateLinkEnabled_ {};
    // The mode that is used by PrivateLink. Valid values:
    // 
    // *   **FullNat**: the FULLNAT mode
    // *   **Geneve**: the GENEVE mode
    shared_ptr<string> privateLinkMode_ {};
    // The ID of the region where the NAT gateway is deployed.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The information about the SNAT table.
    shared_ptr<GetNatGatewayAttributeResponseBody::SnatTable> snatTable_ {};
    // The status of the NAT gateway. Valid values:
    // 
    // *   **Creating**: being created. The operation to create a NAT gateway is asynchronous. The NAT gateway remains in the **Creating** state until it is created.
    // *   **Available**: available. After a NAT gateway is created, it remains in a stable state.
    // *   **Modifying**: being modified. The operation to upgrade or downgrade a NAT gateway is asynchronous. The NAT gateway remains in the **Modifying** state until it is upgraded or downgraded.
    // *   **Deleting**: being deleted. The operation to delete a NAT gateway is asynchronous. The NAT gateway remains in the **Deleting** state until it is deleted.
    // *   **Converting**: being converted. The operation to convert a standard NAT gateway to an enhanced NAT gateway is asynchronous. The NAT gateway remains in the **Converting** state until it is converted.
    shared_ptr<string> status_ {};
    // The ID of the VPC to which the NAT gateway belongs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
