// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSmartAccessGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateBandwidth, accelerateBandwidth_);
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageBussinessStatus, applicationBandwidthPackageBussinessStatus_);
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageName, applicationBandwidthPackageName_);
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageOperationLocks, applicationBandwidthPackageOperationLocks_);
      DARABONBA_PTR_TO_JSON(AssociatedCcnId, associatedCcnId_);
      DARABONBA_PTR_TO_JSON(AssociatedCcnName, associatedCcnName_);
      DARABONBA_PTR_TO_JSON(BackupBoxControllerIp, backupBoxControllerIp_);
      DARABONBA_PTR_TO_JSON(BoxControllerIp, boxControllerIp_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataPlan, dataPlan_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Devices, devices_);
      DARABONBA_PTR_TO_JSON(EnableOptimization, enableOptimization_);
      DARABONBA_PTR_TO_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FlowLogIds, flowLogIds_);
      DARABONBA_PTR_TO_JSON(IRIds, IRIds_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpsecStatus, ipsecStatus_);
      DARABONBA_PTR_TO_JSON(Links, links_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OptimizationType, optimizationType_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(QosIds, qosIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResellerInstanceId, resellerInstanceId_);
      DARABONBA_PTR_TO_JSON(ResellerUid, resellerUid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityLockThreshold, securityLockThreshold_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrafficMasterSn, trafficMasterSn_);
      DARABONBA_PTR_TO_JSON(UpBandwidth4G, upBandwidth4G_);
      DARABONBA_PTR_TO_JSON(UpBandwidthWan, upBandwidthWan_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
      DARABONBA_PTR_TO_JSON(VpnStatus, vpnStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateBandwidth, accelerateBandwidth_);
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageBussinessStatus, applicationBandwidthPackageBussinessStatus_);
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageName, applicationBandwidthPackageName_);
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageOperationLocks, applicationBandwidthPackageOperationLocks_);
      DARABONBA_PTR_FROM_JSON(AssociatedCcnId, associatedCcnId_);
      DARABONBA_PTR_FROM_JSON(AssociatedCcnName, associatedCcnName_);
      DARABONBA_PTR_FROM_JSON(BackupBoxControllerIp, backupBoxControllerIp_);
      DARABONBA_PTR_FROM_JSON(BoxControllerIp, boxControllerIp_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataPlan, dataPlan_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Devices, devices_);
      DARABONBA_PTR_FROM_JSON(EnableOptimization, enableOptimization_);
      DARABONBA_PTR_FROM_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FlowLogIds, flowLogIds_);
      DARABONBA_PTR_FROM_JSON(IRIds, IRIds_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpsecStatus, ipsecStatus_);
      DARABONBA_PTR_FROM_JSON(Links, links_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OptimizationType, optimizationType_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(QosIds, qosIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResellerInstanceId, resellerInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResellerUid, resellerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityLockThreshold, securityLockThreshold_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrafficMasterSn, trafficMasterSn_);
      DARABONBA_PTR_FROM_JSON(UpBandwidth4G, upBandwidth4G_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthWan, upBandwidthWan_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
      DARABONBA_PTR_FROM_JSON(VpnStatus, vpnStatus_);
    };
    DescribeSmartAccessGatewayAttributeResponseBody() = default ;
    DescribeSmartAccessGatewayAttributeResponseBody(const DescribeSmartAccessGatewayAttributeResponseBody &) = default ;
    DescribeSmartAccessGatewayAttributeResponseBody(DescribeSmartAccessGatewayAttributeResponseBody &&) = default ;
    DescribeSmartAccessGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewayAttributeResponseBody() = default ;
    DescribeSmartAccessGatewayAttributeResponseBody& operator=(const DescribeSmartAccessGatewayAttributeResponseBody &) = default ;
    DescribeSmartAccessGatewayAttributeResponseBody& operator=(DescribeSmartAccessGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosIds& obj) { 
        DARABONBA_PTR_TO_JSON(QosId, qosId_);
      };
      friend void from_json(const Darabonba::Json& j, QosIds& obj) { 
        DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      };
      QosIds() = default ;
      QosIds(const QosIds &) = default ;
      QosIds(QosIds &&) = default ;
      QosIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosIds() = default ;
      QosIds& operator=(const QosIds &) = default ;
      QosIds& operator=(QosIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->qosId_ == nullptr; };
      // qosId Field Functions 
      bool hasQosId() const { return this->qosId_ != nullptr;};
      void deleteQosId() { this->qosId_ = nullptr;};
      inline const vector<string> & getQosId() const { DARABONBA_PTR_GET_CONST(qosId_, vector<string>) };
      inline vector<string> getQosId() { DARABONBA_PTR_GET(qosId_, vector<string>) };
      inline QosIds& setQosId(const vector<string> & qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };
      inline QosIds& setQosId(vector<string> && qosId) { DARABONBA_PTR_SET_RVALUE(qosId_, qosId) };


    protected:
      shared_ptr<vector<string>> qosId_ {};
    };

    class Links : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Links& obj) { 
        DARABONBA_PTR_TO_JSON(Link, link_);
      };
      friend void from_json(const Darabonba::Json& j, Links& obj) { 
        DARABONBA_PTR_FROM_JSON(Link, link_);
      };
      Links() = default ;
      Links(const Links &) = default ;
      Links(Links &&) = default ;
      Links(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Links() = default ;
      Links& operator=(const Links &) = default ;
      Links& operator=(Links &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Link : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Link& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RelateInstanceId, relateInstanceId_);
          DARABONBA_PTR_TO_JSON(RelateInstanceRegionId, relateInstanceRegionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Link& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RelateInstanceId, relateInstanceId_);
          DARABONBA_PTR_FROM_JSON(RelateInstanceRegionId, relateInstanceRegionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Link() = default ;
        Link(const Link &) = default ;
        Link(Link &&) = default ;
        Link(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Link() = default ;
        Link& operator=(const Link &) = default ;
        Link& operator=(Link &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->commodityType_ == nullptr && this->endTime_ == nullptr && this->healthCheckTargetIp_ == nullptr && this->instanceId_ == nullptr && this->relateInstanceId_ == nullptr
        && this->relateInstanceRegionId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline Link& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // commodityType Field Functions 
        bool hasCommodityType() const { return this->commodityType_ != nullptr;};
        void deleteCommodityType() { this->commodityType_ = nullptr;};
        inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
        inline Link& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Link& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // healthCheckTargetIp Field Functions 
        bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
        void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
        inline string getHealthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
        inline Link& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Link& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // relateInstanceId Field Functions 
        bool hasRelateInstanceId() const { return this->relateInstanceId_ != nullptr;};
        void deleteRelateInstanceId() { this->relateInstanceId_ = nullptr;};
        inline string getRelateInstanceId() const { DARABONBA_PTR_GET_DEFAULT(relateInstanceId_, "") };
        inline Link& setRelateInstanceId(string relateInstanceId) { DARABONBA_PTR_SET_VALUE(relateInstanceId_, relateInstanceId) };


        // relateInstanceRegionId Field Functions 
        bool hasRelateInstanceRegionId() const { return this->relateInstanceRegionId_ != nullptr;};
        void deleteRelateInstanceRegionId() { this->relateInstanceRegionId_ = nullptr;};
        inline string getRelateInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(relateInstanceRegionId_, "") };
        inline Link& setRelateInstanceRegionId(string relateInstanceRegionId) { DARABONBA_PTR_SET_VALUE(relateInstanceRegionId_, relateInstanceRegionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Link& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Link& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> bandwidth_ {};
        shared_ptr<string> commodityType_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> healthCheckTargetIp_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> relateInstanceId_ {};
        shared_ptr<string> relateInstanceRegionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->link_ == nullptr; };
      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline const vector<Links::Link> & getLink() const { DARABONBA_PTR_GET_CONST(link_, vector<Links::Link>) };
      inline vector<Links::Link> getLink() { DARABONBA_PTR_GET(link_, vector<Links::Link>) };
      inline Links& setLink(const vector<Links::Link> & link) { DARABONBA_PTR_SET_VALUE(link_, link) };
      inline Links& setLink(vector<Links::Link> && link) { DARABONBA_PTR_SET_RVALUE(link_, link) };


    protected:
      shared_ptr<vector<Links::Link>> link_ {};
    };

    class IRIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IRIds& obj) { 
        DARABONBA_PTR_TO_JSON(IRId, IRId_);
      };
      friend void from_json(const Darabonba::Json& j, IRIds& obj) { 
        DARABONBA_PTR_FROM_JSON(IRId, IRId_);
      };
      IRIds() = default ;
      IRIds(const IRIds &) = default ;
      IRIds(IRIds &&) = default ;
      IRIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IRIds() = default ;
      IRIds& operator=(const IRIds &) = default ;
      IRIds& operator=(IRIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IRId_ == nullptr; };
      // IRId Field Functions 
      bool hasIRId() const { return this->IRId_ != nullptr;};
      void deleteIRId() { this->IRId_ = nullptr;};
      inline const vector<string> & getIRId() const { DARABONBA_PTR_GET_CONST(IRId_, vector<string>) };
      inline vector<string> getIRId() { DARABONBA_PTR_GET(IRId_, vector<string>) };
      inline IRIds& setIRId(const vector<string> & IRId) { DARABONBA_PTR_SET_VALUE(IRId_, IRId) };
      inline IRIds& setIRId(vector<string> && IRId) { DARABONBA_PTR_SET_RVALUE(IRId_, IRId) };


    protected:
      shared_ptr<vector<string>> IRId_ {};
    };

    class FlowLogIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FlowLogIds& obj) { 
        DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      };
      friend void from_json(const Darabonba::Json& j, FlowLogIds& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      };
      FlowLogIds() = default ;
      FlowLogIds(const FlowLogIds &) = default ;
      FlowLogIds(FlowLogIds &&) = default ;
      FlowLogIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FlowLogIds() = default ;
      FlowLogIds& operator=(const FlowLogIds &) = default ;
      FlowLogIds& operator=(FlowLogIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowLogId_ == nullptr; };
      // flowLogId Field Functions 
      bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
      void deleteFlowLogId() { this->flowLogId_ = nullptr;};
      inline const vector<string> & getFlowLogId() const { DARABONBA_PTR_GET_CONST(flowLogId_, vector<string>) };
      inline vector<string> getFlowLogId() { DARABONBA_PTR_GET(flowLogId_, vector<string>) };
      inline FlowLogIds& setFlowLogId(const vector<string> & flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };
      inline FlowLogIds& setFlowLogId(vector<string> && flowLogId) { DARABONBA_PTR_SET_RVALUE(flowLogId_, flowLogId) };


    protected:
      shared_ptr<vector<string>> flowLogId_ {};
    };

    class Devices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Devices& obj) { 
        DARABONBA_PTR_TO_JSON(Device, device_);
      };
      friend void from_json(const Darabonba::Json& j, Devices& obj) { 
        DARABONBA_PTR_FROM_JSON(Device, device_);
      };
      Devices() = default ;
      Devices(const Devices &) = default ;
      Devices(Devices &&) = default ;
      Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Devices() = default ;
      Devices& operator=(const Devices &) = default ;
      Devices& operator=(Devices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Device : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Device& obj) { 
          DARABONBA_PTR_TO_JSON(DistributeSkStatus, distributeSkStatus_);
          DARABONBA_PTR_TO_JSON(DpiSignatureDbVersion, dpiSignatureDbVersion_);
          DARABONBA_PTR_TO_JSON(HaState, haState_);
          DARABONBA_PTR_TO_JSON(HcState, hcState_);
          DARABONBA_PTR_TO_JSON(MonitorVersion, monitorVersion_);
          DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Device& obj) { 
          DARABONBA_PTR_FROM_JSON(DistributeSkStatus, distributeSkStatus_);
          DARABONBA_PTR_FROM_JSON(DpiSignatureDbVersion, dpiSignatureDbVersion_);
          DARABONBA_PTR_FROM_JSON(HaState, haState_);
          DARABONBA_PTR_FROM_JSON(HcState, hcState_);
          DARABONBA_PTR_FROM_JSON(MonitorVersion, monitorVersion_);
          DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
        };
        Device() = default ;
        Device(const Device &) = default ;
        Device(Device &&) = default ;
        Device(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Device() = default ;
        Device& operator=(const Device &) = default ;
        Device& operator=(Device &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->distributeSkStatus_ == nullptr
        && this->dpiSignatureDbVersion_ == nullptr && this->haState_ == nullptr && this->hcState_ == nullptr && this->monitorVersion_ == nullptr && this->secretKey_ == nullptr
        && this->serialNumber_ == nullptr && this->softwareVersion_ == nullptr; };
        // distributeSkStatus Field Functions 
        bool hasDistributeSkStatus() const { return this->distributeSkStatus_ != nullptr;};
        void deleteDistributeSkStatus() { this->distributeSkStatus_ = nullptr;};
        inline int32_t getDistributeSkStatus() const { DARABONBA_PTR_GET_DEFAULT(distributeSkStatus_, 0) };
        inline Device& setDistributeSkStatus(int32_t distributeSkStatus) { DARABONBA_PTR_SET_VALUE(distributeSkStatus_, distributeSkStatus) };


        // dpiSignatureDbVersion Field Functions 
        bool hasDpiSignatureDbVersion() const { return this->dpiSignatureDbVersion_ != nullptr;};
        void deleteDpiSignatureDbVersion() { this->dpiSignatureDbVersion_ = nullptr;};
        inline string getDpiSignatureDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dpiSignatureDbVersion_, "") };
        inline Device& setDpiSignatureDbVersion(string dpiSignatureDbVersion) { DARABONBA_PTR_SET_VALUE(dpiSignatureDbVersion_, dpiSignatureDbVersion) };


        // haState Field Functions 
        bool hasHaState() const { return this->haState_ != nullptr;};
        void deleteHaState() { this->haState_ = nullptr;};
        inline string getHaState() const { DARABONBA_PTR_GET_DEFAULT(haState_, "") };
        inline Device& setHaState(string haState) { DARABONBA_PTR_SET_VALUE(haState_, haState) };


        // hcState Field Functions 
        bool hasHcState() const { return this->hcState_ != nullptr;};
        void deleteHcState() { this->hcState_ = nullptr;};
        inline string getHcState() const { DARABONBA_PTR_GET_DEFAULT(hcState_, "") };
        inline Device& setHcState(string hcState) { DARABONBA_PTR_SET_VALUE(hcState_, hcState) };


        // monitorVersion Field Functions 
        bool hasMonitorVersion() const { return this->monitorVersion_ != nullptr;};
        void deleteMonitorVersion() { this->monitorVersion_ = nullptr;};
        inline string getMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(monitorVersion_, "") };
        inline Device& setMonitorVersion(string monitorVersion) { DARABONBA_PTR_SET_VALUE(monitorVersion_, monitorVersion) };


        // secretKey Field Functions 
        bool hasSecretKey() const { return this->secretKey_ != nullptr;};
        void deleteSecretKey() { this->secretKey_ = nullptr;};
        inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
        inline Device& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Device& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // softwareVersion Field Functions 
        bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
        void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
        inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
        inline Device& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


      protected:
        shared_ptr<int32_t> distributeSkStatus_ {};
        shared_ptr<string> dpiSignatureDbVersion_ {};
        shared_ptr<string> haState_ {};
        shared_ptr<string> hcState_ {};
        shared_ptr<string> monitorVersion_ {};
        shared_ptr<string> secretKey_ {};
        shared_ptr<string> serialNumber_ {};
        shared_ptr<string> softwareVersion_ {};
      };

      virtual bool empty() const override { return this->device_ == nullptr; };
      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline const vector<Devices::Device> & getDevice() const { DARABONBA_PTR_GET_CONST(device_, vector<Devices::Device>) };
      inline vector<Devices::Device> getDevice() { DARABONBA_PTR_GET(device_, vector<Devices::Device>) };
      inline Devices& setDevice(const vector<Devices::Device> & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
      inline Devices& setDevice(vector<Devices::Device> && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


    protected:
      shared_ptr<vector<Devices::Device>> device_ {};
    };

    class ApplicationBandwidthPackageOperationLocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationBandwidthPackageOperationLocks& obj) { 
        DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
        DARABONBA_PTR_TO_JSON(LockType, lockType_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationBandwidthPackageOperationLocks& obj) { 
        DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
        DARABONBA_PTR_FROM_JSON(LockType, lockType_);
      };
      ApplicationBandwidthPackageOperationLocks() = default ;
      ApplicationBandwidthPackageOperationLocks(const ApplicationBandwidthPackageOperationLocks &) = default ;
      ApplicationBandwidthPackageOperationLocks(ApplicationBandwidthPackageOperationLocks &&) = default ;
      ApplicationBandwidthPackageOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationBandwidthPackageOperationLocks() = default ;
      ApplicationBandwidthPackageOperationLocks& operator=(const ApplicationBandwidthPackageOperationLocks &) = default ;
      ApplicationBandwidthPackageOperationLocks& operator=(ApplicationBandwidthPackageOperationLocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lockReason_ == nullptr
        && this->lockType_ == nullptr; };
      // lockReason Field Functions 
      bool hasLockReason() const { return this->lockReason_ != nullptr;};
      void deleteLockReason() { this->lockReason_ = nullptr;};
      inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
      inline ApplicationBandwidthPackageOperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


      // lockType Field Functions 
      bool hasLockType() const { return this->lockType_ != nullptr;};
      void deleteLockType() { this->lockType_ = nullptr;};
      inline string getLockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
      inline ApplicationBandwidthPackageOperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


    protected:
      // The reason for the lock.
      shared_ptr<string> lockReason_ {};
      // The lock type. Valid value: **FinancialLocked**.
      shared_ptr<string> lockType_ {};
    };

    class AclIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclIds& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
      };
      friend void from_json(const Darabonba::Json& j, AclIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      };
      AclIds() = default ;
      AclIds(const AclIds &) = default ;
      AclIds(AclIds &&) = default ;
      AclIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclIds() = default ;
      AclIds& operator=(const AclIds &) = default ;
      AclIds& operator=(AclIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclId_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline const vector<string> & getAclId() const { DARABONBA_PTR_GET_CONST(aclId_, vector<string>) };
      inline vector<string> getAclId() { DARABONBA_PTR_GET(aclId_, vector<string>) };
      inline AclIds& setAclId(const vector<string> & aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };
      inline AclIds& setAclId(vector<string> && aclId) { DARABONBA_PTR_SET_RVALUE(aclId_, aclId) };


    protected:
      shared_ptr<vector<string>> aclId_ {};
    };

    virtual bool empty() const override { return this->accelerateBandwidth_ == nullptr
        && this->accessPointId_ == nullptr && this->aclIds_ == nullptr && this->applicationBandwidthPackageBussinessStatus_ == nullptr && this->applicationBandwidthPackageId_ == nullptr && this->applicationBandwidthPackageName_ == nullptr
        && this->applicationBandwidthPackageOperationLocks_ == nullptr && this->associatedCcnId_ == nullptr && this->associatedCcnName_ == nullptr && this->backupBoxControllerIp_ == nullptr && this->boxControllerIp_ == nullptr
        && this->cidrBlock_ == nullptr && this->city_ == nullptr && this->createTime_ == nullptr && this->dataPlan_ == nullptr && this->description_ == nullptr
        && this->devices_ == nullptr && this->enableOptimization_ == nullptr && this->enableSoftwareConnectionAudit_ == nullptr && this->endTime_ == nullptr && this->flowLogIds_ == nullptr
        && this->IRIds_ == nullptr && this->instanceType_ == nullptr && this->ipsecStatus_ == nullptr && this->links_ == nullptr && this->maxBandwidth_ == nullptr
        && this->name_ == nullptr && this->optimizationType_ == nullptr && this->position_ == nullptr && this->qosIds_ == nullptr && this->requestId_ == nullptr
        && this->resellerInstanceId_ == nullptr && this->resellerUid_ == nullptr && this->resourceGroupId_ == nullptr && this->routingStrategy_ == nullptr && this->securityLockThreshold_ == nullptr
        && this->serialNumber_ == nullptr && this->smartAGId_ == nullptr && this->status_ == nullptr && this->trafficMasterSn_ == nullptr && this->upBandwidth4G_ == nullptr
        && this->upBandwidthWan_ == nullptr && this->userCount_ == nullptr && this->vpnStatus_ == nullptr; };
    // accelerateBandwidth Field Functions 
    bool hasAccelerateBandwidth() const { return this->accelerateBandwidth_ != nullptr;};
    void deleteAccelerateBandwidth() { this->accelerateBandwidth_ = nullptr;};
    inline int64_t getAccelerateBandwidth() const { DARABONBA_PTR_GET_DEFAULT(accelerateBandwidth_, 0L) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAccelerateBandwidth(int64_t accelerateBandwidth) { DARABONBA_PTR_SET_VALUE(accelerateBandwidth_, accelerateBandwidth) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::AclIds & getAclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, DescribeSmartAccessGatewayAttributeResponseBody::AclIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::AclIds getAclIds() { DARABONBA_PTR_GET(aclIds_, DescribeSmartAccessGatewayAttributeResponseBody::AclIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAclIds(const DescribeSmartAccessGatewayAttributeResponseBody::AclIds & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAclIds(DescribeSmartAccessGatewayAttributeResponseBody::AclIds && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // applicationBandwidthPackageBussinessStatus Field Functions 
    bool hasApplicationBandwidthPackageBussinessStatus() const { return this->applicationBandwidthPackageBussinessStatus_ != nullptr;};
    void deleteApplicationBandwidthPackageBussinessStatus() { this->applicationBandwidthPackageBussinessStatus_ = nullptr;};
    inline string getApplicationBandwidthPackageBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageBussinessStatus_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setApplicationBandwidthPackageBussinessStatus(string applicationBandwidthPackageBussinessStatus) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageBussinessStatus_, applicationBandwidthPackageBussinessStatus) };


    // applicationBandwidthPackageId Field Functions 
    bool hasApplicationBandwidthPackageId() const { return this->applicationBandwidthPackageId_ != nullptr;};
    void deleteApplicationBandwidthPackageId() { this->applicationBandwidthPackageId_ = nullptr;};
    inline string getApplicationBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setApplicationBandwidthPackageId(string applicationBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageId_, applicationBandwidthPackageId) };


    // applicationBandwidthPackageName Field Functions 
    bool hasApplicationBandwidthPackageName() const { return this->applicationBandwidthPackageName_ != nullptr;};
    void deleteApplicationBandwidthPackageName() { this->applicationBandwidthPackageName_ = nullptr;};
    inline string getApplicationBandwidthPackageName() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageName_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setApplicationBandwidthPackageName(string applicationBandwidthPackageName) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageName_, applicationBandwidthPackageName) };


    // applicationBandwidthPackageOperationLocks Field Functions 
    bool hasApplicationBandwidthPackageOperationLocks() const { return this->applicationBandwidthPackageOperationLocks_ != nullptr;};
    void deleteApplicationBandwidthPackageOperationLocks() { this->applicationBandwidthPackageOperationLocks_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks & getApplicationBandwidthPackageOperationLocks() const { DARABONBA_PTR_GET_CONST(applicationBandwidthPackageOperationLocks_, DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks getApplicationBandwidthPackageOperationLocks() { DARABONBA_PTR_GET(applicationBandwidthPackageOperationLocks_, DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setApplicationBandwidthPackageOperationLocks(const DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks & applicationBandwidthPackageOperationLocks) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageOperationLocks_, applicationBandwidthPackageOperationLocks) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setApplicationBandwidthPackageOperationLocks(DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks && applicationBandwidthPackageOperationLocks) { DARABONBA_PTR_SET_RVALUE(applicationBandwidthPackageOperationLocks_, applicationBandwidthPackageOperationLocks) };


    // associatedCcnId Field Functions 
    bool hasAssociatedCcnId() const { return this->associatedCcnId_ != nullptr;};
    void deleteAssociatedCcnId() { this->associatedCcnId_ = nullptr;};
    inline string getAssociatedCcnId() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAssociatedCcnId(string associatedCcnId) { DARABONBA_PTR_SET_VALUE(associatedCcnId_, associatedCcnId) };


    // associatedCcnName Field Functions 
    bool hasAssociatedCcnName() const { return this->associatedCcnName_ != nullptr;};
    void deleteAssociatedCcnName() { this->associatedCcnName_ = nullptr;};
    inline string getAssociatedCcnName() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnName_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setAssociatedCcnName(string associatedCcnName) { DARABONBA_PTR_SET_VALUE(associatedCcnName_, associatedCcnName) };


    // backupBoxControllerIp Field Functions 
    bool hasBackupBoxControllerIp() const { return this->backupBoxControllerIp_ != nullptr;};
    void deleteBackupBoxControllerIp() { this->backupBoxControllerIp_ = nullptr;};
    inline string getBackupBoxControllerIp() const { DARABONBA_PTR_GET_DEFAULT(backupBoxControllerIp_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setBackupBoxControllerIp(string backupBoxControllerIp) { DARABONBA_PTR_SET_VALUE(backupBoxControllerIp_, backupBoxControllerIp) };


    // boxControllerIp Field Functions 
    bool hasBoxControllerIp() const { return this->boxControllerIp_ != nullptr;};
    void deleteBoxControllerIp() { this->boxControllerIp_ = nullptr;};
    inline string getBoxControllerIp() const { DARABONBA_PTR_GET_DEFAULT(boxControllerIp_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setBoxControllerIp(string boxControllerIp) { DARABONBA_PTR_SET_VALUE(boxControllerIp_, boxControllerIp) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataPlan Field Functions 
    bool hasDataPlan() const { return this->dataPlan_ != nullptr;};
    void deleteDataPlan() { this->dataPlan_ = nullptr;};
    inline int64_t getDataPlan() const { DARABONBA_PTR_GET_DEFAULT(dataPlan_, 0L) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setDataPlan(int64_t dataPlan) { DARABONBA_PTR_SET_VALUE(dataPlan_, dataPlan) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devices Field Functions 
    bool hasDevices() const { return this->devices_ != nullptr;};
    void deleteDevices() { this->devices_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::Devices & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, DescribeSmartAccessGatewayAttributeResponseBody::Devices) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::Devices getDevices() { DARABONBA_PTR_GET(devices_, DescribeSmartAccessGatewayAttributeResponseBody::Devices) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setDevices(const DescribeSmartAccessGatewayAttributeResponseBody::Devices & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setDevices(DescribeSmartAccessGatewayAttributeResponseBody::Devices && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


    // enableOptimization Field Functions 
    bool hasEnableOptimization() const { return this->enableOptimization_ != nullptr;};
    void deleteEnableOptimization() { this->enableOptimization_ = nullptr;};
    inline bool getEnableOptimization() const { DARABONBA_PTR_GET_DEFAULT(enableOptimization_, false) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setEnableOptimization(bool enableOptimization) { DARABONBA_PTR_SET_VALUE(enableOptimization_, enableOptimization) };


    // enableSoftwareConnectionAudit Field Functions 
    bool hasEnableSoftwareConnectionAudit() const { return this->enableSoftwareConnectionAudit_ != nullptr;};
    void deleteEnableSoftwareConnectionAudit() { this->enableSoftwareConnectionAudit_ = nullptr;};
    inline bool getEnableSoftwareConnectionAudit() const { DARABONBA_PTR_GET_DEFAULT(enableSoftwareConnectionAudit_, false) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setEnableSoftwareConnectionAudit(bool enableSoftwareConnectionAudit) { DARABONBA_PTR_SET_VALUE(enableSoftwareConnectionAudit_, enableSoftwareConnectionAudit) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // flowLogIds Field Functions 
    bool hasFlowLogIds() const { return this->flowLogIds_ != nullptr;};
    void deleteFlowLogIds() { this->flowLogIds_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds & getFlowLogIds() const { DARABONBA_PTR_GET_CONST(flowLogIds_, DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds getFlowLogIds() { DARABONBA_PTR_GET(flowLogIds_, DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setFlowLogIds(const DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds & flowLogIds) { DARABONBA_PTR_SET_VALUE(flowLogIds_, flowLogIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setFlowLogIds(DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds && flowLogIds) { DARABONBA_PTR_SET_RVALUE(flowLogIds_, flowLogIds) };


    // IRIds Field Functions 
    bool hasIRIds() const { return this->IRIds_ != nullptr;};
    void deleteIRIds() { this->IRIds_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::IRIds & getIRIds() const { DARABONBA_PTR_GET_CONST(IRIds_, DescribeSmartAccessGatewayAttributeResponseBody::IRIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::IRIds getIRIds() { DARABONBA_PTR_GET(IRIds_, DescribeSmartAccessGatewayAttributeResponseBody::IRIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setIRIds(const DescribeSmartAccessGatewayAttributeResponseBody::IRIds & iRIds) { DARABONBA_PTR_SET_VALUE(IRIds_, iRIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setIRIds(DescribeSmartAccessGatewayAttributeResponseBody::IRIds && iRIds) { DARABONBA_PTR_SET_RVALUE(IRIds_, iRIds) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipsecStatus Field Functions 
    bool hasIpsecStatus() const { return this->ipsecStatus_ != nullptr;};
    void deleteIpsecStatus() { this->ipsecStatus_ = nullptr;};
    inline string getIpsecStatus() const { DARABONBA_PTR_GET_DEFAULT(ipsecStatus_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setIpsecStatus(string ipsecStatus) { DARABONBA_PTR_SET_VALUE(ipsecStatus_, ipsecStatus) };


    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::Links & getLinks() const { DARABONBA_PTR_GET_CONST(links_, DescribeSmartAccessGatewayAttributeResponseBody::Links) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::Links getLinks() { DARABONBA_PTR_GET(links_, DescribeSmartAccessGatewayAttributeResponseBody::Links) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setLinks(const DescribeSmartAccessGatewayAttributeResponseBody::Links & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setLinks(DescribeSmartAccessGatewayAttributeResponseBody::Links && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline string getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setMaxBandwidth(string maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // optimizationType Field Functions 
    bool hasOptimizationType() const { return this->optimizationType_ != nullptr;};
    void deleteOptimizationType() { this->optimizationType_ = nullptr;};
    inline bool getOptimizationType() const { DARABONBA_PTR_GET_DEFAULT(optimizationType_, false) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setOptimizationType(bool optimizationType) { DARABONBA_PTR_SET_VALUE(optimizationType_, optimizationType) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // qosIds Field Functions 
    bool hasQosIds() const { return this->qosIds_ != nullptr;};
    void deleteQosIds() { this->qosIds_ = nullptr;};
    inline const DescribeSmartAccessGatewayAttributeResponseBody::QosIds & getQosIds() const { DARABONBA_PTR_GET_CONST(qosIds_, DescribeSmartAccessGatewayAttributeResponseBody::QosIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody::QosIds getQosIds() { DARABONBA_PTR_GET(qosIds_, DescribeSmartAccessGatewayAttributeResponseBody::QosIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setQosIds(const DescribeSmartAccessGatewayAttributeResponseBody::QosIds & qosIds) { DARABONBA_PTR_SET_VALUE(qosIds_, qosIds) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setQosIds(DescribeSmartAccessGatewayAttributeResponseBody::QosIds && qosIds) { DARABONBA_PTR_SET_RVALUE(qosIds_, qosIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resellerInstanceId Field Functions 
    bool hasResellerInstanceId() const { return this->resellerInstanceId_ != nullptr;};
    void deleteResellerInstanceId() { this->resellerInstanceId_ = nullptr;};
    inline string getResellerInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resellerInstanceId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setResellerInstanceId(string resellerInstanceId) { DARABONBA_PTR_SET_VALUE(resellerInstanceId_, resellerInstanceId) };


    // resellerUid Field Functions 
    bool hasResellerUid() const { return this->resellerUid_ != nullptr;};
    void deleteResellerUid() { this->resellerUid_ = nullptr;};
    inline string getResellerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerUid_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setResellerUid(string resellerUid) { DARABONBA_PTR_SET_VALUE(resellerUid_, resellerUid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routingStrategy Field Functions 
    bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
    void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
    inline string getRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


    // securityLockThreshold Field Functions 
    bool hasSecurityLockThreshold() const { return this->securityLockThreshold_ != nullptr;};
    void deleteSecurityLockThreshold() { this->securityLockThreshold_ = nullptr;};
    inline int32_t getSecurityLockThreshold() const { DARABONBA_PTR_GET_DEFAULT(securityLockThreshold_, 0) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setSecurityLockThreshold(int32_t securityLockThreshold) { DARABONBA_PTR_SET_VALUE(securityLockThreshold_, securityLockThreshold) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trafficMasterSn Field Functions 
    bool hasTrafficMasterSn() const { return this->trafficMasterSn_ != nullptr;};
    void deleteTrafficMasterSn() { this->trafficMasterSn_ = nullptr;};
    inline string getTrafficMasterSn() const { DARABONBA_PTR_GET_DEFAULT(trafficMasterSn_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setTrafficMasterSn(string trafficMasterSn) { DARABONBA_PTR_SET_VALUE(trafficMasterSn_, trafficMasterSn) };


    // upBandwidth4G Field Functions 
    bool hasUpBandwidth4G() const { return this->upBandwidth4G_ != nullptr;};
    void deleteUpBandwidth4G() { this->upBandwidth4G_ = nullptr;};
    inline int32_t getUpBandwidth4G() const { DARABONBA_PTR_GET_DEFAULT(upBandwidth4G_, 0) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setUpBandwidth4G(int32_t upBandwidth4G) { DARABONBA_PTR_SET_VALUE(upBandwidth4G_, upBandwidth4G) };


    // upBandwidthWan Field Functions 
    bool hasUpBandwidthWan() const { return this->upBandwidthWan_ != nullptr;};
    void deleteUpBandwidthWan() { this->upBandwidthWan_ = nullptr;};
    inline int32_t getUpBandwidthWan() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthWan_, 0) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setUpBandwidthWan(int32_t upBandwidthWan) { DARABONBA_PTR_SET_VALUE(upBandwidthWan_, upBandwidthWan) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    // vpnStatus Field Functions 
    bool hasVpnStatus() const { return this->vpnStatus_ != nullptr;};
    void deleteVpnStatus() { this->vpnStatus_ = nullptr;};
    inline string getVpnStatus() const { DARABONBA_PTR_GET_DEFAULT(vpnStatus_, "") };
    inline DescribeSmartAccessGatewayAttributeResponseBody& setVpnStatus(string vpnStatus) { DARABONBA_PTR_SET_VALUE(vpnStatus_, vpnStatus) };


  protected:
    // The peak bandwidth of application acceleration for the SAG instance. Unit: Mbit/s.
    shared_ptr<int64_t> accelerateBandwidth_ {};
    // The ID of the access point of the SAG instance.
    shared_ptr<string> accessPointId_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::AclIds> aclIds_ {};
    // The status of the application acceleration bandwidth package instance.
    // 
    // - **Abnormal**: Abnormal.
    // - **Normal**: Normal.
    shared_ptr<string> applicationBandwidthPackageBussinessStatus_ {};
    // The ID of the application acceleration bandwidth package associated with the SAG instance.
    shared_ptr<string> applicationBandwidthPackageId_ {};
    // The name of the application acceleration bandwidth package associated with the SAG instance.
    shared_ptr<string> applicationBandwidthPackageName_ {};
    // The lock information of the application acceleration bandwidth package instance.
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::ApplicationBandwidthPackageOperationLocks> applicationBandwidthPackageOperationLocks_ {};
    // The ID of the CCN instance associated with the SAG instance.
    shared_ptr<string> associatedCcnId_ {};
    // The name of the Cloud Connect Network (CCN) instance associated with the SAG instance.
    shared_ptr<string> associatedCcnName_ {};
    // The public IP address of the standby SAG device.
    shared_ptr<string> backupBoxControllerIp_ {};
    // The public IP address of the primary SAG device.
    shared_ptr<string> boxControllerIp_ {};
    // The private CIDR block used for communication between the on-premises network or clients and the cloud.
    shared_ptr<string> cidrBlock_ {};
    // The ID of the city where the SAG device is located.
    shared_ptr<string> city_ {};
    // The creation timestamp of the SAG instance.
    shared_ptr<int64_t> createTime_ {};
    // The data plan of the SAG instance. Unit: GB.
    // 
    // > Currently, only 5 GB of complimentary data traffic is provided for each account per month.
    shared_ptr<int64_t> dataPlan_ {};
    // The description of the SAG instance.
    shared_ptr<string> description_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::Devices> devices_ {};
    // Indicates whether the optimized retransmission feature is enabled for the SAG instance.
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> enableOptimization_ {};
    // Indicates whether connection log auditing is enabled for the SAG APP instance. Valid values:
    // 
    // - **true**: Connection log auditing is enabled for the SAG APP instance.
    // 
    // - **false**: Connection log auditing is disabled for the SAG APP instance.
    shared_ptr<bool> enableSoftwareConnectionAudit_ {};
    // The expiration timestamp of the SAG instance.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::FlowLogIds> flowLogIds_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::IRIds> IRIds_ {};
    // The type of the SAG instance.
    // 
    // - **sag-1000**: The instance is a hardware SAG instance with a SAG-1000 device.
    // - **sag-10wm**: The instance is a hardware SAG instance with a SAG-100WM device.
    // - **sag-software**: The instance is an SAG APP instance.
    // - **sag-vcpe**: The instance is an SAG vCPE instance.
    shared_ptr<string> instanceType_ {};
    // The status of the IPsec-VPN connection.
    // 
    // - **up**: The IPsec-VPN connection is normal.
    // - **down**: The IPsec-VPN connection is abnormal.
    shared_ptr<string> ipsecStatus_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::Links> links_ {};
    // The peak bandwidth of the SAG instance. Unit: Mbit/s.
    shared_ptr<string> maxBandwidth_ {};
    // The name of the SAG instance.
    shared_ptr<string> name_ {};
    // The optimized retransmission type of the SAG instance. After the optimized retransmission type is enabled, the default value is **fec**.
    shared_ptr<bool> optimizationType_ {};
    // The location of the SAG device.
    shared_ptr<string> position_ {};
    shared_ptr<DescribeSmartAccessGatewayAttributeResponseBody::QosIds> qosIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the reseller instance.
    shared_ptr<string> resellerInstanceId_ {};
    // The ID of the reseller account.
    shared_ptr<string> resellerUid_ {};
    // The ID of the resource group to which the SAG instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The routing synchronization method of the SAG instance.
    // 
    // - **static**: Static routing.
    // 
    // - **dynamic**: Dynamic routing.
    shared_ptr<string> routingStrategy_ {};
    // The time threshold for locking the SAG device when it goes offline.
    // 
    // Unit: seconds.
    shared_ptr<int32_t> securityLockThreshold_ {};
    // The serial number of the SAG device.
    shared_ptr<string> serialNumber_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // The status of the SAG instance.
    // 
    // - **Ordered**: Pending delivery.
    // - **Delivered**: Delivered.
    // - **Received**: Activated.
    // - **Unconfirmed**: Pending confirmation.
    // - **Active**: Available.
    // - **Offline**: Offline.
    // - **Arrearage**: Locked due to overdue payment.
    shared_ptr<string> status_ {};
    // The serial number of the SAG device that is currently responsible for transmitting traffic.
    shared_ptr<string> trafficMasterSn_ {};
    // The maximum upstream bandwidth of the 4G public network for the SAG device. Unit: Mbit/s.
    shared_ptr<int32_t> upBandwidth4G_ {};
    // The maximum upstream bandwidth of the WAN port for the SAG device. Unit: Mbit/s.
    shared_ptr<int32_t> upBandwidthWan_ {};
    // The number of client accounts of the SAG instance.
    shared_ptr<int32_t> userCount_ {};
    // The status of the aliVPN connection.
    // 
    // - **up**: The aliVPN connection is normal.
    // - **down**: The aliVPN connection is abnormal.
    shared_ptr<string> vpnStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
