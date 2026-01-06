#include <darabonba/Core.hpp>
#include <alibabacloud/Sts20150401.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sts20150401::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sts20150401
{

AlibabaCloud::Sts20150401::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "sts.aliyuncs.com"},
    {"ap-south-1" , "sts.aliyuncs.com"},
    {"ap-southeast-2" , "sts.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "sts.aliyuncs.com"},
    {"cn-beijing-gov-1" , "sts.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "sts.aliyuncs.com"},
    {"cn-edge-1" , "sts.aliyuncs.com"},
    {"cn-fujian" , "sts.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "sts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "sts.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "sts.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "sts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "sts.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "sts.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "sts.aliyuncs.com"},
    {"cn-shanghai-inner" , "sts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "sts.aliyuncs.com"},
    {"cn-shenzhen-inner" , "sts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "sts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "sts.aliyuncs.com"},
    {"cn-wuhan" , "sts.aliyuncs.com"},
    {"cn-yushanfang" , "sts.aliyuncs.com"},
    {"cn-zhangbei" , "sts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "sts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "sts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "sts.aliyuncs.com"},
    {"eu-west-1-oxs" , "sts.aliyuncs.com"},
    {"rus-west-1-pop" , "sts.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("sts", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role.
 *
 * @description ### Prerequisites
 * You cannot use an Alibaba Cloud account to call this operation. The requester of this operation can only be a RAM user or RAM role. Make sure that the AliyunSTSAssumeRoleAccess policy is attached to the requester. After this policy is attached to the requester, the requester has the management permissions on STS.
 * If you do not attach the AliyunSTSAssumeRoleAccess policy to the requester, the following error message is returned:
 * `You are not authorized to do this action. You should be authorized by RAM.`
 * You can refer to the following information to troubleshoot the error:
 * *   Cause of the error: The policy that is required to assume a RAM role is not attached to the requester. To resolve this issue, attach the AliyunSTSAssumeRoleAccess policy or a custom policy to the requester. For more information, see [Can I specify the RAM role that a RAM user can assume?](https://help.aliyun.com/document_detail/39744.html) and [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
 * *   Cause of the error: The requester is not authorized to assume the RAM role. To resolve this issue, add the requester to the Principal element in the trust policy of the RAM role For more information, see [Edit the trust policy of a RAM role](https://help.aliyun.com/document_detail/116819.html).
 * ### Best practices
 * An STS token is valid for a period of time after it is issued, and the number of STS tokens that can be issued within an interval is also limited. Therefore, we recommend that you configure a proper validity period for an STS token and repeatedly use the token within this period. This prevents frequent issuing of STS tokens from adversely affecting your services if a large number of requests are sent. For more information about the limit, see [Is the number of STS API requests limited?](https://help.aliyun.com/document_detail/39744.html) You can configure the `DurationSeconds` parameter to specify a validity period for an STS token.
 * When you upload or download Object Storage Service (OSS) objects on mobile devices, a large number of STS API requests are sent. In this case, repeated use of an STS token may not meet your business requirements. To avoid the limit on STS API requests from affecting access to OSS, you can **add a signature to the URL of an OSS object**. For more information, see [Add signatures to URLs](https://help.aliyun.com/document_detail/31952.html) and [Obtain signature information from the server and upload data to OSS](https://help.aliyun.com/document_detail/31926.html).
 *
 * @param request AssumeRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssumeRoleResponse
 */
AssumeRoleResponse Client::assumeRoleWithOptions(const AssumeRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDurationSeconds()) {
    query["DurationSeconds"] = request.getDurationSeconds();
  }

  if (!!request.hasExternalId()) {
    query["ExternalId"] = request.getExternalId();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasRoleSessionName()) {
    query["RoleSessionName"] = request.getRoleSessionName();
  }

  if (!!request.hasSourceIdentity()) {
    query["SourceIdentity"] = request.getSourceIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssumeRole"},
    {"version" , "2015-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssumeRoleResponse>();
}

/**
 * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role.
 *
 * @description ### Prerequisites
 * You cannot use an Alibaba Cloud account to call this operation. The requester of this operation can only be a RAM user or RAM role. Make sure that the AliyunSTSAssumeRoleAccess policy is attached to the requester. After this policy is attached to the requester, the requester has the management permissions on STS.
 * If you do not attach the AliyunSTSAssumeRoleAccess policy to the requester, the following error message is returned:
 * `You are not authorized to do this action. You should be authorized by RAM.`
 * You can refer to the following information to troubleshoot the error:
 * *   Cause of the error: The policy that is required to assume a RAM role is not attached to the requester. To resolve this issue, attach the AliyunSTSAssumeRoleAccess policy or a custom policy to the requester. For more information, see [Can I specify the RAM role that a RAM user can assume?](https://help.aliyun.com/document_detail/39744.html) and [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/116146.html).
 * *   Cause of the error: The requester is not authorized to assume the RAM role. To resolve this issue, add the requester to the Principal element in the trust policy of the RAM role For more information, see [Edit the trust policy of a RAM role](https://help.aliyun.com/document_detail/116819.html).
 * ### Best practices
 * An STS token is valid for a period of time after it is issued, and the number of STS tokens that can be issued within an interval is also limited. Therefore, we recommend that you configure a proper validity period for an STS token and repeatedly use the token within this period. This prevents frequent issuing of STS tokens from adversely affecting your services if a large number of requests are sent. For more information about the limit, see [Is the number of STS API requests limited?](https://help.aliyun.com/document_detail/39744.html) You can configure the `DurationSeconds` parameter to specify a validity period for an STS token.
 * When you upload or download Object Storage Service (OSS) objects on mobile devices, a large number of STS API requests are sent. In this case, repeated use of an STS token may not meet your business requirements. To avoid the limit on STS API requests from affecting access to OSS, you can **add a signature to the URL of an OSS object**. For more information, see [Add signatures to URLs](https://help.aliyun.com/document_detail/31952.html) and [Obtain signature information from the server and upload data to OSS](https://help.aliyun.com/document_detail/31926.html).
 *
 * @param request AssumeRoleRequest
 * @return AssumeRoleResponse
 */
AssumeRoleResponse Client::assumeRole(const AssumeRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assumeRoleWithOptions(request, runtime);
}

/**
 * @summary Queries a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using OpenID Connect (OIDC).
 *
 * @description ### Prerequisites
 * *   An OIDC token is obtained from an external identity provider (IdP).
 * *   An OIDC IdP is created in the RAM console. For more information, see [Create an OIDC IdP](https://help.aliyun.com/document_detail/327123.html) or [CreateOIDCProvider](https://help.aliyun.com/document_detail/327135.html).
 * *   A RAM role whose trusted entity is an OIDC IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
 *
 * @param request AssumeRoleWithOIDCRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssumeRoleWithOIDCResponse
 */
AssumeRoleWithOIDCResponse Client::assumeRoleWithOIDCWithOptions(const AssumeRoleWithOIDCRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDurationSeconds()) {
    query["DurationSeconds"] = request.getDurationSeconds();
  }

  if (!!request.hasOIDCProviderArn()) {
    query["OIDCProviderArn"] = request.getOIDCProviderArn();
  }

  if (!!request.hasOIDCToken()) {
    query["OIDCToken"] = request.getOIDCToken();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasRoleSessionName()) {
    query["RoleSessionName"] = request.getRoleSessionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssumeRoleWithOIDC"},
    {"version" , "2015-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<AssumeRoleWithOIDCResponse>();
}

/**
 * @summary Queries a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using OpenID Connect (OIDC).
 *
 * @description ### Prerequisites
 * *   An OIDC token is obtained from an external identity provider (IdP).
 * *   An OIDC IdP is created in the RAM console. For more information, see [Create an OIDC IdP](https://help.aliyun.com/document_detail/327123.html) or [CreateOIDCProvider](https://help.aliyun.com/document_detail/327135.html).
 * *   A RAM role whose trusted entity is an OIDC IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
 *
 * @param request AssumeRoleWithOIDCRequest
 * @return AssumeRoleWithOIDCResponse
 */
AssumeRoleWithOIDCResponse Client::assumeRoleWithOIDC(const AssumeRoleWithOIDCRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assumeRoleWithOIDCWithOptions(request, runtime);
}

/**
 * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using Security Assertion Markup Language (SAML).
 *
 * @description ###
 * *   A SAML response is obtained from an external identity provider (IdP).
 * *   A SAML IdP is created in the RAM console. For more information, see [Create a SAML IdP](https://help.aliyun.com/document_detail/116083.html) or [CreateSAMLProvider](https://help.aliyun.com/document_detail/186846.html).
 * *   A RAM role whose trusted entity is a SAML IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
 *
 * @param request AssumeRoleWithSAMLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssumeRoleWithSAMLResponse
 */
AssumeRoleWithSAMLResponse Client::assumeRoleWithSAMLWithOptions(const AssumeRoleWithSAMLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDurationSeconds()) {
    query["DurationSeconds"] = request.getDurationSeconds();
  }

  if (!!request.hasPolicy()) {
    query["Policy"] = request.getPolicy();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasSAMLAssertion()) {
    query["SAMLAssertion"] = request.getSAMLAssertion();
  }

  if (!!request.hasSAMLProviderArn()) {
    query["SAMLProviderArn"] = request.getSAMLProviderArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssumeRoleWithSAML"},
    {"version" , "2015-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<AssumeRoleWithSAMLResponse>();
}

/**
 * @summary Obtains a Security Token Service (STS) token to assume a Resource Access Management (RAM) role during role-based single sign-on (SSO) by using Security Assertion Markup Language (SAML).
 *
 * @description ###
 * *   A SAML response is obtained from an external identity provider (IdP).
 * *   A SAML IdP is created in the RAM console. For more information, see [Create a SAML IdP](https://help.aliyun.com/document_detail/116083.html) or [CreateSAMLProvider](https://help.aliyun.com/document_detail/186846.html).
 * *   A RAM role whose trusted entity is a SAML IdP is created in the RAM console. For more information, see [Create a RAM role for a trusted IdP](https://help.aliyun.com/document_detail/116805.html) or [CreateRole](https://help.aliyun.com/document_detail/28710.html).
 *
 * @param request AssumeRoleWithSAMLRequest
 * @return AssumeRoleWithSAMLResponse
 */
AssumeRoleWithSAMLResponse Client::assumeRoleWithSAML(const AssumeRoleWithSAMLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assumeRoleWithSAMLWithOptions(request, runtime);
}

/**
 * @summary The ID of the Alibaba Cloud account to which the current requester belongs.
 *
 * @param request GetCallerIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallerIdentityResponse
 */
GetCallerIdentityResponse Client::getCallerIdentityWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetCallerIdentity"},
    {"version" , "2015-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallerIdentityResponse>();
}

/**
 * @summary The ID of the Alibaba Cloud account to which the current requester belongs.
 *
 * @return GetCallerIdentityResponse
 */
GetCallerIdentityResponse Client::getCallerIdentity() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallerIdentityWithOptions(runtime);
}
} // namespace AlibabaCloud
} // namespace Sts20150401