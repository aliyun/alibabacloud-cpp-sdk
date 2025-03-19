// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/resource_directory_master_20220419.hpp>
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

using namespace Alibabacloud_ResourceDirectoryMaster20220419;

Alibabacloud_ResourceDirectoryMaster20220419::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("resourcedirectorymaster"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ResourceDirectoryMaster20220419::Client::getEndpoint(shared_ptr<string> productId,
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

AcceptHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::acceptHandshakeWithOptions(shared_ptr<AcceptHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handshakeId)) {
    query->insert(pair<string, string>("HandshakeId", *request->handshakeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcceptHandshake"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AcceptHandshakeResponse(callApi(params, req, runtime));
  }
  else {
    return AcceptHandshakeResponse(execute(params, req, runtime));
  }
}

AcceptHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::acceptHandshake(shared_ptr<AcceptHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acceptHandshakeWithOptions(request, runtime);
}

AddMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::addMessageContactWithOptions(shared_ptr<AddMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->emailAddress)) {
    query->insert(pair<string, string>("EmailAddress", *request->emailAddress));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->messageTypes)) {
    query->insert(pair<string, vector<string>>("MessageTypes", *request->messageTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return AddMessageContactResponse(execute(params, req, runtime));
  }
}

AddMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::addMessageContact(shared_ptr<AddMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMessageContactWithOptions(request, runtime);
}

AssociateMembersResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::associateMembersWithOptions(shared_ptr<AssociateMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->members)) {
    query->insert(pair<string, vector<string>>("Members", *request->members));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssociateMembers"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssociateMembersResponse(callApi(params, req, runtime));
  }
  else {
    return AssociateMembersResponse(execute(params, req, runtime));
  }
}

AssociateMembersResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::associateMembers(shared_ptr<AssociateMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return associateMembersWithOptions(request, runtime);
}

AttachControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::attachControlPolicyWithOptions(shared_ptr<AttachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return AttachControlPolicyResponse(execute(params, req, runtime));
  }
}

AttachControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::attachControlPolicy(shared_ptr<AttachControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachControlPolicyWithOptions(request, runtime);
}

BindSecureMobilePhoneResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::bindSecureMobilePhoneWithOptions(shared_ptr<BindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secureMobilePhone)) {
    query->insert(pair<string, string>("SecureMobilePhone", *request->secureMobilePhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verificationCode)) {
    query->insert(pair<string, string>("VerificationCode", *request->verificationCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindSecureMobilePhone"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BindSecureMobilePhoneResponse(callApi(params, req, runtime));
  }
  else {
    return BindSecureMobilePhoneResponse(execute(params, req, runtime));
  }
}

BindSecureMobilePhoneResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::bindSecureMobilePhone(shared_ptr<BindSecureMobilePhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSecureMobilePhoneWithOptions(request, runtime);
}

CancelChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelChangeAccountEmailWithOptions(shared_ptr<CancelChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelChangeAccountEmail"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelChangeAccountEmailResponse(callApi(params, req, runtime));
  }
  else {
    return CancelChangeAccountEmailResponse(execute(params, req, runtime));
  }
}

CancelChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelChangeAccountEmail(shared_ptr<CancelChangeAccountEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelChangeAccountEmailWithOptions(request, runtime);
}

CancelHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelHandshakeWithOptions(shared_ptr<CancelHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handshakeId)) {
    query->insert(pair<string, string>("HandshakeId", *request->handshakeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelHandshake"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelHandshakeResponse(callApi(params, req, runtime));
  }
  else {
    return CancelHandshakeResponse(execute(params, req, runtime));
  }
}

CancelHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelHandshake(shared_ptr<CancelHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelHandshakeWithOptions(request, runtime);
}

CancelMessageContactUpdateResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelMessageContactUpdateWithOptions(shared_ptr<CancelMessageContactUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emailAddress)) {
    query->insert(pair<string, string>("EmailAddress", *request->emailAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelMessageContactUpdate"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelMessageContactUpdateResponse(callApi(params, req, runtime));
  }
  else {
    return CancelMessageContactUpdateResponse(execute(params, req, runtime));
  }
}

CancelMessageContactUpdateResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::cancelMessageContactUpdate(shared_ptr<CancelMessageContactUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelMessageContactUpdateWithOptions(request, runtime);
}

ChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::changeAccountEmailWithOptions(shared_ptr<ChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeAccountEmail"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeAccountEmailResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeAccountEmailResponse(execute(params, req, runtime));
  }
}

ChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::changeAccountEmail(shared_ptr<ChangeAccountEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAccountEmailWithOptions(request, runtime);
}

CheckAccountDeleteResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::checkAccountDeleteWithOptions(shared_ptr<CheckAccountDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAccountDelete"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckAccountDeleteResponse(callApi(params, req, runtime));
  }
  else {
    return CheckAccountDeleteResponse(execute(params, req, runtime));
  }
}

CheckAccountDeleteResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::checkAccountDelete(shared_ptr<CheckAccountDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAccountDeleteWithOptions(request, runtime);
}

CreateControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createControlPolicyWithOptions(shared_ptr<CreateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effectScope)) {
    query->insert(pair<string, string>("EffectScope", *request->effectScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyDocument)) {
    query->insert(pair<string, string>("PolicyDocument", *request->policyDocument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateControlPolicyRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateControlPolicyRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateControlPolicyResponse(execute(params, req, runtime));
  }
}

CreateControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createControlPolicy(shared_ptr<CreateControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createControlPolicyWithOptions(request, runtime);
}

CreateFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createFolderWithOptions(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderName)) {
    query->insert(pair<string, string>("FolderName", *request->folderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateFolderRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateFolderRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFolder"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateFolderResponse(callApi(params, req, runtime));
  }
  else {
    return CreateFolderResponse(execute(params, req, runtime));
  }
}

CreateFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createFolder(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolderWithOptions(request, runtime);
}

CreateResourceAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createResourceAccountWithOptions(shared_ptr<CreateResourceAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNamePrefix)) {
    query->insert(pair<string, string>("AccountNamePrefix", *request->accountNamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payerAccountId)) {
    query->insert(pair<string, string>("PayerAccountId", *request->payerAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resellAccountType)) {
    query->insert(pair<string, string>("ResellAccountType", *request->resellAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateResourceAccountRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateResourceAccountRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceAccountResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceAccountResponse(execute(params, req, runtime));
  }
}

CreateResourceAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::createResourceAccount(shared_ptr<CreateResourceAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceAccountWithOptions(request, runtime);
}

DeclineHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::declineHandshakeWithOptions(shared_ptr<DeclineHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handshakeId)) {
    query->insert(pair<string, string>("HandshakeId", *request->handshakeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeclineHandshake"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeclineHandshakeResponse(callApi(params, req, runtime));
  }
  else {
    return DeclineHandshakeResponse(execute(params, req, runtime));
  }
}

DeclineHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::declineHandshake(shared_ptr<DeclineHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return declineHandshakeWithOptions(request, runtime);
}

DeleteAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAccountShrinkRequest> request = make_shared<DeleteAccountShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->abandonableCheckId)) {
    request->abandonableCheckIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->abandonableCheckId, make_shared<string>("AbandonableCheckId"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->abandonableCheckIdShrink)) {
    query->insert(pair<string, string>("AbandonableCheckId", *request->abandonableCheckIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAccountResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAccountResponse(execute(params, req, runtime));
  }
}

DeleteAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteAccount(shared_ptr<DeleteAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccountWithOptions(request, runtime);
}

DeleteControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteControlPolicyWithOptions(shared_ptr<DeleteControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteControlPolicyResponse(execute(params, req, runtime));
  }
}

DeleteControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteControlPolicy(shared_ptr<DeleteControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteControlPolicyWithOptions(request, runtime);
}

DeleteFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteFolderWithOptions(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFolder"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteFolderResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteFolderResponse(execute(params, req, runtime));
  }
}

DeleteFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolderWithOptions(request, runtime);
}

DeleteMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteMessageContactWithOptions(shared_ptr<DeleteMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainContactInMembers)) {
    query->insert(pair<string, bool>("RetainContactInMembers", *request->retainContactInMembers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMessageContactResponse(execute(params, req, runtime));
  }
}

DeleteMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deleteMessageContact(shared_ptr<DeleteMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMessageContactWithOptions(request, runtime);
}

DeregisterDelegatedAdministratorResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deregisterDelegatedAdministratorWithOptions(shared_ptr<DeregisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePrincipal)) {
    query->insert(pair<string, string>("ServicePrincipal", *request->servicePrincipal));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeregisterDelegatedAdministrator"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeregisterDelegatedAdministratorResponse(callApi(params, req, runtime));
  }
  else {
    return DeregisterDelegatedAdministratorResponse(execute(params, req, runtime));
  }
}

DeregisterDelegatedAdministratorResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::deregisterDelegatedAdministrator(shared_ptr<DeregisterDelegatedAdministratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deregisterDelegatedAdministratorWithOptions(request, runtime);
}

DestroyResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::destroyResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DestroyResourceDirectory"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DestroyResourceDirectoryResponse(callApi(params, req, runtime));
  }
  else {
    return DestroyResourceDirectoryResponse(execute(params, req, runtime));
  }
}

DestroyResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::destroyResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyResourceDirectoryWithOptions(runtime);
}

DetachControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::detachControlPolicyWithOptions(shared_ptr<DetachControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DetachControlPolicyResponse(execute(params, req, runtime));
  }
}

DetachControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::detachControlPolicy(shared_ptr<DetachControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachControlPolicyWithOptions(request, runtime);
}

DisableControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::disableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DisableControlPolicyResponse(execute(params, req, runtime));
  }
}

DisableControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::disableControlPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableControlPolicyWithOptions(runtime);
}

DisassociateMembersResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::disassociateMembersWithOptions(shared_ptr<DisassociateMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->members)) {
    query->insert(pair<string, vector<string>>("Members", *request->members));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisassociateMembers"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisassociateMembersResponse(callApi(params, req, runtime));
  }
  else {
    return DisassociateMembersResponse(execute(params, req, runtime));
  }
}

DisassociateMembersResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::disassociateMembers(shared_ptr<DisassociateMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disassociateMembersWithOptions(request, runtime);
}

EnableControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::enableControlPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return EnableControlPolicyResponse(execute(params, req, runtime));
  }
}

EnableControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::enableControlPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableControlPolicyWithOptions(runtime);
}

EnableResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::enableResourceDirectoryWithOptions(shared_ptr<EnableResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enableMode)) {
    query->insert(pair<string, string>("EnableMode", *request->enableMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->MAName)) {
    query->insert(pair<string, string>("MAName", *request->MAName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->MASecureMobilePhone)) {
    query->insert(pair<string, string>("MASecureMobilePhone", *request->MASecureMobilePhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verificationCode)) {
    query->insert(pair<string, string>("VerificationCode", *request->verificationCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableResourceDirectory"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableResourceDirectoryResponse(callApi(params, req, runtime));
  }
  else {
    return EnableResourceDirectoryResponse(execute(params, req, runtime));
  }
}

EnableResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::enableResourceDirectory(shared_ptr<EnableResourceDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableResourceDirectoryWithOptions(request, runtime);
}

GetAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccountWithOptions(shared_ptr<GetAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeTags)) {
    query->insert(pair<string, bool>("IncludeTags", *request->includeTags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAccountResponse(callApi(params, req, runtime));
  }
  else {
    return GetAccountResponse(execute(params, req, runtime));
  }
}

GetAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccount(shared_ptr<GetAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountWithOptions(request, runtime);
}

GetAccountDeletionCheckResultResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccountDeletionCheckResultWithOptions(shared_ptr<GetAccountDeletionCheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountDeletionCheckResult"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAccountDeletionCheckResultResponse(callApi(params, req, runtime));
  }
  else {
    return GetAccountDeletionCheckResultResponse(execute(params, req, runtime));
  }
}

GetAccountDeletionCheckResultResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccountDeletionCheckResult(shared_ptr<GetAccountDeletionCheckResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountDeletionCheckResultWithOptions(request, runtime);
}

GetAccountDeletionStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccountDeletionStatusWithOptions(shared_ptr<GetAccountDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountDeletionStatus"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAccountDeletionStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetAccountDeletionStatusResponse(execute(params, req, runtime));
  }
}

GetAccountDeletionStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getAccountDeletionStatus(shared_ptr<GetAccountDeletionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountDeletionStatusWithOptions(request, runtime);
}

GetControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getControlPolicyWithOptions(shared_ptr<GetControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return GetControlPolicyResponse(execute(params, req, runtime));
  }
}

GetControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getControlPolicy(shared_ptr<GetControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getControlPolicyWithOptions(request, runtime);
}

GetControlPolicyEnablementStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getControlPolicyEnablementStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetControlPolicyEnablementStatus"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetControlPolicyEnablementStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetControlPolicyEnablementStatusResponse(execute(params, req, runtime));
  }
}

GetControlPolicyEnablementStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getControlPolicyEnablementStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getControlPolicyEnablementStatusWithOptions(runtime);
}

GetFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getFolderWithOptions(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFolder"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetFolderResponse(callApi(params, req, runtime));
  }
  else {
    return GetFolderResponse(execute(params, req, runtime));
  }
}

GetFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getFolder(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolderWithOptions(request, runtime);
}

GetHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getHandshakeWithOptions(shared_ptr<GetHandshakeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handshakeId)) {
    query->insert(pair<string, string>("HandshakeId", *request->handshakeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHandshake"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHandshakeResponse(callApi(params, req, runtime));
  }
  else {
    return GetHandshakeResponse(execute(params, req, runtime));
  }
}

GetHandshakeResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getHandshake(shared_ptr<GetHandshakeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHandshakeWithOptions(request, runtime);
}

GetMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getMessageContactWithOptions(shared_ptr<GetMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return GetMessageContactResponse(execute(params, req, runtime));
  }
}

GetMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getMessageContact(shared_ptr<GetMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageContactWithOptions(request, runtime);
}

GetMessageContactDeletionStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getMessageContactDeletionStatusWithOptions(shared_ptr<GetMessageContactDeletionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageContactDeletionStatus"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMessageContactDeletionStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetMessageContactDeletionStatusResponse(execute(params, req, runtime));
  }
}

GetMessageContactDeletionStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getMessageContactDeletionStatus(shared_ptr<GetMessageContactDeletionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageContactDeletionStatusWithOptions(request, runtime);
}

GetPayerForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getPayerForAccountWithOptions(shared_ptr<GetPayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPayerForAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPayerForAccountResponse(callApi(params, req, runtime));
  }
  else {
    return GetPayerForAccountResponse(execute(params, req, runtime));
  }
}

GetPayerForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getPayerForAccount(shared_ptr<GetPayerForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPayerForAccountWithOptions(request, runtime);
}

GetResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getResourceDirectoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceDirectory"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceDirectoryResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceDirectoryResponse(execute(params, req, runtime));
  }
}

GetResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::getResourceDirectory() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceDirectoryWithOptions(runtime);
}

InviteAccountToResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::inviteAccountToResourceDirectoryWithOptions(shared_ptr<InviteAccountToResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InviteAccountToResourceDirectoryRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<InviteAccountToResourceDirectoryRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetEntity)) {
    query->insert(pair<string, string>("TargetEntity", *request->targetEntity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InviteAccountToResourceDirectory"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InviteAccountToResourceDirectoryResponse(callApi(params, req, runtime));
  }
  else {
    return InviteAccountToResourceDirectoryResponse(execute(params, req, runtime));
  }
}

InviteAccountToResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::inviteAccountToResourceDirectory(shared_ptr<InviteAccountToResourceDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inviteAccountToResourceDirectoryWithOptions(request, runtime);
}

ListAccountsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeTags)) {
    query->insert(pair<string, bool>("IncludeTags", *request->includeTags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeyword)) {
    query->insert(pair<string, string>("QueryKeyword", *request->queryKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAccountsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListAccountsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccounts"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAccountsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAccountsResponse(execute(params, req, runtime));
  }
}

ListAccountsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAccounts(shared_ptr<ListAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountsWithOptions(request, runtime);
}

ListAccountsForParentResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAccountsForParentWithOptions(shared_ptr<ListAccountsForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeTags)) {
    query->insert(pair<string, bool>("IncludeTags", *request->includeTags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeyword)) {
    query->insert(pair<string, string>("QueryKeyword", *request->queryKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAccountsForParentRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListAccountsForParentRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccountsForParent"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAccountsForParentResponse(callApi(params, req, runtime));
  }
  else {
    return ListAccountsForParentResponse(execute(params, req, runtime));
  }
}

ListAccountsForParentResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAccountsForParent(shared_ptr<ListAccountsForParentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccountsForParentWithOptions(request, runtime);
}

ListAncestorsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAncestorsWithOptions(shared_ptr<ListAncestorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->childId)) {
    query->insert(pair<string, string>("ChildId", *request->childId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAncestors"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAncestorsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAncestorsResponse(execute(params, req, runtime));
  }
}

ListAncestorsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listAncestors(shared_ptr<ListAncestorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAncestorsWithOptions(request, runtime);
}

ListControlPoliciesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listControlPoliciesWithOptions(shared_ptr<ListControlPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyType)) {
    query->insert(pair<string, string>("PolicyType", *request->policyType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListControlPoliciesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListControlPoliciesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListControlPolicies"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListControlPoliciesResponse(callApi(params, req, runtime));
  }
  else {
    return ListControlPoliciesResponse(execute(params, req, runtime));
  }
}

ListControlPoliciesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listControlPolicies(shared_ptr<ListControlPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listControlPoliciesWithOptions(request, runtime);
}

ListControlPolicyAttachmentsForTargetResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listControlPolicyAttachmentsForTargetWithOptions(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListControlPolicyAttachmentsForTarget"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListControlPolicyAttachmentsForTargetResponse(callApi(params, req, runtime));
  }
  else {
    return ListControlPolicyAttachmentsForTargetResponse(execute(params, req, runtime));
  }
}

ListControlPolicyAttachmentsForTargetResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listControlPolicyAttachmentsForTarget(shared_ptr<ListControlPolicyAttachmentsForTargetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listControlPolicyAttachmentsForTargetWithOptions(request, runtime);
}

ListDelegatedAdministratorsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listDelegatedAdministratorsWithOptions(shared_ptr<ListDelegatedAdministratorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePrincipal)) {
    query->insert(pair<string, string>("ServicePrincipal", *request->servicePrincipal));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDelegatedAdministrators"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDelegatedAdministratorsResponse(callApi(params, req, runtime));
  }
  else {
    return ListDelegatedAdministratorsResponse(execute(params, req, runtime));
  }
}

ListDelegatedAdministratorsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listDelegatedAdministrators(shared_ptr<ListDelegatedAdministratorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDelegatedAdministratorsWithOptions(request, runtime);
}

ListDelegatedServicesForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listDelegatedServicesForAccountWithOptions(shared_ptr<ListDelegatedServicesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDelegatedServicesForAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDelegatedServicesForAccountResponse(callApi(params, req, runtime));
  }
  else {
    return ListDelegatedServicesForAccountResponse(execute(params, req, runtime));
  }
}

ListDelegatedServicesForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listDelegatedServicesForAccount(shared_ptr<ListDelegatedServicesForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDelegatedServicesForAccountWithOptions(request, runtime);
}

ListFoldersForParentResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listFoldersForParentWithOptions(shared_ptr<ListFoldersForParentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentFolderId)) {
    query->insert(pair<string, string>("ParentFolderId", *request->parentFolderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryKeyword)) {
    query->insert(pair<string, string>("QueryKeyword", *request->queryKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListFoldersForParentRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListFoldersForParentRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFoldersForParent"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListFoldersForParentResponse(callApi(params, req, runtime));
  }
  else {
    return ListFoldersForParentResponse(execute(params, req, runtime));
  }
}

ListFoldersForParentResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listFoldersForParent(shared_ptr<ListFoldersForParentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFoldersForParentWithOptions(request, runtime);
}

ListHandshakesForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listHandshakesForAccountWithOptions(shared_ptr<ListHandshakesForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListHandshakesForAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHandshakesForAccountResponse(callApi(params, req, runtime));
  }
  else {
    return ListHandshakesForAccountResponse(execute(params, req, runtime));
  }
}

ListHandshakesForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listHandshakesForAccount(shared_ptr<ListHandshakesForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHandshakesForAccountWithOptions(request, runtime);
}

ListHandshakesForResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listHandshakesForResourceDirectoryWithOptions(shared_ptr<ListHandshakesForResourceDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListHandshakesForResourceDirectory"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHandshakesForResourceDirectoryResponse(callApi(params, req, runtime));
  }
  else {
    return ListHandshakesForResourceDirectoryResponse(execute(params, req, runtime));
  }
}

ListHandshakesForResourceDirectoryResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listHandshakesForResourceDirectory(shared_ptr<ListHandshakesForResourceDirectoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHandshakesForResourceDirectoryWithOptions(request, runtime);
}

ListMessageContactVerificationsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listMessageContactVerificationsWithOptions(shared_ptr<ListMessageContactVerificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
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
    {"action", boost::any(string("ListMessageContactVerifications"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMessageContactVerificationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMessageContactVerificationsResponse(execute(params, req, runtime));
  }
}

ListMessageContactVerificationsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listMessageContactVerifications(shared_ptr<ListMessageContactVerificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageContactVerificationsWithOptions(request, runtime);
}

ListMessageContactsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listMessageContactsWithOptions(shared_ptr<ListMessageContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->member)) {
    query->insert(pair<string, string>("Member", *request->member));
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
    {"action", boost::any(string("ListMessageContacts"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMessageContactsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMessageContactsResponse(execute(params, req, runtime));
  }
}

ListMessageContactsResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listMessageContacts(shared_ptr<ListMessageContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageContactsWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyFilter)) {
    query->insert(pair<string, string>("KeyFilter", *request->keyFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagKeysResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagKeysResponse(execute(params, req, runtime));
  }
}

ListTagKeysResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valueFilter)) {
    query->insert(pair<string, string>("ValueFilter", *request->valueFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagValuesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagValuesResponse(execute(params, req, runtime));
  }
}

ListTagValuesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListTargetAttachmentsForControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTargetAttachmentsForControlPolicyWithOptions(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTargetAttachmentsForControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTargetAttachmentsForControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return ListTargetAttachmentsForControlPolicyResponse(execute(params, req, runtime));
  }
}

ListTargetAttachmentsForControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTargetAttachmentsForControlPolicy(shared_ptr<ListTargetAttachmentsForControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTargetAttachmentsForControlPolicyWithOptions(request, runtime);
}

ListTrustedServiceStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTrustedServiceStatusWithOptions(shared_ptr<ListTrustedServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminAccountId)) {
    query->insert(pair<string, string>("AdminAccountId", *request->adminAccountId));
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
    {"action", boost::any(string("ListTrustedServiceStatus"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTrustedServiceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ListTrustedServiceStatusResponse(execute(params, req, runtime));
  }
}

ListTrustedServiceStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::listTrustedServiceStatus(shared_ptr<ListTrustedServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrustedServiceStatusWithOptions(request, runtime);
}

MoveAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::moveAccountWithOptions(shared_ptr<MoveAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationFolderId)) {
    query->insert(pair<string, string>("DestinationFolderId", *request->destinationFolderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return MoveAccountResponse(callApi(params, req, runtime));
  }
  else {
    return MoveAccountResponse(execute(params, req, runtime));
  }
}

MoveAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::moveAccount(shared_ptr<MoveAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveAccountWithOptions(request, runtime);
}

PrecheckForConsolidatedBillingAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::precheckForConsolidatedBillingAccountWithOptions(shared_ptr<PrecheckForConsolidatedBillingAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billingAccountId)) {
    query->insert(pair<string, string>("BillingAccountId", *request->billingAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PrecheckForConsolidatedBillingAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PrecheckForConsolidatedBillingAccountResponse(callApi(params, req, runtime));
  }
  else {
    return PrecheckForConsolidatedBillingAccountResponse(execute(params, req, runtime));
  }
}

PrecheckForConsolidatedBillingAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::precheckForConsolidatedBillingAccount(shared_ptr<PrecheckForConsolidatedBillingAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return precheckForConsolidatedBillingAccountWithOptions(request, runtime);
}

RegisterDelegatedAdministratorResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::registerDelegatedAdministratorWithOptions(shared_ptr<RegisterDelegatedAdministratorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->servicePrincipal)) {
    query->insert(pair<string, string>("ServicePrincipal", *request->servicePrincipal));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterDelegatedAdministrator"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RegisterDelegatedAdministratorResponse(callApi(params, req, runtime));
  }
  else {
    return RegisterDelegatedAdministratorResponse(execute(params, req, runtime));
  }
}

RegisterDelegatedAdministratorResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::registerDelegatedAdministrator(shared_ptr<RegisterDelegatedAdministratorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDelegatedAdministratorWithOptions(request, runtime);
}

RemoveCloudAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::removeCloudAccountWithOptions(shared_ptr<RemoveCloudAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveCloudAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RemoveCloudAccountResponse(callApi(params, req, runtime));
  }
  else {
    return RemoveCloudAccountResponse(execute(params, req, runtime));
  }
}

RemoveCloudAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::removeCloudAccount(shared_ptr<RemoveCloudAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeCloudAccountWithOptions(request, runtime);
}

RetryChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::retryChangeAccountEmailWithOptions(shared_ptr<RetryChangeAccountEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryChangeAccountEmail"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RetryChangeAccountEmailResponse(callApi(params, req, runtime));
  }
  else {
    return RetryChangeAccountEmailResponse(execute(params, req, runtime));
  }
}

RetryChangeAccountEmailResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::retryChangeAccountEmail(shared_ptr<RetryChangeAccountEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryChangeAccountEmailWithOptions(request, runtime);
}

SendEmailVerificationForMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendEmailVerificationForMessageContactWithOptions(shared_ptr<SendEmailVerificationForMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emailAddress)) {
    query->insert(pair<string, string>("EmailAddress", *request->emailAddress));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendEmailVerificationForMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendEmailVerificationForMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return SendEmailVerificationForMessageContactResponse(execute(params, req, runtime));
  }
}

SendEmailVerificationForMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendEmailVerificationForMessageContact(shared_ptr<SendEmailVerificationForMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendEmailVerificationForMessageContactWithOptions(request, runtime);
}

SendPhoneVerificationForMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendPhoneVerificationForMessageContactWithOptions(shared_ptr<SendPhoneVerificationForMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendPhoneVerificationForMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendPhoneVerificationForMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return SendPhoneVerificationForMessageContactResponse(execute(params, req, runtime));
  }
}

SendPhoneVerificationForMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendPhoneVerificationForMessageContact(shared_ptr<SendPhoneVerificationForMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendPhoneVerificationForMessageContactWithOptions(request, runtime);
}

SendVerificationCodeForBindSecureMobilePhoneResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendVerificationCodeForBindSecureMobilePhoneWithOptions(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secureMobilePhone)) {
    query->insert(pair<string, string>("SecureMobilePhone", *request->secureMobilePhone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendVerificationCodeForBindSecureMobilePhone"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendVerificationCodeForBindSecureMobilePhoneResponse(callApi(params, req, runtime));
  }
  else {
    return SendVerificationCodeForBindSecureMobilePhoneResponse(execute(params, req, runtime));
  }
}

SendVerificationCodeForBindSecureMobilePhoneResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendVerificationCodeForBindSecureMobilePhone(shared_ptr<SendVerificationCodeForBindSecureMobilePhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVerificationCodeForBindSecureMobilePhoneWithOptions(request, runtime);
}

SendVerificationCodeForEnableRDResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendVerificationCodeForEnableRDWithOptions(shared_ptr<SendVerificationCodeForEnableRDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secureMobilePhone)) {
    query->insert(pair<string, string>("SecureMobilePhone", *request->secureMobilePhone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendVerificationCodeForEnableRD"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendVerificationCodeForEnableRDResponse(callApi(params, req, runtime));
  }
  else {
    return SendVerificationCodeForEnableRDResponse(execute(params, req, runtime));
  }
}

SendVerificationCodeForEnableRDResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::sendVerificationCodeForEnableRD(shared_ptr<SendVerificationCodeForEnableRDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendVerificationCodeForEnableRDWithOptions(request, runtime);
}

SetMemberDeletionPermissionResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::setMemberDeletionPermissionWithOptions(shared_ptr<SetMemberDeletionPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetMemberDeletionPermission"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetMemberDeletionPermissionResponse(callApi(params, req, runtime));
  }
  else {
    return SetMemberDeletionPermissionResponse(execute(params, req, runtime));
  }
}

SetMemberDeletionPermissionResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::setMemberDeletionPermission(shared_ptr<SetMemberDeletionPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMemberDeletionPermissionWithOptions(request, runtime);
}

SetMemberDisplayNameSyncStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::setMemberDisplayNameSyncStatusWithOptions(shared_ptr<SetMemberDisplayNameSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetMemberDisplayNameSyncStatus"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetMemberDisplayNameSyncStatusResponse(callApi(params, req, runtime));
  }
  else {
    return SetMemberDisplayNameSyncStatusResponse(execute(params, req, runtime));
  }
}

SetMemberDisplayNameSyncStatusResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::setMemberDisplayNameSyncStatus(shared_ptr<SetMemberDisplayNameSyncStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMemberDisplayNameSyncStatusWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagResourcesResponse(execute(params, req, runtime));
  }
}

TagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagResourcesResponse(execute(params, req, runtime));
  }
}

UntagResourcesResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateAccountWithOptions(shared_ptr<UpdateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAccountType)) {
    query->insert(pair<string, string>("NewAccountType", *request->newAccountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDisplayName)) {
    query->insert(pair<string, string>("NewDisplayName", *request->newDisplayName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAccountResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAccountResponse(execute(params, req, runtime));
  }
}

UpdateAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateAccount(shared_ptr<UpdateAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccountWithOptions(request, runtime);
}

UpdateControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateControlPolicyWithOptions(shared_ptr<UpdateControlPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newDescription)) {
    query->insert(pair<string, string>("NewDescription", *request->newDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPolicyDocument)) {
    query->insert(pair<string, string>("NewPolicyDocument", *request->newPolicyDocument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPolicyName)) {
    query->insert(pair<string, string>("NewPolicyName", *request->newPolicyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateControlPolicy"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateControlPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateControlPolicyResponse(execute(params, req, runtime));
  }
}

UpdateControlPolicyResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateControlPolicy(shared_ptr<UpdateControlPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateControlPolicyWithOptions(request, runtime);
}

UpdateFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateFolderWithOptions(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->folderId)) {
    query->insert(pair<string, string>("FolderId", *request->folderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newFolderName)) {
    query->insert(pair<string, string>("NewFolderName", *request->newFolderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFolder"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateFolderResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateFolderResponse(execute(params, req, runtime));
  }
}

UpdateFolderResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateFolder(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolderWithOptions(request, runtime);
}

UpdateMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateMessageContactWithOptions(shared_ptr<UpdateMessageContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->emailAddress)) {
    query->insert(pair<string, string>("EmailAddress", *request->emailAddress));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->messageTypes)) {
    query->insert(pair<string, vector<string>>("MessageTypes", *request->messageTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMessageContact"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMessageContactResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMessageContactResponse(execute(params, req, runtime));
  }
}

UpdateMessageContactResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updateMessageContact(shared_ptr<UpdateMessageContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMessageContactWithOptions(request, runtime);
}

UpdatePayerForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updatePayerForAccountWithOptions(shared_ptr<UpdatePayerForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payerAccountId)) {
    query->insert(pair<string, string>("PayerAccountId", *request->payerAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePayerForAccount"))},
    {"version", boost::any(string("2022-04-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePayerForAccountResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePayerForAccountResponse(execute(params, req, runtime));
  }
}

UpdatePayerForAccountResponse Alibabacloud_ResourceDirectoryMaster20220419::Client::updatePayerForAccount(shared_ptr<UpdatePayerForAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePayerForAccountWithOptions(request, runtime);
}

