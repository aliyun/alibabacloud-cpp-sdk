#include <darabonba/Core.hpp>
#include <alibabacloud/Dm20151123.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <darabonba/http/Form.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Dm20151123::Models;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dm20151123
{

AlibabaCloud::Dm20151123::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dm", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form) {
Darabonba::RuntimeOptions runtime_(json({}));

  Darabonba::Http::Request request_ = Darabonba::Http::Request();
  string boundary = Darabonba::Http::Form::getBoundary();
  request_.setProtocol("HTTPS");
  request_.setMethod("POST");
  request_.setPathname(DARA_STRING_TEMPLATE("/"));
  request_.setHeaders(json({
    {"host" , Darabonba::Convert::stringVal(form["host"])},
    {"date" , Utils::Utils::getDateUTCString()},
    {"user-agent" , Utils::Utils::getUserAgent("")}
  }));
  request_.addHeader("content-type", DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary));
  request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
  auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
  shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

  json respMap = nullptr;
  string bodyStr = Darabonba::Stream::readAsString(response_->body());
  if ((response_->statusCode() >= 400) && (response_->statusCode() < 600)) {
    respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
    json err = json(respMap["Error"]);
    throw ClientException(json({
      {"code" , Darabonba::Convert::stringVal(err["Code"])},
      {"message" , Darabonba::Convert::stringVal(err["Message"])},
      {"data" , json({
        {"httpCode" , response_->statusCode()},
        {"requestId" , Darabonba::Convert::stringVal(err["RequestId"])},
        {"hostId" , Darabonba::Convert::stringVal(err["HostId"])}
      })}
    }));
  }

  respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
  return Darabonba::Core::merge(respMap
  );
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
 * @summary Add IP Protection Information
 *
 * @param request AddIpfilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpfilterResponse
 */
AddIpfilterResponse Client::addIpfilterWithOptions(const AddIpfilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpAddress()) {
    query["IpAddress"] = request.ipAddress();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "AddIpfilter"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<AddIpfilterResponse>();
}

/**
 * @summary Add IP Protection Information
 *
 * @param request AddIpfilterRequest
 * @return AddIpfilterResponse
 */
AddIpfilterResponse Client::addIpfilter(const AddIpfilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpfilterWithOptions(request, runtime);
}

/**
 * @summary Verify Reply Address
 *
 * @param request ApproveReplyMailAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveReplyMailAddressResponse
 */
ApproveReplyMailAddressResponse Client::approveReplyMailAddressWithOptions(const ApproveReplyMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTicket()) {
    query["Ticket"] = request.ticket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ApproveReplyMailAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ApproveReplyMailAddressResponse>();
}

/**
 * @summary Verify Reply Address
 *
 * @param request ApproveReplyMailAddressRequest
 * @return ApproveReplyMailAddressResponse
 */
ApproveReplyMailAddressResponse Client::approveReplyMailAddress(const ApproveReplyMailAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveReplyMailAddressWithOptions(request, runtime);
}

/**
 * @summary Batch Send Emails
 *
 * @param request BatchSendMailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSendMailResponse
 */
BatchSendMailResponse Client::batchSendMailWithOptions(const BatchSendMailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasClickTrace()) {
    query["ClickTrace"] = request.clickTrace();
  }

  if (!!request.hasHeaders()) {
    query["Headers"] = request.headers();
  }

  if (!!request.hasIpPoolId()) {
    query["IpPoolId"] = request.ipPoolId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReceiversName()) {
    query["ReceiversName"] = request.receiversName();
  }

  if (!!request.hasReplyAddress()) {
    query["ReplyAddress"] = request.replyAddress();
  }

  if (!!request.hasReplyAddressAlias()) {
    query["ReplyAddressAlias"] = request.replyAddressAlias();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasUnSubscribeFilterLevel()) {
    query["UnSubscribeFilterLevel"] = request.unSubscribeFilterLevel();
  }

  if (!!request.hasUnSubscribeLinkType()) {
    query["UnSubscribeLinkType"] = request.unSubscribeLinkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "BatchSendMail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<BatchSendMailResponse>();
}

/**
 * @summary Batch Send Emails
 *
 * @param request BatchSendMailRequest
 * @return BatchSendMailResponse
 */
BatchSendMailResponse Client::batchSendMail(const BatchSendMailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSendMailWithOptions(request, runtime);
}

/**
 * @summary 修改域名DKIM记录
 *
 * @param request ChangeDomainDkimRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDomainDkimRecordResponse
 */
ChangeDomainDkimRecordResponse Client::changeDomainDkimRecordWithOptions(const ChangeDomainDkimRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDkimRsaLength()) {
    query["DkimRsaLength"] = request.dkimRsaLength();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ChangeDomainDkimRecord"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ChangeDomainDkimRecordResponse>();
}

/**
 * @summary 修改域名DKIM记录
 *
 * @param request ChangeDomainDkimRecordRequest
 * @return ChangeDomainDkimRecordResponse
 */
ChangeDomainDkimRecordResponse Client::changeDomainDkimRecord(const ChangeDomainDkimRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeDomainDkimRecordWithOptions(request, runtime);
}

/**
 * @summary Check Domain Status
 *
 * @param request CheckDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomainWithOptions(const CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CheckDomain"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CheckDomainResponse>();
}

/**
 * @summary Check Domain Status
 *
 * @param request CheckDomainRequest
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomain(const CheckDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainWithOptions(request, runtime);
}

/**
 * @summary Validate Reply-To Address
 *
 * @param request CheckReplyToMailAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckReplyToMailAddressResponse
 */
CheckReplyToMailAddressResponse Client::checkReplyToMailAddressWithOptions(const CheckReplyToMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMailAddressId()) {
    query["MailAddressId"] = request.mailAddressId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CheckReplyToMailAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CheckReplyToMailAddressResponse>();
}

/**
 * @summary Validate Reply-To Address
 *
 * @param request CheckReplyToMailAddressRequest
 * @return CheckReplyToMailAddressResponse
 */
CheckReplyToMailAddressResponse Client::checkReplyToMailAddress(const CheckReplyToMailAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkReplyToMailAddressWithOptions(request, runtime);
}

/**
 * @summary Create Domain
 *
 * @param request CreateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasDkimSelector()) {
    query["dkimSelector"] = request.dkimSelector();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateDomain"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateDomainResponse>();
}

/**
 * @summary Create Domain
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainWithOptions(request, runtime);
}

/**
 * @summary Create a mail address.
 *
 * @param request CreateMailAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMailAddressResponse
 */
CreateMailAddressResponse Client::createMailAddressWithOptions(const CreateMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReplyAddress()) {
    query["ReplyAddress"] = request.replyAddress();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSendtype()) {
    query["Sendtype"] = request.sendtype();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateMailAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateMailAddressResponse>();
}

/**
 * @summary Create a mail address.
 *
 * @param request CreateMailAddressRequest
 * @return CreateMailAddressResponse
 */
CreateMailAddressResponse Client::createMailAddress(const CreateMailAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMailAddressWithOptions(request, runtime);
}

/**
 * @summary Create Receiver List
 *
 * @param request CreateReceiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReceiverResponse
 */
CreateReceiverResponse Client::createReceiverWithOptions(const CreateReceiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReceiversAlias()) {
    query["ReceiversAlias"] = request.receiversAlias();
  }

  if (!!request.hasReceiversName()) {
    query["ReceiversName"] = request.receiversName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateReceiver"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateReceiverResponse>();
}

/**
 * @summary Create Receiver List
 *
 * @param request CreateReceiverRequest
 * @return CreateReceiverResponse
 */
CreateReceiverResponse Client::createReceiver(const CreateReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReceiverWithOptions(request, runtime);
}

/**
 * @summary Create Tag
 *
 * @param request CreateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTagDescription()) {
    query["TagDescription"] = request.tagDescription();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary Create Tag
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagWithOptions(request, runtime);
}

/**
 * @summary Create User\\"s Invalid Address
 *
 * @param request CreateUserSuppressionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserSuppressionResponse
 */
CreateUserSuppressionResponse Client::createUserSuppressionWithOptions(const CreateUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserSuppression"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateUserSuppressionResponse>();
}

/**
 * @summary Create User\\"s Invalid Address
 *
 * @param request CreateUserSuppressionRequest
 * @return CreateUserSuppressionResponse
 */
CreateUserSuppressionResponse Client::createUserSuppression(const CreateUserSuppressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserSuppressionWithOptions(request, runtime);
}

/**
 * @summary Set Dedicated IP Auto Renewal
 *
 * @param request DedicatedIpAutoRenewalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpAutoRenewalResponse
 */
DedicatedIpAutoRenewalResponse Client::dedicatedIpAutoRenewalWithOptions(const DedicatedIpAutoRenewalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewal()) {
    query["AutoRenewal"] = request.autoRenewal();
  }

  if (!!request.hasBuyResourceIds()) {
    query["BuyResourceIds"] = request.buyResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpAutoRenewal"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpAutoRenewalResponse>();
}

/**
 * @summary Set Dedicated IP Auto Renewal
 *
 * @param request DedicatedIpAutoRenewalRequest
 * @return DedicatedIpAutoRenewalResponse
 */
DedicatedIpAutoRenewalResponse Client::dedicatedIpAutoRenewal(const DedicatedIpAutoRenewalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpAutoRenewalWithOptions(request, runtime);
}

/**
 * @summary Change the warmup method for a dedicated IP
 *
 * @param request DedicatedIpChangeWarmupTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpChangeWarmupTypeResponse
 */
DedicatedIpChangeWarmupTypeResponse Client::dedicatedIpChangeWarmupTypeWithOptions(const DedicatedIpChangeWarmupTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasWarmupType()) {
    query["WarmupType"] = request.warmupType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpChangeWarmupType"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpChangeWarmupTypeResponse>();
}

/**
 * @summary Change the warmup method for a dedicated IP
 *
 * @param request DedicatedIpChangeWarmupTypeRequest
 * @return DedicatedIpChangeWarmupTypeResponse
 */
DedicatedIpChangeWarmupTypeResponse Client::dedicatedIpChangeWarmupType(const DedicatedIpChangeWarmupTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpChangeWarmupTypeWithOptions(request, runtime);
}

/**
 * @summary Dedicated IP User IP List
 *
 * @param request DedicatedIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpListResponse
 */
DedicatedIpListResponse Client::dedicatedIpListWithOptions(const DedicatedIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpList"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpListResponse>();
}

/**
 * @summary Dedicated IP User IP List
 *
 * @param request DedicatedIpListRequest
 * @return DedicatedIpListResponse
 */
DedicatedIpListResponse Client::dedicatedIpList(const DedicatedIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpListWithOptions(request, runtime);
}

/**
 * @summary Purchased Independent IPs Not Added to Pool
 *
 * @param request DedicatedIpNonePoolListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpNonePoolListResponse
 */
DedicatedIpNonePoolListResponse Client::dedicatedIpNonePoolListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DedicatedIpNonePoolList"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpNonePoolListResponse>();
}

/**
 * @summary Purchased Independent IPs Not Added to Pool
 *
 * @return DedicatedIpNonePoolListResponse
 */
DedicatedIpNonePoolListResponse Client::dedicatedIpNonePoolList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpNonePoolListWithOptions(runtime);
}

/**
 * @summary Creation of Independent IP Pool
 *
 * @param request DedicatedIpPoolCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpPoolCreateResponse
 */
DedicatedIpPoolCreateResponse Client::dedicatedIpPoolCreateWithOptions(const DedicatedIpPoolCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuyResourceIds()) {
    query["BuyResourceIds"] = request.buyResourceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpPoolCreate"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpPoolCreateResponse>();
}

/**
 * @summary Creation of Independent IP Pool
 *
 * @param request DedicatedIpPoolCreateRequest
 * @return DedicatedIpPoolCreateResponse
 */
DedicatedIpPoolCreateResponse Client::dedicatedIpPoolCreate(const DedicatedIpPoolCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpPoolCreateWithOptions(request, runtime);
}

/**
 * @summary 独立IP池删除
 *
 * @param request DedicatedIpPoolDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpPoolDeleteResponse
 */
DedicatedIpPoolDeleteResponse Client::dedicatedIpPoolDeleteWithOptions(const DedicatedIpPoolDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpPoolDelete"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpPoolDeleteResponse>();
}

/**
 * @summary 独立IP池删除
 *
 * @param request DedicatedIpPoolDeleteRequest
 * @return DedicatedIpPoolDeleteResponse
 */
DedicatedIpPoolDeleteResponse Client::dedicatedIpPoolDelete(const DedicatedIpPoolDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpPoolDeleteWithOptions(request, runtime);
}

/**
 * @summary Dedicated IP Pool List
 *
 * @param request DedicatedIpPoolListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpPoolListResponse
 */
DedicatedIpPoolListResponse Client::dedicatedIpPoolListWithOptions(const DedicatedIpPoolListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpPoolList"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpPoolListResponse>();
}

/**
 * @summary Dedicated IP Pool List
 *
 * @param request DedicatedIpPoolListRequest
 * @return DedicatedIpPoolListResponse
 */
DedicatedIpPoolListResponse Client::dedicatedIpPoolList(const DedicatedIpPoolListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpPoolListWithOptions(request, runtime);
}

/**
 * @summary Update of dedicated IP Pool
 *
 * @param request DedicatedIpPoolUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DedicatedIpPoolUpdateResponse
 */
DedicatedIpPoolUpdateResponse Client::dedicatedIpPoolUpdateWithOptions(const DedicatedIpPoolUpdateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuyResourceIds()) {
    query["BuyResourceIds"] = request.buyResourceIds();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasUpdateResource()) {
    query["UpdateResource"] = request.updateResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DedicatedIpPoolUpdate"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DedicatedIpPoolUpdateResponse>();
}

/**
 * @summary Update of dedicated IP Pool
 *
 * @param request DedicatedIpPoolUpdateRequest
 * @return DedicatedIpPoolUpdateResponse
 */
DedicatedIpPoolUpdateResponse Client::dedicatedIpPoolUpdate(const DedicatedIpPoolUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dedicatedIpPoolUpdateWithOptions(request, runtime);
}

/**
 * @summary Delete Domain
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary Delete Domain
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Remove invalid addresses from the invalid address database
 *
 * @param request DeleteInvalidAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInvalidAddressResponse
 */
DeleteInvalidAddressResponse Client::deleteInvalidAddressWithOptions(const DeleteInvalidAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasToAddress()) {
    query["ToAddress"] = request.toAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInvalidAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteInvalidAddressResponse>();
}

/**
 * @summary Remove invalid addresses from the invalid address database
 *
 * @param request DeleteInvalidAddressRequest
 * @return DeleteInvalidAddressResponse
 */
DeleteInvalidAddressResponse Client::deleteInvalidAddress(const DeleteInvalidAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInvalidAddressWithOptions(request, runtime);
}

/**
 * @summary Delete IP Protection Information
 *
 * @param request DeleteIpfilterByEdmIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpfilterByEdmIdResponse
 */
DeleteIpfilterByEdmIdResponse Client::deleteIpfilterByEdmIdWithOptions(const DeleteIpfilterByEdmIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromType()) {
    query["FromType"] = request.fromType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteIpfilterByEdmId"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteIpfilterByEdmIdResponse>();
}

/**
 * @summary Delete IP Protection Information
 *
 * @param request DeleteIpfilterByEdmIdRequest
 * @return DeleteIpfilterByEdmIdResponse
 */
DeleteIpfilterByEdmIdResponse Client::deleteIpfilterByEdmId(const DeleteIpfilterByEdmIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpfilterByEdmIdWithOptions(request, runtime);
}

/**
 * @summary Delete Mail Address
 *
 * @param request DeleteMailAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMailAddressResponse
 */
DeleteMailAddressResponse Client::deleteMailAddressWithOptions(const DeleteMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMailAddressId()) {
    query["MailAddressId"] = request.mailAddressId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMailAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteMailAddressResponse>();
}

/**
 * @summary Delete Mail Address
 *
 * @param request DeleteMailAddressRequest
 * @return DeleteMailAddressResponse
 */
DeleteMailAddressResponse Client::deleteMailAddress(const DeleteMailAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMailAddressWithOptions(request, runtime);
}

/**
 * @summary Delete Receiver List
 *
 * @param request DeleteReceiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReceiverResponse
 */
DeleteReceiverResponse Client::deleteReceiverWithOptions(const DeleteReceiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.receiverId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteReceiver"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteReceiverResponse>();
}

/**
 * @summary Delete Receiver List
 *
 * @param request DeleteReceiverRequest
 * @return DeleteReceiverResponse
 */
DeleteReceiverResponse Client::deleteReceiver(const DeleteReceiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReceiverWithOptions(request, runtime);
}

/**
 * @summary Delete a Single Recipient
 *
 * @param request DeleteReceiverDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReceiverDetailResponse
 */
DeleteReceiverDetailResponse Client::deleteReceiverDetailWithOptions(const DeleteReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.receiverId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteReceiverDetail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteReceiverDetailResponse>();
}

/**
 * @summary Delete a Single Recipient
 *
 * @param request DeleteReceiverDetailRequest
 * @return DeleteReceiverDetailResponse
 */
DeleteReceiverDetailResponse Client::deleteReceiverDetail(const DeleteReceiverDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReceiverDetailWithOptions(request, runtime);
}

/**
 * @summary Delete Tag
 *
 * @param request DeleteTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary Delete Tag
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagWithOptions(request, runtime);
}

/**
 * @summary Retrieve account information.
 *
 * @param request DescAccountSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescAccountSummaryResponse
 */
DescAccountSummaryResponse Client::descAccountSummaryWithOptions(const DescAccountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescAccountSummary"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescAccountSummaryResponse>();
}

/**
 * @summary Retrieve account information.
 *
 * @param request DescAccountSummaryRequest
 * @return DescAccountSummaryResponse
 */
DescAccountSummaryResponse Client::descAccountSummary(const DescAccountSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return descAccountSummaryWithOptions(request, runtime);
}

/**
 * @summary Get Domain Details
 *
 * @param request DescDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescDomainResponse
 */
DescDomainResponse Client::descDomainWithOptions(const DescDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainId()) {
    query["DomainId"] = request.domainId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRequireRealTimeDnsRecords()) {
    query["RequireRealTimeDnsRecords"] = request.requireRealTimeDnsRecords();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DescDomain"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DescDomainResponse>();
}

/**
 * @summary Get Domain Details
 *
 * @param request DescDomainRequest
 * @return DescDomainResponse
 */
DescDomainResponse Client::descDomain(const DescDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return descDomainWithOptions(request, runtime);
}

/**
 * @summary 获取专属ip的预热详情信息
 *
 * @param request GetDedicatedIpWarmUpDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDedicatedIpWarmUpDetailResponse
 */
GetDedicatedIpWarmUpDetailResponse Client::getDedicatedIpWarmUpDetailWithOptions(const GetDedicatedIpWarmUpDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedIp()) {
    query["DedicatedIp"] = request.dedicatedIp();
  }

  if (!!request.hasEndDayMark()) {
    query["EndDayMark"] = request.endDayMark();
  }

  if (!!request.hasEsp()) {
    query["Esp"] = request.esp();
  }

  if (!!request.hasStartDayMark()) {
    query["StartDayMark"] = request.startDayMark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetDedicatedIpWarmUpDetail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetDedicatedIpWarmUpDetailResponse>();
}

/**
 * @summary 获取专属ip的预热详情信息
 *
 * @param request GetDedicatedIpWarmUpDetailRequest
 * @return GetDedicatedIpWarmUpDetailResponse
 */
GetDedicatedIpWarmUpDetailResponse Client::getDedicatedIpWarmUpDetail(const GetDedicatedIpWarmUpDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDedicatedIpWarmUpDetailWithOptions(request, runtime);
}

/**
 * @summary 获取专属ip的预热信息
 *
 * @param request GetDedicatedIpWarmUpInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDedicatedIpWarmUpInfoResponse
 */
GetDedicatedIpWarmUpInfoResponse Client::getDedicatedIpWarmUpInfoWithOptions(const GetDedicatedIpWarmUpInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedIp()) {
    query["DedicatedIp"] = request.dedicatedIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetDedicatedIpWarmUpInfo"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetDedicatedIpWarmUpInfoResponse>();
}

/**
 * @summary 获取专属ip的预热信息
 *
 * @param request GetDedicatedIpWarmUpInfoRequest
 * @return GetDedicatedIpWarmUpInfoResponse
 */
GetDedicatedIpWarmUpInfoResponse Client::getDedicatedIpWarmUpInfo(const GetDedicatedIpWarmUpInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDedicatedIpWarmUpInfoWithOptions(request, runtime);
}

/**
 * @summary Get IP Protection Information
 *
 * @param request GetIpProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpProtectionResponse
 */
GetIpProtectionResponse Client::getIpProtectionWithOptions(const GetIpProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetIpProtection"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetIpProtectionResponse>();
}

/**
 * @summary Get IP Protection Information
 *
 * @param request GetIpProtectionRequest
 * @return GetIpProtectionResponse
 */
GetIpProtectionResponse Client::getIpProtection(const GetIpProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpProtectionWithOptions(request, runtime);
}

/**
 * @summary Retrieve IP Protection Information
 *
 * @param request GetIpfilterListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpfilterListResponse
 */
GetIpfilterListResponse Client::getIpfilterListWithOptions(const GetIpfilterListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetIpfilterList"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetIpfilterListResponse>();
}

/**
 * @summary Retrieve IP Protection Information
 *
 * @param request GetIpfilterListRequest
 * @return GetIpfilterListResponse
 */
GetIpfilterListResponse Client::getIpfilterList(const GetIpfilterListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpfilterListWithOptions(request, runtime);
}

/**
 * @summary 获取用户无效地址级别配置
 *
 * @param request GetSuppressionListLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuppressionListLevelResponse
 */
GetSuppressionListLevelResponse Client::getSuppressionListLevelWithOptions(const GetSuppressionListLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetSuppressionListLevel"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetSuppressionListLevelResponse>();
}

/**
 * @summary 获取用户无效地址级别配置
 *
 * @param request GetSuppressionListLevelRequest
 * @return GetSuppressionListLevelResponse
 */
GetSuppressionListLevelResponse Client::getSuppressionListLevel(const GetSuppressionListLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSuppressionListLevelWithOptions(request, runtime);
}

/**
 * @summary Get tracking information
 *
 * @param request GetTrackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrackListResponse
 */
GetTrackListResponse Client::getTrackListWithOptions(const GetTrackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDedicatedIp()) {
    query["DedicatedIp"] = request.dedicatedIp();
  }

  if (!!request.hasDedicatedIpPoolId()) {
    query["DedicatedIpPoolId"] = request.dedicatedIpPoolId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEsp()) {
    query["Esp"] = request.esp();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasOffsetCreateTime()) {
    query["OffsetCreateTime"] = request.offsetCreateTime();
  }

  if (!!request.hasOffsetCreateTimeDesc()) {
    query["OffsetCreateTimeDesc"] = request.offsetCreateTimeDesc();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  if (!!request.hasTotal()) {
    query["Total"] = request.total();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetTrackList"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetTrackListResponse>();
}

/**
 * @summary Get tracking information
 *
 * @param request GetTrackListRequest
 * @return GetTrackListResponse
 */
GetTrackListResponse Client::getTrackList(const GetTrackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTrackListWithOptions(request, runtime);
}

/**
 * @summary Get tracking information based on the sender address and tag name
 *
 * @param request GetTrackListByMailFromAndTagNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTrackListByMailFromAndTagNameResponse
 */
GetTrackListByMailFromAndTagNameResponse Client::getTrackListByMailFromAndTagNameWithOptions(const GetTrackListByMailFromAndTagNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDedicatedIp()) {
    query["DedicatedIp"] = request.dedicatedIp();
  }

  if (!!request.hasDedicatedIpPoolId()) {
    query["DedicatedIpPoolId"] = request.dedicatedIpPoolId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEsp()) {
    query["Esp"] = request.esp();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasOffsetCreateTime()) {
    query["OffsetCreateTime"] = request.offsetCreateTime();
  }

  if (!!request.hasOffsetCreateTimeDesc()) {
    query["OffsetCreateTimeDesc"] = request.offsetCreateTimeDesc();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  if (!!request.hasTotal()) {
    query["Total"] = request.total();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetTrackListByMailFromAndTagName"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetTrackListByMailFromAndTagNameResponse>();
}

/**
 * @summary Get tracking information based on the sender address and tag name
 *
 * @param request GetTrackListByMailFromAndTagNameRequest
 * @return GetTrackListByMailFromAndTagNameResponse
 */
GetTrackListByMailFromAndTagNameResponse Client::getTrackListByMailFromAndTagName(const GetTrackListByMailFromAndTagNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTrackListByMailFromAndTagNameWithOptions(request, runtime);
}

/**
 * @summary Get Account Details
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Get Account Details
 *
 * @return GetUserResponse
 */
GetUserResponse Client::getUser() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(runtime);
}

/**
 * @summary 获取发信的黑名单列表
 *
 * @param request ListBlockSendingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBlockSendingResponse
 */
ListBlockSendingResponse Client::listBlockSendingWithOptions(const ListBlockSendingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasBlockEmail()) {
    query["BlockEmail"] = request.blockEmail();
  }

  if (!!request.hasBlockType()) {
    query["BlockType"] = request.blockType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSenderEmail()) {
    query["SenderEmail"] = request.senderEmail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListBlockSending"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListBlockSendingResponse>();
}

/**
 * @summary 获取发信的黑名单列表
 *
 * @param request ListBlockSendingRequest
 * @return ListBlockSendingResponse
 */
ListBlockSendingResponse Client::listBlockSending(const ListBlockSendingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBlockSendingWithOptions(request, runtime);
}

/**
 * @summary List User Invalid Addresses.
 *
 * @param request ListUserSuppressionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserSuppressionResponse
 */
ListUserSuppressionResponse Client::listUserSuppressionWithOptions(const ListUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasEndBounceTime()) {
    query["EndBounceTime"] = request.endBounceTime();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.endCreateTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartBounceTime()) {
    query["StartBounceTime"] = request.startBounceTime();
  }

  if (!!request.hasStartCreateTime()) {
    query["StartCreateTime"] = request.startCreateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListUserSuppression"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListUserSuppressionResponse>();
}

/**
 * @summary List User Invalid Addresses.
 *
 * @param request ListUserSuppressionRequest
 * @return ListUserSuppressionResponse
 */
ListUserSuppressionResponse Client::listUserSuppression(const ListUserSuppressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserSuppressionWithOptions(request, runtime);
}

/**
 * @summary Modify the sending address
 *
 * @param request ModifyMailAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMailAddressResponse
 */
ModifyMailAddressResponse Client::modifyMailAddressWithOptions(const ModifyMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMailAddressId()) {
    query["MailAddressId"] = request.mailAddressId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasReplyAddress()) {
    query["ReplyAddress"] = request.replyAddress();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ModifyMailAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ModifyMailAddressResponse>();
}

/**
 * @summary Modify the sending address
 *
 * @param request ModifyMailAddressRequest
 * @return ModifyMailAddressResponse
 */
ModifyMailAddressResponse Client::modifyMailAddress(const ModifyMailAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMailAddressWithOptions(request, runtime);
}

/**
 * @summary Modify the domain-level password
 *
 * @param request ModifyPWByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPWByDomainResponse
 */
ModifyPWByDomainResponse Client::modifyPWByDomainWithOptions(const ModifyPWByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ModifyPWByDomain"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ModifyPWByDomainResponse>();
}

/**
 * @summary Modify the domain-level password
 *
 * @param request ModifyPWByDomainRequest
 * @return ModifyPWByDomainResponse
 */
ModifyPWByDomainResponse Client::modifyPWByDomain(const ModifyPWByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPWByDomainWithOptions(request, runtime);
}

/**
 * @summary Modify Tag
 *
 * @param request ModifyTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTagResponse
 */
ModifyTagResponse Client::modifyTagWithOptions(const ModifyTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTagDescription()) {
    query["TagDescription"] = request.tagDescription();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ModifyTag"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ModifyTagResponse>();
}

/**
 * @summary Modify Tag
 *
 * @param request ModifyTagRequest
 * @return ModifyTagResponse
 */
ModifyTagResponse Client::modifyTag(const ModifyTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTagWithOptions(request, runtime);
}

/**
 * @summary Query domain information
 *
 * @param request QueryDomainByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainByParamResponse
 */
QueryDomainByParamResponse Client::queryDomainByParamWithOptions(const QueryDomainByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryDomainByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryDomainByParamResponse>();
}

/**
 * @summary Query domain information
 *
 * @param request QueryDomainByParamRequest
 * @return QueryDomainByParamResponse
 */
QueryDomainByParamResponse Client::queryDomainByParam(const QueryDomainByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByParamWithOptions(request, runtime);
}

/**
 * @summary NextStart changed to string
 *
 * @description Retrieve deduplicated invalid address information. If an email is sent to the same invalid address multiple times, only the first occurrence will be recorded. The query should be based on the time when the address was first classified as invalid.
 *
 * @param request QueryInvalidAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInvalidAddressResponse
 */
QueryInvalidAddressResponse Client::queryInvalidAddressWithOptions(const QueryInvalidAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasNextStart()) {
    query["NextStart"] = request.nextStart();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryInvalidAddress"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryInvalidAddressResponse>();
}

/**
 * @summary NextStart changed to string
 *
 * @description Retrieve deduplicated invalid address information. If an email is sent to the same invalid address multiple times, only the first occurrence will be recorded. The query should be based on the time when the address was first classified as invalid.
 *
 * @param request QueryInvalidAddressRequest
 * @return QueryInvalidAddressResponse
 */
QueryInvalidAddressResponse Client::queryInvalidAddress(const QueryInvalidAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInvalidAddressWithOptions(request, runtime);
}

/**
 * @summary Query the list of sending addresses.
 *
 * @param request QueryMailAddressByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMailAddressByParamResponse
 */
QueryMailAddressByParamResponse Client::queryMailAddressByParamWithOptions(const QueryMailAddressByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSendtype()) {
    query["Sendtype"] = request.sendtype();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryMailAddressByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryMailAddressByParamResponse>();
}

/**
 * @summary Query the list of sending addresses.
 *
 * @param request QueryMailAddressByParamRequest
 * @return QueryMailAddressByParamResponse
 */
QueryMailAddressByParamResponse Client::queryMailAddressByParam(const QueryMailAddressByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMailAddressByParamWithOptions(request, runtime);
}

/**
 * @summary Query the details of the recipient list
 *
 * @param request QueryReceiverByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReceiverByParamResponse
 */
QueryReceiverByParamResponse Client::queryReceiverByParamWithOptions(const QueryReceiverByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryReceiverByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryReceiverByParamResponse>();
}

/**
 * @summary Query the details of the recipient list
 *
 * @param request QueryReceiverByParamRequest
 * @return QueryReceiverByParamResponse
 */
QueryReceiverByParamResponse Client::queryReceiverByParam(const QueryReceiverByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReceiverByParamWithOptions(request, runtime);
}

/**
 * @summary Retrieve detailed information about a recipient list
 *
 * @param request QueryReceiverDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReceiverDetailResponse
 */
QueryReceiverDetailResponse Client::queryReceiverDetailWithOptions(const QueryReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasNextStart()) {
    query["NextStart"] = request.nextStart();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.receiverId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryReceiverDetail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryReceiverDetailResponse>();
}

/**
 * @summary Retrieve detailed information about a recipient list
 *
 * @param request QueryReceiverDetailRequest
 * @return QueryReceiverDetailResponse
 */
QueryReceiverDetailResponse Client::queryReceiverDetail(const QueryReceiverDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReceiverDetailWithOptions(request, runtime);
}

/**
 * @summary Call QueryTagByParam to retrieve tags.
 *
 * @param request QueryTagByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagByParamResponse
 */
QueryTagByParamResponse Client::queryTagByParamWithOptions(const QueryTagByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryTagByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryTagByParamResponse>();
}

/**
 * @summary Call QueryTagByParam to retrieve tags.
 *
 * @param request QueryTagByParamRequest
 * @return QueryTagByParamResponse
 */
QueryTagByParamResponse Client::queryTagByParam(const QueryTagByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagByParamWithOptions(request, runtime);
}

/**
 * @summary Query task list
 *
 * @param request QueryTaskByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskByParamResponse
 */
QueryTaskByParamResponse Client::queryTaskByParamWithOptions(const QueryTaskByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryTaskByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryTaskByParamResponse>();
}

/**
 * @summary Query task list
 *
 * @param request QueryTaskByParamRequest
 * @return QueryTaskByParamResponse
 */
QueryTaskByParamResponse Client::queryTaskByParam(const QueryTaskByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskByParamWithOptions(request, runtime);
}

/**
 * @summary 删除用户无效地址
 *
 * @param request RemoveUserSuppressionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserSuppressionResponse
 */
RemoveUserSuppressionResponse Client::removeUserSuppressionWithOptions(const RemoveUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSuppressionIds()) {
    query["SuppressionIds"] = request.suppressionIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "RemoveUserSuppression"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<RemoveUserSuppressionResponse>();
}

/**
 * @summary 删除用户无效地址
 *
 * @param request RemoveUserSuppressionRequest
 * @return RemoveUserSuppressionResponse
 */
RemoveUserSuppressionResponse Client::removeUserSuppression(const RemoveUserSuppressionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserSuppressionWithOptions(request, runtime);
}

/**
 * @summary Create a Single Recipient
 *
 * @param request SaveReceiverDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveReceiverDetailResponse
 */
SaveReceiverDetailResponse Client::saveReceiverDetailWithOptions(const SaveReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.detail();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.receiverId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "SaveReceiverDetail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SaveReceiverDetailResponse>();
}

/**
 * @summary Create a Single Recipient
 *
 * @param request SaveReceiverDetailRequest
 * @return SaveReceiverDetailResponse
 */
SaveReceiverDetailResponse Client::saveReceiverDetail(const SaveReceiverDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveReceiverDetailWithOptions(request, runtime);
}

/**
 * @summary Send Template Test Email
 *
 * @param request SendTestByTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTestByTemplateResponse
 */
SendTestByTemplateResponse Client::sendTestByTemplateWithOptions(const SendTestByTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasBirthday()) {
    query["Birthday"] = request.birthday();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasGender()) {
    query["Gender"] = request.gender();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.nickName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "SendTestByTemplate"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SendTestByTemplateResponse>();
}

/**
 * @summary Send Template Test Email
 *
 * @param request SendTestByTemplateRequest
 * @return SendTestByTemplateResponse
 */
SendTestByTemplateResponse Client::sendTestByTemplate(const SendTestByTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendTestByTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieve Sending Data under Specified Conditions
 *
 * @param request SenderStatisticsByTagNameAndBatchIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SenderStatisticsByTagNameAndBatchIDResponse
 */
SenderStatisticsByTagNameAndBatchIDResponse Client::senderStatisticsByTagNameAndBatchIDWithOptions(const SenderStatisticsByTagNameAndBatchIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDedicatedIp()) {
    query["DedicatedIp"] = request.dedicatedIp();
  }

  if (!!request.hasDedicatedIpPoolId()) {
    query["DedicatedIpPoolId"] = request.dedicatedIpPoolId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEsp()) {
    query["Esp"] = request.esp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "SenderStatisticsByTagNameAndBatchID"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SenderStatisticsByTagNameAndBatchIDResponse>();
}

/**
 * @summary Retrieve Sending Data under Specified Conditions
 *
 * @param request SenderStatisticsByTagNameAndBatchIDRequest
 * @return SenderStatisticsByTagNameAndBatchIDResponse
 */
SenderStatisticsByTagNameAndBatchIDResponse Client::senderStatisticsByTagNameAndBatchID(const SenderStatisticsByTagNameAndBatchIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return senderStatisticsByTagNameAndBatchIDWithOptions(request, runtime);
}

/**
 * @summary Query Delivery Result Details
 *
 * @param request SenderStatisticsDetailByParamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SenderStatisticsDetailByParamResponse
 */
SenderStatisticsDetailByParamResponse Client::senderStatisticsDetailByParamWithOptions(const SenderStatisticsDetailByParamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasNextStart()) {
    query["NextStart"] = request.nextStart();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  if (!!request.hasToAddress()) {
    query["ToAddress"] = request.toAddress();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "SenderStatisticsDetailByParam"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SenderStatisticsDetailByParamResponse>();
}

/**
 * @summary Query Delivery Result Details
 *
 * @param request SenderStatisticsDetailByParamRequest
 * @return SenderStatisticsDetailByParamResponse
 */
SenderStatisticsDetailByParamResponse Client::senderStatisticsDetailByParam(const SenderStatisticsDetailByParamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return senderStatisticsDetailByParamWithOptions(request, runtime);
}

/**
 * @summary 设置用户无效地址级别配置
 *
 * @param request SetSuppressionListLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSuppressionListLevelResponse
 */
SetSuppressionListLevelResponse Client::setSuppressionListLevelWithOptions(const SetSuppressionListLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSuppressionListLevel()) {
    query["SuppressionListLevel"] = request.suppressionListLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "SetSuppressionListLevel"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SetSuppressionListLevelResponse>();
}

/**
 * @summary 设置用户无效地址级别配置
 *
 * @param request SetSuppressionListLevelRequest
 * @return SetSuppressionListLevelResponse
 */
SetSuppressionListLevelResponse Client::setSuppressionListLevel(const SetSuppressionListLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSuppressionListLevelWithOptions(request, runtime);
}

/**
 * @summary API for Sending Emails
 *
 * @param request SingleSendMailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SingleSendMailResponse
 */
SingleSendMailResponse Client::singleSendMailWithOptions(const SingleSendMailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasAddressType()) {
    body["AddressType"] = request.addressType();
  }

  if (!!request.hasAttachments()) {
    body["Attachments"] = request.attachments();
  }

  if (!!request.hasClickTrace()) {
    body["ClickTrace"] = request.clickTrace();
  }

  if (!!request.hasFromAlias()) {
    body["FromAlias"] = request.fromAlias();
  }

  if (!!request.hasHeaders()) {
    body["Headers"] = request.headers();
  }

  if (!!request.hasHtmlBody()) {
    body["HtmlBody"] = request.htmlBody();
  }

  if (!!request.hasIpPoolId()) {
    body["IpPoolId"] = request.ipPoolId();
  }

  if (!!request.hasReplyAddress()) {
    body["ReplyAddress"] = request.replyAddress();
  }

  if (!!request.hasReplyAddressAlias()) {
    body["ReplyAddressAlias"] = request.replyAddressAlias();
  }

  if (!!request.hasReplyToAddress()) {
    body["ReplyToAddress"] = request.replyToAddress();
  }

  if (!!request.hasSubject()) {
    body["Subject"] = request.subject();
  }

  if (!!request.hasTagName()) {
    body["TagName"] = request.tagName();
  }

  if (!!request.hasTextBody()) {
    body["TextBody"] = request.textBody();
  }

  if (!!request.hasToAddress()) {
    body["ToAddress"] = request.toAddress();
  }

  if (!!request.hasUnSubscribeFilterLevel()) {
    body["UnSubscribeFilterLevel"] = request.unSubscribeFilterLevel();
  }

  if (!!request.hasUnSubscribeLinkType()) {
    body["UnSubscribeLinkType"] = request.unSubscribeLinkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SingleSendMail"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<SingleSendMailResponse>();
}

/**
 * @summary API for Sending Emails
 *
 * @param request SingleSendMailRequest
 * @return SingleSendMailResponse
 */
SingleSendMailResponse Client::singleSendMail(const SingleSendMailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return singleSendMailWithOptions(request, runtime);
}

SingleSendMailResponse Client::singleSendMailAdvance(const SingleSendMailAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }));
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }));
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "Dm"},
    {"RegionId" , _regionId}
  });
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }));
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  SingleSendMailRequest singleSendMailReq = SingleSendMailRequest();
  Utils::Utils::convert(request, singleSendMailReq);
  if (!!request.hasAttachments()) {
    int32_t i0 = 0;
    for (SingleSendMailAdvanceRequestAttachments item0 : request.attachments()) {
      if (!!item0.hasAttachmentUrlObject()) {
        authResponse = authClient->callApi(authParams, authReq, runtime);
        tmpBody = json(authResponse.at("body"));
        useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
        authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
        fileObj = FileField(json({
          {"filename" , authResponseBody.at("ObjectKey")},
          {"content" , item0.attachmentUrlObject()},
          {"contentType" , ""}
        }));
        ossHeader = json({
          {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
          {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
          {"policy" , authResponseBody.at("EncodedPolicy")},
          {"Signature" , authResponseBody.at("Signature")},
          {"key" , authResponseBody.at("ObjectKey")},
          {"file" , fileObj},
          {"success_action_status" , "201"}
        });
        _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
        SingleSendMailRequestAttachments tmpObj = singleSendMailReq.attachments().at(i0);
        tmpObj.setAttachmentUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
        i0++;
      }

    }
  }

  SingleSendMailResponse singleSendMailResp = singleSendMailWithOptions(singleSendMailReq, runtime);
  return singleSendMailResp;
}

/**
 * @summary Lift sending restrictions due to unsubscription, reporting, etc.
 *
 * @param request UnblockSendingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnblockSendingResponse
 */
UnblockSendingResponse Client::unblockSendingWithOptions(const UnblockSendingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlockEmail()) {
    query["BlockEmail"] = request.blockEmail();
  }

  if (!!request.hasBlockType()) {
    query["BlockType"] = request.blockType();
  }

  if (!!request.hasSenderEmail()) {
    query["SenderEmail"] = request.senderEmail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UnblockSending"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UnblockSendingResponse>();
}

/**
 * @summary Lift sending restrictions due to unsubscription, reporting, etc.
 *
 * @param request UnblockSendingRequest
 * @return UnblockSendingResponse
 */
UnblockSendingResponse Client::unblockSending(const UnblockSendingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unblockSendingWithOptions(request, runtime);
}

/**
 * @summary Update IP Protection API
 *
 * @param request UpdateIpProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpProtectionResponse
 */
UpdateIpProtectionResponse Client::updateIpProtectionWithOptions(const UpdateIpProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpProtection()) {
    query["IpProtection"] = request.ipProtection();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIpProtection"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateIpProtectionResponse>();
}

/**
 * @summary Update IP Protection API
 *
 * @param request UpdateIpProtectionRequest
 * @return UpdateIpProtectionResponse
 */
UpdateIpProtectionResponse Client::updateIpProtection(const UpdateIpProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpProtectionWithOptions(request, runtime);
}

/**
 * @summary Update account information
 *
 * @param tmpReq UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserShrinkRequest request = UpdateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUser()) {
    request.setUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.user(), "User", "json"));
  }

  json body = {};
  if (!!request.hasUserShrink()) {
    body["User"] = request.userShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2015-11-23"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Update account information
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dm20151123