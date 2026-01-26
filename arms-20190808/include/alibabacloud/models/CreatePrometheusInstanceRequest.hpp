// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSINSTANCEREQUEST_HPP_
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
  class CreatePrometheusInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllSubClustersSuccess, allSubClustersSuccess_);
      DARABONBA_PTR_TO_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllSubClustersSuccess, allSubClustersSuccess_);
      DARABONBA_PTR_FROM_JSON(ArchiveDuration, archiveDuration_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(GrafanaInstanceId, grafanaInstanceId_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SubClustersJson, subClustersJson_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreatePrometheusInstanceRequest() = default ;
    CreatePrometheusInstanceRequest(const CreatePrometheusInstanceRequest &) = default ;
    CreatePrometheusInstanceRequest(CreatePrometheusInstanceRequest &&) = default ;
    CreatePrometheusInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusInstanceRequest() = default ;
    CreatePrometheusInstanceRequest& operator=(const CreatePrometheusInstanceRequest &) = default ;
    CreatePrometheusInstanceRequest& operator=(CreatePrometheusInstanceRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->allSubClustersSuccess_ == nullptr
        && this->archiveDuration_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterType_ == nullptr && this->duration_ == nullptr
        && this->grafanaInstanceId_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr
        && this->subClustersJson_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // allSubClustersSuccess Field Functions 
    bool hasAllSubClustersSuccess() const { return this->allSubClustersSuccess_ != nullptr;};
    void deleteAllSubClustersSuccess() { this->allSubClustersSuccess_ = nullptr;};
    inline bool getAllSubClustersSuccess() const { DARABONBA_PTR_GET_DEFAULT(allSubClustersSuccess_, false) };
    inline CreatePrometheusInstanceRequest& setAllSubClustersSuccess(bool allSubClustersSuccess) { DARABONBA_PTR_SET_VALUE(allSubClustersSuccess_, allSubClustersSuccess) };


    // archiveDuration Field Functions 
    bool hasArchiveDuration() const { return this->archiveDuration_ != nullptr;};
    void deleteArchiveDuration() { this->archiveDuration_ = nullptr;};
    inline int32_t getArchiveDuration() const { DARABONBA_PTR_GET_DEFAULT(archiveDuration_, 0) };
    inline CreatePrometheusInstanceRequest& setArchiveDuration(int32_t archiveDuration) { DARABONBA_PTR_SET_VALUE(archiveDuration_, archiveDuration) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreatePrometheusInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreatePrometheusInstanceRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreatePrometheusInstanceRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePrometheusInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // grafanaInstanceId Field Functions 
    bool hasGrafanaInstanceId() const { return this->grafanaInstanceId_ != nullptr;};
    void deleteGrafanaInstanceId() { this->grafanaInstanceId_ = nullptr;};
    inline string getGrafanaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaInstanceId_, "") };
    inline CreatePrometheusInstanceRequest& setGrafanaInstanceId(string grafanaInstanceId) { DARABONBA_PTR_SET_VALUE(grafanaInstanceId_, grafanaInstanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreatePrometheusInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrometheusInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrometheusInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreatePrometheusInstanceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // subClustersJson Field Functions 
    bool hasSubClustersJson() const { return this->subClustersJson_ != nullptr;};
    void deleteSubClustersJson() { this->subClustersJson_ = nullptr;};
    inline string getSubClustersJson() const { DARABONBA_PTR_GET_DEFAULT(subClustersJson_, "") };
    inline CreatePrometheusInstanceRequest& setSubClustersJson(string subClustersJson) { DARABONBA_PTR_SET_VALUE(subClustersJson_, subClustersJson) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePrometheusInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePrometheusInstanceRequest::Tags>) };
    inline vector<CreatePrometheusInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreatePrometheusInstanceRequest::Tags>) };
    inline CreatePrometheusInstanceRequest& setTags(const vector<CreatePrometheusInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePrometheusInstanceRequest& setTags(vector<CreatePrometheusInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreatePrometheusInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreatePrometheusInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Does it require all child instances to be verified successfully before creating a GlobalView instance. The default is false, which means partial success is possible.
    shared_ptr<bool> allSubClustersSuccess_ {};
    // The number of days for which data is automatically archived after the storage expires. Valid values: 60, 90, 180, and 365. 0 indicates that the data is not archived.
    shared_ptr<int32_t> archiveDuration_ {};
    // The ID of the ACK cluster. This parameter is required if you set the ClusterType parameter to aliyun-cs.
    shared_ptr<string> clusterId_ {};
    // The name of the created cluster. This parameter is required if you set the ClusterType parameter to remote-write or ecs.
    shared_ptr<string> clusterName_ {};
    // The type of the Prometheus instance. Valid values:
    // 
    // *   remote-write: Prometheus instance for Remote Write
    // *   ecs (unavailable): Prometheus instance for ECS
    // *   global-view: Prometheus instance for GlobalView
    // *   aliyun-cs: Prometheus instance for Container Service
    // *   cloud-product (unavailable): Prometheus instance for Alibaba Cloud services
    // *   cloud-monitor (unavailable): Prometheus instance for Hybrid Cloud Monitoring
    // *   flink (unavailable): Prometheus instance for Flink
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // The data storage duration. Unit: days.
    shared_ptr<int32_t> duration_ {};
    // The ID of the Grafana dedicated instance. This parameter is available if you set the ClusterType parameter to ecs.
    shared_ptr<string> grafanaInstanceId_ {};
    // The billing mode. Valid values: POSTPAY: charges fees based on the amount of reported metric data. POSTPAY_GB: charges fees based on the amount of written metric data. Empty: The user-defined default billing mode is used. If you do not specify a default value, you are charged based on the amount of reported metric data.
    shared_ptr<string> paymentType_ {};
    // The ID of the region. If you use a Prometheus instance to monitor an Alibaba Cloud service in China, this parameter must be set to cn-shanghai.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the custom resource group. You can configure this parameter to bind the instance to the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the security group. This parameter is required if you set the ClusterType parameter to ecs.
    shared_ptr<string> securityGroupId_ {};
    // JSON string for child instances of the globalView instance.
    shared_ptr<string> subClustersJson_ {};
    // The tags of the instance. You can configure this parameter to manage tags for the instance.
    shared_ptr<vector<CreatePrometheusInstanceRequest::Tags>> tags_ {};
    // The ID of the vSwitch. This parameter is required if you set the ClusterType parameter to ecs.
    shared_ptr<string> vSwitchId_ {};
    // The ID of virtual private cloud (VPC). This parameter is required if you set the ClusterType parameter to ecs.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
