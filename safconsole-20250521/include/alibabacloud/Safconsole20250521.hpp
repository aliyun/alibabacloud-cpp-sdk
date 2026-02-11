// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAFCONSOLE20250521_HPP_
#define ALIBABACLOUD_SAFCONSOLE20250521_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Safconsole20250521Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Safconsole20250521.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Apply for Bastion Host Account
       *
       * @description ## Request Description
       * - This interface is used for customers to create a modeling project for the first time.
       * - `projectName` is a required field, with a maximum length of 50 characters.
       * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
       * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
       *
       * @param request ApplyBastionAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyBastionAccountResponse
       */
      Models::ApplyBastionAccountResponse applyBastionAccountWithOptions(const Models::ApplyBastionAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply for Bastion Host Account
       *
       * @description ## Request Description
       * - This interface is used for customers to create a modeling project for the first time.
       * - `projectName` is a required field, with a maximum length of 50 characters.
       * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
       * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
       *
       * @param request ApplyBastionAccountRequest
       * @return ApplyBastionAccountResponse
       */
      Models::ApplyBastionAccountResponse applyBastionAccount(const Models::ApplyBastionAccountRequest &request);

      /**
       * @summary Associate Retrospective Task
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request AssociatePocTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociatePocTaskResponse
       */
      Models::AssociatePocTaskResponse associatePocTaskWithOptions(const Models::AssociatePocTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associate Retrospective Task
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request AssociatePocTaskRequest
       * @return AssociatePocTaskResponse
       */
      Models::AssociatePocTaskResponse associatePocTask(const Models::AssociatePocTaskRequest &request);

      /**
       * @summary Complete project and release resources.
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request CompleteModelingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteModelingProjectResponse
       */
      Models::CompleteModelingProjectResponse completeModelingProjectWithOptions(const Models::CompleteModelingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Complete project and release resources.
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request CompleteModelingProjectRequest
       * @return CompleteModelingProjectResponse
       */
      Models::CompleteModelingProjectResponse completeModelingProject(const Models::CompleteModelingProjectRequest &request);

      /**
       * @summary Create basic model information
       *
       * @param request CreateCustomerModuleBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleBasicInfoResponse
       */
      Models::CreateCustomerModuleBasicInfoResponse createCustomerModuleBasicInfoWithOptions(const Models::CreateCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create basic model information
       *
       * @param request CreateCustomerModuleBasicInfoRequest
       * @return CreateCustomerModuleBasicInfoResponse
       */
      Models::CreateCustomerModuleBasicInfoResponse createCustomerModuleBasicInfo(const Models::CreateCustomerModuleBasicInfoRequest &request);

      /**
       * @summary Save Model Feature Configuration
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
       *
       * @param request CreateCustomerModuleMetaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleMetaInfoResponse
       */
      Models::CreateCustomerModuleMetaInfoResponse createCustomerModuleMetaInfoWithOptions(const Models::CreateCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Save Model Feature Configuration
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each option including a label (label) and value (value).
       *
       * @param request CreateCustomerModuleMetaInfoRequest
       * @return CreateCustomerModuleMetaInfoResponse
       */
      Models::CreateCustomerModuleMetaInfoResponse createCustomerModuleMetaInfo(const Models::CreateCustomerModuleMetaInfoRequest &request);

      /**
       * @summary Create Model Output Information
       *
       * @param request CreateCustomerModuleOutputInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomerModuleOutputInfoResponse
       */
      Models::CreateCustomerModuleOutputInfoResponse createCustomerModuleOutputInfoWithOptions(const Models::CreateCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Model Output Information
       *
       * @param request CreateCustomerModuleOutputInfoRequest
       * @return CreateCustomerModuleOutputInfoResponse
       */
      Models::CreateCustomerModuleOutputInfoResponse createCustomerModuleOutputInfo(const Models::CreateCustomerModuleOutputInfoRequest &request);

      /**
       * @summary Initialize a modeling project.
       *
       * @description ## Request Description
       * - This interface is used for customers to create a modeling project for the first time.
       * - `projectName` is a required field, with a maximum length of 50 characters.
       * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
       * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
       *
       * @param request CreateModelingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelingProjectResponse
       */
      Models::CreateModelingProjectResponse createModelingProjectWithOptions(const Models::CreateModelingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialize a modeling project.
       *
       * @description ## Request Description
       * - This interface is used for customers to create a modeling project for the first time.
       * - `projectName` is a required field, with a maximum length of 50 characters.
       * - `remark` and `instanceSpec` are optional, where `remark` has a maximum length of 200 characters.
       * - The available values for `instanceSpec` include `SECURE_ENV_LITE` and `SECURE_ENV_PRO`.
       *
       * @param request CreateModelingProjectRequest
       * @return CreateModelingProjectResponse
       */
      Models::CreateModelingProjectResponse createModelingProject(const Models::CreateModelingProjectRequest &request);

      /**
       * @summary Deletes the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request DeleteModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const Models::DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const Models::DeleteModelRequest &request);

      /**
       * @summary Deploy Model File
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DeployModelFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployModelFileResponse
       */
      Models::DeployModelFileResponse deployModelFileWithOptions(const Models::DeployModelFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploy Model File
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DeployModelFileRequest
       * @return DeployModelFileResponse
       */
      Models::DeployModelFileResponse deployModelFile(const Models::DeployModelFileRequest &request);

      /**
       * @summary Query basic model information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleBasicInfoResponse
       */
      Models::DescribeCustomerModuleBasicInfoResponse describeCustomerModuleBasicInfoWithOptions(const Models::DescribeCustomerModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query basic model information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleBasicInfoRequest
       * @return DescribeCustomerModuleBasicInfoResponse
       */
      Models::DescribeCustomerModuleBasicInfoResponse describeCustomerModuleBasicInfo(const Models::DescribeCustomerModuleBasicInfoRequest &request);

      /**
       * @summary Query model feature information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleMetaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleMetaInfoResponse
       */
      Models::DescribeCustomerModuleMetaInfoResponse describeCustomerModuleMetaInfoWithOptions(const Models::DescribeCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query model feature information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleMetaInfoRequest
       * @return DescribeCustomerModuleMetaInfoResponse
       */
      Models::DescribeCustomerModuleMetaInfoResponse describeCustomerModuleMetaInfo(const Models::DescribeCustomerModuleMetaInfoRequest &request);

      /**
       * @summary Query model output information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleOutputInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleOutputInfoResponse
       */
      Models::DescribeCustomerModuleOutputInfoResponse describeCustomerModuleOutputInfoWithOptions(const Models::DescribeCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query model output information based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include but are not limited to "EDIT", "ONLINE", etc.
       *
       * @param request DescribeCustomerModuleOutputInfoRequest
       * @return DescribeCustomerModuleOutputInfoResponse
       */
      Models::DescribeCustomerModuleOutputInfoResponse describeCustomerModuleOutputInfo(const Models::DescribeCustomerModuleOutputInfoRequest &request);

      /**
       * @summary Return specific feature options based on the feature template
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request DescribeFeatureOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFeatureOptionResponse
       */
      Models::DescribeFeatureOptionResponse describeFeatureOptionWithOptions(const Models::DescribeFeatureOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Return specific feature options based on the feature template
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request DescribeFeatureOptionRequest
       * @return DescribeFeatureOptionResponse
       */
      Models::DescribeFeatureOptionResponse describeFeatureOption(const Models::DescribeFeatureOptionRequest &request);

      /**
       * @summary Get the list of available feature templates for model configuration.
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which consists of a label (label) and a value (value).
       *
       * @param request DescribeFeatureTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFeatureTemplateListResponse
       */
      Models::DescribeFeatureTemplateListResponse describeFeatureTemplateListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of available feature templates for model configuration.
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which consists of a label (label) and a value (value).
       *
       * @return DescribeFeatureTemplateListResponse
       */
      Models::DescribeFeatureTemplateListResponse describeFeatureTemplateList();

      /**
       * @summary Get File Download Link
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DescribeFileDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileDownloadUrlResponse
       */
      Models::DescribeFileDownloadUrlResponse describeFileDownloadUrlWithOptions(const Models::DescribeFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get File Download Link
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DescribeFileDownloadUrlRequest
       * @return DescribeFileDownloadUrlResponse
       */
      Models::DescribeFileDownloadUrlResponse describeFileDownloadUrl(const Models::DescribeFileDownloadUrlRequest &request);

      /**
       * @summary Render the feature configuration of the model
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each including a label (label) and value (value).
       *
       * @param request DescribeModelFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelFeatureResponse
       */
      Models::DescribeModelFeatureResponse describeModelFeatureWithOptions(const Models::DescribeModelFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Render the feature configuration of the model
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each including a label (label) and value (value).
       *
       * @param request DescribeModelFeatureRequest
       * @return DescribeModelFeatureResponse
       */
      Models::DescribeModelFeatureResponse describeModelFeature(const Models::DescribeModelFeatureRequest &request);

      /**
       * @summary Obtain OSS Authentication Data for Upload
       *
       * @param request DescribeModelOssTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelOssTokenResponse
       */
      Models::DescribeModelOssTokenResponse describeModelOssTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain OSS Authentication Data for Upload
       *
       * @return DescribeModelOssTokenResponse
       */
      Models::DescribeModelOssTokenResponse describeModelOssToken();

      /**
       * @summary Get detailed project data
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DescribeModelingProjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelingProjectDetailResponse
       */
      Models::DescribeModelingProjectDetailResponse describeModelingProjectDetailWithOptions(const Models::DescribeModelingProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get detailed project data
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request DescribeModelingProjectDetailRequest
       * @return DescribeModelingProjectDetailResponse
       */
      Models::DescribeModelingProjectDetailResponse describeModelingProjectDetail(const Models::DescribeModelingProjectDetailRequest &request);

      /**
       * @summary Paginated query for the list of modeling projects under the current user.
       *
       * @description ## 请求说明
       * - 该API用于获取指定租户下的所有建模项目的概览信息。
       * - 支持通过`pageSize`和`currentPage`参数进行分页查询，默认每页显示10条记录。
       * - 可选地，使用`status`参数来过滤特定状态（如`active`, `released`等）的项目。
       * - 返回结果中包含每个项目的ID、名称、环境状态、建模状态、开始时间及结束时间（如果有的话），以及创建该项目的登录账号。
       *
       * @param request DescribeModelingProjectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelingProjectListResponse
       */
      Models::DescribeModelingProjectListResponse describeModelingProjectListWithOptions(const Models::DescribeModelingProjectListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Paginated query for the list of modeling projects under the current user.
       *
       * @description ## 请求说明
       * - 该API用于获取指定租户下的所有建模项目的概览信息。
       * - 支持通过`pageSize`和`currentPage`参数进行分页查询，默认每页显示10条记录。
       * - 可选地，使用`status`参数来过滤特定状态（如`active`, `released`等）的项目。
       * - 返回结果中包含每个项目的ID、名称、环境状态、建模状态、开始时间及结束时间（如果有的话），以及创建该项目的登录账号。
       *
       * @param request DescribeModelingProjectListRequest
       * @return DescribeModelingProjectListResponse
       */
      Models::DescribeModelingProjectListResponse describeModelingProjectList(const Models::DescribeModelingProjectListRequest &request);

      /**
       * @summary Query Whether the Service Corresponding to a Specific Model Exists Based on Customer Model ID
       *
       * @description ## Request Description
       * This interface is used to check whether a specific model service exists by providing the `customerModuleId`. If it exists, it returns `true`; otherwise, it returns `false`.
       * ### Notes
       * - `customerModuleId` is a required parameter and must be of string type.
       * - This API is mainly used for front-end page display or logical judgment to confirm whether the service corresponding to the user\\"s selected model has been created.
       *
       * @param request DescribeModuleServiceExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModuleServiceExistResponse
       */
      Models::DescribeModuleServiceExistResponse describeModuleServiceExistWithOptions(const Models::DescribeModuleServiceExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Whether the Service Corresponding to a Specific Model Exists Based on Customer Model ID
       *
       * @description ## Request Description
       * This interface is used to check whether a specific model service exists by providing the `customerModuleId`. If it exists, it returns `true`; otherwise, it returns `false`.
       * ### Notes
       * - `customerModuleId` is a required parameter and must be of string type.
       * - This API is mainly used for front-end page display or logical judgment to confirm whether the service corresponding to the user\\"s selected model has been created.
       *
       * @param request DescribeModuleServiceExistRequest
       * @return DescribeModuleServiceExistResponse
       */
      Models::DescribeModuleServiceExistResponse describeModuleServiceExist(const Models::DescribeModuleServiceExistRequest &request);

      /**
       * @summary Query the current status of a model based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
       *
       * @param request DescribeModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModuleStatusResponse
       */
      Models::DescribeModuleStatusResponse describeModuleStatusWithOptions(const Models::DescribeModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the current status of a model based on the customer model ID
       *
       * @description ## Request Description
       * By providing the `customerModuleId` parameter, you can query the current status of a specified customer model. The status values may include, but are not limited to, "EDIT", "ONLINE", etc.
       *
       * @param request DescribeModuleStatusRequest
       * @return DescribeModuleStatusResponse
       */
      Models::DescribeModuleStatusResponse describeModuleStatus(const Models::DescribeModuleStatusRequest &request);

      /**
       * @summary Query POC task list.
       *
       * @param request DescribePocTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePocTaskListResponse
       */
      Models::DescribePocTaskListResponse describePocTaskListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query POC task list.
       *
       * @return DescribePocTaskListResponse
       */
      Models::DescribePocTaskListResponse describePocTaskList();

      /**
       * @summary Query Model Hosting Orders
       *
       * @param request DescribeSafRmmpOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafRmmpOrderResponse
       */
      Models::DescribeSafRmmpOrderResponse describeSafRmmpOrderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Model Hosting Orders
       *
       * @return DescribeSafRmmpOrderResponse
       */
      Models::DescribeSafRmmpOrderResponse describeSafRmmpOrder();

      /**
       * @summary Query Scene and Service
       *
       * @param request DescribeServiceAndSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAndSceneResponse
       */
      Models::DescribeServiceAndSceneResponse describeServiceAndSceneWithOptions(const Models::DescribeServiceAndSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Scene and Service
       *
       * @param request DescribeServiceAndSceneRequest
       * @return DescribeServiceAndSceneResponse
       */
      Models::DescribeServiceAndSceneResponse describeServiceAndScene(const Models::DescribeServiceAndSceneRequest &request);

      /**
       * @summary Get all model information for a specified user, supporting pagination
       *
       * @description ## Request Description
       * This API is used to query all model information under a specific user and supports pagination through page parameters. Fuzzy search can be performed using the `name` parameter.
       * - `regId`: Region identifier, required.
       * - `pageSize`: Number of items per page, required.
       * - `currentPage`: Current page number, starting from 1, required.
       * - `userId`: User ID, required.
       *
       * @param request DescribeUserModelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserModelListResponse
       */
      Models::DescribeUserModelListResponse describeUserModelListWithOptions(const Models::DescribeUserModelListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get all model information for a specified user, supporting pagination
       *
       * @description ## Request Description
       * This API is used to query all model information under a specific user and supports pagination through page parameters. Fuzzy search can be performed using the `name` parameter.
       * - `regId`: Region identifier, required.
       * - `pageSize`: Number of items per page, required.
       * - `currentPage`: Current page number, starting from 1, required.
       * - `userId`: User ID, required.
       *
       * @param request DescribeUserModelListRequest
       * @return DescribeUserModelListResponse
       */
      Models::DescribeUserModelListResponse describeUserModelList(const Models::DescribeUserModelListRequest &request);

      /**
       * @summary Iterate Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request DuplicateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DuplicateModelResponse
       */
      Models::DuplicateModelResponse duplicateModelWithOptions(const Models::DuplicateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Iterate Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request DuplicateModelRequest
       * @return DuplicateModelResponse
       */
      Models::DuplicateModelResponse duplicateModel(const Models::DuplicateModelRequest &request);

      /**
       * @summary Edit Model
       *
       * @param request EditModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditModelResponse
       */
      Models::EditModelResponse editModelWithOptions(const Models::EditModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Model
       *
       * @param request EditModelRequest
       * @return EditModelResponse
       */
      Models::EditModelResponse editModel(const Models::EditModelRequest &request);

      /**
       * @summary View Bastion Host Initial Password
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request GetBastionHostCertificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBastionHostCertificationResponse
       */
      Models::GetBastionHostCertificationResponse getBastionHostCertificationWithOptions(const Models::GetBastionHostCertificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View Bastion Host Initial Password
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request GetBastionHostCertificationRequest
       * @return GetBastionHostCertificationResponse
       */
      Models::GetBastionHostCertificationResponse getBastionHostCertification(const Models::GetBastionHostCertificationRequest &request);

      /**
       * @summary Iterate Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request IterateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IterateModelResponse
       */
      Models::IterateModelResponse iterateModelWithOptions(const Models::IterateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Iterate Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request IterateModelRequest
       * @return IterateModelResponse
       */
      Models::IterateModelResponse iterateModel(const Models::IterateModelRequest &request);

      /**
       * @summary Offline Model
       *
       * @param request OfflineModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineModelResponse
       */
      Models::OfflineModelResponse offlineModelWithOptions(const Models::OfflineModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Offline Model
       *
       * @param request OfflineModelRequest
       * @return OfflineModelResponse
       */
      Models::OfflineModelResponse offlineModel(const Models::OfflineModelRequest &request);

      /**
       * @summary Online Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request OnlineModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineModelResponse
       */
      Models::OnlineModelResponse onlineModelWithOptions(const Models::OnlineModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Online Model
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: Deletion is irreversible, please use with caution.
       *
       * @param request OnlineModelRequest
       * @return OnlineModelResponse
       */
      Models::OnlineModelResponse onlineModel(const Models::OnlineModelRequest &request);

      /**
       * @summary Parse Expression Parameters
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request ParseExpressionParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseExpressionParametersResponse
       */
      Models::ParseExpressionParametersResponse parseExpressionParametersWithOptions(const Models::ParseExpressionParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parse Expression Parameters
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request ParseExpressionParametersRequest
       * @return ParseExpressionParametersResponse
       */
      Models::ParseExpressionParametersResponse parseExpressionParameters(const Models::ParseExpressionParametersRequest &request);

      /**
       * @summary Pre-release Model
       *
       * @param request PrepublishModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepublishModelResponse
       */
      Models::PrepublishModelResponse prepublishModelWithOptions(const Models::PrepublishModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-release Model
       *
       * @param request PrepublishModelRequest
       * @return PrepublishModelResponse
       */
      Models::PrepublishModelResponse prepublishModel(const Models::PrepublishModelRequest &request);

      /**
       * @summary Request to Sync Model Files
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request RequestModelFileSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestModelFileSyncResponse
       */
      Models::RequestModelFileSyncResponse requestModelFileSyncWithOptions(const Models::RequestModelFileSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Request to Sync Model Files
       *
       * @description ## 请求说明
       * - 本接口用于客户首次创建建模项目。
       * - `projectName` 是必填项，长度不超过50个字符。
       * - `remark` 和 `instanceSpec` 为可选项，其中 `remark` 长度不超过200个字符。
       * - `instanceSpec` 可选值包括 `SECURE_ENV_LITE` 和 `SECURE_ENV_PRO`。
       *
       * @param request RequestModelFileSyncRequest
       * @return RequestModelFileSyncResponse
       */
      Models::RequestModelFileSyncResponse requestModelFileSync(const Models::RequestModelFileSyncRequest &request);

      /**
       * @summary Roll back the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request RollbackModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackModelResponse
       */
      Models::RollbackModelResponse rollbackModelWithOptions(const Models::RollbackModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Roll back the specified customer model based on the provided customer model ID.
       *
       * @description ## Request Description
       * This API is used to delete a specified customer model from the system. When calling, you must provide the `customerModuleId` parameter, which identifies the specific model to be deleted.
       * - **Note**: The deletion operation is irreversible, please use with caution.
       *
       * @param request RollbackModelRequest
       * @return RollbackModelResponse
       */
      Models::RollbackModelResponse rollbackModel(const Models::RollbackModelRequest &request);

      /**
       * @summary Pre-release Model Testing
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestModelResponse
       */
      Models::TestModelResponse testModelWithOptions(const Models::TestModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-release Model Testing
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestModelRequest
       * @return TestModelResponse
       */
      Models::TestModelResponse testModel(const Models::TestModelRequest &request);

      /**
       * @summary Pre-release Test Model
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestPreModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestPreModelResponse
       */
      Models::TestPreModelResponse testPreModelWithOptions(const Models::TestPreModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-release Test Model
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestPreModelRequest
       * @return TestPreModelResponse
       */
      Models::TestPreModelResponse testPreModel(const Models::TestPreModelRequest &request);

      /**
       * @summary Test Expression
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestProcessExpressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestProcessExpressionResponse
       */
      Models::TestProcessExpressionResponse testProcessExpressionWithOptions(const Models::TestProcessExpressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Test Expression
       *
       * @description ## Request Description
       * - This interface is used to query all available feature templates in the system.
       * - The request method is GET, and no additional parameters are required.
       * - The returned result includes multiple feature template options, each of which includes a label (label) and a value (value).
       *
       * @param request TestProcessExpressionRequest
       * @return TestProcessExpressionResponse
       */
      Models::TestProcessExpressionResponse testProcessExpression(const Models::TestProcessExpressionRequest &request);

      /**
       * @summary Update basic model information
       *
       * @param request UpdateModuleBasicInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModuleBasicInfoResponse
       */
      Models::UpdateModuleBasicInfoResponse updateModuleBasicInfoWithOptions(const Models::UpdateModuleBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update basic model information
       *
       * @param request UpdateModuleBasicInfoRequest
       * @return UpdateModuleBasicInfoResponse
       */
      Models::UpdateModuleBasicInfoResponse updateModuleBasicInfo(const Models::UpdateModuleBasicInfoRequest &request);

      /**
       * @summary Validate model file
       *
       * @param request ValidateModelFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateModelFileResponse
       */
      Models::ValidateModelFileResponse validateModelFileWithOptions(const Models::ValidateModelFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate model file
       *
       * @param request ValidateModelFileRequest
       * @return ValidateModelFileResponse
       */
      Models::ValidateModelFileResponse validateModelFile(const Models::ValidateModelFileRequest &request);

      /**
       * @summary Validate Test File
       *
       * @param request ValidateTestFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateTestFileResponse
       */
      Models::ValidateTestFileResponse validateTestFileWithOptions(const Models::ValidateTestFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate Test File
       *
       * @param request ValidateTestFileRequest
       * @return ValidateTestFileResponse
       */
      Models::ValidateTestFileResponse validateTestFile(const Models::ValidateTestFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
