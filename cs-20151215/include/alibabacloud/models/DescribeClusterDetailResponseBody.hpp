// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstanceMetadataOptions.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <map>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_TO_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_TO_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(current_version, currentVersion_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_TO_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_TO_JSON(init_version, initVersion_);
      DARABONBA_PTR_TO_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(master_url, masterUrl_);
      DARABONBA_PTR_TO_JSON(meta_data, metaData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(network_mode, networkMode_);
      DARABONBA_PTR_TO_JSON(next_version, nextVersion_);
      DARABONBA_PTR_TO_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(private_zone, privateZone_);
      DARABONBA_PTR_TO_JSON(profile, profile_);
      DARABONBA_PTR_TO_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(rrsa_config, rrsaConfig_);
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
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_mode, autoMode_);
      DARABONBA_PTR_FROM_JSON(cluster_domain, clusterDomain_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(cluster_spec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(cluster_type, clusterType_);
      DARABONBA_PTR_FROM_JSON(container_cidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(control_plane_endpoints_config, controlPlaneEndpointsConfig_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(current_version, currentVersion_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(docker_version, dockerVersion_);
      DARABONBA_PTR_FROM_JSON(external_loadbalancer_id, externalLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(extra_sans, extraSans_);
      DARABONBA_PTR_FROM_JSON(init_version, initVersion_);
      DARABONBA_PTR_FROM_JSON(ip_stack, ipStack_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(master_url, masterUrl_);
      DARABONBA_PTR_FROM_JSON(meta_data, metaData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(network_mode, networkMode_);
      DARABONBA_PTR_FROM_JSON(next_version, nextVersion_);
      DARABONBA_PTR_FROM_JSON(node_cidr_mask, nodeCidrMask_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(private_zone, privateZone_);
      DARABONBA_PTR_FROM_JSON(profile, profile_);
      DARABONBA_PTR_FROM_JSON(proxy_mode, proxyMode_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(rrsa_config, rrsaConfig_);
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
    DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody(DescribeClusterDetailResponseBody &&) = default ;
    DescribeClusterDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBody() = default ;
    DescribeClusterDetailResponseBody& operator=(const DescribeClusterDetailResponseBody &) = default ;
    DescribeClusterDetailResponseBody& operator=(DescribeClusterDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RrsaConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RrsaConfig& obj) { 
        DARABONBA_PTR_TO_JSON(audience, audience_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(issuer, issuer_);
        DARABONBA_PTR_TO_JSON(jwks_url, jwksUrl_);
        DARABONBA_PTR_TO_JSON(max_oidc_token_expiration, maxOidcTokenExpiration_);
        DARABONBA_PTR_TO_JSON(oidc_arn, oidcArn_);
        DARABONBA_PTR_TO_JSON(oidc_name, oidcName_);
        DARABONBA_PTR_TO_JSON(open_api_configuration_url, openApiConfigurationUrl_);
      };
      friend void from_json(const Darabonba::Json& j, RrsaConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(audience, audience_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(jwks_url, jwksUrl_);
        DARABONBA_PTR_FROM_JSON(max_oidc_token_expiration, maxOidcTokenExpiration_);
        DARABONBA_PTR_FROM_JSON(oidc_arn, oidcArn_);
        DARABONBA_PTR_FROM_JSON(oidc_name, oidcName_);
        DARABONBA_PTR_FROM_JSON(open_api_configuration_url, openApiConfigurationUrl_);
      };
      RrsaConfig() = default ;
      RrsaConfig(const RrsaConfig &) = default ;
      RrsaConfig(RrsaConfig &&) = default ;
      RrsaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RrsaConfig() = default ;
      RrsaConfig& operator=(const RrsaConfig &) = default ;
      RrsaConfig& operator=(RrsaConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->audience_ == nullptr
        && this->enabled_ == nullptr && this->issuer_ == nullptr && this->jwksUrl_ == nullptr && this->maxOidcTokenExpiration_ == nullptr && this->oidcArn_ == nullptr
        && this->oidcName_ == nullptr && this->openApiConfigurationUrl_ == nullptr; };
      // audience Field Functions 
      bool hasAudience() const { return this->audience_ != nullptr;};
      void deleteAudience() { this->audience_ = nullptr;};
      inline string getAudience() const { DARABONBA_PTR_GET_DEFAULT(audience_, "") };
      inline RrsaConfig& setAudience(string audience) { DARABONBA_PTR_SET_VALUE(audience_, audience) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline RrsaConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline RrsaConfig& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // jwksUrl Field Functions 
      bool hasJwksUrl() const { return this->jwksUrl_ != nullptr;};
      void deleteJwksUrl() { this->jwksUrl_ = nullptr;};
      inline string getJwksUrl() const { DARABONBA_PTR_GET_DEFAULT(jwksUrl_, "") };
      inline RrsaConfig& setJwksUrl(string jwksUrl) { DARABONBA_PTR_SET_VALUE(jwksUrl_, jwksUrl) };


      // maxOidcTokenExpiration Field Functions 
      bool hasMaxOidcTokenExpiration() const { return this->maxOidcTokenExpiration_ != nullptr;};
      void deleteMaxOidcTokenExpiration() { this->maxOidcTokenExpiration_ = nullptr;};
      inline string getMaxOidcTokenExpiration() const { DARABONBA_PTR_GET_DEFAULT(maxOidcTokenExpiration_, "") };
      inline RrsaConfig& setMaxOidcTokenExpiration(string maxOidcTokenExpiration) { DARABONBA_PTR_SET_VALUE(maxOidcTokenExpiration_, maxOidcTokenExpiration) };


      // oidcArn Field Functions 
      bool hasOidcArn() const { return this->oidcArn_ != nullptr;};
      void deleteOidcArn() { this->oidcArn_ = nullptr;};
      inline string getOidcArn() const { DARABONBA_PTR_GET_DEFAULT(oidcArn_, "") };
      inline RrsaConfig& setOidcArn(string oidcArn) { DARABONBA_PTR_SET_VALUE(oidcArn_, oidcArn) };


      // oidcName Field Functions 
      bool hasOidcName() const { return this->oidcName_ != nullptr;};
      void deleteOidcName() { this->oidcName_ = nullptr;};
      inline string getOidcName() const { DARABONBA_PTR_GET_DEFAULT(oidcName_, "") };
      inline RrsaConfig& setOidcName(string oidcName) { DARABONBA_PTR_SET_VALUE(oidcName_, oidcName) };


      // openApiConfigurationUrl Field Functions 
      bool hasOpenApiConfigurationUrl() const { return this->openApiConfigurationUrl_ != nullptr;};
      void deleteOpenApiConfigurationUrl() { this->openApiConfigurationUrl_ = nullptr;};
      inline string getOpenApiConfigurationUrl() const { DARABONBA_PTR_GET_DEFAULT(openApiConfigurationUrl_, "") };
      inline RrsaConfig& setOpenApiConfigurationUrl(string openApiConfigurationUrl) { DARABONBA_PTR_SET_VALUE(openApiConfigurationUrl_, openApiConfigurationUrl) };


    protected:
      // Default audience for the OIDC token. Multiple values are separated by commas (,). These values appear as an array in the aud field of the OIDC token.
      shared_ptr<string> audience_ {};
      // Indicates whether RRSA is enabled.
      shared_ptr<bool> enabled_ {};
      // Issuer of the OIDC token. Multiple values are separated by commas (,). The first value appears in the iss field of the OIDC token and serves as the issuer URL for the OIDC identity provider.
      shared_ptr<string> issuer_ {};
      // URL of the OIDC public key information.
      shared_ptr<string> jwksUrl_ {};
      // Maximum validity period configurable for the OIDC token.
      shared_ptr<string> maxOidcTokenExpiration_ {};
      // ARN of the OIDC identity provider.
      shared_ptr<string> oidcArn_ {};
      // Name of the OIDC identity provider.
      shared_ptr<string> oidcName_ {};
      // URL of the OIDC configuration document.
      shared_ptr<string> openApiConfigurationUrl_ {};
    };

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
        // Frequency of automatic cluster upgrades. For more information, see [Upgrade frequency](https://help.aliyun.com/document_detail/2712866.html).
        // 
        // Valid values:
        // 
        // - patch: Latest patch version.
        // 
        // - stable: Second latest minor version.
        // 
        // - rapid: Latest minor version.
        shared_ptr<string> channel_ {};
        // Indicates whether automatic cluster upgrade is enabled.
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
      // Automatic cluster upgrade settings.
      shared_ptr<OperationPolicy::ClusterAutoUpgrade> clusterAutoUpgrade_ {};
    };

    class ControlPlaneEndpointsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(internal_dns_config, internalDnsConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneEndpointsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(internal_dns_config, internalDnsConfig_);
      };
      ControlPlaneEndpointsConfig() = default ;
      ControlPlaneEndpointsConfig(const ControlPlaneEndpointsConfig &) = default ;
      ControlPlaneEndpointsConfig(ControlPlaneEndpointsConfig &&) = default ;
      ControlPlaneEndpointsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneEndpointsConfig() = default ;
      ControlPlaneEndpointsConfig& operator=(const ControlPlaneEndpointsConfig &) = default ;
      ControlPlaneEndpointsConfig& operator=(ControlPlaneEndpointsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InternalDnsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternalDnsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(bind_vpcs, bindVpcs_);
          DARABONBA_PTR_TO_JSON(enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, InternalDnsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(bind_vpcs, bindVpcs_);
          DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        };
        InternalDnsConfig() = default ;
        InternalDnsConfig(const InternalDnsConfig &) = default ;
        InternalDnsConfig(InternalDnsConfig &&) = default ;
        InternalDnsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InternalDnsConfig() = default ;
        InternalDnsConfig& operator=(const InternalDnsConfig &) = default ;
        InternalDnsConfig& operator=(InternalDnsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindVpcs_ == nullptr
        && this->enabled_ == nullptr; };
        // bindVpcs Field Functions 
        bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
        void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
        inline const vector<string> & getBindVpcs() const { DARABONBA_PTR_GET_CONST(bindVpcs_, vector<string>) };
        inline vector<string> getBindVpcs() { DARABONBA_PTR_GET(bindVpcs_, vector<string>) };
        inline InternalDnsConfig& setBindVpcs(const vector<string> & bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };
        inline InternalDnsConfig& setBindVpcs(vector<string> && bindVpcs) { DARABONBA_PTR_SET_RVALUE(bindVpcs_, bindVpcs) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline InternalDnsConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        // VPCs where the internal domain name resolution takes effect. By default, this includes the VPC where the cluster resides.
        shared_ptr<vector<string>> bindVpcs_ {};
        // Indicates whether internal domain name access is enabled.
        // 
        // - true: Internal domain name access is enabled. Node-side components (kubelet, kube-proxy) access the API server through the internal domain name.
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->internalDnsConfig_ == nullptr; };
      // internalDnsConfig Field Functions 
      bool hasInternalDnsConfig() const { return this->internalDnsConfig_ != nullptr;};
      void deleteInternalDnsConfig() { this->internalDnsConfig_ = nullptr;};
      inline const ControlPlaneEndpointsConfig::InternalDnsConfig & getInternalDnsConfig() const { DARABONBA_PTR_GET_CONST(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig::InternalDnsConfig getInternalDnsConfig() { DARABONBA_PTR_GET(internalDnsConfig_, ControlPlaneEndpointsConfig::InternalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(const ControlPlaneEndpointsConfig::InternalDnsConfig & internalDnsConfig) { DARABONBA_PTR_SET_VALUE(internalDnsConfig_, internalDnsConfig) };
      inline ControlPlaneEndpointsConfig& setInternalDnsConfig(ControlPlaneEndpointsConfig::InternalDnsConfig && internalDnsConfig) { DARABONBA_PTR_SET_RVALUE(internalDnsConfig_, internalDnsConfig) };


    protected:
      // Internal domain name configuration for the cluster, applicable to ACK managed clusters. The internal domain name allows node-side system components such as kubelet and kube-proxy to access the API server. If internal domain name access is disabled, these components access the API server through the CLB IP address.
      shared_ptr<ControlPlaneEndpointsConfig::InternalDnsConfig> internalDnsConfig_ {};
    };

    class ControlPlaneConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPlaneConfig& obj) { 
        DARABONBA_PTR_TO_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_TO_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(charge_type, chargeType_);
        DARABONBA_PTR_TO_JSON(cloud_monitor_flags, cloudMonitorFlags_);
        DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_TO_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_TO_JSON(image_id, imageId_);
        DARABONBA_PTR_TO_JSON(image_type, imageType_);
        DARABONBA_PTR_TO_JSON(instance_metadata_options, instanceMetadataOptions_);
        DARABONBA_PTR_TO_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_TO_JSON(key_pair, keyPair_);
        DARABONBA_PTR_TO_JSON(node_port_range, nodePortRange_);
        DARABONBA_PTR_TO_JSON(period, period_);
        DARABONBA_PTR_TO_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_TO_JSON(runtime, runtime_);
        DARABONBA_PTR_TO_JSON(security_hardening_os, securityHardeningOs_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(soc_enabled, socEnabled_);
        DARABONBA_PTR_TO_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_TO_JSON(system_disk_category, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
        DARABONBA_PTR_TO_JSON(system_disk_size, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPlaneConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(auto_renew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(auto_renew_period, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(charge_type, chargeType_);
        DARABONBA_PTR_FROM_JSON(cloud_monitor_flags, cloudMonitorFlags_);
        DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
        DARABONBA_PTR_FROM_JSON(deploymentset_id, deploymentsetId_);
        DARABONBA_PTR_FROM_JSON(image_id, imageId_);
        DARABONBA_PTR_FROM_JSON(image_type, imageType_);
        DARABONBA_PTR_FROM_JSON(instance_metadata_options, instanceMetadataOptions_);
        DARABONBA_PTR_FROM_JSON(instance_types, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(key_pair, keyPair_);
        DARABONBA_PTR_FROM_JSON(node_port_range, nodePortRange_);
        DARABONBA_PTR_FROM_JSON(period, period_);
        DARABONBA_PTR_FROM_JSON(period_unit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(runtime, runtime_);
        DARABONBA_PTR_FROM_JSON(security_hardening_os, securityHardeningOs_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(soc_enabled, socEnabled_);
        DARABONBA_PTR_FROM_JSON(system_disk_bursting_enabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_FROM_JSON(system_disk_category, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(system_disk_performance_level, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(system_disk_provisioned_iops, systemDiskProvisionedIops_);
        DARABONBA_PTR_FROM_JSON(system_disk_size, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(system_disk_snapshot_policy_id, systemDiskSnapshotPolicyId_);
      };
      ControlPlaneConfig() = default ;
      ControlPlaneConfig(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig(ControlPlaneConfig &&) = default ;
      ControlPlaneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPlaneConfig() = default ;
      ControlPlaneConfig& operator=(const ControlPlaneConfig &) = default ;
      ControlPlaneConfig& operator=(ControlPlaneConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->chargeType_ == nullptr && this->cloudMonitorFlags_ == nullptr && this->cpuPolicy_ == nullptr && this->deploymentsetId_ == nullptr
        && this->imageId_ == nullptr && this->imageType_ == nullptr && this->instanceMetadataOptions_ == nullptr && this->instanceTypes_ == nullptr && this->keyPair_ == nullptr
        && this->nodePortRange_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->runtime_ == nullptr && this->securityHardeningOs_ == nullptr
        && this->size_ == nullptr && this->socEnabled_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr
        && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->systemDiskSnapshotPolicyId_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline ControlPlaneConfig& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
      inline ControlPlaneConfig& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline ControlPlaneConfig& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // cloudMonitorFlags Field Functions 
      bool hasCloudMonitorFlags() const { return this->cloudMonitorFlags_ != nullptr;};
      void deleteCloudMonitorFlags() { this->cloudMonitorFlags_ = nullptr;};
      inline bool getCloudMonitorFlags() const { DARABONBA_PTR_GET_DEFAULT(cloudMonitorFlags_, false) };
      inline ControlPlaneConfig& setCloudMonitorFlags(bool cloudMonitorFlags) { DARABONBA_PTR_SET_VALUE(cloudMonitorFlags_, cloudMonitorFlags) };


      // cpuPolicy Field Functions 
      bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
      void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
      inline string getCpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
      inline ControlPlaneConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


      // deploymentsetId Field Functions 
      bool hasDeploymentsetId() const { return this->deploymentsetId_ != nullptr;};
      void deleteDeploymentsetId() { this->deploymentsetId_ = nullptr;};
      inline string getDeploymentsetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentsetId_, "") };
      inline ControlPlaneConfig& setDeploymentsetId(string deploymentsetId) { DARABONBA_PTR_SET_VALUE(deploymentsetId_, deploymentsetId) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ControlPlaneConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline ControlPlaneConfig& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // instanceMetadataOptions Field Functions 
      bool hasInstanceMetadataOptions() const { return this->instanceMetadataOptions_ != nullptr;};
      void deleteInstanceMetadataOptions() { this->instanceMetadataOptions_ = nullptr;};
      inline const InstanceMetadataOptions & getInstanceMetadataOptions() const { DARABONBA_PTR_GET_CONST(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline InstanceMetadataOptions getInstanceMetadataOptions() { DARABONBA_PTR_GET(instanceMetadataOptions_, InstanceMetadataOptions) };
      inline ControlPlaneConfig& setInstanceMetadataOptions(const InstanceMetadataOptions & instanceMetadataOptions) { DARABONBA_PTR_SET_VALUE(instanceMetadataOptions_, instanceMetadataOptions) };
      inline ControlPlaneConfig& setInstanceMetadataOptions(InstanceMetadataOptions && instanceMetadataOptions) { DARABONBA_PTR_SET_RVALUE(instanceMetadataOptions_, instanceMetadataOptions) };


      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
      inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
      inline ControlPlaneConfig& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline ControlPlaneConfig& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // keyPair Field Functions 
      bool hasKeyPair() const { return this->keyPair_ != nullptr;};
      void deleteKeyPair() { this->keyPair_ = nullptr;};
      inline string getKeyPair() const { DARABONBA_PTR_GET_DEFAULT(keyPair_, "") };
      inline ControlPlaneConfig& setKeyPair(string keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };


      // nodePortRange Field Functions 
      bool hasNodePortRange() const { return this->nodePortRange_ != nullptr;};
      void deleteNodePortRange() { this->nodePortRange_ = nullptr;};
      inline string getNodePortRange() const { DARABONBA_PTR_GET_DEFAULT(nodePortRange_, "") };
      inline ControlPlaneConfig& setNodePortRange(string nodePortRange) { DARABONBA_PTR_SET_VALUE(nodePortRange_, nodePortRange) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline ControlPlaneConfig& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline ControlPlaneConfig& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // runtime Field Functions 
      bool hasRuntime() const { return this->runtime_ != nullptr;};
      void deleteRuntime() { this->runtime_ = nullptr;};
      inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
      inline ControlPlaneConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


      // securityHardeningOs Field Functions 
      bool hasSecurityHardeningOs() const { return this->securityHardeningOs_ != nullptr;};
      void deleteSecurityHardeningOs() { this->securityHardeningOs_ = nullptr;};
      inline bool getSecurityHardeningOs() const { DARABONBA_PTR_GET_DEFAULT(securityHardeningOs_, false) };
      inline ControlPlaneConfig& setSecurityHardeningOs(bool securityHardeningOs) { DARABONBA_PTR_SET_VALUE(securityHardeningOs_, securityHardeningOs) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline ControlPlaneConfig& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // socEnabled Field Functions 
      bool hasSocEnabled() const { return this->socEnabled_ != nullptr;};
      void deleteSocEnabled() { this->socEnabled_ = nullptr;};
      inline bool getSocEnabled() const { DARABONBA_PTR_GET_DEFAULT(socEnabled_, false) };
      inline ControlPlaneConfig& setSocEnabled(bool socEnabled) { DARABONBA_PTR_SET_VALUE(socEnabled_, socEnabled) };


      // systemDiskBurstingEnabled Field Functions 
      bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
      void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
      inline bool getSystemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
      inline ControlPlaneConfig& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline ControlPlaneConfig& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline ControlPlaneConfig& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskProvisionedIops Field Functions 
      bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
      void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
      inline int64_t getSystemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
      inline ControlPlaneConfig& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int64_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0L) };
      inline ControlPlaneConfig& setSystemDiskSize(int64_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // systemDiskSnapshotPolicyId Field Functions 
      bool hasSystemDiskSnapshotPolicyId() const { return this->systemDiskSnapshotPolicyId_ != nullptr;};
      void deleteSystemDiskSnapshotPolicyId() { this->systemDiskSnapshotPolicyId_ = nullptr;};
      inline string getSystemDiskSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSnapshotPolicyId_, "") };
      inline ControlPlaneConfig& setSystemDiskSnapshotPolicyId(string systemDiskSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskSnapshotPolicyId_, systemDiskSnapshotPolicyId) };


    protected:
      // Indicates whether auto-renewal is enabled for nodes.
      shared_ptr<bool> autoRenew_ {};
      // Auto-renewal duration for nodes.
      shared_ptr<int64_t> autoRenewPeriod_ {};
      // Billing method for control plane nodes.
      shared_ptr<string> chargeType_ {};
      // Indicates whether Cloud Monitor is installed on nodes.
      shared_ptr<bool> cloudMonitorFlags_ {};
      // CPU management policy for nodes.
      shared_ptr<string> cpuPolicy_ {};
      // Deployment set ID.
      shared_ptr<string> deploymentsetId_ {};
      // Image ID.
      shared_ptr<string> imageId_ {};
      // Operating system image type.
      shared_ptr<string> imageType_ {};
      // Metadata access configuration for ECS instances.
      shared_ptr<InstanceMetadataOptions> instanceMetadataOptions_ {};
      // Instance types for control plane nodes.
      shared_ptr<vector<string>> instanceTypes_ {};
      // Key pair name. Specify either this parameter or login_password.
      shared_ptr<string> keyPair_ {};
      // Port range for node services.
      shared_ptr<string> nodePortRange_ {};
      // Subscription duration for nodes.
      shared_ptr<int64_t> period_ {};
      // Time unit for node subscription.
      shared_ptr<string> periodUnit_ {};
      // Runtime name.
      shared_ptr<string> runtime_ {};
      // Indicates whether Alibaba Cloud OS security hardening is enabled.
      shared_ptr<bool> securityHardeningOs_ {};
      // Number of control plane nodes.
      shared_ptr<int64_t> size_ {};
      // Indicates whether security hardening for compliance is enabled.
      shared_ptr<bool> socEnabled_ {};
      // Indicates whether burst performance is enabled for node system disks.
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // System disk category for nodes.
      shared_ptr<string> systemDiskCategory_ {};
      // Disk performance level for node system disks. Applies only to ESSD disks.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // Provisioned IOPS for node system disks.
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // System disk size for nodes, in GB. Minimum value: 40.
      shared_ptr<int64_t> systemDiskSize_ {};
      // Automatic snapshot backup policy for node system disks.
      shared_ptr<string> systemDiskSnapshotPolicyId_ {};
    };

    class AutoMode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoMode& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, AutoMode& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
      };
      AutoMode() = default ;
      AutoMode(const AutoMode &) = default ;
      AutoMode(AutoMode &&) = default ;
      AutoMode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoMode() = default ;
      AutoMode& operator=(const AutoMode &) = default ;
      AutoMode& operator=(AutoMode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoMode& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // Indicates whether smart managed mode is enabled.
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->autoMode_ == nullptr
        && this->clusterDomain_ == nullptr && this->clusterId_ == nullptr && this->clusterSpec_ == nullptr && this->clusterType_ == nullptr && this->containerCidr_ == nullptr
        && this->controlPlaneConfig_ == nullptr && this->controlPlaneEndpointsConfig_ == nullptr && this->created_ == nullptr && this->currentVersion_ == nullptr && this->deletionProtection_ == nullptr
        && this->dockerVersion_ == nullptr && this->externalLoadbalancerId_ == nullptr && this->extraSans_ == nullptr && this->initVersion_ == nullptr && this->ipStack_ == nullptr
        && this->maintenanceWindow_ == nullptr && this->masterUrl_ == nullptr && this->metaData_ == nullptr && this->name_ == nullptr && this->networkMode_ == nullptr
        && this->nextVersion_ == nullptr && this->nodeCidrMask_ == nullptr && this->operationPolicy_ == nullptr && this->parameters_ == nullptr && this->privateZone_ == nullptr
        && this->profile_ == nullptr && this->proxyMode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->rrsaConfig_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceCidr_ == nullptr && this->size_ == nullptr && this->state_ == nullptr && this->subnetCidr_ == nullptr
        && this->tags_ == nullptr && this->timezone_ == nullptr && this->updated_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr
        && this->vswitchIds_ == nullptr && this->workerRamRoleName_ == nullptr && this->zoneId_ == nullptr; };
    // autoMode Field Functions 
    bool hasAutoMode() const { return this->autoMode_ != nullptr;};
    void deleteAutoMode() { this->autoMode_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::AutoMode & getAutoMode() const { DARABONBA_PTR_GET_CONST(autoMode_, DescribeClusterDetailResponseBody::AutoMode) };
    inline DescribeClusterDetailResponseBody::AutoMode getAutoMode() { DARABONBA_PTR_GET(autoMode_, DescribeClusterDetailResponseBody::AutoMode) };
    inline DescribeClusterDetailResponseBody& setAutoMode(const DescribeClusterDetailResponseBody::AutoMode & autoMode) { DARABONBA_PTR_SET_VALUE(autoMode_, autoMode) };
    inline DescribeClusterDetailResponseBody& setAutoMode(DescribeClusterDetailResponseBody::AutoMode && autoMode) { DARABONBA_PTR_SET_RVALUE(autoMode_, autoMode) };


    // clusterDomain Field Functions 
    bool hasClusterDomain() const { return this->clusterDomain_ != nullptr;};
    void deleteClusterDomain() { this->clusterDomain_ = nullptr;};
    inline string getClusterDomain() const { DARABONBA_PTR_GET_DEFAULT(clusterDomain_, "") };
    inline DescribeClusterDetailResponseBody& setClusterDomain(string clusterDomain) { DARABONBA_PTR_SET_VALUE(clusterDomain_, clusterDomain) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClusterDetailResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string getClusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline DescribeClusterDetailResponseBody& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeClusterDetailResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline DescribeClusterDetailResponseBody& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::ControlPlaneConfig & getControlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, DescribeClusterDetailResponseBody::ControlPlaneConfig) };
    inline DescribeClusterDetailResponseBody::ControlPlaneConfig getControlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, DescribeClusterDetailResponseBody::ControlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(const DescribeClusterDetailResponseBody::ControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneConfig(DescribeClusterDetailResponseBody::ControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // controlPlaneEndpointsConfig Field Functions 
    bool hasControlPlaneEndpointsConfig() const { return this->controlPlaneEndpointsConfig_ != nullptr;};
    void deleteControlPlaneEndpointsConfig() { this->controlPlaneEndpointsConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig & getControlPlaneEndpointsConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneEndpointsConfig_, DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig) };
    inline DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig getControlPlaneEndpointsConfig() { DARABONBA_PTR_GET(controlPlaneEndpointsConfig_, DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneEndpointsConfig(const DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig & controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };
    inline DescribeClusterDetailResponseBody& setControlPlaneEndpointsConfig(DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig && controlPlaneEndpointsConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneEndpointsConfig_, controlPlaneEndpointsConfig) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeClusterDetailResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeClusterDetailResponseBody& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline DescribeClusterDetailResponseBody& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // dockerVersion Field Functions 
    bool hasDockerVersion() const { return this->dockerVersion_ != nullptr;};
    void deleteDockerVersion() { this->dockerVersion_ = nullptr;};
    inline string getDockerVersion() const { DARABONBA_PTR_GET_DEFAULT(dockerVersion_, "") };
    inline DescribeClusterDetailResponseBody& setDockerVersion(string dockerVersion) { DARABONBA_PTR_SET_VALUE(dockerVersion_, dockerVersion) };


    // externalLoadbalancerId Field Functions 
    bool hasExternalLoadbalancerId() const { return this->externalLoadbalancerId_ != nullptr;};
    void deleteExternalLoadbalancerId() { this->externalLoadbalancerId_ = nullptr;};
    inline string getExternalLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(externalLoadbalancerId_, "") };
    inline DescribeClusterDetailResponseBody& setExternalLoadbalancerId(string externalLoadbalancerId) { DARABONBA_PTR_SET_VALUE(externalLoadbalancerId_, externalLoadbalancerId) };


    // extraSans Field Functions 
    bool hasExtraSans() const { return this->extraSans_ != nullptr;};
    void deleteExtraSans() { this->extraSans_ = nullptr;};
    inline const vector<string> & getExtraSans() const { DARABONBA_PTR_GET_CONST(extraSans_, vector<string>) };
    inline vector<string> getExtraSans() { DARABONBA_PTR_GET(extraSans_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setExtraSans(const vector<string> & extraSans) { DARABONBA_PTR_SET_VALUE(extraSans_, extraSans) };
    inline DescribeClusterDetailResponseBody& setExtraSans(vector<string> && extraSans) { DARABONBA_PTR_SET_RVALUE(extraSans_, extraSans) };


    // initVersion Field Functions 
    bool hasInitVersion() const { return this->initVersion_ != nullptr;};
    void deleteInitVersion() { this->initVersion_ = nullptr;};
    inline string getInitVersion() const { DARABONBA_PTR_GET_DEFAULT(initVersion_, "") };
    inline DescribeClusterDetailResponseBody& setInitVersion(string initVersion) { DARABONBA_PTR_SET_VALUE(initVersion_, initVersion) };


    // ipStack Field Functions 
    bool hasIpStack() const { return this->ipStack_ != nullptr;};
    void deleteIpStack() { this->ipStack_ = nullptr;};
    inline string getIpStack() const { DARABONBA_PTR_GET_DEFAULT(ipStack_, "") };
    inline DescribeClusterDetailResponseBody& setIpStack(string ipStack) { DARABONBA_PTR_SET_VALUE(ipStack_, ipStack) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & getMaintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow getMaintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline DescribeClusterDetailResponseBody& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline DescribeClusterDetailResponseBody& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // masterUrl Field Functions 
    bool hasMasterUrl() const { return this->masterUrl_ != nullptr;};
    void deleteMasterUrl() { this->masterUrl_ = nullptr;};
    inline string getMasterUrl() const { DARABONBA_PTR_GET_DEFAULT(masterUrl_, "") };
    inline DescribeClusterDetailResponseBody& setMasterUrl(string masterUrl) { DARABONBA_PTR_SET_VALUE(masterUrl_, masterUrl) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline DescribeClusterDetailResponseBody& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterDetailResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string getNetworkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline DescribeClusterDetailResponseBody& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // nextVersion Field Functions 
    bool hasNextVersion() const { return this->nextVersion_ != nullptr;};
    void deleteNextVersion() { this->nextVersion_ = nullptr;};
    inline string getNextVersion() const { DARABONBA_PTR_GET_DEFAULT(nextVersion_, "") };
    inline DescribeClusterDetailResponseBody& setNextVersion(string nextVersion) { DARABONBA_PTR_SET_VALUE(nextVersion_, nextVersion) };


    // nodeCidrMask Field Functions 
    bool hasNodeCidrMask() const { return this->nodeCidrMask_ != nullptr;};
    void deleteNodeCidrMask() { this->nodeCidrMask_ = nullptr;};
    inline string getNodeCidrMask() const { DARABONBA_PTR_GET_DEFAULT(nodeCidrMask_, "") };
    inline DescribeClusterDetailResponseBody& setNodeCidrMask(string nodeCidrMask) { DARABONBA_PTR_SET_VALUE(nodeCidrMask_, nodeCidrMask) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::OperationPolicy & getOperationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, DescribeClusterDetailResponseBody::OperationPolicy) };
    inline DescribeClusterDetailResponseBody::OperationPolicy getOperationPolicy() { DARABONBA_PTR_GET(operationPolicy_, DescribeClusterDetailResponseBody::OperationPolicy) };
    inline DescribeClusterDetailResponseBody& setOperationPolicy(const DescribeClusterDetailResponseBody::OperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline DescribeClusterDetailResponseBody& setOperationPolicy(DescribeClusterDetailResponseBody::OperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline DescribeClusterDetailResponseBody& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeClusterDetailResponseBody& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // privateZone Field Functions 
    bool hasPrivateZone() const { return this->privateZone_ != nullptr;};
    void deletePrivateZone() { this->privateZone_ = nullptr;};
    inline bool getPrivateZone() const { DARABONBA_PTR_GET_DEFAULT(privateZone_, false) };
    inline DescribeClusterDetailResponseBody& setPrivateZone(bool privateZone) { DARABONBA_PTR_SET_VALUE(privateZone_, privateZone) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeClusterDetailResponseBody& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // proxyMode Field Functions 
    bool hasProxyMode() const { return this->proxyMode_ != nullptr;};
    void deleteProxyMode() { this->proxyMode_ = nullptr;};
    inline string getProxyMode() const { DARABONBA_PTR_GET_DEFAULT(proxyMode_, "") };
    inline DescribeClusterDetailResponseBody& setProxyMode(string proxyMode) { DARABONBA_PTR_SET_VALUE(proxyMode_, proxyMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClusterDetailResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClusterDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // rrsaConfig Field Functions 
    bool hasRrsaConfig() const { return this->rrsaConfig_ != nullptr;};
    void deleteRrsaConfig() { this->rrsaConfig_ = nullptr;};
    inline const DescribeClusterDetailResponseBody::RrsaConfig & getRrsaConfig() const { DARABONBA_PTR_GET_CONST(rrsaConfig_, DescribeClusterDetailResponseBody::RrsaConfig) };
    inline DescribeClusterDetailResponseBody::RrsaConfig getRrsaConfig() { DARABONBA_PTR_GET(rrsaConfig_, DescribeClusterDetailResponseBody::RrsaConfig) };
    inline DescribeClusterDetailResponseBody& setRrsaConfig(const DescribeClusterDetailResponseBody::RrsaConfig & rrsaConfig) { DARABONBA_PTR_SET_VALUE(rrsaConfig_, rrsaConfig) };
    inline DescribeClusterDetailResponseBody& setRrsaConfig(DescribeClusterDetailResponseBody::RrsaConfig && rrsaConfig) { DARABONBA_PTR_SET_RVALUE(rrsaConfig_, rrsaConfig) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeClusterDetailResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline DescribeClusterDetailResponseBody& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeClusterDetailResponseBody& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterDetailResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subnetCidr Field Functions 
    bool hasSubnetCidr() const { return this->subnetCidr_ != nullptr;};
    void deleteSubnetCidr() { this->subnetCidr_ = nullptr;};
    inline string getSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(subnetCidr_, "") };
    inline DescribeClusterDetailResponseBody& setSubnetCidr(string subnetCidr) { DARABONBA_PTR_SET_VALUE(subnetCidr_, subnetCidr) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline DescribeClusterDetailResponseBody& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeClusterDetailResponseBody& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline DescribeClusterDetailResponseBody& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeClusterDetailResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeClusterDetailResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeClusterDetailResponseBody& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & getVswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> getVswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline DescribeClusterDetailResponseBody& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


    // workerRamRoleName Field Functions 
    bool hasWorkerRamRoleName() const { return this->workerRamRoleName_ != nullptr;};
    void deleteWorkerRamRoleName() { this->workerRamRoleName_ = nullptr;};
    inline string getWorkerRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(workerRamRoleName_, "") };
    inline DescribeClusterDetailResponseBody& setWorkerRamRoleName(string workerRamRoleName) { DARABONBA_PTR_SET_VALUE(workerRamRoleName_, workerRamRoleName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeClusterDetailResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Smart managed mode configuration.
    shared_ptr<DescribeClusterDetailResponseBody::AutoMode> autoMode_ {};
    // Local domain name of the cluster.
    shared_ptr<string> clusterDomain_ {};
    // Cluster ID.
    shared_ptr<string> clusterId_ {};
    // Cluster specification when `cluster_type` is set to `ManagedKubernetes` and `profile` is configured. Valid values:
    // 
    // - `ack.standard`: Basic Edition (default if left empty)
    // 
    // - `ack.pro.small`: Pro Edition
    // 
    // - `ack.pro.xlarge`: Pro XL
    // 
    // - `ack.pro.2xlarge`: Pro 2XL
    // 
    // - `ack.pro.4xlarge`: Pro 4XL (requires whitelist approval from customer service)
    // 
    // Pro XL, Pro 2XL, and Pro 4XL are three tiers offered by <props="china">[ACK Pro Provisioned Control Plane](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane)<props="intl">[ACK Pro Provisioned Control Plane](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/user-guide/ack-pro-provisioned-control-plane). These tiers pre-allocate and dedicate control plane resources to ensure consistent high performance for API concurrency and pod scheduling, making them suitable for AI training and inference, large-scale clusters, and mission-critical workloads.
    // 
    // For cluster management fees of Pro Edition and provisioned control plane clusters, see <props="china">[Cluster management fees](https://help.aliyun.com/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee)<props="intl">[Cluster management fees](https://www.alibabacloud.com/help/ack/ack-managed-and-ack-dedicated/product-overview/cluster-management-fee).
    shared_ptr<string> clusterSpec_ {};
    // Cluster type.
    // 
    // - `Kubernetes`: ACK dedicated cluster.
    // 
    // - `ManagedKubernetes`: ACK managed clusters, including ACK Pro Edition and Basic Edition clusters, ACK Serverless clusters (Pro and Basic), ACK Edge clusters (Pro and Basic), and ACK LINGJUN clusters (Pro).
    // 
    // - `ExternalKubernetes`: registered cluster.
    shared_ptr<string> clusterType_ {};
    // CIDR block for pod networks, used with Flannel.
    shared_ptr<string> containerCidr_ {};
    // Control plane configuration for dedicated clusters.
    shared_ptr<DescribeClusterDetailResponseBody::ControlPlaneConfig> controlPlaneConfig_ {};
    // Cluster connection configuration.
    shared_ptr<DescribeClusterDetailResponseBody::ControlPlaneEndpointsConfig> controlPlaneEndpointsConfig_ {};
    // Time when the cluster was created.
    shared_ptr<string> created_ {};
    // Current Kubernetes version of the cluster. For supported Kubernetes versions in ACK, see [Overview of Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    shared_ptr<string> currentVersion_ {};
    // Deletion protection for the cluster prevents accidental deletion through the console or API. Valid values:
    // 
    // - `true`: Deletion protection is enabled. You cannot delete the cluster through the console or API.
    // 
    // - `false`: Deletion protection is disabled. You can delete the cluster through the console or API.
    shared_ptr<bool> deletionProtection_ {};
    // Docker version used in the cluster.
    shared_ptr<string> dockerVersion_ {};
    // ID of the Server Load Balancer instance used for the cluster Ingress.
    shared_ptr<string> externalLoadbalancerId_ {};
    // Custom Subject Alternative Names (SANs) for the API server certificate.
    shared_ptr<vector<string>> extraSans_ {};
    // Initial Kubernetes version of the cluster.
    shared_ptr<string> initVersion_ {};
    // IP protocol stack of the cluster. Valid values:
    // 
    // - ipv4: Creates a cluster that supports IPv4 only.
    // 
    // - dual: Creates a cluster that supports both IPv4 and IPv6.
    shared_ptr<string> ipStack_ {};
    // Maintenance window configuration for the cluster. This setting applies only to managed clusters (ACK Pro clusters).
    shared_ptr<MaintenanceWindow> maintenanceWindow_ {};
    // Cluster endpoint, including internal and public endpoints.
    shared_ptr<string> masterUrl_ {};
    // Metadata of the cluster.
    shared_ptr<string> metaData_ {};
    // Cluster name.
    shared_ptr<string> name_ {};
    // Network type used by the cluster, such as VPC.
    shared_ptr<string> networkMode_ {};
    // Next available Kubernetes version for upgrade.
    shared_ptr<string> nextVersion_ {};
    // Applies only to Flannel network plugin.
    // 
    // Subnet mask size allocated to each node, which controls the number of IP addresses assignable to the node.
    shared_ptr<string> nodeCidrMask_ {};
    // Automatic O\\&M policy for the cluster.
    shared_ptr<DescribeClusterDetailResponseBody::OperationPolicy> operationPolicy_ {};
    // Collection of ROS parameters for the cluster.
    shared_ptr<map<string, string>> parameters_ {};
    // Indicates whether PrivateZone is enabled for the cluster.
    // 
    // - `true`: Enabled.
    // 
    // - `false`: Disabled.
    // 
    // Default value: false.
    shared_ptr<bool> privateZone_ {};
    // Cluster subtype.
    // 
    // - `Default`: ACK managed cluster, including ACK Pro Edition and Basic Edition.
    // 
    // - `Edge`: ACK Edge cluster, including ACK Edge Pro Edition and Basic Edition.
    // 
    // - `Serverless`: ACK Serverless cluster, including ACK Serverless Pro Edition and Basic Edition.
    // 
    // - `Lingjun`: ACK LINGJUN cluster, available in Pro Edition.
    shared_ptr<string> profile_ {};
    // kube-proxy proxy mode.
    // 
    // - `iptables`: A mature and stable kube-proxy mode that uses iptables rules for Kubernetes service discovery and load balancing. Performance is moderate and degrades at scale. Suitable for clusters with a small number of services.
    // 
    // - `ipvs`: A high-performance kube-proxy mode that uses the Linux IPVS module for Kubernetes service discovery and load balancing. Suitable for clusters with many services and high load balancing demands.
    shared_ptr<string> proxyMode_ {};
    // Region ID where the cluster is deployed.
    shared_ptr<string> regionId_ {};
    // Resource group ID of the cluster.
    shared_ptr<string> resourceGroupId_ {};
    // RRSA configuration.
    shared_ptr<DescribeClusterDetailResponseBody::RrsaConfig> rrsaConfig_ {};
    // Security group ID of the cluster.
    shared_ptr<string> securityGroupId_ {};
    // CIDR block for service networks.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCidr_ {};
    // Total number of nodes in the cluster, including master and worker nodes.
    shared_ptr<int64_t> size_ {};
    // Cluster status. Valid values:
    // 
    // - `initial`: The cluster is being created.
    // 
    // - `failed`: Cluster creation failed.
    // 
    // - `running`: The cluster is running.
    // 
    // - `updating`: The cluster is being updated.
    // 
    // - `upgrading`: The cluster is being upgraded.
    // 
    // - `removing`: Nodes are being removed.
    // 
    // - `draining`: Nodes are being drained.
    // 
    // - `scaling`: The cluster is scaling.
    // 
    // - `inactive`: The cluster is inactive.
    // 
    // - `unavailable`: The cluster is unavailable.
    // 
    // - `deleting`: The cluster is being deleted.
    // 
    // - `deleted`: The cluster has been deleted.
    // 
    // - `delete_failed`: Cluster deletion failed.
    // 
    // - `waiting`: Waiting for access.
    // 
    // - `disconnected`: Disconnected.
    shared_ptr<string> state_ {};
    // CIDR block for pod networks.
    shared_ptr<string> subnetCidr_ {};
    // Tags associated with the cluster.
    shared_ptr<vector<Tag>> tags_ {};
    // Time zone.
    shared_ptr<string> timezone_ {};
    // Last time the cluster was updated.
    shared_ptr<string> updated_ {};
    // VPC ID of the cluster. This parameter is required when creating a cluster.
    shared_ptr<string> vpcId_ {};
    // vSwitch ID. This field is deprecated. Use vswitch_ids to query control plane vSwitches and node pool vswitch_ids to query data plane vSwitches.
    shared_ptr<string> vswitchId_ {};
    // vSwitches for the cluster control plane.
    shared_ptr<vector<string>> vswitchIds_ {};
    // Name of the RAM role assigned to ECS instances acting as worker nodes in the cluster.
    shared_ptr<string> workerRamRoleName_ {};
    // Zone ID within the region where the cluster is deployed.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
