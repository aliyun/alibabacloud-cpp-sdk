// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BPSTUDIO20210931_HPP_
#define ALIBABACLOUD_BPSTUDIO20210931_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BPStudio20210931Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BPStudio20210931.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Switches a disaster recovery application back to the primary zone.
       *
       * @description You can call this operation to switch a disaster recovery application back to the primary zone.
       *
       * @param request AppFailBackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppFailBackResponse
       */
      Models::AppFailBackResponse appFailBackWithOptions(const Models::AppFailBackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a disaster recovery application back to the primary zone.
       *
       * @description You can call this operation to switch a disaster recovery application back to the primary zone.
       *
       * @param request AppFailBackRequest
       * @return AppFailBackResponse
       */
      Models::AppFailBackResponse appFailBack(const Models::AppFailBackRequest &request);

      /**
       * @summary Switches a disaster recovery application to another supported zone.
       *
       * @description You can call this operation to switch a disaster recovery application to another supported zone.
       *
       * @param request AppFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AppFailOverResponse
       */
      Models::AppFailOverResponse appFailOverWithOptions(const Models::AppFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches a disaster recovery application to another supported zone.
       *
       * @description You can call this operation to switch a disaster recovery application to another supported zone.
       *
       * @param request AppFailOverRequest
       * @return AppFailOverResponse
       */
      Models::AppFailOverResponse appFailOver(const Models::AppFailOverRequest &request);

      /**
       * @summary Changes the resource group to which an application or template belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which an application or template belongs.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates an application based on an official template or private template in Cloud Architect Design Tool (CADT). Before you call this operation, make sure that you understand the billing methods and prices of Alibaba Cloud services to be used in the application.
       *
       * @param tmpReq CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application based on an official template or private template in Cloud Architect Design Tool (CADT). Before you call this operation, make sure that you understand the billing methods and prices of Alibaba Cloud services to be used in the application.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary 创建任务
       *
       * @param tmpReq CreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @description Before you call this operation to delete an application, make sure that the application is in the `Destroyed_Success` state. Otherwise, the application fails to be deleted.`` You can call the [GetApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-getapplication) operation to query the status of an application.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @description Before you call this operation to delete an application, make sure that the application is in the `Destroyed_Success` state. Otherwise, the application fails to be deleted.`` You can call the [GetApplication](https://www.alibabacloud.com/help/en/bp-studio/latest/api-bpstudio-2021-09-31-getapplication) operation to query the status of an application.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deploys an application after the payment.
       *
       * @param request DeployApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplicationWithOptions(const Models::DeployApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an application after the payment.
       *
       * @param request DeployApplicationRequest
       * @return DeployApplicationResponse
       */
      Models::DeployApplicationResponse deployApplication(const Models::DeployApplicationRequest &request);

      /**
       * @summary Asynchronous execution of product operation functions.
       *
       * @param tmpReq ExecuteOperationASyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteOperationASyncResponse
       */
      Models::ExecuteOperationASyncResponse executeOperationASyncWithOptions(const Models::ExecuteOperationASyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronous execution of product operation functions.
       *
       * @param request ExecuteOperationASyncRequest
       * @return ExecuteOperationASyncResponse
       */
      Models::ExecuteOperationASyncResponse executeOperationASync(const Models::ExecuteOperationASyncRequest &request);

      /**
       * @summary 维护应用下资源API（同步操作）
       *
       * @param tmpReq ExecuteOperationSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteOperationSyncResponse
       */
      Models::ExecuteOperationSyncResponse executeOperationSyncWithOptions(const Models::ExecuteOperationSyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 维护应用下资源API（同步操作）
       *
       * @param request ExecuteOperationSyncRequest
       * @return ExecuteOperationSyncResponse
       */
      Models::ExecuteOperationSyncResponse executeOperationSync(const Models::ExecuteOperationSyncRequest &request);

      /**
       * @summary 创建任务
       *
       * @param request ExecuteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteTaskResponse
       */
      Models::ExecuteTaskResponse executeTaskWithOptions(const Models::ExecuteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务
       *
       * @param request ExecuteTaskRequest
       * @return ExecuteTaskResponse
       */
      Models::ExecuteTaskResponse executeTask(const Models::ExecuteTaskRequest &request);

      /**
       * @summary The URL of the application topology image.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The URL of the application topology image.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary 获取应用输入参数
       *
       * @param request GetApplicationVariablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationVariablesResponse
       */
      Models::GetApplicationVariablesResponse getApplicationVariablesWithOptions(const Models::GetApplicationVariablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用输入参数
       *
       * @param request GetApplicationVariablesRequest
       * @return GetApplicationVariablesResponse
       */
      Models::GetApplicationVariablesResponse getApplicationVariables(const Models::GetApplicationVariablesRequest &request);

      /**
       * @summary 获取需要重新配置的变量列表
       *
       * @param request GetApplicationVariables4FailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationVariables4FailResponse
       */
      Models::GetApplicationVariables4FailResponse getApplicationVariables4FailWithOptions(const Models::GetApplicationVariables4FailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取需要重新配置的变量列表
       *
       * @param request GetApplicationVariables4FailRequest
       * @return GetApplicationVariables4FailResponse
       */
      Models::GetApplicationVariables4FailResponse getApplicationVariables4Fail(const Models::GetApplicationVariables4FailRequest &request);

      /**
       * @summary Asynchronously queries the result of an operation that is performed on a service instance.
       *
       * @param request GetExecuteOperationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExecuteOperationResultResponse
       */
      Models::GetExecuteOperationResultResponse getExecuteOperationResultWithOptions(const Models::GetExecuteOperationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously queries the result of an operation that is performed on a service instance.
       *
       * @param request GetExecuteOperationResultRequest
       * @return GetExecuteOperationResultResponse
       */
      Models::GetExecuteOperationResultResponse getExecuteOperationResult(const Models::GetExecuteOperationResultRequest &request);

      /**
       * @summary Queries the status of a disaster recovery switchover task by task ID.
       *
       * @description You can call this operation to query the status of a disaster recovery switchover task by task ID.
       *
       * @param request GetFoTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFoTaskStatusResponse
       */
      Models::GetFoTaskStatusResponse getFoTaskStatusWithOptions(const Models::GetFoTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a disaster recovery switchover task by task ID.
       *
       * @description You can call this operation to query the status of a disaster recovery switchover task by task ID.
       *
       * @param request GetFoTaskStatusRequest
       * @return GetFoTaskStatusResponse
       */
      Models::GetFoTaskStatusResponse getFoTaskStatus(const Models::GetFoTaskStatusRequest &request);

      /**
       * @summary 获取模板变参可选值
       *
       * @param tmpReq GetLinkageAttributesTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLinkageAttributesTemplateResponse
       */
      Models::GetLinkageAttributesTemplateResponse getLinkageAttributesTemplateWithOptions(const Models::GetLinkageAttributesTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模板变参可选值
       *
       * @param request GetLinkageAttributesTemplateRequest
       * @return GetLinkageAttributesTemplateResponse
       */
      Models::GetLinkageAttributesTemplateResponse getLinkageAttributesTemplate(const Models::GetLinkageAttributesTemplateRequest &request);

      /**
       * @summary 查看某操作的输入参数
       *
       * @param request GetOperationParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationParamsResponse
       */
      Models::GetOperationParamsResponse getOperationParamsWithOptions(const Models::GetOperationParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看某操作的输入参数
       *
       * @param request GetOperationParamsRequest
       * @return GetOperationParamsResponse
       */
      Models::GetOperationParamsResponse getOperationParams(const Models::GetOperationParamsRequest &request);

      /**
       * @summary Queries the zones where the specified disaster recovery service can be switched.
       *
       * @description You can call this operation to query the zones where the specified disaster recovery service can be switched.
       *
       * @param request GetPotentialFailZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPotentialFailZonesResponse
       */
      Models::GetPotentialFailZonesResponse getPotentialFailZonesWithOptions(const Models::GetPotentialFailZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones where the specified disaster recovery service can be switched.
       *
       * @description You can call this operation to query the zones where the specified disaster recovery service can be switched.
       *
       * @param request GetPotentialFailZonesRequest
       * @return GetPotentialFailZonesResponse
       */
      Models::GetPotentialFailZonesResponse getPotentialFailZones(const Models::GetPotentialFailZonesRequest &request);

      /**
       * @summary 获取询价应用变配记录
       *
       * @param request GetResource4ModifyRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResource4ModifyRecordResponse
       */
      Models::GetResource4ModifyRecordResponse getResource4ModifyRecordWithOptions(const Models::GetResource4ModifyRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取询价应用变配记录
       *
       * @param request GetResource4ModifyRecordRequest
       * @return GetResource4ModifyRecordResponse
       */
      Models::GetResource4ModifyRecordResponse getResource4ModifyRecord(const Models::GetResource4ModifyRecordRequest &request);

      /**
       * @summary 获取询价结果
       *
       * @param request GetResult4QueryInstancePrice4ModifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResult4QueryInstancePrice4ModifyResponse
       */
      Models::GetResult4QueryInstancePrice4ModifyResponse getResult4QueryInstancePrice4ModifyWithOptions(const Models::GetResult4QueryInstancePrice4ModifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取询价结果
       *
       * @param request GetResult4QueryInstancePrice4ModifyRequest
       * @return GetResult4QueryInstancePrice4ModifyResponse
       */
      Models::GetResult4QueryInstancePrice4ModifyResponse getResult4QueryInstancePrice4Modify(const Models::GetResult4QueryInstancePrice4ModifyRequest &request);

      /**
       * @summary 获取Task信息
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Task信息
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Gets template images and information about architecture diagrams.
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets template images and information about architecture diagrams.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @deprecated OpenAPI GetToken is deprecated, please use BPStudio::2021-09-31::GetApplication instead.
       *
       * @summary Obtains a temporary token that is used to read the architecture diagram. The validity period of the token is 30 minutes.
       *
       * @description >Danger:  This API is no longer recommended, and the image related to the Application has included access authorization in the GetApplication property.
       *
       * @param request GetTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetToken is deprecated, please use BPStudio::2021-09-31::GetApplication instead.
       *
       * @summary Obtains a temporary token that is used to read the architecture diagram. The validity period of the token is 30 minutes.
       *
       * @description >Danger:  This API is no longer recommended, and the image related to the Application has included access authorization in the GetApplication property.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary Prepares for application switchover and initiates a switchover task.
       *
       * @description You can call this operation to prepare for application switchover and initiate a switchover task.
       *
       * @param request InitAppFailOverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitAppFailOverResponse
       */
      Models::InitAppFailOverResponse initAppFailOverWithOptions(const Models::InitAppFailOverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prepares for application switchover and initiates a switchover task.
       *
       * @description You can call this operation to prepare for application switchover and initiate a switchover task.
       *
       * @param request InitAppFailOverRequest
       * @return InitAppFailOverResponse
       */
      Models::InitAppFailOverResponse initAppFailOver(const Models::InitAppFailOverRequest &request);

      /**
       * @summary This API provides a list of all applications under the current user. The optional keyword parameter defines the keywords contained in the application name.
       *
       * @param request ListApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplicationWithOptions(const Models::ListApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API provides a list of all applications under the current user. The optional keyword parameter defines the keywords contained in the application name.
       *
       * @param request ListApplicationRequest
       * @return ListApplicationResponse
       */
      Models::ListApplicationResponse listApplication(const Models::ListApplicationRequest &request);

      /**
       * @summary Queries the information about all disaster recovery plans of the current account.
       *
       * @description Queries the information about all disaster recovery plans of the current account.
       *
       * @param request ListFoCreatedAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFoCreatedAppsResponse
       */
      Models::ListFoCreatedAppsResponse listFoCreatedAppsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all disaster recovery plans of the current account.
       *
       * @description Queries the information about all disaster recovery plans of the current account.
       *
       * @return ListFoCreatedAppsResponse
       */
      Models::ListFoCreatedAppsResponse listFoCreatedApps();

      /**
       * @summary 查看某服务支持的操作
       *
       * @param request ListOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationsResponse
       */
      Models::ListOperationsResponse listOperationsWithOptions(const Models::ListOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看某服务支持的操作
       *
       * @param request ListOperationsRequest
       * @return ListOperationsResponse
       */
      Models::ListOperationsResponse listOperations(const Models::ListOperationsRequest &request);

      /**
       * @summary 查看支持的服务列表
       *
       * @param request ListServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看支持的服务列表
       *
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices();

      /**
       * @summary Queries the tags of one or more applications or templates.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of one or more applications or templates.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries templates, including information such as the template name, architecture image URL, and URL of the serialized architecture image file.
       *
       * @param tmpReq ListTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplateWithOptions(const Models::ListTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries templates, including information such as the template name, architecture image URL, and URL of the serialized architecture image file.
       *
       * @param request ListTemplateRequest
       * @return ListTemplateResponse
       */
      Models::ListTemplateResponse listTemplate(const Models::ListTemplateRequest &request);

      /**
       * @summary 提交应用变配
       *
       * @param tmpReq ModifyApplicationSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApplicationSpecResponse
       */
      Models::ModifyApplicationSpecResponse modifyApplicationSpecWithOptions(const Models::ModifyApplicationSpecRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交应用变配
       *
       * @param request ModifyApplicationSpecRequest
       * @return ModifyApplicationSpecResponse
       */
      Models::ModifyApplicationSpecResponse modifyApplicationSpec(const Models::ModifyApplicationSpecRequest &request);

      /**
       * @summary 查询变配价格
       *
       * @param tmpReq QueryInstancePrice4ModifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstancePrice4ModifyResponse
       */
      Models::QueryInstancePrice4ModifyResponse queryInstancePrice4ModifyWithOptions(const Models::QueryInstancePrice4ModifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询变配价格
       *
       * @param request QueryInstancePrice4ModifyRequest
       * @return QueryInstancePrice4ModifyResponse
       */
      Models::QueryInstancePrice4ModifyResponse queryInstancePrice4Modify(const Models::QueryInstancePrice4ModifyRequest &request);

      /**
       * @summary 查询变配规格列表
       *
       * @param tmpReq QueryInstanceSpec4ModifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceSpec4ModifyResponse
       */
      Models::QueryInstanceSpec4ModifyResponse queryInstanceSpec4ModifyWithOptions(const Models::QueryInstanceSpec4ModifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询变配规格列表
       *
       * @param request QueryInstanceSpec4ModifyRequest
       * @return QueryInstanceSpec4ModifyResponse
       */
      Models::QueryInstanceSpec4ModifyResponse queryInstanceSpec4Modify(const Models::QueryInstanceSpec4ModifyRequest &request);

      /**
       * @summary 重新配置应用
       *
       * @param request ReConfigApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReConfigApplicationResponse
       */
      Models::ReConfigApplicationResponse reConfigApplicationWithOptions(const Models::ReConfigApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新配置应用
       *
       * @param request ReConfigApplicationRequest
       * @return ReConfigApplicationResponse
       */
      Models::ReConfigApplicationResponse reConfigApplication(const Models::ReConfigApplicationRequest &request);

      /**
       * @summary Releases the resources of an application.
       *
       * @param request ReleaseApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseApplicationResponse
       */
      Models::ReleaseApplicationResponse releaseApplicationWithOptions(const Models::ReleaseApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the resources of an application.
       *
       * @param request ReleaseApplicationRequest
       * @return ReleaseApplicationResponse
       */
      Models::ReleaseApplicationResponse releaseApplication(const Models::ReleaseApplicationRequest &request);

      /**
       * @summary Verifies the resources of an application. ValidateApplication is an asynchronous operation. You can call the GetApplication operation to query the verification result.
       *
       * @param request ValidateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateApplicationResponse
       */
      Models::ValidateApplicationResponse validateApplicationWithOptions(const Models::ValidateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the resources of an application. ValidateApplication is an asynchronous operation. You can call the GetApplication operation to query the verification result.
       *
       * @param request ValidateApplicationRequest
       * @return ValidateApplicationResponse
       */
      Models::ValidateApplicationResponse validateApplication(const Models::ValidateApplicationRequest &request);

      /**
       * @summary Queries the prices of resources of an application. You can call the GetApplication operation to obtain the query results.
       *
       * @param request ValuateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValuateApplicationResponse
       */
      Models::ValuateApplicationResponse valuateApplicationWithOptions(const Models::ValuateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of resources of an application. You can call the GetApplication operation to obtain the query results.
       *
       * @param request ValuateApplicationRequest
       * @return ValuateApplicationResponse
       */
      Models::ValuateApplicationResponse valuateApplication(const Models::ValuateApplicationRequest &request);

      /**
       * @summary Queries the price of a template.
       *
       * @param tmpReq ValuateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValuateTemplateResponse
       */
      Models::ValuateTemplateResponse valuateTemplateWithOptions(const Models::ValuateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of a template.
       *
       * @param request ValuateTemplateRequest
       * @return ValuateTemplateResponse
       */
      Models::ValuateTemplateResponse valuateTemplate(const Models::ValuateTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
