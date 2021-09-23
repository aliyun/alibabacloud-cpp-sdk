// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nas20170626.hpp>
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

using namespace Alibabacloud_NAS20170626;

Alibabacloud_NAS20170626::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-chengdu", "nas.aliyuncs.com"},
    {"me-east-1", "nas.ap-northeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "nas.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_NAS20170626::Client::getEndpoint(shared_ptr<string> productId,
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

AddClientToBlackListResponse Alibabacloud_NAS20170626::Client::addClientToBlackListWithOptions(shared_ptr<AddClientToBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddClientToBlackListResponse(doRPCRequest(make_shared<string>("AddClientToBlackList"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddClientToBlackListResponse Alibabacloud_NAS20170626::Client::addClientToBlackList(shared_ptr<AddClientToBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addClientToBlackListWithOptions(request, runtime);
}

AddTagsResponse Alibabacloud_NAS20170626::Client::addTagsWithOptions(shared_ptr<AddTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddTagsResponse(doRPCRequest(make_shared<string>("AddTags"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddTagsResponse Alibabacloud_NAS20170626::Client::addTags(shared_ptr<AddTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsWithOptions(request, runtime);
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::applyAutoSnapshotPolicyWithOptions(shared_ptr<ApplyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("ApplyAutoSnapshotPolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::applyAutoSnapshotPolicy(shared_ptr<ApplyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAutoSnapshotPolicyWithOptions(request, runtime);
}

CancelAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("CancelAutoSnapshotPolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

CancelDirQuotaResponse Alibabacloud_NAS20170626::Client::cancelDirQuotaWithOptions(shared_ptr<CancelDirQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelDirQuotaResponse(doRPCRequest(make_shared<string>("CancelDirQuota"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelDirQuotaResponse Alibabacloud_NAS20170626::Client::cancelDirQuota(shared_ptr<CancelDirQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDirQuotaWithOptions(request, runtime);
}

CancelLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::cancelLifecycleRetrieveJobWithOptions(shared_ptr<CancelLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelLifecycleRetrieveJobResponse(doRPCRequest(make_shared<string>("CancelLifecycleRetrieveJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::cancelLifecycleRetrieveJob(shared_ptr<CancelLifecycleRetrieveJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelLifecycleRetrieveJobWithOptions(request, runtime);
}

CancelRecycleBinJobResponse Alibabacloud_NAS20170626::Client::cancelRecycleBinJobWithOptions(shared_ptr<CancelRecycleBinJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CancelRecycleBinJobResponse(doRPCRequest(make_shared<string>("CancelRecycleBinJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelRecycleBinJobResponse Alibabacloud_NAS20170626::Client::cancelRecycleBinJob(shared_ptr<CancelRecycleBinJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRecycleBinJobWithOptions(request, runtime);
}

CreateAccessGroupResponse Alibabacloud_NAS20170626::Client::createAccessGroupWithOptions(shared_ptr<CreateAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccessGroupResponse(doRPCRequest(make_shared<string>("CreateAccessGroup"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccessGroupResponse Alibabacloud_NAS20170626::Client::createAccessGroup(shared_ptr<CreateAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessGroupWithOptions(request, runtime);
}

CreateAccessRuleResponse Alibabacloud_NAS20170626::Client::createAccessRuleWithOptions(shared_ptr<CreateAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAccessRuleResponse(doRPCRequest(make_shared<string>("CreateAccessRule"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAccessRuleResponse Alibabacloud_NAS20170626::Client::createAccessRule(shared_ptr<CreateAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessRuleWithOptions(request, runtime);
}

CreateAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("CreateAutoSnapshotPolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

CreateFileSystemResponse Alibabacloud_NAS20170626::Client::createFileSystemWithOptions(shared_ptr<CreateFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFileSystemResponse(doRPCRequest(make_shared<string>("CreateFileSystem"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFileSystemResponse Alibabacloud_NAS20170626::Client::createFileSystem(shared_ptr<CreateFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFileSystemWithOptions(request, runtime);
}

CreateLDAPConfigResponse Alibabacloud_NAS20170626::Client::createLDAPConfigWithOptions(shared_ptr<CreateLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLDAPConfigResponse(doRPCRequest(make_shared<string>("CreateLDAPConfig"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLDAPConfigResponse Alibabacloud_NAS20170626::Client::createLDAPConfig(shared_ptr<CreateLDAPConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLDAPConfigWithOptions(request, runtime);
}

CreateLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::createLifecyclePolicyWithOptions(shared_ptr<CreateLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLifecyclePolicyResponse(doRPCRequest(make_shared<string>("CreateLifecyclePolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::createLifecyclePolicy(shared_ptr<CreateLifecyclePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLifecyclePolicyWithOptions(request, runtime);
}

CreateLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::createLifecycleRetrieveJobWithOptions(shared_ptr<CreateLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLifecycleRetrieveJobResponse(doRPCRequest(make_shared<string>("CreateLifecycleRetrieveJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::createLifecycleRetrieveJob(shared_ptr<CreateLifecycleRetrieveJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLifecycleRetrieveJobWithOptions(request, runtime);
}

CreateMountTargetResponse Alibabacloud_NAS20170626::Client::createMountTargetWithOptions(shared_ptr<CreateMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateMountTargetResponse(doRPCRequest(make_shared<string>("CreateMountTarget"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMountTargetResponse Alibabacloud_NAS20170626::Client::createMountTarget(shared_ptr<CreateMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMountTargetWithOptions(request, runtime);
}

CreateRecycleBinDeleteJobResponse Alibabacloud_NAS20170626::Client::createRecycleBinDeleteJobWithOptions(shared_ptr<CreateRecycleBinDeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateRecycleBinDeleteJobResponse(doRPCRequest(make_shared<string>("CreateRecycleBinDeleteJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRecycleBinDeleteJobResponse Alibabacloud_NAS20170626::Client::createRecycleBinDeleteJob(shared_ptr<CreateRecycleBinDeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecycleBinDeleteJobWithOptions(request, runtime);
}

CreateRecycleBinRestoreJobResponse Alibabacloud_NAS20170626::Client::createRecycleBinRestoreJobWithOptions(shared_ptr<CreateRecycleBinRestoreJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateRecycleBinRestoreJobResponse(doRPCRequest(make_shared<string>("CreateRecycleBinRestoreJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRecycleBinRestoreJobResponse Alibabacloud_NAS20170626::Client::createRecycleBinRestoreJob(shared_ptr<CreateRecycleBinRestoreJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecycleBinRestoreJobWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_NAS20170626::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSnapshotResponse(doRPCRequest(make_shared<string>("CreateSnapshot"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSnapshotResponse Alibabacloud_NAS20170626::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteAccessGroupResponse Alibabacloud_NAS20170626::Client::deleteAccessGroupWithOptions(shared_ptr<DeleteAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccessGroupResponse(doRPCRequest(make_shared<string>("DeleteAccessGroup"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccessGroupResponse Alibabacloud_NAS20170626::Client::deleteAccessGroup(shared_ptr<DeleteAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessGroupWithOptions(request, runtime);
}

DeleteAccessRuleResponse Alibabacloud_NAS20170626::Client::deleteAccessRuleWithOptions(shared_ptr<DeleteAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAccessRuleResponse(doRPCRequest(make_shared<string>("DeleteAccessRule"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAccessRuleResponse Alibabacloud_NAS20170626::Client::deleteAccessRule(shared_ptr<DeleteAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessRuleWithOptions(request, runtime);
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::deleteAutoSnapshotPolicyWithOptions(shared_ptr<DeleteAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("DeleteAutoSnapshotPolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::deleteAutoSnapshotPolicy(shared_ptr<DeleteAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

DeleteFileSystemResponse Alibabacloud_NAS20170626::Client::deleteFileSystemWithOptions(shared_ptr<DeleteFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteFileSystemResponse(doRPCRequest(make_shared<string>("DeleteFileSystem"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteFileSystemResponse Alibabacloud_NAS20170626::Client::deleteFileSystem(shared_ptr<DeleteFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileSystemWithOptions(request, runtime);
}

DeleteLDAPConfigResponse Alibabacloud_NAS20170626::Client::deleteLDAPConfigWithOptions(shared_ptr<DeleteLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLDAPConfigResponse(doRPCRequest(make_shared<string>("DeleteLDAPConfig"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLDAPConfigResponse Alibabacloud_NAS20170626::Client::deleteLDAPConfig(shared_ptr<DeleteLDAPConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLDAPConfigWithOptions(request, runtime);
}

DeleteLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::deleteLifecyclePolicyWithOptions(shared_ptr<DeleteLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLifecyclePolicyResponse(doRPCRequest(make_shared<string>("DeleteLifecyclePolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::deleteLifecyclePolicy(shared_ptr<DeleteLifecyclePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLifecyclePolicyWithOptions(request, runtime);
}

DeleteMountTargetResponse Alibabacloud_NAS20170626::Client::deleteMountTargetWithOptions(shared_ptr<DeleteMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteMountTargetResponse(doRPCRequest(make_shared<string>("DeleteMountTarget"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteMountTargetResponse Alibabacloud_NAS20170626::Client::deleteMountTarget(shared_ptr<DeleteMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMountTargetWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_NAS20170626::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSnapshotResponse(doRPCRequest(make_shared<string>("DeleteSnapshot"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSnapshotResponse Alibabacloud_NAS20170626::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DescribeAccessGroupsResponse Alibabacloud_NAS20170626::Client::describeAccessGroupsWithOptions(shared_ptr<DescribeAccessGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccessGroupsResponse(doRPCRequest(make_shared<string>("DescribeAccessGroups"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccessGroupsResponse Alibabacloud_NAS20170626::Client::describeAccessGroups(shared_ptr<DescribeAccessGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessGroupsWithOptions(request, runtime);
}

DescribeAccessRulesResponse Alibabacloud_NAS20170626::Client::describeAccessRulesWithOptions(shared_ptr<DescribeAccessRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAccessRulesResponse(doRPCRequest(make_shared<string>("DescribeAccessRules"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccessRulesResponse Alibabacloud_NAS20170626::Client::describeAccessRules(shared_ptr<DescribeAccessRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessRulesWithOptions(request, runtime);
}

DescribeAutoSnapshotPoliciesResponse Alibabacloud_NAS20170626::Client::describeAutoSnapshotPoliciesWithOptions(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoSnapshotPoliciesResponse(doRPCRequest(make_shared<string>("DescribeAutoSnapshotPolicies"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoSnapshotPoliciesResponse Alibabacloud_NAS20170626::Client::describeAutoSnapshotPolicies(shared_ptr<DescribeAutoSnapshotPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoSnapshotPoliciesWithOptions(request, runtime);
}

DescribeAutoSnapshotTasksResponse Alibabacloud_NAS20170626::Client::describeAutoSnapshotTasksWithOptions(shared_ptr<DescribeAutoSnapshotTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAutoSnapshotTasksResponse(doRPCRequest(make_shared<string>("DescribeAutoSnapshotTasks"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAutoSnapshotTasksResponse Alibabacloud_NAS20170626::Client::describeAutoSnapshotTasks(shared_ptr<DescribeAutoSnapshotTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoSnapshotTasksWithOptions(request, runtime);
}

DescribeBlackListClientsResponse Alibabacloud_NAS20170626::Client::describeBlackListClientsWithOptions(shared_ptr<DescribeBlackListClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeBlackListClientsResponse(doRPCRequest(make_shared<string>("DescribeBlackListClients"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeBlackListClientsResponse Alibabacloud_NAS20170626::Client::describeBlackListClients(shared_ptr<DescribeBlackListClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlackListClientsWithOptions(request, runtime);
}

DescribeDirQuotasResponse Alibabacloud_NAS20170626::Client::describeDirQuotasWithOptions(shared_ptr<DescribeDirQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDirQuotasResponse(doRPCRequest(make_shared<string>("DescribeDirQuotas"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDirQuotasResponse Alibabacloud_NAS20170626::Client::describeDirQuotas(shared_ptr<DescribeDirQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDirQuotasWithOptions(request, runtime);
}

DescribeFileSystemsResponse Alibabacloud_NAS20170626::Client::describeFileSystemsWithOptions(shared_ptr<DescribeFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFileSystemsResponse(doRPCRequest(make_shared<string>("DescribeFileSystems"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFileSystemsResponse Alibabacloud_NAS20170626::Client::describeFileSystems(shared_ptr<DescribeFileSystemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFileSystemsWithOptions(request, runtime);
}

DescribeFileSystemStatisticsResponse Alibabacloud_NAS20170626::Client::describeFileSystemStatisticsWithOptions(shared_ptr<DescribeFileSystemStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFileSystemStatisticsResponse(doRPCRequest(make_shared<string>("DescribeFileSystemStatistics"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFileSystemStatisticsResponse Alibabacloud_NAS20170626::Client::describeFileSystemStatistics(shared_ptr<DescribeFileSystemStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFileSystemStatisticsWithOptions(request, runtime);
}

DescribeLDAPConfigResponse Alibabacloud_NAS20170626::Client::describeLDAPConfigWithOptions(shared_ptr<DescribeLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLDAPConfigResponse(doRPCRequest(make_shared<string>("DescribeLDAPConfig"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLDAPConfigResponse Alibabacloud_NAS20170626::Client::describeLDAPConfig(shared_ptr<DescribeLDAPConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLDAPConfigWithOptions(request, runtime);
}

DescribeLifecyclePoliciesResponse Alibabacloud_NAS20170626::Client::describeLifecyclePoliciesWithOptions(shared_ptr<DescribeLifecyclePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeLifecyclePoliciesResponse(doRPCRequest(make_shared<string>("DescribeLifecyclePolicies"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLifecyclePoliciesResponse Alibabacloud_NAS20170626::Client::describeLifecyclePolicies(shared_ptr<DescribeLifecyclePoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLifecyclePoliciesWithOptions(request, runtime);
}

DescribeLogAnalysisResponse Alibabacloud_NAS20170626::Client::describeLogAnalysisWithOptions(shared_ptr<DescribeLogAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogAnalysisResponse(doRPCRequest(make_shared<string>("DescribeLogAnalysis"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogAnalysisResponse Alibabacloud_NAS20170626::Client::describeLogAnalysis(shared_ptr<DescribeLogAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogAnalysisWithOptions(request, runtime);
}

DescribeMountedClientsResponse Alibabacloud_NAS20170626::Client::describeMountedClientsWithOptions(shared_ptr<DescribeMountedClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMountedClientsResponse(doRPCRequest(make_shared<string>("DescribeMountedClients"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMountedClientsResponse Alibabacloud_NAS20170626::Client::describeMountedClients(shared_ptr<DescribeMountedClientsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMountedClientsWithOptions(request, runtime);
}

DescribeMountTargetsResponse Alibabacloud_NAS20170626::Client::describeMountTargetsWithOptions(shared_ptr<DescribeMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeMountTargetsResponse(doRPCRequest(make_shared<string>("DescribeMountTargets"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeMountTargetsResponse Alibabacloud_NAS20170626::Client::describeMountTargets(shared_ptr<DescribeMountTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMountTargetsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_NAS20170626::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_NAS20170626::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSnapshotsResponse Alibabacloud_NAS20170626::Client::describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSnapshotsResponse(doRPCRequest(make_shared<string>("DescribeSnapshots"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSnapshotsResponse Alibabacloud_NAS20170626::Client::describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnapshotsWithOptions(request, runtime);
}

DescribeStoragePackagesResponse Alibabacloud_NAS20170626::Client::describeStoragePackagesWithOptions(shared_ptr<DescribeStoragePackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeStoragePackagesResponse(doRPCRequest(make_shared<string>("DescribeStoragePackages"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeStoragePackagesResponse Alibabacloud_NAS20170626::Client::describeStoragePackages(shared_ptr<DescribeStoragePackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStoragePackagesWithOptions(request, runtime);
}

DescribeTagsResponse Alibabacloud_NAS20170626::Client::describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeTagsResponse(doRPCRequest(make_shared<string>("DescribeTags"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeTagsResponse Alibabacloud_NAS20170626::Client::describeTags(shared_ptr<DescribeTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagsWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_NAS20170626::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeZonesResponse(doRPCRequest(make_shared<string>("DescribeZones"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeZonesResponse Alibabacloud_NAS20170626::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DisableAndCleanRecycleBinResponse Alibabacloud_NAS20170626::Client::disableAndCleanRecycleBinWithOptions(shared_ptr<DisableAndCleanRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DisableAndCleanRecycleBinResponse(doRPCRequest(make_shared<string>("DisableAndCleanRecycleBin"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableAndCleanRecycleBinResponse Alibabacloud_NAS20170626::Client::disableAndCleanRecycleBin(shared_ptr<DisableAndCleanRecycleBinRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAndCleanRecycleBinWithOptions(request, runtime);
}

EnableRecycleBinResponse Alibabacloud_NAS20170626::Client::enableRecycleBinWithOptions(shared_ptr<EnableRecycleBinRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableRecycleBinResponse(doRPCRequest(make_shared<string>("EnableRecycleBin"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableRecycleBinResponse Alibabacloud_NAS20170626::Client::enableRecycleBin(shared_ptr<EnableRecycleBinRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableRecycleBinWithOptions(request, runtime);
}

GetDirectoryOrFilePropertiesResponse Alibabacloud_NAS20170626::Client::getDirectoryOrFilePropertiesWithOptions(shared_ptr<GetDirectoryOrFilePropertiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDirectoryOrFilePropertiesResponse(doRPCRequest(make_shared<string>("GetDirectoryOrFileProperties"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDirectoryOrFilePropertiesResponse Alibabacloud_NAS20170626::Client::getDirectoryOrFileProperties(shared_ptr<GetDirectoryOrFilePropertiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDirectoryOrFilePropertiesWithOptions(request, runtime);
}

GetRecycleBinAttributeResponse Alibabacloud_NAS20170626::Client::getRecycleBinAttributeWithOptions(shared_ptr<GetRecycleBinAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetRecycleBinAttributeResponse(doRPCRequest(make_shared<string>("GetRecycleBinAttribute"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRecycleBinAttributeResponse Alibabacloud_NAS20170626::Client::getRecycleBinAttribute(shared_ptr<GetRecycleBinAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecycleBinAttributeWithOptions(request, runtime);
}

ListDirectoriesAndFilesResponse Alibabacloud_NAS20170626::Client::listDirectoriesAndFilesWithOptions(shared_ptr<ListDirectoriesAndFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDirectoriesAndFilesResponse(doRPCRequest(make_shared<string>("ListDirectoriesAndFiles"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDirectoriesAndFilesResponse Alibabacloud_NAS20170626::Client::listDirectoriesAndFiles(shared_ptr<ListDirectoriesAndFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectoriesAndFilesWithOptions(request, runtime);
}

ListLifecycleRetrieveJobsResponse Alibabacloud_NAS20170626::Client::listLifecycleRetrieveJobsWithOptions(shared_ptr<ListLifecycleRetrieveJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLifecycleRetrieveJobsResponse(doRPCRequest(make_shared<string>("ListLifecycleRetrieveJobs"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLifecycleRetrieveJobsResponse Alibabacloud_NAS20170626::Client::listLifecycleRetrieveJobs(shared_ptr<ListLifecycleRetrieveJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLifecycleRetrieveJobsWithOptions(request, runtime);
}

ListRecentlyRecycledDirectoriesResponse Alibabacloud_NAS20170626::Client::listRecentlyRecycledDirectoriesWithOptions(shared_ptr<ListRecentlyRecycledDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListRecentlyRecycledDirectoriesResponse(doRPCRequest(make_shared<string>("ListRecentlyRecycledDirectories"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecentlyRecycledDirectoriesResponse Alibabacloud_NAS20170626::Client::listRecentlyRecycledDirectories(shared_ptr<ListRecentlyRecycledDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecentlyRecycledDirectoriesWithOptions(request, runtime);
}

ListRecycleBinJobsResponse Alibabacloud_NAS20170626::Client::listRecycleBinJobsWithOptions(shared_ptr<ListRecycleBinJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListRecycleBinJobsResponse(doRPCRequest(make_shared<string>("ListRecycleBinJobs"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecycleBinJobsResponse Alibabacloud_NAS20170626::Client::listRecycleBinJobs(shared_ptr<ListRecycleBinJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecycleBinJobsWithOptions(request, runtime);
}

ListRecycledDirectoriesAndFilesResponse Alibabacloud_NAS20170626::Client::listRecycledDirectoriesAndFilesWithOptions(shared_ptr<ListRecycledDirectoriesAndFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListRecycledDirectoriesAndFilesResponse(doRPCRequest(make_shared<string>("ListRecycledDirectoriesAndFiles"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecycledDirectoriesAndFilesResponse Alibabacloud_NAS20170626::Client::listRecycledDirectoriesAndFiles(shared_ptr<ListRecycledDirectoriesAndFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecycledDirectoriesAndFilesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_NAS20170626::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_NAS20170626::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyAccessGroupResponse Alibabacloud_NAS20170626::Client::modifyAccessGroupWithOptions(shared_ptr<ModifyAccessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccessGroupResponse(doRPCRequest(make_shared<string>("ModifyAccessGroup"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccessGroupResponse Alibabacloud_NAS20170626::Client::modifyAccessGroup(shared_ptr<ModifyAccessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccessGroupWithOptions(request, runtime);
}

ModifyAccessRuleResponse Alibabacloud_NAS20170626::Client::modifyAccessRuleWithOptions(shared_ptr<ModifyAccessRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAccessRuleResponse(doRPCRequest(make_shared<string>("ModifyAccessRule"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAccessRuleResponse Alibabacloud_NAS20170626::Client::modifyAccessRule(shared_ptr<ModifyAccessRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAccessRuleWithOptions(request, runtime);
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::modifyAutoSnapshotPolicyWithOptions(shared_ptr<ModifyAutoSnapshotPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAutoSnapshotPolicyResponse(doRPCRequest(make_shared<string>("ModifyAutoSnapshotPolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAutoSnapshotPolicyResponse Alibabacloud_NAS20170626::Client::modifyAutoSnapshotPolicy(shared_ptr<ModifyAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

ModifyFileSystemResponse Alibabacloud_NAS20170626::Client::modifyFileSystemWithOptions(shared_ptr<ModifyFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyFileSystemResponse(doRPCRequest(make_shared<string>("ModifyFileSystem"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyFileSystemResponse Alibabacloud_NAS20170626::Client::modifyFileSystem(shared_ptr<ModifyFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyFileSystemWithOptions(request, runtime);
}

ModifyLDAPConfigResponse Alibabacloud_NAS20170626::Client::modifyLDAPConfigWithOptions(shared_ptr<ModifyLDAPConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLDAPConfigResponse(doRPCRequest(make_shared<string>("ModifyLDAPConfig"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLDAPConfigResponse Alibabacloud_NAS20170626::Client::modifyLDAPConfig(shared_ptr<ModifyLDAPConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLDAPConfigWithOptions(request, runtime);
}

ModifyLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::modifyLifecyclePolicyWithOptions(shared_ptr<ModifyLifecyclePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLifecyclePolicyResponse(doRPCRequest(make_shared<string>("ModifyLifecyclePolicy"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLifecyclePolicyResponse Alibabacloud_NAS20170626::Client::modifyLifecyclePolicy(shared_ptr<ModifyLifecyclePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLifecyclePolicyWithOptions(request, runtime);
}

ModifyMountTargetResponse Alibabacloud_NAS20170626::Client::modifyMountTargetWithOptions(shared_ptr<ModifyMountTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyMountTargetResponse(doRPCRequest(make_shared<string>("ModifyMountTarget"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyMountTargetResponse Alibabacloud_NAS20170626::Client::modifyMountTarget(shared_ptr<ModifyMountTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMountTargetWithOptions(request, runtime);
}

OpenNASServiceResponse Alibabacloud_NAS20170626::Client::openNASServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return OpenNASServiceResponse(doRPCRequest(make_shared<string>("OpenNASService"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenNASServiceResponse Alibabacloud_NAS20170626::Client::openNASService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openNASServiceWithOptions(runtime);
}

RemoveClientFromBlackListResponse Alibabacloud_NAS20170626::Client::removeClientFromBlackListWithOptions(shared_ptr<RemoveClientFromBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveClientFromBlackListResponse(doRPCRequest(make_shared<string>("RemoveClientFromBlackList"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveClientFromBlackListResponse Alibabacloud_NAS20170626::Client::removeClientFromBlackList(shared_ptr<RemoveClientFromBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeClientFromBlackListWithOptions(request, runtime);
}

RemoveTagsResponse Alibabacloud_NAS20170626::Client::removeTagsWithOptions(shared_ptr<RemoveTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveTagsResponse(doRPCRequest(make_shared<string>("RemoveTags"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveTagsResponse Alibabacloud_NAS20170626::Client::removeTags(shared_ptr<RemoveTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTagsWithOptions(request, runtime);
}

ResetFileSystemResponse Alibabacloud_NAS20170626::Client::resetFileSystemWithOptions(shared_ptr<ResetFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetFileSystemResponse(doRPCRequest(make_shared<string>("ResetFileSystem"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetFileSystemResponse Alibabacloud_NAS20170626::Client::resetFileSystem(shared_ptr<ResetFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetFileSystemWithOptions(request, runtime);
}

RetryLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::retryLifecycleRetrieveJobWithOptions(shared_ptr<RetryLifecycleRetrieveJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RetryLifecycleRetrieveJobResponse(doRPCRequest(make_shared<string>("RetryLifecycleRetrieveJob"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RetryLifecycleRetrieveJobResponse Alibabacloud_NAS20170626::Client::retryLifecycleRetrieveJob(shared_ptr<RetryLifecycleRetrieveJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryLifecycleRetrieveJobWithOptions(request, runtime);
}

SetDirQuotaResponse Alibabacloud_NAS20170626::Client::setDirQuotaWithOptions(shared_ptr<SetDirQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDirQuotaResponse(doRPCRequest(make_shared<string>("SetDirQuota"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDirQuotaResponse Alibabacloud_NAS20170626::Client::setDirQuota(shared_ptr<SetDirQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDirQuotaWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_NAS20170626::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_NAS20170626::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_NAS20170626::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_NAS20170626::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateRecycleBinAttributeResponse Alibabacloud_NAS20170626::Client::updateRecycleBinAttributeWithOptions(shared_ptr<UpdateRecycleBinAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UpdateRecycleBinAttributeResponse(doRPCRequest(make_shared<string>("UpdateRecycleBinAttribute"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRecycleBinAttributeResponse Alibabacloud_NAS20170626::Client::updateRecycleBinAttribute(shared_ptr<UpdateRecycleBinAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecycleBinAttributeWithOptions(request, runtime);
}

UpgradeFileSystemResponse Alibabacloud_NAS20170626::Client::upgradeFileSystemWithOptions(shared_ptr<UpgradeFileSystemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeFileSystemResponse(doRPCRequest(make_shared<string>("UpgradeFileSystem"), make_shared<string>("2017-06-26"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeFileSystemResponse Alibabacloud_NAS20170626::Client::upgradeFileSystem(shared_ptr<UpgradeFileSystemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeFileSystemWithOptions(request, runtime);
}

