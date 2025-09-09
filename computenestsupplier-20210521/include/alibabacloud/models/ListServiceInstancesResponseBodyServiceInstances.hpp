// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServiceInstancesResponseBodyServiceInstancesService.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstancesResponseBodyServiceInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstancesResponseBodyServiceInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesResponseBodyServiceInstances& obj) { 
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_TO_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesResponseBodyServiceInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableInstanceOps, enableInstanceOps_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsOperated, isOperated_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperatedServiceInstanceId, operatedServiceInstanceId_);
      DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_FROM_JSON(OperationStartTime, operationStartTime_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListServiceInstancesResponseBodyServiceInstances() = default ;
    ListServiceInstancesResponseBodyServiceInstances(const ListServiceInstancesResponseBodyServiceInstances &) = default ;
    ListServiceInstancesResponseBodyServiceInstances(ListServiceInstancesResponseBodyServiceInstances &&) = default ;
    ListServiceInstancesResponseBodyServiceInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesResponseBodyServiceInstances() = default ;
    ListServiceInstancesResponseBodyServiceInstances& operator=(const ListServiceInstancesResponseBodyServiceInstances &) = default ;
    ListServiceInstancesResponseBodyServiceInstances& operator=(ListServiceInstancesResponseBodyServiceInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizStatus_ != nullptr
        && this->createTime_ != nullptr && this->enableInstanceOps_ != nullptr && this->endTime_ != nullptr && this->isOperated_ != nullptr && this->name_ != nullptr
        && this->operatedServiceInstanceId_ != nullptr && this->operationEndTime_ != nullptr && this->operationStartTime_ != nullptr && this->parameters_ != nullptr && this->payType_ != nullptr
        && this->progress_ != nullptr && this->resourceGroupId_ != nullptr && this->service_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceType_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->statusDetail_ != nullptr && this->tags_ != nullptr && this->templateName_ != nullptr
        && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableInstanceOps Field Functions 
    bool hasEnableInstanceOps() const { return this->enableInstanceOps_ != nullptr;};
    void deleteEnableInstanceOps() { this->enableInstanceOps_ = nullptr;};
    inline bool enableInstanceOps() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceOps_, false) };
    inline ListServiceInstancesResponseBodyServiceInstances& setEnableInstanceOps(bool enableInstanceOps) { DARABONBA_PTR_SET_VALUE(enableInstanceOps_, enableInstanceOps) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isOperated Field Functions 
    bool hasIsOperated() const { return this->isOperated_ != nullptr;};
    void deleteIsOperated() { this->isOperated_ = nullptr;};
    inline bool isOperated() const { DARABONBA_PTR_GET_DEFAULT(isOperated_, false) };
    inline ListServiceInstancesResponseBodyServiceInstances& setIsOperated(bool isOperated) { DARABONBA_PTR_SET_VALUE(isOperated_, isOperated) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatedServiceInstanceId Field Functions 
    bool hasOperatedServiceInstanceId() const { return this->operatedServiceInstanceId_ != nullptr;};
    void deleteOperatedServiceInstanceId() { this->operatedServiceInstanceId_ = nullptr;};
    inline string operatedServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(operatedServiceInstanceId_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setOperatedServiceInstanceId(string operatedServiceInstanceId) { DARABONBA_PTR_SET_VALUE(operatedServiceInstanceId_, operatedServiceInstanceId) };


    // operationEndTime Field Functions 
    bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
    void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
    inline string operationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


    // operationStartTime Field Functions 
    bool hasOperationStartTime() const { return this->operationStartTime_ != nullptr;};
    void deleteOperationStartTime() { this->operationStartTime_ = nullptr;};
    inline string operationStartTime() const { DARABONBA_PTR_GET_DEFAULT(operationStartTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setOperationStartTime(string operationStartTime) { DARABONBA_PTR_SET_VALUE(operationStartTime_, operationStartTime) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline ListServiceInstancesResponseBodyServiceInstances& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const Models::ListServiceInstancesResponseBodyServiceInstancesService & service() const { DARABONBA_PTR_GET_CONST(service_, Models::ListServiceInstancesResponseBodyServiceInstancesService) };
    inline Models::ListServiceInstancesResponseBodyServiceInstancesService service() { DARABONBA_PTR_GET(service_, Models::ListServiceInstancesResponseBodyServiceInstancesService) };
    inline ListServiceInstancesResponseBodyServiceInstances& setService(const Models::ListServiceInstancesResponseBodyServiceInstancesService & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline ListServiceInstancesResponseBodyServiceInstances& setService(Models::ListServiceInstancesResponseBodyServiceInstancesService && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline string statusDetail() const { DARABONBA_PTR_GET_DEFAULT(statusDetail_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setStatusDetail(string statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags>) };
    inline vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags>) };
    inline ListServiceInstancesResponseBodyServiceInstances& setTags(const vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListServiceInstancesResponseBodyServiceInstances& setTags(vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstances& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListServiceInstancesResponseBodyServiceInstances& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The business status of the service instance. Valid values:
    // 
    // *   Normal: The service instance is normal.
    // *   Renewing: The service instance is being renewed.
    // *   RenewFailed: The service instance failed to be renewed.
    // *   Expired: The service instance expired.
    std::shared_ptr<string> bizStatus_ = nullptr;
    // The time when the service instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the service instance supports the hosted O\\&M feature. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableInstanceOps_ = nullptr;
    // The time when the service instance expires.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates whether the hosted O\\&M feature is enabled for the service instance. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isOperated_ = nullptr;
    // The name of the service instance.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the service instance that is used to implement hosted O\\&M.
    std::shared_ptr<string> operatedServiceInstanceId_ = nullptr;
    // The end of the time range during which hosted O\\&M is implemented.
    std::shared_ptr<string> operationEndTime_ = nullptr;
    // The beginning of the time range during which hosted O\\&M is implemented.
    std::shared_ptr<string> operationStartTime_ = nullptr;
    // The parameters of the service instance.
    std::shared_ptr<string> parameters_ = nullptr;
    // The billing method of the service. Valid values:
    // 
    // *   Permanent: Once you purchase the service, you can use it permanently.
    // *   Subscription: You purchase the service from Alibaba Cloud Marketplace and are charged for the service on a subscription basis.
    // *   PayAsYouGo: You purchase the service from Alibaba Cloud Marketplace and are charged for the service on a pay-as-you-go basis.
    // *   CustomFixTime: You are charged for the service based on a custom duration fixed by the service provider.
    std::shared_ptr<string> payType_ = nullptr;
    // The deployment progress of the service instance. Unit: percentage.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the service.
    std::shared_ptr<Models::ListServiceInstancesResponseBodyServiceInstancesService> service_ = nullptr;
    // The ID of the service instance.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   private: The service is a private service and is deployed within the account of a customer.
    // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
    // *   operation: The service is a hosted O\\&M service.
    // *   poc: The service is a trial service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The source from which the service instance is created.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the service instance. Valid values:
    // 
    // *   Created
    // *   Deploying
    // *   DeployedFailed
    // *   Deployed
    // *   Upgrading
    // *   Deleting
    // *   Deleted
    std::shared_ptr<string> status_ = nullptr;
    // The description of the deployment of the service instance.
    std::shared_ptr<string> statusDetail_ = nullptr;
    // The custom tags.
    std::shared_ptr<vector<Models::ListServiceInstancesResponseBodyServiceInstancesTags>> tags_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The time when the service instance was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The Alibaba Cloud account ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
