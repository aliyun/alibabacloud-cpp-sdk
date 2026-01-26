// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnvironmentResponseBody() = default ;
    DescribeEnvironmentResponseBody(const DescribeEnvironmentResponseBody &) = default ;
    DescribeEnvironmentResponseBody(DescribeEnvironmentResponseBody &&) = default ;
    DescribeEnvironmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentResponseBody() = default ;
    DescribeEnvironmentResponseBody& operator=(const DescribeEnvironmentResponseBody &) = default ;
    DescribeEnvironmentResponseBody& operator=(DescribeEnvironmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
        DARABONBA_PTR_TO_JSON(BindResourceProfile, bindResourceProfile_);
        DARABONBA_PTR_TO_JSON(BindResourceStatus, bindResourceStatus_);
        DARABONBA_PTR_TO_JSON(BindResourceStoreDuration, bindResourceStoreDuration_);
        DARABONBA_PTR_TO_JSON(BindResourceType, bindResourceType_);
        DARABONBA_PTR_TO_JSON(BindVpcCidr, bindVpcCidr_);
        DARABONBA_PTR_TO_JSON(DbInstanceStatus, dbInstanceStatus_);
        DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
        DARABONBA_PTR_TO_JSON(EnvironmentSubType, environmentSubType_);
        DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
        DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
        DARABONBA_PTR_TO_JSON(GrafaDataSourceName, grafaDataSourceName_);
        DARABONBA_PTR_TO_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
        DARABONBA_PTR_TO_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
        DARABONBA_PTR_TO_JSON(GrafanaFolderUid, grafanaFolderUid_);
        DARABONBA_PTR_TO_JSON(GrafanaFolderUrl, grafanaFolderUrl_);
        DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
        DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
        DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_TO_JSON(PrometheusInstanceName, prometheusInstanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
        DARABONBA_PTR_FROM_JSON(BindResourceProfile, bindResourceProfile_);
        DARABONBA_PTR_FROM_JSON(BindResourceStatus, bindResourceStatus_);
        DARABONBA_PTR_FROM_JSON(BindResourceStoreDuration, bindResourceStoreDuration_);
        DARABONBA_PTR_FROM_JSON(BindResourceType, bindResourceType_);
        DARABONBA_PTR_FROM_JSON(BindVpcCidr, bindVpcCidr_);
        DARABONBA_PTR_FROM_JSON(DbInstanceStatus, dbInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
        DARABONBA_PTR_FROM_JSON(EnvironmentSubType, environmentSubType_);
        DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
        DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
        DARABONBA_PTR_FROM_JSON(GrafaDataSourceName, grafaDataSourceName_);
        DARABONBA_PTR_FROM_JSON(GrafanaDatasourceUid, grafanaDatasourceUid_);
        DARABONBA_PTR_FROM_JSON(GrafanaFolderTitle, grafanaFolderTitle_);
        DARABONBA_PTR_FROM_JSON(GrafanaFolderUid, grafanaFolderUid_);
        DARABONBA_PTR_FROM_JSON(GrafanaFolderUrl, grafanaFolderUrl_);
        DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
        DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
        DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
        DARABONBA_PTR_FROM_JSON(PrometheusInstanceName, prometheusInstanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
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

      virtual bool empty() const override { return this->bindResourceId_ == nullptr
        && this->bindResourceProfile_ == nullptr && this->bindResourceStatus_ == nullptr && this->bindResourceStoreDuration_ == nullptr && this->bindResourceType_ == nullptr && this->bindVpcCidr_ == nullptr
        && this->dbInstanceStatus_ == nullptr && this->environmentId_ == nullptr && this->environmentName_ == nullptr && this->environmentSubType_ == nullptr && this->environmentType_ == nullptr
        && this->feePackage_ == nullptr && this->grafaDataSourceName_ == nullptr && this->grafanaDatasourceUid_ == nullptr && this->grafanaFolderTitle_ == nullptr && this->grafanaFolderUid_ == nullptr
        && this->grafanaFolderUrl_ == nullptr && this->grafanaWorkspaceId_ == nullptr && this->managedType_ == nullptr && this->prometheusInstanceId_ == nullptr && this->prometheusInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr
        && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
      // bindResourceId Field Functions 
      bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
      void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
      inline string getBindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
      inline Data& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


      // bindResourceProfile Field Functions 
      bool hasBindResourceProfile() const { return this->bindResourceProfile_ != nullptr;};
      void deleteBindResourceProfile() { this->bindResourceProfile_ = nullptr;};
      inline string getBindResourceProfile() const { DARABONBA_PTR_GET_DEFAULT(bindResourceProfile_, "") };
      inline Data& setBindResourceProfile(string bindResourceProfile) { DARABONBA_PTR_SET_VALUE(bindResourceProfile_, bindResourceProfile) };


      // bindResourceStatus Field Functions 
      bool hasBindResourceStatus() const { return this->bindResourceStatus_ != nullptr;};
      void deleteBindResourceStatus() { this->bindResourceStatus_ = nullptr;};
      inline string getBindResourceStatus() const { DARABONBA_PTR_GET_DEFAULT(bindResourceStatus_, "") };
      inline Data& setBindResourceStatus(string bindResourceStatus) { DARABONBA_PTR_SET_VALUE(bindResourceStatus_, bindResourceStatus) };


      // bindResourceStoreDuration Field Functions 
      bool hasBindResourceStoreDuration() const { return this->bindResourceStoreDuration_ != nullptr;};
      void deleteBindResourceStoreDuration() { this->bindResourceStoreDuration_ = nullptr;};
      inline string getBindResourceStoreDuration() const { DARABONBA_PTR_GET_DEFAULT(bindResourceStoreDuration_, "") };
      inline Data& setBindResourceStoreDuration(string bindResourceStoreDuration) { DARABONBA_PTR_SET_VALUE(bindResourceStoreDuration_, bindResourceStoreDuration) };


      // bindResourceType Field Functions 
      bool hasBindResourceType() const { return this->bindResourceType_ != nullptr;};
      void deleteBindResourceType() { this->bindResourceType_ = nullptr;};
      inline string getBindResourceType() const { DARABONBA_PTR_GET_DEFAULT(bindResourceType_, "") };
      inline Data& setBindResourceType(string bindResourceType) { DARABONBA_PTR_SET_VALUE(bindResourceType_, bindResourceType) };


      // bindVpcCidr Field Functions 
      bool hasBindVpcCidr() const { return this->bindVpcCidr_ != nullptr;};
      void deleteBindVpcCidr() { this->bindVpcCidr_ = nullptr;};
      inline string getBindVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(bindVpcCidr_, "") };
      inline Data& setBindVpcCidr(string bindVpcCidr) { DARABONBA_PTR_SET_VALUE(bindVpcCidr_, bindVpcCidr) };


      // dbInstanceStatus Field Functions 
      bool hasDbInstanceStatus() const { return this->dbInstanceStatus_ != nullptr;};
      void deleteDbInstanceStatus() { this->dbInstanceStatus_ = nullptr;};
      inline string getDbInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStatus_, "") };
      inline Data& setDbInstanceStatus(string dbInstanceStatus) { DARABONBA_PTR_SET_VALUE(dbInstanceStatus_, dbInstanceStatus) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Data& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // environmentName Field Functions 
      bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
      void deleteEnvironmentName() { this->environmentName_ = nullptr;};
      inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
      inline Data& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


      // environmentSubType Field Functions 
      bool hasEnvironmentSubType() const { return this->environmentSubType_ != nullptr;};
      void deleteEnvironmentSubType() { this->environmentSubType_ = nullptr;};
      inline string getEnvironmentSubType() const { DARABONBA_PTR_GET_DEFAULT(environmentSubType_, "") };
      inline Data& setEnvironmentSubType(string environmentSubType) { DARABONBA_PTR_SET_VALUE(environmentSubType_, environmentSubType) };


      // environmentType Field Functions 
      bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
      void deleteEnvironmentType() { this->environmentType_ = nullptr;};
      inline string getEnvironmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
      inline Data& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


      // feePackage Field Functions 
      bool hasFeePackage() const { return this->feePackage_ != nullptr;};
      void deleteFeePackage() { this->feePackage_ = nullptr;};
      inline string getFeePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
      inline Data& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


      // grafaDataSourceName Field Functions 
      bool hasGrafaDataSourceName() const { return this->grafaDataSourceName_ != nullptr;};
      void deleteGrafaDataSourceName() { this->grafaDataSourceName_ = nullptr;};
      inline string getGrafaDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(grafaDataSourceName_, "") };
      inline Data& setGrafaDataSourceName(string grafaDataSourceName) { DARABONBA_PTR_SET_VALUE(grafaDataSourceName_, grafaDataSourceName) };


      // grafanaDatasourceUid Field Functions 
      bool hasGrafanaDatasourceUid() const { return this->grafanaDatasourceUid_ != nullptr;};
      void deleteGrafanaDatasourceUid() { this->grafanaDatasourceUid_ = nullptr;};
      inline string getGrafanaDatasourceUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaDatasourceUid_, "") };
      inline Data& setGrafanaDatasourceUid(string grafanaDatasourceUid) { DARABONBA_PTR_SET_VALUE(grafanaDatasourceUid_, grafanaDatasourceUid) };


      // grafanaFolderTitle Field Functions 
      bool hasGrafanaFolderTitle() const { return this->grafanaFolderTitle_ != nullptr;};
      void deleteGrafanaFolderTitle() { this->grafanaFolderTitle_ = nullptr;};
      inline string getGrafanaFolderTitle() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderTitle_, "") };
      inline Data& setGrafanaFolderTitle(string grafanaFolderTitle) { DARABONBA_PTR_SET_VALUE(grafanaFolderTitle_, grafanaFolderTitle) };


      // grafanaFolderUid Field Functions 
      bool hasGrafanaFolderUid() const { return this->grafanaFolderUid_ != nullptr;};
      void deleteGrafanaFolderUid() { this->grafanaFolderUid_ = nullptr;};
      inline string getGrafanaFolderUid() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUid_, "") };
      inline Data& setGrafanaFolderUid(string grafanaFolderUid) { DARABONBA_PTR_SET_VALUE(grafanaFolderUid_, grafanaFolderUid) };


      // grafanaFolderUrl Field Functions 
      bool hasGrafanaFolderUrl() const { return this->grafanaFolderUrl_ != nullptr;};
      void deleteGrafanaFolderUrl() { this->grafanaFolderUrl_ = nullptr;};
      inline string getGrafanaFolderUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaFolderUrl_, "") };
      inline Data& setGrafanaFolderUrl(string grafanaFolderUrl) { DARABONBA_PTR_SET_VALUE(grafanaFolderUrl_, grafanaFolderUrl) };


      // grafanaWorkspaceId Field Functions 
      bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
      void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
      inline string getGrafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
      inline Data& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


      // managedType Field Functions 
      bool hasManagedType() const { return this->managedType_ != nullptr;};
      void deleteManagedType() { this->managedType_ = nullptr;};
      inline string getManagedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
      inline Data& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


      // prometheusInstanceId Field Functions 
      bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
      void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
      inline string getPrometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
      inline Data& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


      // prometheusInstanceName Field Functions 
      bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
      void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
      inline string getPrometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
      inline Data& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline Data& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // The ID of the resource associated with the environment, such as the ACK cluster ID or VPC ID.
      shared_ptr<string> bindResourceId_ {};
      // The profile of the resource.
      shared_ptr<string> bindResourceProfile_ {};
      // The status of the resource.
      shared_ptr<string> bindResourceStatus_ {};
      // The retention period of the resource. Unit: days.
      shared_ptr<string> bindResourceStoreDuration_ {};
      // The resource type.
      shared_ptr<string> bindResourceType_ {};
      // The VPC CIDR block.
      shared_ptr<string> bindVpcCidr_ {};
      // The status of the database that is bound to the Prometheus instance.
      // 
      // Valid values:
      // 
      // *   UNINSTALLING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   INSTALLING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   UNINSTALLED
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   RUNNING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   MODIFYING
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> dbInstanceStatus_ {};
      // The ID of the environment instance.
      shared_ptr<string> environmentId_ {};
      // The environment name.
      shared_ptr<string> environmentName_ {};
      // Environment subtypes:
      // - CS: Currently supports ACK.
      // - ECS: ECS is currently supported.
      // - Cloud: Currently supports Cloud.
      shared_ptr<string> environmentSubType_ {};
      // The type of the environment. Valid values:
      // 
      // *   CS: Container Service for Kubernetes (ACK)
      // *   ECS: Elastic Compute Service
      // *   Cloud: cloud service
      shared_ptr<string> environmentType_ {};
      // The payable resource plan. Valid values:
      // 
      // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro.
      // *   Otherwise, leave the parameter empty.
      shared_ptr<string> feePackage_ {};
      // The name of the Grafana data source.
      shared_ptr<string> grafaDataSourceName_ {};
      // The unique ID of the Grafana data source.
      shared_ptr<string> grafanaDatasourceUid_ {};
      // The name of the Grafana directory.
      shared_ptr<string> grafanaFolderTitle_ {};
      // The unique ID of the Grafana directory.
      shared_ptr<string> grafanaFolderUid_ {};
      // The URL of the Grafana directory.
      shared_ptr<string> grafanaFolderUrl_ {};
      // The ID of the Grafana workspace.
      shared_ptr<string> grafanaWorkspaceId_ {};
      // managed type:
      // - none: unmanaged. The default value for ACK clusters.
      // - agent: managed agent (including KSM). The default values for ASK, ACS, and AckOne clusters.
      // - agent-exporter: managed agent and exporters. The default value for the cloud service type.
      shared_ptr<string> managedType_ {};
      // The ID of the Prometheus instance.
      shared_ptr<string> prometheusInstanceId_ {};
      // The name of the Prometheus instance.
      shared_ptr<string> prometheusInstanceName_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security group associated with the environment.
      shared_ptr<string> securityGroupId_ {};
      // The tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch associated with the environment.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEnvironmentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEnvironmentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEnvironmentResponseBody::Data) };
    inline DescribeEnvironmentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEnvironmentResponseBody::Data) };
    inline DescribeEnvironmentResponseBody& setData(const DescribeEnvironmentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEnvironmentResponseBody& setData(DescribeEnvironmentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEnvironmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnvironmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    shared_ptr<int32_t> code_ {};
    // The returned struct.
    shared_ptr<DescribeEnvironmentResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
