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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompareImageFacesResponse(doRPCRequest(make_shared<string>("CompareImageFaces"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompareImageFacesResponse Alibabacloud_Imm20170906::Client::compareImageFaces(shared_ptr<CompareImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareImageFacesWithOptions(request, runtime);
}

ConvertOfficeFormatResponse Alibabacloud_Imm20170906::Client::convertOfficeFormatWithOptions(shared_ptr<ConvertOfficeFormatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConvertOfficeFormatResponse(doRPCRequest(make_shared<string>("ConvertOfficeFormat"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConvertOfficeFormatResponse Alibabacloud_Imm20170906::Client::convertOfficeFormat(shared_ptr<ConvertOfficeFormatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertOfficeFormatWithOptions(request, runtime);
}

CreateGrabFrameTaskResponse Alibabacloud_Imm20170906::Client::createGrabFrameTaskWithOptions(shared_ptr<CreateGrabFrameTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGrabFrameTaskResponse(doRPCRequest(make_shared<string>("CreateGrabFrameTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGrabFrameTaskResponse Alibabacloud_Imm20170906::Client::createGrabFrameTask(shared_ptr<CreateGrabFrameTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGrabFrameTaskWithOptions(request, runtime);
}

CreateGroupFacesJobResponse Alibabacloud_Imm20170906::Client::createGroupFacesJobWithOptions(shared_ptr<CreateGroupFacesJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupFacesJobResponse(doRPCRequest(make_shared<string>("CreateGroupFacesJob"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupFacesJobResponse Alibabacloud_Imm20170906::Client::createGroupFacesJob(shared_ptr<CreateGroupFacesJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupFacesJobWithOptions(request, runtime);
}

CreateImageProcessTaskResponse Alibabacloud_Imm20170906::Client::createImageProcessTaskWithOptions(shared_ptr<CreateImageProcessTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImageProcessTaskResponse(doRPCRequest(make_shared<string>("CreateImageProcessTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImageProcessTaskResponse Alibabacloud_Imm20170906::Client::createImageProcessTask(shared_ptr<CreateImageProcessTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageProcessTaskWithOptions(request, runtime);
}

CreateMediaComplexTaskResponse Alibabacloud_Imm20170906::Client::createMediaComplexTaskWithOptions(shared_ptr<CreateMediaComplexTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMediaComplexTaskResponse(doRPCRequest(make_shared<string>("CreateMediaComplexTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMediaComplexTaskResponse Alibabacloud_Imm20170906::Client::createMediaComplexTask(shared_ptr<CreateMediaComplexTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaComplexTaskWithOptions(request, runtime);
}

CreateMergeFaceGroupsJobResponse Alibabacloud_Imm20170906::Client::createMergeFaceGroupsJobWithOptions(shared_ptr<CreateMergeFaceGroupsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMergeFaceGroupsJobResponse(doRPCRequest(make_shared<string>("CreateMergeFaceGroupsJob"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMergeFaceGroupsJobResponse Alibabacloud_Imm20170906::Client::createMergeFaceGroupsJob(shared_ptr<CreateMergeFaceGroupsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMergeFaceGroupsJobWithOptions(request, runtime);
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("CreateOfficeConversionTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOfficeConversionTaskWithOptions(request, runtime);
}

CreateSetResponse Alibabacloud_Imm20170906::Client::createSetWithOptions(shared_ptr<CreateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSetResponse(doRPCRequest(make_shared<string>("CreateSet"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSetResponse Alibabacloud_Imm20170906::Client::createSet(shared_ptr<CreateSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSetWithOptions(request, runtime);
}

CreateVideoAbstractTaskResponse Alibabacloud_Imm20170906::Client::createVideoAbstractTaskWithOptions(shared_ptr<CreateVideoAbstractTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVideoAbstractTaskResponse(doRPCRequest(make_shared<string>("CreateVideoAbstractTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVideoAbstractTaskResponse Alibabacloud_Imm20170906::Client::createVideoAbstractTask(shared_ptr<CreateVideoAbstractTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoAbstractTaskWithOptions(request, runtime);
}

CreateVideoAnalyseTaskResponse Alibabacloud_Imm20170906::Client::createVideoAnalyseTaskWithOptions(shared_ptr<CreateVideoAnalyseTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVideoAnalyseTaskResponse(doRPCRequest(make_shared<string>("CreateVideoAnalyseTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVideoAnalyseTaskResponse Alibabacloud_Imm20170906::Client::createVideoAnalyseTask(shared_ptr<CreateVideoAnalyseTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoAnalyseTaskWithOptions(request, runtime);
}

CreateVideoCompressTaskResponse Alibabacloud_Imm20170906::Client::createVideoCompressTaskWithOptions(shared_ptr<CreateVideoCompressTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVideoCompressTaskResponse(doRPCRequest(make_shared<string>("CreateVideoCompressTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVideoCompressTaskResponse Alibabacloud_Imm20170906::Client::createVideoCompressTask(shared_ptr<CreateVideoCompressTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoCompressTaskWithOptions(request, runtime);
}

CreateVideoProduceTaskResponse Alibabacloud_Imm20170906::Client::createVideoProduceTaskWithOptions(shared_ptr<CreateVideoProduceTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVideoProduceTaskResponse(doRPCRequest(make_shared<string>("CreateVideoProduceTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVideoProduceTaskResponse Alibabacloud_Imm20170906::Client::createVideoProduceTask(shared_ptr<CreateVideoProduceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVideoProduceTaskWithOptions(request, runtime);
}

DecodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::decodeBlindWatermarkWithOptions(shared_ptr<DecodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DecodeBlindWatermarkResponse(doRPCRequest(make_shared<string>("DecodeBlindWatermark"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DecodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::decodeBlindWatermark(shared_ptr<DecodeBlindWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decodeBlindWatermarkWithOptions(request, runtime);
}

DeleteImageResponse Alibabacloud_Imm20170906::Client::deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImageResponse(doRPCRequest(make_shared<string>("DeleteImage"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageResponse Alibabacloud_Imm20170906::Client::deleteImage(shared_ptr<DeleteImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageWithOptions(request, runtime);
}

DeleteImageJobResponse Alibabacloud_Imm20170906::Client::deleteImageJobWithOptions(shared_ptr<DeleteImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImageJobResponse(doRPCRequest(make_shared<string>("DeleteImageJob"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImageJobResponse Alibabacloud_Imm20170906::Client::deleteImageJob(shared_ptr<DeleteImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageJobWithOptions(request, runtime);
}

DeleteOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::deleteOfficeConversionTaskWithOptions(shared_ptr<DeleteOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("DeleteOfficeConversionTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::deleteOfficeConversionTask(shared_ptr<DeleteOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOfficeConversionTaskWithOptions(request, runtime);
}

DeleteProjectResponse Alibabacloud_Imm20170906::Client::deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProjectResponse(doRPCRequest(make_shared<string>("DeleteProject"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProjectResponse Alibabacloud_Imm20170906::Client::deleteProject(shared_ptr<DeleteProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectWithOptions(request, runtime);
}

DeleteSetResponse Alibabacloud_Imm20170906::Client::deleteSetWithOptions(shared_ptr<DeleteSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSetResponse(doRPCRequest(make_shared<string>("DeleteSet"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSetResponse Alibabacloud_Imm20170906::Client::deleteSet(shared_ptr<DeleteSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSetWithOptions(request, runtime);
}

DeleteVideoResponse Alibabacloud_Imm20170906::Client::deleteVideoWithOptions(shared_ptr<DeleteVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVideoResponse(doRPCRequest(make_shared<string>("DeleteVideo"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVideoResponse Alibabacloud_Imm20170906::Client::deleteVideo(shared_ptr<DeleteVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoWithOptions(request, runtime);
}

DeleteVideoTaskResponse Alibabacloud_Imm20170906::Client::deleteVideoTaskWithOptions(shared_ptr<DeleteVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVideoTaskResponse(doRPCRequest(make_shared<string>("DeleteVideoTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVideoTaskResponse Alibabacloud_Imm20170906::Client::deleteVideoTask(shared_ptr<DeleteVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVideoTaskWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Imm20170906::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Imm20170906::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DetectImageBodiesResponse Alibabacloud_Imm20170906::Client::detectImageBodiesWithOptions(shared_ptr<DetectImageBodiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageBodiesResponse(doRPCRequest(make_shared<string>("DetectImageBodies"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageBodiesResponse Alibabacloud_Imm20170906::Client::detectImageBodies(shared_ptr<DetectImageBodiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageBodiesWithOptions(request, runtime);
}

DetectImageFacesResponse Alibabacloud_Imm20170906::Client::detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageFacesResponse(doRPCRequest(make_shared<string>("DetectImageFaces"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageFacesResponse Alibabacloud_Imm20170906::Client::detectImageFaces(shared_ptr<DetectImageFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageFacesWithOptions(request, runtime);
}

DetectImageQRCodesResponse Alibabacloud_Imm20170906::Client::detectImageQRCodesWithOptions(shared_ptr<DetectImageQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageQRCodesResponse(doRPCRequest(make_shared<string>("DetectImageQRCodes"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageQRCodesResponse Alibabacloud_Imm20170906::Client::detectImageQRCodes(shared_ptr<DetectImageQRCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageQRCodesWithOptions(request, runtime);
}

DetectImageTagsResponse Alibabacloud_Imm20170906::Client::detectImageTagsWithOptions(shared_ptr<DetectImageTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageTagsResponse(doRPCRequest(make_shared<string>("DetectImageTags"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageTagsResponse Alibabacloud_Imm20170906::Client::detectImageTags(shared_ptr<DetectImageTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageTagsWithOptions(request, runtime);
}

DetectQRCodesResponse Alibabacloud_Imm20170906::Client::detectQRCodesWithOptions(shared_ptr<DetectQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectQRCodesResponse(doRPCRequest(make_shared<string>("DetectQRCodes"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectQRCodesResponse Alibabacloud_Imm20170906::Client::detectQRCodes(shared_ptr<DetectQRCodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectQRCodesWithOptions(request, runtime);
}

EncodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::encodeBlindWatermarkWithOptions(shared_ptr<EncodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EncodeBlindWatermarkResponse(doRPCRequest(make_shared<string>("EncodeBlindWatermark"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EncodeBlindWatermarkResponse Alibabacloud_Imm20170906::Client::encodeBlindWatermark(shared_ptr<EncodeBlindWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encodeBlindWatermarkWithOptions(request, runtime);
}

FindImagesResponse Alibabacloud_Imm20170906::Client::findImagesWithOptions(shared_ptr<FindImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindImagesResponse(doRPCRequest(make_shared<string>("FindImages"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindImagesResponse Alibabacloud_Imm20170906::Client::findImages(shared_ptr<FindImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findImagesWithOptions(request, runtime);
}

FindSimilarFacesResponse Alibabacloud_Imm20170906::Client::findSimilarFacesWithOptions(shared_ptr<FindSimilarFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FindSimilarFacesResponse(doRPCRequest(make_shared<string>("FindSimilarFaces"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FindSimilarFacesResponse Alibabacloud_Imm20170906::Client::findSimilarFaces(shared_ptr<FindSimilarFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findSimilarFacesWithOptions(request, runtime);
}

GetContentKeyResponse Alibabacloud_Imm20170906::Client::getContentKeyWithOptions(shared_ptr<GetContentKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetContentKeyResponse(doRPCRequest(make_shared<string>("GetContentKey"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetContentKeyResponse Alibabacloud_Imm20170906::Client::getContentKey(shared_ptr<GetContentKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContentKeyWithOptions(request, runtime);
}

GetDRMLicenseResponse Alibabacloud_Imm20170906::Client::getDRMLicenseWithOptions(shared_ptr<GetDRMLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDRMLicenseResponse(doRPCRequest(make_shared<string>("GetDRMLicense"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDRMLicenseResponse Alibabacloud_Imm20170906::Client::getDRMLicense(shared_ptr<GetDRMLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDRMLicenseWithOptions(request, runtime);
}

GetImageResponse Alibabacloud_Imm20170906::Client::getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetImageResponse(doRPCRequest(make_shared<string>("GetImage"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetImageResponse Alibabacloud_Imm20170906::Client::getImage(shared_ptr<GetImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageWithOptions(request, runtime);
}

GetImageCroppingSuggestionsResponse Alibabacloud_Imm20170906::Client::getImageCroppingSuggestionsWithOptions(shared_ptr<GetImageCroppingSuggestionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetImageCroppingSuggestionsResponse(doRPCRequest(make_shared<string>("GetImageCroppingSuggestions"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetImageCroppingSuggestionsResponse Alibabacloud_Imm20170906::Client::getImageCroppingSuggestions(shared_ptr<GetImageCroppingSuggestionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageCroppingSuggestionsWithOptions(request, runtime);
}

GetImageQualityResponse Alibabacloud_Imm20170906::Client::getImageQualityWithOptions(shared_ptr<GetImageQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetImageQualityResponse(doRPCRequest(make_shared<string>("GetImageQuality"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetImageQualityResponse Alibabacloud_Imm20170906::Client::getImageQuality(shared_ptr<GetImageQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageQualityWithOptions(request, runtime);
}

GetMediaMetaResponse Alibabacloud_Imm20170906::Client::getMediaMetaWithOptions(shared_ptr<GetMediaMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaMetaResponse(doRPCRequest(make_shared<string>("GetMediaMeta"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaMetaResponse Alibabacloud_Imm20170906::Client::getMediaMeta(shared_ptr<GetMediaMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaMetaWithOptions(request, runtime);
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::getOfficeConversionTaskWithOptions(shared_ptr<GetOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("GetOfficeConversionTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::getOfficeConversionTask(shared_ptr<GetOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeConversionTaskWithOptions(request, runtime);
}

GetOfficeEditURLResponse Alibabacloud_Imm20170906::Client::getOfficeEditURLWithOptions(shared_ptr<GetOfficeEditURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOfficeEditURLResponse(doRPCRequest(make_shared<string>("GetOfficeEditURL"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOfficeEditURLResponse Alibabacloud_Imm20170906::Client::getOfficeEditURL(shared_ptr<GetOfficeEditURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficeEditURLWithOptions(request, runtime);
}

GetOfficePreviewURLResponse Alibabacloud_Imm20170906::Client::getOfficePreviewURLWithOptions(shared_ptr<GetOfficePreviewURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOfficePreviewURLResponse(doRPCRequest(make_shared<string>("GetOfficePreviewURL"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOfficePreviewURLResponse Alibabacloud_Imm20170906::Client::getOfficePreviewURL(shared_ptr<GetOfficePreviewURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOfficePreviewURLWithOptions(request, runtime);
}

GetProjectResponse Alibabacloud_Imm20170906::Client::getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetProjectResponse(doRPCRequest(make_shared<string>("GetProject"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetProjectResponse Alibabacloud_Imm20170906::Client::getProject(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectWithOptions(request, runtime);
}

GetSetResponse Alibabacloud_Imm20170906::Client::getSetWithOptions(shared_ptr<GetSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSetResponse(doRPCRequest(make_shared<string>("GetSet"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSetResponse Alibabacloud_Imm20170906::Client::getSet(shared_ptr<GetSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSetWithOptions(request, runtime);
}

GetVideoResponse Alibabacloud_Imm20170906::Client::getVideoWithOptions(shared_ptr<GetVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoResponse(doRPCRequest(make_shared<string>("GetVideo"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoResponse Alibabacloud_Imm20170906::Client::getVideo(shared_ptr<GetVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoWithOptions(request, runtime);
}

GetVideoTaskResponse Alibabacloud_Imm20170906::Client::getVideoTaskWithOptions(shared_ptr<GetVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetVideoTaskResponse(doRPCRequest(make_shared<string>("GetVideoTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetVideoTaskResponse Alibabacloud_Imm20170906::Client::getVideoTask(shared_ptr<GetVideoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoTaskWithOptions(request, runtime);
}

GetWebofficeURLResponse Alibabacloud_Imm20170906::Client::getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetWebofficeURLResponse(doRPCRequest(make_shared<string>("GetWebofficeURL"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetWebofficeURLResponse Alibabacloud_Imm20170906::Client::getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWebofficeURLWithOptions(request, runtime);
}

IndexImageResponse Alibabacloud_Imm20170906::Client::indexImageWithOptions(shared_ptr<IndexImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IndexImageResponse(doRPCRequest(make_shared<string>("IndexImage"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IndexImageResponse Alibabacloud_Imm20170906::Client::indexImage(shared_ptr<IndexImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexImageWithOptions(request, runtime);
}

IndexVideoResponse Alibabacloud_Imm20170906::Client::indexVideoWithOptions(shared_ptr<IndexVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return IndexVideoResponse(doRPCRequest(make_shared<string>("IndexVideo"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

IndexVideoResponse Alibabacloud_Imm20170906::Client::indexVideo(shared_ptr<IndexVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return indexVideoWithOptions(request, runtime);
}

ListFaceGroupsResponse Alibabacloud_Imm20170906::Client::listFaceGroupsWithOptions(shared_ptr<ListFaceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListFaceGroupsResponse(doRPCRequest(make_shared<string>("ListFaceGroups"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListFaceGroupsResponse Alibabacloud_Imm20170906::Client::listFaceGroups(shared_ptr<ListFaceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFaceGroupsWithOptions(request, runtime);
}

ListImagesResponse Alibabacloud_Imm20170906::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListImagesResponse(doRPCRequest(make_shared<string>("ListImages"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListImagesResponse Alibabacloud_Imm20170906::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImagesWithOptions(request, runtime);
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::listOfficeConversionTaskWithOptions(shared_ptr<ListOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOfficeConversionTaskResponse(doRPCRequest(make_shared<string>("ListOfficeConversionTask"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOfficeConversionTaskResponse Alibabacloud_Imm20170906::Client::listOfficeConversionTask(shared_ptr<ListOfficeConversionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOfficeConversionTaskWithOptions(request, runtime);
}

ListProjectAPIsResponse Alibabacloud_Imm20170906::Client::listProjectAPIsWithOptions(shared_ptr<ListProjectAPIsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectAPIsResponse(doRPCRequest(make_shared<string>("ListProjectAPIs"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectAPIsResponse Alibabacloud_Imm20170906::Client::listProjectAPIs(shared_ptr<ListProjectAPIsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectAPIsWithOptions(request, runtime);
}

ListProjectsResponse Alibabacloud_Imm20170906::Client::listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProjectsResponse(doRPCRequest(make_shared<string>("ListProjects"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProjectsResponse Alibabacloud_Imm20170906::Client::listProjects(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectsWithOptions(request, runtime);
}

ListSetTagsResponse Alibabacloud_Imm20170906::Client::listSetTagsWithOptions(shared_ptr<ListSetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSetTagsResponse(doRPCRequest(make_shared<string>("ListSetTags"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSetTagsResponse Alibabacloud_Imm20170906::Client::listSetTags(shared_ptr<ListSetTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSetTagsWithOptions(request, runtime);
}

ListSetsResponse Alibabacloud_Imm20170906::Client::listSetsWithOptions(shared_ptr<ListSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSetsResponse(doRPCRequest(make_shared<string>("ListSets"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSetsResponse Alibabacloud_Imm20170906::Client::listSets(shared_ptr<ListSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSetsWithOptions(request, runtime);
}

ListVideoAudiosResponse Alibabacloud_Imm20170906::Client::listVideoAudiosWithOptions(shared_ptr<ListVideoAudiosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVideoAudiosResponse(doRPCRequest(make_shared<string>("ListVideoAudios"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVideoAudiosResponse Alibabacloud_Imm20170906::Client::listVideoAudios(shared_ptr<ListVideoAudiosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoAudiosWithOptions(request, runtime);
}

ListVideoFramesResponse Alibabacloud_Imm20170906::Client::listVideoFramesWithOptions(shared_ptr<ListVideoFramesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVideoFramesResponse(doRPCRequest(make_shared<string>("ListVideoFrames"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVideoFramesResponse Alibabacloud_Imm20170906::Client::listVideoFrames(shared_ptr<ListVideoFramesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoFramesWithOptions(request, runtime);
}

ListVideoTasksResponse Alibabacloud_Imm20170906::Client::listVideoTasksWithOptions(shared_ptr<ListVideoTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVideoTasksResponse(doRPCRequest(make_shared<string>("ListVideoTasks"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVideoTasksResponse Alibabacloud_Imm20170906::Client::listVideoTasks(shared_ptr<ListVideoTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideoTasksWithOptions(request, runtime);
}

ListVideosResponse Alibabacloud_Imm20170906::Client::listVideosWithOptions(shared_ptr<ListVideosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListVideosResponse(doRPCRequest(make_shared<string>("ListVideos"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListVideosResponse Alibabacloud_Imm20170906::Client::listVideos(shared_ptr<ListVideosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVideosWithOptions(request, runtime);
}

OpenImmServiceResponse Alibabacloud_Imm20170906::Client::openImmServiceWithOptions(shared_ptr<OpenImmServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenImmServiceResponse(doRPCRequest(make_shared<string>("OpenImmService"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenImmServiceResponse Alibabacloud_Imm20170906::Client::openImmService(shared_ptr<OpenImmServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openImmServiceWithOptions(request, runtime);
}

PutProjectResponse Alibabacloud_Imm20170906::Client::putProjectWithOptions(shared_ptr<PutProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutProjectResponse(doRPCRequest(make_shared<string>("PutProject"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutProjectResponse Alibabacloud_Imm20170906::Client::putProject(shared_ptr<PutProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putProjectWithOptions(request, runtime);
}

RefreshOfficeEditTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficeEditTokenWithOptions(shared_ptr<RefreshOfficeEditTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshOfficeEditTokenResponse(doRPCRequest(make_shared<string>("RefreshOfficeEditToken"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshOfficeEditTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficeEditToken(shared_ptr<RefreshOfficeEditTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshOfficeEditTokenWithOptions(request, runtime);
}

RefreshOfficePreviewTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficePreviewTokenWithOptions(shared_ptr<RefreshOfficePreviewTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshOfficePreviewTokenResponse(doRPCRequest(make_shared<string>("RefreshOfficePreviewToken"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshOfficePreviewTokenResponse Alibabacloud_Imm20170906::Client::refreshOfficePreviewToken(shared_ptr<RefreshOfficePreviewTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshOfficePreviewTokenWithOptions(request, runtime);
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20170906::Client::refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshWebofficeTokenResponse(doRPCRequest(make_shared<string>("RefreshWebofficeToken"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshWebofficeTokenResponse Alibabacloud_Imm20170906::Client::refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshWebofficeTokenWithOptions(request, runtime);
}

UpdateFaceGroupResponse Alibabacloud_Imm20170906::Client::updateFaceGroupWithOptions(shared_ptr<UpdateFaceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFaceGroupResponse(doRPCRequest(make_shared<string>("UpdateFaceGroup"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateImageResponse(doRPCRequest(make_shared<string>("UpdateImage"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateImageResponse Alibabacloud_Imm20170906::Client::updateImage(shared_ptr<UpdateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Imm20170906::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProjectResponse(doRPCRequest(make_shared<string>("UpdateProject"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProjectResponse Alibabacloud_Imm20170906::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateSetResponse Alibabacloud_Imm20170906::Client::updateSetWithOptions(shared_ptr<UpdateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSetResponse(doRPCRequest(make_shared<string>("UpdateSet"), make_shared<string>("2017-09-06"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSetResponse Alibabacloud_Imm20170906::Client::updateSet(shared_ptr<UpdateSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSetWithOptions(request, runtime);
}

