#include <darabonba/Core.hpp>
#include <alibabacloud/Governance20210120.hpp>
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
using namespace AlibabaCloud::Governance20210120::Models;
namespace AlibabaCloud
{
namespace Governance20210120
{

AlibabaCloud::Governance20210120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"eu-central-1" , "governance.eu-central-1.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "governance.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-hangzhou" , "governance.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1" , "governance.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("governance", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Applies an account baseline to multiple existing resource accounts at a time.
 *
 * @description Applies an account baseline to multiple existing resource accounts at a time.
 * Account enrollment is an asynchronous process. After the accounts are enrolled, the account factory baseline is applied to each account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](https://help.aliyun.com/document_detail/609062.html).
 *
 * @param request BatchEnrollAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchEnrollAccountsResponse
 */
BatchEnrollAccountsResponse Client::batchEnrollAccountsWithOptions(const BatchEnrollAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccounts()) {
    query["Accounts"] = request.getAccounts();
  }

  if (!!request.hasBaselineId()) {
    query["BaselineId"] = request.getBaselineId();
  }

  if (!!request.hasBaselineItems()) {
    query["BaselineItems"] = request.getBaselineItems();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchEnrollAccounts"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchEnrollAccountsResponse>();
}

/**
 * @summary Applies an account baseline to multiple existing resource accounts at a time.
 *
 * @description Applies an account baseline to multiple existing resource accounts at a time.
 * Account enrollment is an asynchronous process. After the accounts are enrolled, the account factory baseline is applied to each account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](https://help.aliyun.com/document_detail/609062.html).
 *
 * @param request BatchEnrollAccountsRequest
 * @return BatchEnrollAccountsResponse
 */
BatchEnrollAccountsResponse Client::batchEnrollAccounts(const BatchEnrollAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchEnrollAccountsWithOptions(request, runtime);
}

/**
 * @summary Creates a baseline of the account factory.
 *
 * @param request CreateAccountFactoryBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountFactoryBaselineResponse
 */
CreateAccountFactoryBaselineResponse Client::createAccountFactoryBaselineWithOptions(const CreateAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineItems()) {
    query["BaselineItems"] = request.getBaselineItems();
  }

  if (!!request.hasBaselineName()) {
    query["BaselineName"] = request.getBaselineName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccountFactoryBaseline"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountFactoryBaselineResponse>();
}

/**
 * @summary Creates a baseline of the account factory.
 *
 * @param request CreateAccountFactoryBaselineRequest
 * @return CreateAccountFactoryBaselineResponse
 */
CreateAccountFactoryBaselineResponse Client::createAccountFactoryBaseline(const CreateAccountFactoryBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountFactoryBaselineWithOptions(request, runtime);
}

/**
 * @summary Deletes an account factory baseline.
 *
 * @param request DeleteAccountFactoryBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountFactoryBaselineResponse
 */
DeleteAccountFactoryBaselineResponse Client::deleteAccountFactoryBaselineWithOptions(const DeleteAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineId()) {
    query["BaselineId"] = request.getBaselineId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccountFactoryBaseline"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountFactoryBaselineResponse>();
}

/**
 * @summary Deletes an account factory baseline.
 *
 * @param request DeleteAccountFactoryBaselineRequest
 * @return DeleteAccountFactoryBaselineResponse
 */
DeleteAccountFactoryBaselineResponse Client::deleteAccountFactoryBaseline(const DeleteAccountFactoryBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountFactoryBaselineWithOptions(request, runtime);
}

/**
 * @summary Creates a new resource account or enrolls an existing resource account in Account Factory.
 *
 * @description Creates a new resource account or enrolls an existing resource account, and applies the account factory baseline to the account.
 * Account enrollment is an asynchronous process. After an account is created, the account factory baseline is applied to the account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](~~GetEnrolledAccount~~).
 *
 * @param tmpReq EnrollAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnrollAccountResponse
 */
EnrollAccountResponse Client::enrollAccountWithOptions(const EnrollAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnrollAccountShrinkRequest request = EnrollAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAccountNamePrefix()) {
    query["AccountNamePrefix"] = request.getAccountNamePrefix();
  }

  if (!!request.hasAccountUid()) {
    query["AccountUid"] = request.getAccountUid();
  }

  if (!!request.hasBaselineId()) {
    query["BaselineId"] = request.getBaselineId();
  }

  if (!!request.hasBaselineItems()) {
    query["BaselineItems"] = request.getBaselineItems();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasFolderId()) {
    query["FolderId"] = request.getFolderId();
  }

  if (!!request.hasPayerAccountUid()) {
    query["PayerAccountUid"] = request.getPayerAccountUid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResellAccountType()) {
    query["ResellAccountType"] = request.getResellAccountType();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnrollAccount"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnrollAccountResponse>();
}

/**
 * @summary Creates a new resource account or enrolls an existing resource account in Account Factory.
 *
 * @description Creates a new resource account or enrolls an existing resource account, and applies the account factory baseline to the account.
 * Account enrollment is an asynchronous process. After an account is created, the account factory baseline is applied to the account. To query the enrollment details and check the baseline application result, call [GetEnrolledAccount](~~GetEnrolledAccount~~).
 *
 * @param request EnrollAccountRequest
 * @return EnrollAccountResponse
 */
EnrollAccountResponse Client::enrollAccount(const EnrollAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enrollAccountWithOptions(request, runtime);
}

/**
 * @summary Generate Governance Evaluation Report
 *
 * @description Generates a governance evaluation report.
 * > 
 * > - This is an asynchronous API. You can check the `Finished` field in the response to determine the report generation status.
 *
 * @param tmpReq GenerateEvaluationReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateEvaluationReportResponse
 */
GenerateEvaluationReportResponse Client::generateEvaluationReportWithOptions(const GenerateEvaluationReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateEvaluationReportShrinkRequest request = GenerateEvaluationReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "AccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateEvaluationReport"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateEvaluationReportResponse>();
}

/**
 * @summary Generate Governance Evaluation Report
 *
 * @description Generates a governance evaluation report.
 * > 
 * > - This is an asynchronous API. You can check the `Finished` field in the response to determine the report generation status.
 *
 * @param request GenerateEvaluationReportRequest
 * @return GenerateEvaluationReportResponse
 */
GenerateEvaluationReportResponse Client::generateEvaluationReport(const GenerateEvaluationReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateEvaluationReportWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of an account factory baseline.
 *
 * @param request GetAccountFactoryBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountFactoryBaselineResponse
 */
GetAccountFactoryBaselineResponse Client::getAccountFactoryBaselineWithOptions(const GetAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineId()) {
    query["BaselineId"] = request.getBaselineId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountFactoryBaseline"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountFactoryBaselineResponse>();
}

/**
 * @summary Obtains the details of an account factory baseline.
 *
 * @param request GetAccountFactoryBaselineRequest
 * @return GetAccountFactoryBaselineResponse
 */
GetAccountFactoryBaselineResponse Client::getAccountFactoryBaseline(const GetAccountFactoryBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountFactoryBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries the details about an account that is enrolled in the account factory.
 *
 * @param request GetEnrolledAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnrolledAccountResponse
 */
GetEnrolledAccountResponse Client::getEnrolledAccountWithOptions(const GetEnrolledAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountUid()) {
    query["AccountUid"] = request.getAccountUid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnrolledAccount"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnrolledAccountResponse>();
}

/**
 * @summary Queries the details about an account that is enrolled in the account factory.
 *
 * @param request GetEnrolledAccountRequest
 * @return GetEnrolledAccountResponse
 */
GetEnrolledAccountResponse Client::getEnrolledAccount(const GetEnrolledAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEnrolledAccountWithOptions(request, runtime);
}

/**
 * @summary Queries a list of baseline items that are supported by the account factory of Cloud Governance Center (CGC).
 *
 * @param request ListAccountFactoryBaselineItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountFactoryBaselineItemsResponse
 */
ListAccountFactoryBaselineItemsResponse Client::listAccountFactoryBaselineItemsWithOptions(const ListAccountFactoryBaselineItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNames()) {
    query["Names"] = request.getNames();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVersions()) {
    query["Versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccountFactoryBaselineItems"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountFactoryBaselineItemsResponse>();
}

/**
 * @summary Queries a list of baseline items that are supported by the account factory of Cloud Governance Center (CGC).
 *
 * @param request ListAccountFactoryBaselineItemsRequest
 * @return ListAccountFactoryBaselineItemsResponse
 */
ListAccountFactoryBaselineItemsResponse Client::listAccountFactoryBaselineItems(const ListAccountFactoryBaselineItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountFactoryBaselineItemsWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of baselines in the account factory.
 *
 * @param request ListAccountFactoryBaselinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccountFactoryBaselinesResponse
 */
ListAccountFactoryBaselinesResponse Client::listAccountFactoryBaselinesWithOptions(const ListAccountFactoryBaselinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccountFactoryBaselines"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccountFactoryBaselinesResponse>();
}

/**
 * @summary Obtains a list of baselines in the account factory.
 *
 * @param request ListAccountFactoryBaselinesRequest
 * @return ListAccountFactoryBaselinesResponse
 */
ListAccountFactoryBaselinesResponse Client::listAccountFactoryBaselines(const ListAccountFactoryBaselinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccountFactoryBaselinesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of accounts that are enrolled in the account factory.
 *
 * @param request ListEnrolledAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnrolledAccountsResponse
 */
ListEnrolledAccountsResponse Client::listEnrolledAccountsWithOptions(const ListEnrolledAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnrolledAccounts"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnrolledAccountsResponse>();
}

/**
 * @summary Queries a list of accounts that are enrolled in the account factory.
 *
 * @param request ListEnrolledAccountsRequest
 * @return ListEnrolledAccountsResponse
 */
ListEnrolledAccountsResponse Client::listEnrolledAccounts(const ListEnrolledAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnrolledAccountsWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about all available governance evaluation items, including names, IDs, descriptions, stages, resource detail metadata, and remediation guidance.
 *
 * @param request ListEvaluationMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationMetadataResponse
 */
ListEvaluationMetadataResponse Client::listEvaluationMetadataWithOptions(const ListEvaluationMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasLensCode()) {
    query["LensCode"] = request.getLensCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopicCode()) {
    query["TopicCode"] = request.getTopicCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationMetadata"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationMetadataResponse>();
}

/**
 * @summary Retrieves information about all available governance evaluation items, including names, IDs, descriptions, stages, resource detail metadata, and remediation guidance.
 *
 * @param request ListEvaluationMetadataRequest
 * @return ListEvaluationMetadataResponse
 */
ListEvaluationMetadataResponse Client::listEvaluationMetadata(const ListEvaluationMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEvaluationMetadataWithOptions(request, runtime);
}

/**
 * @summary Retrieves non-compliant resource information for a specified check item, including the name, ID, category, type, region, and related metadata of non-compliant resources.
 *
 * @param request ListEvaluationMetricDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationMetricDetailsResponse
 */
ListEvaluationMetricDetailsResponse Client::listEvaluationMetricDetailsWithOptions(const ListEvaluationMetricDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationMetricDetails"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationMetricDetailsResponse>();
}

/**
 * @summary Retrieves non-compliant resource information for a specified check item, including the name, ID, category, type, region, and related metadata of non-compliant resources.
 *
 * @param request ListEvaluationMetricDetailsRequest
 * @return ListEvaluationMetricDetailsResponse
 */
ListEvaluationMetricDetailsResponse Client::listEvaluationMetricDetails(const ListEvaluationMetricDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEvaluationMetricDetailsWithOptions(request, runtime);
}

/**
 * @summary Get governance evaluation results and status.
 *
 * @param request ListEvaluationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationResultsResponse
 */
ListEvaluationResultsResponse Client::listEvaluationResultsWithOptions(const ListEvaluationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasLensCode()) {
    query["LensCode"] = request.getLensCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasTopicCode()) {
    query["TopicCode"] = request.getTopicCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationResults"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationResultsResponse>();
}

/**
 * @summary Get governance evaluation results and status.
 *
 * @param request ListEvaluationResultsRequest
 * @return ListEvaluationResultsResponse
 */
ListEvaluationResultsResponse Client::listEvaluationResults(const ListEvaluationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEvaluationResultsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the historical scores of governance detection.
 *
 * @param request ListEvaluationScoreHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEvaluationScoreHistoryResponse
 */
ListEvaluationScoreHistoryResponse Client::listEvaluationScoreHistoryWithOptions(const ListEvaluationScoreHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEvaluationScoreHistory"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEvaluationScoreHistoryResponse>();
}

/**
 * @summary Retrieves the historical scores of governance detection.
 *
 * @param request ListEvaluationScoreHistoryRequest
 * @return ListEvaluationScoreHistoryResponse
 */
ListEvaluationScoreHistoryResponse Client::listEvaluationScoreHistory(const ListEvaluationScoreHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEvaluationScoreHistoryWithOptions(request, runtime);
}

/**
 * @summary Runs a Cloud Governance Center governance check.
 *
 * @param tmpReq RunEvaluationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunEvaluationResponse
 */
RunEvaluationResponse Client::runEvaluationWithOptions(const RunEvaluationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunEvaluationShrinkRequest request = RunEvaluationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricIds()) {
    request.setMetricIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricIds(), "MetricIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasEvaluationDomain()) {
    query["EvaluationDomain"] = request.getEvaluationDomain();
  }

  if (!!request.hasMetricIdsShrink()) {
    query["MetricIds"] = request.getMetricIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunEvaluation"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunEvaluationResponse>();
}

/**
 * @summary Runs a Cloud Governance Center governance check.
 *
 * @param request RunEvaluationRequest
 * @return RunEvaluationResponse
 */
RunEvaluationResponse Client::runEvaluation(const RunEvaluationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runEvaluationWithOptions(request, runtime);
}

/**
 * @summary Updates a baseline of the account factory.
 *
 * @param request UpdateAccountFactoryBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountFactoryBaselineResponse
 */
UpdateAccountFactoryBaselineResponse Client::updateAccountFactoryBaselineWithOptions(const UpdateAccountFactoryBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineId()) {
    query["BaselineId"] = request.getBaselineId();
  }

  if (!!request.hasBaselineItems()) {
    query["BaselineItems"] = request.getBaselineItems();
  }

  if (!!request.hasBaselineName()) {
    query["BaselineName"] = request.getBaselineName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccountFactoryBaseline"},
    {"version" , "2021-01-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountFactoryBaselineResponse>();
}

/**
 * @summary Updates a baseline of the account factory.
 *
 * @param request UpdateAccountFactoryBaselineRequest
 * @return UpdateAccountFactoryBaselineResponse
 */
UpdateAccountFactoryBaselineResponse Client::updateAccountFactoryBaseline(const UpdateAccountFactoryBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountFactoryBaselineWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Governance20210120