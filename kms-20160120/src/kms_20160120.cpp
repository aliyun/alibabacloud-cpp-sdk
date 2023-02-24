// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/kms_20160120.hpp>
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

using namespace Alibabacloud_Kms20160120;

Alibabacloud_Kms20160120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("kms"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Kms20160120::Client::getEndpoint(shared_ptr<string> productId,
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

AsymmetricDecryptResponse Alibabacloud_Kms20160120::Client::asymmetricDecryptWithOptions(shared_ptr<AsymmetricDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AsymmetricDecrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AsymmetricDecryptResponse(callApi(params, req, runtime));
}

AsymmetricDecryptResponse Alibabacloud_Kms20160120::Client::asymmetricDecrypt(shared_ptr<AsymmetricDecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricDecryptWithOptions(request, runtime);
}

AsymmetricEncryptResponse Alibabacloud_Kms20160120::Client::asymmetricEncryptWithOptions(shared_ptr<AsymmetricEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plaintext)) {
    query->insert(pair<string, string>("Plaintext", *request->plaintext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AsymmetricEncrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AsymmetricEncryptResponse(callApi(params, req, runtime));
}

AsymmetricEncryptResponse Alibabacloud_Kms20160120::Client::asymmetricEncrypt(shared_ptr<AsymmetricEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricEncryptWithOptions(request, runtime);
}

AsymmetricSignResponse Alibabacloud_Kms20160120::Client::asymmetricSignWithOptions(shared_ptr<AsymmetricSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AsymmetricSign"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AsymmetricSignResponse(callApi(params, req, runtime));
}

AsymmetricSignResponse Alibabacloud_Kms20160120::Client::asymmetricSign(shared_ptr<AsymmetricSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricSignWithOptions(request, runtime);
}

AsymmetricVerifyResponse Alibabacloud_Kms20160120::Client::asymmetricVerifyWithOptions(shared_ptr<AsymmetricVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AsymmetricVerify"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AsymmetricVerifyResponse(callApi(params, req, runtime));
}

AsymmetricVerifyResponse Alibabacloud_Kms20160120::Client::asymmetricVerify(shared_ptr<AsymmetricVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricVerifyWithOptions(request, runtime);
}

CancelKeyDeletionResponse Alibabacloud_Kms20160120::Client::cancelKeyDeletionWithOptions(shared_ptr<CancelKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelKeyDeletion"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelKeyDeletionResponse(callApi(params, req, runtime));
}

CancelKeyDeletionResponse Alibabacloud_Kms20160120::Client::cancelKeyDeletion(shared_ptr<CancelKeyDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelKeyDeletionWithOptions(request, runtime);
}

CertificatePrivateKeyDecryptResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeyDecryptWithOptions(shared_ptr<CertificatePrivateKeyDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertificatePrivateKeyDecrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertificatePrivateKeyDecryptResponse(callApi(params, req, runtime));
}

CertificatePrivateKeyDecryptResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeyDecrypt(shared_ptr<CertificatePrivateKeyDecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePrivateKeyDecryptWithOptions(request, runtime);
}

CertificatePrivateKeySignResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeySignWithOptions(shared_ptr<CertificatePrivateKeySignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertificatePrivateKeySign"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertificatePrivateKeySignResponse(callApi(params, req, runtime));
}

CertificatePrivateKeySignResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeySign(shared_ptr<CertificatePrivateKeySignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePrivateKeySignWithOptions(request, runtime);
}

CertificatePublicKeyEncryptResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyEncryptWithOptions(shared_ptr<CertificatePublicKeyEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plaintext)) {
    query->insert(pair<string, string>("Plaintext", *request->plaintext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertificatePublicKeyEncrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertificatePublicKeyEncryptResponse(callApi(params, req, runtime));
}

CertificatePublicKeyEncryptResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyEncrypt(shared_ptr<CertificatePublicKeyEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePublicKeyEncryptWithOptions(request, runtime);
}

CertificatePublicKeyVerifyResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyVerifyWithOptions(shared_ptr<CertificatePublicKeyVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithm)) {
    query->insert(pair<string, string>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageType)) {
    query->insert(pair<string, string>("MessageType", *request->messageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureValue)) {
    query->insert(pair<string, string>("SignatureValue", *request->signatureValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CertificatePublicKeyVerify"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CertificatePublicKeyVerifyResponse(callApi(params, req, runtime));
}

CertificatePublicKeyVerifyResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyVerify(shared_ptr<CertificatePublicKeyVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePublicKeyVerifyWithOptions(request, runtime);
}

CreateAliasResponse Alibabacloud_Kms20160120::Client::createAliasWithOptions(shared_ptr<CreateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlias"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAliasResponse(callApi(params, req, runtime));
}

CreateAliasResponse Alibabacloud_Kms20160120::Client::createAlias(shared_ptr<CreateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAliasWithOptions(request, runtime);
}

CreateCertificateResponse Alibabacloud_Kms20160120::Client::createCertificateWithOptions(shared_ptr<CreateCertificateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCertificateShrinkRequest> request = make_shared<CreateCertificateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subjectAlternativeNames)) {
    request->subjectAlternativeNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subjectAlternativeNames, make_shared<string>("SubjectAlternativeNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->exportablePrivateKey)) {
    query->insert(pair<string, bool>("ExportablePrivateKey", *request->exportablePrivateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keySpec)) {
    query->insert(pair<string, string>("KeySpec", *request->keySpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subjectAlternativeNamesShrink)) {
    query->insert(pair<string, string>("SubjectAlternativeNames", *request->subjectAlternativeNamesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCertificate"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCertificateResponse(callApi(params, req, runtime));
}

CreateCertificateResponse Alibabacloud_Kms20160120::Client::createCertificate(shared_ptr<CreateCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithOptions(request, runtime);
}

CreateKeyResponse Alibabacloud_Kms20160120::Client::createKeyWithOptions(shared_ptr<CreateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DKMSInstanceId)) {
    query->insert(pair<string, string>("DKMSInstanceId", *request->DKMSInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutomaticRotation)) {
    query->insert(pair<string, bool>("EnableAutomaticRotation", *request->enableAutomaticRotation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keySpec)) {
    query->insert(pair<string, string>("KeySpec", *request->keySpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyUsage)) {
    query->insert(pair<string, string>("KeyUsage", *request->keyUsage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->origin)) {
    query->insert(pair<string, string>("Origin", *request->origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protectionLevel)) {
    query->insert(pair<string, string>("ProtectionLevel", *request->protectionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rotationInterval)) {
    query->insert(pair<string, string>("RotationInterval", *request->rotationInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKeyResponse(callApi(params, req, runtime));
}

CreateKeyResponse Alibabacloud_Kms20160120::Client::createKey(shared_ptr<CreateKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyWithOptions(request, runtime);
}

CreateKeyVersionResponse Alibabacloud_Kms20160120::Client::createKeyVersionWithOptions(shared_ptr<CreateKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKeyVersion"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateKeyVersionResponse(callApi(params, req, runtime));
}

CreateKeyVersionResponse Alibabacloud_Kms20160120::Client::createKeyVersion(shared_ptr<CreateKeyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyVersionWithOptions(request, runtime);
}

CreateSecretResponse Alibabacloud_Kms20160120::Client::createSecretWithOptions(shared_ptr<CreateSecretRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSecretShrinkRequest> request = make_shared<CreateSecretShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extendedConfig)) {
    request->extendedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendedConfig, make_shared<string>("ExtendedConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DKMSInstanceId)) {
    query->insert(pair<string, string>("DKMSInstanceId", *request->DKMSInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutomaticRotation)) {
    query->insert(pair<string, bool>("EnableAutomaticRotation", *request->enableAutomaticRotation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionKeyId)) {
    query->insert(pair<string, string>("EncryptionKeyId", *request->encryptionKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedConfigShrink)) {
    query->insert(pair<string, string>("ExtendedConfig", *request->extendedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rotationInterval)) {
    query->insert(pair<string, string>("RotationInterval", *request->rotationInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretData)) {
    query->insert(pair<string, string>("SecretData", *request->secretData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretDataType)) {
    query->insert(pair<string, string>("SecretDataType", *request->secretDataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretType)) {
    query->insert(pair<string, string>("SecretType", *request->secretType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecretResponse(callApi(params, req, runtime));
}

CreateSecretResponse Alibabacloud_Kms20160120::Client::createSecret(shared_ptr<CreateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecretWithOptions(request, runtime);
}

DecryptResponse Alibabacloud_Kms20160120::Client::decryptWithOptions(shared_ptr<DecryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DecryptShrinkRequest> request = make_shared<DecryptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Decrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DecryptResponse(callApi(params, req, runtime));
}

DecryptResponse Alibabacloud_Kms20160120::Client::decrypt(shared_ptr<DecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptWithOptions(request, runtime);
}

DeleteAliasResponse Alibabacloud_Kms20160120::Client::deleteAliasWithOptions(shared_ptr<DeleteAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlias"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAliasResponse(callApi(params, req, runtime));
}

DeleteAliasResponse Alibabacloud_Kms20160120::Client::deleteAlias(shared_ptr<DeleteAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAliasWithOptions(request, runtime);
}

DeleteCertificateResponse Alibabacloud_Kms20160120::Client::deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertificate"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCertificateResponse(callApi(params, req, runtime));
}

DeleteCertificateResponse Alibabacloud_Kms20160120::Client::deleteCertificate(shared_ptr<DeleteCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateWithOptions(request, runtime);
}

DeleteKeyMaterialResponse Alibabacloud_Kms20160120::Client::deleteKeyMaterialWithOptions(shared_ptr<DeleteKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKeyMaterial"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteKeyMaterialResponse(callApi(params, req, runtime));
}

DeleteKeyMaterialResponse Alibabacloud_Kms20160120::Client::deleteKeyMaterial(shared_ptr<DeleteKeyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKeyMaterialWithOptions(request, runtime);
}

DeleteSecretResponse Alibabacloud_Kms20160120::Client::deleteSecretWithOptions(shared_ptr<DeleteSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->forceDeleteWithoutRecovery)) {
    query->insert(pair<string, string>("ForceDeleteWithoutRecovery", *request->forceDeleteWithoutRecovery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoveryWindowInDays)) {
    query->insert(pair<string, string>("RecoveryWindowInDays", *request->recoveryWindowInDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecretResponse(callApi(params, req, runtime));
}

DeleteSecretResponse Alibabacloud_Kms20160120::Client::deleteSecret(shared_ptr<DeleteSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecretWithOptions(request, runtime);
}

DescribeAccountKmsStatusResponse Alibabacloud_Kms20160120::Client::describeAccountKmsStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountKmsStatus"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountKmsStatusResponse(callApi(params, req, runtime));
}

DescribeAccountKmsStatusResponse Alibabacloud_Kms20160120::Client::describeAccountKmsStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountKmsStatusWithOptions(runtime);
}

DescribeCertificateResponse Alibabacloud_Kms20160120::Client::describeCertificateWithOptions(shared_ptr<DescribeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCertificate"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCertificateResponse(callApi(params, req, runtime));
}

DescribeCertificateResponse Alibabacloud_Kms20160120::Client::describeCertificate(shared_ptr<DescribeCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificateWithOptions(request, runtime);
}

DescribeKeyResponse Alibabacloud_Kms20160120::Client::describeKeyWithOptions(shared_ptr<DescribeKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKeyResponse(callApi(params, req, runtime));
}

DescribeKeyResponse Alibabacloud_Kms20160120::Client::describeKey(shared_ptr<DescribeKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyWithOptions(request, runtime);
}

DescribeKeyVersionResponse Alibabacloud_Kms20160120::Client::describeKeyVersionWithOptions(shared_ptr<DescribeKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKeyVersion"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeKeyVersionResponse(callApi(params, req, runtime));
}

DescribeKeyVersionResponse Alibabacloud_Kms20160120::Client::describeKeyVersion(shared_ptr<DescribeKeyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyVersionWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Kms20160120::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Kms20160120::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeSecretResponse Alibabacloud_Kms20160120::Client::describeSecretWithOptions(shared_ptr<DescribeSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fetchTags)) {
    query->insert(pair<string, string>("FetchTags", *request->fetchTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecretResponse(callApi(params, req, runtime));
}

DescribeSecretResponse Alibabacloud_Kms20160120::Client::describeSecret(shared_ptr<DescribeSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecretWithOptions(request, runtime);
}

DisableKeyResponse Alibabacloud_Kms20160120::Client::disableKeyWithOptions(shared_ptr<DisableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableKeyResponse(callApi(params, req, runtime));
}

DisableKeyResponse Alibabacloud_Kms20160120::Client::disableKey(shared_ptr<DisableKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableKeyWithOptions(request, runtime);
}

EnableKeyResponse Alibabacloud_Kms20160120::Client::enableKeyWithOptions(shared_ptr<EnableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableKeyResponse(callApi(params, req, runtime));
}

EnableKeyResponse Alibabacloud_Kms20160120::Client::enableKey(shared_ptr<EnableKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableKeyWithOptions(request, runtime);
}

EncryptResponse Alibabacloud_Kms20160120::Client::encryptWithOptions(shared_ptr<EncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EncryptShrinkRequest> request = make_shared<EncryptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plaintext)) {
    query->insert(pair<string, string>("Plaintext", *request->plaintext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Encrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EncryptResponse(callApi(params, req, runtime));
}

EncryptResponse Alibabacloud_Kms20160120::Client::encrypt(shared_ptr<EncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptWithOptions(request, runtime);
}

ExportDataKeyResponse Alibabacloud_Kms20160120::Client::exportDataKeyWithOptions(shared_ptr<ExportDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExportDataKeyShrinkRequest> request = make_shared<ExportDataKeyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKeyBlob)) {
    query->insert(pair<string, string>("PublicKeyBlob", *request->publicKeyBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingAlgorithm)) {
    query->insert(pair<string, string>("WrappingAlgorithm", *request->wrappingAlgorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingKeySpec)) {
    query->insert(pair<string, string>("WrappingKeySpec", *request->wrappingKeySpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportDataKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportDataKeyResponse(callApi(params, req, runtime));
}

ExportDataKeyResponse Alibabacloud_Kms20160120::Client::exportDataKey(shared_ptr<ExportDataKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDataKeyWithOptions(request, runtime);
}

GenerateAndExportDataKeyResponse Alibabacloud_Kms20160120::Client::generateAndExportDataKeyWithOptions(shared_ptr<GenerateAndExportDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateAndExportDataKeyShrinkRequest> request = make_shared<GenerateAndExportDataKeyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keySpec)) {
    query->insert(pair<string, string>("KeySpec", *request->keySpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfBytes)) {
    query->insert(pair<string, long>("NumberOfBytes", *request->numberOfBytes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publicKeyBlob)) {
    query->insert(pair<string, string>("PublicKeyBlob", *request->publicKeyBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingAlgorithm)) {
    query->insert(pair<string, string>("WrappingAlgorithm", *request->wrappingAlgorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingKeySpec)) {
    query->insert(pair<string, string>("WrappingKeySpec", *request->wrappingKeySpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAndExportDataKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateAndExportDataKeyResponse(callApi(params, req, runtime));
}

GenerateAndExportDataKeyResponse Alibabacloud_Kms20160120::Client::generateAndExportDataKey(shared_ptr<GenerateAndExportDataKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAndExportDataKeyWithOptions(request, runtime);
}

GenerateDataKeyResponse Alibabacloud_Kms20160120::Client::generateDataKeyWithOptions(shared_ptr<GenerateDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateDataKeyShrinkRequest> request = make_shared<GenerateDataKeyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keySpec)) {
    query->insert(pair<string, string>("KeySpec", *request->keySpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfBytes)) {
    query->insert(pair<string, long>("NumberOfBytes", *request->numberOfBytes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDataKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDataKeyResponse(callApi(params, req, runtime));
}

GenerateDataKeyResponse Alibabacloud_Kms20160120::Client::generateDataKey(shared_ptr<GenerateDataKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDataKeyWithOptions(request, runtime);
}

GenerateDataKeyWithoutPlaintextResponse Alibabacloud_Kms20160120::Client::generateDataKeyWithoutPlaintextWithOptions(shared_ptr<GenerateDataKeyWithoutPlaintextRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateDataKeyWithoutPlaintextShrinkRequest> request = make_shared<GenerateDataKeyWithoutPlaintextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptionContextShrink)) {
    query->insert(pair<string, string>("EncryptionContext", *request->encryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keySpec)) {
    query->insert(pair<string, string>("KeySpec", *request->keySpec));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfBytes)) {
    query->insert(pair<string, long>("NumberOfBytes", *request->numberOfBytes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDataKeyWithoutPlaintext"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDataKeyWithoutPlaintextResponse(callApi(params, req, runtime));
}

GenerateDataKeyWithoutPlaintextResponse Alibabacloud_Kms20160120::Client::generateDataKeyWithoutPlaintext(shared_ptr<GenerateDataKeyWithoutPlaintextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDataKeyWithoutPlaintextWithOptions(request, runtime);
}

GetCertificateResponse Alibabacloud_Kms20160120::Client::getCertificateWithOptions(shared_ptr<GetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCertificate"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCertificateResponse(callApi(params, req, runtime));
}

GetCertificateResponse Alibabacloud_Kms20160120::Client::getCertificate(shared_ptr<GetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertificateWithOptions(request, runtime);
}

GetParametersForImportResponse Alibabacloud_Kms20160120::Client::getParametersForImportWithOptions(shared_ptr<GetParametersForImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingAlgorithm)) {
    query->insert(pair<string, string>("WrappingAlgorithm", *request->wrappingAlgorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wrappingKeySpec)) {
    query->insert(pair<string, string>("WrappingKeySpec", *request->wrappingKeySpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetParametersForImport"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetParametersForImportResponse(callApi(params, req, runtime));
}

GetParametersForImportResponse Alibabacloud_Kms20160120::Client::getParametersForImport(shared_ptr<GetParametersForImportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getParametersForImportWithOptions(request, runtime);
}

GetPublicKeyResponse Alibabacloud_Kms20160120::Client::getPublicKeyWithOptions(shared_ptr<GetPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyVersionId)) {
    query->insert(pair<string, string>("KeyVersionId", *request->keyVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicKey"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublicKeyResponse(callApi(params, req, runtime));
}

GetPublicKeyResponse Alibabacloud_Kms20160120::Client::getPublicKey(shared_ptr<GetPublicKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicKeyWithOptions(request, runtime);
}

GetRandomPasswordResponse Alibabacloud_Kms20160120::Client::getRandomPasswordWithOptions(shared_ptr<GetRandomPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeCharacters)) {
    query->insert(pair<string, string>("ExcludeCharacters", *request->excludeCharacters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeLowercase)) {
    query->insert(pair<string, string>("ExcludeLowercase", *request->excludeLowercase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeNumbers)) {
    query->insert(pair<string, string>("ExcludeNumbers", *request->excludeNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludePunctuation)) {
    query->insert(pair<string, string>("ExcludePunctuation", *request->excludePunctuation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeUppercase)) {
    query->insert(pair<string, string>("ExcludeUppercase", *request->excludeUppercase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passwordLength)) {
    query->insert(pair<string, string>("PasswordLength", *request->passwordLength));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requireEachIncludedType)) {
    query->insert(pair<string, string>("RequireEachIncludedType", *request->requireEachIncludedType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRandomPassword"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRandomPasswordResponse(callApi(params, req, runtime));
}

GetRandomPasswordResponse Alibabacloud_Kms20160120::Client::getRandomPassword(shared_ptr<GetRandomPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRandomPasswordWithOptions(request, runtime);
}

GetSecretValueResponse Alibabacloud_Kms20160120::Client::getSecretValueWithOptions(shared_ptr<GetSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fetchExtendedConfig)) {
    query->insert(pair<string, bool>("FetchExtendedConfig", *request->fetchExtendedConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionStage)) {
    query->insert(pair<string, string>("VersionStage", *request->versionStage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecretValue"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSecretValueResponse(callApi(params, req, runtime));
}

GetSecretValueResponse Alibabacloud_Kms20160120::Client::getSecretValue(shared_ptr<GetSecretValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecretValueWithOptions(request, runtime);
}

ImportKeyMaterialResponse Alibabacloud_Kms20160120::Client::importKeyMaterialWithOptions(shared_ptr<ImportKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptedKeyMaterial)) {
    query->insert(pair<string, string>("EncryptedKeyMaterial", *request->encryptedKeyMaterial));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importToken)) {
    query->insert(pair<string, string>("ImportToken", *request->importToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keyMaterialExpireUnix)) {
    query->insert(pair<string, long>("KeyMaterialExpireUnix", *request->keyMaterialExpireUnix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportKeyMaterial"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportKeyMaterialResponse(callApi(params, req, runtime));
}

ImportKeyMaterialResponse Alibabacloud_Kms20160120::Client::importKeyMaterial(shared_ptr<ImportKeyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importKeyMaterialWithOptions(request, runtime);
}

ListAliasesResponse Alibabacloud_Kms20160120::Client::listAliasesWithOptions(shared_ptr<ListAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ListAliases"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliasesResponse(callApi(params, req, runtime));
}

ListAliasesResponse Alibabacloud_Kms20160120::Client::listAliases(shared_ptr<ListAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAliasesWithOptions(request, runtime);
}

ListAliasesByKeyIdResponse Alibabacloud_Kms20160120::Client::listAliasesByKeyIdWithOptions(shared_ptr<ListAliasesByKeyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
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
    {"action", boost::any(string("ListAliasesByKeyId"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliasesByKeyIdResponse(callApi(params, req, runtime));
}

ListAliasesByKeyIdResponse Alibabacloud_Kms20160120::Client::listAliasesByKeyId(shared_ptr<ListAliasesByKeyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAliasesByKeyIdWithOptions(request, runtime);
}

ListKeyVersionsResponse Alibabacloud_Kms20160120::Client::listKeyVersionsWithOptions(shared_ptr<ListKeyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
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
    {"action", boost::any(string("ListKeyVersions"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKeyVersionsResponse(callApi(params, req, runtime));
}

ListKeyVersionsResponse Alibabacloud_Kms20160120::Client::listKeyVersions(shared_ptr<ListKeyVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listKeyVersionsWithOptions(request, runtime);
}

ListKeysResponse Alibabacloud_Kms20160120::Client::listKeysWithOptions(shared_ptr<ListKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filters)) {
    query->insert(pair<string, string>("Filters", *request->filters));
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
    {"action", boost::any(string("ListKeys"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListKeysResponse(callApi(params, req, runtime));
}

ListKeysResponse Alibabacloud_Kms20160120::Client::listKeys(shared_ptr<ListKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listKeysWithOptions(request, runtime);
}

ListResourceTagsResponse Alibabacloud_Kms20160120::Client::listResourceTagsWithOptions(shared_ptr<ListResourceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceTags"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceTagsResponse(callApi(params, req, runtime));
}

ListResourceTagsResponse Alibabacloud_Kms20160120::Client::listResourceTags(shared_ptr<ListResourceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTagsWithOptions(request, runtime);
}

ListSecretVersionIdsResponse Alibabacloud_Kms20160120::Client::listSecretVersionIdsWithOptions(shared_ptr<ListSecretVersionIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->includeDeprecated)) {
    query->insert(pair<string, string>("IncludeDeprecated", *request->includeDeprecated));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSecretVersionIds"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecretVersionIdsResponse(callApi(params, req, runtime));
}

ListSecretVersionIdsResponse Alibabacloud_Kms20160120::Client::listSecretVersionIds(shared_ptr<ListSecretVersionIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecretVersionIdsWithOptions(request, runtime);
}

ListSecretsResponse Alibabacloud_Kms20160120::Client::listSecretsWithOptions(shared_ptr<ListSecretsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fetchTags)) {
    query->insert(pair<string, string>("FetchTags", *request->fetchTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filters)) {
    query->insert(pair<string, string>("Filters", *request->filters));
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
    {"action", boost::any(string("ListSecrets"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSecretsResponse(callApi(params, req, runtime));
}

ListSecretsResponse Alibabacloud_Kms20160120::Client::listSecrets(shared_ptr<ListSecretsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecretsWithOptions(request, runtime);
}

OpenKmsServiceResponse Alibabacloud_Kms20160120::Client::openKmsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenKmsService"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenKmsServiceResponse(callApi(params, req, runtime));
}

OpenKmsServiceResponse Alibabacloud_Kms20160120::Client::openKmsService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openKmsServiceWithOptions(runtime);
}

PutSecretValueResponse Alibabacloud_Kms20160120::Client::putSecretValueWithOptions(shared_ptr<PutSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretData)) {
    query->insert(pair<string, string>("SecretData", *request->secretData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretDataType)) {
    query->insert(pair<string, string>("SecretDataType", *request->secretDataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionStages)) {
    query->insert(pair<string, string>("VersionStages", *request->versionStages));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutSecretValue"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutSecretValueResponse(callApi(params, req, runtime));
}

PutSecretValueResponse Alibabacloud_Kms20160120::Client::putSecretValue(shared_ptr<PutSecretValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putSecretValueWithOptions(request, runtime);
}

ReEncryptResponse Alibabacloud_Kms20160120::Client::reEncryptWithOptions(shared_ptr<ReEncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReEncryptShrinkRequest> request = make_shared<ReEncryptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->destinationEncryptionContext)) {
    request->destinationEncryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationEncryptionContext, make_shared<string>("DestinationEncryptionContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->sourceEncryptionContext)) {
    request->sourceEncryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceEncryptionContext, make_shared<string>("SourceEncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEncryptionContextShrink)) {
    query->insert(pair<string, string>("DestinationEncryptionContext", *request->destinationEncryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationKeyId)) {
    query->insert(pair<string, string>("DestinationKeyId", *request->destinationKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEncryptionAlgorithm)) {
    query->insert(pair<string, string>("SourceEncryptionAlgorithm", *request->sourceEncryptionAlgorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEncryptionContextShrink)) {
    query->insert(pair<string, string>("SourceEncryptionContext", *request->sourceEncryptionContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceKeyId)) {
    query->insert(pair<string, string>("SourceKeyId", *request->sourceKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceKeyVersionId)) {
    query->insert(pair<string, string>("SourceKeyVersionId", *request->sourceKeyVersionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReEncrypt"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReEncryptResponse(callApi(params, req, runtime));
}

ReEncryptResponse Alibabacloud_Kms20160120::Client::reEncrypt(shared_ptr<ReEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reEncryptWithOptions(request, runtime);
}

RestoreSecretResponse Alibabacloud_Kms20160120::Client::restoreSecretWithOptions(shared_ptr<RestoreSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestoreSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestoreSecretResponse(callApi(params, req, runtime));
}

RestoreSecretResponse Alibabacloud_Kms20160120::Client::restoreSecret(shared_ptr<RestoreSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreSecretWithOptions(request, runtime);
}

RotateSecretResponse Alibabacloud_Kms20160120::Client::rotateSecretWithOptions(shared_ptr<RotateSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RotateSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RotateSecretResponse(callApi(params, req, runtime));
}

RotateSecretResponse Alibabacloud_Kms20160120::Client::rotateSecret(shared_ptr<RotateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rotateSecretWithOptions(request, runtime);
}

ScheduleKeyDeletionResponse Alibabacloud_Kms20160120::Client::scheduleKeyDeletionWithOptions(shared_ptr<ScheduleKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pendingWindowInDays)) {
    query->insert(pair<string, long>("PendingWindowInDays", *request->pendingWindowInDays));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScheduleKeyDeletion"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScheduleKeyDeletionResponse(callApi(params, req, runtime));
}

ScheduleKeyDeletionResponse Alibabacloud_Kms20160120::Client::scheduleKeyDeletion(shared_ptr<ScheduleKeyDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scheduleKeyDeletionWithOptions(request, runtime);
}

SetDeletionProtectionResponse Alibabacloud_Kms20160120::Client::setDeletionProtectionWithOptions(shared_ptr<SetDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deletionProtectionDescription)) {
    query->insert(pair<string, string>("DeletionProtectionDescription", *request->deletionProtectionDescription));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDeletionProtection)) {
    query->insert(pair<string, bool>("EnableDeletionProtection", *request->enableDeletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protectedResourceArn)) {
    query->insert(pair<string, string>("ProtectedResourceArn", *request->protectedResourceArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeletionProtection"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeletionProtectionResponse(callApi(params, req, runtime));
}

SetDeletionProtectionResponse Alibabacloud_Kms20160120::Client::setDeletionProtection(shared_ptr<SetDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeletionProtectionWithOptions(request, runtime);
}

TagResourceResponse Alibabacloud_Kms20160120::Client::tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResource"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourceResponse(callApi(params, req, runtime));
}

TagResourceResponse Alibabacloud_Kms20160120::Client::tagResource(shared_ptr<TagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourceWithOptions(request, runtime);
}

UntagResourceResponse Alibabacloud_Kms20160120::Client::untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeys)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResource"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourceResponse(callApi(params, req, runtime));
}

UntagResourceResponse Alibabacloud_Kms20160120::Client::untagResource(shared_ptr<UntagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourceWithOptions(request, runtime);
}

UpdateAliasResponse Alibabacloud_Kms20160120::Client::updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlias"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAliasResponse(callApi(params, req, runtime));
}

UpdateAliasResponse Alibabacloud_Kms20160120::Client::updateAlias(shared_ptr<UpdateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAliasWithOptions(request, runtime);
}

UpdateCertificateStatusResponse Alibabacloud_Kms20160120::Client::updateCertificateStatusWithOptions(shared_ptr<UpdateCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCertificateStatus"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCertificateStatusResponse(callApi(params, req, runtime));
}

UpdateCertificateStatusResponse Alibabacloud_Kms20160120::Client::updateCertificateStatus(shared_ptr<UpdateCertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCertificateStatusWithOptions(request, runtime);
}

UpdateKeyDescriptionResponse Alibabacloud_Kms20160120::Client::updateKeyDescriptionWithOptions(shared_ptr<UpdateKeyDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateKeyDescription"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateKeyDescriptionResponse(callApi(params, req, runtime));
}

UpdateKeyDescriptionResponse Alibabacloud_Kms20160120::Client::updateKeyDescription(shared_ptr<UpdateKeyDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateKeyDescriptionWithOptions(request, runtime);
}

UpdateRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateRotationPolicyWithOptions(shared_ptr<UpdateRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutomaticRotation)) {
    query->insert(pair<string, bool>("EnableAutomaticRotation", *request->enableAutomaticRotation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyId)) {
    query->insert(pair<string, string>("KeyId", *request->keyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rotationInterval)) {
    query->insert(pair<string, string>("RotationInterval", *request->rotationInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRotationPolicy"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRotationPolicyResponse(callApi(params, req, runtime));
}

UpdateRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateRotationPolicy(shared_ptr<UpdateRotationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRotationPolicyWithOptions(request, runtime);
}

UpdateSecretResponse Alibabacloud_Kms20160120::Client::updateSecretWithOptions(shared_ptr<UpdateSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateSecretRequestExtendedConfig>(request->extendedConfig)) {
    query->insert(pair<string, UpdateSecretRequestExtendedConfig>("ExtendedConfig", *request->extendedConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSecret"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSecretResponse(callApi(params, req, runtime));
}

UpdateSecretResponse Alibabacloud_Kms20160120::Client::updateSecret(shared_ptr<UpdateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecretWithOptions(request, runtime);
}

UpdateSecretRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateSecretRotationPolicyWithOptions(shared_ptr<UpdateSecretRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAutomaticRotation)) {
    query->insert(pair<string, bool>("EnableAutomaticRotation", *request->enableAutomaticRotation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rotationInterval)) {
    query->insert(pair<string, string>("RotationInterval", *request->rotationInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSecretRotationPolicy"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSecretRotationPolicyResponse(callApi(params, req, runtime));
}

UpdateSecretRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateSecretRotationPolicy(shared_ptr<UpdateSecretRotationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecretRotationPolicyWithOptions(request, runtime);
}

UpdateSecretVersionStageResponse Alibabacloud_Kms20160120::Client::updateSecretVersionStageWithOptions(shared_ptr<UpdateSecretVersionStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->moveToVersion)) {
    query->insert(pair<string, string>("MoveToVersion", *request->moveToVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removeFromVersion)) {
    query->insert(pair<string, string>("RemoveFromVersion", *request->removeFromVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretName)) {
    query->insert(pair<string, string>("SecretName", *request->secretName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionStage)) {
    query->insert(pair<string, string>("VersionStage", *request->versionStage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSecretVersionStage"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSecretVersionStageResponse(callApi(params, req, runtime));
}

UpdateSecretVersionStageResponse Alibabacloud_Kms20160120::Client::updateSecretVersionStage(shared_ptr<UpdateSecretVersionStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecretVersionStageWithOptions(request, runtime);
}

UploadCertificateResponse Alibabacloud_Kms20160120::Client::uploadCertificateWithOptions(shared_ptr<UploadCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    query->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateChain)) {
    query->insert(pair<string, string>("CertificateChain", *request->certificateChain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadCertificate"))},
    {"version", boost::any(string("2016-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadCertificateResponse(callApi(params, req, runtime));
}

UploadCertificateResponse Alibabacloud_Kms20160120::Client::uploadCertificate(shared_ptr<UploadCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadCertificateWithOptions(request, runtime);
}

