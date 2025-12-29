// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersV1ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusters, clusters_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody(DescribeClustersV1ResponseBody &&) = default ;
    DescribeClustersV1ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBody() = default ;
    DescribeClustersV1ResponseBody& operator=(const DescribeClustersV1ResponseBody &) = default ;
    DescribeClustersV1ResponseBody& operator=(DescribeClustersV1ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_count, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Clusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clusters& obj) { 
        DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
        DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
        DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
        DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(docker_version, dockerVersion_);
        DARABONBA_PTR_TO_JSON(external_loadbalancer_id, externalLoadbalancerId_);
        DARABONBA_PTR_TO_JSON(init_version, initVersion_);
        DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
        DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
        DARABONBA_PTR_TO_JSON(master_url, masterUrl_);
        DARABONBA_PTR_TO_JSON(meta_data, metaData_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(network_mode, networkMode_);
        DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
        DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
        DARABONBA_PTR_TO_JSON(private_zone, privateZone_);
        DARABONBA_PTR_TO_JSON(profile, profile_);
        DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
        DARABONBA_PTR_TO_JSON(region_id, regionId_);
        DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
        DARABONBA_PTR_TO_JSON(service_cidr, serviceCidr_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(subnet_cidr, subnetCidr_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(timezone, timezone_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
        DARABONBA_PTR_TO_JSON(vpc_id, vpcId_);
        DARABONBA_PTR_TO_JSON(vswitch_id, vswitchId_);
        DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
        DARABONBA_PTR_TO_JSON(worker_ram_role_name, workerRamRoleName_);
        DARABONBA_PTR_TO_JSON(zone_id, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Clusters& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
        DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
        DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
        DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(docker_version, dockerVersion_);
        DARABONBA_PTR_FROM_JSON(external_loadbalancer_id, externalLoadbalancerId_);
        DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
        DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
        DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
        DARABONBA_PTR_FROM_JSON(master_url, masterUrl_);
        DARABONBA_PTR_FROM_JSON(meta_data, metaData_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(network_mode, networkMode_);
        DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
        DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
        DARABONBA_PTR_FROM_JSON(private_zone, privateZone_);
        DARABONBA_PTR_FROM_JSON(profile, profile_);
        DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
        DARABONBA_PTR_FROM_JSON(region_id, regionId_);
        DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(service_cidr, serviceCidr_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(subnet_cidr, subnetCidr_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
        DARABONBA_PTR_FROM_JSON(vpc_id, vpcId_);
        DARABONBA_PTR_FROM_JSON(vswitch_id, vswitchId_);
        DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
        DARABONBA_PTR_FROM_JSON(worker_ram_role_name, workerRamRoleName_);
        DARABONBA_PTR_FROM_JSON(zone_id, zoneId_);
      };
      Clusters() = default ;
      Clusters(const Clusters &) = default ;
      Clusters(Clusters &&) = default ;
      Clusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clusters() = default ;
      Clusters& operator=(const Clusters &) = default ;
      Clusters& operator=(Clusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperationPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
        };
        friend void from_json(const Darabonba::Json& j, OperationPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
        };
        OperationPolicy() = default ;
        OperationPolicy(const OperationPolicy &) = default ;
        OperationPolicy(OperationPolicy &&) = default ;
        OperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationPolicy() = default ;
        OperationPolicy& operator=(const OperationPolicy &) = default ;
        OperationPolicy& operator=(OperationPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ClusterAutoUpgrade : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ClusterAutoUpgrade& obj) { 
            DARABONBA_PTR_TO_JSON(channel, channel_);
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, ClusterAutoUpgrade& obj) { 
            DARABONBA_PTR_FROM_JSON(channel, channel_);
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
          };
          ClusterAutoUpgrade() = default ;
          ClusterAutoUpgrade(const ClusterAutoUpgrade &) = default ;
          ClusterAutoUpgrade(ClusterAutoUpgrade &&) = default ;
          ClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ClusterAutoUpgrade() = default ;
          ClusterAutoUpgrade& operator=(const ClusterAutoUpgrade &) = default ;
          ClusterAutoUpgrade& operator=(ClusterAutoUpgrade &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channel_ == nullptr
        && this->enabled_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
          inline ClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline ClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // The frequency of auto cluster updates. For more information, see [Update frequency](https://help.aliyun.com/document_detail/2712866.html).
          // 
          // Valid values:
          // 
          // *   patch: the latest patch version.
          // *   stables: the second-latest minor version.
          // *   rapid: the latest minor version.
          shared_ptr<string> channel_ {};
          // Specifies whether to enable auto cluster update.
          shared_ptr<bool> enabled_ {};
        };

        virtual bool empty() const override { return this->clusterAutoUpgrade_ == nullptr; };
        // clusterAutoUpgrade Field Functions 
        bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
        void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
        inline const OperationPolicy::ClusterAutoUpgrade & getClusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, OperationPolicy::ClusterAutoUpgrade) };
        inline OperationPolicy::ClusterAutoUpgrade getClusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, OperationPolicy::ClusterAutoUpgrade) };
        inline OperationPolicy& setClusterAutoUpgrade(const OperationPolicy::ClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
        inline OperationPolicy& setClusterAutoUpgrade(OperationPolicy::ClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


      protected:
        // The configurations of auto cluster update.
        shared_ptr<OperationPolicy::ClusterAutoUpgrade> clusterAutoUpgrade_ {};
      };

      virtual bool empty() const override { return this->clusterDomain_ == nullptr
        && this->clusterId_ == nullptr && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->containerCidr_ == nullptr && this->created_ == nullptr
        && this->currentVersion_ == nullptr && this->deletionProtection_ == nullptr && this->dockerVersion_ == nullptr && this->externalLoadbalancerId_ == nullptr && this->initVersion_ == nullptr
        && this->ipStack_ == nullptr && this->maintenanceWindow_ == nullptr && this->masterUrl_ == nullptr && this->metaData_ == nullptr && this->name_ == nullptr
        && this->networkMode_ == nullptr && this->nextVersion_ == nullptr && this->operationPolicy_ == nullptr && this->privateZone_ == nullptr && this->profile_ == nullptr
        && this->proxyMode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->serviceCidr_ == nullptr
        && this->size_ == nullptr && this->state_ == nullptr && this->subnetCidr_ == nullptr && this->tags_ == nullptr && this->timezone_ == nullptr
        && this->updated_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr && this->vswitchIds_ == nullptr && this->workerRamRoleName_ == nullptr
        && this->zoneId_ == nullptr; };
      // clusterDomain Field Functions 
      bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
      void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
      inline string getClusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
      inline Clusters& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Clusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterSpec Field Functions 
      bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
      void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
      inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
      inline Clusters& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline Clusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // containerCidr Field Functions 
      bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
      void deleteContainerCidr() { this->containerCidr_ = nullptr;};
      inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
      inline Clusters& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Clusters& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // currentVersion Field Functions 
      bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
      void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
      inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
      inline Clusters& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline Clusters& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // dockerVersion Field Functions 
      bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
      void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
      inline string getDockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
      inline Clusters& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


      // externalLoadbalancerId Field Functions 
      bool hasExternalLoadbalancerId() const { return this->externalLoadbalancerId_ != nullptr;};
      void deleteExternalLoadbalancerId() { this->externalLoadbalancerId_ = nullptr;};
      inline string getExternalLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(externalLoadbalancerId_, "") };
      inline Clusters& setExternalLoadbalancerId(string externalLoadbalancerId) { DARABONBA_PTR_SET_VALUE(externalLoadbalancerId_, externalLoadbalancerId) };


      // initVersion Field Functions 
      bool hasInitVersion() const { return this->initVersion_ != nullptr;};
      void deleteInitVersion() { this->initVersion_ = nullptr;};
      inline string getInitVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
      inline Clusters& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


      // ipStack Field Functions 
      bool hasIpStack() const { return this->ipStack_ != nullptr;};
      void deleteIpStack() { this->ipStack_ = nullptr;};
      inline string getIpStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
      inline Clusters& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


      // maintenanceWindow Field Functions 
      bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
      void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
      inline const MaintenanceWindow & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
      inline MaintenanceWindow getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
      inline Clusters& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
      inline Clusters& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


      // masterUrl Field Functions 
      bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
      void deleteMasterUrl() { this->masterUrl_ = nullptr;};
      inline string getMasterUrl() const { DARABONBA_PTR_GET_DEFAULT(masterUrl_, "") };
      inline Clusters& setMasterUrl(string masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
      inline Clusters& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Clusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkMode Field Functions 
      bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
      void deleteNetworkMode() { this->networkMode_ = nullptr;};
      inline string getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
      inline Clusters& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


      // nextVersion Field Functions 
      bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
      void deleteNextVersion() { this->nextVersion_ = nullptr;};
      inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
      inline Clusters& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


      // operationPolicy Field Functions 
      bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
      void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
      inline const Clusters::OperationPolicy & getOperationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, Clusters::OperationPolicy) };
      inline Clusters::OperationPolicy getOperationPolicy() { DARABONBA_PTR_GET(operationPolicy_, Clusters::OperationPolicy) };
      inline Clusters& setOperationPolicy(const Clusters::OperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
      inline Clusters& setOperationPolicy(Clusters::OperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


      // privateZone Field Functions 
      bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
      void deletePrivateZone() { this->privateZone_ = nullptr;};
      inline bool getPrivateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, false) };
      inline Clusters& setPrivateZone(bool privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline Clusters& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


      // proxyMode Field Functions 
      bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
      void deleteProxyMode() { this->proxyMode_ = nullptr;};
      inline string getProxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
      inline Clusters& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Clusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Clusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Clusters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // serviceCidr Field Functions 
      bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
      void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
      inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
      inline Clusters& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Clusters& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Clusters& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // subnetCidr Field Functions 
      bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
      void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
      inline string getSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
      inline Clusters& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
      inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
      inline Clusters& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Clusters& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline Clusters& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
      inline Clusters& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Clusters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Clusters& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // vswitchIds Field Functions 
      bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
      void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
      inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
      inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
      inline Clusters& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
      inline Clusters& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


      // workerRamRoleName Field Functions 
      bool hasWorkerRamRoleName() const { return this->workerRamRoleName_ != nullptr;};
      void deleteWorkerRamRoleName() { this->workerRamRoleName_ = nullptr;};
      inline string getWorkerRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(workerRamRoleName_, "") };
      inline Clusters& setWorkerRamRoleName(string workerRamRoleName) { DARABONBA_PTR_SET_VALUE(workerRamRoleName_, workerRamRoleName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Clusters& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The domain name of the cluster.
      shared_ptr<string> clusterDomain_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The specification of the cluster.
      shared_ptr<string> clusterSpec_ {};
      // The type of the instance.
      shared_ptr<string> clusterType_ {};
      // The pod CIDR block and the configuration of the Flannel network plug-in.
      shared_ptr<string> containerCidr_ {};
      // The time at which the instance is created.
      shared_ptr<string> created_ {};
      // The Kubernetes version of the cluster.
      shared_ptr<string> currentVersion_ {};
      // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. Valid values:
      // 
      // *   `true`: enables deletion protection for the cluster. This way, the cluster cannot be deleted in the ACK console or by calling API operations.
      // *   `false`: disables deletion protection for the cluster. This way, the cluster can be deleted in the ACK console or by calling API operations.
      shared_ptr<bool> deletionProtection_ {};
      // The Docker version that is used by the cluster.
      shared_ptr<string> dockerVersion_ {};
      // The ID of the Server Load Balancer (SLB) instance that is used by the Ingresses of the cluster.
      // 
      // The default SLB specification is slb.s1.small, which belongs to the high-performance instance type.
      shared_ptr<string> externalLoadbalancerId_ {};
      // The version of the cluster. For more information about the Kubernetes versions supported by ACK, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
      shared_ptr<string> initVersion_ {};
      // The IP stack of the cluster. Valid values:
      // 
      // *   ipv4: creates a cluster that supports only the IPv4 protocol stack.
      // *   dual: creates a cluster that supports IPv4/IPv6 dual-stack.
      shared_ptr<string> ipStack_ {};
      // The maintenance window of the cluster. This feature is available only for ACK managed clusters and ACK Serverless clusters.
      shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
      // The address of the cluster API server. It includes an internal endpoint and a public endpoint.
      shared_ptr<string> masterUrl_ {};
      // The metadata of the cluster.
      shared_ptr<string> metaData_ {};
      // The cluster name.
      shared_ptr<string> name_ {};
      // The network mode of the cluster. Valid values:
      // 
      // *   `classic`: classic network.
      // *   `vpc`: virtual private cloud (VPC).
      // *   `overlay`: overlay network.
      // *   `calico`: network powered by Calico.
      shared_ptr<string> networkMode_ {};
      // The Kubernetes version to which the cluster can be updated.
      shared_ptr<string> nextVersion_ {};
      // The automatic O\\&M policy of the cluster.
      shared_ptr<Clusters::OperationPolicy> operationPolicy_ {};
      // Indicates whether Alibaba Cloud DNS PrivateZone is enabled. Valid values:
      // 
      // *   `true`: Alibaba Cloud DNS PrivateZone is enabled.
      // *   `false`: Alibaba Cloud DNS PrivateZone is disabled.
      shared_ptr<bool> privateZone_ {};
      // The subtype of the cluster.
      shared_ptr<string> profile_ {};
      // The kube-proxy mode.
      // 
      // *   `iptables`: a mature and stable mode that uses iptables rules to conduct service discovery and load balancing. The performance of this mode is limited by the size of the cluster. This mode is suitable for clusters that run a small number of Services.
      // *   `ipvs`: provides high performance and uses IP Virtual Server (IPVS). This allows you to configure service discovery and load balancing. This mode is suitable for clusters that are required to run a large number of services. We recommend that you use this mode in scenarios that require high load balancing performance.
      shared_ptr<string> proxyMode_ {};
      // The region ID of the cluster.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the cluster belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security group of the cluster.
      shared_ptr<string> securityGroupId_ {};
      // The Service CIDR block.
      // 
      // This parameter is required.
      shared_ptr<string> serviceCidr_ {};
      // The number of nodes in the cluster, including control planes and worker nodes.
      shared_ptr<int64_t> size_ {};
      // The status of the cluster. Valid values:
      // 
      // *   `initial`: The cluster is being created.
      // *   `failed`: The cluster failed to be created.
      // *   `running`: The cluster is running.
      // *   `upgrading`: The cluster is undergoing an upgrade.
      // *   `updating`: Cluster specification changes are being applied.
      // *   `removing`: Nodes are being removed from the node pool.
      // *   `draining`: Node draining is in progress.
      // *   `scaling`: Auto-scaling operation is in progress for the cluster.
      // *   `stopped`: The cluster has stopped running.
      // *   `deleting`: The cluster is being deleted.
      // *   `deleted`: The cluster has been deleted.
      // *   `delete_failed`: The cluster failed to be deleted.
      shared_ptr<string> state_ {};
      // This parameter is deprecated. Use the container_cidr parameter to obtain the pod CIDR block.
      shared_ptr<string> subnetCidr_ {};
      // The label of the cluster.
      shared_ptr<vector<Tag>> tags_ {};
      // The time zone
      shared_ptr<string> timezone_ {};
      // The time when the cluster was updated.
      shared_ptr<string> updated_ {};
      // The ID of the virtual private cloud (VPC) that is used by the cluster.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch in the cluster.
      shared_ptr<string> vswitchId_ {};
      // The vSwitches of the control planes.
      shared_ptr<vector<string>> vswitchIds_ {};
      // The name of the worker Resource Access Management (RAM) role. The RAM role is assigned to the worker nodes of the cluster to allow the worker nodes to manage ECS instances.
      shared_ptr<string> workerRamRoleName_ {};
      // The ID of the zone where the cluster is deployed.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->clusters_ == nullptr
        && this->pageInfo_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline const vector<DescribeClustersV1ResponseBody::Clusters> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<DescribeClustersV1ResponseBody::Clusters>) };
    inline vector<DescribeClustersV1ResponseBody::Clusters> getClusters() { DARABONBA_PTR_GET(clusters_, vector<DescribeClustersV1ResponseBody::Clusters>) };
    inline DescribeClustersV1ResponseBody& setClusters(const vector<DescribeClustersV1ResponseBody::Clusters> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
    inline DescribeClustersV1ResponseBody& setClusters(vector<DescribeClustersV1ResponseBody::Clusters> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeClustersV1ResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeClustersV1ResponseBody::PageInfo) };
    inline DescribeClustersV1ResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeClustersV1ResponseBody::PageInfo) };
    inline DescribeClustersV1ResponseBody& setPageInfo(const DescribeClustersV1ResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeClustersV1ResponseBody& setPageInfo(DescribeClustersV1ResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The queried cluster details.
    shared_ptr<vector<DescribeClustersV1ResponseBody::Clusters>> clusters_ {};
    // The pagination information.
    shared_ptr<DescribeClustersV1ResponseBody::PageInfo> pageInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
