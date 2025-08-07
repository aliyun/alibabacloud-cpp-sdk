// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceInstanceResponseBodyNetworkConfig.hpp>
#include <alibabacloud/models/GetServiceInstanceResponseBodyService.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_TO_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GrafanaDashBoardUrl, grafanaDashBoardUrl_);
      DARABONBA_PTR_TO_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_TO_JSON(LicenseEndTime, licenseEndTime_);
      DARABONBA_PTR_TO_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PredefinedParameterName, predefinedParameterName_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_TO_JSON(SupportTrialToPrivate, supportTrialToPrivate_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_FROM_JSON(EnableUserPrometheus, enableUserPrometheus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GrafanaDashBoardUrl, grafanaDashBoardUrl_);
      DARABONBA_PTR_FROM_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_FROM_JSON(LicenseEndTime, licenseEndTime_);
      DARABONBA_PTR_FROM_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PredefinedParameterName, predefinedParameterName_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(SupplierUid, supplierUid_);
      DARABONBA_PTR_FROM_JSON(SupportTrialToPrivate, supportTrialToPrivate_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetServiceInstanceResponseBody() = default ;
    GetServiceInstanceResponseBody(const GetServiceInstanceResponseBody &) = default ;
    GetServiceInstanceResponseBody(GetServiceInstanceResponseBody &&) = default ;
    GetServiceInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBody() = default ;
    GetServiceInstanceResponseBody& operator=(const GetServiceInstanceResponseBody &) = default ;
    GetServiceInstanceResponseBody& operator=(GetServiceInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizStatus_ != nullptr
        && this->components_ != nullptr && this->createTime_ != nullptr && this->enableInstanceOps_ != nullptr && this->enableUserPrometheus_ != nullptr && this->endTime_ != nullptr
        && this->grafanaDashBoardUrl_ != nullptr && this->isOperated_ != nullptr && this->licenseEndTime_ != nullptr && this->marketInstanceId_ != nullptr && this->name_ != nullptr
        && this->networkConfig_ != nullptr && this->operatedServiceInstanceId_ != nullptr && this->operationEndTime_ != nullptr && this->operationStartTime_ != nullptr && this->outputs_ != nullptr
        && this->parameters_ != nullptr && this->payType_ != nullptr && this->predefinedParameterName_ != nullptr && this->progress_ != nullptr && this->requestId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resources_ != nullptr && this->service_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceType_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr && this->supplierUid_ != nullptr && this->supportTrialToPrivate_ != nullptr
        && this->tags_ != nullptr && this->templateName_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline GetServiceInstanceResponseBody& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline string components() const { DARABONBA_PTR_GET_DEFAULT(components_, "") };
    inline GetServiceInstanceResponseBody& setComponents(string components) { DARABONBA_PTR_SET_VALUE(components_, components) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetServiceInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableInstanceOps Field Functions 
    bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
    void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
    inline bool enableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
    inline GetServiceInstanceResponseBody& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


    // enableUserPrometheus Field Functions 
    bool hasEnableUserPrometheus() const { return this->enableUserPrometheus_ != nullptr;};
    void deleteEnableUserPrometheus() { this->enableUserPrometheus_ = nullptr;};
    inline bool enableUserPrometheus() const { DARABONBA_PTR_GET_DEFAULT(enableUserPrometheus_, false) };
    inline GetServiceInstanceResponseBody& setEnableUserPrometheus(bool enableUserPrometheus) { DARABONBA_PTR_SET_VALUE(enableUserPrometheus_, enableUserPrometheus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetServiceInstanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // grafanaDashBoardUrl Field Functions 
    bool hasGrafanaDashBoardUrl() const { return this->grafanaDashBoardUrl_ != nullptr;};
    void deleteGrafanaDashBoardUrl() { this->grafanaDashBoardUrl_ = nullptr;};
    inline string grafanaDashBoardUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaDashBoardUrl_, "") };
    inline GetServiceInstanceResponseBody& setGrafanaDashBoardUrl(string grafanaDashBoardUrl) { DARABONBA_PTR_SET_VALUE(grafanaDashBoardUrl_, grafanaDashBoardUrl) };


    // isOperated Field Functions 
    bool hasIsOperated() const { return this->isOperated_ != nullptr;};
    void deleteIsOperated() { this->isOperated_ = nullptr;};
    inline bool isOperated() const { DARABONBA_PTR_GET_DEFAULT(isOperated_, false) };
    inline GetServiceInstanceResponseBody& setIsOperated(bool isOperated) { DARABONBA_PTR_SET_VALUE(isOperated_, isOperated) };


    // licenseEndTime Field Functions 
    bool hasLicenseEndTime() const { return this->licenseEndTime_ != nullptr;};
    void deleteLicenseEndTime() { this->licenseEndTime_ = nullptr;};
    inline string licenseEndTime() const { DARABONBA_PTR_GET_DEFAULT(licenseEndTime_, "") };
    inline GetServiceInstanceResponseBody& setLicenseEndTime(string licenseEndTime) { DARABONBA_PTR_SET_VALUE(licenseEndTime_, licenseEndTime) };


    // marketInstanceId Field Functions 
    bool hasMarketInstanceId() const { return this->marketInstanceId_ != nullptr;};
    void deleteMarketInstanceId() { this->marketInstanceId_ = nullptr;};
    inline string marketInstanceId() const { DARABONBA_PTR_GET_DEFAULT(marketInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setMarketInstanceId(string marketInstanceId) { DARABONBA_PTR_SET_VALUE(marketInstanceId_, marketInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetServiceInstanceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const GetServiceInstanceResponseBodyNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, GetServiceInstanceResponseBodyNetworkConfig) };
    inline GetServiceInstanceResponseBodyNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, GetServiceInstanceResponseBodyNetworkConfig) };
    inline GetServiceInstanceResponseBody& setNetworkConfig(const GetServiceInstanceResponseBodyNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline GetServiceInstanceResponseBody& setNetworkConfig(GetServiceInstanceResponseBodyNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // operatedServiceInstanceId Field Functions 
    bool hasOperatedServiceInstanceId() const { return this->operatedServiceInstanceId_ != nullptr;};
    void deleteOperatedServiceInstanceId() { this->operatedServiceInstanceId_ = nullptr;};
    inline string operatedServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(operatedServiceInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setOperatedServiceInstanceId(string operatedServiceInstanceId) { DARABONBA_PTR_SET_VALUE(operatedServiceInstanceId_, operatedServiceInstanceId) };


    // operationEndTime Field Functions 
    bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
    void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
    inline string operationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
    inline GetServiceInstanceResponseBody& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


    // operationStartTime Field Functions 
    bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
    void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
    inline string operationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
    inline GetServiceInstanceResponseBody& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline GetServiceInstanceResponseBody& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetServiceInstanceResponseBody& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetServiceInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // predefinedParameterName Field Functions 
    bool hasPredefinedParameterName() const { return this->predefinedParameterName_ != nullptr;};
    void deletePredefinedParameterName() { this->predefinedParameterName_ = nullptr;};
    inline string predefinedParameterName() const { DARABONBA_PTR_GET_DEFAULT(predefinedParameterName_, "") };
    inline GetServiceInstanceResponseBody& setPredefinedParameterName(string predefinedParameterName) { DARABONBA_PTR_SET_VALUE(predefinedParameterName_, predefinedParameterName) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline GetServiceInstanceResponseBody& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetServiceInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline GetServiceInstanceResponseBody& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const GetServiceInstanceResponseBodyService & service() const { DARABONBA_PTR_GET_CONST(service_, GetServiceInstanceResponseBodyService) };
    inline GetServiceInstanceResponseBodyService service() { DARABONBA_PTR_GET(service_, GetServiceInstanceResponseBodyService) };
    inline GetServiceInstanceResponseBody& setService(const GetServiceInstanceResponseBodyService & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline GetServiceInstanceResponseBody& setService(GetServiceInstanceResponseBodyService && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceInstanceResponseBody& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceInstanceResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetServiceInstanceResponseBody& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline GetServiceInstanceResponseBody& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // supplierUid Field Functions 
    bool hasSupplierUid() const { return this->supplierUid_ != nullptr;};
    void deleteSupplierUid() { this->supplierUid_ = nullptr;};
    inline int64_t supplierUid() const { DARABONBA_PTR_GET_DEFAULT(supplierUid_, 0L) };
    inline GetServiceInstanceResponseBody& setSupplierUid(int64_t supplierUid) { DARABONBA_PTR_SET_VALUE(supplierUid_, supplierUid) };


    // supportTrialToPrivate Field Functions 
    bool hasSupportTrialToPrivate() const { return this->supportTrialToPrivate_ != nullptr;};
    void deleteSupportTrialToPrivate() { this->supportTrialToPrivate_ = nullptr;};
    inline bool supportTrialToPrivate() const { DARABONBA_PTR_GET_DEFAULT(supportTrialToPrivate_, false) };
    inline GetServiceInstanceResponseBody& setSupportTrialToPrivate(bool supportTrialToPrivate) { DARABONBA_PTR_SET_VALUE(supportTrialToPrivate_, supportTrialToPrivate) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetServiceInstanceResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetServiceInstanceResponseBodyTags>) };
    inline vector<GetServiceInstanceResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetServiceInstanceResponseBodyTags>) };
    inline GetServiceInstanceResponseBody& setTags(const vector<GetServiceInstanceResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceInstanceResponseBody& setTags(vector<GetServiceInstanceResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceInstanceResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetServiceInstanceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetServiceInstanceResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The business state of the service instance. Valid values:
    // 
    // *   Normal
    // *   Renewing
    // *   RenewFailed
    // *   Expired
    std::shared_ptr<string> bizStatus_ = nullptr;
    // Cloud Marketplace additional billing items.
    std::shared_ptr<string> components_ = nullptr;
    // The time when the serviceInstance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the service instance supports the operation feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableInstanceOps_ = nullptr;
    // Whether to enable Prometheus monitoring.
    std::shared_ptr<bool> enableUserPrometheus_ = nullptr;
    // The expiration time of service instance.
    std::shared_ptr<string> endTime_ = nullptr;
    // The URL of the Grafana dashboard.
    std::shared_ptr<string> grafanaDashBoardUrl_ = nullptr;
    // Indicates whether the hosted O\\&M feature is enabled for the service instance. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isOperated_ = nullptr;
    // The expiration time of licence.
    std::shared_ptr<string> licenseEndTime_ = nullptr;
    // The market Instance ID.
    std::shared_ptr<string> marketInstanceId_ = nullptr;
    // The name of the service instance.
    std::shared_ptr<string> name_ = nullptr;
    // The network configurations.
    // 
    // >  This parameter is discontinued.
    std::shared_ptr<GetServiceInstanceResponseBodyNetworkConfig> networkConfig_ = nullptr;
    // The serviceInstance  to be operated.
    std::shared_ptr<string> operatedServiceInstanceId_ = nullptr;
    // The operation end time.
    std::shared_ptr<string> operationEndTime_ = nullptr;
    // The operation start time.
    std::shared_ptr<string> operationStartTime_ = nullptr;
    // The outputs returned from creating the service instance.
    // 
    // *   If the service is deployed by using a ROS template, all output fields of the template are returned.
    // *   If the service is deployed by calling an SPI operation, the output fields of the service provider and for the Compute Nest additional features are returned.
    std::shared_ptr<string> outputs_ = nullptr;
    // The parameters configured for the service instance.
    std::shared_ptr<string> parameters_ = nullptr;
    // The billing method of the instance for market. Valid values:
    // 
    // *   Permanent: Permanent purchase
    // *   Subscription: Subscription.
    // *   PayAsYouGo: Pay-as-you-go.
    // *   CustomFixTime: Merchant custom fixed duration.
    std::shared_ptr<string> payType_ = nullptr;
    // The package name.
    std::shared_ptr<string> predefinedParameterName_ = nullptr;
    // The deployment progress of the service instance. Unit: percentage.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The resources.
    std::shared_ptr<string> resources_ = nullptr;
    // The service details.
    std::shared_ptr<GetServiceInstanceResponseBodyService> service_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The type of the service. Valid values:
    // 
    // - private: The service is a private service and is deployed within the account of a customer.
    // - managed: The service is a fully managed service and is deployed within the account of a service provider.
    // - operation: The service is a hosted O&M service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The source of the serviceInstance. Valid values:
    // - User
    // - Market
    // - Supplier
    std::shared_ptr<string> source_ = nullptr;
    // The deploy status of the serviceInstance. Valid values:
    // - Created
    // - Deploying
    // - DeployedFailed
    // - Deployed
    // - Upgrading
    // - Deleting
    // - Deleted
    // - DeletedFailed
    std::shared_ptr<string> status_ = nullptr;
    // The description of the deployment state of the service instance.
    std::shared_ptr<string> statusDetail_ = nullptr;
    // The Alibaba Cloud account ID of the service provider.
    std::shared_ptr<int64_t> supplierUid_ = nullptr;
    // Is it supported to convert from trial to private
    std::shared_ptr<bool> supportTrialToPrivate_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetServiceInstanceResponseBodyTags>> tags_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The time when the serviceInstance  was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The AliUid of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
