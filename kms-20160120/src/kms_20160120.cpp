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
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AsymmetricDecryptResponse Alibabacloud_Kms20160120::Client::asymmetricDecryptWithOptions(shared_ptr<AsymmetricDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AsymmetricDecryptResponse(doRPCRequest(make_shared<string>("AsymmetricDecrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AsymmetricDecryptResponse Alibabacloud_Kms20160120::Client::asymmetricDecrypt(shared_ptr<AsymmetricDecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricDecryptWithOptions(request, runtime);
}

AsymmetricEncryptResponse Alibabacloud_Kms20160120::Client::asymmetricEncryptWithOptions(shared_ptr<AsymmetricEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AsymmetricEncryptResponse(doRPCRequest(make_shared<string>("AsymmetricEncrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AsymmetricEncryptResponse Alibabacloud_Kms20160120::Client::asymmetricEncrypt(shared_ptr<AsymmetricEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricEncryptWithOptions(request, runtime);
}

AsymmetricSignResponse Alibabacloud_Kms20160120::Client::asymmetricSignWithOptions(shared_ptr<AsymmetricSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AsymmetricSignResponse(doRPCRequest(make_shared<string>("AsymmetricSign"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AsymmetricSignResponse Alibabacloud_Kms20160120::Client::asymmetricSign(shared_ptr<AsymmetricSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricSignWithOptions(request, runtime);
}

AsymmetricVerifyResponse Alibabacloud_Kms20160120::Client::asymmetricVerifyWithOptions(shared_ptr<AsymmetricVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AsymmetricVerifyResponse(doRPCRequest(make_shared<string>("AsymmetricVerify"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AsymmetricVerifyResponse Alibabacloud_Kms20160120::Client::asymmetricVerify(shared_ptr<AsymmetricVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return asymmetricVerifyWithOptions(request, runtime);
}

CancelKeyDeletionResponse Alibabacloud_Kms20160120::Client::cancelKeyDeletionWithOptions(shared_ptr<CancelKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelKeyDeletionResponse(doRPCRequest(make_shared<string>("CancelKeyDeletion"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelKeyDeletionResponse Alibabacloud_Kms20160120::Client::cancelKeyDeletion(shared_ptr<CancelKeyDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelKeyDeletionWithOptions(request, runtime);
}

CertificatePrivateKeyDecryptResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeyDecryptWithOptions(shared_ptr<CertificatePrivateKeyDecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CertificatePrivateKeyDecryptResponse(doRPCRequest(make_shared<string>("CertificatePrivateKeyDecrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CertificatePrivateKeyDecryptResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeyDecrypt(shared_ptr<CertificatePrivateKeyDecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePrivateKeyDecryptWithOptions(request, runtime);
}

CertificatePrivateKeySignResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeySignWithOptions(shared_ptr<CertificatePrivateKeySignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CertificatePrivateKeySignResponse(doRPCRequest(make_shared<string>("CertificatePrivateKeySign"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CertificatePrivateKeySignResponse Alibabacloud_Kms20160120::Client::certificatePrivateKeySign(shared_ptr<CertificatePrivateKeySignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePrivateKeySignWithOptions(request, runtime);
}

CertificatePublicKeyEncryptResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyEncryptWithOptions(shared_ptr<CertificatePublicKeyEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CertificatePublicKeyEncryptResponse(doRPCRequest(make_shared<string>("CertificatePublicKeyEncrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CertificatePublicKeyEncryptResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyEncrypt(shared_ptr<CertificatePublicKeyEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePublicKeyEncryptWithOptions(request, runtime);
}

CertificatePublicKeyVerifyResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyVerifyWithOptions(shared_ptr<CertificatePublicKeyVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CertificatePublicKeyVerifyResponse(doRPCRequest(make_shared<string>("CertificatePublicKeyVerify"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CertificatePublicKeyVerifyResponse Alibabacloud_Kms20160120::Client::certificatePublicKeyVerify(shared_ptr<CertificatePublicKeyVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return certificatePublicKeyVerifyWithOptions(request, runtime);
}

CreateAliasResponse Alibabacloud_Kms20160120::Client::createAliasWithOptions(shared_ptr<CreateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAliasResponse(doRPCRequest(make_shared<string>("CreateAlias"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCertificateResponse(doRPCRequest(make_shared<string>("CreateCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCertificateResponse Alibabacloud_Kms20160120::Client::createCertificate(shared_ptr<CreateCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithOptions(request, runtime);
}

CreateKeyResponse Alibabacloud_Kms20160120::Client::createKeyWithOptions(shared_ptr<CreateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateKeyResponse(doRPCRequest(make_shared<string>("CreateKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateKeyResponse Alibabacloud_Kms20160120::Client::createKey(shared_ptr<CreateKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKeyWithOptions(request, runtime);
}

CreateKeyVersionResponse Alibabacloud_Kms20160120::Client::createKeyVersionWithOptions(shared_ptr<CreateKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateKeyVersionResponse(doRPCRequest(make_shared<string>("CreateKeyVersion"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSecretResponse(doRPCRequest(make_shared<string>("CreateSecret"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DecryptResponse(doRPCRequest(make_shared<string>("Decrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DecryptResponse Alibabacloud_Kms20160120::Client::decrypt(shared_ptr<DecryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptWithOptions(request, runtime);
}

DeleteAliasResponse Alibabacloud_Kms20160120::Client::deleteAliasWithOptions(shared_ptr<DeleteAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAliasResponse(doRPCRequest(make_shared<string>("DeleteAlias"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAliasResponse Alibabacloud_Kms20160120::Client::deleteAlias(shared_ptr<DeleteAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAliasWithOptions(request, runtime);
}

DeleteCertificateResponse Alibabacloud_Kms20160120::Client::deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCertificateResponse(doRPCRequest(make_shared<string>("DeleteCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCertificateResponse Alibabacloud_Kms20160120::Client::deleteCertificate(shared_ptr<DeleteCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateWithOptions(request, runtime);
}

DeleteKeyMaterialResponse Alibabacloud_Kms20160120::Client::deleteKeyMaterialWithOptions(shared_ptr<DeleteKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteKeyMaterialResponse(doRPCRequest(make_shared<string>("DeleteKeyMaterial"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteKeyMaterialResponse Alibabacloud_Kms20160120::Client::deleteKeyMaterial(shared_ptr<DeleteKeyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKeyMaterialWithOptions(request, runtime);
}

DeleteSecretResponse Alibabacloud_Kms20160120::Client::deleteSecretWithOptions(shared_ptr<DeleteSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSecretResponse(doRPCRequest(make_shared<string>("DeleteSecret"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSecretResponse Alibabacloud_Kms20160120::Client::deleteSecret(shared_ptr<DeleteSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecretWithOptions(request, runtime);
}

DescribeAccountKmsStatusResponse Alibabacloud_Kms20160120::Client::describeAccountKmsStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeAccountKmsStatusResponse(doRPCRequest(make_shared<string>("DescribeAccountKmsStatus"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAccountKmsStatusResponse Alibabacloud_Kms20160120::Client::describeAccountKmsStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountKmsStatusWithOptions(runtime);
}

DescribeCertificateResponse Alibabacloud_Kms20160120::Client::describeCertificateWithOptions(shared_ptr<DescribeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCertificateResponse(doRPCRequest(make_shared<string>("DescribeCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCertificateResponse Alibabacloud_Kms20160120::Client::describeCertificate(shared_ptr<DescribeCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificateWithOptions(request, runtime);
}

DescribeKeyResponse Alibabacloud_Kms20160120::Client::describeKeyWithOptions(shared_ptr<DescribeKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeKeyResponse(doRPCRequest(make_shared<string>("DescribeKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeKeyResponse Alibabacloud_Kms20160120::Client::describeKey(shared_ptr<DescribeKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyWithOptions(request, runtime);
}

DescribeKeyVersionResponse Alibabacloud_Kms20160120::Client::describeKeyVersionWithOptions(shared_ptr<DescribeKeyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeKeyVersionResponse(doRPCRequest(make_shared<string>("DescribeKeyVersion"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeKeyVersionResponse Alibabacloud_Kms20160120::Client::describeKeyVersion(shared_ptr<DescribeKeyVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKeyVersionWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Kms20160120::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Kms20160120::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DescribeSecretResponse Alibabacloud_Kms20160120::Client::describeSecretWithOptions(shared_ptr<DescribeSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSecretResponse(doRPCRequest(make_shared<string>("DescribeSecret"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSecretResponse Alibabacloud_Kms20160120::Client::describeSecret(shared_ptr<DescribeSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecretWithOptions(request, runtime);
}

DescribeServiceResponse Alibabacloud_Kms20160120::Client::describeServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeServiceResponse(doRPCRequest(make_shared<string>("DescribeService"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeServiceResponse Alibabacloud_Kms20160120::Client::describeService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeServiceWithOptions(runtime);
}

DisableKeyResponse Alibabacloud_Kms20160120::Client::disableKeyWithOptions(shared_ptr<DisableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableKeyResponse(doRPCRequest(make_shared<string>("DisableKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableKeyResponse Alibabacloud_Kms20160120::Client::disableKey(shared_ptr<DisableKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableKeyWithOptions(request, runtime);
}

EnableKeyResponse Alibabacloud_Kms20160120::Client::enableKeyWithOptions(shared_ptr<EnableKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableKeyResponse(doRPCRequest(make_shared<string>("EnableKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EncryptResponse(doRPCRequest(make_shared<string>("Encrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EncryptResponse Alibabacloud_Kms20160120::Client::encrypt(shared_ptr<EncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptWithOptions(request, runtime);
}

ExportCertificateResponse Alibabacloud_Kms20160120::Client::exportCertificateWithOptions(shared_ptr<ExportCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportCertificateResponse(doRPCRequest(make_shared<string>("ExportCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExportCertificateResponse Alibabacloud_Kms20160120::Client::exportCertificate(shared_ptr<ExportCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportCertificateWithOptions(request, runtime);
}

ExportDataKeyResponse Alibabacloud_Kms20160120::Client::exportDataKeyWithOptions(shared_ptr<ExportDataKeyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExportDataKeyShrinkRequest> request = make_shared<ExportDataKeyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->encryptionContext)) {
    request->encryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->encryptionContext, make_shared<string>("EncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExportDataKeyResponse(doRPCRequest(make_shared<string>("ExportDataKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateAndExportDataKeyResponse(doRPCRequest(make_shared<string>("GenerateAndExportDataKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateDataKeyResponse(doRPCRequest(make_shared<string>("GenerateDataKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateDataKeyWithoutPlaintextResponse(doRPCRequest(make_shared<string>("GenerateDataKeyWithoutPlaintext"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateDataKeyWithoutPlaintextResponse Alibabacloud_Kms20160120::Client::generateDataKeyWithoutPlaintext(shared_ptr<GenerateDataKeyWithoutPlaintextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDataKeyWithoutPlaintextWithOptions(request, runtime);
}

GetCertificateResponse Alibabacloud_Kms20160120::Client::getCertificateWithOptions(shared_ptr<GetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCertificateResponse(doRPCRequest(make_shared<string>("GetCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCertificateResponse Alibabacloud_Kms20160120::Client::getCertificate(shared_ptr<GetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertificateWithOptions(request, runtime);
}

GetParametersForImportResponse Alibabacloud_Kms20160120::Client::getParametersForImportWithOptions(shared_ptr<GetParametersForImportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetParametersForImportResponse(doRPCRequest(make_shared<string>("GetParametersForImport"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetParametersForImportResponse Alibabacloud_Kms20160120::Client::getParametersForImport(shared_ptr<GetParametersForImportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getParametersForImportWithOptions(request, runtime);
}

GetPublicKeyResponse Alibabacloud_Kms20160120::Client::getPublicKeyWithOptions(shared_ptr<GetPublicKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPublicKeyResponse(doRPCRequest(make_shared<string>("GetPublicKey"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPublicKeyResponse Alibabacloud_Kms20160120::Client::getPublicKey(shared_ptr<GetPublicKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicKeyWithOptions(request, runtime);
}

GetRandomPasswordResponse Alibabacloud_Kms20160120::Client::getRandomPasswordWithOptions(shared_ptr<GetRandomPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRandomPasswordResponse(doRPCRequest(make_shared<string>("GetRandomPassword"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRandomPasswordResponse Alibabacloud_Kms20160120::Client::getRandomPassword(shared_ptr<GetRandomPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRandomPasswordWithOptions(request, runtime);
}

GetSecretValueResponse Alibabacloud_Kms20160120::Client::getSecretValueWithOptions(shared_ptr<GetSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSecretValueResponse(doRPCRequest(make_shared<string>("GetSecretValue"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSecretValueResponse Alibabacloud_Kms20160120::Client::getSecretValue(shared_ptr<GetSecretValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecretValueWithOptions(request, runtime);
}

ImportCertificateResponse Alibabacloud_Kms20160120::Client::importCertificateWithOptions(shared_ptr<ImportCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportCertificateResponse(doRPCRequest(make_shared<string>("ImportCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportCertificateResponse Alibabacloud_Kms20160120::Client::importCertificate(shared_ptr<ImportCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importCertificateWithOptions(request, runtime);
}

ImportEncryptionCertificateResponse Alibabacloud_Kms20160120::Client::importEncryptionCertificateWithOptions(shared_ptr<ImportEncryptionCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportEncryptionCertificateResponse(doRPCRequest(make_shared<string>("ImportEncryptionCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportEncryptionCertificateResponse Alibabacloud_Kms20160120::Client::importEncryptionCertificate(shared_ptr<ImportEncryptionCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importEncryptionCertificateWithOptions(request, runtime);
}

ImportKeyMaterialResponse Alibabacloud_Kms20160120::Client::importKeyMaterialWithOptions(shared_ptr<ImportKeyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportKeyMaterialResponse(doRPCRequest(make_shared<string>("ImportKeyMaterial"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportKeyMaterialResponse Alibabacloud_Kms20160120::Client::importKeyMaterial(shared_ptr<ImportKeyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importKeyMaterialWithOptions(request, runtime);
}

ListAliasesResponse Alibabacloud_Kms20160120::Client::listAliasesWithOptions(shared_ptr<ListAliasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAliasesResponse(doRPCRequest(make_shared<string>("ListAliases"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAliasesResponse Alibabacloud_Kms20160120::Client::listAliases(shared_ptr<ListAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAliasesWithOptions(request, runtime);
}

ListAliasesByKeyIdResponse Alibabacloud_Kms20160120::Client::listAliasesByKeyIdWithOptions(shared_ptr<ListAliasesByKeyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAliasesByKeyIdResponse(doRPCRequest(make_shared<string>("ListAliasesByKeyId"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAliasesByKeyIdResponse Alibabacloud_Kms20160120::Client::listAliasesByKeyId(shared_ptr<ListAliasesByKeyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAliasesByKeyIdWithOptions(request, runtime);
}

ListCertificatesResponse Alibabacloud_Kms20160120::Client::listCertificatesWithOptions(shared_ptr<ListCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCertificatesResponse(doRPCRequest(make_shared<string>("ListCertificates"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCertificatesResponse Alibabacloud_Kms20160120::Client::listCertificates(shared_ptr<ListCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCertificatesWithOptions(request, runtime);
}

ListKeysResponse Alibabacloud_Kms20160120::Client::listKeysWithOptions(shared_ptr<ListKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListKeysResponse(doRPCRequest(make_shared<string>("ListKeys"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListKeysResponse Alibabacloud_Kms20160120::Client::listKeys(shared_ptr<ListKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listKeysWithOptions(request, runtime);
}

ListKeyVersionsResponse Alibabacloud_Kms20160120::Client::listKeyVersionsWithOptions(shared_ptr<ListKeyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListKeyVersionsResponse(doRPCRequest(make_shared<string>("ListKeyVersions"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListKeyVersionsResponse Alibabacloud_Kms20160120::Client::listKeyVersions(shared_ptr<ListKeyVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listKeyVersionsWithOptions(request, runtime);
}

ListResourceTagsResponse Alibabacloud_Kms20160120::Client::listResourceTagsWithOptions(shared_ptr<ListResourceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListResourceTagsResponse(doRPCRequest(make_shared<string>("ListResourceTags"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListResourceTagsResponse Alibabacloud_Kms20160120::Client::listResourceTags(shared_ptr<ListResourceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTagsWithOptions(request, runtime);
}

ListSecretsResponse Alibabacloud_Kms20160120::Client::listSecretsWithOptions(shared_ptr<ListSecretsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSecretsResponse(doRPCRequest(make_shared<string>("ListSecrets"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSecretsResponse Alibabacloud_Kms20160120::Client::listSecrets(shared_ptr<ListSecretsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecretsWithOptions(request, runtime);
}

ListSecretVersionIdsResponse Alibabacloud_Kms20160120::Client::listSecretVersionIdsWithOptions(shared_ptr<ListSecretVersionIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSecretVersionIdsResponse(doRPCRequest(make_shared<string>("ListSecretVersionIds"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSecretVersionIdsResponse Alibabacloud_Kms20160120::Client::listSecretVersionIds(shared_ptr<ListSecretVersionIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSecretVersionIdsWithOptions(request, runtime);
}

OpenKmsServiceResponse Alibabacloud_Kms20160120::Client::openKmsServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return OpenKmsServiceResponse(doRPCRequest(make_shared<string>("OpenKmsService"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenKmsServiceResponse Alibabacloud_Kms20160120::Client::openKmsService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openKmsServiceWithOptions(runtime);
}

PutSecretValueResponse Alibabacloud_Kms20160120::Client::putSecretValueWithOptions(shared_ptr<PutSecretValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PutSecretValueResponse(doRPCRequest(make_shared<string>("PutSecretValue"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PutSecretValueResponse Alibabacloud_Kms20160120::Client::putSecretValue(shared_ptr<PutSecretValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putSecretValueWithOptions(request, runtime);
}

ReEncryptResponse Alibabacloud_Kms20160120::Client::reEncryptWithOptions(shared_ptr<ReEncryptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReEncryptShrinkRequest> request = make_shared<ReEncryptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->sourceEncryptionContext)) {
    request->sourceEncryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceEncryptionContext, make_shared<string>("SourceEncryptionContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->destinationEncryptionContext)) {
    request->destinationEncryptionContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->destinationEncryptionContext, make_shared<string>("DestinationEncryptionContext"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReEncryptResponse(doRPCRequest(make_shared<string>("ReEncrypt"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReEncryptResponse Alibabacloud_Kms20160120::Client::reEncrypt(shared_ptr<ReEncryptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reEncryptWithOptions(request, runtime);
}

RestoreSecretResponse Alibabacloud_Kms20160120::Client::restoreSecretWithOptions(shared_ptr<RestoreSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestoreSecretResponse(doRPCRequest(make_shared<string>("RestoreSecret"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestoreSecretResponse Alibabacloud_Kms20160120::Client::restoreSecret(shared_ptr<RestoreSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restoreSecretWithOptions(request, runtime);
}

RotateSecretResponse Alibabacloud_Kms20160120::Client::rotateSecretWithOptions(shared_ptr<RotateSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RotateSecretResponse(doRPCRequest(make_shared<string>("RotateSecret"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RotateSecretResponse Alibabacloud_Kms20160120::Client::rotateSecret(shared_ptr<RotateSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rotateSecretWithOptions(request, runtime);
}

ScheduleKeyDeletionResponse Alibabacloud_Kms20160120::Client::scheduleKeyDeletionWithOptions(shared_ptr<ScheduleKeyDeletionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ScheduleKeyDeletionResponse(doRPCRequest(make_shared<string>("ScheduleKeyDeletion"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ScheduleKeyDeletionResponse Alibabacloud_Kms20160120::Client::scheduleKeyDeletion(shared_ptr<ScheduleKeyDeletionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scheduleKeyDeletionWithOptions(request, runtime);
}

TagResourceResponse Alibabacloud_Kms20160120::Client::tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourceResponse(doRPCRequest(make_shared<string>("TagResource"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourceResponse Alibabacloud_Kms20160120::Client::tagResource(shared_ptr<TagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourceWithOptions(request, runtime);
}

UntagResourceResponse Alibabacloud_Kms20160120::Client::untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourceResponse(doRPCRequest(make_shared<string>("UntagResource"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourceResponse Alibabacloud_Kms20160120::Client::untagResource(shared_ptr<UntagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourceWithOptions(request, runtime);
}

UpdateAliasResponse Alibabacloud_Kms20160120::Client::updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAliasResponse(doRPCRequest(make_shared<string>("UpdateAlias"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAliasResponse Alibabacloud_Kms20160120::Client::updateAlias(shared_ptr<UpdateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAliasWithOptions(request, runtime);
}

UpdateCertificateStatusResponse Alibabacloud_Kms20160120::Client::updateCertificateStatusWithOptions(shared_ptr<UpdateCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCertificateStatusResponse(doRPCRequest(make_shared<string>("UpdateCertificateStatus"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCertificateStatusResponse Alibabacloud_Kms20160120::Client::updateCertificateStatus(shared_ptr<UpdateCertificateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCertificateStatusWithOptions(request, runtime);
}

UpdateKeyDescriptionResponse Alibabacloud_Kms20160120::Client::updateKeyDescriptionWithOptions(shared_ptr<UpdateKeyDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateKeyDescriptionResponse(doRPCRequest(make_shared<string>("UpdateKeyDescription"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateKeyDescriptionResponse Alibabacloud_Kms20160120::Client::updateKeyDescription(shared_ptr<UpdateKeyDescriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateKeyDescriptionWithOptions(request, runtime);
}

UpdateRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateRotationPolicyWithOptions(shared_ptr<UpdateRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRotationPolicyResponse(doRPCRequest(make_shared<string>("UpdateRotationPolicy"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateRotationPolicy(shared_ptr<UpdateRotationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRotationPolicyWithOptions(request, runtime);
}

UpdateSecretRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateSecretRotationPolicyWithOptions(shared_ptr<UpdateSecretRotationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSecretRotationPolicyResponse(doRPCRequest(make_shared<string>("UpdateSecretRotationPolicy"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSecretRotationPolicyResponse Alibabacloud_Kms20160120::Client::updateSecretRotationPolicy(shared_ptr<UpdateSecretRotationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecretRotationPolicyWithOptions(request, runtime);
}

UpdateSecretVersionStageResponse Alibabacloud_Kms20160120::Client::updateSecretVersionStageWithOptions(shared_ptr<UpdateSecretVersionStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSecretVersionStageResponse(doRPCRequest(make_shared<string>("UpdateSecretVersionStage"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSecretVersionStageResponse Alibabacloud_Kms20160120::Client::updateSecretVersionStage(shared_ptr<UpdateSecretVersionStageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSecretVersionStageWithOptions(request, runtime);
}

UploadCertificateResponse Alibabacloud_Kms20160120::Client::uploadCertificateWithOptions(shared_ptr<UploadCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UploadCertificateResponse(doRPCRequest(make_shared<string>("UploadCertificate"), make_shared<string>("2016-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UploadCertificateResponse Alibabacloud_Kms20160120::Client::uploadCertificate(shared_ptr<UploadCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadCertificateWithOptions(request, runtime);
}

