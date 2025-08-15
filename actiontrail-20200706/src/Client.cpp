#include <darabonba/Core.hpp>
#include <alibabacloud/Actiontrail20200706.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Actiontrail20200706::Models;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{

AlibabaCloud::Actiontrail20200706::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "actiontrail.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "actiontrail.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "actiontrail.aliyuncs.com"},
    {"cn-beijing-gov-1" , "actiontrail.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "actiontrail.aliyuncs.com"},
    {"cn-edge-1" , "actiontrail.aliyuncs.com"},
    {"cn-fujian" , "actiontrail.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-finance" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "actiontrail.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "actiontrail.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "actiontrail.aliyuncs.com"},
    {"cn-qingdao-nebula" , "actiontrail.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "actiontrail.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "actiontrail.aliyuncs.com"},
    {"cn-shanghai-inner" , "actiontrail.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-inner" , "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "actiontrail.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "actiontrail.aliyuncs.com"},
    {"cn-wuhan" , "actiontrail.aliyuncs.com"},
    {"cn-yushanfang" , "actiontrail.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "actiontrail.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "actiontrail.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "actiontrail.aliyuncs.com"},
    {"eu-west-1-oxs" , "actiontrail.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "actiontrail.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("actiontrail", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建高级查询历史记录
 *
 * @param request CreateAdvancedQueryHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedQueryHistoryResponse
 */
CreateAdvancedQueryHistoryResponse Client::createAdvancedQueryHistoryWithOptions(const CreateAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuerySql()) {
    query["QuerySql"] = request.querySql();
  }

  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.simpleQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAdvancedQueryHistory"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAdvancedQueryHistoryResponse>();
}

/**
 * @summary 创建高级查询历史记录
 *
 * @param request CreateAdvancedQueryHistoryRequest
 * @return CreateAdvancedQueryHistoryResponse
 */
CreateAdvancedQueryHistoryResponse Client::createAdvancedQueryHistory(const CreateAdvancedQueryHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedQueryHistoryWithOptions(request, runtime);
}

/**
 * @summary 创建高级查询模板
 *
 * @param request CreateAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedQueryTemplateResponse
 */
CreateAdvancedQueryTemplateResponse Client::createAdvancedQueryTemplateWithOptions(const CreateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.simpleQuery();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateSql()) {
    query["TemplateSql"] = request.templateSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAdvancedQueryTemplate"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAdvancedQueryTemplateResponse>();
}

/**
 * @summary 创建高级查询模板
 *
 * @param request CreateAdvancedQueryTemplateRequest
 * @return CreateAdvancedQueryTemplateResponse
 */
CreateAdvancedQueryTemplateResponse Client::createAdvancedQueryTemplate(const CreateAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a data backfill task.
 *
 * @description Limits
 * *   Make sure that you have created a single-account trail to deliver events to Simple Log Service by calling the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation.
 * *   Only one data backfill task can run at a time within an Alibaba Cloud account.
 * This topic provides an example on how to create a data backfill task for a trail named `trail-name`.
 *
 * @param request CreateDeliveryHistoryJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeliveryHistoryJobResponse
 */
CreateDeliveryHistoryJobResponse Client::createDeliveryHistoryJobWithOptions(const CreateDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasTrailName()) {
    query["TrailName"] = request.trailName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDeliveryHistoryJob"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeliveryHistoryJobResponse>();
}

/**
 * @summary Creates a data backfill task.
 *
 * @description Limits
 * *   Make sure that you have created a single-account trail to deliver events to Simple Log Service by calling the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation.
 * *   Only one data backfill task can run at a time within an Alibaba Cloud account.
 * This topic provides an example on how to create a data backfill task for a trail named `trail-name`.
 *
 * @param request CreateDeliveryHistoryJobRequest
 * @return CreateDeliveryHistoryJobResponse
 */
CreateDeliveryHistoryJobResponse Client::createDeliveryHistoryJob(const CreateDeliveryHistoryJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeliveryHistoryJobWithOptions(request, runtime);
}

/**
 * @summary Creates a trail. By default, ActionTrail allows you to query events generated within your Alibaba Cloud account in the last 90 days. To query and analyze events generated more than 90 days ago, create a trail to deliver events to Object Storage Service (OSS), Simple Log Service, or MaxCompute.
 *
 * @description **Operation description**
 * >By default, a trail that is created by calling an operation is in the Disabled state. You must call the StartLogging operation to enable the trail. This way, ActionTrail can deliver events to the destination cloud service.
 * **Prerequisites**
 * Before you create a trail, make sure that at least one of the following storage configurations is complete:
 * - Deliver events to OSS
 *   - OSS is activated and a bucket is created.
 *   
 * - Deliver events to Simple Log Service
 *   - Simple Log Service is activated and a project is created.
 *  >When a trail is created, ActionTrail automatically creates a Logstore named `actiontrail_<Trail name>` in the project. You cannot write data other than the audit data to the Logstore. This ensures the accuracy of the audit data.
 *     
 * - Deliver events to MaxCompute
 *   - MaxCompute is activated.
 * >When a trail is created, ActionTrail automatically creates a project named `actiontrail_<Account ID>` on the Projects page. You cannot write data other than the audit data to the project. This ensures the accuracy of the audit data.
 * **Usage Notes**
 * This topic provides an example on how to create a single-account trail named `trail-test` to deliver events to an OSS bucket named `audit-log`.
 *
 * @param request CreateTrailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrailResponse
 */
CreateTrailResponse Client::createTrailWithOptions(const CreateTrailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventRW()) {
    query["EventRW"] = request.eventRW();
  }

  if (!!request.hasIsOrganizationTrail()) {
    query["IsOrganizationTrail"] = request.isOrganizationTrail();
  }

  if (!!request.hasMaxComputeProjectArn()) {
    query["MaxComputeProjectArn"] = request.maxComputeProjectArn();
  }

  if (!!request.hasMaxComputeWriteRoleArn()) {
    query["MaxComputeWriteRoleArn"] = request.maxComputeWriteRoleArn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssKeyPrefix()) {
    query["OssKeyPrefix"] = request.ossKeyPrefix();
  }

  if (!!request.hasOssWriteRoleArn()) {
    query["OssWriteRoleArn"] = request.ossWriteRoleArn();
  }

  if (!!request.hasSlsProjectArn()) {
    query["SlsProjectArn"] = request.slsProjectArn();
  }

  if (!!request.hasSlsWriteRoleArn()) {
    query["SlsWriteRoleArn"] = request.slsWriteRoleArn();
  }

  if (!!request.hasTrailRegion()) {
    query["TrailRegion"] = request.trailRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrail"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrailResponse>();
}

/**
 * @summary Creates a trail. By default, ActionTrail allows you to query events generated within your Alibaba Cloud account in the last 90 days. To query and analyze events generated more than 90 days ago, create a trail to deliver events to Object Storage Service (OSS), Simple Log Service, or MaxCompute.
 *
 * @description **Operation description**
 * >By default, a trail that is created by calling an operation is in the Disabled state. You must call the StartLogging operation to enable the trail. This way, ActionTrail can deliver events to the destination cloud service.
 * **Prerequisites**
 * Before you create a trail, make sure that at least one of the following storage configurations is complete:
 * - Deliver events to OSS
 *   - OSS is activated and a bucket is created.
 *   
 * - Deliver events to Simple Log Service
 *   - Simple Log Service is activated and a project is created.
 *  >When a trail is created, ActionTrail automatically creates a Logstore named `actiontrail_<Trail name>` in the project. You cannot write data other than the audit data to the Logstore. This ensures the accuracy of the audit data.
 *     
 * - Deliver events to MaxCompute
 *   - MaxCompute is activated.
 * >When a trail is created, ActionTrail automatically creates a project named `actiontrail_<Account ID>` on the Projects page. You cannot write data other than the audit data to the project. This ensures the accuracy of the audit data.
 * **Usage Notes**
 * This topic provides an example on how to create a single-account trail named `trail-test` to deliver events to an OSS bucket named `audit-log`.
 *
 * @param request CreateTrailRequest
 * @return CreateTrailResponse
 */
CreateTrailResponse Client::createTrail(const CreateTrailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrailWithOptions(request, runtime);
}

/**
 * @summary 删除高级查询历史记录
 *
 * @param request DeleteAdvancedQueryHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdvancedQueryHistoryResponse
 */
DeleteAdvancedQueryHistoryResponse Client::deleteAdvancedQueryHistoryWithOptions(const DeleteAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAdvancedQueryHistory"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAdvancedQueryHistoryResponse>();
}

/**
 * @summary 删除高级查询历史记录
 *
 * @param request DeleteAdvancedQueryHistoryRequest
 * @return DeleteAdvancedQueryHistoryResponse
 */
DeleteAdvancedQueryHistoryResponse Client::deleteAdvancedQueryHistory(const DeleteAdvancedQueryHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdvancedQueryHistoryWithOptions(request, runtime);
}

/**
 * @summary 删除高级查询模板
 *
 * @param request DeleteAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdvancedQueryTemplateResponse
 */
DeleteAdvancedQueryTemplateResponse Client::deleteAdvancedQueryTemplateWithOptions(const DeleteAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAdvancedQueryTemplate"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAdvancedQueryTemplateResponse>();
}

/**
 * @summary 删除高级查询模板
 *
 * @param request DeleteAdvancedQueryTemplateRequest
 * @return DeleteAdvancedQueryTemplateResponse
 */
DeleteAdvancedQueryTemplateResponse Client::deleteAdvancedQueryTemplate(const DeleteAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a data backfill task.
 *
 * @description This topic describes how to delete a data backfill task whose ID is `16602`.
 *
 * @param request DeleteDeliveryHistoryJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeliveryHistoryJobResponse
 */
DeleteDeliveryHistoryJobResponse Client::deleteDeliveryHistoryJobWithOptions(const DeleteDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeliveryHistoryJob"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeliveryHistoryJobResponse>();
}

/**
 * @summary Deletes a data backfill task.
 *
 * @description This topic describes how to delete a data backfill task whose ID is `16602`.
 *
 * @param request DeleteDeliveryHistoryJobRequest
 * @return DeleteDeliveryHistoryJobResponse
 */
DeleteDeliveryHistoryJobResponse Client::deleteDeliveryHistoryJob(const DeleteDeliveryHistoryJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeliveryHistoryJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a trail.
 *
 * @description This topic describes how to delete a sample trail named `trail-test`.
 *
 * @param request DeleteTrailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrailResponse
 */
DeleteTrailResponse Client::deleteTrailWithOptions(const DeleteTrailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrail"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrailResponse>();
}

/**
 * @summary Deletes a trail.
 *
 * @description This topic describes how to delete a sample trail named `trail-test`.
 *
 * @param request DeleteTrailRequest
 * @return DeleteTrailResponse
 */
DeleteTrailResponse Client::deleteTrail(const DeleteTrailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrailWithOptions(request, runtime);
}

/**
 * @summary 查询高级查询历史记录
 *
 * @param request DescribeAdvancedQueryHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvancedQueryHistoryResponse
 */
DescribeAdvancedQueryHistoryResponse Client::describeAdvancedQueryHistoryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAdvancedQueryHistory"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvancedQueryHistoryResponse>();
}

/**
 * @summary 查询高级查询历史记录
 *
 * @return DescribeAdvancedQueryHistoryResponse
 */
DescribeAdvancedQueryHistoryResponse Client::describeAdvancedQueryHistory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvancedQueryHistoryWithOptions(runtime);
}

/**
 * @summary 查询高级查询模板
 *
 * @param request DescribeAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvancedQueryTemplateResponse
 */
DescribeAdvancedQueryTemplateResponse Client::describeAdvancedQueryTemplateWithOptions(const DescribeAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvancedQueryTemplate"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvancedQueryTemplateResponse>();
}

/**
 * @summary 查询高级查询模板
 *
 * @param request DescribeAdvancedQueryTemplateRequest
 * @return DescribeAdvancedQueryTemplateResponse
 */
DescribeAdvancedQueryTemplateResponse Client::describeAdvancedQueryTemplate(const DescribeAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud regions that are supported by ActionTrail.
 *
 * @description For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the Alibaba Cloud regions that are supported by ActionTrail.
 *
 * @description For more information, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary 列举资源生命周期事件
 *
 * @param request DescribeResourceLifeCycleEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLifeCycleEventsResponse
 */
DescribeResourceLifeCycleEventsResponse Client::describeResourceLifeCycleEventsWithOptions(const DescribeResourceLifeCycleEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceLifeCycleEvents"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceLifeCycleEventsResponse>();
}

/**
 * @summary 列举资源生命周期事件
 *
 * @param request DescribeResourceLifeCycleEventsRequest
 * @return DescribeResourceLifeCycleEventsResponse
 */
DescribeResourceLifeCycleEventsResponse Client::describeResourceLifeCycleEvents(const DescribeResourceLifeCycleEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLifeCycleEventsWithOptions(request, runtime);
}

/**
 * @summary 查询所有场景
 *
 * @param request DescribeScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScenesResponse
 */
DescribeScenesResponse Client::describeScenesWithOptions(const DescribeScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchCode()) {
    query["SearchCode"] = request.searchCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScenes"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScenesResponse>();
}

/**
 * @summary 查询所有场景
 *
 * @param request DescribeScenesRequest
 * @return DescribeScenesResponse
 */
DescribeScenesResponse Client::describeScenes(const DescribeScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScenesWithOptions(request, runtime);
}

/**
 * @summary 列举所有模版
 *
 * @param request DescribeSearchTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSearchTemplatesResponse
 */
DescribeSearchTemplatesResponse Client::describeSearchTemplatesWithOptions(const DescribeSearchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSearchTemplates"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSearchTemplatesResponse>();
}

/**
 * @summary 列举所有模版
 *
 * @param request DescribeSearchTemplatesRequest
 * @return DescribeSearchTemplatesResponse
 */
DescribeSearchTemplatesResponse Client::describeSearchTemplates(const DescribeSearchTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSearchTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries created trails.
 *
 * @description This topic shows you how to query the information about the single-account trails within an Alibaba Cloud account. In this example, the information about a trail named `test-4` is returned.
 *
 * @param request DescribeTrailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrailsResponse
 */
DescribeTrailsResponse Client::describeTrailsWithOptions(const DescribeTrailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeOrganizationTrail()) {
    query["IncludeOrganizationTrail"] = request.includeOrganizationTrail();
  }

  if (!!request.hasIncludeShadowTrails()) {
    query["IncludeShadowTrails"] = request.includeShadowTrails();
  }

  if (!!request.hasNameList()) {
    query["NameList"] = request.nameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrails"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrailsResponse>();
}

/**
 * @summary Queries created trails.
 *
 * @description This topic shows you how to query the information about the single-account trails within an Alibaba Cloud account. In this example, the information about a trail named `test-4` is returned.
 *
 * @param request DescribeTrailsRequest
 * @return DescribeTrailsResponse
 */
DescribeTrailsResponse Client::describeTrails(const DescribeTrailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrailsWithOptions(request, runtime);
}

/**
 * @summary 查询用户告警量
 *
 * @param request DescribeUserAlertCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAlertCountResponse
 */
DescribeUserAlertCountResponse Client::describeUserAlertCountWithOptions(const DescribeUserAlertCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAlertCount"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAlertCountResponse>();
}

/**
 * @summary 查询用户告警量
 *
 * @param request DescribeUserAlertCountRequest
 * @return DescribeUserAlertCountResponse
 */
DescribeUserAlertCountResponse Client::describeUserAlertCount(const DescribeUserAlertCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAlertCountWithOptions(request, runtime);
}

/**
 * @summary 查询用户日志量
 *
 * @param request DescribeUserLogCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserLogCountResponse
 */
DescribeUserLogCountResponse Client::describeUserLogCountWithOptions(const DescribeUserLogCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserLogCount"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserLogCountResponse>();
}

/**
 * @summary 查询用户日志量
 *
 * @param request DescribeUserLogCountRequest
 * @return DescribeUserLogCountResponse
 */
DescribeUserLogCountResponse Client::describeUserLogCount(const DescribeUserLogCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserLogCountWithOptions(request, runtime);
}

/**
 * @summary Enables the Insights feature
 *
 * @param request EnableInsightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInsightResponse
 */
EnableInsightResponse Client::enableInsightWithOptions(const EnableInsightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsightType()) {
    query["InsightType"] = request.insightType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInsight"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInsightResponse>();
}

/**
 * @summary Enables the Insights feature
 *
 * @param request EnableInsightRequest
 * @return EnableInsightResponse
 */
EnableInsightResponse Client::enableInsight(const EnableInsightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInsightWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the most recent events that are generated when a specified AccessKey pair is called to access Alibaba Cloud services.
 *
 * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedEventsResponse
 */
GetAccessKeyLastUsedEventsResponse Client::getAccessKeyLastUsedEventsWithOptions(const GetAccessKeyLastUsedEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsedEvents"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedEventsResponse>();
}

/**
 * @summary Queries the information about the most recent events that are generated when a specified AccessKey pair is called to access Alibaba Cloud services.
 *
 * @description You can call this operation to query only the information about the most recent events that are generated within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. For more information about supported events, see [Alibaba Cloud services and events that are supported by the AccessKey pair audit feature](https://help.aliyun.com/document_detail/419214.html). Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedEventsRequest
 * @return GetAccessKeyLastUsedEventsResponse
 */
GetAccessKeyLastUsedEventsResponse Client::getAccessKeyLastUsedEvents(const GetAccessKeyLastUsedEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the most recent call of a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedInfoResponse
 */
GetAccessKeyLastUsedInfoResponse Client::getAccessKeyLastUsedInfoWithOptions(const GetAccessKeyLastUsedInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsedInfo"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedInfoResponse>();
}

/**
 * @summary Queries the information about the most recent call of a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about the most recent call of a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedInfoRequest
 * @return GetAccessKeyLastUsedInfoResponse
 */
GetAccessKeyLastUsedInfoResponse Client::getAccessKeyLastUsedInfo(const GetAccessKeyLastUsedInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the IP addresses that are most recently used when an AccessKey pair is called to access Alibaba Cloud services.
 *
 * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedIpsResponse
 */
GetAccessKeyLastUsedIpsResponse Client::getAccessKeyLastUsedIpsWithOptions(const GetAccessKeyLastUsedIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsedIps"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedIpsResponse>();
}

/**
 * @summary Queries the information about the IP addresses that are most recently used when an AccessKey pair is called to access Alibaba Cloud services.
 *
 * @description You can call this operation to query only the information about the IP addresses that are most recently used within 400 days after February 1, 2022 when a specified AccessKey pair is called to access Alibaba Cloud services. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedIpsRequest
 * @return GetAccessKeyLastUsedIpsResponse
 */
GetAccessKeyLastUsedIpsResponse Client::getAccessKeyLastUsedIps(const GetAccessKeyLastUsedIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedIpsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedProductsResponse
 */
GetAccessKeyLastUsedProductsResponse Client::getAccessKeyLastUsedProductsWithOptions(const GetAccessKeyLastUsedProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsedProducts"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedProductsResponse>();
}

/**
 * @summary Queries the information about the Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about Alibaba Cloud services that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedProductsRequest
 * @return GetAccessKeyLastUsedProductsResponse
 */
GetAccessKeyLastUsedProductsResponse Client::getAccessKeyLastUsedProducts(const GetAccessKeyLastUsedProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedProductsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the resources that are most recently accessed by using a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedResourcesResponse
 */
GetAccessKeyLastUsedResourcesResponse Client::getAccessKeyLastUsedResourcesWithOptions(const GetAccessKeyLastUsedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsedResources"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedResourcesResponse>();
}

/**
 * @summary Queries the information about the resources that are most recently accessed by using a specified AccessKey pair.
 *
 * @description You can call this operation to query only the information about resources that are most recently accessed by using a specified AccessKey pair within 400 days after February 1, 2022. Data is updated at 1-hour intervals, which can cause query latency. We recommend that you do not change an AccessKey pair unless required.
 *
 * @param request GetAccessKeyLastUsedResourcesRequest
 * @return GetAccessKeyLastUsedResourcesResponse
 */
GetAccessKeyLastUsedResourcesResponse Client::getAccessKeyLastUsedResources(const GetAccessKeyLastUsedResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedResourcesWithOptions(request, runtime);
}

/**
 * @summary 查询单个高级查询模板
 *
 * @param request GetAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvancedQueryTemplateResponse
 */
GetAdvancedQueryTemplateResponse Client::getAdvancedQueryTemplateWithOptions(const GetAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdvancedQueryTemplate"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdvancedQueryTemplateResponse>();
}

/**
 * @summary 查询单个高级查询模板
 *
 * @param request GetAdvancedQueryTemplateRequest
 * @return GetAdvancedQueryTemplateResponse
 */
GetAdvancedQueryTemplateResponse Client::getAdvancedQueryTemplate(const GetAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data backfill task.
 *
 * @description This topic provides an example on how to query the details of a data backfill task whose ID is `16602`. The return result shows that historical events for a trail named `trail-name` are delivered to Simple Log Service and the task is complete.
 *
 * @param request GetDeliveryHistoryJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeliveryHistoryJobResponse
 */
GetDeliveryHistoryJobResponse Client::getDeliveryHistoryJobWithOptions(const GetDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeliveryHistoryJob"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeliveryHistoryJobResponse>();
}

/**
 * @summary Queries the details of a data backfill task.
 *
 * @description This topic provides an example on how to query the details of a data backfill task whose ID is `16602`. The return result shows that historical events for a trail named `trail-name` are delivered to Simple Log Service and the task is complete.
 *
 * @param request GetDeliveryHistoryJobRequest
 * @return GetDeliveryHistoryJobResponse
 */
GetDeliveryHistoryJobResponse Client::getDeliveryHistoryJob(const GetDeliveryHistoryJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeliveryHistoryJobWithOptions(request, runtime);
}

/**
 * @summary Queries the region where global events are stored.
 *
 * @description By default, global events are stored in the Singapore region.
 * To obtain the permissions to call the API operation, you must submit a ticket.
 *
 * @param request GetGlobalEventsStorageRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGlobalEventsStorageRegionResponse
 */
GetGlobalEventsStorageRegionResponse Client::getGlobalEventsStorageRegionWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetGlobalEventsStorageRegion"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGlobalEventsStorageRegionResponse>();
}

/**
 * @summary Queries the region where global events are stored.
 *
 * @description By default, global events are stored in the Singapore region.
 * To obtain the permissions to call the API operation, you must submit a ticket.
 *
 * @return GetGlobalEventsStorageRegionResponse
 */
GetGlobalEventsStorageRegionResponse Client::getGlobalEventsStorageRegion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGlobalEventsStorageRegionWithOptions(runtime);
}

/**
 * @summary 操作审计成熟度查询接口
 *
 * @param request GetGovernanceMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGovernanceMetricsResponse
 */
GetGovernanceMetricsResponse Client::getGovernanceMetricsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetGovernanceMetrics"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGovernanceMetricsResponse>();
}

/**
 * @summary 操作审计成熟度查询接口
 *
 * @return GetGovernanceMetricsResponse
 */
GetGovernanceMetricsResponse Client::getGovernanceMetrics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceMetricsWithOptions(runtime);
}

/**
 * @summary Queries the status of a trail.
 *
 * @description This topic describes how to query the status of a sample single-account trail named `trail-test`.
 *
 * @param request GetTrailStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrailStatusResponse
 */
GetTrailStatusResponse Client::getTrailStatusWithOptions(const GetTrailStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsOrganizationTrail()) {
    query["IsOrganizationTrail"] = request.isOrganizationTrail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrailStatus"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTrailStatusResponse>();
}

/**
 * @summary Queries the status of a trail.
 *
 * @description This topic describes how to query the status of a sample single-account trail named `trail-test`.
 *
 * @param request GetTrailStatusRequest
 * @return GetTrailStatusResponse
 */
GetTrailStatusResponse Client::getTrailStatus(const GetTrailStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTrailStatusWithOptions(request, runtime);
}

/**
 * @summary 查询数据事件支持的服务与事件名称
 *
 * @param request ListDataEventServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataEventServicesResponse
 */
ListDataEventServicesResponse Client::listDataEventServicesWithOptions(const ListDataEventServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataEventServices"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataEventServicesResponse>();
}

/**
 * @summary 查询数据事件支持的服务与事件名称
 *
 * @param request ListDataEventServicesRequest
 * @return ListDataEventServicesResponse
 */
ListDataEventServicesResponse Client::listDataEventServices(const ListDataEventServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataEventServicesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data backfill tasks.
 *
 * @description This topic provides an example on how to query a list of data backfill tasks. The returned result shows that a data backfill task with the ID `16602` is used to deliver historical events for a trail named `trail-name` to Simple Log Service.
 *
 * @param request ListDeliveryHistoryJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeliveryHistoryJobsResponse
 */
ListDeliveryHistoryJobsResponse Client::listDeliveryHistoryJobsWithOptions(const ListDeliveryHistoryJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeliveryHistoryJobs"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeliveryHistoryJobsResponse>();
}

/**
 * @summary Queries a list of data backfill tasks.
 *
 * @description This topic provides an example on how to query a list of data backfill tasks. The returned result shows that a data backfill task with the ID `16602` is used to deliver historical events for a trail named `trail-name` to Simple Log Service.
 *
 * @param request ListDeliveryHistoryJobsRequest
 * @return ListDeliveryHistoryJobsResponse
 */
ListDeliveryHistoryJobsResponse Client::listDeliveryHistoryJobs(const ListDeliveryHistoryJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeliveryHistoryJobsWithOptions(request, runtime);
}

/**
 * @summary Queries event details.
 *
 * @description When you call this operation to query event details, you can query the event details at most twice per second.
 * > Do not frequently call this operation. You can create a trail to deliver events to Log Service. Then, you can query event details in near real time by using the real-time log consumption feature of Log Service. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Overview](https://help.aliyun.com/document_detail/28997.html).
 *
 * @param request LookupEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupEventsResponse
 */
LookupEventsResponse Client::lookupEventsWithOptions(const LookupEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLookupAttribute()) {
    query["LookupAttribute"] = request.lookupAttribute();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LookupEvents"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LookupEventsResponse>();
}

/**
 * @summary Queries event details.
 *
 * @description When you call this operation to query event details, you can query the event details at most twice per second.
 * > Do not frequently call this operation. You can create a trail to deliver events to Log Service. Then, you can query event details in near real time by using the real-time log consumption feature of Log Service. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Overview](https://help.aliyun.com/document_detail/28997.html).
 *
 * @param request LookupEventsRequest
 * @return LookupEventsResponse
 */
LookupEventsResponse Client::lookupEvents(const LookupEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupEventsWithOptions(request, runtime);
}

/**
 * @summary Enables a trail to deliver events to an Object Storage Service (OSS) bucket or a Simple Log Service Logstore.
 *
 * @description This topic describes how to enable logging for a sample trail named `trail-test`.
 *
 * @param request StartLoggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLoggingResponse
 */
StartLoggingResponse Client::startLoggingWithOptions(const StartLoggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartLogging"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartLoggingResponse>();
}

/**
 * @summary Enables a trail to deliver events to an Object Storage Service (OSS) bucket or a Simple Log Service Logstore.
 *
 * @description This topic describes how to enable logging for a sample trail named `trail-test`.
 *
 * @param request StartLoggingRequest
 * @return StartLoggingResponse
 */
StartLoggingResponse Client::startLogging(const StartLoggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startLoggingWithOptions(request, runtime);
}

/**
 * @summary Disables a trail to stop the delivery of events to an Object Storage Service (OSS) bucket or a  Simple Log Service Logstore.
 *
 * @description This topic describes how to disable logging for a sample trail named `trail-test`.
 *
 * @param request StopLoggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLoggingResponse
 */
StopLoggingResponse Client::stopLoggingWithOptions(const StopLoggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopLogging"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLoggingResponse>();
}

/**
 * @summary Disables a trail to stop the delivery of events to an Object Storage Service (OSS) bucket or a  Simple Log Service Logstore.
 *
 * @description This topic describes how to disable logging for a sample trail named `trail-test`.
 *
 * @param request StopLoggingRequest
 * @return StopLoggingResponse
 */
StopLoggingResponse Client::stopLogging(const StopLoggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLoggingWithOptions(request, runtime);
}

/**
 * @summary 更新高级查询模板
 *
 * @param request UpdateAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdvancedQueryTemplateResponse
 */
UpdateAdvancedQueryTemplateResponse Client::updateAdvancedQueryTemplateWithOptions(const UpdateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.simpleQuery();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateSql()) {
    query["TemplateSql"] = request.templateSql();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAdvancedQueryTemplate"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdvancedQueryTemplateResponse>();
}

/**
 * @summary 更新高级查询模板
 *
 * @param request UpdateAdvancedQueryTemplateRequest
 * @return UpdateAdvancedQueryTemplateResponse
 */
UpdateAdvancedQueryTemplateResponse Client::updateAdvancedQueryTemplate(const UpdateAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Specifies the region where you want to store global events.
 *
 * @description By default, global events are stored in the Singapore region.
 * *   To obtain the permissions to call the API operation, you must submit a ticket.
 * *   Only the China (Hangzhou) region (cn-hangzhou) and the Singapore region (ap-southeast-1) are supported.
 *
 * @param request UpdateGlobalEventsStorageRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGlobalEventsStorageRegionResponse
 */
UpdateGlobalEventsStorageRegionResponse Client::updateGlobalEventsStorageRegionWithOptions(const UpdateGlobalEventsStorageRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStorageRegion()) {
    query["StorageRegion"] = request.storageRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGlobalEventsStorageRegion"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGlobalEventsStorageRegionResponse>();
}

/**
 * @summary Specifies the region where you want to store global events.
 *
 * @description By default, global events are stored in the Singapore region.
 * *   To obtain the permissions to call the API operation, you must submit a ticket.
 * *   Only the China (Hangzhou) region (cn-hangzhou) and the Singapore region (ap-southeast-1) are supported.
 *
 * @param request UpdateGlobalEventsStorageRegionRequest
 * @return UpdateGlobalEventsStorageRegionResponse
 */
UpdateGlobalEventsStorageRegionResponse Client::updateGlobalEventsStorageRegion(const UpdateGlobalEventsStorageRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGlobalEventsStorageRegionWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of a trail.
 *
 * @description This topic shows you how to change the destination Object Storage Service (OSS) bucket of a sample trail named `trail-test` to `audit-log`.
 *
 * @param request UpdateTrailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTrailResponse
 */
UpdateTrailResponse Client::updateTrailWithOptions(const UpdateTrailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventRW()) {
    query["EventRW"] = request.eventRW();
  }

  if (!!request.hasMaxComputeProjectArn()) {
    query["MaxComputeProjectArn"] = request.maxComputeProjectArn();
  }

  if (!!request.hasMaxComputeWriteRoleArn()) {
    query["MaxComputeWriteRoleArn"] = request.maxComputeWriteRoleArn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.ossBucketName();
  }

  if (!!request.hasOssKeyPrefix()) {
    query["OssKeyPrefix"] = request.ossKeyPrefix();
  }

  if (!!request.hasOssWriteRoleArn()) {
    query["OssWriteRoleArn"] = request.ossWriteRoleArn();
  }

  if (!!request.hasSlsProjectArn()) {
    query["SlsProjectArn"] = request.slsProjectArn();
  }

  if (!!request.hasSlsWriteRoleArn()) {
    query["SlsWriteRoleArn"] = request.slsWriteRoleArn();
  }

  if (!!request.hasTrailRegion()) {
    query["TrailRegion"] = request.trailRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTrail"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTrailResponse>();
}

/**
 * @summary Updates the configurations of a trail.
 *
 * @description This topic shows you how to change the destination Object Storage Service (OSS) bucket of a sample trail named `trail-test` to `audit-log`.
 *
 * @param request UpdateTrailRequest
 * @return UpdateTrailResponse
 */
UpdateTrailResponse Client::updateTrail(const UpdateTrailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTrailWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Actiontrail20200706