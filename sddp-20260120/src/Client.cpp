#include <darabonba/Core.hpp>
#include <alibabacloud/Sddp20260120.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sddp20260120::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sddp20260120
{

AlibabaCloud::Sddp20260120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hongkong" , "sddp-api.cn-hongkong.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("sddp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 校验列加密实例权限
 *
 * @description 创建列加密前检查实例的权限、引擎及运行条件。应同时检查响应中的 ErrorCode 和 ErrorMessage；仅 ErrorCode=Success 表示检查通过，请求成功本身不表示实例满足全部加密条件。此检查不会创建列加密规则。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request CheckDataMaskingInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataMaskingInstanceResponse
 */
CheckDataMaskingInstanceResponse Client::checkDataMaskingInstanceWithOptions(const CheckDataMaskingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDataMaskingInstance"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataMaskingInstanceResponse>();
}

/**
 * @summary 校验列加密实例权限
 *
 * @description 创建列加密前检查实例的权限、引擎及运行条件。应同时检查响应中的 ErrorCode 和 ErrorMessage；仅 ErrorCode=Success 表示检查通过，请求成功本身不表示实例满足全部加密条件。此检查不会创建列加密规则。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request CheckDataMaskingInstanceRequest
 * @return CheckDataMaskingInstanceResponse
 */
CheckDataMaskingInstanceResponse Client::checkDataMaskingInstance(const CheckDataMaskingInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataMaskingInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建列加密策略
 *
 * @description 为同一实例下指定数据库、表和列创建列加密规则。调用前检查实例状态、支持算法、密钥、目标列和账号。SubRuleList 为按表分组的目标列表，Columns 是以英文逗号分隔的列名字符串；UserList 中的账号被授予 fullAccess 明文权限。请求成功仅表示已受理，必须回读 ListDataMaskingColumns 和 ListDataAssetAccounts 确认列状态、账号权限及期限。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param tmpReq CreateDataMaskingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataMaskingRuleResponse
 */
CreateDataMaskingRuleResponse Client::createDataMaskingRuleWithOptions(const CreateDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataMaskingRuleShrinkRequest request = CreateDataMaskingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubRuleList()) {
    request.setSubRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubRuleList(), "SubRuleList", "json"));
  }

  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasEncAlgorithm()) {
    query["EncAlgorithm"] = request.getEncAlgorithm();
  }

  if (!!request.hasEncryptionKeyId()) {
    query["EncryptionKeyId"] = request.getEncryptionKeyId();
  }

  if (!!request.hasEncryptionKeyMode()) {
    query["EncryptionKeyMode"] = request.getEncryptionKeyMode();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExpireTimeOperation()) {
    query["ExpireTimeOperation"] = request.getExpireTimeOperation();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskHandleId()) {
    query["RiskHandleId"] = request.getRiskHandleId();
  }

  if (!!request.hasSubRuleListShrink()) {
    query["SubRuleList"] = request.getSubRuleListShrink();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.getUserListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataMaskingRule"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataMaskingRuleResponse>();
}

/**
 * @summary 创建列加密策略
 *
 * @description 为同一实例下指定数据库、表和列创建列加密规则。调用前检查实例状态、支持算法、密钥、目标列和账号。SubRuleList 为按表分组的目标列表，Columns 是以英文逗号分隔的列名字符串；UserList 中的账号被授予 fullAccess 明文权限。请求成功仅表示已受理，必须回读 ListDataMaskingColumns 和 ListDataAssetAccounts 确认列状态、账号权限及期限。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request CreateDataMaskingRuleRequest
 * @return CreateDataMaskingRuleResponse
 */
CreateDataMaskingRuleResponse Client::createDataMaskingRule(const CreateDataMaskingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataMaskingRuleWithOptions(request, runtime);
}

/**
 * @summary 删除列加密策略
 *
 * @param tmpReq DeleteDataMaskingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataMaskingRuleResponse
 */
DeleteDataMaskingRuleResponse Client::deleteDataMaskingRuleWithOptions(const DeleteDataMaskingRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataMaskingRuleShrinkRequest request = DeleteDataMaskingRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubRuleList()) {
    request.setSubRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubRuleList(), "SubRuleList", "json"));
  }

  json query = {};
  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSubRuleListShrink()) {
    query["SubRuleList"] = request.getSubRuleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataMaskingRule"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataMaskingRuleResponse>();
}

/**
 * @summary 删除列加密策略
 *
 * @param request DeleteDataMaskingRuleRequest
 * @return DeleteDataMaskingRuleResponse
 */
DeleteDataMaskingRuleResponse Client::deleteDataMaskingRule(const DeleteDataMaskingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataMaskingRuleWithOptions(request, runtime);
}

/**
 * @summary 检查实例列加密状态
 *
 * @description 按产品范围查询当前地域数据库账号的权限统计。明文账号对应 FullAccessCount；限制访问和禁止解密账号分别计入 RestrictedAccessCount、NoneAccessCount。未配置权限账号数可由 TotalCount 减去上述三类账号数得到。本接口不接受实例、库、表、列等筛选条件。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request GetDataMaskingAccountCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataMaskingAccountCountResponse
 */
GetDataMaskingAccountCountResponse Client::getDataMaskingAccountCountWithOptions(const GetDataMaskingAccountCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataMaskingAccountCount"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataMaskingAccountCountResponse>();
}

/**
 * @summary 检查实例列加密状态
 *
 * @description 按产品范围查询当前地域数据库账号的权限统计。明文账号对应 FullAccessCount；限制访问和禁止解密账号分别计入 RestrictedAccessCount、NoneAccessCount。未配置权限账号数可由 TotalCount 减去上述三类账号数得到。本接口不接受实例、库、表、列等筛选条件。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request GetDataMaskingAccountCountRequest
 * @return GetDataMaskingAccountCountResponse
 */
GetDataMaskingAccountCountResponse Client::getDataMaskingAccountCount(const GetDataMaskingAccountCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataMaskingAccountCountWithOptions(request, runtime);
}

/**
 * @summary 获取列加密统计信息
 *
 * @description 按地域、产品和分类分级模板查询总列数、敏感列数、已加密列数和加密失败列数。本接口返回统计卡片数据，不跟随列列表中的实例、库名、表名、列名或模型筛选。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request GetDataMaskingColumnCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataMaskingColumnCountResponse
 */
GetDataMaskingColumnCountResponse Client::getDataMaskingColumnCountWithOptions(const GetDataMaskingColumnCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataMaskingColumnCount"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataMaskingColumnCountResponse>();
}

/**
 * @summary 获取列加密统计信息
 *
 * @description 按地域、产品和分类分级模板查询总列数、敏感列数、已加密列数和加密失败列数。本接口返回统计卡片数据，不跟随列列表中的实例、库名、表名、列名或模型筛选。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request GetDataMaskingColumnCountRequest
 * @return GetDataMaskingColumnCountResponse
 */
GetDataMaskingColumnCountResponse Client::getDataMaskingColumnCount(const GetDataMaskingColumnCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataMaskingColumnCountWithOptions(request, runtime);
}

/**
 * @summary 获取实例属性
 *
 * @param request GetInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceAttributeResponse
 */
GetInstanceAttributeResponse Client::getInstanceAttributeWithOptions(const GetInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceAttribute"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceAttributeResponse>();
}

/**
 * @summary 获取实例属性
 *
 * @param request GetInstanceAttributeRequest
 * @return GetInstanceAttributeResponse
 */
GetInstanceAttributeResponse Client::getInstanceAttribute(const GetInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询数据安全中心连接授权的MaxCompute、RDS等数据资产表中列的数据
 *
 * @param request ListColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumnsWithOptions(const ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetSourceId()) {
    query["DataAssetSourceId"] = request.getDataAssetSourceId();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListColumns"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListColumnsResponse>();
}

/**
 * @summary 查询数据安全中心连接授权的MaxCompute、RDS等数据资产表中列的数据
 *
 * @param request ListColumnsRequest
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumns(const ListColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listColumnsWithOptions(request, runtime);
}

/**
 * @summary 查询账号列表
 *
 * @param request ListDataAssetAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAssetAccountsResponse
 */
ListDataAssetAccountsResponse Client::listDataAssetAccountsWithOptions(const ListDataAssetAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.getAccountName();
  }

  if (!!request.hasAuthRole()) {
    query["AuthRole"] = request.getAuthRole();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAssetAccounts"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAssetAccountsResponse>();
}

/**
 * @summary 查询账号列表
 *
 * @param request ListDataAssetAccountsRequest
 * @return ListDataAssetAccountsResponse
 */
ListDataAssetAccountsResponse Client::listDataAssetAccounts(const ListDataAssetAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAssetAccountsWithOptions(request, runtime);
}

/**
 * @summary 获取列加密列列表
 *
 * @description 分页查询列及其加密状态、敏感等级和识别模型。支持模板、产品、实例、数据库、表、列名、模型和敏感等级组合筛选。创建或关闭规则后使用本接口回读；Processing、Deleting 为中间状态，Failed、DeleteFailed 表示操作失败。RiskLeveLId 的参数名大小写应原样保留。
 * 按产品查询时使用单个 ProductId 或对应 ProductCode。当前列查询不能依赖 ProductIds 实现多产品筛选；多产品应分别查询。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingColumnsResponse
 */
ListDataMaskingColumnsResponse Client::listDataMaskingColumnsWithOptions(const ListDataMaskingColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaskingStatus()) {
    query["MaskingStatus"] = request.getMaskingStatus();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasRiskLeveLId()) {
    query["RiskLeveLId"] = request.getRiskLeveLId();
  }

  if (!!request.hasRiskLevelIds()) {
    query["RiskLevelIds"] = request.getRiskLevelIds();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingColumns"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingColumnsResponse>();
}

/**
 * @summary 获取列加密列列表
 *
 * @description 分页查询列及其加密状态、敏感等级和识别模型。支持模板、产品、实例、数据库、表、列名、模型和敏感等级组合筛选。创建或关闭规则后使用本接口回读；Processing、Deleting 为中间状态，Failed、DeleteFailed 表示操作失败。RiskLeveLId 的参数名大小写应原样保留。
 * 按产品查询时使用单个 ProductId 或对应 ProductCode。当前列查询不能依赖 ProductIds 实现多产品筛选；多产品应分别查询。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingColumnsRequest
 * @return ListDataMaskingColumnsResponse
 */
ListDataMaskingColumnsResponse Client::listDataMaskingColumns(const ListDataMaskingColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingColumnsWithOptions(request, runtime);
}

/**
 * @summary 查询实例支持的列加密算法列表
 *
 * @description 查询指定实例可选的列加密算法及各算法的限制原因。选择算法前检查对应项的 ErrorCode 和 ErrorMessage；不要把所有实例都视为支持同一组算法。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingEncryptionAlgorithmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingEncryptionAlgorithmsResponse
 */
ListDataMaskingEncryptionAlgorithmsResponse Client::listDataMaskingEncryptionAlgorithmsWithOptions(const ListDataMaskingEncryptionAlgorithmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingEncryptionAlgorithms"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingEncryptionAlgorithmsResponse>();
}

/**
 * @summary 查询实例支持的列加密算法列表
 *
 * @description 查询指定实例可选的列加密算法及各算法的限制原因。选择算法前检查对应项的 ErrorCode 和 ErrorMessage；不要把所有实例都视为支持同一组算法。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingEncryptionAlgorithmsRequest
 * @return ListDataMaskingEncryptionAlgorithmsResponse
 */
ListDataMaskingEncryptionAlgorithmsResponse Client::listDataMaskingEncryptionAlgorithms(const ListDataMaskingEncryptionAlgorithmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingEncryptionAlgorithmsWithOptions(request, runtime);
}

/**
 * @summary 获取列加密实例列表
 *
 * @description 分页查询列加密实例，并支持产品、识别模板及库表列等条件。实例级状态筛选与列级状态筛选范围不同：查找全部未加密敏感列时，先枚举目标产品的实例，再使用 ListDataMaskingColumns 按 NotEncrypted 筛选，避免遗漏已经部分加密的实例。
 * 需要按 EngineType 精确筛选时，应完整分页读取候选后按返回值过滤；部分查询路径不应用此参数。InstanceId 的匹配语义随查询组合变化，精确定位时应核对返回的完整实例标识。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataMaskingInstancesResponse
 */
ListDataMaskingInstancesResponse Client::listDataMaskingInstancesWithOptions(const ListDataMaskingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.getColumnName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.getEngineType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaskingStatus()) {
    query["MaskingStatus"] = request.getMaskingStatus();
  }

  if (!!request.hasModelTagId()) {
    query["ModelTagId"] = request.getModelTagId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasProductIds()) {
    query["ProductIds"] = request.getProductIds();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRiskLevelIds()) {
    query["RiskLevelIds"] = request.getRiskLevelIds();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateRuleIds()) {
    query["TemplateRuleIds"] = request.getTemplateRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataMaskingInstances"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataMaskingInstancesResponse>();
}

/**
 * @summary 获取列加密实例列表
 *
 * @description 分页查询列加密实例，并支持产品、识别模板及库表列等条件。实例级状态筛选与列级状态筛选范围不同：查找全部未加密敏感列时，先枚举目标产品的实例，再使用 ListDataMaskingColumns 按 NotEncrypted 筛选，避免遗漏已经部分加密的实例。
 * 需要按 EngineType 精确筛选时，应完整分页读取候选后按返回值过滤；部分查询路径不应用此参数。InstanceId 的匹配语义随查询组合变化，精确定位时应核对返回的完整实例标识。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataMaskingInstancesRequest
 * @return ListDataMaskingInstancesResponse
 */
ListDataMaskingInstancesResponse Client::listDataMaskingInstances(const ListDataMaskingInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataMaskingInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询数据源列表
 *
 * @description 分页查询已纳管的数据源。关系型数据库场景通过 ProductCode、InstanceId 定位实例，从 Items[].DbName 选择数据库。本接口查询数据库库存，不使用分类分级模板筛选。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectStatus()) {
    query["ConnectStatus"] = request.getConnectStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetId()) {
    query["DataAssetId"] = request.getDataAssetId();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.getDbName();
  }

  if (!!request.hasIdentifyStatus()) {
    query["IdentifyStatus"] = request.getIdentifyStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary 查询数据源列表
 *
 * @description 分页查询已纳管的数据源。关系型数据库场景通过 ProductCode、InstanceId 定位实例，从 Items[].DbName 选择数据库。本接口查询数据库库存，不使用分类分级模板筛选。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary 查询模板的所有规则
 *
 * @description 查询指定模板内有效的识别模型，返回 RuleList。未指定 TemplateId 时使用当前启用模板。模型标识取 RuleList[].Id，可用于 TemplateRuleIds 筛选。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListIdentifyModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentifyModelsResponse
 */
ListIdentifyModelsResponse Client::listIdentifyModelsWithOptions(const ListIdentifyModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasFilterAuditModel()) {
    query["FilterAuditModel"] = request.getFilterAuditModel();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentifyModels"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentifyModelsResponse>();
}

/**
 * @summary 查询模板的所有规则
 *
 * @description 查询指定模板内有效的识别模型，返回 RuleList。未指定 TemplateId 时使用当前启用模板。模型标识取 RuleList[].Id，可用于 TemplateRuleIds 筛选。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListIdentifyModelsRequest
 * @return ListIdentifyModelsResponse
 */
ListIdentifyModelsResponse Client::listIdentifyModels(const ListIdentifyModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentifyModelsWithOptions(request, runtime);
}

/**
 * @summary 查询可用的KMS主密钥
 *
 * @param request ListKmsKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKmsKeysResponse
 */
ListKmsKeysResponse Client::listKmsKeysWithOptions(const ListKmsKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKmsKeys"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKmsKeysResponse>();
}

/**
 * @summary 查询可用的KMS主密钥
 *
 * @param request ListKmsKeysRequest
 * @return ListKmsKeysResponse
 */
ListKmsKeysResponse Client::listKmsKeys(const ListKmsKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKmsKeysWithOptions(request, runtime);
}

/**
 * @summary 获取实例内核版本列表
 *
 * @description 查询实例可选择的内核版本。升级时从 KernelVersions[].KernelVersion 选择目标，不应手工构造版本号。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListMiniEngineVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMiniEngineVersionsResponse
 */
ListMiniEngineVersionsResponse Client::listMiniEngineVersionsWithOptions(const ListMiniEngineVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMiniEngineVersions"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMiniEngineVersionsResponse>();
}

/**
 * @summary 获取实例内核版本列表
 *
 * @description 查询实例可选择的内核版本。升级时从 KernelVersions[].KernelVersion 选择目标，不应手工构造版本号。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListMiniEngineVersionsRequest
 * @return ListMiniEngineVersionsResponse
 */
ListMiniEngineVersionsResponse Client::listMiniEngineVersions(const ListMiniEngineVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMiniEngineVersionsWithOptions(request, runtime);
}

/**
 * @summary 查询区域列表
 *
 * @description 查询当前账号拥有资产的地域列表，用于选择后续地域化接口的 RegionId。可按是否开启审计、是否开启识别筛选。返回的地域列表不等同于所有云产品支持地域清单。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegionsWithOptions(const ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudited()) {
    query["Audited"] = request.getAudited();
  }

  if (!!request.hasIdentified()) {
    query["Identified"] = request.getIdentified();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRegions"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRegionsResponse>();
}

/**
 * @summary 查询区域列表
 *
 * @description 查询当前账号拥有资产的地域列表，用于选择后续地域化接口的 RegionId。可按是否开启审计、是否开启识别筛选。返回的地域列表不等同于所有云产品支持地域清单。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListRegionsRequest
 * @return ListRegionsResponse
 */
ListRegionsResponse Client::listRegions(const ListRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRegionsWithOptions(request, runtime);
}

/**
 * @summary 查询风险级别列表
 *
 * @param request ListRiskLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRiskLevelsResponse
 */
ListRiskLevelsResponse Client::listRiskLevelsWithOptions(const ListRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRiskLevels"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRiskLevelsResponse>();
}

/**
 * @summary 查询风险级别列表
 *
 * @param request ListRiskLevelsRequest
 * @return ListRiskLevelsResponse
 */
ListRiskLevelsResponse Client::listRiskLevels(const ListRiskLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRiskLevelsWithOptions(request, runtime);
}

/**
 * @summary 查询表识别结果列表
 *
 * @description 分页查询数据库中的数据表及识别结果。关系型数据库场景传入 DataAssetSourceId=实例标识、DataSourceName=数据库名称。PostgreSQL 和 Oracle 的表名可能包含 schema 前缀，后续列查询应原样传递表名。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataAssetSourceId()) {
    query["DataAssetSourceId"] = request.getDataAssetSourceId();
  }

  if (!!request.hasDataSourceName()) {
    query["DataSourceName"] = request.getDataSourceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasRiskLevelId()) {
    query["RiskLevelId"] = request.getRiskLevelId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary 查询表识别结果列表
 *
 * @description 分页查询数据库中的数据表及识别结果。关系型数据库场景传入 DataAssetSourceId=实例标识、DataSourceName=数据库名称。PostgreSQL 和 Oracle 的表名可能包含 schema 前缀，后续列查询应原样传递表名。
 * 为兼容历史识别结果，指定模板无首屏结果且未按敏感等级或识别模型过滤时，结果可能回退到内置通用识别结果。要求严格模板归属时，请同时使用该模板内的等级或模型条件核验。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary 查询识别模版列表
 *
 * @param request ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFeatureType()) {
    query["FeatureType"] = request.getFeatureType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.getUsageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary 查询识别模版列表
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary 提供数据目录、总览页面的敏感数据汇总
 *
 * @description 查询总览、数据目录或按地域汇总的敏感数据统计。CountType=41 返回总览统计，42 返回指定产品的数据目录统计，43 返回按地域和模板聚合的数据。列加密控制台使用 CountType=43 与 ProductCodeList 获取地域和模板候选。统计数据可能来自已生成的汇总结果，不代表刚发起的同步或加密操作已经完成。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListTotalSensitiveInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTotalSensitiveInfoResponse
 */
ListTotalSensitiveInfoResponse Client::listTotalSensitiveInfoWithOptions(const ListTotalSensitiveInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountType()) {
    query["CountType"] = request.getCountType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductCodeList()) {
    query["ProductCodeList"] = request.getProductCodeList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTotalSensitiveInfo"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTotalSensitiveInfoResponse>();
}

/**
 * @summary 提供数据目录、总览页面的敏感数据汇总
 *
 * @description 查询总览、数据目录或按地域汇总的敏感数据统计。CountType=41 返回总览统计，42 返回指定产品的数据目录统计，43 返回按地域和模板聚合的数据。列加密控制台使用 CountType=43 与 ProductCodeList 获取地域和模板候选。统计数据可能来自已生成的汇总结果，不代表刚发起的同步或加密操作已经完成。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 *
 * @param request ListTotalSensitiveInfoRequest
 * @return ListTotalSensitiveInfoResponse
 */
ListTotalSensitiveInfoResponse Client::listTotalSensitiveInfo(const ListTotalSensitiveInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTotalSensitiveInfoWithOptions(request, runtime);
}

/**
 * @summary 资产同步
 *
 * @description 触发当前地域内指定产品的资产同步，作用范围是产品和地域，不限于某个实例。请求成功仅表示已受理；随后通过实例、数据库、表和列列表核对资产变化。该接口不返回可供轮询的公开任务标识。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request SyncDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDataAssetsResponse
 */
SyncDataAssetsResponse Client::syncDataAssetsWithOptions(const SyncDataAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncDataAssets"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDataAssetsResponse>();
}

/**
 * @summary 资产同步
 *
 * @description 触发当前地域内指定产品的资产同步，作用范围是产品和地域，不限于某个实例。请求成功仅表示已受理；随后通过实例、数据库、表和列列表核对资产变化。该接口不返回可供轮询的公开任务标识。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request SyncDataAssetsRequest
 * @return SyncDataAssetsResponse
 */
SyncDataAssetsResponse Client::syncDataAssets(const SyncDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDataAssetsWithOptions(request, runtime);
}

/**
 * @summary 更新列加密算法
 *
 * @description 修改实例级列加密算法及密钥配置，影响该实例的列加密配置。当前实现支持 RDS MySQL 和 PolarDB-X 2.0；先查询实例支持算法和密钥。该接口没有 EncryptionKeyMode 参数，应按 EncryptionKeyId 的使用条件配置。请求成功后回读实例加密配置和列状态，不能仅凭 RequestId 判断完成。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request UpdateDataMaskingEncryptionAlgorithmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataMaskingEncryptionAlgorithmResponse
 */
UpdateDataMaskingEncryptionAlgorithmResponse Client::updateDataMaskingEncryptionAlgorithmWithOptions(const UpdateDataMaskingEncryptionAlgorithmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptionAlgorithm()) {
    query["EncryptionAlgorithm"] = request.getEncryptionAlgorithm();
  }

  if (!!request.hasEncryptionKeyId()) {
    query["EncryptionKeyId"] = request.getEncryptionKeyId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataMaskingEncryptionAlgorithm"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataMaskingEncryptionAlgorithmResponse>();
}

/**
 * @summary 更新列加密算法
 *
 * @description 修改实例级列加密算法及密钥配置，影响该实例的列加密配置。当前实现支持 RDS MySQL 和 PolarDB-X 2.0；先查询实例支持算法和密钥。该接口没有 EncryptionKeyMode 参数，应按 EncryptionKeyId 的使用条件配置。请求成功后回读实例加密配置和列状态，不能仅凭 RequestId 判断完成。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request UpdateDataMaskingEncryptionAlgorithmRequest
 * @return UpdateDataMaskingEncryptionAlgorithmResponse
 */
UpdateDataMaskingEncryptionAlgorithmResponse Client::updateDataMaskingEncryptionAlgorithm(const UpdateDataMaskingEncryptionAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataMaskingEncryptionAlgorithmWithOptions(request, runtime);
}

/**
 * @summary 批量修改账号权限
 *
 * @description 为一批数据库账号设置同一种列加密访问权限。UserList 可包含同一产品、同一地域下不同实例的账号，每项必须携带 InstanceId 和 AccountId。fullAccess 允许明文访问，restrictedAccess 允许受限访问，noneAccess 禁止解密且仅支持特定引擎和密钥模式。仅 fullAccess 可配置有效期。请求成功后使用 ListDataAssetAccounts 回读。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param tmpReq UpdateDataMaskingUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataMaskingUsersResponse
 */
UpdateDataMaskingUsersResponse Client::updateDataMaskingUsersWithOptions(const UpdateDataMaskingUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataMaskingUsersShrinkRequest request = UpdateDataMaskingUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasAuthRole()) {
    query["AuthRole"] = request.getAuthRole();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasExpireTimeOperation()) {
    query["ExpireTimeOperation"] = request.getExpireTimeOperation();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.getUserListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataMaskingUsers"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataMaskingUsersResponse>();
}

/**
 * @summary 批量修改账号权限
 *
 * @description 为一批数据库账号设置同一种列加密访问权限。UserList 可包含同一产品、同一地域下不同实例的账号，每项必须携带 InstanceId 和 AccountId。fullAccess 允许明文访问，restrictedAccess 允许受限访问，noneAccess 禁止解密且仅支持特定引擎和密钥模式。仅 fullAccess 可配置有效期。请求成功后使用 ListDataAssetAccounts 回读。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request UpdateDataMaskingUsersRequest
 * @return UpdateDataMaskingUsersResponse
 */
UpdateDataMaskingUsersResponse Client::updateDataMaskingUsers(const UpdateDataMaskingUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataMaskingUsersWithOptions(request, runtime);
}

/**
 * @summary 升级内核版本
 *
 * @description 按所选时间升级指定实例的数据库内核。先调用 ListMiniEngineVersions 选择版本，并检查实例当前状态和维护窗口。SpecifyTime 需要提供未来的 SwitchTime，PolarDB-X 2.0 不支持该时间选项。升级为异步操作，回读 GetInstanceAttribute 的 CurrentKernelVersion 核对结果。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request UpgradeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersionWithOptions(const UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKernelVersion()) {
    query["KernelVersion"] = request.getKernelVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductId()) {
    query["ProductId"] = request.getProductId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasUpgradeTime()) {
    query["UpgradeTime"] = request.getUpgradeTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeKernelVersion"},
    {"version" , "2026-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeKernelVersionResponse>();
}

/**
 * @summary 升级内核版本
 *
 * @description 按所选时间升级指定实例的数据库内核。先调用 ListMiniEngineVersions 选择版本，并检查实例当前状态和维护窗口。SpecifyTime 需要提供未来的 SwitchTime，PolarDB-X 2.0 不支持该时间选项。升级为异步操作，回读 GetInstanceAttribute 的 CurrentKernelVersion 核对结果。
 * 参数示例仅用于说明格式。调用时请替换为当前账号查询得到的地域、资源标识和配置值。
 * 使用目标资产所在地域的服务接入点，并设置公共参数 RegionId，例如 cn-zhangjiakou。产品编码和实例标识必须与目标资产一致。
 * 本接口仅返回 RequestId。请求受理不等于业务操作完成，应按接口说明回读状态。
 *
 * @param request UpgradeKernelVersionRequest
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersion(const UpgradeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sddp20260120