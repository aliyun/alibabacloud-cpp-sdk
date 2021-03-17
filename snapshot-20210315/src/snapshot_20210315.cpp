// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/snapshot_20210315.hpp>
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

using namespace Alibabacloud_Snapshot20210315;

Alibabacloud_Snapshot20210315::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("snapshot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Snapshot20210315::Client::getEndpoint(shared_ptr<string> productId,
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

GetSnapshotInfoResponse Alibabacloud_Snapshot20210315::Client::getSnapshotInfo(shared_ptr<GetSnapshotInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSnapshotInfoWithOptions(request, headers, runtime);
}

GetSnapshotInfoResponse Alibabacloud_Snapshot20210315::Client::getSnapshotInfoWithOptions(shared_ptr<GetSnapshotInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    (*query)["SnapshotId"] = *request->snapshotId;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showDetail)) {
    (*query)["ShowDetail"] = *request->showDetail;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return GetSnapshotInfoResponse(doROARequest(make_shared<string>("GetSnapshotInfo"), make_shared<string>("2021-03-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/snapshots/info")), make_shared<string>("json"), req, runtime));
}

GetSnapshotBlockResponse Alibabacloud_Snapshot20210315::Client::getSnapshotBlock(shared_ptr<GetSnapshotBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSnapshotBlockWithOptions(request, headers, runtime);
}

GetSnapshotBlockResponse Alibabacloud_Snapshot20210315::Client::getSnapshotBlockWithOptions(shared_ptr<GetSnapshotBlockRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->blockIndex)) {
    (*query)["BlockIndex"] = *request->blockIndex;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockToken)) {
    (*query)["BlockToken"] = *request->blockToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    (*query)["SnapshotId"] = *request->snapshotId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<GetSnapshotBlockResponse> res = make_shared<GetSnapshotBlockResponse>();
  shared_ptr<map<string, boost::any>> tmp = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<map<string, boost::any>>(doROARequest(make_shared<string>("GetSnapshotBlock"), make_shared<string>("2021-03-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/snapshots/block")), make_shared<string>("binary"), req, runtime))));
  if (!Darabonba_Util::Client::isUnset<boost::any>((*tmp)["body"])) {
    shared_ptr<Darabonba::Stream> respBody = Darabonba_Util::Client::assertAsReadable(make_shared<boost::any>((*tmp)["body"]));
    res->body = respBody;
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>((*tmp)["headers"])) {
    shared_ptr<map<string, boost::any>> respHeaders = make_shared<map<string, boost::any>>(Darabonba_Util::Client::assertAsMap(make_shared<boost::any>((*tmp)["headers"])));
    res->headers = make_shared<map<string, string>>(Darabonba_Util::Client::stringifyMapValue(respHeaders));
  }
  return *res;
}

ListSnapshotBlocksResponse Alibabacloud_Snapshot20210315::Client::listSnapshotBlocks(shared_ptr<ListSnapshotBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSnapshotBlocksWithOptions(request, headers, runtime);
}

ListSnapshotBlocksResponse Alibabacloud_Snapshot20210315::Client::listSnapshotBlocksWithOptions(shared_ptr<ListSnapshotBlocksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["NextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["MaxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    (*query)["SnapshotId"] = *request->snapshotId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startingBlockIndex)) {
    (*query)["StartingBlockIndex"] = *request->startingBlockIndex;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListSnapshotBlocksResponse(doROARequest(make_shared<string>("ListSnapshotBlocks"), make_shared<string>("2021-03-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/snapshots/listblocks")), make_shared<string>("json"), req, runtime));
}

ListChangedBlocksResponse Alibabacloud_Snapshot20210315::Client::listChangedBlocks(shared_ptr<ListChangedBlocksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChangedBlocksWithOptions(request, headers, runtime);
}

ListChangedBlocksResponse Alibabacloud_Snapshot20210315::Client::listChangedBlocksWithOptions(shared_ptr<ListChangedBlocksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["NextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    (*query)["MaxResults"] = *request->maxResults;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    (*query)["ClientToken"] = *request->clientToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firstSnapshotId)) {
    (*query)["FirstSnapshotId"] = *request->firstSnapshotId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secondSnapshotId)) {
    (*query)["SecondSnapshotId"] = *request->secondSnapshotId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startingBlockIndex)) {
    (*query)["StartingBlockIndex"] = *request->startingBlockIndex;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ListChangedBlocksResponse(doROARequest(make_shared<string>("ListChangedBlocks"), make_shared<string>("2021-03-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/snapshots/changedblocks")), make_shared<string>("json"), req, runtime));
}

