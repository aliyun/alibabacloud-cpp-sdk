// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceResponseBody() = default ;
    ListInstanceResponseBody(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody(ListInstanceResponseBody &&) = default ;
    ListInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBody() = default ;
    ListInstanceResponseBody& operator=(const ListInstanceResponseBody &) = default ;
    ListInstanceResponseBody& operator=(ListInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(advancedDedicateMaster, advancedDedicateMaster_);
        DARABONBA_PTR_TO_JSON(archType, archType_);
        DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(dedicateMaster, dedicateMaster_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
        DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(isNewDeployment, isNewDeployment_);
        DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(postpaidServiceStatus, postpaidServiceStatus_);
        DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(serviceVpc, serviceVpc_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
        DARABONBA_PTR_TO_JSON(zoneInfos, zoneInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(advancedDedicateMaster, advancedDedicateMaster_);
        DARABONBA_PTR_FROM_JSON(archType, archType_);
        DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(dedicateMaster, dedicateMaster_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
        DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(isNewDeployment, isNewDeployment_);
        DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(postpaidServiceStatus, postpaidServiceStatus_);
        DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(serviceVpc, serviceVpc_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
        DARABONBA_PTR_FROM_JSON(zoneInfos, zoneInfos_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ZoneInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ZoneInfos& obj) { 
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ZoneInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
        };
        ZoneInfos() = default ;
        ZoneInfos(const ZoneInfos &) = default ;
        ZoneInfos(ZoneInfos &&) = default ;
        ZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ZoneInfos() = default ;
        ZoneInfos& operator=(const ZoneInfos &) = default ;
        ZoneInfos& operator=(ZoneInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->zoneId_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ZoneInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ZoneInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> status_ {};
        shared_ptr<string> zoneId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The size of the node storage space. Unit: GB.
        shared_ptr<string> tagKey_ {};
        // The storage type of the node. Only ultra disks (cloud_efficiency) are supported.
        shared_ptr<string> tagValue_ {};
      };

      class NodeSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        NodeSpec() = default ;
        NodeSpec(const NodeSpec &) = default ;
        NodeSpec(NodeSpec &&) = default ;
        NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSpec() = default ;
        NodeSpec& operator=(const NodeSpec &) = default ;
        NodeSpec& operator=(NodeSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->performanceLevel_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline NodeSpec& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline NodeSpec& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline NodeSpec& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> disk_ {};
        shared_ptr<bool> diskEncryption_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> performanceLevel_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class NetworkConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        NetworkConfig() = default ;
        NetworkConfig(const NetworkConfig &) = default ;
        NetworkConfig(NetworkConfig &&) = default ;
        NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkConfig() = default ;
        NetworkConfig& operator=(const NetworkConfig &) = default ;
        NetworkConfig& operator=(NetworkConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WhiteIpGroupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WhiteIpGroupList& obj) { 
            DARABONBA_PTR_TO_JSON(groupName, groupName_);
            DARABONBA_PTR_TO_JSON(ips, ips_);
            DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
          };
          friend void from_json(const Darabonba::Json& j, WhiteIpGroupList& obj) { 
            DARABONBA_PTR_FROM_JSON(groupName, groupName_);
            DARABONBA_PTR_FROM_JSON(ips, ips_);
            DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
          };
          WhiteIpGroupList() = default ;
          WhiteIpGroupList(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList(WhiteIpGroupList &&) = default ;
          WhiteIpGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WhiteIpGroupList() = default ;
          WhiteIpGroupList& operator=(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList& operator=(WhiteIpGroupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr && this->whiteIpType_ == nullptr; };
          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline WhiteIpGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // ips Field Functions 
          bool hasIps() const { return this->ips_ != nullptr;};
          void deleteIps() { this->ips_ = nullptr;};
          inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
          inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
          inline WhiteIpGroupList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
          inline WhiteIpGroupList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


          // whiteIpType Field Functions 
          bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
          void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
          inline string getWhiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
          inline WhiteIpGroupList& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


        protected:
          shared_ptr<string> groupName_ {};
          shared_ptr<vector<string>> ips_ {};
          shared_ptr<string> whiteIpType_ {};
        };

        virtual bool empty() const override { return this->type_ == nullptr
        && this->vpcId_ == nullptr && this->vsArea_ == nullptr && this->vswitchId_ == nullptr && this->whiteIpGroupList_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vsArea Field Functions 
        bool hasVsArea() const { return this->vsArea_ != nullptr;};
        void deleteVsArea() { this->vsArea_ = nullptr;};
        inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
        inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // whiteIpGroupList Field Functions 
        bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
        void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
        inline const vector<NetworkConfig::WhiteIpGroupList> & getWhiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline vector<NetworkConfig::WhiteIpGroupList> getWhiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline NetworkConfig& setWhiteIpGroupList(const vector<NetworkConfig::WhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
        inline NetworkConfig& setWhiteIpGroupList(vector<NetworkConfig::WhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


      protected:
        // The storage type of the node. Valid values:
        // 
        // *   cloud_ssd: standard SSD
        // *   cloud_efficiency: ultra disk
        shared_ptr<string> type_ {};
        // The storage space of the node. Unit: GB.
        shared_ptr<string> vpcId_ {};
        // Specifies whether to use disk encryption. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<string> vsArea_ {};
        // The performance level of the ESSD. This parameter is required when the diskType parameter is set to cloud_essd. Valid values: PL1, PL2, and PL3.
        shared_ptr<string> vswitchId_ {};
        shared_ptr<vector<NetworkConfig::WhiteIpGroupList>> whiteIpGroupList_ {};
      };

      class MasterConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, MasterConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        MasterConfiguration() = default ;
        MasterConfiguration(const MasterConfiguration &) = default ;
        MasterConfiguration(MasterConfiguration &&) = default ;
        MasterConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterConfiguration() = default ;
        MasterConfiguration& operator=(const MasterConfiguration &) = default ;
        MasterConfiguration& operator=(MasterConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline MasterConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline MasterConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline MasterConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline MasterConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline MasterConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        // The network type. Only Virtual Private Cloud (VPC) is supported.
        shared_ptr<int32_t> amount_ {};
        // The vSwitch ID of the cluster.
        shared_ptr<int32_t> disk_ {};
        // The configuration of data nodes.
        shared_ptr<string> diskType_ {};
        // The zone where the cluster resides.
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class KibanaConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KibanaConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, KibanaConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        KibanaConfiguration() = default ;
        KibanaConfiguration(const KibanaConfiguration &) = default ;
        KibanaConfiguration(KibanaConfiguration &&) = default ;
        KibanaConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KibanaConfiguration() = default ;
        KibanaConfiguration& operator=(const KibanaConfiguration &) = default ;
        KibanaConfiguration& operator=(KibanaConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline KibanaConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline KibanaConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline KibanaConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline KibanaConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline KibanaConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        // The size of the node storage space. Unit: GB.
        shared_ptr<int32_t> amount_ {};
        // The storage type of the node. Only cloud_ssd(SSD cloud disk) is supported.
        shared_ptr<int32_t> disk_ {};
        // The network configurations.
        shared_ptr<string> diskType_ {};
        // The number of nodes.
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class ElasticDataNodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticDataNodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticDataNodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        ElasticDataNodeConfiguration() = default ;
        ElasticDataNodeConfiguration(const ElasticDataNodeConfiguration &) = default ;
        ElasticDataNodeConfiguration(ElasticDataNodeConfiguration &&) = default ;
        ElasticDataNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticDataNodeConfiguration() = default ;
        ElasticDataNodeConfiguration& operator=(const ElasticDataNodeConfiguration &) = default ;
        ElasticDataNodeConfiguration& operator=(ElasticDataNodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline ElasticDataNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline ElasticDataNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline ElasticDataNodeConfiguration& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ElasticDataNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline ElasticDataNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline ElasticDataNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        // The number of nodes.
        shared_ptr<int32_t> amount_ {};
        // The size of the node storage space. Unit: GB.
        shared_ptr<int32_t> disk_ {};
        // The storage type of the node.
        shared_ptr<bool> diskEncryption_ {};
        // The configuration of dedicated master nodes.
        shared_ptr<string> diskType_ {};
        // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class ClientNodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        ClientNodeConfiguration() = default ;
        ClientNodeConfiguration(const ClientNodeConfiguration &) = default ;
        ClientNodeConfiguration(ClientNodeConfiguration &&) = default ;
        ClientNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeConfiguration() = default ;
        ClientNodeConfiguration& operator=(const ClientNodeConfiguration &) = default ;
        ClientNodeConfiguration& operator=(ClientNodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline ClientNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline ClientNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ClientNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline ClientNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline ClientNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        // The size of the node storage space. Unit: GB.
        shared_ptr<int32_t> amount_ {};
        // Specifies whether to enable disk encryption for the node. Valid values:
        // 
        // *   true: enables instant image cache.
        // *   false: disables reuse of image cache layers.
        shared_ptr<int32_t> disk_ {};
        // The storage type of the node. Valid values:
        // 
        // *   cloud_ssd: SSD.
        // *   cloud_essd: ESSD.
        // *   cloud_efficiency: ultra disk
        shared_ptr<string> diskType_ {};
        // The number of nodes.
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      virtual bool empty() const override { return this->advancedDedicateMaster_ == nullptr
        && this->archType_ == nullptr && this->clientNodeConfiguration_ == nullptr && this->createdAt_ == nullptr && this->dedicateMaster_ == nullptr && this->description_ == nullptr
        && this->domain_ == nullptr && this->elasticDataNodeConfiguration_ == nullptr && this->endTime_ == nullptr && this->esVersion_ == nullptr && this->extendConfigs_ == nullptr
        && this->instanceId_ == nullptr && this->isNewDeployment_ == nullptr && this->kibanaConfiguration_ == nullptr && this->kibanaIPWhitelist_ == nullptr && this->kibanaPrivateIPWhitelist_ == nullptr
        && this->masterConfiguration_ == nullptr && this->networkConfig_ == nullptr && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr
        && this->port_ == nullptr && this->postpaidServiceStatus_ == nullptr && this->privateNetworkIpWhiteList_ == nullptr && this->protocol_ == nullptr && this->publicIpWhitelist_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceVpc_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->updatedAt_ == nullptr
        && this->vpcInstanceId_ == nullptr && this->zoneCount_ == nullptr && this->zoneInfos_ == nullptr; };
      // advancedDedicateMaster Field Functions 
      bool hasAdvancedDedicateMaster() const { return this->advancedDedicateMaster_ != nullptr;};
      void deleteAdvancedDedicateMaster() { this->advancedDedicateMaster_ = nullptr;};
      inline bool getAdvancedDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(advancedDedicateMaster_, false) };
      inline Result& setAdvancedDedicateMaster(bool advancedDedicateMaster) { DARABONBA_PTR_SET_VALUE(advancedDedicateMaster_, advancedDedicateMaster) };


      // archType Field Functions 
      bool hasArchType() const { return this->archType_ != nullptr;};
      void deleteArchType() { this->archType_ = nullptr;};
      inline string getArchType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
      inline Result& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


      // clientNodeConfiguration Field Functions 
      bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
      void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
      inline const Result::ClientNodeConfiguration & getClientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, Result::ClientNodeConfiguration) };
      inline Result::ClientNodeConfiguration getClientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, Result::ClientNodeConfiguration) };
      inline Result& setClientNodeConfiguration(const Result::ClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
      inline Result& setClientNodeConfiguration(Result::ClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Result& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // dedicateMaster Field Functions 
      bool hasDedicateMaster() const { return this->dedicateMaster_ != nullptr;};
      void deleteDedicateMaster() { this->dedicateMaster_ = nullptr;};
      inline bool getDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicateMaster_, false) };
      inline Result& setDedicateMaster(bool dedicateMaster) { DARABONBA_PTR_SET_VALUE(dedicateMaster_, dedicateMaster) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // elasticDataNodeConfiguration Field Functions 
      bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
      void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
      inline const Result::ElasticDataNodeConfiguration & getElasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, Result::ElasticDataNodeConfiguration) };
      inline Result::ElasticDataNodeConfiguration getElasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, Result::ElasticDataNodeConfiguration) };
      inline Result& setElasticDataNodeConfiguration(const Result::ElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
      inline Result& setElasticDataNodeConfiguration(Result::ElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // esVersion Field Functions 
      bool hasEsVersion() const { return this->esVersion_ != nullptr;};
      void deleteEsVersion() { this->esVersion_ = nullptr;};
      inline string getEsVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
      inline Result& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


      // extendConfigs Field Functions 
      bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
      void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
      inline const vector<Darabonba::Json> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
      inline Result& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
      inline Result& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isNewDeployment Field Functions 
      bool hasIsNewDeployment() const { return this->isNewDeployment_ != nullptr;};
      void deleteIsNewDeployment() { this->isNewDeployment_ = nullptr;};
      inline string getIsNewDeployment() const { DARABONBA_PTR_GET_DEFAULT(isNewDeployment_, "") };
      inline Result& setIsNewDeployment(string isNewDeployment) { DARABONBA_PTR_SET_VALUE(isNewDeployment_, isNewDeployment) };


      // kibanaConfiguration Field Functions 
      bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
      void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
      inline const Result::KibanaConfiguration & getKibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result::KibanaConfiguration getKibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result& setKibanaConfiguration(const Result::KibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
      inline Result& setKibanaConfiguration(Result::KibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


      // kibanaIPWhitelist Field Functions 
      bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
      void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
      inline Result& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
      inline Result& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


      // kibanaPrivateIPWhitelist Field Functions 
      bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
      void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
      inline Result& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
      inline Result& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


      // masterConfiguration Field Functions 
      bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
      void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
      inline const Result::MasterConfiguration & getMasterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Result::MasterConfiguration) };
      inline Result::MasterConfiguration getMasterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Result::MasterConfiguration) };
      inline Result& setMasterConfiguration(const Result::MasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
      inline Result& setMasterConfiguration(Result::MasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


      // networkConfig Field Functions 
      bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
      void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
      inline const Result::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Result::NetworkConfig) };
      inline Result::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, Result::NetworkConfig) };
      inline Result& setNetworkConfig(const Result::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
      inline Result& setNetworkConfig(Result::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline Result& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // nodeSpec Field Functions 
      bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
      void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
      inline const Result::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Result::NodeSpec) };
      inline Result::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Result::NodeSpec) };
      inline Result& setNodeSpec(const Result::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
      inline Result& setNodeSpec(Result::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Result& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Result& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // postpaidServiceStatus Field Functions 
      bool hasPostpaidServiceStatus() const { return this->postpaidServiceStatus_ != nullptr;};
      void deletePostpaidServiceStatus() { this->postpaidServiceStatus_ = nullptr;};
      inline string getPostpaidServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(postpaidServiceStatus_, "") };
      inline Result& setPostpaidServiceStatus(string postpaidServiceStatus) { DARABONBA_PTR_SET_VALUE(postpaidServiceStatus_, postpaidServiceStatus) };


      // privateNetworkIpWhiteList Field Functions 
      bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
      void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
      inline const vector<string> & getPrivateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
      inline vector<string> getPrivateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
      inline Result& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
      inline Result& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Result& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // publicIpWhitelist Field Functions 
      bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
      void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
      inline const vector<string> & getPublicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
      inline vector<string> getPublicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
      inline Result& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
      inline Result& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceVpc Field Functions 
      bool hasServiceVpc() const { return this->serviceVpc_ != nullptr;};
      void deleteServiceVpc() { this->serviceVpc_ = nullptr;};
      inline bool getServiceVpc() const { DARABONBA_PTR_GET_DEFAULT(serviceVpc_, false) };
      inline Result& setServiceVpc(bool serviceVpc) { DARABONBA_PTR_SET_VALUE(serviceVpc_, serviceVpc) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
      inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
      inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Result& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline Result& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      // zoneCount Field Functions 
      bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
      void deleteZoneCount() { this->zoneCount_ = nullptr;};
      inline int32_t getZoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0) };
      inline Result& setZoneCount(int32_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


      // zoneInfos Field Functions 
      bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
      void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
      inline const vector<Result::ZoneInfos> & getZoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Result::ZoneInfos>) };
      inline vector<Result::ZoneInfos> getZoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Result::ZoneInfos>) };
      inline Result& setZoneInfos(const vector<Result::ZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
      inline Result& setZoneInfos(vector<Result::ZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


    protected:
      // The billing method of the instance. Valid values:
      // 
      // *   **prepaid**: subscription
      // *   **postpaid**: pay-as-you-go
      shared_ptr<bool> advancedDedicateMaster_ {};
      shared_ptr<string> archType_ {};
      // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
      shared_ptr<Result::ClientNodeConfiguration> clientNodeConfiguration_ {};
      // The status of the pay-as-you-go service that is overlaid on a subscription instance. Valid values:
      // 
      // *   **active**: normal
      // *   **closed**: Close
      // *   **indebt**: Overdue payments are frozen
      shared_ptr<string> createdAt_ {};
      // The edition of the dedicated KMS instance.
      shared_ptr<bool> dedicateMaster_ {};
      // The key of the tag.
      shared_ptr<string> description_ {};
      shared_ptr<string> domain_ {};
      // The configuration of Kibana nodes.
      shared_ptr<Result::ElasticDataNodeConfiguration> elasticDataNodeConfiguration_ {};
      shared_ptr<int64_t> endTime_ {};
      // The value of the tag.
      shared_ptr<string> esVersion_ {};
      // The configurations of elastic data nodes.
      shared_ptr<vector<Darabonba::Json>> extendConfigs_ {};
      // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
      shared_ptr<string> instanceId_ {};
      // The configuration of cluster extension parameters.
      shared_ptr<string> isNewDeployment_ {};
      // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
      shared_ptr<Result::KibanaConfiguration> kibanaConfiguration_ {};
      shared_ptr<vector<string>> kibanaIPWhitelist_ {};
      shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ {};
      // The VPC ID of the cluster.
      shared_ptr<Result::MasterConfiguration> masterConfiguration_ {};
      // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
      // The ID of the resource group.
      shared_ptr<int32_t> nodeAmount_ {};
      // The VPC ID of the cluster.
      shared_ptr<Result::NodeSpec> nodeSpec_ {};
      // The time when the instance was last updated.
      shared_ptr<string> paymentType_ {};
      shared_ptr<string> port_ {};
      // The tags of the instance. Each tag is a key-value pair.
      shared_ptr<string> postpaidServiceStatus_ {};
      shared_ptr<vector<string>> privateNetworkIpWhiteList_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<vector<string>> publicIpWhitelist_ {};
      // The ID of the instance.
      shared_ptr<string> resourceGroupId_ {};
      // Specifies whether to deploy the new architecture.
      shared_ptr<bool> serviceVpc_ {};
      // The name of the instance.
      shared_ptr<string> status_ {};
      // The number of nodes.
      shared_ptr<vector<Result::Tags>> tags_ {};
      // Coordination node configuration.
      shared_ptr<string> updatedAt_ {};
      shared_ptr<string> vpcInstanceId_ {};
      shared_ptr<int32_t> zoneCount_ {};
      shared_ptr<vector<Result::ZoneInfos>> zoneInfos_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // Specifies whether to include dedicated master nodes (obsolete). Valid values:
      // 
      // *   true: The files contain data that is dumped to the IA storage medium.
      // *   false: The files do not contain data that is dumped to the IA storage medium.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceResponseBody::Headers) };
    inline ListInstanceResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListInstanceResponseBody::Headers) };
    inline ListInstanceResponseBody& setHeaders(const ListInstanceResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceResponseBody& setHeaders(ListInstanceResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceResponseBody::Result>) };
    inline vector<ListInstanceResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInstanceResponseBody::Result>) };
    inline ListInstanceResponseBody& setResult(const vector<ListInstanceResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceResponseBody& setResult(vector<ListInstanceResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The status of the instance. Valid values:
    // 
    // *   active: normal
    // *   activating: taking effect
    // *   inactive: frozen
    // *   invalid: invalid
    shared_ptr<ListInstanceResponseBody::Headers> headers_ {};
    // The time when the node is created.
    shared_ptr<string> requestId_ {};
    // Indicates whether it is a service VPC.
    shared_ptr<vector<ListInstanceResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
