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
       * @summary 根据客户模型ID查询模型特征信息
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeCustomerModuleMetaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleMetaInfoResponse
       */
      Models::DescribeCustomerModuleMetaInfoResponse describeCustomerModuleMetaInfoWithOptions(const Models::DescribeCustomerModuleMetaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据客户模型ID查询模型特征信息
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeCustomerModuleMetaInfoRequest
       * @return DescribeCustomerModuleMetaInfoResponse
       */
      Models::DescribeCustomerModuleMetaInfoResponse describeCustomerModuleMetaInfo(const Models::DescribeCustomerModuleMetaInfoRequest &request);

      /**
       * @summary 根据客户模型ID查询模型出参信息
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeCustomerModuleOutputInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomerModuleOutputInfoResponse
       */
      Models::DescribeCustomerModuleOutputInfoResponse describeCustomerModuleOutputInfoWithOptions(const Models::DescribeCustomerModuleOutputInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据客户模型ID查询模型出参信息
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeCustomerModuleOutputInfoRequest
       * @return DescribeCustomerModuleOutputInfoResponse
       */
      Models::DescribeCustomerModuleOutputInfoResponse describeCustomerModuleOutputInfo(const Models::DescribeCustomerModuleOutputInfoRequest &request);

      /**
       * @summary 根据特征模板返回特征模板具体特征选项
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request DescribeFeatureOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFeatureOptionResponse
       */
      Models::DescribeFeatureOptionResponse describeFeatureOptionWithOptions(const Models::DescribeFeatureOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据特征模板返回特征模板具体特征选项
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request DescribeFeatureOptionRequest
       * @return DescribeFeatureOptionResponse
       */
      Models::DescribeFeatureOptionResponse describeFeatureOption(const Models::DescribeFeatureOptionRequest &request);

      /**
       * @summary 获取可用的特征模板列表，用于模型配置。
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request DescribeFeatureTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFeatureTemplateListResponse
       */
      Models::DescribeFeatureTemplateListResponse describeFeatureTemplateListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可用的特征模板列表，用于模型配置。
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @return DescribeFeatureTemplateListResponse
       */
      Models::DescribeFeatureTemplateListResponse describeFeatureTemplateList();

      /**
       * @summary 渲染模型的特征配置
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request DescribeModelFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelFeatureResponse
       */
      Models::DescribeModelFeatureResponse describeModelFeatureWithOptions(const Models::DescribeModelFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渲染模型的特征配置
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request DescribeModelFeatureRequest
       * @return DescribeModelFeatureResponse
       */
      Models::DescribeModelFeatureResponse describeModelFeature(const Models::DescribeModelFeatureRequest &request);

      /**
       * @summary 获取上传oss鉴权数据
       *
       * @param request DescribeModelOssTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelOssTokenResponse
       */
      Models::DescribeModelOssTokenResponse describeModelOssTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取上传oss鉴权数据
       *
       * @return DescribeModelOssTokenResponse
       */
      Models::DescribeModelOssTokenResponse describeModelOssToken();

      /**
       * @summary 根据客户模型ID查询指定模型对应服务是否存在
       *
       * @description ## 请求说明
       * 该接口用于通过提供的`customerModuleId`来检查特定的模型服务是否已经存在。如果存在，则返回`true`；反之则返回`false`。
       * ### 注意事项
       * - `customerModuleId`是必须提供的参数，且为字符串类型。
       * - 此API主要用于前端页面展示或逻辑判断时使用，以确认用户所选模型是否有对应的服务被创建。
       *
       * @param request DescribeModuleServiceExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModuleServiceExistResponse
       */
      Models::DescribeModuleServiceExistResponse describeModuleServiceExistWithOptions(const Models::DescribeModuleServiceExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据客户模型ID查询指定模型对应服务是否存在
       *
       * @description ## 请求说明
       * 该接口用于通过提供的`customerModuleId`来检查特定的模型服务是否已经存在。如果存在，则返回`true`；反之则返回`false`。
       * ### 注意事项
       * - `customerModuleId`是必须提供的参数，且为字符串类型。
       * - 此API主要用于前端页面展示或逻辑判断时使用，以确认用户所选模型是否有对应的服务被创建。
       *
       * @param request DescribeModuleServiceExistRequest
       * @return DescribeModuleServiceExistResponse
       */
      Models::DescribeModuleServiceExistResponse describeModuleServiceExist(const Models::DescribeModuleServiceExistRequest &request);

      /**
       * @summary 根据客户模型ID查询模型当前状态
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModuleStatusResponse
       */
      Models::DescribeModuleStatusResponse describeModuleStatusWithOptions(const Models::DescribeModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据客户模型ID查询模型当前状态
       *
       * @description ## 请求说明
       * 通过提供`customerModuleId`参数，可以查询指定客户模型的当前状态。状态值可能包括但不限于"EDIT"、"ONLINE"等。
       *
       * @param request DescribeModuleStatusRequest
       * @return DescribeModuleStatusResponse
       */
      Models::DescribeModuleStatusResponse describeModuleStatus(const Models::DescribeModuleStatusRequest &request);

      /**
       * @summary 查询模型托管订单
       *
       * @param request DescribeSafRmmpOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSafRmmpOrderResponse
       */
      Models::DescribeSafRmmpOrderResponse describeSafRmmpOrderWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型托管订单
       *
       * @return DescribeSafRmmpOrderResponse
       */
      Models::DescribeSafRmmpOrderResponse describeSafRmmpOrder();

      /**
       * @summary 查询场景和服务
       *
       * @param request DescribeServiceAndSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceAndSceneResponse
       */
      Models::DescribeServiceAndSceneResponse describeServiceAndSceneWithOptions(const Models::DescribeServiceAndSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询场景和服务
       *
       * @param request DescribeServiceAndSceneRequest
       * @return DescribeServiceAndSceneResponse
       */
      Models::DescribeServiceAndSceneResponse describeServiceAndScene(const Models::DescribeServiceAndSceneRequest &request);

      /**
       * @summary 获取指定用户下的所有模型信息，支持分页查询
       *
       * @description ## 请求说明
       * 该 API 用于查询特定用户下的所有模型信息，并支持通过分页参数进行分页查询。可以通过 `name` 参数进行模糊搜索。
       * - `regId`: 地域标识，必填。
       * - `pageSize`: 每页显示的条目数，必填。
       * - `currentPage`: 当前页码，从1开始计数，必填。
       * - `userId`: 用户ID，必填。
       *
       * @param request DescribeUserModelListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserModelListResponse
       */
      Models::DescribeUserModelListResponse describeUserModelListWithOptions(const Models::DescribeUserModelListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定用户下的所有模型信息，支持分页查询
       *
       * @description ## 请求说明
       * 该 API 用于查询特定用户下的所有模型信息，并支持通过分页参数进行分页查询。可以通过 `name` 参数进行模糊搜索。
       * - `regId`: 地域标识，必填。
       * - `pageSize`: 每页显示的条目数，必填。
       * - `currentPage`: 当前页码，从1开始计数，必填。
       * - `userId`: 用户ID，必填。
       *
       * @param request DescribeUserModelListRequest
       * @return DescribeUserModelListResponse
       */
      Models::DescribeUserModelListResponse describeUserModelList(const Models::DescribeUserModelListRequest &request);

      /**
       * @summary 迭代模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request DuplicateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DuplicateModelResponse
       */
      Models::DuplicateModelResponse duplicateModelWithOptions(const Models::DuplicateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迭代模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request DuplicateModelRequest
       * @return DuplicateModelResponse
       */
      Models::DuplicateModelResponse duplicateModel(const Models::DuplicateModelRequest &request);

      /**
       * @summary 编辑模型
       *
       * @param request EditModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditModelResponse
       */
      Models::EditModelResponse editModelWithOptions(const Models::EditModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑模型
       *
       * @param request EditModelRequest
       * @return EditModelResponse
       */
      Models::EditModelResponse editModel(const Models::EditModelRequest &request);

      /**
       * @summary 迭代模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request IterateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IterateModelResponse
       */
      Models::IterateModelResponse iterateModelWithOptions(const Models::IterateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 迭代模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request IterateModelRequest
       * @return IterateModelResponse
       */
      Models::IterateModelResponse iterateModel(const Models::IterateModelRequest &request);

      /**
       * @summary 下线模型
       *
       * @param request OfflineModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineModelResponse
       */
      Models::OfflineModelResponse offlineModelWithOptions(const Models::OfflineModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线模型
       *
       * @param request OfflineModelRequest
       * @return OfflineModelResponse
       */
      Models::OfflineModelResponse offlineModel(const Models::OfflineModelRequest &request);

      /**
       * @summary 上线模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request OnlineModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineModelResponse
       */
      Models::OnlineModelResponse onlineModelWithOptions(const Models::OnlineModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上线模型
       *
       * @description ## 请求说明
       * 本API用于从系统中删除指定的客户模型。调用时必须提供`customerModuleId`参数，该参数标识了要删除的具体模型。
       * - **注意**：删除操作不可逆，请谨慎使用。
       *
       * @param request OnlineModelRequest
       * @return OnlineModelResponse
       */
      Models::OnlineModelResponse onlineModel(const Models::OnlineModelRequest &request);

      /**
       * @summary 解析表达式参数
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request ParseExpressionParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseExpressionParametersResponse
       */
      Models::ParseExpressionParametersResponse parseExpressionParametersWithOptions(const Models::ParseExpressionParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析表达式参数
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request ParseExpressionParametersRequest
       * @return ParseExpressionParametersResponse
       */
      Models::ParseExpressionParametersResponse parseExpressionParameters(const Models::ParseExpressionParametersRequest &request);

      /**
       * @summary 预发布模型
       *
       * @param request PrepublishModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepublishModelResponse
       */
      Models::PrepublishModelResponse prepublishModelWithOptions(const Models::PrepublishModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预发布模型
       *
       * @param request PrepublishModelRequest
       * @return PrepublishModelResponse
       */
      Models::PrepublishModelResponse prepublishModel(const Models::PrepublishModelRequest &request);

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
       * @summary 预发布测试模型
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request TestModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestModelResponse
       */
      Models::TestModelResponse testModelWithOptions(const Models::TestModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预发布测试模型
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request TestModelRequest
       * @return TestModelResponse
       */
      Models::TestModelResponse testModel(const Models::TestModelRequest &request);

      /**
       * @summary 预发布测试模型
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request TestPreModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestPreModelResponse
       */
      Models::TestPreModelResponse testPreModelWithOptions(const Models::TestPreModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预发布测试模型
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request TestPreModelRequest
       * @return TestPreModelResponse
       */
      Models::TestPreModelResponse testPreModel(const Models::TestPreModelRequest &request);

      /**
       * @summary 测试表达式
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
       *
       * @param request TestProcessExpressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestProcessExpressionResponse
       */
      Models::TestProcessExpressionResponse testProcessExpressionWithOptions(const Models::TestProcessExpressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 测试表达式
       *
       * @description ## 请求说明
       * - 该接口用于查询系统中所有可用的特征模板。
       * - 请求方式为 GET，无需提供额外参数。
       * - 返回结果包含多个特征模板选项，每个选项包括标签（label）和值（value）。
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
