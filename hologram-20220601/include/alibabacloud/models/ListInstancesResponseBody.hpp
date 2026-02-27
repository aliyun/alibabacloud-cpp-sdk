// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EnableHiveAccess, enableHiveAccess_);
        DARABONBA_PTR_TO_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(LeaderInstanceId, leaderInstanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(SuspendReason, suspendReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EnableHiveAccess, enableHiveAccess_);
        DARABONBA_PTR_FROM_JSON(EnableSSL, enableSSL_);
        DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(LeaderInstanceId, leaderInstanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(SuspendReason, suspendReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->endpoint_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Endpoints& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Endpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Endpoints& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Endpoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline Endpoints& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        // Indicates whether the endpoint is enabled.
        // 
        // Valid values:
        // 
        // *   true
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   false
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<bool> enabled_ {};
        // The endpoint.
        shared_ptr<string> endpoint_ {};
        // The network type.
        // 
        // Valid values:
        // 
        // *   VPCSingleTunnel
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     virtual private cloud (VPC)
        // 
        //     <!-- -->
        // 
        //     .
        // 
        // *   Intranet
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     internal network
        // 
        //     <!-- -->
        // 
        // *   VPCAnyTunnel
        // 
        //     <!-- -->
        // 
        //     : This value is not supported by new instances
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     .
        // 
        // *   Internet
        // 
        //     <!-- -->
        // 
        //     :
        // 
        //     <!-- -->
        // 
        //     Internet
        // 
        //     <!-- -->
        // 
        //     .
        shared_ptr<string> type_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The ID of the VPC to which the instance belongs.
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->creationTime_ == nullptr && this->enableHiveAccess_ == nullptr && this->enableSSL_ == nullptr && this->endpoints_ == nullptr && this->expirationTime_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->leaderInstanceId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->storageType_ == nullptr && this->suspendReason_ == nullptr
        && this->tags_ == nullptr && this->version_ == nullptr && this->zoneId_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline InstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline InstanceList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // enableHiveAccess Field Functions 
      bool hasEnableHiveAccess() const { return this->enableHiveAccess_ != nullptr;};
      void deleteEnableHiveAccess() { this->enableHiveAccess_ = nullptr;};
      inline string getEnableHiveAccess() const { DARABONBA_PTR_GET_DEFAULT(enableHiveAccess_, "") };
      inline InstanceList& setEnableHiveAccess(string enableHiveAccess) { DARABONBA_PTR_SET_VALUE(enableHiveAccess_, enableHiveAccess) };


      // enableSSL Field Functions 
      bool hasEnableSSL() const { return this->enableSSL_ != nullptr;};
      void deleteEnableSSL() { this->enableSSL_ = nullptr;};
      inline string getEnableSSL() const { DARABONBA_PTR_GET_DEFAULT(enableSSL_, "") };
      inline InstanceList& setEnableSSL(string enableSSL) { DARABONBA_PTR_SET_VALUE(enableSSL_, enableSSL) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<InstanceList::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<InstanceList::Endpoints>) };
      inline vector<InstanceList::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<InstanceList::Endpoints>) };
      inline InstanceList& setEndpoints(const vector<InstanceList::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline InstanceList& setEndpoints(vector<InstanceList::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline InstanceList& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // instanceChargeType Field Functions 
      bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
      void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
      inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
      inline InstanceList& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline InstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline InstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // leaderInstanceId Field Functions 
      bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
      void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
      inline string getLeaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
      inline InstanceList& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline InstanceList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline InstanceList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // suspendReason Field Functions 
      bool hasSuspendReason() const { return this->suspendReason_ != nullptr;};
      void deleteSuspendReason() { this->suspendReason_ = nullptr;};
      inline string getSuspendReason() const { DARABONBA_PTR_GET_DEFAULT(suspendReason_, "") };
      inline InstanceList& setSuspendReason(string suspendReason) { DARABONBA_PTR_SET_VALUE(suspendReason_, suspendReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<InstanceList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InstanceList::Tags>) };
      inline vector<InstanceList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InstanceList::Tags>) };
      inline InstanceList& setTags(const vector<InstanceList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline InstanceList& setTags(vector<InstanceList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline InstanceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline InstanceList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The commodity code, which is the same as that on the Billing Management page.
      shared_ptr<string> commodityCode_ {};
      // The time when the cluster was created.
      shared_ptr<string> creationTime_ {};
      // Indicates whether lakehouse acceleration is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   false
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> enableHiveAccess_ {};
      shared_ptr<string> enableSSL_ {};
      // The list of endpoints.
      shared_ptr<vector<InstanceList::Endpoints>> endpoints_ {};
      // The time when the cluster expires.
      shared_ptr<string> expirationTime_ {};
      // The billing method of the instance. Valid values:
      // 
      // Valid values:
      // 
      // *   PostPaid
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     pay-as-you-go
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   PrePaid
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     subscription
      // 
      //     <!-- -->
      // 
      //     .
      shared_ptr<string> instanceChargeType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The status of the instance.
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
      // *   Running
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Suspended
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Allocating
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> instanceStatus_ {};
      // The type of the instance.
      // 
      // Valid values:
      // 
      // *   Follower
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     read-only secondary instance
      // 
      //     <!-- -->
      // 
      //     .
      // 
      // *   Standard
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     normal instance
      // 
      //     <!-- -->
      // 
      //     .
      shared_ptr<string> instanceType_ {};
      // The ID of the primary instance.
      shared_ptr<string> leaderInstanceId_ {};
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<string> storageType_ {};
      // The reason for the suspension.
      shared_ptr<string> suspendReason_ {};
      // The tags that are added to the resource.
      shared_ptr<vector<InstanceList::Tags>> tags_ {};
      // The version of the cluster.
      shared_ptr<string> version_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstancesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListInstancesResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListInstancesResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListInstancesResponseBody::InstanceList>) };
    inline vector<ListInstancesResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListInstancesResponseBody::InstanceList>) };
    inline ListInstancesResponseBody& setInstanceList(const vector<ListInstancesResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstancesResponseBody& setInstanceList(vector<ListInstancesResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListInstancesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The instances.
    shared_ptr<vector<ListInstancesResponseBody::InstanceList>> instanceList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
