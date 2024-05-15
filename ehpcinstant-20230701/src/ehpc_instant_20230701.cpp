// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ehpc_instant_20230701.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_EhpcInstant20230701;

Alibabacloud_EhpcInstant20230701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ehpcinstant"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_EhpcInstant20230701::Client::getEndpoint(shared_ptr<string> productId,
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

AddImageResponse Alibabacloud_EhpcInstant20230701::Client::addImageWithOptions(shared_ptr<AddImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddImageShrinkRequest> request = make_shared<AddImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddImageRequestContainerImageSpec>(tmpReq->containerImageSpec)) {
    request->containerImageSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->containerImageSpec, make_shared<string>("ContainerImageSpec"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddImageRequestVMImageSpec>(tmpReq->VMImageSpec)) {
    request->VMImageSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->VMImageSpec, make_shared<string>("VMImageSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerImageSpecShrink)) {
    query->insert(pair<string, string>("ContainerImageSpec", *request->containerImageSpecShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageVersion)) {
    query->insert(pair<string, string>("ImageVersion", *request->imageVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->VMImageSpecShrink)) {
    query->insert(pair<string, string>("VMImageSpec", *request->VMImageSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddImage"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddImageResponse(callApi(params, req, runtime));
}

AddImageResponse Alibabacloud_EhpcInstant20230701::Client::addImage(shared_ptr<AddImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addImageWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_EhpcInstant20230701::Client::createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateJobShrinkRequest> request = make_shared<CreateJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateJobRequestDeploymentPolicy>(tmpReq->deploymentPolicy)) {
    request->deploymentPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deploymentPolicy, make_shared<string>("DeploymentPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateJobRequestTasks>>(tmpReq->tasks)) {
    request->tasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tasks, make_shared<string>("Tasks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentPolicyShrink)) {
    query->insert(pair<string, string>("DeploymentPolicy", *request->deploymentPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobDescription)) {
    query->insert(pair<string, string>("JobDescription", *request->jobDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tasksShrink)) {
    query->insert(pair<string, string>("Tasks", *request->tasksShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_EhpcInstant20230701::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

DeleteJobsResponse Alibabacloud_EhpcInstant20230701::Client::deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteJobsShrinkRequest> request = make_shared<DeleteJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("ExecutorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeleteJobsRequestJobSpec>>(tmpReq->jobSpec)) {
    request->jobSpecShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobSpec, make_shared<string>("JobSpec"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    query->insert(pair<string, string>("ExecutorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobSpecShrink)) {
    query->insert(pair<string, string>("JobSpec", *request->jobSpecShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJobs"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobsResponse(callApi(params, req, runtime));
}

DeleteJobsResponse Alibabacloud_EhpcInstant20230701::Client::deleteJobs(shared_ptr<DeleteJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobsWithOptions(request, runtime);
}

DescribeJobMetricDataResponse Alibabacloud_EhpcInstant20230701::Client::describeJobMetricDataWithOptions(shared_ptr<DescribeJobMetricDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeJobMetricDataShrinkRequest> request = make_shared<DescribeJobMetricDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->arrayIndex)) {
    request->arrayIndexShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->arrayIndex, make_shared<string>("ArrayIndex"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrayIndexShrink)) {
    query->insert(pair<string, string>("ArrayIndex", *request->arrayIndexShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobMetricData"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobMetricDataResponse(callApi(params, req, runtime));
}

DescribeJobMetricDataResponse Alibabacloud_EhpcInstant20230701::Client::describeJobMetricData(shared_ptr<DescribeJobMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobMetricDataWithOptions(request, runtime);
}

DescribeJobMetricLastResponse Alibabacloud_EhpcInstant20230701::Client::describeJobMetricLastWithOptions(shared_ptr<DescribeJobMetricLastRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeJobMetricLastShrinkRequest> request = make_shared<DescribeJobMetricLastShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->arrayIndex)) {
    request->arrayIndexShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->arrayIndex, make_shared<string>("ArrayIndex"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrayIndexShrink)) {
    query->insert(pair<string, string>("ArrayIndex", *request->arrayIndexShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobMetricLast"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobMetricLastResponse(callApi(params, req, runtime));
}

DescribeJobMetricLastResponse Alibabacloud_EhpcInstant20230701::Client::describeJobMetricLast(shared_ptr<DescribeJobMetricLastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobMetricLastWithOptions(request, runtime);
}

GetImageResponse Alibabacloud_EhpcInstant20230701::Client::getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCategory)) {
    query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImage"))},
    {"version", boost::any(string("2023-07-01"))},
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

GetImageResponse Alibabacloud_EhpcInstant20230701::Client::getImage(shared_ptr<GetImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageWithOptions(request, runtime);
}

GetJobResponse Alibabacloud_EhpcInstant20230701::Client::getJobWithOptions(shared_ptr<GetJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJob"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobResponse(callApi(params, req, runtime));
}

GetJobResponse Alibabacloud_EhpcInstant20230701::Client::getJob(shared_ptr<GetJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobWithOptions(request, runtime);
}

ListExecutorsResponse Alibabacloud_EhpcInstant20230701::Client::listExecutorsWithOptions(shared_ptr<ListExecutorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListExecutorsShrinkRequest> request = make_shared<ListExecutorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListExecutorsRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    query->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExecutors"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExecutorsResponse(callApi(params, req, runtime));
}

ListExecutorsResponse Alibabacloud_EhpcInstant20230701::Client::listExecutors(shared_ptr<ListExecutorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExecutorsWithOptions(request, runtime);
}

ListImagesResponse Alibabacloud_EhpcInstant20230701::Client::listImagesWithOptions(shared_ptr<ListImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListImagesShrinkRequest> request = make_shared<ListImagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->imageIds)) {
    request->imageIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imageIds, make_shared<string>("ImageIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->imageNames)) {
    request->imageNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imageNames, make_shared<string>("ImageNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCategory)) {
    query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageIdsShrink)) {
    query->insert(pair<string, string>("ImageIds", *request->imageIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageNamesShrink)) {
    query->insert(pair<string, string>("ImageNames", *request->imageNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageType)) {
    query->insert(pair<string, string>("ImageType", *request->imageType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImages"))},
    {"version", boost::any(string("2023-07-01"))},
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

ListImagesResponse Alibabacloud_EhpcInstant20230701::Client::listImages(shared_ptr<ListImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImagesWithOptions(request, runtime);
}

ListJobExecutorsResponse Alibabacloud_EhpcInstant20230701::Client::listJobExecutorsWithOptions(shared_ptr<ListJobExecutorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobExecutors"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobExecutorsResponse(callApi(params, req, runtime));
}

ListJobExecutorsResponse Alibabacloud_EhpcInstant20230701::Client::listJobExecutors(shared_ptr<ListJobExecutorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobExecutorsWithOptions(request, runtime);
}

ListJobsResponse Alibabacloud_EhpcInstant20230701::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListJobsShrinkRequest> request = make_shared<ListJobsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListJobsRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListJobsRequestSortBy>(tmpReq->sortBy)) {
    request->sortByShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sortBy, make_shared<string>("SortBy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    query->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByShrink)) {
    query->insert(pair<string, string>("SortBy", *request->sortByShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobsResponse(callApi(params, req, runtime));
}

ListJobsResponse Alibabacloud_EhpcInstant20230701::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsWithOptions(request, runtime);
}

RemoveImageResponse Alibabacloud_EhpcInstant20230701::Client::removeImageWithOptions(shared_ptr<RemoveImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    query->insert(pair<string, string>("ImageId", *request->imageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveImage"))},
    {"version", boost::any(string("2023-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveImageResponse(callApi(params, req, runtime));
}

RemoveImageResponse Alibabacloud_EhpcInstant20230701::Client::removeImage(shared_ptr<RemoveImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeImageWithOptions(request, runtime);
}

