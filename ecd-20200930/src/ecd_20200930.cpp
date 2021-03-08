// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ecd_20200930.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Ecd20200930;

Alibabacloud_Ecd20200930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ecd"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ecd20200930::Client::getEndpoint(shared_ptr<string> productId,
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

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectoryWithOptions(shared_ptr<CreateADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateADConnectorDirectoryResponse(doRPCRequest(make_shared<string>("CreateADConnectorDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::createADConnectorDirectory(shared_ptr<CreateADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createADConnectorDirectoryWithOptions(request, runtime);
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundleWithOptions(shared_ptr<CreateBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateBundleResponse(doRPCRequest(make_shared<string>("CreateBundle"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateBundleResponse Alibabacloud_Ecd20200930::Client::createBundle(shared_ptr<CreateBundleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBundleWithOptions(request, runtime);
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktopsWithOptions(shared_ptr<CreateDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDesktopsResponse(doRPCRequest(make_shared<string>("CreateDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDesktopsResponse Alibabacloud_Ecd20200930::Client::createDesktops(shared_ptr<CreateDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDesktopsWithOptions(request, runtime);
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImageWithOptions(shared_ptr<CreateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateImageResponse(doRPCRequest(make_shared<string>("CreateImage"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateImageResponse Alibabacloud_Ecd20200930::Client::createImage(shared_ptr<CreateImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageWithOptions(request, runtime);
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroupWithOptions(shared_ptr<CreatePolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePolicyGroupResponse(doRPCRequest(make_shared<string>("CreatePolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePolicyGroupResponse Alibabacloud_Ecd20200930::Client::createPolicyGroup(shared_ptr<CreatePolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPolicyGroupWithOptions(request, runtime);
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectoryWithOptions(shared_ptr<CreateRAMDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRAMDirectoryResponse(doRPCRequest(make_shared<string>("CreateRAMDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRAMDirectoryResponse Alibabacloud_Ecd20200930::Client::createRAMDirectory(shared_ptr<CreateRAMDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRAMDirectoryWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_Ecd20200930::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundlesWithOptions(shared_ptr<DeleteBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBundlesResponse(doRPCRequest(make_shared<string>("DeleteBundles"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBundlesResponse Alibabacloud_Ecd20200930::Client::deleteBundles(shared_ptr<DeleteBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBundlesWithOptions(request, runtime);
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktopsWithOptions(shared_ptr<DeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDesktopsResponse(doRPCRequest(make_shared<string>("DeleteDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDesktopsResponse Alibabacloud_Ecd20200930::Client::deleteDesktops(shared_ptr<DeleteDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDesktopsWithOptions(request, runtime);
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectoriesWithOptions(shared_ptr<DeleteDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDirectoriesResponse(doRPCRequest(make_shared<string>("DeleteDirectories"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDirectoriesResponse Alibabacloud_Ecd20200930::Client::deleteDirectories(shared_ptr<DeleteDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDirectoriesWithOptions(request, runtime);
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImagesWithOptions(shared_ptr<DeleteImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteImagesResponse(doRPCRequest(make_shared<string>("DeleteImages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteImagesResponse Alibabacloud_Ecd20200930::Client::deleteImages(shared_ptr<DeleteImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImagesWithOptions(request, runtime);
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroupsWithOptions(shared_ptr<DeletePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeletePolicyGroupsResponse(doRPCRequest(make_shared<string>("DeletePolicyGroups"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeletePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::deletePolicyGroups(shared_ptr<DeletePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePolicyGroupsWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_Ecd20200930::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("DeleteVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundlesWithOptions(shared_ptr<DescribeBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBundlesResponse(doRPCRequest(make_shared<string>("DescribeBundles"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBundlesResponse Alibabacloud_Ecd20200930::Client::describeBundles(shared_ptr<DescribeBundlesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBundlesWithOptions(request, runtime);
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEventsWithOptions(shared_ptr<DescribeClientEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeClientEventsResponse(doRPCRequest(make_shared<string>("DescribeClientEvents"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeClientEventsResponse Alibabacloud_Ecd20200930::Client::describeClientEvents(shared_ptr<DescribeClientEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClientEventsWithOptions(request, runtime);
}

DescribeDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::describeDesktopPolicysWithOptions(shared_ptr<DescribeDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopPolicysResponse(doRPCRequest(make_shared<string>("DescribeDesktopPolicys"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::describeDesktopPolicys(shared_ptr<DescribeDesktopPolicysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopPolicysWithOptions(request, runtime);
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktopsWithOptions(shared_ptr<DescribeDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopsResponse(doRPCRequest(make_shared<string>("DescribeDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopsResponse Alibabacloud_Ecd20200930::Client::describeDesktops(shared_ptr<DescribeDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopsWithOptions(request, runtime);
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypesWithOptions(shared_ptr<DescribeDesktopTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDesktopTypesResponse(doRPCRequest(make_shared<string>("DescribeDesktopTypes"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDesktopTypesResponse Alibabacloud_Ecd20200930::Client::describeDesktopTypes(shared_ptr<DescribeDesktopTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDesktopTypesWithOptions(request, runtime);
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDirectoriesResponse(doRPCRequest(make_shared<string>("DescribeDirectories"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDirectoriesResponse Alibabacloud_Ecd20200930::Client::describeDirectories(shared_ptr<DescribeDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirectoriesWithOptions(request, runtime);
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImagesWithOptions(shared_ptr<DescribeImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeImagesResponse(doRPCRequest(make_shared<string>("DescribeImages"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeImagesResponse Alibabacloud_Ecd20200930::Client::describeImages(shared_ptr<DescribeImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImagesWithOptions(request, runtime);
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocationsWithOptions(shared_ptr<DescribeInvocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInvocationsResponse(doRPCRequest(make_shared<string>("DescribeInvocations"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInvocationsResponse Alibabacloud_Ecd20200930::Client::describeInvocations(shared_ptr<DescribeInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationsWithOptions(request, runtime);
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroupsWithOptions(shared_ptr<DescribePolicyGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePolicyGroupsResponse(doRPCRequest(make_shared<string>("DescribePolicyGroups"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePolicyGroupsResponse Alibabacloud_Ecd20200930::Client::describePolicyGroups(shared_ptr<DescribePolicyGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePolicyGroupsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ecd20200930::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsResponse(doRPCRequest(make_shared<string>("DescribeSnapshots"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_Ecd20200930::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevicesWithOptions(shared_ptr<DescribeVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVirtualMFADevicesResponse(doRPCRequest(make_shared<string>("DescribeVirtualMFADevices"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVirtualMFADevicesResponse Alibabacloud_Ecd20200930::Client::describeVirtualMFADevices(shared_ptr<DescribeVirtualMFADevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVirtualMFADevicesWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_Ecd20200930::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DoCheckResourceResponse Alibabacloud_Ecd20200930::Client::doCheckResourceWithOptions(shared_ptr<DoCheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoCheckResourceResponse(doRPCRequest(make_shared<string>("DoCheckResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoCheckResourceResponse Alibabacloud_Ecd20200930::Client::doCheckResource(shared_ptr<DoCheckResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doCheckResourceWithOptions(request, runtime);
}

DoLogicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doLogicalDeleteResourceWithOptions(shared_ptr<DoLogicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoLogicalDeleteResourceResponse(doRPCRequest(make_shared<string>("DoLogicalDeleteResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoLogicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doLogicalDeleteResource(shared_ptr<DoLogicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doLogicalDeleteResourceWithOptions(request, runtime);
}

DoPhysicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doPhysicalDeleteResourceWithOptions(shared_ptr<DoPhysicalDeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DoPhysicalDeleteResourceResponse(doRPCRequest(make_shared<string>("DoPhysicalDeleteResource"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DoPhysicalDeleteResourceResponse Alibabacloud_Ecd20200930::Client::doPhysicalDeleteResource(shared_ptr<DoPhysicalDeleteResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doPhysicalDeleteResourceWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConnectionTicketResponse(doRPCRequest(make_shared<string>("GetConnectionTicket"), make_shared<string>("2020-09-30"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConnectionTicketResponse Alibabacloud_Ecd20200930::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsersWithOptions(shared_ptr<ListDirectoryUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDirectoryUsersResponse(doRPCRequest(make_shared<string>("ListDirectoryUsers"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDirectoryUsersResponse Alibabacloud_Ecd20200930::Client::listDirectoryUsers(shared_ptr<ListDirectoryUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectoryUsersWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_Ecd20200930::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADeviceWithOptions(shared_ptr<LockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LockVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("LockVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::lockVirtualMFADevice(shared_ptr<LockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockVirtualMFADeviceWithOptions(request, runtime);
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectoryWithOptions(shared_ptr<ModifyADConnectorDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyADConnectorDirectoryResponse(doRPCRequest(make_shared<string>("ModifyADConnectorDirectory"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyADConnectorDirectoryResponse Alibabacloud_Ecd20200930::Client::modifyADConnectorDirectory(shared_ptr<ModifyADConnectorDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyADConnectorDirectoryWithOptions(request, runtime);
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopNameWithOptions(shared_ptr<ModifyDesktopNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopNameResponse(doRPCRequest(make_shared<string>("ModifyDesktopName"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopNameResponse Alibabacloud_Ecd20200930::Client::modifyDesktopName(shared_ptr<ModifyDesktopNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopNameWithOptions(request, runtime);
}

ModifyDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::modifyDesktopPolicysWithOptions(shared_ptr<ModifyDesktopPolicysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopPolicysResponse(doRPCRequest(make_shared<string>("ModifyDesktopPolicys"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopPolicysResponse Alibabacloud_Ecd20200930::Client::modifyDesktopPolicys(shared_ptr<ModifyDesktopPolicysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopPolicysWithOptions(request, runtime);
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroupWithOptions(shared_ptr<ModifyDesktopsPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDesktopsPolicyGroupResponse(doRPCRequest(make_shared<string>("ModifyDesktopsPolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDesktopsPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyDesktopsPolicyGroup(shared_ptr<ModifyDesktopsPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDesktopsPolicyGroupWithOptions(request, runtime);
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlementWithOptions(shared_ptr<ModifyEntitlementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyEntitlementResponse(doRPCRequest(make_shared<string>("ModifyEntitlement"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyEntitlementResponse Alibabacloud_Ecd20200930::Client::modifyEntitlement(shared_ptr<ModifyEntitlementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEntitlementWithOptions(request, runtime);
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttributeWithOptions(shared_ptr<ModifyImageAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyImageAttributeResponse(doRPCRequest(make_shared<string>("ModifyImageAttribute"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyImageAttributeResponse Alibabacloud_Ecd20200930::Client::modifyImageAttribute(shared_ptr<ModifyImageAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyImageAttributeWithOptions(request, runtime);
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroupWithOptions(shared_ptr<ModifyPolicyGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPolicyGroupResponse(doRPCRequest(make_shared<string>("ModifyPolicyGroup"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPolicyGroupResponse Alibabacloud_Ecd20200930::Client::modifyPolicyGroup(shared_ptr<ModifyPolicyGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPolicyGroupWithOptions(request, runtime);
}

PayOrderCallbackResponse Alibabacloud_Ecd20200930::Client::payOrderCallbackWithOptions(shared_ptr<PayOrderCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PayOrderCallbackResponse(doRPCRequest(make_shared<string>("PayOrderCallback"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PayOrderCallbackResponse Alibabacloud_Ecd20200930::Client::payOrderCallback(shared_ptr<PayOrderCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return payOrderCallbackWithOptions(request, runtime);
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RebootDesktopsResponse(doRPCRequest(make_shared<string>("RebootDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RebootDesktopsResponse Alibabacloud_Ecd20200930::Client::rebootDesktops(shared_ptr<RebootDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebootDesktopsWithOptions(request, runtime);
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktopsWithOptions(shared_ptr<RenewDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewDesktopsResponse(doRPCRequest(make_shared<string>("RenewDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewDesktopsResponse Alibabacloud_Ecd20200930::Client::renewDesktops(shared_ptr<RenewDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewDesktopsWithOptions(request, runtime);
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetSnapshotResponse(doRPCRequest(make_shared<string>("ResetSnapshot"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetSnapshotResponse Alibabacloud_Ecd20200930::Client::resetSnapshot(shared_ptr<ResetSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSnapshotWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RunCommandResponse(doRPCRequest(make_shared<string>("RunCommand"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RunCommandResponse Alibabacloud_Ecd20200930::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartDesktopsResponse(doRPCRequest(make_shared<string>("StartDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartDesktopsResponse Alibabacloud_Ecd20200930::Client::startDesktops(shared_ptr<StartDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDesktopsWithOptions(request, runtime);
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopDesktopsResponse(doRPCRequest(make_shared<string>("StopDesktops"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopDesktopsResponse Alibabacloud_Ecd20200930::Client::stopDesktops(shared_ptr<StopDesktopsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDesktopsWithOptions(request, runtime);
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocationWithOptions(shared_ptr<StopInvocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopInvocationResponse(doRPCRequest(make_shared<string>("StopInvocation"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopInvocationResponse Alibabacloud_Ecd20200930::Client::stopInvocation(shared_ptr<StopInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInvocationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_Ecd20200930::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADeviceWithOptions(shared_ptr<UnlockVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnlockVirtualMFADeviceResponse(doRPCRequest(make_shared<string>("UnlockVirtualMFADevice"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnlockVirtualMFADeviceResponse Alibabacloud_Ecd20200930::Client::unlockVirtualMFADevice(shared_ptr<UnlockVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unlockVirtualMFADeviceWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2020-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_Ecd20200930::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

