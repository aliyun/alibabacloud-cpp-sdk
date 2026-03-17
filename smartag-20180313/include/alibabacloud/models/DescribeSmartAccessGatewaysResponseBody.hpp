// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYSRESPONSEBODY_HPP_
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
  class DescribeSmartAccessGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartAccessGateways, smartAccessGateways_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSmartAccessGatewaysResponseBody() = default ;
    DescribeSmartAccessGatewaysResponseBody(const DescribeSmartAccessGatewaysResponseBody &) = default ;
    DescribeSmartAccessGatewaysResponseBody(DescribeSmartAccessGatewaysResponseBody &&) = default ;
    DescribeSmartAccessGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewaysResponseBody() = default ;
    DescribeSmartAccessGatewaysResponseBody& operator=(const DescribeSmartAccessGatewaysResponseBody &) = default ;
    DescribeSmartAccessGatewaysResponseBody& operator=(DescribeSmartAccessGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartAccessGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartAccessGateways& obj) { 
        DARABONBA_PTR_TO_JSON(SmartAccessGateway, smartAccessGateway_);
      };
      friend void from_json(const Darabonba::Json& j, SmartAccessGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(SmartAccessGateway, smartAccessGateway_);
      };
      SmartAccessGateways() = default ;
      SmartAccessGateways(const SmartAccessGateways &) = default ;
      SmartAccessGateways(SmartAccessGateways &&) = default ;
      SmartAccessGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartAccessGateways() = default ;
      SmartAccessGateways& operator=(const SmartAccessGateways &) = default ;
      SmartAccessGateways& operator=(SmartAccessGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SmartAccessGateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SmartAccessGateway& obj) { 
          DARABONBA_PTR_TO_JSON(AccelerateBandwidth, accelerateBandwidth_);
          DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
          DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
          DARABONBA_PTR_TO_JSON(AssociatedCcnId, associatedCcnId_);
          DARABONBA_PTR_TO_JSON(AssociatedCcnName, associatedCcnName_);
          DARABONBA_PTR_TO_JSON(BackupSoftwareVersion, backupSoftwareVersion_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataPlan, dataPlan_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DpiMonitorStatus, dpiMonitorStatus_);
          DARABONBA_PTR_TO_JSON(DpiStatus, dpiStatus_);
          DARABONBA_PTR_TO_JSON(EnableAdvancedMonitor, enableAdvancedMonitor_);
          DARABONBA_PTR_TO_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseCode, enterpriseCode_);
          DARABONBA_PTR_TO_JSON(HardwareVersion, hardwareVersion_);
          DARABONBA_PTR_TO_JSON(IRIds, IRIds_);
          DARABONBA_PTR_TO_JSON(IdaasApplicationId, idaasApplicationId_);
          DARABONBA_PTR_TO_JSON(IdaasId, idaasId_);
          DARABONBA_PTR_TO_JSON(IpsecStatus, ipsecStatus_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(Links, links_);
          DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(QosIds, qosIds_);
          DARABONBA_PTR_TO_JSON(ResellerInstanceId, resellerInstanceId_);
          DARABONBA_PTR_TO_JSON(ResellerUid, resellerUid_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RoutingStrategy, routingStrategy_);
          DARABONBA_PTR_TO_JSON(SecurityLockThreshold, securityLockThreshold_);
          DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_TO_JSON(SmartAGUid, smartAGUid_);
          DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpBandwidth4G, upBandwidth4G_);
          DARABONBA_PTR_TO_JSON(UpBandwidthWan, upBandwidthWan_);
          DARABONBA_PTR_TO_JSON(UserCount, userCount_);
          DARABONBA_PTR_TO_JSON(VpnStatus, vpnStatus_);
        };
        friend void from_json(const Darabonba::Json& j, SmartAccessGateway& obj) { 
          DARABONBA_PTR_FROM_JSON(AccelerateBandwidth, accelerateBandwidth_);
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
          DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCcnId, associatedCcnId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCcnName, associatedCcnName_);
          DARABONBA_PTR_FROM_JSON(BackupSoftwareVersion, backupSoftwareVersion_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataPlan, dataPlan_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DpiMonitorStatus, dpiMonitorStatus_);
          DARABONBA_PTR_FROM_JSON(DpiStatus, dpiStatus_);
          DARABONBA_PTR_FROM_JSON(EnableAdvancedMonitor, enableAdvancedMonitor_);
          DARABONBA_PTR_FROM_JSON(EnableSoftwareConnectionAudit, enableSoftwareConnectionAudit_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseCode, enterpriseCode_);
          DARABONBA_PTR_FROM_JSON(HardwareVersion, hardwareVersion_);
          DARABONBA_PTR_FROM_JSON(IRIds, IRIds_);
          DARABONBA_PTR_FROM_JSON(IdaasApplicationId, idaasApplicationId_);
          DARABONBA_PTR_FROM_JSON(IdaasId, idaasId_);
          DARABONBA_PTR_FROM_JSON(IpsecStatus, ipsecStatus_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(Links, links_);
          DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(QosIds, qosIds_);
          DARABONBA_PTR_FROM_JSON(ResellerInstanceId, resellerInstanceId_);
          DARABONBA_PTR_FROM_JSON(ResellerUid, resellerUid_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RoutingStrategy, routingStrategy_);
          DARABONBA_PTR_FROM_JSON(SecurityLockThreshold, securityLockThreshold_);
          DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_FROM_JSON(SmartAGUid, smartAGUid_);
          DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpBandwidth4G, upBandwidth4G_);
          DARABONBA_PTR_FROM_JSON(UpBandwidthWan, upBandwidthWan_);
          DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
          DARABONBA_PTR_FROM_JSON(VpnStatus, vpnStatus_);
        };
        SmartAccessGateway() = default ;
        SmartAccessGateway(const SmartAccessGateway &) = default ;
        SmartAccessGateway(SmartAccessGateway &&) = default ;
        SmartAccessGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SmartAccessGateway() = default ;
        SmartAccessGateway& operator=(const SmartAccessGateway &) = default ;
        SmartAccessGateway& operator=(SmartAccessGateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->commodityType_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->relateInstanceId_ == nullptr && this->relateInstanceRegionId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
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

        virtual bool empty() const override { return this->accelerateBandwidth_ == nullptr
        && this->accessPointId_ == nullptr && this->aclIds_ == nullptr && this->applicationBandwidthPackageId_ == nullptr && this->associatedCcnId_ == nullptr && this->associatedCcnName_ == nullptr
        && this->backupSoftwareVersion_ == nullptr && this->backupStatus_ == nullptr && this->cidrBlock_ == nullptr && this->city_ == nullptr && this->createTime_ == nullptr
        && this->dataPlan_ == nullptr && this->description_ == nullptr && this->dpiMonitorStatus_ == nullptr && this->dpiStatus_ == nullptr && this->enableAdvancedMonitor_ == nullptr
        && this->enableSoftwareConnectionAudit_ == nullptr && this->endTime_ == nullptr && this->enterpriseCode_ == nullptr && this->hardwareVersion_ == nullptr && this->IRIds_ == nullptr
        && this->idaasApplicationId_ == nullptr && this->idaasId_ == nullptr && this->ipsecStatus_ == nullptr && this->isp_ == nullptr && this->links_ == nullptr
        && this->maxBandwidth_ == nullptr && this->name_ == nullptr && this->position_ == nullptr && this->qosIds_ == nullptr && this->resellerInstanceId_ == nullptr
        && this->resellerUid_ == nullptr && this->resourceGroupId_ == nullptr && this->routingStrategy_ == nullptr && this->securityLockThreshold_ == nullptr && this->serialNumber_ == nullptr
        && this->smartAGId_ == nullptr && this->smartAGUid_ == nullptr && this->softwareVersion_ == nullptr && this->status_ == nullptr && this->upBandwidth4G_ == nullptr
        && this->upBandwidthWan_ == nullptr && this->userCount_ == nullptr && this->vpnStatus_ == nullptr; };
        // accelerateBandwidth Field Functions 
        bool hasAccelerateBandwidth() const { return this->accelerateBandwidth_ != nullptr;};
        void deleteAccelerateBandwidth() { this->accelerateBandwidth_ = nullptr;};
        inline int64_t getAccelerateBandwidth() const { DARABONBA_PTR_GET_DEFAULT(accelerateBandwidth_, 0L) };
        inline SmartAccessGateway& setAccelerateBandwidth(int64_t accelerateBandwidth) { DARABONBA_PTR_SET_VALUE(accelerateBandwidth_, accelerateBandwidth) };


        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline SmartAccessGateway& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // aclIds Field Functions 
        bool hasAclIds() const { return this->aclIds_ != nullptr;};
        void deleteAclIds() { this->aclIds_ = nullptr;};
        inline string getAclIds() const { DARABONBA_PTR_GET_DEFAULT(aclIds_, "") };
        inline SmartAccessGateway& setAclIds(string aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };


        // applicationBandwidthPackageId Field Functions 
        bool hasApplicationBandwidthPackageId() const { return this->applicationBandwidthPackageId_ != nullptr;};
        void deleteApplicationBandwidthPackageId() { this->applicationBandwidthPackageId_ = nullptr;};
        inline string getApplicationBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageId_, "") };
        inline SmartAccessGateway& setApplicationBandwidthPackageId(string applicationBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageId_, applicationBandwidthPackageId) };


        // associatedCcnId Field Functions 
        bool hasAssociatedCcnId() const { return this->associatedCcnId_ != nullptr;};
        void deleteAssociatedCcnId() { this->associatedCcnId_ = nullptr;};
        inline string getAssociatedCcnId() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnId_, "") };
        inline SmartAccessGateway& setAssociatedCcnId(string associatedCcnId) { DARABONBA_PTR_SET_VALUE(associatedCcnId_, associatedCcnId) };


        // associatedCcnName Field Functions 
        bool hasAssociatedCcnName() const { return this->associatedCcnName_ != nullptr;};
        void deleteAssociatedCcnName() { this->associatedCcnName_ = nullptr;};
        inline string getAssociatedCcnName() const { DARABONBA_PTR_GET_DEFAULT(associatedCcnName_, "") };
        inline SmartAccessGateway& setAssociatedCcnName(string associatedCcnName) { DARABONBA_PTR_SET_VALUE(associatedCcnName_, associatedCcnName) };


        // backupSoftwareVersion Field Functions 
        bool hasBackupSoftwareVersion() const { return this->backupSoftwareVersion_ != nullptr;};
        void deleteBackupSoftwareVersion() { this->backupSoftwareVersion_ = nullptr;};
        inline string getBackupSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(backupSoftwareVersion_, "") };
        inline SmartAccessGateway& setBackupSoftwareVersion(string backupSoftwareVersion) { DARABONBA_PTR_SET_VALUE(backupSoftwareVersion_, backupSoftwareVersion) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline SmartAccessGateway& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline SmartAccessGateway& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline SmartAccessGateway& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SmartAccessGateway& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataPlan Field Functions 
        bool hasDataPlan() const { return this->dataPlan_ != nullptr;};
        void deleteDataPlan() { this->dataPlan_ = nullptr;};
        inline int64_t getDataPlan() const { DARABONBA_PTR_GET_DEFAULT(dataPlan_, 0L) };
        inline SmartAccessGateway& setDataPlan(int64_t dataPlan) { DARABONBA_PTR_SET_VALUE(dataPlan_, dataPlan) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SmartAccessGateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dpiMonitorStatus Field Functions 
        bool hasDpiMonitorStatus() const { return this->dpiMonitorStatus_ != nullptr;};
        void deleteDpiMonitorStatus() { this->dpiMonitorStatus_ = nullptr;};
        inline string getDpiMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(dpiMonitorStatus_, "") };
        inline SmartAccessGateway& setDpiMonitorStatus(string dpiMonitorStatus) { DARABONBA_PTR_SET_VALUE(dpiMonitorStatus_, dpiMonitorStatus) };


        // dpiStatus Field Functions 
        bool hasDpiStatus() const { return this->dpiStatus_ != nullptr;};
        void deleteDpiStatus() { this->dpiStatus_ = nullptr;};
        inline string getDpiStatus() const { DARABONBA_PTR_GET_DEFAULT(dpiStatus_, "") };
        inline SmartAccessGateway& setDpiStatus(string dpiStatus) { DARABONBA_PTR_SET_VALUE(dpiStatus_, dpiStatus) };


        // enableAdvancedMonitor Field Functions 
        bool hasEnableAdvancedMonitor() const { return this->enableAdvancedMonitor_ != nullptr;};
        void deleteEnableAdvancedMonitor() { this->enableAdvancedMonitor_ = nullptr;};
        inline bool getEnableAdvancedMonitor() const { DARABONBA_PTR_GET_DEFAULT(enableAdvancedMonitor_, false) };
        inline SmartAccessGateway& setEnableAdvancedMonitor(bool enableAdvancedMonitor) { DARABONBA_PTR_SET_VALUE(enableAdvancedMonitor_, enableAdvancedMonitor) };


        // enableSoftwareConnectionAudit Field Functions 
        bool hasEnableSoftwareConnectionAudit() const { return this->enableSoftwareConnectionAudit_ != nullptr;};
        void deleteEnableSoftwareConnectionAudit() { this->enableSoftwareConnectionAudit_ = nullptr;};
        inline bool getEnableSoftwareConnectionAudit() const { DARABONBA_PTR_GET_DEFAULT(enableSoftwareConnectionAudit_, false) };
        inline SmartAccessGateway& setEnableSoftwareConnectionAudit(bool enableSoftwareConnectionAudit) { DARABONBA_PTR_SET_VALUE(enableSoftwareConnectionAudit_, enableSoftwareConnectionAudit) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SmartAccessGateway& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // enterpriseCode Field Functions 
        bool hasEnterpriseCode() const { return this->enterpriseCode_ != nullptr;};
        void deleteEnterpriseCode() { this->enterpriseCode_ = nullptr;};
        inline string getEnterpriseCode() const { DARABONBA_PTR_GET_DEFAULT(enterpriseCode_, "") };
        inline SmartAccessGateway& setEnterpriseCode(string enterpriseCode) { DARABONBA_PTR_SET_VALUE(enterpriseCode_, enterpriseCode) };


        // hardwareVersion Field Functions 
        bool hasHardwareVersion() const { return this->hardwareVersion_ != nullptr;};
        void deleteHardwareVersion() { this->hardwareVersion_ = nullptr;};
        inline string getHardwareVersion() const { DARABONBA_PTR_GET_DEFAULT(hardwareVersion_, "") };
        inline SmartAccessGateway& setHardwareVersion(string hardwareVersion) { DARABONBA_PTR_SET_VALUE(hardwareVersion_, hardwareVersion) };


        // IRIds Field Functions 
        bool hasIRIds() const { return this->IRIds_ != nullptr;};
        void deleteIRIds() { this->IRIds_ = nullptr;};
        inline string getIRIds() const { DARABONBA_PTR_GET_DEFAULT(IRIds_, "") };
        inline SmartAccessGateway& setIRIds(string IRIds) { DARABONBA_PTR_SET_VALUE(IRIds_, IRIds) };


        // idaasApplicationId Field Functions 
        bool hasIdaasApplicationId() const { return this->idaasApplicationId_ != nullptr;};
        void deleteIdaasApplicationId() { this->idaasApplicationId_ = nullptr;};
        inline string getIdaasApplicationId() const { DARABONBA_PTR_GET_DEFAULT(idaasApplicationId_, "") };
        inline SmartAccessGateway& setIdaasApplicationId(string idaasApplicationId) { DARABONBA_PTR_SET_VALUE(idaasApplicationId_, idaasApplicationId) };


        // idaasId Field Functions 
        bool hasIdaasId() const { return this->idaasId_ != nullptr;};
        void deleteIdaasId() { this->idaasId_ = nullptr;};
        inline string getIdaasId() const { DARABONBA_PTR_GET_DEFAULT(idaasId_, "") };
        inline SmartAccessGateway& setIdaasId(string idaasId) { DARABONBA_PTR_SET_VALUE(idaasId_, idaasId) };


        // ipsecStatus Field Functions 
        bool hasIpsecStatus() const { return this->ipsecStatus_ != nullptr;};
        void deleteIpsecStatus() { this->ipsecStatus_ = nullptr;};
        inline string getIpsecStatus() const { DARABONBA_PTR_GET_DEFAULT(ipsecStatus_, "") };
        inline SmartAccessGateway& setIpsecStatus(string ipsecStatus) { DARABONBA_PTR_SET_VALUE(ipsecStatus_, ipsecStatus) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline SmartAccessGateway& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // links Field Functions 
        bool hasLinks() const { return this->links_ != nullptr;};
        void deleteLinks() { this->links_ = nullptr;};
        inline const SmartAccessGateway::Links & getLinks() const { DARABONBA_PTR_GET_CONST(links_, SmartAccessGateway::Links) };
        inline SmartAccessGateway::Links getLinks() { DARABONBA_PTR_GET(links_, SmartAccessGateway::Links) };
        inline SmartAccessGateway& setLinks(const SmartAccessGateway::Links & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
        inline SmartAccessGateway& setLinks(SmartAccessGateway::Links && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


        // maxBandwidth Field Functions 
        bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
        void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
        inline string getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, "") };
        inline SmartAccessGateway& setMaxBandwidth(string maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SmartAccessGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline SmartAccessGateway& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // qosIds Field Functions 
        bool hasQosIds() const { return this->qosIds_ != nullptr;};
        void deleteQosIds() { this->qosIds_ = nullptr;};
        inline string getQosIds() const { DARABONBA_PTR_GET_DEFAULT(qosIds_, "") };
        inline SmartAccessGateway& setQosIds(string qosIds) { DARABONBA_PTR_SET_VALUE(qosIds_, qosIds) };


        // resellerInstanceId Field Functions 
        bool hasResellerInstanceId() const { return this->resellerInstanceId_ != nullptr;};
        void deleteResellerInstanceId() { this->resellerInstanceId_ = nullptr;};
        inline string getResellerInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resellerInstanceId_, "") };
        inline SmartAccessGateway& setResellerInstanceId(string resellerInstanceId) { DARABONBA_PTR_SET_VALUE(resellerInstanceId_, resellerInstanceId) };


        // resellerUid Field Functions 
        bool hasResellerUid() const { return this->resellerUid_ != nullptr;};
        void deleteResellerUid() { this->resellerUid_ = nullptr;};
        inline string getResellerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerUid_, "") };
        inline SmartAccessGateway& setResellerUid(string resellerUid) { DARABONBA_PTR_SET_VALUE(resellerUid_, resellerUid) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SmartAccessGateway& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routingStrategy Field Functions 
        bool hasRoutingStrategy() const { return this->routingStrategy_ != nullptr;};
        void deleteRoutingStrategy() { this->routingStrategy_ = nullptr;};
        inline string getRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(routingStrategy_, "") };
        inline SmartAccessGateway& setRoutingStrategy(string routingStrategy) { DARABONBA_PTR_SET_VALUE(routingStrategy_, routingStrategy) };


        // securityLockThreshold Field Functions 
        bool hasSecurityLockThreshold() const { return this->securityLockThreshold_ != nullptr;};
        void deleteSecurityLockThreshold() { this->securityLockThreshold_ = nullptr;};
        inline int32_t getSecurityLockThreshold() const { DARABONBA_PTR_GET_DEFAULT(securityLockThreshold_, 0) };
        inline SmartAccessGateway& setSecurityLockThreshold(int32_t securityLockThreshold) { DARABONBA_PTR_SET_VALUE(securityLockThreshold_, securityLockThreshold) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline SmartAccessGateway& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline SmartAccessGateway& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


        // smartAGUid Field Functions 
        bool hasSmartAGUid() const { return this->smartAGUid_ != nullptr;};
        void deleteSmartAGUid() { this->smartAGUid_ = nullptr;};
        inline int64_t getSmartAGUid() const { DARABONBA_PTR_GET_DEFAULT(smartAGUid_, 0L) };
        inline SmartAccessGateway& setSmartAGUid(int64_t smartAGUid) { DARABONBA_PTR_SET_VALUE(smartAGUid_, smartAGUid) };


        // softwareVersion Field Functions 
        bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
        void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
        inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
        inline SmartAccessGateway& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SmartAccessGateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // upBandwidth4G Field Functions 
        bool hasUpBandwidth4G() const { return this->upBandwidth4G_ != nullptr;};
        void deleteUpBandwidth4G() { this->upBandwidth4G_ = nullptr;};
        inline int32_t getUpBandwidth4G() const { DARABONBA_PTR_GET_DEFAULT(upBandwidth4G_, 0) };
        inline SmartAccessGateway& setUpBandwidth4G(int32_t upBandwidth4G) { DARABONBA_PTR_SET_VALUE(upBandwidth4G_, upBandwidth4G) };


        // upBandwidthWan Field Functions 
        bool hasUpBandwidthWan() const { return this->upBandwidthWan_ != nullptr;};
        void deleteUpBandwidthWan() { this->upBandwidthWan_ = nullptr;};
        inline int32_t getUpBandwidthWan() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthWan_, 0) };
        inline SmartAccessGateway& setUpBandwidthWan(int32_t upBandwidthWan) { DARABONBA_PTR_SET_VALUE(upBandwidthWan_, upBandwidthWan) };


        // userCount Field Functions 
        bool hasUserCount() const { return this->userCount_ != nullptr;};
        void deleteUserCount() { this->userCount_ = nullptr;};
        inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
        inline SmartAccessGateway& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


        // vpnStatus Field Functions 
        bool hasVpnStatus() const { return this->vpnStatus_ != nullptr;};
        void deleteVpnStatus() { this->vpnStatus_ = nullptr;};
        inline string getVpnStatus() const { DARABONBA_PTR_GET_DEFAULT(vpnStatus_, "") };
        inline SmartAccessGateway& setVpnStatus(string vpnStatus) { DARABONBA_PTR_SET_VALUE(vpnStatus_, vpnStatus) };


      protected:
        shared_ptr<int64_t> accelerateBandwidth_ {};
        shared_ptr<string> accessPointId_ {};
        shared_ptr<string> aclIds_ {};
        shared_ptr<string> applicationBandwidthPackageId_ {};
        shared_ptr<string> associatedCcnId_ {};
        shared_ptr<string> associatedCcnName_ {};
        shared_ptr<string> backupSoftwareVersion_ {};
        shared_ptr<string> backupStatus_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> city_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int64_t> dataPlan_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> dpiMonitorStatus_ {};
        shared_ptr<string> dpiStatus_ {};
        shared_ptr<bool> enableAdvancedMonitor_ {};
        shared_ptr<bool> enableSoftwareConnectionAudit_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> enterpriseCode_ {};
        shared_ptr<string> hardwareVersion_ {};
        shared_ptr<string> IRIds_ {};
        shared_ptr<string> idaasApplicationId_ {};
        shared_ptr<string> idaasId_ {};
        shared_ptr<string> ipsecStatus_ {};
        shared_ptr<string> isp_ {};
        shared_ptr<SmartAccessGateway::Links> links_ {};
        shared_ptr<string> maxBandwidth_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> position_ {};
        shared_ptr<string> qosIds_ {};
        shared_ptr<string> resellerInstanceId_ {};
        shared_ptr<string> resellerUid_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> routingStrategy_ {};
        shared_ptr<int32_t> securityLockThreshold_ {};
        shared_ptr<string> serialNumber_ {};
        shared_ptr<string> smartAGId_ {};
        shared_ptr<int64_t> smartAGUid_ {};
        shared_ptr<string> softwareVersion_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> upBandwidth4G_ {};
        shared_ptr<int32_t> upBandwidthWan_ {};
        shared_ptr<int32_t> userCount_ {};
        shared_ptr<string> vpnStatus_ {};
      };

      virtual bool empty() const override { return this->smartAccessGateway_ == nullptr; };
      // smartAccessGateway Field Functions 
      bool hasSmartAccessGateway() const { return this->smartAccessGateway_ != nullptr;};
      void deleteSmartAccessGateway() { this->smartAccessGateway_ = nullptr;};
      inline const vector<SmartAccessGateways::SmartAccessGateway> & getSmartAccessGateway() const { DARABONBA_PTR_GET_CONST(smartAccessGateway_, vector<SmartAccessGateways::SmartAccessGateway>) };
      inline vector<SmartAccessGateways::SmartAccessGateway> getSmartAccessGateway() { DARABONBA_PTR_GET(smartAccessGateway_, vector<SmartAccessGateways::SmartAccessGateway>) };
      inline SmartAccessGateways& setSmartAccessGateway(const vector<SmartAccessGateways::SmartAccessGateway> & smartAccessGateway) { DARABONBA_PTR_SET_VALUE(smartAccessGateway_, smartAccessGateway) };
      inline SmartAccessGateways& setSmartAccessGateway(vector<SmartAccessGateways::SmartAccessGateway> && smartAccessGateway) { DARABONBA_PTR_SET_RVALUE(smartAccessGateway_, smartAccessGateway) };


    protected:
      shared_ptr<vector<SmartAccessGateways::SmartAccessGateway>> smartAccessGateway_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->smartAccessGateways_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSmartAccessGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSmartAccessGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmartAccessGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartAccessGateways Field Functions 
    bool hasSmartAccessGateways() const { return this->smartAccessGateways_ != nullptr;};
    void deleteSmartAccessGateways() { this->smartAccessGateways_ = nullptr;};
    inline const DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways & getSmartAccessGateways() const { DARABONBA_PTR_GET_CONST(smartAccessGateways_, DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways) };
    inline DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways getSmartAccessGateways() { DARABONBA_PTR_GET(smartAccessGateways_, DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways) };
    inline DescribeSmartAccessGatewaysResponseBody& setSmartAccessGateways(const DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways & smartAccessGateways) { DARABONBA_PTR_SET_VALUE(smartAccessGateways_, smartAccessGateways) };
    inline DescribeSmartAccessGatewaysResponseBody& setSmartAccessGateways(DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways && smartAccessGateways) { DARABONBA_PTR_SET_RVALUE(smartAccessGateways_, smartAccessGateways) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSmartAccessGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSmartAccessGatewaysResponseBody::SmartAccessGateways> smartAccessGateways_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
