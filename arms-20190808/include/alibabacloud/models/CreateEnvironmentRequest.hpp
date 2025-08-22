// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnvironmentRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(EnvironmentSubType, environmentSubType_);
      DARABONBA_PTR_TO_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_TO_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(InitEnvironment, initEnvironment_);
      DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
      DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(EnvironmentSubType, environmentSubType_);
      DARABONBA_PTR_FROM_JSON(EnvironmentType, environmentType_);
      DARABONBA_PTR_FROM_JSON(FeePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(GrafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(InitEnvironment, initEnvironment_);
      DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
      DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateEnvironmentRequest() = default ;
    CreateEnvironmentRequest(const CreateEnvironmentRequest &) = default ;
    CreateEnvironmentRequest(CreateEnvironmentRequest &&) = default ;
    CreateEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvironmentRequest() = default ;
    CreateEnvironmentRequest& operator=(const CreateEnvironmentRequest &) = default ;
    CreateEnvironmentRequest& operator=(CreateEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->bindResourceId_ != nullptr && this->environmentName_ != nullptr && this->environmentSubType_ != nullptr && this->environmentType_ != nullptr && this->feePackage_ != nullptr
        && this->grafanaWorkspaceId_ != nullptr && this->initEnvironment_ != nullptr && this->managedType_ != nullptr && this->prometheusInstanceId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateEnvironmentRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline CreateEnvironmentRequest& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string environmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline CreateEnvironmentRequest& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // environmentSubType Field Functions 
    bool hasEnvironmentSubType() const { return this->environmentSubType_ != nullptr;};
    void deleteEnvironmentSubType() { this->environmentSubType_ = nullptr;};
    inline string environmentSubType() const { DARABONBA_PTR_GET_DEFAULT(environmentSubType_, "") };
    inline CreateEnvironmentRequest& setEnvironmentSubType(string environmentSubType) { DARABONBA_PTR_SET_VALUE(environmentSubType_, environmentSubType) };


    // environmentType Field Functions 
    bool hasEnvironmentType() const { return this->environmentType_ != nullptr;};
    void deleteEnvironmentType() { this->environmentType_ = nullptr;};
    inline string environmentType() const { DARABONBA_PTR_GET_DEFAULT(environmentType_, "") };
    inline CreateEnvironmentRequest& setEnvironmentType(string environmentType) { DARABONBA_PTR_SET_VALUE(environmentType_, environmentType) };


    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline CreateEnvironmentRequest& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline CreateEnvironmentRequest& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // initEnvironment Field Functions 
    bool hasInitEnvironment() const { return this->initEnvironment_ != nullptr;};
    void deleteInitEnvironment() { this->initEnvironment_ = nullptr;};
    inline bool initEnvironment() const { DARABONBA_PTR_GET_DEFAULT(initEnvironment_, false) };
    inline CreateEnvironmentRequest& setInitEnvironment(bool initEnvironment) { DARABONBA_PTR_SET_VALUE(initEnvironment_, initEnvironment) };


    // managedType Field Functions 
    bool hasManagedType() const { return this->managedType_ != nullptr;};
    void deleteManagedType() { this->managedType_ = nullptr;};
    inline string managedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
    inline CreateEnvironmentRequest& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline CreateEnvironmentRequest& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEnvironmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEnvironmentRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEnvironmentRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEnvironmentRequestTags>) };
    inline vector<CreateEnvironmentRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateEnvironmentRequestTags>) };
    inline CreateEnvironmentRequest& setTags(const vector<CreateEnvironmentRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEnvironmentRequest& setTags(vector<CreateEnvironmentRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The language. Default value: zh.
    // 
    // Valid values:
    // *   en: English
    // *   zh: Chinese
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // The ID of the resource bound to the environment, such as the container ID or VPC ID. For a Cloud environment, specify the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // The name of the environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentName_ = nullptr;
    // The subtype of the environment. Valid values:
    // 
    // *   CS: Container Service for Kubernetes (ACK) or Distributed Cloud Container Platform for Kubernetes (ACK One)
    // *   ECS: ECS
    // *   Cloud: cloud service
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentSubType_ = nullptr;
    // The type of the environment. Valid values:
    // 
    // *   CS: Container Service
    // *   ECS: Elastic Compute Service
    // *   Cloud: cloud service
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentType_ = nullptr;
    // The payable resource plan.
    // 
    // *   If the EnvironmentType parameter is set to CS, set the value to CS_Basic or CS_Pro. Default value: CS_Basic.
    // *   Otherwise, leave the parameter empty.
    std::shared_ptr<string> feePackage_ = nullptr;
    // The ID of the Grafana workspace associated with the environment. If this parameter is left empty, the default shared Grafana workspace is used.
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    // Specifies whether to initialize the environment.
    std::shared_ptr<bool> initEnvironment_ = nullptr;
    // Specifies whether agents or exporters are managed. Valid values:
    // 
    // *   none: No. By default, no managed agents or exporters are provided for ACK clusters.
    // *   agent: Agents are managed. By default, managed agents are provided for ASK clusters, ACS clusters, and ACK One clusters.
    // *   agent-exporter: Agents and exporters are managed. By default, managed agents and exporters are provided for cloud services.
    std::shared_ptr<string> managedType_ = nullptr;
    // The ID of the Prometheus instance. If no Prometheus instance is created, call the InitEnvironment operation.
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the instance. You can specify this parameter to manage tags for the instance.
    std::shared_ptr<vector<CreateEnvironmentRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
