// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cr_20160607.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Cr20160607;

Alibabacloud_Cr20160607::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cr"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cr20160607::Client::getEndpoint(shared_ptr<string> productId,
                                                    shared_ptr<string> regionId,
                                                    shared_ptr<string> endpointRule,
                                                    shared_ptr<string> network,
                                                    shared_ptr<string> suffix,
                                                    shared_ptr<map<string, string>> endpointMap,
                                                    shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CancelRepoBuildResponse Alibabacloud_Cr20160607::Client::cancelRepoBuild(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelRepoBuildWithOptions(RepoNamespace, RepoName, BuildId, headers, runtime);
}

CancelRepoBuildResponse Alibabacloud_Cr20160607::Client::cancelRepoBuildWithOptions(shared_ptr<string> RepoNamespace,
                                                                                    shared_ptr<string> RepoName,
                                                                                    shared_ptr<string> BuildId,
                                                                                    shared_ptr<map<string, string>> headers,
                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  BuildId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(BuildId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelRepoBuild"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/build/") + string(*BuildId) + string("/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CancelRepoBuildResponse(callApi(params, req, runtime));
}

CreateNamespaceResponse Alibabacloud_Cr20160607::Client::createNamespace() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createNamespaceWithOptions(headers, runtime);
}

CreateNamespaceResponse Alibabacloud_Cr20160607::Client::createNamespaceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNamespace"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/namespace"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateNamespaceResponse(callApi(params, req, runtime));
}

CreateRepoResponse Alibabacloud_Cr20160607::Client::createRepo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepoWithOptions(headers, runtime);
}

CreateRepoResponse Alibabacloud_Cr20160607::Client::createRepoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateRepoResponse(callApi(params, req, runtime));
}

CreateRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::createRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepoBuildRuleWithOptions(RepoNamespace, RepoName, headers, runtime);
}

CreateRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::createRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                                                            shared_ptr<string> RepoName,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoBuildRule"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/rules"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateRepoBuildRuleResponse(callApi(params, req, runtime));
}

CreateRepoWebhookResponse Alibabacloud_Cr20160607::Client::createRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createRepoWebhookWithOptions(RepoNamespace, RepoName, headers, runtime);
}

CreateRepoWebhookResponse Alibabacloud_Cr20160607::Client::createRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                                                        shared_ptr<string> RepoName,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRepoWebhook"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/webhooks"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateRepoWebhookResponse(callApi(params, req, runtime));
}

CreateUserInfoResponse Alibabacloud_Cr20160607::Client::createUserInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createUserInfoWithOptions(headers, runtime);
}

CreateUserInfoResponse Alibabacloud_Cr20160607::Client::createUserInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserInfo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateUserInfoResponse(callApi(params, req, runtime));
}

DeleteImageResponse Alibabacloud_Cr20160607::Client::deleteImage(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteImageWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

DeleteImageResponse Alibabacloud_Cr20160607::Client::deleteImageWithOptions(shared_ptr<string> RepoNamespace,
                                                                            shared_ptr<string> RepoName,
                                                                            shared_ptr<string> Tag,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImage"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteImageResponse(callApi(params, req, runtime));
}

DeleteNamespaceResponse Alibabacloud_Cr20160607::Client::deleteNamespace(shared_ptr<string> Namespace_) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteNamespaceWithOptions(shared_ptr<string> Namespace_, headers, runtime);
}

DeleteNamespaceResponse Alibabacloud_Cr20160607::Client::deleteNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<string> Namespace_ = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Namespace_));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNamespace"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/namespace/") + string(*Namespace_))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteNamespaceResponse(callApi(params, req, runtime));
}

DeleteRepoResponse Alibabacloud_Cr20160607::Client::deleteRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepoWithOptions(RepoNamespace, RepoName, headers, runtime);
}

DeleteRepoResponse Alibabacloud_Cr20160607::Client::deleteRepoWithOptions(shared_ptr<string> RepoNamespace,
                                                                          shared_ptr<string> RepoName,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteRepoResponse(callApi(params, req, runtime));
}

DeleteRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::deleteRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepoBuildRuleWithOptions(RepoNamespace, RepoName, BuildRuleId, headers, runtime);
}

DeleteRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::deleteRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                                                            shared_ptr<string> RepoName,
                                                                                            shared_ptr<string> BuildRuleId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  BuildRuleId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(BuildRuleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoBuildRule"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/rules/") + string(*BuildRuleId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteRepoBuildRuleResponse(callApi(params, req, runtime));
}

DeleteRepoWebhookResponse Alibabacloud_Cr20160607::Client::deleteRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> WebhookId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteRepoWebhookWithOptions(RepoNamespace, RepoName, WebhookId, headers, runtime);
}

DeleteRepoWebhookResponse Alibabacloud_Cr20160607::Client::deleteRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                                                        shared_ptr<string> RepoName,
                                                                                        shared_ptr<string> WebhookId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  WebhookId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WebhookId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRepoWebhook"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/webhooks/") + string(*WebhookId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteRepoWebhookResponse(callApi(params, req, runtime));
}

GetAuthorizationTokenResponse Alibabacloud_Cr20160607::Client::getAuthorizationToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAuthorizationTokenWithOptions(headers, runtime);
}

GetAuthorizationTokenResponse Alibabacloud_Cr20160607::Client::getAuthorizationTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorizationToken"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/tokens"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetAuthorizationTokenResponse(callApi(params, req, runtime));
}

GetImageLayerResponse Alibabacloud_Cr20160607::Client::getImageLayer(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getImageLayerWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

GetImageLayerResponse Alibabacloud_Cr20160607::Client::getImageLayerWithOptions(shared_ptr<string> RepoNamespace,
                                                                                shared_ptr<string> RepoName,
                                                                                shared_ptr<string> Tag,
                                                                                shared_ptr<map<string, string>> headers,
                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageLayer"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/layers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetImageLayerResponse(callApi(params, req, runtime));
}

GetImageManifestResponse Alibabacloud_Cr20160607::Client::getImageManifest(shared_ptr<string> RepoNamespace,
                                                                           shared_ptr<string> RepoName,
                                                                           shared_ptr<string> Tag,
                                                                           shared_ptr<GetImageManifestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getImageManifestWithOptions(RepoNamespace, RepoName, Tag, request, headers, runtime);
}

GetImageManifestResponse Alibabacloud_Cr20160607::Client::getImageManifestWithOptions(shared_ptr<string> RepoNamespace,
                                                                                      shared_ptr<string> RepoName,
                                                                                      shared_ptr<string> Tag,
                                                                                      shared_ptr<GetImageManifestRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->schemaVersion)) {
    (*query)["SchemaVersion"] = *request->schemaVersion;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageManifest"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/manifest"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetImageManifestResponse(callApi(params, req, runtime));
}

GetNamespaceResponse Alibabacloud_Cr20160607::Client::getNamespace(shared_ptr<string> Namespace_) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getNamespaceWithOptions(shared_ptr<string> Namespace_, headers, runtime);
}

GetNamespaceResponse Alibabacloud_Cr20160607::Client::getNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<string> Namespace_ = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Namespace_));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNamespace"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/namespace/") + string(*Namespace_))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetNamespaceResponse(callApi(params, req, runtime));
}

GetNamespaceListResponse Alibabacloud_Cr20160607::Client::getNamespaceList(shared_ptr<GetNamespaceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getNamespaceListWithOptions(request, headers, runtime);
}

GetNamespaceListResponse Alibabacloud_Cr20160607::Client::getNamespaceListWithOptions(shared_ptr<GetNamespaceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorize)) {
    (*query)["Authorize"] = *request->authorize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNamespaceList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/namespace"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetNamespaceListResponse(callApi(params, req, runtime));
}

GetRegionResponse Alibabacloud_Cr20160607::Client::getRegion(shared_ptr<GetRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRegionWithOptions(request, headers, runtime);
}

GetRegionResponse Alibabacloud_Cr20160607::Client::getRegionWithOptions(shared_ptr<GetRegionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    (*query)["Domain"] = *request->domain;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegion"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRegionResponse(callApi(params, req, runtime));
}

GetRegionListResponse Alibabacloud_Cr20160607::Client::getRegionList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRegionListWithOptions(headers, runtime);
}

GetRegionListResponse Alibabacloud_Cr20160607::Client::getRegionListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegionList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRegionListResponse(callApi(params, req, runtime));
}

GetRepoResponse Alibabacloud_Cr20160607::Client::getRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoWithOptions(RepoNamespace, RepoName, headers, runtime);
}

GetRepoResponse Alibabacloud_Cr20160607::Client::getRepoWithOptions(shared_ptr<string> RepoNamespace,
                                                                    shared_ptr<string> RepoName,
                                                                    shared_ptr<map<string, string>> headers,
                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoResponse(callApi(params, req, runtime));
}

GetRepoBuildListResponse Alibabacloud_Cr20160607::Client::getRepoBuildList(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<GetRepoBuildListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoBuildListWithOptions(RepoNamespace, RepoName, request, headers, runtime);
}

GetRepoBuildListResponse Alibabacloud_Cr20160607::Client::getRepoBuildListWithOptions(shared_ptr<string> RepoNamespace,
                                                                                      shared_ptr<string> RepoName,
                                                                                      shared_ptr<GetRepoBuildListRequest> request,
                                                                                      shared_ptr<map<string, string>> headers,
                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoBuildList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/build"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoBuildListResponse(callApi(params, req, runtime));
}

GetRepoBuildRuleListResponse Alibabacloud_Cr20160607::Client::getRepoBuildRuleList(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoBuildRuleListWithOptions(RepoNamespace, RepoName, headers, runtime);
}

GetRepoBuildRuleListResponse Alibabacloud_Cr20160607::Client::getRepoBuildRuleListWithOptions(shared_ptr<string> RepoNamespace,
                                                                                              shared_ptr<string> RepoName,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoBuildRuleList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/rules"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoBuildRuleListResponse(callApi(params, req, runtime));
}

GetRepoBuildStatusResponse Alibabacloud_Cr20160607::Client::getRepoBuildStatus(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoBuildStatusWithOptions(RepoNamespace, RepoName, BuildId, headers, runtime);
}

GetRepoBuildStatusResponse Alibabacloud_Cr20160607::Client::getRepoBuildStatusWithOptions(shared_ptr<string> RepoNamespace,
                                                                                          shared_ptr<string> RepoName,
                                                                                          shared_ptr<string> BuildId,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  BuildId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(BuildId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoBuildStatus"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/build/") + string(*BuildId) + string("/status"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoBuildStatusResponse(callApi(params, req, runtime));
}

GetRepoListResponse Alibabacloud_Cr20160607::Client::getRepoList(shared_ptr<GetRepoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoListWithOptions(request, headers, runtime);
}

GetRepoListResponse Alibabacloud_Cr20160607::Client::getRepoListWithOptions(shared_ptr<GetRepoListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoListResponse(callApi(params, req, runtime));
}

GetRepoListByNamespaceResponse Alibabacloud_Cr20160607::Client::getRepoListByNamespace(shared_ptr<string> RepoNamespace, shared_ptr<GetRepoListByNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoListByNamespaceWithOptions(RepoNamespace, request, headers, runtime);
}

GetRepoListByNamespaceResponse Alibabacloud_Cr20160607::Client::getRepoListByNamespaceWithOptions(shared_ptr<string> RepoNamespace,
                                                                                                  shared_ptr<GetRepoListByNamespaceRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["Status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoListByNamespace"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoListByNamespaceResponse(callApi(params, req, runtime));
}

GetRepoTagResponse Alibabacloud_Cr20160607::Client::getRepoTag(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoTagWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

GetRepoTagResponse Alibabacloud_Cr20160607::Client::getRepoTagWithOptions(shared_ptr<string> RepoNamespace,
                                                                          shared_ptr<string> RepoName,
                                                                          shared_ptr<string> Tag,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTag"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepoTagResponse(callApi(params, req, runtime));
}

GetRepoTagScanListResponse Alibabacloud_Cr20160607::Client::getRepoTagScanList(shared_ptr<string> RepoNamespace,
                                                                               shared_ptr<string> RepoName,
                                                                               shared_ptr<string> Tag,
                                                                               shared_ptr<GetRepoTagScanListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoTagScanListWithOptions(RepoNamespace, RepoName, Tag, request, headers, runtime);
}

GetRepoTagScanListResponse Alibabacloud_Cr20160607::Client::getRepoTagScanListWithOptions(shared_ptr<string> RepoNamespace,
                                                                                          shared_ptr<string> RepoName,
                                                                                          shared_ptr<string> Tag,
                                                                                          shared_ptr<GetRepoTagScanListRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    (*query)["Severity"] = *request->severity;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTagScanList"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/scanResult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoTagScanListResponse(callApi(params, req, runtime));
}

GetRepoTagScanStatusResponse Alibabacloud_Cr20160607::Client::getRepoTagScanStatus(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoTagScanStatusWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

GetRepoTagScanStatusResponse Alibabacloud_Cr20160607::Client::getRepoTagScanStatusWithOptions(shared_ptr<string> RepoNamespace,
                                                                                              shared_ptr<string> RepoName,
                                                                                              shared_ptr<string> Tag,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTagScanStatus"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/scanStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoTagScanStatusResponse(callApi(params, req, runtime));
}

GetRepoTagScanSummaryResponse Alibabacloud_Cr20160607::Client::getRepoTagScanSummary(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoTagScanSummaryWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

GetRepoTagScanSummaryResponse Alibabacloud_Cr20160607::Client::getRepoTagScanSummaryWithOptions(shared_ptr<string> RepoNamespace,
                                                                                                shared_ptr<string> RepoName,
                                                                                                shared_ptr<string> Tag,
                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTagScanSummary"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/scanCount"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoTagScanSummaryResponse(callApi(params, req, runtime));
}

GetRepoTagsResponse Alibabacloud_Cr20160607::Client::getRepoTags(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<GetRepoTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoTagsWithOptions(RepoNamespace, RepoName, request, headers, runtime);
}

GetRepoTagsResponse Alibabacloud_Cr20160607::Client::getRepoTagsWithOptions(shared_ptr<string> RepoNamespace,
                                                                            shared_ptr<string> RepoName,
                                                                            shared_ptr<GetRepoTagsRequest> request,
                                                                            shared_ptr<map<string, string>> headers,
                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    (*query)["Page"] = *request->page;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoTags"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoTagsResponse(callApi(params, req, runtime));
}

GetRepoWebhookResponse Alibabacloud_Cr20160607::Client::getRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRepoWebhookWithOptions(RepoNamespace, RepoName, headers, runtime);
}

GetRepoWebhookResponse Alibabacloud_Cr20160607::Client::getRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                                                  shared_ptr<string> RepoName,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepoWebhook"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/webhooks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetRepoWebhookResponse(callApi(params, req, runtime));
}

GetResourceQuotaResponse Alibabacloud_Cr20160607::Client::getResourceQuota(shared_ptr<string> ResourceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceQuotaWithOptions(ResourceName, headers, runtime);
}

GetResourceQuotaResponse Alibabacloud_Cr20160607::Client::getResourceQuotaWithOptions(shared_ptr<string> ResourceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  ResourceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceQuota"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/resource/") + string(*ResourceName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetResourceQuotaResponse(callApi(params, req, runtime));
}

StartImageScanResponse Alibabacloud_Cr20160607::Client::startImageScan(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> Tag) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startImageScanWithOptions(RepoNamespace, RepoName, Tag, headers, runtime);
}

StartImageScanResponse Alibabacloud_Cr20160607::Client::startImageScanWithOptions(shared_ptr<string> RepoNamespace,
                                                                                  shared_ptr<string> RepoName,
                                                                                  shared_ptr<string> Tag,
                                                                                  shared_ptr<map<string, string>> headers,
                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  Tag = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartImageScan"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/tags/") + string(*Tag) + string("/scan"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return StartImageScanResponse(callApi(params, req, runtime));
}

StartRepoBuildByRuleResponse Alibabacloud_Cr20160607::Client::startRepoBuildByRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startRepoBuildByRuleWithOptions(RepoNamespace, RepoName, BuildRuleId, headers, runtime);
}

StartRepoBuildByRuleResponse Alibabacloud_Cr20160607::Client::startRepoBuildByRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                                                              shared_ptr<string> RepoName,
                                                                                              shared_ptr<string> BuildRuleId,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  BuildRuleId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(BuildRuleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRepoBuildByRule"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/rules/") + string(*BuildRuleId) + string("/build"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return StartRepoBuildByRuleResponse(callApi(params, req, runtime));
}

UpdateNamespaceResponse Alibabacloud_Cr20160607::Client::updateNamespace(shared_ptr<string> Namespace_) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateNamespaceWithOptions(shared_ptr<string> Namespace_, headers, runtime);
}

UpdateNamespaceResponse Alibabacloud_Cr20160607::Client::updateNamespaceWithOptions(shared_ptr<string> Namespace_, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<string> Namespace_ = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(Namespace_));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNamespace"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/namespace/") + string(*Namespace_))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateNamespaceResponse(callApi(params, req, runtime));
}

UpdateRepoResponse Alibabacloud_Cr20160607::Client::updateRepo(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepoWithOptions(RepoNamespace, RepoName, headers, runtime);
}

UpdateRepoResponse Alibabacloud_Cr20160607::Client::updateRepoWithOptions(shared_ptr<string> RepoNamespace,
                                                                          shared_ptr<string> RepoName,
                                                                          shared_ptr<map<string, string>> headers,
                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateRepoResponse(callApi(params, req, runtime));
}

UpdateRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::updateRepoBuildRule(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> BuildRuleId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepoBuildRuleWithOptions(RepoNamespace, RepoName, BuildRuleId, headers, runtime);
}

UpdateRepoBuildRuleResponse Alibabacloud_Cr20160607::Client::updateRepoBuildRuleWithOptions(shared_ptr<string> RepoNamespace,
                                                                                            shared_ptr<string> RepoName,
                                                                                            shared_ptr<string> BuildRuleId,
                                                                                            shared_ptr<map<string, string>> headers,
                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  BuildRuleId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(BuildRuleId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepoBuildRule"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/rules/") + string(*BuildRuleId))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateRepoBuildRuleResponse(callApi(params, req, runtime));
}

UpdateRepoWebhookResponse Alibabacloud_Cr20160607::Client::updateRepoWebhook(shared_ptr<string> RepoNamespace, shared_ptr<string> RepoName, shared_ptr<string> WebhookId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateRepoWebhookWithOptions(RepoNamespace, RepoName, WebhookId, headers, runtime);
}

UpdateRepoWebhookResponse Alibabacloud_Cr20160607::Client::updateRepoWebhookWithOptions(shared_ptr<string> RepoNamespace,
                                                                                        shared_ptr<string> RepoName,
                                                                                        shared_ptr<string> WebhookId,
                                                                                        shared_ptr<map<string, string>> headers,
                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  RepoNamespace = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoNamespace));
  RepoName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(RepoName));
  WebhookId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(WebhookId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRepoWebhook"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/repos/") + string(*RepoNamespace) + string("/") + string(*RepoName) + string("/webhooks/") + string(*WebhookId))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateRepoWebhookResponse(callApi(params, req, runtime));
}

UpdateUserInfoResponse Alibabacloud_Cr20160607::Client::updateUserInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateUserInfoWithOptions(headers, runtime);
}

UpdateUserInfoResponse Alibabacloud_Cr20160607::Client::updateUserInfoWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserInfo"))},
    {"version", boost::any(string("2016-06-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateUserInfoResponse(callApi(params, req, runtime));
}

