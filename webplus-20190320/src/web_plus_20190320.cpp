// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/web_plus_20190320.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_WebPlus20190320;

Alibabacloud_WebPlus20190320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "webplus.cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou", "webplus.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "webplus.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "webplus.cn-hangzhou.aliyuncs.com"},
    {"ap-northeast-1", "webplus.aliyuncs.com"},
    {"ap-south-1", "webplus.aliyuncs.com"},
    {"ap-southeast-1", "webplus.aliyuncs.com"},
    {"ap-southeast-2", "webplus.aliyuncs.com"},
    {"ap-southeast-3", "webplus.aliyuncs.com"},
    {"ap-southeast-5", "webplus.aliyuncs.com"},
    {"cn-chengdu", "webplus.aliyuncs.com"},
    {"cn-hongkong", "webplus-vpc.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote", "webplus.aliyuncs.com"},
    {"cn-qingdao", "webplus.aliyuncs.com"},
    {"eu-central-1", "webplus.aliyuncs.com"},
    {"eu-west-1", "webplus.aliyuncs.com"},
    {"me-east-1", "webplus.aliyuncs.com"},
    {"us-east-1", "webplus.aliyuncs.com"},
    {"us-west-1", "webplus.aliyuncs.com"},
    {"cn-hangzhou-finance", "webplus.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "webplus.aliyuncs.com"},
    {"cn-shanghai-finance-1", "webplus.aliyuncs.com"},
    {"cn-north-2-gov-1", "webplus.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("webplus"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_WebPlus20190320::Client::getEndpoint(shared_ptr<string> productId,
                                                         shared_ptr<string> regionId,
                                                         shared_ptr<string> endpointRule,
                                                         shared_ptr<string> network,
                                                         shared_ptr<string> suffix,
                                                         shared_ptr<map<string, string>> endpointMap,
                                                         shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AbortChangeResponse Alibabacloud_WebPlus20190320::Client::abortChange(shared_ptr<AbortChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return abortChangeWithOptions(request, headers, runtime);
}

AbortChangeResponse Alibabacloud_WebPlus20190320::Client::abortChangeWithOptions(shared_ptr<AbortChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*body)["ChangeId"] = *request->changeId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return AbortChangeResponse(doROARequestWithForm(make_shared<string>("AbortChange"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/change/abort")), make_shared<string>("json"), req, runtime));
}

CreateAppEnvResponse Alibabacloud_WebPlus20190320::Client::createAppEnv(shared_ptr<CreateAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppEnvWithOptions(request, headers, runtime);
}

CreateAppEnvResponse Alibabacloud_WebPlus20190320::Client::createAppEnvWithOptions(shared_ptr<CreateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envName)) {
    (*body)["EnvName"] = *request->envName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envDescription)) {
    (*body)["EnvDescription"] = *request->envDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*body)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionId)) {
    (*body)["PkgVersionId"] = *request->pkgVersionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionSettings)) {
    (*body)["OptionSettings"] = *request->optionSettings;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profileName)) {
    (*body)["ProfileName"] = *request->profileName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEnvId)) {
    (*body)["SourceEnvId"] = *request->sourceEnvId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*body)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*body)["DryRun"] = *request->dryRun;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraProperties)) {
    (*body)["ExtraProperties"] = *request->extraProperties;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateAppEnvResponse(doROARequestWithForm(make_shared<string>("CreateAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv")), make_shared<string>("json"), req, runtime));
}

CreateApplicationResponse Alibabacloud_WebPlus20190320::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createApplicationWithOptions(request, headers, runtime);
}

CreateApplicationResponse Alibabacloud_WebPlus20190320::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*body)["AppName"] = *request->appName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appDescription)) {
    (*body)["AppDescription"] = *request->appDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    (*body)["CategoryName"] = *request->categoryName;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usingSharedStorage)) {
    (*body)["UsingSharedStorage"] = *request->usingSharedStorage;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateApplicationResponse(doROARequestWithForm(make_shared<string>("CreateApplication"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/application")), make_shared<string>("json"), req, runtime));
}

CreateConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::createConfigTemplate(shared_ptr<CreateConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createConfigTemplateWithOptions(request, headers, runtime);
}

CreateConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::createConfigTemplateWithOptions(shared_ptr<CreateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    (*body)["TemplateName"] = *request->templateName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDescription)) {
    (*body)["TemplateDescription"] = *request->templateDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*body)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTemplateId)) {
    (*body)["SourceTemplateId"] = *request->sourceTemplateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEnvId)) {
    (*body)["SourceEnvId"] = *request->sourceEnvId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profileName)) {
    (*body)["ProfileName"] = *request->profileName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionId)) {
    (*body)["PkgVersionId"] = *request->pkgVersionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionSettings)) {
    (*body)["OptionSettings"] = *request->optionSettings;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateConfigTemplateResponse(doROARequestWithForm(make_shared<string>("CreateConfigTemplate"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/configTemplate")), make_shared<string>("json"), req, runtime));
}

CreateOrderResponse Alibabacloud_WebPlus20190320::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createOrderWithOptions(request, headers, runtime);
}

CreateOrderResponse Alibabacloud_WebPlus20190320::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    (*body)["ProductName"] = *request->productName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreateOrderResponse(doROARequestWithForm(make_shared<string>("CreateOrder"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/paas/createOrder")), make_shared<string>("json"), req, runtime));
}

CreatePkgVersionResponse Alibabacloud_WebPlus20190320::Client::createPkgVersion(shared_ptr<CreatePkgVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createPkgVersionWithOptions(request, headers, runtime);
}

CreatePkgVersionResponse Alibabacloud_WebPlus20190320::Client::createPkgVersionWithOptions(shared_ptr<CreatePkgVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionLabel)) {
    (*body)["PkgVersionLabel"] = *request->pkgVersionLabel;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionDescription)) {
    (*body)["PkgVersionDescription"] = *request->pkgVersionDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageSource)) {
    (*body)["PackageSource"] = *request->packageSource;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return CreatePkgVersionResponse(doROARequestWithForm(make_shared<string>("CreatePkgVersion"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/pkgVersion")), make_shared<string>("json"), req, runtime));
}

CreateStorageResponse Alibabacloud_WebPlus20190320::Client::createStorage(shared_ptr<CreateStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createStorageWithOptions(request, headers, runtime);
}

CreateStorageResponse Alibabacloud_WebPlus20190320::Client::createStorageWithOptions(shared_ptr<CreateStorageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return CreateStorageResponse(doROARequest(make_shared<string>("CreateStorage"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/storage")), make_shared<string>("json"), req, runtime));
}

DeleteAppEnvResponse Alibabacloud_WebPlus20190320::Client::deleteAppEnv(shared_ptr<DeleteAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAppEnvWithOptions(request, headers, runtime);
}

DeleteAppEnvResponse Alibabacloud_WebPlus20190320::Client::deleteAppEnvWithOptions(shared_ptr<DeleteAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteAppEnvResponse(doROARequest(make_shared<string>("DeleteAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv")), make_shared<string>("json"), req, runtime));
}

DeleteApplicationResponse Alibabacloud_WebPlus20190320::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApplicationWithOptions(request, headers, runtime);
}

DeleteApplicationResponse Alibabacloud_WebPlus20190320::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteApplicationResponse(doROARequest(make_shared<string>("DeleteApplication"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/application")), make_shared<string>("json"), req, runtime));
}

DeleteChangeResponse Alibabacloud_WebPlus20190320::Client::deleteChange(shared_ptr<DeleteChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteChangeWithOptions(request, headers, runtime);
}

DeleteChangeResponse Alibabacloud_WebPlus20190320::Client::deleteChangeWithOptions(shared_ptr<DeleteChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*query)["ChangeId"] = *request->changeId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteChangeResponse(doROARequest(make_shared<string>("DeleteChange"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/change")), make_shared<string>("json"), req, runtime));
}

DeleteConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::deleteConfigTemplate(shared_ptr<DeleteConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteConfigTemplateWithOptions(request, headers, runtime);
}

DeleteConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::deleteConfigTemplateWithOptions(shared_ptr<DeleteConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*query)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeleteConfigTemplateResponse(doROARequest(make_shared<string>("DeleteConfigTemplate"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/configTemplate")), make_shared<string>("json"), req, runtime));
}

DeletePkgVersionResponse Alibabacloud_WebPlus20190320::Client::deletePkgVersion(shared_ptr<DeletePkgVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePkgVersionWithOptions(request, headers, runtime);
}

DeletePkgVersionResponse Alibabacloud_WebPlus20190320::Client::deletePkgVersionWithOptions(shared_ptr<DeletePkgVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionId)) {
    (*query)["PkgVersionId"] = *request->pkgVersionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DeletePkgVersionResponse(doROARequest(make_shared<string>("DeletePkgVersion"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/pkgVersion")), make_shared<string>("json"), req, runtime));
}

DeployAppEnvResponse Alibabacloud_WebPlus20190320::Client::deployAppEnv(shared_ptr<DeployAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deployAppEnvWithOptions(request, headers, runtime);
}

DeployAppEnvResponse Alibabacloud_WebPlus20190320::Client::deployAppEnvWithOptions(shared_ptr<DeployAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchSize)) {
    (*body)["BatchSize"] = *request->batchSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchPercent)) {
    (*body)["BatchPercent"] = *request->batchPercent;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchInterval)) {
    (*body)["BatchInterval"] = *request->batchInterval;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pauseBetweenBatches)) {
    (*body)["PauseBetweenBatches"] = *request->pauseBetweenBatches;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionId)) {
    (*body)["PkgVersionId"] = *request->pkgVersionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return DeployAppEnvResponse(doROARequestWithForm(make_shared<string>("DeployAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/deploy")), make_shared<string>("json"), req, runtime));
}

DescribeAppEnvInstanceHealthResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvInstanceHealth(shared_ptr<DescribeAppEnvInstanceHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppEnvInstanceHealthWithOptions(request, headers, runtime);
}

DescribeAppEnvInstanceHealthResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvInstanceHealthWithOptions(shared_ptr<DescribeAppEnvInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeAppEnvInstanceHealthResponse(doROARequest(make_shared<string>("DescribeAppEnvInstanceHealth"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/instanceHealth")), make_shared<string>("json"), req, runtime));
}

DescribeAppEnvsResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvs(shared_ptr<DescribeAppEnvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppEnvsWithOptions(request, headers, runtime);
}

DescribeAppEnvsResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvsWithOptions(shared_ptr<DescribeAppEnvsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeTerminated)) {
    (*query)["IncludeTerminated"] = *request->includeTerminated;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envName)) {
    (*query)["EnvName"] = *request->envName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envSearch)) {
    (*query)["EnvSearch"] = *request->envSearch;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recentUpdated)) {
    (*query)["RecentUpdated"] = *request->recentUpdated;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackSearch)) {
    (*query)["StackSearch"] = *request->stackSearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeAppEnvsResponse(doROARequest(make_shared<string>("DescribeAppEnvs"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv")), make_shared<string>("json"), req, runtime));
}

DescribeAppEnvStatusResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvStatus(shared_ptr<DescribeAppEnvStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppEnvStatusWithOptions(request, headers, runtime);
}

DescribeAppEnvStatusResponse Alibabacloud_WebPlus20190320::Client::describeAppEnvStatusWithOptions(shared_ptr<DescribeAppEnvStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeAppEnvStatusResponse(doROARequest(make_shared<string>("DescribeAppEnvStatus"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/status")), make_shared<string>("json"), req, runtime));
}

DescribeApplicationsResponse Alibabacloud_WebPlus20190320::Client::describeApplications(shared_ptr<DescribeApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeApplicationsWithOptions(request, headers, runtime);
}

DescribeApplicationsResponse Alibabacloud_WebPlus20190320::Client::describeApplicationsWithOptions(shared_ptr<DescribeApplicationsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    (*query)["AppName"] = *request->appName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSearch)) {
    (*query)["AppSearch"] = *request->appSearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envSearch)) {
    (*query)["EnvSearch"] = *request->envSearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackSearch)) {
    (*query)["StackSearch"] = *request->stackSearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categorySearch)) {
    (*query)["CategorySearch"] = *request->categorySearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeApplicationsResponse(doROARequest(make_shared<string>("DescribeApplications"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/application")), make_shared<string>("json"), req, runtime));
}

DescribeCategoriesResponse Alibabacloud_WebPlus20190320::Client::describeCategories(shared_ptr<DescribeCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCategoriesWithOptions(request, headers, runtime);
}

DescribeCategoriesResponse Alibabacloud_WebPlus20190320::Client::describeCategoriesWithOptions(shared_ptr<DescribeCategoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeCategoriesResponse(doROARequest(make_shared<string>("DescribeCategories"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/category")), make_shared<string>("json"), req, runtime));
}

DescribeChangeResponse Alibabacloud_WebPlus20190320::Client::describeChange(shared_ptr<DescribeChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChangeWithOptions(request, headers, runtime);
}

DescribeChangeResponse Alibabacloud_WebPlus20190320::Client::describeChangeWithOptions(shared_ptr<DescribeChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*query)["ChangeId"] = *request->changeId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeChangeResponse(doROARequest(make_shared<string>("DescribeChange"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/changeInfo")), make_shared<string>("json"), req, runtime));
}

DescribeChangesResponse Alibabacloud_WebPlus20190320::Client::describeChanges(shared_ptr<DescribeChangesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChangesWithOptions(request, headers, runtime);
}

DescribeChangesResponse Alibabacloud_WebPlus20190320::Client::describeChangesWithOptions(shared_ptr<DescribeChangesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionName)) {
    (*query)["ActionName"] = *request->actionName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeChangesResponse(doROARequest(make_shared<string>("DescribeChanges"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/change")), make_shared<string>("json"), req, runtime));
}

DescribeConfigIndexResponse Alibabacloud_WebPlus20190320::Client::describeConfigIndex(shared_ptr<DescribeConfigIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigIndexWithOptions(request, headers, runtime);
}

DescribeConfigIndexResponse Alibabacloud_WebPlus20190320::Client::describeConfigIndexWithOptions(shared_ptr<DescribeConfigIndexRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*query)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profileName)) {
    (*query)["ProfileName"] = *request->profileName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*query)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeConfigIndexResponse(doROARequest(make_shared<string>("DescribeConfigIndex"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/config/configIndex")), make_shared<string>("json"), req, runtime));
}

DescribeConfigOptionsResponse Alibabacloud_WebPlus20190320::Client::describeConfigOptions(shared_ptr<DescribeConfigOptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigOptionsWithOptions(request, headers, runtime);
}

DescribeConfigOptionsResponse Alibabacloud_WebPlus20190320::Client::describeConfigOptionsWithOptions(shared_ptr<DescribeConfigOptionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*query)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->profileName)) {
    (*query)["ProfileName"] = *request->profileName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeConfigOptionsResponse(doROARequest(make_shared<string>("DescribeConfigOptions"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/config/configOption")), make_shared<string>("json"), req, runtime));
}

DescribeConfigSettingsResponse Alibabacloud_WebPlus20190320::Client::describeConfigSettings(shared_ptr<DescribeConfigSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigSettingsWithOptions(request, headers, runtime);
}

DescribeConfigSettingsResponse Alibabacloud_WebPlus20190320::Client::describeConfigSettingsWithOptions(shared_ptr<DescribeConfigSettingsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*query)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathName)) {
    (*query)["PathName"] = *request->pathName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionName)) {
    (*query)["OptionName"] = *request->optionName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeConfigSettingsResponse(doROARequest(make_shared<string>("DescribeConfigSettings"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/config/configSetting")), make_shared<string>("json"), req, runtime));
}

DescribeConfigTemplatesResponse Alibabacloud_WebPlus20190320::Client::describeConfigTemplates(shared_ptr<DescribeConfigTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeConfigTemplatesWithOptions(request, headers, runtime);
}

DescribeConfigTemplatesResponse Alibabacloud_WebPlus20190320::Client::describeConfigTemplatesWithOptions(shared_ptr<DescribeConfigTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    (*query)["TemplateName"] = *request->templateName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateSearch)) {
    (*query)["TemplateSearch"] = *request->templateSearch;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeConfigTemplatesResponse(doROARequest(make_shared<string>("DescribeConfigTemplates"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/configTemplate")), make_shared<string>("json"), req, runtime));
}

DescribeEnvResourceResponse Alibabacloud_WebPlus20190320::Client::describeEnvResource(shared_ptr<DescribeEnvResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEnvResourceWithOptions(request, headers, runtime);
}

DescribeEnvResourceResponse Alibabacloud_WebPlus20190320::Client::describeEnvResourceWithOptions(shared_ptr<DescribeEnvResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeEnvResourceResponse(doROARequest(make_shared<string>("DescribeEnvResource"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/envResource")), make_shared<string>("json"), req, runtime));
}

DescribeEventsResponse Alibabacloud_WebPlus20190320::Client::describeEvents(shared_ptr<DescribeEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEventsWithOptions(request, headers, runtime);
}

DescribeEventsResponse Alibabacloud_WebPlus20190320::Client::describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*query)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    (*query)["StartTime"] = *request->startTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    (*query)["EndTime"] = *request->endTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*query)["ChangeId"] = *request->changeId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lastChangeEvents)) {
    (*query)["LastChangeEvents"] = *request->lastChangeEvents;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverseByTimestamp)) {
    (*query)["ReverseByTimestamp"] = *request->reverseByTimestamp;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeEventsResponse(doROARequest(make_shared<string>("DescribeEvents"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/event")), make_shared<string>("json"), req, runtime));
}

DescribeGatherLogResultResponse Alibabacloud_WebPlus20190320::Client::describeGatherLogResult(shared_ptr<DescribeGatherLogResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGatherLogResultWithOptions(request, headers, runtime);
}

DescribeGatherLogResultResponse Alibabacloud_WebPlus20190320::Client::describeGatherLogResultWithOptions(shared_ptr<DescribeGatherLogResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*query)["ChangeId"] = *request->changeId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeGatherLogResultResponse(doROARequest(make_shared<string>("DescribeGatherLogResult"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/gatherLog")), make_shared<string>("json"), req, runtime));
}

DescribeGatherStatsResultResponse Alibabacloud_WebPlus20190320::Client::describeGatherStatsResult(shared_ptr<DescribeGatherStatsResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGatherStatsResultWithOptions(request, headers, runtime);
}

DescribeGatherStatsResultResponse Alibabacloud_WebPlus20190320::Client::describeGatherStatsResultWithOptions(shared_ptr<DescribeGatherStatsResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*query)["ChangeId"] = *request->changeId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeGatherStatsResultResponse(doROARequest(make_shared<string>("DescribeGatherStatsResult"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/gatherStats")), make_shared<string>("json"), req, runtime));
}

DescribeInstanceHealthResponse Alibabacloud_WebPlus20190320::Client::describeInstanceHealth(shared_ptr<DescribeInstanceHealthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstanceHealthWithOptions(request, headers, runtime);
}

DescribeInstanceHealthResponse Alibabacloud_WebPlus20190320::Client::describeInstanceHealthWithOptions(shared_ptr<DescribeInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    (*query)["InstanceId"] = *request->instanceId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeInstanceHealthResponse(doROARequest(make_shared<string>("DescribeInstanceHealth"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/instance/health")), make_shared<string>("json"), req, runtime));
}

DescribePkgVersionsResponse Alibabacloud_WebPlus20190320::Client::describePkgVersions(shared_ptr<DescribePkgVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePkgVersionsWithOptions(request, headers, runtime);
}

DescribePkgVersionsResponse Alibabacloud_WebPlus20190320::Client::describePkgVersionsWithOptions(shared_ptr<DescribePkgVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*query)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionLabel)) {
    (*query)["PkgVersionLabel"] = *request->pkgVersionLabel;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionSearch)) {
    (*query)["PkgVersionSearch"] = *request->pkgVersionSearch;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribePkgVersionsResponse(doROARequest(make_shared<string>("DescribePkgVersions"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/pkgVersion")), make_shared<string>("json"), req, runtime));
}

DescribePublicConfigTemplatesResponse Alibabacloud_WebPlus20190320::Client::describePublicConfigTemplates(shared_ptr<DescribePublicConfigTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePublicConfigTemplatesWithOptions(request, headers, runtime);
}

DescribePublicConfigTemplatesResponse Alibabacloud_WebPlus20190320::Client::describePublicConfigTemplatesWithOptions(shared_ptr<DescribePublicConfigTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    (*query)["CategoryName"] = *request->categoryName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribePublicConfigTemplatesResponse(doROARequest(make_shared<string>("DescribePublicConfigTemplates"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/publicConfigTemplate")), make_shared<string>("json"), req, runtime));
}

DescribeStacksResponse Alibabacloud_WebPlus20190320::Client::describeStacks(shared_ptr<DescribeStacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeStacksWithOptions(request, headers, runtime);
}

DescribeStacksResponse Alibabacloud_WebPlus20190320::Client::describeStacksWithOptions(shared_ptr<DescribeStacksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->recommendedOnly)) {
    (*query)["RecommendedOnly"] = *request->recommendedOnly;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryName)) {
    (*query)["CategoryName"] = *request->categoryName;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*query)["PageSize"] = *request->pageSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*query)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeStacksResponse(doROARequest(make_shared<string>("DescribeStacks"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/stack")), make_shared<string>("json"), req, runtime));
}

DescribeStorageResponse Alibabacloud_WebPlus20190320::Client::describeStorage(shared_ptr<DescribeStorageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeStorageWithOptions(request, headers, runtime);
}

DescribeStorageResponse Alibabacloud_WebPlus20190320::Client::describeStorageWithOptions(shared_ptr<DescribeStorageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->usingSharedStorage)) {
    (*query)["UsingSharedStorage"] = *request->usingSharedStorage;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return DescribeStorageResponse(doROARequest(make_shared<string>("DescribeStorage"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/storage")), make_shared<string>("json"), req, runtime));
}

GatherAppEnvLogResponse Alibabacloud_WebPlus20190320::Client::gatherAppEnvLog(shared_ptr<GatherAppEnvLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return gatherAppEnvLogWithOptions(request, headers, runtime);
}

GatherAppEnvLogResponse Alibabacloud_WebPlus20190320::Client::gatherAppEnvLogWithOptions(shared_ptr<GatherAppEnvLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstances)) {
    (*body)["TargetInstances"] = *request->targetInstances;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logPath)) {
    (*body)["LogPath"] = *request->logPath;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GatherAppEnvLogResponse(doROARequestWithForm(make_shared<string>("GatherAppEnvLog"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/gatherLog")), make_shared<string>("json"), req, runtime));
}

GatherAppEnvStatsResponse Alibabacloud_WebPlus20190320::Client::gatherAppEnvStats(shared_ptr<GatherAppEnvStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return gatherAppEnvStatsWithOptions(request, headers, runtime);
}

GatherAppEnvStatsResponse Alibabacloud_WebPlus20190320::Client::gatherAppEnvStatsWithOptions(shared_ptr<GatherAppEnvStatsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstances)) {
    (*body)["TargetInstances"] = *request->targetInstances;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return GatherAppEnvStatsResponse(doROARequestWithForm(make_shared<string>("GatherAppEnvStats"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/gatherStats")), make_shared<string>("json"), req, runtime));
}

PauseChangeResponse Alibabacloud_WebPlus20190320::Client::pauseChange(shared_ptr<PauseChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return pauseChangeWithOptions(request, headers, runtime);
}

PauseChangeResponse Alibabacloud_WebPlus20190320::Client::pauseChangeWithOptions(shared_ptr<PauseChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*body)["ChangeId"] = *request->changeId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return PauseChangeResponse(doROARequestWithForm(make_shared<string>("PauseChange"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/change/pause")), make_shared<string>("json"), req, runtime));
}

RebuildAppEnvResponse Alibabacloud_WebPlus20190320::Client::rebuildAppEnv(shared_ptr<RebuildAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rebuildAppEnvWithOptions(request, headers, runtime);
}

RebuildAppEnvResponse Alibabacloud_WebPlus20190320::Client::rebuildAppEnvWithOptions(shared_ptr<RebuildAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*body)["DryRun"] = *request->dryRun;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RebuildAppEnvResponse(doROARequestWithForm(make_shared<string>("RebuildAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/rebuild")), make_shared<string>("json"), req, runtime));
}

RestartAppEnvResponse Alibabacloud_WebPlus20190320::Client::restartAppEnv(shared_ptr<RestartAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartAppEnvWithOptions(request, headers, runtime);
}

RestartAppEnvResponse Alibabacloud_WebPlus20190320::Client::restartAppEnvWithOptions(shared_ptr<RestartAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchSize)) {
    (*body)["BatchSize"] = *request->batchSize;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchPercent)) {
    (*body)["BatchPercent"] = *request->batchPercent;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->batchInterval)) {
    (*body)["BatchInterval"] = *request->batchInterval;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pauseBetweenBatches)) {
    (*body)["PauseBetweenBatches"] = *request->pauseBetweenBatches;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return RestartAppEnvResponse(doROARequestWithForm(make_shared<string>("RestartAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/restart")), make_shared<string>("json"), req, runtime));
}

ResumeChangeResponse Alibabacloud_WebPlus20190320::Client::resumeChange(shared_ptr<ResumeChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resumeChangeWithOptions(request, headers, runtime);
}

ResumeChangeResponse Alibabacloud_WebPlus20190320::Client::resumeChangeWithOptions(shared_ptr<ResumeChangeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeId)) {
    (*body)["ChangeId"] = *request->changeId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ResumeChangeResponse(doROARequestWithForm(make_shared<string>("ResumeChange"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/change/resume")), make_shared<string>("json"), req, runtime));
}

StartAppEnvResponse Alibabacloud_WebPlus20190320::Client::startAppEnv(shared_ptr<StartAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startAppEnvWithOptions(request, headers, runtime);
}

StartAppEnvResponse Alibabacloud_WebPlus20190320::Client::startAppEnvWithOptions(shared_ptr<StartAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return StartAppEnvResponse(doROARequestWithForm(make_shared<string>("StartAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/start")), make_shared<string>("json"), req, runtime));
}

StopAppEnvResponse Alibabacloud_WebPlus20190320::Client::stopAppEnv(shared_ptr<StopAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopAppEnvWithOptions(request, headers, runtime);
}

StopAppEnvResponse Alibabacloud_WebPlus20190320::Client::stopAppEnvWithOptions(shared_ptr<StopAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return StopAppEnvResponse(doROARequestWithForm(make_shared<string>("StopAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/stop")), make_shared<string>("json"), req, runtime));
}

TerminateAppEnvResponse Alibabacloud_WebPlus20190320::Client::terminateAppEnv(shared_ptr<TerminateAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return terminateAppEnvWithOptions(request, headers, runtime);
}

TerminateAppEnvResponse Alibabacloud_WebPlus20190320::Client::terminateAppEnvWithOptions(shared_ptr<TerminateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dryRun)) {
    (*body)["DryRun"] = *request->dryRun;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return TerminateAppEnvResponse(doROARequestWithForm(make_shared<string>("TerminateAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv/terminate")), make_shared<string>("json"), req, runtime));
}

UpdateAppEnvResponse Alibabacloud_WebPlus20190320::Client::updateAppEnv(shared_ptr<UpdateAppEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAppEnvWithOptions(request, headers, runtime);
}

UpdateAppEnvResponse Alibabacloud_WebPlus20190320::Client::updateAppEnvWithOptions(shared_ptr<UpdateAppEnvRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envDescription)) {
    (*body)["EnvDescription"] = *request->envDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgVersionId)) {
    (*body)["PkgVersionId"] = *request->pkgVersionId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionSettings)) {
    (*body)["OptionSettings"] = *request->optionSettings;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*body)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    (*body)["DryRun"] = *request->dryRun;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraProperties)) {
    (*body)["ExtraProperties"] = *request->extraProperties;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchSize)) {
    (*body)["BatchSize"] = *request->batchSize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchPercent)) {
    (*body)["BatchPercent"] = *request->batchPercent;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchInterval)) {
    (*body)["BatchInterval"] = *request->batchInterval;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pauseBetweenBatches)) {
    (*body)["PauseBetweenBatches"] = *request->pauseBetweenBatches;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateAppEnvResponse(doROARequestWithForm(make_shared<string>("UpdateAppEnv"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/appEnv")), make_shared<string>("json"), req, runtime));
}

UpdateApplicationResponse Alibabacloud_WebPlus20190320::Client::updateApplication(shared_ptr<UpdateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateApplicationWithOptions(request, headers, runtime);
}

UpdateApplicationResponse Alibabacloud_WebPlus20190320::Client::updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    (*body)["AppId"] = *request->appId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appDescription)) {
    (*body)["AppDescription"] = *request->appDescription;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateApplicationResponse(doROARequestWithForm(make_shared<string>("UpdateApplication"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/application")), make_shared<string>("json"), req, runtime));
}

UpdateConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::updateConfigTemplate(shared_ptr<UpdateConfigTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateConfigTemplateWithOptions(request, headers, runtime);
}

UpdateConfigTemplateResponse Alibabacloud_WebPlus20190320::Client::updateConfigTemplateWithOptions(shared_ptr<UpdateConfigTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDescription)) {
    (*body)["TemplateDescription"] = *request->templateDescription;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*body)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionSettings)) {
    (*body)["OptionSettings"] = *request->optionSettings;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return UpdateConfigTemplateResponse(doROARequestWithForm(make_shared<string>("UpdateConfigTemplate"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/configTemplate")), make_shared<string>("json"), req, runtime));
}

ValidateConfigSettingResponse Alibabacloud_WebPlus20190320::Client::validateConfigSetting(shared_ptr<ValidateConfigSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return validateConfigSettingWithOptions(request, headers, runtime);
}

ValidateConfigSettingResponse Alibabacloud_WebPlus20190320::Client::validateConfigSettingWithOptions(shared_ptr<ValidateConfigSettingRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    (*query)["RegionId"] = *request->regionId;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->envId)) {
    (*body)["EnvId"] = *request->envId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    (*body)["TemplateId"] = *request->templateId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    (*body)["StackId"] = *request->stackId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionSettings)) {
    (*body)["OptionSettings"] = *request->optionSettings;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return ValidateConfigSettingResponse(doROARequestWithForm(make_shared<string>("ValidateConfigSetting"), make_shared<string>("2019-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/pop/v1/wam/config/configSetting/validate")), make_shared<string>("json"), req, runtime));
}

