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
    {"rus-west-1-pop" , "actiontrail.ap-northeast-1.aliyuncs.com"},
    {"us-west-1" , "actiontrail.us-west-1.aliyuncs.com"},
    {"us-southeast-1" , "actiontrail.us-southeast-1.aliyuncs.com"},
    {"us-east-1" , "actiontrail.us-east-1.aliyuncs.com"},
    {"na-south-1" , "actiontrail.na-south-1.aliyuncs.com"},
    {"me-east-1" , "actiontrail.me-east-1.aliyuncs.com"},
    {"me-central-1" , "actiontrail.me-central-1.aliyuncs.com"},
    {"eu-west-2" , "actiontrail.eu-west-2.aliyuncs.com"},
    {"eu-west-1" , "actiontrail.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "actiontrail.eu-central-1.aliyuncs.com"},
    {"cn-zhongwei" , "actiontrail.cn-zhongwei.aliyuncs.com"},
    {"cn-zhangjiakou" , "actiontrail.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "actiontrail.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "actiontrail.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "actiontrail.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "actiontrail.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "actiontrail.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "actiontrail.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-nanjing" , "actiontrail.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "actiontrail.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "actiontrail.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "actiontrail.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou" , "actiontrail.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "actiontrail.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "actiontrail.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "actiontrail.cn-beijing.aliyuncs.com"},
    {"ap-southeast-8" , "actiontrail.ap-southeast-8.aliyuncs.com"},
    {"ap-southeast-7" , "actiontrail.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "actiontrail.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "actiontrail.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "actiontrail.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "actiontrail.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "actiontrail.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "actiontrail.ap-northeast-1.aliyuncs.com"}
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
 * @summary Creates an advanced event query history record that saves a custom query conditional statement for reuse and management.
 *
 * @description This topic provides a demo of how to save a conditional statement as an advanced event query history record. The conditional statement is used to query all `AccessKey` access management events in logs.
 *
 * @param request CreateAdvancedQueryHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedQueryHistoryResponse
 */
CreateAdvancedQueryHistoryResponse Client::createAdvancedQueryHistoryWithOptions(const CreateAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasQuerySql()) {
    query["QuerySql"] = request.getQuerySql();
  }

  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.getSimpleQuery();
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
 * @summary Creates an advanced event query history record that saves a custom query conditional statement for reuse and management.
 *
 * @description This topic provides a demo of how to save a conditional statement as an advanced event query history record. The conditional statement is used to query all `AccessKey` access management events in logs.
 *
 * @param request CreateAdvancedQueryHistoryRequest
 * @return CreateAdvancedQueryHistoryResponse
 */
CreateAdvancedQueryHistoryResponse Client::createAdvancedQueryHistory(const CreateAdvancedQueryHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdvancedQueryHistoryWithOptions(request, runtime);
}

/**
 * @summary Creates an advanced query template.
 *
 * @param request CreateAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdvancedQueryTemplateResponse
 */
CreateAdvancedQueryTemplateResponse Client::createAdvancedQueryTemplateWithOptions(const CreateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.getSimpleQuery();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateSql()) {
    query["TemplateSql"] = request.getTemplateSql();
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
 * @summary Creates an advanced query template.
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
 * @description Limitations
 * - You must first call the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation to create a single-account trail that delivers events to Simple Log Service (SLS).
 * - An Alibaba Cloud account can have only one data backfill task running at a time.
 * This topic provides an example of how to create data backfill task for the trail `trail-name`.
 *
 * @param request CreateDeliveryHistoryJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeliveryHistoryJobResponse
 */
CreateDeliveryHistoryJobResponse Client::createDeliveryHistoryJobWithOptions(const CreateDeliveryHistoryJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
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
 * @description Limitations
 * - You must first call the [CreateTrail](https://help.aliyun.com/document_detail/212313.html) operation to create a single-account trail that delivers events to Simple Log Service (SLS).
 * - An Alibaba Cloud account can have only one data backfill task running at a time.
 * This topic provides an example of how to create data backfill task for the trail `trail-name`.
 *
 * @param request CreateDeliveryHistoryJobRequest
 * @return CreateDeliveryHistoryJobResponse
 */
CreateDeliveryHistoryJobResponse Client::createDeliveryHistoryJob(const CreateDeliveryHistoryJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeliveryHistoryJobWithOptions(request, runtime);
}

/**
 * @summary Creates a trail to deliver events to a destination for long-term storage and analysis, such as an Object Storage Service (OSS) bucket, a Simple Log Service (SLS) Logstore, or a MaxCompute project.
 *
 * @description > By default, a trail that you create by using this API is in a **disabled** state. You must call the [StartLogging](https://help.aliyun.com/document_detail/432246.html) operation operation to enable the trail. After a trail is enabled, ActionTrail begins delivering events to your specified destination.
 * ### Prerequisites
 * Before you create a trail, you must have at least one of the following resources configured as a destination:
 * - OSS
 *   You must activate OSS and create a bucket.
 * - SLS
 *   You must activate SLS and create a Logstore.
 *   > When you create a trail with an SLS destination, ActionTrail automatically creates a Logstore named `actiontrail_<trail_name>` in your specified project. To ensure the integrity of your audit data, this Logstore only accepts events delivered by ActionTrail.
 * - MaxCompute
 *   You must activate MaxCompute.
 *   > When you create a trail with a MaxCompute destination, ActionTrail automatically creates a project named `actiontrail_<account_ID>`. To ensure the integrity of your audit data, this project only accepts events delivered by ActionTrail.
 * ### Usage notes
 * This example shows how to create a single-account trail named `trail-test` that delivers events to an OSS bucket named `audit-log`.
 *
 * @param request CreateTrailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrailResponse
 */
CreateTrailResponse Client::createTrailWithOptions(const CreateTrailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventRW()) {
    query["EventRW"] = request.getEventRW();
  }

  if (!!request.hasIsOrganizationTrail()) {
    query["IsOrganizationTrail"] = request.getIsOrganizationTrail();
  }

  if (!!request.hasMaxComputeProjectArn()) {
    query["MaxComputeProjectArn"] = request.getMaxComputeProjectArn();
  }

  if (!!request.hasMaxComputeWriteRoleArn()) {
    query["MaxComputeWriteRoleArn"] = request.getMaxComputeWriteRoleArn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssKeyPrefix()) {
    query["OssKeyPrefix"] = request.getOssKeyPrefix();
  }

  if (!!request.hasOssWriteRoleArn()) {
    query["OssWriteRoleArn"] = request.getOssWriteRoleArn();
  }

  if (!!request.hasSlsProjectArn()) {
    query["SlsProjectArn"] = request.getSlsProjectArn();
  }

  if (!!request.hasSlsWriteRoleArn()) {
    query["SlsWriteRoleArn"] = request.getSlsWriteRoleArn();
  }

  if (!!request.hasTrailRegion()) {
    query["TrailRegion"] = request.getTrailRegion();
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
 * @summary Creates a trail to deliver events to a destination for long-term storage and analysis, such as an Object Storage Service (OSS) bucket, a Simple Log Service (SLS) Logstore, or a MaxCompute project.
 *
 * @description > By default, a trail that you create by using this API is in a **disabled** state. You must call the [StartLogging](https://help.aliyun.com/document_detail/432246.html) operation operation to enable the trail. After a trail is enabled, ActionTrail begins delivering events to your specified destination.
 * ### Prerequisites
 * Before you create a trail, you must have at least one of the following resources configured as a destination:
 * - OSS
 *   You must activate OSS and create a bucket.
 * - SLS
 *   You must activate SLS and create a Logstore.
 *   > When you create a trail with an SLS destination, ActionTrail automatically creates a Logstore named `actiontrail_<trail_name>` in your specified project. To ensure the integrity of your audit data, this Logstore only accepts events delivered by ActionTrail.
 * - MaxCompute
 *   You must activate MaxCompute.
 *   > When you create a trail with a MaxCompute destination, ActionTrail automatically creates a project named `actiontrail_<account_ID>`. To ensure the integrity of your audit data, this project only accepts events delivered by ActionTrail.
 * ### Usage notes
 * This example shows how to create a single-account trail named `trail-test` that delivers events to an OSS bucket named `audit-log`.
 *
 * @param request CreateTrailRequest
 * @return CreateTrailResponse
 */
CreateTrailResponse Client::createTrail(const CreateTrailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrailWithOptions(request, runtime);
}

/**
 * @summary Deletes an advanced query record.
 *
 * @param request DeleteAdvancedQueryHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdvancedQueryHistoryResponse
 */
DeleteAdvancedQueryHistoryResponse Client::deleteAdvancedQueryHistoryWithOptions(const DeleteAdvancedQueryHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["QueryId"] = request.getQueryId();
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
 * @summary Deletes an advanced query record.
 *
 * @param request DeleteAdvancedQueryHistoryRequest
 * @return DeleteAdvancedQueryHistoryResponse
 */
DeleteAdvancedQueryHistoryResponse Client::deleteAdvancedQueryHistory(const DeleteAdvancedQueryHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdvancedQueryHistoryWithOptions(request, runtime);
}

/**
 * @summary Deletes an advanced query template.
 *
 * @param request DeleteAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdvancedQueryTemplateResponse
 */
DeleteAdvancedQueryTemplateResponse Client::deleteAdvancedQueryTemplateWithOptions(const DeleteAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes an advanced query template.
 *
 * @param request DeleteAdvancedQueryTemplateRequest
 * @return DeleteAdvancedQueryTemplateResponse
 */
DeleteAdvancedQueryTemplateResponse Client::deleteAdvancedQueryTemplate(const DeleteAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes the data event selector for a specified trail.
 *
 * @param request DeleteDataEventSelectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataEventSelectorResponse
 */
DeleteDataEventSelectorResponse Client::deleteDataEventSelectorWithOptions(const DeleteDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataEventSelector"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataEventSelectorResponse>();
}

/**
 * @summary Deletes the data event selector for a specified trail.
 *
 * @param request DeleteDataEventSelectorRequest
 * @return DeleteDataEventSelectorResponse
 */
DeleteDataEventSelectorResponse Client::deleteDataEventSelector(const DeleteDataEventSelectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataEventSelectorWithOptions(request, runtime);
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
    query["JobId"] = request.getJobId();
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
    query["Name"] = request.getName();
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
 * @summary Queries all advanced query records.
 *
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
 * @summary Queries all advanced query records.
 *
 * @return DescribeAdvancedQueryHistoryResponse
 */
DescribeAdvancedQueryHistoryResponse Client::describeAdvancedQueryHistory() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvancedQueryHistoryWithOptions(runtime);
}

/**
 * @summary Queries advanced query templates.
 *
 * @param request DescribeAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvancedQueryTemplateResponse
 */
DescribeAdvancedQueryTemplateResponse Client::describeAdvancedQueryTemplateWithOptions(const DescribeAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Queries advanced query templates.
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
    query["AcceptLanguage"] = request.getAcceptLanguage();
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
 * @summary Queries the lifecycle events of a specified resource.
 *
 * @param request DescribeResourceLifeCycleEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceLifeCycleEventsResponse
 */
DescribeResourceLifeCycleEventsResponse Client::describeResourceLifeCycleEventsWithOptions(const DescribeResourceLifeCycleEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
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
 * @summary Queries the lifecycle events of a specified resource.
 *
 * @param request DescribeResourceLifeCycleEventsRequest
 * @return DescribeResourceLifeCycleEventsResponse
 */
DescribeResourceLifeCycleEventsResponse Client::describeResourceLifeCycleEvents(const DescribeResourceLifeCycleEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceLifeCycleEventsWithOptions(request, runtime);
}

/**
 * @summary Queries all advanced query scenarios.
 *
 * @param request DescribeScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScenesResponse
 */
DescribeScenesResponse Client::describeScenesWithOptions(const DescribeScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchCode()) {
    query["SearchCode"] = request.getSearchCode();
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
 * @summary Queries all advanced query scenarios.
 *
 * @param request DescribeScenesRequest
 * @return DescribeScenesResponse
 */
DescribeScenesResponse Client::describeScenes(const DescribeScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScenesWithOptions(request, runtime);
}

/**
 * @summary Queries advanced query templates for a specified scenario.
 *
 * @param request DescribeSearchTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSearchTemplatesResponse
 */
DescribeSearchTemplatesResponse Client::describeSearchTemplatesWithOptions(const DescribeSearchTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
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
 * @summary Queries advanced query templates for a specified scenario.
 *
 * @param request DescribeSearchTemplatesRequest
 * @return DescribeSearchTemplatesResponse
 */
DescribeSearchTemplatesResponse Client::describeSearchTemplates(const DescribeSearchTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSearchTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves data for delivery monitoring metrics.
 *
 * @param request DescribeTrailDeliveryMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrailDeliveryMetricDataResponse
 */
DescribeTrailDeliveryMetricDataResponse Client::describeTrailDeliveryMetricDataWithOptions(const DescribeTrailDeliveryMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrailDeliveryMetricData"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrailDeliveryMetricDataResponse>();
}

/**
 * @summary Retrieves data for delivery monitoring metrics.
 *
 * @param request DescribeTrailDeliveryMetricDataRequest
 * @return DescribeTrailDeliveryMetricDataResponse
 */
DescribeTrailDeliveryMetricDataResponse Client::describeTrailDeliveryMetricData(const DescribeTrailDeliveryMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrailDeliveryMetricDataWithOptions(request, runtime);
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
    query["IncludeOrganizationTrail"] = request.getIncludeOrganizationTrail();
  }

  if (!!request.hasIncludeShadowTrails()) {
    query["IncludeShadowTrails"] = request.getIncludeShadowTrails();
  }

  if (!!request.hasNameList()) {
    query["NameList"] = request.getNameList();
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
 * @summary Queries the number of daily alerts within a specific time range.
 *
 * @param request DescribeUserAlertCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAlertCountResponse
 */
DescribeUserAlertCountResponse Client::describeUserAlertCountWithOptions(const DescribeUserAlertCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the number of daily alerts within a specific time range.
 *
 * @param request DescribeUserAlertCountRequest
 * @return DescribeUserAlertCountResponse
 */
DescribeUserAlertCountResponse Client::describeUserAlertCount(const DescribeUserAlertCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAlertCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of daily logs within a specific time range.
 *
 * @param request DescribeUserLogCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserLogCountResponse
 */
DescribeUserLogCountResponse Client::describeUserLogCountWithOptions(const DescribeUserLogCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the number of daily logs within a specific time range.
 *
 * @param request DescribeUserLogCountRequest
 * @return DescribeUserLogCountResponse
 */
DescribeUserLogCountResponse Client::describeUserLogCount(const DescribeUserLogCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserLogCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of enabled trails, including organization trails.
 *
 * @param request DescribeUserTrailCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserTrailCountResponse
 */
DescribeUserTrailCountResponse Client::describeUserTrailCountWithOptions(const DescribeUserTrailCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeUserTrailCount"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserTrailCountResponse>();
}

/**
 * @summary Queries the number of enabled trails, including organization trails.
 *
 * @param request DescribeUserTrailCountRequest
 * @return DescribeUserTrailCountResponse
 */
DescribeUserTrailCountResponse Client::describeUserTrailCount(const DescribeUserTrailCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserTrailCountWithOptions(request, runtime);
}

/**
 * @summary Disables a specific type of Insights event.
 *
 * @param request DisableInsightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInsightResponse
 */
DisableInsightResponse Client::disableInsightWithOptions(const DisableInsightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsightType()) {
    query["InsightType"] = request.getInsightType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInsight"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInsightResponse>();
}

/**
 * @summary Disables a specific type of Insights event.
 *
 * @param request DisableInsightRequest
 * @return DisableInsightResponse
 */
DisableInsightResponse Client::disableInsight(const DisableInsightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInsightWithOptions(request, runtime);
}

/**
 * @summary Enables the Insights feature.
 *
 * @param request EnableInsightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInsightResponse
 */
EnableInsightResponse Client::enableInsightWithOptions(const EnableInsightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsightType()) {
    query["InsightType"] = request.getInsightType();
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
 * @summary Enables the Insights feature.
 *
 * @param request EnableInsightRequest
 * @return EnableInsightResponse
 */
EnableInsightResponse Client::enableInsight(const EnableInsightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInsightWithOptions(request, runtime);
}

/**
 * @summary Queries the most recent events associated with a specified AccessKey pair, including the event name, source, timestamp, and details.
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
    query["AccessKey"] = request.getAccessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
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
 * @summary Queries the most recent events associated with a specified AccessKey pair, including the event name, source, timestamp, and details.
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
 * @summary Queries the most recent usage record of a specified AccessKey pair.
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
    query["AccessKey"] = request.getAccessKey();
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
 * @summary Queries the most recent usage record of a specified AccessKey pair.
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
 * @summary Queries the IP addresses most recently used by a specified AccessKey pair.
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
    query["AccessKey"] = request.getAccessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
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
 * @summary Queries the IP addresses most recently used by a specified AccessKey pair.
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
 * @summary Queries the Alibaba Cloud services most recently accessed by a specified AccessKey pair.
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
    query["AccessKey"] = request.getAccessKey();
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
 * @summary Queries the Alibaba Cloud services most recently accessed by a specified AccessKey pair.
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
 * @summary Queries the resources most recently used by a specified AccessKey pair.
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
    query["AccessKey"] = request.getAccessKey();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
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
 * @summary Queries the resources most recently used by a specified AccessKey pair.
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
 * @summary Retrieves information about a single advanced template.
 *
 * @param request GetAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdvancedQueryTemplateResponse
 */
GetAdvancedQueryTemplateResponse Client::getAdvancedQueryTemplateWithOptions(const GetAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Retrieves information about a single advanced template.
 *
 * @param request GetAdvancedQueryTemplateRequest
 * @return GetAdvancedQueryTemplateResponse
 */
GetAdvancedQueryTemplateResponse Client::getAdvancedQueryTemplate(const GetAdvancedQueryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdvancedQueryTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the details about the data event selector for a specified trail.
 *
 * @param request GetDataEventSelectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataEventSelectorResponse
 */
GetDataEventSelectorResponse Client::getDataEventSelectorWithOptions(const GetDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataEventSelector"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataEventSelectorResponse>();
}

/**
 * @summary Queries the details about the data event selector for a specified trail.
 *
 * @param request GetDataEventSelectorRequest
 * @return GetDataEventSelectorResponse
 */
GetDataEventSelectorResponse Client::getDataEventSelector(const GetDataEventSelectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataEventSelectorWithOptions(request, runtime);
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
    query["JobId"] = request.getJobId();
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
 * @summary Queries the governance metrics of ActionTrail.
 *
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
 * @summary Queries the governance metrics of ActionTrail.
 *
 * @return GetGovernanceMetricsResponse
 */
GetGovernanceMetricsResponse Client::getGovernanceMetrics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceMetricsWithOptions(runtime);
}

/**
 * @summary Queries the Insights event types to deliver for a trail.
 *
 * @param request GetInsightSelectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInsightSelectorsResponse
 */
GetInsightSelectorsResponse Client::getInsightSelectorsWithOptions(const GetInsightSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInsightSelectors"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInsightSelectorsResponse>();
}

/**
 * @summary Queries the Insights event types to deliver for a trail.
 *
 * @param request GetInsightSelectorsRequest
 * @return GetInsightSelectorsResponse
 */
GetInsightSelectorsResponse Client::getInsightSelectors(const GetInsightSelectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInsightSelectorsWithOptions(request, runtime);
}

/**
 * @summary Queries all enabled types of Insights events.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInsightTypesResponse
 */
GetInsightTypesResponse Client::getInsightTypesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetInsightTypes"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInsightTypesResponse>();
}

/**
 * @summary Queries all enabled types of Insights events.
 *
 * @return GetInsightTypesResponse
 */
GetInsightTypesResponse Client::getInsightTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInsightTypesWithOptions(runtime);
}

/**
 * @summary Queries the number of Insights events for the current account.
 *
 * @param request GetInsightsEventsCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInsightsEventsCountResponse
 */
GetInsightsEventsCountResponse Client::getInsightsEventsCountWithOptions(const GetInsightsEventsCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInsightsEventsCount"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInsightsEventsCountResponse>();
}

/**
 * @summary Queries the number of Insights events for the current account.
 *
 * @param request GetInsightsEventsCountRequest
 * @return GetInsightsEventsCountResponse
 */
GetInsightsEventsCountResponse Client::getInsightsEventsCount(const GetInsightsEventsCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInsightsEventsCountWithOptions(request, runtime);
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
    query["IsOrganizationTrail"] = request.getIsOrganizationTrail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
 * @summary Queries all data event selectors.
 *
 * @param request ListDataEventSelectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataEventSelectorsResponse
 */
ListDataEventSelectorsResponse Client::listDataEventSelectorsWithOptions(const ListDataEventSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataEventSelectors"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataEventSelectorsResponse>();
}

/**
 * @summary Queries all data event selectors.
 *
 * @param request ListDataEventSelectorsRequest
 * @return ListDataEventSelectorsResponse
 */
ListDataEventSelectorsResponse Client::listDataEventSelectors(const ListDataEventSelectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataEventSelectorsWithOptions(request, runtime);
}

/**
 * @summary Queries the services that support data events and the names of these events.
 *
 * @param request ListDataEventServicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataEventServicesResponse
 */
ListDataEventServicesResponse Client::listDataEventServicesWithOptions(const ListDataEventServicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @summary Queries the services that support data events and the names of these events.
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
 * @description This topic provides an example of how to query a list of data backfill tasks. The response shows a task with the ID `16602` that delivers historical events from the trail `trail-name` to Simple Log Service (SLS).
 *
 * @param request ListDeliveryHistoryJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeliveryHistoryJobsResponse
 */
ListDeliveryHistoryJobsResponse Client::listDeliveryHistoryJobsWithOptions(const ListDeliveryHistoryJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @description This topic provides an example of how to query a list of data backfill tasks. The response shows a task with the ID `16602` that delivers historical events from the trail `trail-name` to Simple Log Service (SLS).
 *
 * @param request ListDeliveryHistoryJobsRequest
 * @return ListDeliveryHistoryJobsResponse
 */
ListDeliveryHistoryJobsResponse Client::listDeliveryHistoryJobs(const ListDeliveryHistoryJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeliveryHistoryJobsWithOptions(request, runtime);
}

/**
 * @summary Queries detailed historical events.
 *
 * @description > Do not call this operation frequently. To query events in near-real time, you can create a trail to deliver events to Simple Log Service (SLS) and use its real-time consumption feature. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Real-time consumption](https://help.aliyun.com/document_detail/28997.html).
 *
 * @param request LookupEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupEventsResponse
 */
LookupEventsResponse Client::lookupEventsWithOptions(const LookupEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLookupAttribute()) {
    query["LookupAttribute"] = request.getLookupAttribute();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries detailed historical events.
 *
 * @description > Do not call this operation frequently. To query events in near-real time, you can create a trail to deliver events to Simple Log Service (SLS) and use its real-time consumption feature. For more information, see [Create a single-account trail](https://help.aliyun.com/document_detail/28810.html), [Create a multi-account trail](https://help.aliyun.com/document_detail/160661.html), and [Real-time consumption](https://help.aliyun.com/document_detail/28997.html).
 *
 * @param request LookupEventsRequest
 * @return LookupEventsResponse
 */
LookupEventsResponse Client::lookupEvents(const LookupEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupEventsWithOptions(request, runtime);
}

/**
 * @summary Queries Insights events.
 *
 * @param request LookupInsightEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupInsightEventsResponse
 */
LookupInsightEventsResponse Client::lookupInsightEventsWithOptions(const LookupInsightEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLookupAttribute()) {
    query["LookupAttribute"] = request.getLookupAttribute();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LookupInsightEvents"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LookupInsightEventsResponse>();
}

/**
 * @summary Queries Insights events.
 *
 * @param request LookupInsightEventsRequest
 * @return LookupInsightEventsResponse
 */
LookupInsightEventsResponse Client::lookupInsightEvents(const LookupInsightEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupInsightEventsWithOptions(request, runtime);
}

/**
 * @summary Creates or configures a data event selector. A trail must exist before you create a data event selector. If a trail does not exist, you can call the CreateTrail operation to create one.
 *
 * @param request PutDataEventSelectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDataEventSelectorResponse
 */
PutDataEventSelectorResponse Client::putDataEventSelectorWithOptions(const PutDataEventSelectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventSelectors()) {
    query["EventSelectors"] = request.getEventSelectors();
  }

  if (!!request.hasIsTrailAllRegion()) {
    query["IsTrailAllRegion"] = request.getIsTrailAllRegion();
  }

  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
  }

  if (!!request.hasTrailRegionIds()) {
    query["TrailRegionIds"] = request.getTrailRegionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutDataEventSelector"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDataEventSelectorResponse>();
}

/**
 * @summary Creates or configures a data event selector. A trail must exist before you create a data event selector. If a trail does not exist, you can call the CreateTrail operation to create one.
 *
 * @param request PutDataEventSelectorRequest
 * @return PutDataEventSelectorResponse
 */
PutDataEventSelectorResponse Client::putDataEventSelector(const PutDataEventSelectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDataEventSelectorWithOptions(request, runtime);
}

/**
 * @summary Specifies the types of Insights events to deliver for a trail.
 *
 * @param request PutInsightSelectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutInsightSelectorsResponse
 */
PutInsightSelectorsResponse Client::putInsightSelectorsWithOptions(const PutInsightSelectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInsightSelectors()) {
    query["InsightSelectors"] = request.getInsightSelectors();
  }

  if (!!request.hasTrailName()) {
    query["TrailName"] = request.getTrailName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutInsightSelectors"},
    {"version" , "2020-07-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutInsightSelectorsResponse>();
}

/**
 * @summary Specifies the types of Insights events to deliver for a trail.
 *
 * @param request PutInsightSelectorsRequest
 * @return PutInsightSelectorsResponse
 */
PutInsightSelectorsResponse Client::putInsightSelectors(const PutInsightSelectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putInsightSelectorsWithOptions(request, runtime);
}

/**
 * @summary Enables a trail to start delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
 *
 * @description This topic provides an example on how to enable a trail named `trail-test`.
 *
 * @param request StartLoggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLoggingResponse
 */
StartLoggingResponse Client::startLoggingWithOptions(const StartLoggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
 * @summary Enables a trail to start delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
 *
 * @description This topic provides an example on how to enable a trail named `trail-test`.
 *
 * @param request StartLoggingRequest
 * @return StartLoggingResponse
 */
StartLoggingResponse Client::startLogging(const StartLoggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startLoggingWithOptions(request, runtime);
}

/**
 * @summary Disables a trail to stop delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
 *
 * @description This topic provides an example on how to disable a trail named `trail-test`.
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
 * @summary Disables a trail to stop delivering ActionTrail events to Object Storage Service (OSS), Simple Log Service (SLS), or MaxCompute.
 *
 * @description This topic provides an example on how to disable a trail named `trail-test`.
 *
 * @param request StopLoggingRequest
 * @return StopLoggingResponse
 */
StopLoggingResponse Client::stopLogging(const StopLoggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLoggingWithOptions(request, runtime);
}

/**
 * @summary Updates an advanced query template.
 *
 * @param request UpdateAdvancedQueryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdvancedQueryTemplateResponse
 */
UpdateAdvancedQueryTemplateResponse Client::updateAdvancedQueryTemplateWithOptions(const UpdateAdvancedQueryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSimpleQuery()) {
    query["SimpleQuery"] = request.getSimpleQuery();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateSql()) {
    query["TemplateSql"] = request.getTemplateSql();
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
 * @summary Updates an advanced query template.
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
    query["StorageRegion"] = request.getStorageRegion();
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
    query["EventRW"] = request.getEventRW();
  }

  if (!!request.hasMaxComputeProjectArn()) {
    query["MaxComputeProjectArn"] = request.getMaxComputeProjectArn();
  }

  if (!!request.hasMaxComputeWriteRoleArn()) {
    query["MaxComputeWriteRoleArn"] = request.getMaxComputeWriteRoleArn();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssKeyPrefix()) {
    query["OssKeyPrefix"] = request.getOssKeyPrefix();
  }

  if (!!request.hasOssWriteRoleArn()) {
    query["OssWriteRoleArn"] = request.getOssWriteRoleArn();
  }

  if (!!request.hasSlsProjectArn()) {
    query["SlsProjectArn"] = request.getSlsProjectArn();
  }

  if (!!request.hasSlsWriteRoleArn()) {
    query["SlsWriteRoleArn"] = request.getSlsWriteRoleArn();
  }

  if (!!request.hasTrailRegion()) {
    query["TrailRegion"] = request.getTrailRegion();
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