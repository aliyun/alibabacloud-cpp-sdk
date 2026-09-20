#include <darabonba/Core.hpp>
#include <alibabacloud/AIRegistry20260317.hpp>
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
using namespace AlibabaCloud::AIRegistry20260317::Models;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{

AlibabaCloud::AIRegistry20260317::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("airegistry", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a namespace in AI Registry and returns the corresponding namespace ID.
 *
 * @param request CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasScanPolicy()) {
    query["ScanPolicy"] = request.getScanPolicy();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Creates a namespace in AI Registry and returns the corresponding namespace ID.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Create a prompt and create the initial draft version content of that prompt
 *
 * @param request CreatePromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePromptResponse
 */
CreatePromptResponse Client::createPromptWithOptions(const CreatePromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizTags()) {
    query["BizTags"] = request.getBizTags();
  }

  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
  }

  if (!!request.hasVariables()) {
    query["Variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrompt"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePromptResponse>();
}

/**
 * @summary Create a prompt and create the initial draft version content of that prompt
 *
 * @param request CreatePromptRequest
 * @return CreatePromptResponse
 */
CreatePromptResponse Client::createPrompt(const CreatePromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPromptWithOptions(request, runtime);
}

/**
 * @summary Creates a new version of a prompt. The new version defaults to draft status. An error is returned if a draft version already exists.
 *
 * @param request CreatePromptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePromptVersionResponse
 */
CreatePromptVersionResponse Client::createPromptVersionWithOptions(const CreatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasedOnVersion()) {
    query["BasedOnVersion"] = request.getBasedOnVersion();
  }

  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
  }

  if (!!request.hasVariables()) {
    query["Variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePromptVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePromptVersionResponse>();
}

/**
 * @summary Creates a new version of a prompt. The new version defaults to draft status. An error is returned if a draft version already exists.
 *
 * @param request CreatePromptVersionRequest
 * @return CreatePromptVersionResponse
 */
CreatePromptVersionResponse Client::createPromptVersion(const CreatePromptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPromptVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a Skill draft and returns the Skill version.
 *
 * @param request CreateSkillDraftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillDraftResponse
 */
CreateSkillDraftResponse Client::createSkillDraftWithOptions(const CreateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasedOnVersion()) {
    query["BasedOnVersion"] = request.getBasedOnVersion();
  }

  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillCard()) {
    query["SkillCard"] = request.getSkillCard();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillDraft"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillDraftResponse>();
}

/**
 * @summary Creates a Skill draft and returns the Skill version.
 *
 * @param request CreateSkillDraftRequest
 * @return CreateSkillDraftResponse
 */
CreateSkillDraftResponse Client::createSkillDraft(const CreateSkillDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillDraftWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified namespace from the AI Governance Center. The system checks whether the namespace contains any resources in use (such as Skills or Prompts) before deletion. If such resources exist, the deletion fails.
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a specified namespace from the AI Governance Center. The system checks whether the namespace contains any resources in use (such as Skills or Prompts) before deletion. If such resources exist, the deletion fails.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified prompt.
 *
 * @param request DeletePromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePromptResponse
 */
DeletePromptResponse Client::deletePromptWithOptions(const DeletePromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrompt"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePromptResponse>();
}

/**
 * @summary Deletes a specified prompt.
 *
 * @param request DeletePromptRequest
 * @return DeletePromptResponse
 */
DeletePromptResponse Client::deletePrompt(const DeletePromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePromptWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified Skill.
 *
 * @param request DeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Deletes a specified Skill.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillWithOptions(request, runtime);
}

/**
 * @summary Downloads a skill version through OSS and returns the OSS download URL.
 *
 * @param request DownloadSkillVersionViaOssRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSkillVersionViaOssResponse
 */
DownloadSkillVersionViaOssResponse Client::downloadSkillVersionViaOssWithOptions(const DownloadSkillVersionViaOssRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSkillVersionViaOss"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSkillVersionViaOssResponse>();
}

/**
 * @summary Downloads a skill version through OSS and returns the OSS download URL.
 *
 * @param request DownloadSkillVersionViaOssRequest
 * @return DownloadSkillVersionViaOssResponse
 */
DownloadSkillVersionViaOssResponse Client::downloadSkillVersionViaOss(const DownloadSkillVersionViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSkillVersionViaOssWithOptions(request, runtime);
}

/**
 * @summary Force-publishes a version.
 *
 * @param request ForcePublishSkillVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForcePublishSkillVersionResponse
 */
ForcePublishSkillVersionResponse Client::forcePublishSkillVersionWithOptions(const ForcePublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  if (!!request.hasUpdateLatestLabel()) {
    query["UpdateLatestLabel"] = request.getUpdateLatestLabel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForcePublishSkillVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForcePublishSkillVersionResponse>();
}

/**
 * @summary Force-publishes a version.
 *
 * @param request ForcePublishSkillVersionRequest
 * @return ForcePublishSkillVersionResponse
 */
ForcePublishSkillVersionResponse Client::forcePublishSkillVersion(const ForcePublishSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forcePublishSkillVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an AI Governance Center namespace.
 *
 * @param request GetNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNamespaceResponse
 */
GetNamespaceResponse Client::getNamespaceWithOptions(const GetNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNamespace"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNamespaceResponse>();
}

/**
 * @summary Queries the details of an AI Governance Center namespace.
 *
 * @param request GetNamespaceRequest
 * @return GetNamespaceResponse
 */
GetNamespaceResponse Client::getNamespace(const GetNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNamespaceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a prompt.
 *
 * @param request GetPromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPromptResponse
 */
GetPromptResponse Client::getPromptWithOptions(const GetPromptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrompt"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPromptResponse>();
}

/**
 * @summary Retrieves the details of a prompt.
 *
 * @param request GetPromptRequest
 * @return GetPromptResponse
 */
GetPromptResponse Client::getPrompt(const GetPromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPromptWithOptions(request, runtime);
}

/**
 * @summary Query the detailed information of a specified version of a prompt.
 *
 * @param request GetPromptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPromptVersionResponse
 */
GetPromptVersionResponse Client::getPromptVersionWithOptions(const GetPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasPromptVersion()) {
    query["PromptVersion"] = request.getPromptVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPromptVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPromptVersionResponse>();
}

/**
 * @summary Query the detailed information of a specified version of a prompt.
 *
 * @param request GetPromptVersionRequest
 * @return GetPromptVersionResponse
 */
GetPromptVersionResponse Client::getPromptVersion(const GetPromptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPromptVersionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the metadata and version information of a skill.
 *
 * @param request GetSkillDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillDetailResponse
 */
GetSkillDetailResponse Client::getSkillDetailWithOptions(const GetSkillDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillDetail"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillDetailResponse>();
}

/**
 * @summary Retrieves the metadata and version information of a skill.
 *
 * @param request GetSkillDetailRequest
 * @return GetSkillDetailResponse
 */
GetSkillDetailResponse Client::getSkillDetail(const GetSkillDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves a pre-signed URL for uploading a Skill to OSS. The client uses the returned URL to perform a PUT request to upload the Skill.
 *
 * @param request GetSkillImportFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillImportFileUrlResponse
 */
GetSkillImportFileUrlResponse Client::getSkillImportFileUrlWithOptions(const GetSkillImportFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillImportFileUrl"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillImportFileUrlResponse>();
}

/**
 * @summary Retrieves a pre-signed URL for uploading a Skill to OSS. The client uses the returned URL to perform a PUT request to upload the Skill.
 *
 * @param request GetSkillImportFileUrlRequest
 * @return GetSkillImportFileUrlResponse
 */
GetSkillImportFileUrlResponse Client::getSkillImportFileUrl(const GetSkillImportFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillImportFileUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified version.
 *
 * @param request GetSkillVersionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillVersionDetailResponse
 */
GetSkillVersionDetailResponse Client::getSkillVersionDetailWithOptions(const GetSkillVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillVersionDetail"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillVersionDetailResponse>();
}

/**
 * @summary Retrieves the details of a specified version.
 *
 * @param request GetSkillVersionDetailRequest
 * @return GetSkillVersionDetailResponse
 */
GetSkillVersionDetailResponse Client::getSkillVersionDetail(const GetSkillVersionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillVersionDetailWithOptions(request, runtime);
}

/**
 * @summary Lists the namespaces in the AI Governance Center.
 *
 * @param request ListNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespacesWithOptions(const ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespaces"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespacesResponse>();
}

/**
 * @summary Lists the namespaces in the AI Governance Center.
 *
 * @param request ListNamespacesRequest
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespaces(const ListNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamespacesWithOptions(request, runtime);
}

/**
 * @summary Lists the versions of a prompt.
 *
 * @param request ListPromptVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPromptVersionsResponse
 */
ListPromptVersionsResponse Client::listPromptVersionsWithOptions(const ListPromptVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPromptVersions"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPromptVersionsResponse>();
}

/**
 * @summary Lists the versions of a prompt.
 *
 * @param request ListPromptVersionsRequest
 * @return ListPromptVersionsResponse
 */
ListPromptVersionsResponse Client::listPromptVersions(const ListPromptVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPromptVersionsWithOptions(request, runtime);
}

/**
 * @summary Lists the prompts in a namespace.
 *
 * @param request ListPromptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPromptsResponse
 */
ListPromptsResponse Client::listPromptsWithOptions(const ListPromptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizTags()) {
    query["BizTags"] = request.getBizTags();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrompts"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPromptsResponse>();
}

/**
 * @summary Lists the prompts in a namespace.
 *
 * @param request ListPromptsRequest
 * @return ListPromptsResponse
 */
ListPromptsResponse Client::listPrompts(const ListPromptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPromptsWithOptions(request, runtime);
}

/**
 * @summary Lists skills.
 *
 * @param request ListSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Lists skills.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillsWithOptions(request, runtime);
}

/**
 * @summary Offlines a Skill or a specific version of a Skill.
 *
 * @param request OfflineSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineSkillResponse
 */
OfflineSkillResponse Client::offlineSkillWithOptions(const OfflineSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineSkill"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineSkillResponse>();
}

/**
 * @summary Offlines a Skill or a specific version of a Skill.
 *
 * @param request OfflineSkillRequest
 * @return OfflineSkillResponse
 */
OfflineSkillResponse Client::offlineSkill(const OfflineSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineSkillWithOptions(request, runtime);
}

/**
 * @summary Publishes a skill or a specific version of a skill.
 *
 * @param request OnlineSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineSkillResponse
 */
OnlineSkillResponse Client::onlineSkillWithOptions(const OnlineSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OnlineSkill"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineSkillResponse>();
}

/**
 * @summary Publishes a skill or a specific version of a skill.
 *
 * @param request OnlineSkillRequest
 * @return OnlineSkillResponse
 */
OnlineSkillResponse Client::onlineSkill(const OnlineSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineSkillWithOptions(request, runtime);
}

/**
 * @summary Publishes a specific version of a Skill.
 *
 * @param request PublishSkillVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishSkillVersionResponse
 */
PublishSkillVersionResponse Client::publishSkillVersionWithOptions(const PublishSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  if (!!request.hasUpdateLatestLabel()) {
    query["UpdateLatestLabel"] = request.getUpdateLatestLabel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishSkillVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishSkillVersionResponse>();
}

/**
 * @summary Publishes a specific version of a Skill.
 *
 * @param request PublishSkillVersionRequest
 * @return PublishSkillVersionResponse
 */
PublishSkillVersionResponse Client::publishSkillVersion(const PublishSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishSkillVersionWithOptions(request, runtime);
}

/**
 * @summary Publishes a draft version of a prompt as an official version. The specified version must be a draft version.
 *
 * @param request SubmitPromptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPromptVersionResponse
 */
SubmitPromptVersionResponse Client::submitPromptVersionWithOptions(const SubmitPromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasPromptVersion()) {
    query["PromptVersion"] = request.getPromptVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitPromptVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPromptVersionResponse>();
}

/**
 * @summary Publishes a draft version of a prompt as an official version. The specified version must be a draft version.
 *
 * @param request SubmitPromptVersionRequest
 * @return SubmitPromptVersionResponse
 */
SubmitPromptVersionResponse Client::submitPromptVersion(const SubmitPromptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPromptVersionWithOptions(request, runtime);
}

/**
 * @summary Submits a specific version of a skill for review.
 *
 * @param request SubmitSkillVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSkillVersionResponse
 */
SubmitSkillVersionResponse Client::submitSkillVersionWithOptions(const SubmitSkillVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  if (!!request.hasSkillVersion()) {
    query["SkillVersion"] = request.getSkillVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSkillVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSkillVersionResponse>();
}

/**
 * @summary Submits a specific version of a skill for review.
 *
 * @param request SubmitSkillVersionRequest
 * @return SubmitSkillVersionResponse
 */
SubmitSkillVersionResponse Client::submitSkillVersion(const SubmitSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSkillVersionWithOptions(request, runtime);
}

/**
 * @summary Updates namespace information.
 *
 * @param request UpdateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespaceWithOptions(const UpdateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasScanPolicy()) {
    query["ScanPolicy"] = request.getScanPolicy();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNamespace"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceResponse>();
}

/**
 * @summary Updates namespace information.
 *
 * @param request UpdateNamespaceRequest
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespace(const UpdateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNamespaceWithOptions(request, runtime);
}

/**
 * @summary Modifies the metadata of a prompt, such as the description and business tags.
 *
 * @param tmpReq UpdatePromptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePromptResponse
 */
UpdatePromptResponse Client::updatePromptWithOptions(const UpdatePromptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePromptShrinkRequest request = UpdatePromptShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizTags()) {
    request.setBizTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizTags(), "BizTags", "json"));
  }

  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabels(), "Labels", "json"));
  }

  json query = {};
  if (!!request.hasBizTagsShrink()) {
    query["BizTags"] = request.getBizTagsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.getLabelsShrink();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrompt"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePromptResponse>();
}

/**
 * @summary Modifies the metadata of a prompt, such as the description and business tags.
 *
 * @param request UpdatePromptRequest
 * @return UpdatePromptResponse
 */
UpdatePromptResponse Client::updatePrompt(const UpdatePromptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePromptWithOptions(request, runtime);
}

/**
 * @summary Updates the content of a prompt version. Only the draft version of a prompt can be modified.
 *
 * @param request UpdatePromptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePromptVersionResponse
 */
UpdatePromptVersionResponse Client::updatePromptVersionWithOptions(const UpdatePromptVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasPromptKey()) {
    query["PromptKey"] = request.getPromptKey();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
  }

  if (!!request.hasVariables()) {
    query["Variables"] = request.getVariables();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePromptVersion"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePromptVersionResponse>();
}

/**
 * @summary Updates the content of a prompt version. Only the draft version of a prompt can be modified.
 *
 * @param request UpdatePromptVersionRequest
 * @return UpdatePromptVersionResponse
 */
UpdatePromptVersionResponse Client::updatePromptVersion(const UpdatePromptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePromptVersionWithOptions(request, runtime);
}

/**
 * @summary Updates business tags for a skill.
 *
 * @param request UpdateSkillBizTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillBizTagsResponse
 */
UpdateSkillBizTagsResponse Client::updateSkillBizTagsWithOptions(const UpdateSkillBizTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizTags()) {
    query["BizTags"] = request.getBizTags();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillBizTags"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillBizTagsResponse>();
}

/**
 * @summary Updates business tags for a skill.
 *
 * @param request UpdateSkillBizTagsRequest
 * @return UpdateSkillBizTagsResponse
 */
UpdateSkillBizTagsResponse Client::updateSkillBizTags(const UpdateSkillBizTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillBizTagsWithOptions(request, runtime);
}

/**
 * @summary Updates a draft.
 *
 * @param request UpdateSkillDraftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillDraftResponse
 */
UpdateSkillDraftResponse Client::updateSkillDraftWithOptions(const UpdateSkillDraftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillCard()) {
    query["SkillCard"] = request.getSkillCard();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillDraft"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillDraftResponse>();
}

/**
 * @summary Updates a draft.
 *
 * @param request UpdateSkillDraftRequest
 * @return UpdateSkillDraftResponse
 */
UpdateSkillDraftResponse Client::updateSkillDraft(const UpdateSkillDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillDraftWithOptions(request, runtime);
}

/**
 * @summary Updates version labels.
 *
 * @param request UpdateSkillLabelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillLabelsResponse
 */
UpdateSkillLabelsResponse Client::updateSkillLabelsWithOptions(const UpdateSkillLabelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillLabels"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillLabelsResponse>();
}

/**
 * @summary Updates version labels.
 *
 * @param request UpdateSkillLabelsRequest
 * @return UpdateSkillLabelsResponse
 */
UpdateSkillLabelsResponse Client::updateSkillLabels(const UpdateSkillLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillLabelsWithOptions(request, runtime);
}

/**
 * @summary Updates the visibility.
 *
 * @param request UpdateSkillScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillScopeResponse
 */
UpdateSkillScopeResponse Client::updateSkillScopeWithOptions(const UpdateSkillScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSkillName()) {
    query["SkillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillScope"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillScopeResponse>();
}

/**
 * @summary Updates the visibility.
 *
 * @param request UpdateSkillScopeRequest
 * @return UpdateSkillScopeResponse
 */
UpdateSkillScopeResponse Client::updateSkillScope(const UpdateSkillScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillScopeWithOptions(request, runtime);
}

/**
 * @summary Uploads a skill (ZIP) from OSS by pulling the file content from OSS and uploading it to Nacos.
 *
 * @param request UploadSkillViaOssRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadSkillViaOssResponse
 */
UploadSkillViaOssResponse Client::uploadSkillViaOssWithOptions(const UploadSkillViaOssRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommitMsg()) {
    query["CommitMsg"] = request.getCommitMsg();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasOssObjectName()) {
    query["OssObjectName"] = request.getOssObjectName();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasTargetVersion()) {
    query["TargetVersion"] = request.getTargetVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadSkillViaOss"},
    {"version" , "2026-03-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadSkillViaOssResponse>();
}

/**
 * @summary Uploads a skill (ZIP) from OSS by pulling the file content from OSS and uploading it to Nacos.
 *
 * @param request UploadSkillViaOssRequest
 * @return UploadSkillViaOssResponse
 */
UploadSkillViaOssResponse Client::uploadSkillViaOss(const UploadSkillViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadSkillViaOssWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AIRegistry20260317