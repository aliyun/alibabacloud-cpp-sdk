// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imm_20170906.hpp>
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

using namespace Alibabacloud_Imm20170906;

Alibabacloud_Imm20170906::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing-gov-1", "imm-vpc.cn-beijing-gov-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imm"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imm20170906::Client::getEndpoint(shared_ptr<string> productId,
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

CompareImageFacesResponse Alibabacloud_Imm20170906::Client::compareImageFacesWithOptions(shared_ptr<CompareImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceIdA)) {
    query->insert(pair<string, string>("FaceIdA", *request->faceIdA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceIdB)) {
    query->insert(pair<string, string>("FaceIdB", *request->faceIdB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUriA)) {
    query->insert(pair<string, string>("ImageUriA", *request->imageUriA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUriB)) {
    query->insert(pair<string, string>("ImageUriB", *request->imageUriB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompareImageFaces"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompareImageFacesResponse(callApi(params, req, runtime));
}

CompareImageFacesResponse Alibabacloud_Imm20170906::Client::compareImageFaces(shared_ptr<CompareImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareImageFacesWithOptions(request, runtime);
}

ConvertOfficeFormatResponse Alibabacloud_Imm20170906::Client::convertOfficeFormatWithOptions(shared_ptr<ConvertOfficeFormatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endPage)) {
    query->insert(pair<string, long>("EndPage", *request->endPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToPagesTall)) {
    query->insert(pair<string, bool>("FitToPagesTall", *request->fitToPagesTall));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToPagesWide)) {
    query->insert(pair<string, bool>("FitToPagesWide", *request->fitToPagesWide));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hidecomments)) {
    query->insert(pair<string, bool>("Hidecomments", *request->hidecomments));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetCol)) {
    query->insert(pair<string, long>("MaxSheetCol", *request->maxSheetCol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetCount)) {
    query->insert(pair<string, long>("MaxSheetCount", *request->maxSheetCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetRow)) {
    query->insert(pair<string, long>("MaxSheetRow", *request->maxSheetRow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pdfVector)) {
    query->insert(pair<string, bool>("PdfVector", *request->pdfVector));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sheetOnePage)) {
    query->insert(pair<string, bool>("SheetOnePage", *request->sheetOnePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcType)) {
    query->insert(pair<string, string>("SrcType", *request->srcType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUri)) {
    query->insert(pair<string, string>("SrcUri", *request->srcUri));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startPage)) {
    query->insert(pair<string, long>("StartPage", *request->startPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFilePages)) {
    query->insert(pair<string, string>("TgtFilePages", *request->tgtFilePages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFilePrefix)) {
    query->insert(pair<string, string>("TgtFilePrefix", *request->tgtFilePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFileSuffix)) {
    query->insert(pair<string, string>("TgtFileSuffix", *request->tgtFileSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtType)) {
    query->insert(pair<string, string>("TgtType", *request->tgtType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtUri)) {
    query->insert(pair<string, string>("TgtUri", *request->tgtUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertOfficeFormat"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertOfficeFormatResponse(callApi(params, req, runtime));
}

ConvertOfficeFormatResponse Alibabacloud_Imm20170906::Client::convertOfficeFormat(shared_ptr<ConvertOfficeFormatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertOfficeFormatWithOptions(request, runtime);
}

CreateGrabFrameTaskResponse Alibabacloud_Imm20170906::Client::createGrabFrameTaskWithOptions(shared_ptr<CreateGrabFrameTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customMessage)) {
    query->insert(pair<string, string>("CustomMessage", *request->customMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetList)) {
    query->insert(pair<string, string>("TargetList", *request->targetList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGrabFrameTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGrabFrameTaskResponse(callApi(params, req, runtime));
}

CreateGrabFrameTaskResponse Alibabacloud_Imm20170906::Client::createGrabFrameTask(shared_ptr<CreateGrabFrameTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGrabFrameTaskWithOptions(request, runtime);
}

CreateGroupFacesJobResponse Alibabacloud_Imm20170906::Client::createGroupFacesJobWithOptions(shared_ptr<CreateGroupFacesJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroupFacesJob"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupFacesJobResponse(callApi(params, req, runtime));
}

CreateGroupFacesJobResponse Alibabacloud_Imm20170906::Client::createGroupFacesJob(shared_ptr<CreateGroupFacesJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupFacesJobWithOptions(request, runtime);
}

CreateMergeFaceGroupsJobResponse Alibabacloud_Imm20170906::Client::createMergeFaceGroupsJobWithOptions(shared_ptr<CreateMergeFaceGroupsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customMessage)) {
    query->insert(pair<string, string>("CustomMessage", *request->customMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIdFrom)) {
    query->insert(pair<string, string>("GroupIdFrom", *request->groupIdFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIdTo)) {
    query->insert(pair<string, string>("GroupIdTo", *request->groupIdTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMergeFaceGroupsJob"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMergeFaceGroupsJobResponse(callApi(params, req, runtime));
}

CreateMergeFaceGroupsJobResponse Alibabacloud_Imm20170906::Client::createMergeFaceGroupsJob(shared_ptr<CreateMergeFaceGroupsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMergeFaceGroupsJobWithOptions(request, runtime);
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->displayDpi)) {
    query->insert(pair<string, long>("DisplayDpi", *request->displayDpi));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endPage)) {
    query->insert(pair<string, long>("EndPage", *request->endPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToPagesTall)) {
    query->insert(pair<string, bool>("FitToPagesTall", *request->fitToPagesTall));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fitToPagesWide)) {
    query->insert(pair<string, bool>("FitToPagesWide", *request->fitToPagesWide));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hidecomments)) {
    query->insert(pair<string, bool>("Hidecomments", *request->hidecomments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idempotentToken)) {
    query->insert(pair<string, string>("IdempotentToken", *request->idempotentToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetCol)) {
    query->insert(pair<string, long>("MaxSheetCol", *request->maxSheetCol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetCount)) {
    query->insert(pair<string, long>("MaxSheetCount", *request->maxSheetCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSheetRow)) {
    query->insert(pair<string, long>("MaxSheetRow", *request->maxSheetRow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pdfVector)) {
    query->insert(pair<string, bool>("PdfVector", *request->pdfVector));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sheetOnePage)) {
    query->insert(pair<string, bool>("SheetOnePage", *request->sheetOnePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcType)) {
    query->insert(pair<string, string>("SrcType", *request->srcType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUri)) {
    query->insert(pair<string, string>("SrcUri", *request->srcUri));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startPage)) {
    query->insert(pair<string, long>("StartPage", *request->startPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFilePages)) {
    query->insert(pair<string, string>("TgtFilePages", *request->tgtFilePages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFilePrefix)) {
    query->insert(pair<string, string>("TgtFilePrefix", *request->tgtFilePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtFileSuffix)) {
    query->insert(pair<string, string>("TgtFileSuffix", *request->tgtFileSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtType)) {
    query->insert(pair<string, string>("TgtType", *request->tgtType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtUri)) {
    query->insert(pair<string, string>("TgtUri", *request->tgtUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOfficeConversionTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOfficeConversionTaskResponse(callApi(params, req, runtime));
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOfficeConversionTaskWithOptions(request, runtime);
}

CreateSetResponse Alibabacloud_Imm20170906::Client::createSetWithOptions(shared_ptr<CreateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setName)) {
    query->insert(pair<string, string>("SetName", *request->setName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSet"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSetResponse(callApi(params, req, runtime));
}

CreateSetResponse Alibabacloud_Imm20170906::Client::createSet(shared_ptr<CreateSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSetWithOptions(request, runtime);
}

CreateVideoCompressTaskResponse Alibabacloud_Imm20170906::Client::createVideoCompressTaskWithOptions(shared_ptr<CreateVideoCompressTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customMessage)) {
    query->insert(pair<string, string>("CustomMessage", *request->customMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetList)) {
    query->insert(pair<string, string>("TargetList", *request->targetList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetSegment)) {
    query->insert(pair<string, string>("TargetSegment", *request->targetSegment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetSubtitle)) {
    query->insert(pair<string, string>("TargetSubtitle", *request->targetSubtitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVideoCompressTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVideoCompressTaskResponse(callApi(params, req, runtime));
}

CreateVideoCompressTaskResponse Alibabacloud_Imm20170906::Client::createVideoCompressTask(shared_ptr<CreateVideoCompressTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoCompressTaskWithOptions(request, runtime);
}

DecodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::decodeBlindWatermarkWithOptions(shared_ptr<DecodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->imageQuality)) {
    query->insert(pair<string, long>("ImageQuality", *request->imageQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalImageUri)) {
    query->insert(pair<string, string>("OriginalImageUri", *request->originalImageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUri)) {
    query->insert(pair<string, string>("TargetUri", *request->targetUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DecodeBlindWatermark"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DecodeBlindWatermarkResponse(callApi(params, req, runtime));
}

DecodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::decodeBlindWatermark(shared_ptr<DecodeBlindWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decodeBlindWatermarkWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Imm20170906::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImage"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteImageResponse(callApi(params, req, runtime));
}

DeleteImageResponse Alibabacloud_Imm20170906::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::deleteOfficeConversionTaskWithOptions(shared_ptr<DeleteOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOfficeConversionTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOfficeConversionTaskResponse(callApi(params, req, runtime));
}

DeleteOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::deleteOfficeConversionTask(shared_ptr<DeleteOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOfficeConversionTaskWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_Imm20170906::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProject"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProjectResponse(callApi(params, req, runtime));
}

DeleteProjectResponse Alibabacloud_Imm20170906::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeleteSetResponse Alibabacloud_Imm20170906::Client::deleteSetWithOptions(shared_ptr<DeleteSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSet"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSetResponse(callApi(params, req, runtime));
}

DeleteSetResponse Alibabacloud_Imm20170906::Client::deleteSet(shared_ptr<DeleteSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSetWithOptions(request, runtime);
}

DeleteVideoResponse Alibabacloud_Imm20170906::Client::deleteVideoWithOptions(shared_ptr<DeleteVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resources)) {
    query->insert(pair<string, bool>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVideo"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVideoResponse(callApi(params, req, runtime));
}

DeleteVideoResponse Alibabacloud_Imm20170906::Client::deleteVideo(shared_ptr<DeleteVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoWithOptions(request, runtime);
}

DeleteVideoTaskResponse Alibabacloud_Imm20170906::Client::deleteVideoTaskWithOptions(shared_ptr<DeleteVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVideoTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVideoTaskResponse(callApi(params, req, runtime));
}

DeleteVideoTaskResponse Alibabacloud_Imm20170906::Client::deleteVideoTask(shared_ptr<DeleteVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoTaskWithOptions(request, runtime);
}

DetectImageBodiesResponse Alibabacloud_Imm20170906::Client::detectImageBodiesWithOptions(shared_ptr<DetectImageBodiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageBodies"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageBodiesResponse(callApi(params, req, runtime));
}

DetectImageBodiesResponse Alibabacloud_Imm20170906::Client::detectImageBodies(shared_ptr<DetectImageBodiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageBodiesWithOptions(request, runtime);
}

DetectImageFacesResponse Alibabacloud_Imm20170906::Client::detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageFaces"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageFacesResponse(callApi(params, req, runtime));
}

DetectImageFacesResponse Alibabacloud_Imm20170906::Client::detectImageFaces(shared_ptr<DetectImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageFacesWithOptions(request, runtime);
}

DetectImageQRCodesResponse Alibabacloud_Imm20170906::Client::detectImageQRCodesWithOptions(shared_ptr<DetectImageQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageQRCodes"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageQRCodesResponse(callApi(params, req, runtime));
}

DetectImageQRCodesResponse Alibabacloud_Imm20170906::Client::detectImageQRCodes(shared_ptr<DetectImageQRCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageQRCodesWithOptions(request, runtime);
}

DetectImageTagsResponse Alibabacloud_Imm20170906::Client::detectImageTagsWithOptions(shared_ptr<DetectImageTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectImageTags"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectImageTagsResponse(callApi(params, req, runtime));
}

DetectImageTagsResponse Alibabacloud_Imm20170906::Client::detectImageTags(shared_ptr<DetectImageTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageTagsWithOptions(request, runtime);
}

DetectQRCodesResponse Alibabacloud_Imm20170906::Client::detectQRCodesWithOptions(shared_ptr<DetectQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUris)) {
    query->insert(pair<string, string>("SrcUris", *request->srcUris));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectQRCodes"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectQRCodesResponse(callApi(params, req, runtime));
}

DetectQRCodesResponse Alibabacloud_Imm20170906::Client::detectQRCodes(shared_ptr<DetectQRCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectQRCodesWithOptions(request, runtime);
}

EncodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::encodeBlindWatermarkWithOptions(shared_ptr<EncodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageQuality)) {
    query->insert(pair<string, string>("ImageQuality", *request->imageQuality));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetImageType)) {
    query->insert(pair<string, string>("TargetImageType", *request->targetImageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUri)) {
    query->insert(pair<string, string>("TargetUri", *request->targetUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkUri)) {
    query->insert(pair<string, string>("WatermarkUri", *request->watermarkUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EncodeBlindWatermark"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EncodeBlindWatermarkResponse(callApi(params, req, runtime));
}

EncodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::encodeBlindWatermark(shared_ptr<EncodeBlindWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encodeBlindWatermarkWithOptions(request, runtime);
}

FindImagesResponse Alibabacloud_Imm20170906::Client::findImagesWithOptions(shared_ptr<FindImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressLineContentsMatch)) {
    query->insert(pair<string, string>("AddressLineContentsMatch", *request->addressLineContentsMatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ageRange)) {
    query->insert(pair<string, string>("AgeRange", *request->ageRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeRange)) {
    query->insert(pair<string, string>("CreateTimeRange", *request->createTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emotion)) {
    query->insert(pair<string, string>("Emotion", *request->emotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facesModifyTimeRange)) {
    query->insert(pair<string, string>("FacesModifyTimeRange", *request->facesModifyTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    query->insert(pair<string, string>("Gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageSizeRange)) {
    query->insert(pair<string, string>("ImageSizeRange", *request->imageSizeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageTimeRange)) {
    query->insert(pair<string, string>("ImageTimeRange", *request->imageTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationBoundary)) {
    query->insert(pair<string, string>("LocationBoundary", *request->locationBoundary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyTimeRange)) {
    query->insert(pair<string, string>("ModifyTimeRange", *request->modifyTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OCRContentsMatch)) {
    query->insert(pair<string, string>("OCRContentsMatch", *request->OCRContentsMatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksAPrefix)) {
    query->insert(pair<string, string>("RemarksAPrefix", *request->remarksAPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayAIn)) {
    query->insert(pair<string, string>("RemarksArrayAIn", *request->remarksArrayAIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayBIn)) {
    query->insert(pair<string, string>("RemarksArrayBIn", *request->remarksArrayBIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksBPrefix)) {
    query->insert(pair<string, string>("RemarksBPrefix", *request->remarksBPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksCPrefix)) {
    query->insert(pair<string, string>("RemarksCPrefix", *request->remarksCPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksDPrefix)) {
    query->insert(pair<string, string>("RemarksDPrefix", *request->remarksDPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUriPrefix)) {
    query->insert(pair<string, string>("SourceUriPrefix", *request->sourceUriPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagNames)) {
    query->insert(pair<string, string>("TagNames", *request->tagNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsModifyTimeRange)) {
    query->insert(pair<string, string>("TagsModifyTimeRange", *request->tagsModifyTimeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindImages"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindImagesResponse(callApi(params, req, runtime));
}

FindImagesResponse Alibabacloud_Imm20170906::Client::findImages(shared_ptr<FindImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findImagesWithOptions(request, runtime);
}

FindSimilarFacesResponse Alibabacloud_Imm20170906::Client::findSimilarFacesWithOptions(shared_ptr<FindSimilarFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceId)) {
    query->insert(pair<string, string>("FaceId", *request->faceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minSimilarity)) {
    query->insert(pair<string, double>("MinSimilarity", *request->minSimilarity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseFormat)) {
    query->insert(pair<string, string>("ResponseFormat", *request->responseFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindSimilarFaces"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindSimilarFacesResponse(callApi(params, req, runtime));
}

FindSimilarFacesResponse Alibabacloud_Imm20170906::Client::findSimilarFaces(shared_ptr<FindSimilarFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findSimilarFacesWithOptions(request, runtime);
}

GetImageResponse Alibabacloud_Imm20170906::Client::getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImage"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageResponse(callApi(params, req, runtime));
}

GetImageResponse Alibabacloud_Imm20170906::Client::getImage(shared_ptr<GetImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageWithOptions(request, runtime);
}

GetImageCroppingSuggestionsResponse Alibabacloud_Imm20170906::Client::getImageCroppingSuggestionsWithOptions(shared_ptr<GetImageCroppingSuggestionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aspectRatios)) {
    query->insert(pair<string, string>("AspectRatios", *request->aspectRatios));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageCroppingSuggestions"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageCroppingSuggestionsResponse(callApi(params, req, runtime));
}

GetImageCroppingSuggestionsResponse Alibabacloud_Imm20170906::Client::getImageCroppingSuggestions(shared_ptr<GetImageCroppingSuggestionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageCroppingSuggestionsWithOptions(request, runtime);
}

GetImageQualityResponse Alibabacloud_Imm20170906::Client::getImageQualityWithOptions(shared_ptr<GetImageQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageQuality"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetImageQualityResponse(callApi(params, req, runtime));
}

GetImageQualityResponse Alibabacloud_Imm20170906::Client::getImageQuality(shared_ptr<GetImageQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageQualityWithOptions(request, runtime);
}

GetMediaMetaResponse Alibabacloud_Imm20170906::Client::getMediaMetaWithOptions(shared_ptr<GetMediaMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaUri)) {
    query->insert(pair<string, string>("MediaUri", *request->mediaUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaMeta"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaMetaResponse(callApi(params, req, runtime));
}

GetMediaMetaResponse Alibabacloud_Imm20170906::Client::getMediaMeta(shared_ptr<GetMediaMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaMetaWithOptions(request, runtime);
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::getOfficeConversionTaskWithOptions(shared_ptr<GetOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOfficeConversionTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOfficeConversionTaskResponse(callApi(params, req, runtime));
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::getOfficeConversionTask(shared_ptr<GetOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeConversionTaskWithOptions(request, runtime);
}

GetOfficePreviewURLResponse Alibabacloud_Imm20170906::Client::getOfficePreviewURLWithOptions(shared_ptr<GetOfficePreviewURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcType)) {
    query->insert(pair<string, string>("SrcType", *request->srcType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcUri)) {
    query->insert(pair<string, string>("SrcUri", *request->srcUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkFillStyle)) {
    query->insert(pair<string, string>("WatermarkFillStyle", *request->watermarkFillStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkFont)) {
    query->insert(pair<string, string>("WatermarkFont", *request->watermarkFont));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkHorizontal)) {
    query->insert(pair<string, long>("WatermarkHorizontal", *request->watermarkHorizontal));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->watermarkRotate)) {
    query->insert(pair<string, double>("WatermarkRotate", *request->watermarkRotate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkType)) {
    query->insert(pair<string, long>("WatermarkType", *request->watermarkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkValue)) {
    query->insert(pair<string, string>("WatermarkValue", *request->watermarkValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->watermarkVertical)) {
    query->insert(pair<string, long>("WatermarkVertical", *request->watermarkVertical));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOfficePreviewURL"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOfficePreviewURLResponse(callApi(params, req, runtime));
}

GetOfficePreviewURLResponse Alibabacloud_Imm20170906::Client::getOfficePreviewURL(shared_ptr<GetOfficePreviewURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficePreviewURLWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Imm20170906::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProject"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProjectResponse(callApi(params, req, runtime));
}

GetProjectResponse Alibabacloud_Imm20170906::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetSetResponse Alibabacloud_Imm20170906::Client::getSetWithOptions(shared_ptr<GetSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSet"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSetResponse(callApi(params, req, runtime));
}

GetSetResponse Alibabacloud_Imm20170906::Client::getSet(shared_ptr<GetSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSetWithOptions(request, runtime);
}

GetVideoResponse Alibabacloud_Imm20170906::Client::getVideoWithOptions(shared_ptr<GetVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideo"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoResponse(callApi(params, req, runtime));
}

GetVideoResponse Alibabacloud_Imm20170906::Client::getVideo(shared_ptr<GetVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoWithOptions(request, runtime);
}

GetVideoTaskResponse Alibabacloud_Imm20170906::Client::getVideoTaskWithOptions(shared_ptr<GetVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoTaskResponse(callApi(params, req, runtime));
}

GetVideoTaskResponse Alibabacloud_Imm20170906::Client::getVideoTask(shared_ptr<GetVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoTaskWithOptions(request, runtime);
}

GetWebofficeURLResponse Alibabacloud_Imm20170906::Client::getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->file)) {
    query->insert(pair<string, string>("File", *request->file));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileID)) {
    query->insert(pair<string, string>("FileID", *request->fileID));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hidecmb)) {
    query->insert(pair<string, bool>("Hidecmb", *request->hidecmb));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permission)) {
    query->insert(pair<string, string>("Permission", *request->permission));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcType)) {
    query->insert(pair<string, string>("SrcType", *request->srcType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    query->insert(pair<string, string>("User", *request->user));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermark)) {
    query->insert(pair<string, string>("Watermark", *request->watermark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWebofficeURL"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWebofficeURLResponse(callApi(params, req, runtime));
}

GetWebofficeURLResponse Alibabacloud_Imm20170906::Client::getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebofficeURLWithOptions(request, runtime);
}

IndexImageResponse Alibabacloud_Imm20170906::Client::indexImageWithOptions(shared_ptr<IndexImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksA)) {
    query->insert(pair<string, string>("RemarksA", *request->remarksA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayA)) {
    query->insert(pair<string, string>("RemarksArrayA", *request->remarksArrayA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayB)) {
    query->insert(pair<string, string>("RemarksArrayB", *request->remarksArrayB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksB)) {
    query->insert(pair<string, string>("RemarksB", *request->remarksB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksC)) {
    query->insert(pair<string, string>("RemarksC", *request->remarksC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksD)) {
    query->insert(pair<string, string>("RemarksD", *request->remarksD));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePosition)) {
    query->insert(pair<string, string>("SourcePosition", *request->sourcePosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUri)) {
    query->insert(pair<string, string>("SourceUri", *request->sourceUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IndexImage"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IndexImageResponse(callApi(params, req, runtime));
}

IndexImageResponse Alibabacloud_Imm20170906::Client::indexImage(shared_ptr<IndexImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexImageWithOptions(request, runtime);
}

IndexVideoResponse Alibabacloud_Imm20170906::Client::indexVideoWithOptions(shared_ptr<IndexVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyEndpoint)) {
    query->insert(pair<string, string>("NotifyEndpoint", *request->notifyEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTopicName)) {
    query->insert(pair<string, string>("NotifyTopicName", *request->notifyTopicName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksA)) {
    query->insert(pair<string, string>("RemarksA", *request->remarksA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksB)) {
    query->insert(pair<string, string>("RemarksB", *request->remarksB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksC)) {
    query->insert(pair<string, string>("RemarksC", *request->remarksC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksD)) {
    query->insert(pair<string, string>("RemarksD", *request->remarksD));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tgtUri)) {
    query->insert(pair<string, string>("TgtUri", *request->tgtUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IndexVideo"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IndexVideoResponse(callApi(params, req, runtime));
}

IndexVideoResponse Alibabacloud_Imm20170906::Client::indexVideo(shared_ptr<IndexVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexVideoWithOptions(request, runtime);
}

ListFaceGroupsResponse Alibabacloud_Imm20170906::Client::listFaceGroupsWithOptions(shared_ptr<ListFaceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksAQuery)) {
    query->insert(pair<string, string>("RemarksAQuery", *request->remarksAQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayAQuery)) {
    query->insert(pair<string, string>("RemarksArrayAQuery", *request->remarksArrayAQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayBQuery)) {
    query->insert(pair<string, string>("RemarksArrayBQuery", *request->remarksArrayBQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksBQuery)) {
    query->insert(pair<string, string>("RemarksBQuery", *request->remarksBQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksCQuery)) {
    query->insert(pair<string, string>("RemarksCQuery", *request->remarksCQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksDQuery)) {
    query->insert(pair<string, string>("RemarksDQuery", *request->remarksDQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFaceGroups"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFaceGroupsResponse(callApi(params, req, runtime));
}

ListFaceGroupsResponse Alibabacloud_Imm20170906::Client::listFaceGroups(shared_ptr<ListFaceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFaceGroupsWithOptions(request, runtime);
}

ListImagesResponse Alibabacloud_Imm20170906::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImages"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListImagesResponse(callApi(params, req, runtime));
}

ListImagesResponse Alibabacloud_Imm20170906::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImagesWithOptions(request, runtime);
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::listOfficeConversionTaskWithOptions(shared_ptr<ListOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxKeys)) {
    query->insert(pair<string, long>("MaxKeys", *request->maxKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOfficeConversionTask"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOfficeConversionTaskResponse(callApi(params, req, runtime));
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::listOfficeConversionTask(shared_ptr<ListOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeConversionTaskWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Imm20170906::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxKeys)) {
    query->insert(pair<string, long>("MaxKeys", *request->maxKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProjects"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectsResponse(callApi(params, req, runtime));
}

ListProjectsResponse Alibabacloud_Imm20170906::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListSetTagsResponse Alibabacloud_Imm20170906::Client::listSetTagsWithOptions(shared_ptr<ListSetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSetTags"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSetTagsResponse(callApi(params, req, runtime));
}

ListSetTagsResponse Alibabacloud_Imm20170906::Client::listSetTags(shared_ptr<ListSetTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSetTagsWithOptions(request, runtime);
}

ListSetsResponse Alibabacloud_Imm20170906::Client::listSetsWithOptions(shared_ptr<ListSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSets"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSetsResponse(callApi(params, req, runtime));
}

ListSetsResponse Alibabacloud_Imm20170906::Client::listSets(shared_ptr<ListSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSetsWithOptions(request, runtime);
}

ListVideoAudiosResponse Alibabacloud_Imm20170906::Client::listVideoAudiosWithOptions(shared_ptr<ListVideoAudiosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVideoAudios"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVideoAudiosResponse(callApi(params, req, runtime));
}

ListVideoAudiosResponse Alibabacloud_Imm20170906::Client::listVideoAudios(shared_ptr<ListVideoAudiosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoAudiosWithOptions(request, runtime);
}

ListVideoFramesResponse Alibabacloud_Imm20170906::Client::listVideoFramesWithOptions(shared_ptr<ListVideoFramesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUri)) {
    query->insert(pair<string, string>("VideoUri", *request->videoUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVideoFrames"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVideoFramesResponse(callApi(params, req, runtime));
}

ListVideoFramesResponse Alibabacloud_Imm20170906::Client::listVideoFrames(shared_ptr<ListVideoFramesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoFramesWithOptions(request, runtime);
}

ListVideoTasksResponse Alibabacloud_Imm20170906::Client::listVideoTasksWithOptions(shared_ptr<ListVideoTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxKeys)) {
    query->insert(pair<string, long>("MaxKeys", *request->maxKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVideoTasks"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVideoTasksResponse(callApi(params, req, runtime));
}

ListVideoTasksResponse Alibabacloud_Imm20170906::Client::listVideoTasks(shared_ptr<ListVideoTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoTasksWithOptions(request, runtime);
}

ListVideosResponse Alibabacloud_Imm20170906::Client::listVideosWithOptions(shared_ptr<ListVideosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimeStart)) {
    query->insert(pair<string, string>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVideos"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVideosResponse(callApi(params, req, runtime));
}

ListVideosResponse Alibabacloud_Imm20170906::Client::listVideos(shared_ptr<ListVideosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideosWithOptions(request, runtime);
}

OpenImmServiceResponse Alibabacloud_Imm20170906::Client::openImmServiceWithOptions(shared_ptr<OpenImmServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenImmService"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenImmServiceResponse(callApi(params, req, runtime));
}

OpenImmServiceResponse Alibabacloud_Imm20170906::Client::openImmService(shared_ptr<OpenImmServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openImmServiceWithOptions(request, runtime);
}

PutProjectResponse Alibabacloud_Imm20170906::Client::putProjectWithOptions(shared_ptr<PutProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceRole)) {
    query->insert(pair<string, string>("ServiceRole", *request->serviceRole));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutProject"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutProjectResponse(callApi(params, req, runtime));
}

PutProjectResponse Alibabacloud_Imm20170906::Client::putProject(shared_ptr<PutProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putProjectWithOptions(request, runtime);
}

RefreshOfficePreviewTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficePreviewTokenWithOptions(shared_ptr<RefreshOfficePreviewTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshToken)) {
    query->insert(pair<string, string>("RefreshToken", *request->refreshToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshOfficePreviewToken"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshOfficePreviewTokenResponse(callApi(params, req, runtime));
}

RefreshOfficePreviewTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficePreviewToken(shared_ptr<RefreshOfficePreviewTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshOfficePreviewTokenWithOptions(request, runtime);
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20170906::Client::refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshToken)) {
    query->insert(pair<string, string>("RefreshToken", *request->refreshToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshWebofficeToken"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshWebofficeTokenResponse(callApi(params, req, runtime));
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20170906::Client::refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshWebofficeTokenWithOptions(request, runtime);
}

UpdateFaceGroupResponse Alibabacloud_Imm20170906::Client::updateFaceGroupWithOptions(shared_ptr<UpdateFaceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupCoverFaceId)) {
    query->insert(pair<string, string>("GroupCoverFaceId", *request->groupCoverFaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksA)) {
    query->insert(pair<string, string>("RemarksA", *request->remarksA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayA)) {
    query->insert(pair<string, string>("RemarksArrayA", *request->remarksArrayA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayB)) {
    query->insert(pair<string, string>("RemarksArrayB", *request->remarksArrayB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksB)) {
    query->insert(pair<string, string>("RemarksB", *request->remarksB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksC)) {
    query->insert(pair<string, string>("RemarksC", *request->remarksC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksD)) {
    query->insert(pair<string, string>("RemarksD", *request->remarksD));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resetItems)) {
    query->insert(pair<string, string>("ResetItems", *request->resetItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFaceGroup"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFaceGroupResponse(callApi(params, req, runtime));
}

UpdateFaceGroupResponse Alibabacloud_Imm20170906::Client::updateFaceGroup(shared_ptr<UpdateFaceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFaceGroupWithOptions(request, runtime);
}

UpdateImageResponse Alibabacloud_Imm20170906::Client::updateImageWithOptions(shared_ptr<UpdateImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateImageShrinkRequest> request = make_shared<UpdateImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateImageRequestFaces>>(tmpReq->faces)) {
    request->facesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->faces, make_shared<string>("Faces"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalId)) {
    query->insert(pair<string, string>("ExternalId", *request->externalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facesShrink)) {
    query->insert(pair<string, string>("Faces", *request->facesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUri)) {
    query->insert(pair<string, string>("ImageUri", *request->imageUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksA)) {
    query->insert(pair<string, string>("RemarksA", *request->remarksA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayA)) {
    query->insert(pair<string, string>("RemarksArrayA", *request->remarksArrayA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksArrayB)) {
    query->insert(pair<string, string>("RemarksArrayB", *request->remarksArrayB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksB)) {
    query->insert(pair<string, string>("RemarksB", *request->remarksB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksC)) {
    query->insert(pair<string, string>("RemarksC", *request->remarksC));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarksD)) {
    query->insert(pair<string, string>("RemarksD", *request->remarksD));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcePosition)) {
    query->insert(pair<string, string>("SourcePosition", *request->sourcePosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUri)) {
    query->insert(pair<string, string>("SourceUri", *request->sourceUri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImage"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateImageResponse(callApi(params, req, runtime));
}

UpdateImageResponse Alibabacloud_Imm20170906::Client::updateImage(shared_ptr<UpdateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Imm20170906::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->newCU)) {
    query->insert(pair<string, long>("NewCU", *request->newCU));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newServiceRole)) {
    query->insert(pair<string, string>("NewServiceRole", *request->newServiceRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Imm20170906::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateSetResponse Alibabacloud_Imm20170906::Client::updateSetWithOptions(shared_ptr<UpdateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setId)) {
    query->insert(pair<string, string>("SetId", *request->setId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->setName)) {
    query->insert(pair<string, string>("SetName", *request->setName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSet"))},
    {"version", boost::any(string("2017-09-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSetResponse(callApi(params, req, runtime));
}

UpdateSetResponse Alibabacloud_Imm20170906::Client::updateSet(shared_ptr<UpdateSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSetWithOptions(request, runtime);
}

