// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DM20151123_HPP_
#define ALIBABACLOUD_DM20151123_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dm20151123Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dm20151123.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Add IP Protection Information
       *
       * @param request AddIpfilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIpfilterResponse
       */
      Models::AddIpfilterResponse addIpfilterWithOptions(const Models::AddIpfilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add IP Protection Information
       *
       * @param request AddIpfilterRequest
       * @return AddIpfilterResponse
       */
      Models::AddIpfilterResponse addIpfilter(const Models::AddIpfilterRequest &request);

      /**
       * @summary Verify Reply Address
       *
       * @param request ApproveReplyMailAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApproveReplyMailAddressResponse
       */
      Models::ApproveReplyMailAddressResponse approveReplyMailAddressWithOptions(const Models::ApproveReplyMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verify Reply Address
       *
       * @param request ApproveReplyMailAddressRequest
       * @return ApproveReplyMailAddressResponse
       */
      Models::ApproveReplyMailAddressResponse approveReplyMailAddress(const Models::ApproveReplyMailAddressRequest &request);

      /**
       * @summary Batch Send Emails
       *
       * @param request BatchSendMailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSendMailResponse
       */
      Models::BatchSendMailResponse batchSendMailWithOptions(const Models::BatchSendMailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch Send Emails
       *
       * @param request BatchSendMailRequest
       * @return BatchSendMailResponse
       */
      Models::BatchSendMailResponse batchSendMail(const Models::BatchSendMailRequest &request);

      /**
       * @summary 修改域名DKIM记录
       *
       * @param request ChangeDomainDkimRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDomainDkimRecordResponse
       */
      Models::ChangeDomainDkimRecordResponse changeDomainDkimRecordWithOptions(const Models::ChangeDomainDkimRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改域名DKIM记录
       *
       * @param request ChangeDomainDkimRecordRequest
       * @return ChangeDomainDkimRecordResponse
       */
      Models::ChangeDomainDkimRecordResponse changeDomainDkimRecord(const Models::ChangeDomainDkimRecordRequest &request);

      /**
       * @summary Check Domain Status
       *
       * @param request CheckDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomainWithOptions(const Models::CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check Domain Status
       *
       * @param request CheckDomainRequest
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomain(const Models::CheckDomainRequest &request);

      /**
       * @summary Validate Reply-To Address
       *
       * @param request CheckReplyToMailAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckReplyToMailAddressResponse
       */
      Models::CheckReplyToMailAddressResponse checkReplyToMailAddressWithOptions(const Models::CheckReplyToMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validate Reply-To Address
       *
       * @param request CheckReplyToMailAddressRequest
       * @return CheckReplyToMailAddressResponse
       */
      Models::CheckReplyToMailAddressResponse checkReplyToMailAddress(const Models::CheckReplyToMailAddressRequest &request);

      /**
       * @summary Create Domain
       *
       * @param request CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Domain
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @summary Create a mail address.
       *
       * @param request CreateMailAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMailAddressResponse
       */
      Models::CreateMailAddressResponse createMailAddressWithOptions(const Models::CreateMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a mail address.
       *
       * @param request CreateMailAddressRequest
       * @return CreateMailAddressResponse
       */
      Models::CreateMailAddressResponse createMailAddress(const Models::CreateMailAddressRequest &request);

      /**
       * @summary Create Receiver List
       *
       * @param request CreateReceiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiverWithOptions(const Models::CreateReceiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Receiver List
       *
       * @param request CreateReceiverRequest
       * @return CreateReceiverResponse
       */
      Models::CreateReceiverResponse createReceiver(const Models::CreateReceiverRequest &request);

      /**
       * @summary Create Tag
       *
       * @param request CreateTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTagWithOptions(const Models::CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Tag
       *
       * @param request CreateTagRequest
       * @return CreateTagResponse
       */
      Models::CreateTagResponse createTag(const Models::CreateTagRequest &request);

      /**
       * @summary Create User\\"s Invalid Address
       *
       * @param request CreateUserSuppressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserSuppressionResponse
       */
      Models::CreateUserSuppressionResponse createUserSuppressionWithOptions(const Models::CreateUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create User\\"s Invalid Address
       *
       * @param request CreateUserSuppressionRequest
       * @return CreateUserSuppressionResponse
       */
      Models::CreateUserSuppressionResponse createUserSuppression(const Models::CreateUserSuppressionRequest &request);

      /**
       * @summary Set Dedicated IP Auto Renewal
       *
       * @param request DedicatedIpAutoRenewalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpAutoRenewalResponse
       */
      Models::DedicatedIpAutoRenewalResponse dedicatedIpAutoRenewalWithOptions(const Models::DedicatedIpAutoRenewalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set Dedicated IP Auto Renewal
       *
       * @param request DedicatedIpAutoRenewalRequest
       * @return DedicatedIpAutoRenewalResponse
       */
      Models::DedicatedIpAutoRenewalResponse dedicatedIpAutoRenewal(const Models::DedicatedIpAutoRenewalRequest &request);

      /**
       * @summary Change the warmup method for a dedicated IP
       *
       * @param request DedicatedIpChangeWarmupTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpChangeWarmupTypeResponse
       */
      Models::DedicatedIpChangeWarmupTypeResponse dedicatedIpChangeWarmupTypeWithOptions(const Models::DedicatedIpChangeWarmupTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the warmup method for a dedicated IP
       *
       * @param request DedicatedIpChangeWarmupTypeRequest
       * @return DedicatedIpChangeWarmupTypeResponse
       */
      Models::DedicatedIpChangeWarmupTypeResponse dedicatedIpChangeWarmupType(const Models::DedicatedIpChangeWarmupTypeRequest &request);

      /**
       * @summary Dedicated IP User IP List
       *
       * @param request DedicatedIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpListResponse
       */
      Models::DedicatedIpListResponse dedicatedIpListWithOptions(const Models::DedicatedIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dedicated IP User IP List
       *
       * @param request DedicatedIpListRequest
       * @return DedicatedIpListResponse
       */
      Models::DedicatedIpListResponse dedicatedIpList(const Models::DedicatedIpListRequest &request);

      /**
       * @summary Purchased Independent IPs Not Added to Pool
       *
       * @param request DedicatedIpNonePoolListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpNonePoolListResponse
       */
      Models::DedicatedIpNonePoolListResponse dedicatedIpNonePoolListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchased Independent IPs Not Added to Pool
       *
       * @return DedicatedIpNonePoolListResponse
       */
      Models::DedicatedIpNonePoolListResponse dedicatedIpNonePoolList();

      /**
       * @summary Creation of Independent IP Pool
       *
       * @param request DedicatedIpPoolCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpPoolCreateResponse
       */
      Models::DedicatedIpPoolCreateResponse dedicatedIpPoolCreateWithOptions(const Models::DedicatedIpPoolCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creation of Independent IP Pool
       *
       * @param request DedicatedIpPoolCreateRequest
       * @return DedicatedIpPoolCreateResponse
       */
      Models::DedicatedIpPoolCreateResponse dedicatedIpPoolCreate(const Models::DedicatedIpPoolCreateRequest &request);

      /**
       * @summary 独立IP池删除
       *
       * @param request DedicatedIpPoolDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpPoolDeleteResponse
       */
      Models::DedicatedIpPoolDeleteResponse dedicatedIpPoolDeleteWithOptions(const Models::DedicatedIpPoolDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 独立IP池删除
       *
       * @param request DedicatedIpPoolDeleteRequest
       * @return DedicatedIpPoolDeleteResponse
       */
      Models::DedicatedIpPoolDeleteResponse dedicatedIpPoolDelete(const Models::DedicatedIpPoolDeleteRequest &request);

      /**
       * @summary Dedicated IP Pool List
       *
       * @param request DedicatedIpPoolListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpPoolListResponse
       */
      Models::DedicatedIpPoolListResponse dedicatedIpPoolListWithOptions(const Models::DedicatedIpPoolListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dedicated IP Pool List
       *
       * @param request DedicatedIpPoolListRequest
       * @return DedicatedIpPoolListResponse
       */
      Models::DedicatedIpPoolListResponse dedicatedIpPoolList(const Models::DedicatedIpPoolListRequest &request);

      /**
       * @summary Update of dedicated IP Pool
       *
       * @param request DedicatedIpPoolUpdateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DedicatedIpPoolUpdateResponse
       */
      Models::DedicatedIpPoolUpdateResponse dedicatedIpPoolUpdateWithOptions(const Models::DedicatedIpPoolUpdateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update of dedicated IP Pool
       *
       * @param request DedicatedIpPoolUpdateRequest
       * @return DedicatedIpPoolUpdateResponse
       */
      Models::DedicatedIpPoolUpdateResponse dedicatedIpPoolUpdate(const Models::DedicatedIpPoolUpdateRequest &request);

      /**
       * @summary Delete Domain
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Domain
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Remove invalid addresses from the invalid address database
       *
       * @param request DeleteInvalidAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInvalidAddressResponse
       */
      Models::DeleteInvalidAddressResponse deleteInvalidAddressWithOptions(const Models::DeleteInvalidAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove invalid addresses from the invalid address database
       *
       * @param request DeleteInvalidAddressRequest
       * @return DeleteInvalidAddressResponse
       */
      Models::DeleteInvalidAddressResponse deleteInvalidAddress(const Models::DeleteInvalidAddressRequest &request);

      /**
       * @summary Delete IP Protection Information
       *
       * @param request DeleteIpfilterByEdmIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpfilterByEdmIdResponse
       */
      Models::DeleteIpfilterByEdmIdResponse deleteIpfilterByEdmIdWithOptions(const Models::DeleteIpfilterByEdmIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete IP Protection Information
       *
       * @param request DeleteIpfilterByEdmIdRequest
       * @return DeleteIpfilterByEdmIdResponse
       */
      Models::DeleteIpfilterByEdmIdResponse deleteIpfilterByEdmId(const Models::DeleteIpfilterByEdmIdRequest &request);

      /**
       * @summary Delete Mail Address
       *
       * @param request DeleteMailAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMailAddressResponse
       */
      Models::DeleteMailAddressResponse deleteMailAddressWithOptions(const Models::DeleteMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Mail Address
       *
       * @param request DeleteMailAddressRequest
       * @return DeleteMailAddressResponse
       */
      Models::DeleteMailAddressResponse deleteMailAddress(const Models::DeleteMailAddressRequest &request);

      /**
       * @summary Delete Receiver List
       *
       * @param request DeleteReceiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReceiverResponse
       */
      Models::DeleteReceiverResponse deleteReceiverWithOptions(const Models::DeleteReceiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Receiver List
       *
       * @param request DeleteReceiverRequest
       * @return DeleteReceiverResponse
       */
      Models::DeleteReceiverResponse deleteReceiver(const Models::DeleteReceiverRequest &request);

      /**
       * @summary Delete a Single Recipient
       *
       * @param request DeleteReceiverDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteReceiverDetailResponse
       */
      Models::DeleteReceiverDetailResponse deleteReceiverDetailWithOptions(const Models::DeleteReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a Single Recipient
       *
       * @param request DeleteReceiverDetailRequest
       * @return DeleteReceiverDetailResponse
       */
      Models::DeleteReceiverDetailResponse deleteReceiverDetail(const Models::DeleteReceiverDetailRequest &request);

      /**
       * @summary Delete Tag
       *
       * @param request DeleteTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTagWithOptions(const Models::DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Tag
       *
       * @param request DeleteTagRequest
       * @return DeleteTagResponse
       */
      Models::DeleteTagResponse deleteTag(const Models::DeleteTagRequest &request);

      /**
       * @summary Retrieve account information.
       *
       * @param request DescAccountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescAccountSummaryResponse
       */
      Models::DescAccountSummaryResponse descAccountSummaryWithOptions(const Models::DescAccountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve account information.
       *
       * @param request DescAccountSummaryRequest
       * @return DescAccountSummaryResponse
       */
      Models::DescAccountSummaryResponse descAccountSummary(const Models::DescAccountSummaryRequest &request);

      /**
       * @summary Get Domain Details
       *
       * @param request DescDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescDomainResponse
       */
      Models::DescDomainResponse descDomainWithOptions(const Models::DescDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Domain Details
       *
       * @param request DescDomainRequest
       * @return DescDomainResponse
       */
      Models::DescDomainResponse descDomain(const Models::DescDomainRequest &request);

      /**
       * @summary 获取专属ip的预热详情信息
       *
       * @param request GetDedicatedIpWarmUpDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDedicatedIpWarmUpDetailResponse
       */
      Models::GetDedicatedIpWarmUpDetailResponse getDedicatedIpWarmUpDetailWithOptions(const Models::GetDedicatedIpWarmUpDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专属ip的预热详情信息
       *
       * @param request GetDedicatedIpWarmUpDetailRequest
       * @return GetDedicatedIpWarmUpDetailResponse
       */
      Models::GetDedicatedIpWarmUpDetailResponse getDedicatedIpWarmUpDetail(const Models::GetDedicatedIpWarmUpDetailRequest &request);

      /**
       * @summary 获取专属ip的预热信息
       *
       * @param request GetDedicatedIpWarmUpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDedicatedIpWarmUpInfoResponse
       */
      Models::GetDedicatedIpWarmUpInfoResponse getDedicatedIpWarmUpInfoWithOptions(const Models::GetDedicatedIpWarmUpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专属ip的预热信息
       *
       * @param request GetDedicatedIpWarmUpInfoRequest
       * @return GetDedicatedIpWarmUpInfoResponse
       */
      Models::GetDedicatedIpWarmUpInfoResponse getDedicatedIpWarmUpInfo(const Models::GetDedicatedIpWarmUpInfoRequest &request);

      /**
       * @summary Get IP Protection Information
       *
       * @param request GetIpProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpProtectionResponse
       */
      Models::GetIpProtectionResponse getIpProtectionWithOptions(const Models::GetIpProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get IP Protection Information
       *
       * @param request GetIpProtectionRequest
       * @return GetIpProtectionResponse
       */
      Models::GetIpProtectionResponse getIpProtection(const Models::GetIpProtectionRequest &request);

      /**
       * @summary Retrieve IP Protection Information
       *
       * @param request GetIpfilterListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpfilterListResponse
       */
      Models::GetIpfilterListResponse getIpfilterListWithOptions(const Models::GetIpfilterListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve IP Protection Information
       *
       * @param request GetIpfilterListRequest
       * @return GetIpfilterListResponse
       */
      Models::GetIpfilterListResponse getIpfilterList(const Models::GetIpfilterListRequest &request);

      /**
       * @summary 获取用户无效地址级别配置
       *
       * @param request GetSuppressionListLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuppressionListLevelResponse
       */
      Models::GetSuppressionListLevelResponse getSuppressionListLevelWithOptions(const Models::GetSuppressionListLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户无效地址级别配置
       *
       * @param request GetSuppressionListLevelRequest
       * @return GetSuppressionListLevelResponse
       */
      Models::GetSuppressionListLevelResponse getSuppressionListLevel(const Models::GetSuppressionListLevelRequest &request);

      /**
       * @summary Get tracking information
       *
       * @param request GetTrackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrackListResponse
       */
      Models::GetTrackListResponse getTrackListWithOptions(const Models::GetTrackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get tracking information
       *
       * @param request GetTrackListRequest
       * @return GetTrackListResponse
       */
      Models::GetTrackListResponse getTrackList(const Models::GetTrackListRequest &request);

      /**
       * @summary Get tracking information based on the sender address and tag name
       *
       * @param request GetTrackListByMailFromAndTagNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTrackListByMailFromAndTagNameResponse
       */
      Models::GetTrackListByMailFromAndTagNameResponse getTrackListByMailFromAndTagNameWithOptions(const Models::GetTrackListByMailFromAndTagNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get tracking information based on the sender address and tag name
       *
       * @param request GetTrackListByMailFromAndTagNameRequest
       * @return GetTrackListByMailFromAndTagNameResponse
       */
      Models::GetTrackListByMailFromAndTagNameResponse getTrackListByMailFromAndTagName(const Models::GetTrackListByMailFromAndTagNameRequest &request);

      /**
       * @summary Get Account Details
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Account Details
       *
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser();

      /**
       * @summary 获取发信的黑名单列表
       *
       * @param request ListBlockSendingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBlockSendingResponse
       */
      Models::ListBlockSendingResponse listBlockSendingWithOptions(const Models::ListBlockSendingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取发信的黑名单列表
       *
       * @param request ListBlockSendingRequest
       * @return ListBlockSendingResponse
       */
      Models::ListBlockSendingResponse listBlockSending(const Models::ListBlockSendingRequest &request);

      /**
       * @summary List User Invalid Addresses.
       *
       * @param request ListUserSuppressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserSuppressionResponse
       */
      Models::ListUserSuppressionResponse listUserSuppressionWithOptions(const Models::ListUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List User Invalid Addresses.
       *
       * @param request ListUserSuppressionRequest
       * @return ListUserSuppressionResponse
       */
      Models::ListUserSuppressionResponse listUserSuppression(const Models::ListUserSuppressionRequest &request);

      /**
       * @summary Modify the sending address
       *
       * @param request ModifyMailAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMailAddressResponse
       */
      Models::ModifyMailAddressResponse modifyMailAddressWithOptions(const Models::ModifyMailAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the sending address
       *
       * @param request ModifyMailAddressRequest
       * @return ModifyMailAddressResponse
       */
      Models::ModifyMailAddressResponse modifyMailAddress(const Models::ModifyMailAddressRequest &request);

      /**
       * @summary Modify the domain-level password
       *
       * @param request ModifyPWByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPWByDomainResponse
       */
      Models::ModifyPWByDomainResponse modifyPWByDomainWithOptions(const Models::ModifyPWByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the domain-level password
       *
       * @param request ModifyPWByDomainRequest
       * @return ModifyPWByDomainResponse
       */
      Models::ModifyPWByDomainResponse modifyPWByDomain(const Models::ModifyPWByDomainRequest &request);

      /**
       * @summary Modify Tag
       *
       * @param request ModifyTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTagResponse
       */
      Models::ModifyTagResponse modifyTagWithOptions(const Models::ModifyTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Tag
       *
       * @param request ModifyTagRequest
       * @return ModifyTagResponse
       */
      Models::ModifyTagResponse modifyTag(const Models::ModifyTagRequest &request);

      /**
       * @summary Query domain information
       *
       * @param request QueryDomainByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainByParamResponse
       */
      Models::QueryDomainByParamResponse queryDomainByParamWithOptions(const Models::QueryDomainByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query domain information
       *
       * @param request QueryDomainByParamRequest
       * @return QueryDomainByParamResponse
       */
      Models::QueryDomainByParamResponse queryDomainByParam(const Models::QueryDomainByParamRequest &request);

      /**
       * @summary NextStart changed to string
       *
       * @description Retrieve deduplicated invalid address information. If an email is sent to the same invalid address multiple times, only the first occurrence will be recorded. The query should be based on the time when the address was first classified as invalid.
       *
       * @param request QueryInvalidAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInvalidAddressResponse
       */
      Models::QueryInvalidAddressResponse queryInvalidAddressWithOptions(const Models::QueryInvalidAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary NextStart changed to string
       *
       * @description Retrieve deduplicated invalid address information. If an email is sent to the same invalid address multiple times, only the first occurrence will be recorded. The query should be based on the time when the address was first classified as invalid.
       *
       * @param request QueryInvalidAddressRequest
       * @return QueryInvalidAddressResponse
       */
      Models::QueryInvalidAddressResponse queryInvalidAddress(const Models::QueryInvalidAddressRequest &request);

      /**
       * @summary Query the list of sending addresses.
       *
       * @param request QueryMailAddressByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMailAddressByParamResponse
       */
      Models::QueryMailAddressByParamResponse queryMailAddressByParamWithOptions(const Models::QueryMailAddressByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of sending addresses.
       *
       * @param request QueryMailAddressByParamRequest
       * @return QueryMailAddressByParamResponse
       */
      Models::QueryMailAddressByParamResponse queryMailAddressByParam(const Models::QueryMailAddressByParamRequest &request);

      /**
       * @summary Query the details of the recipient list
       *
       * @param request QueryReceiverByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReceiverByParamResponse
       */
      Models::QueryReceiverByParamResponse queryReceiverByParamWithOptions(const Models::QueryReceiverByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of the recipient list
       *
       * @param request QueryReceiverByParamRequest
       * @return QueryReceiverByParamResponse
       */
      Models::QueryReceiverByParamResponse queryReceiverByParam(const Models::QueryReceiverByParamRequest &request);

      /**
       * @summary Retrieve detailed information about a recipient list
       *
       * @param request QueryReceiverDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReceiverDetailResponse
       */
      Models::QueryReceiverDetailResponse queryReceiverDetailWithOptions(const Models::QueryReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve detailed information about a recipient list
       *
       * @param request QueryReceiverDetailRequest
       * @return QueryReceiverDetailResponse
       */
      Models::QueryReceiverDetailResponse queryReceiverDetail(const Models::QueryReceiverDetailRequest &request);

      /**
       * @summary Call QueryTagByParam to retrieve tags.
       *
       * @param request QueryTagByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagByParamResponse
       */
      Models::QueryTagByParamResponse queryTagByParamWithOptions(const Models::QueryTagByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call QueryTagByParam to retrieve tags.
       *
       * @param request QueryTagByParamRequest
       * @return QueryTagByParamResponse
       */
      Models::QueryTagByParamResponse queryTagByParam(const Models::QueryTagByParamRequest &request);

      /**
       * @summary Query task list
       *
       * @param request QueryTaskByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskByParamResponse
       */
      Models::QueryTaskByParamResponse queryTaskByParamWithOptions(const Models::QueryTaskByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query task list
       *
       * @param request QueryTaskByParamRequest
       * @return QueryTaskByParamResponse
       */
      Models::QueryTaskByParamResponse queryTaskByParam(const Models::QueryTaskByParamRequest &request);

      /**
       * @summary 删除用户无效地址
       *
       * @param request RemoveUserSuppressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserSuppressionResponse
       */
      Models::RemoveUserSuppressionResponse removeUserSuppressionWithOptions(const Models::RemoveUserSuppressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户无效地址
       *
       * @param request RemoveUserSuppressionRequest
       * @return RemoveUserSuppressionResponse
       */
      Models::RemoveUserSuppressionResponse removeUserSuppression(const Models::RemoveUserSuppressionRequest &request);

      /**
       * @summary Create a Single Recipient
       *
       * @param request SaveReceiverDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveReceiverDetailResponse
       */
      Models::SaveReceiverDetailResponse saveReceiverDetailWithOptions(const Models::SaveReceiverDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Single Recipient
       *
       * @param request SaveReceiverDetailRequest
       * @return SaveReceiverDetailResponse
       */
      Models::SaveReceiverDetailResponse saveReceiverDetail(const Models::SaveReceiverDetailRequest &request);

      /**
       * @summary Send Template Test Email
       *
       * @param request SendTestByTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendTestByTemplateResponse
       */
      Models::SendTestByTemplateResponse sendTestByTemplateWithOptions(const Models::SendTestByTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Send Template Test Email
       *
       * @param request SendTestByTemplateRequest
       * @return SendTestByTemplateResponse
       */
      Models::SendTestByTemplateResponse sendTestByTemplate(const Models::SendTestByTemplateRequest &request);

      /**
       * @summary Retrieve Sending Data under Specified Conditions
       *
       * @param request SenderStatisticsByTagNameAndBatchIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SenderStatisticsByTagNameAndBatchIDResponse
       */
      Models::SenderStatisticsByTagNameAndBatchIDResponse senderStatisticsByTagNameAndBatchIDWithOptions(const Models::SenderStatisticsByTagNameAndBatchIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve Sending Data under Specified Conditions
       *
       * @param request SenderStatisticsByTagNameAndBatchIDRequest
       * @return SenderStatisticsByTagNameAndBatchIDResponse
       */
      Models::SenderStatisticsByTagNameAndBatchIDResponse senderStatisticsByTagNameAndBatchID(const Models::SenderStatisticsByTagNameAndBatchIDRequest &request);

      /**
       * @summary Query Delivery Result Details
       *
       * @param request SenderStatisticsDetailByParamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SenderStatisticsDetailByParamResponse
       */
      Models::SenderStatisticsDetailByParamResponse senderStatisticsDetailByParamWithOptions(const Models::SenderStatisticsDetailByParamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Delivery Result Details
       *
       * @param request SenderStatisticsDetailByParamRequest
       * @return SenderStatisticsDetailByParamResponse
       */
      Models::SenderStatisticsDetailByParamResponse senderStatisticsDetailByParam(const Models::SenderStatisticsDetailByParamRequest &request);

      /**
       * @summary 设置用户无效地址级别配置
       *
       * @param request SetSuppressionListLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSuppressionListLevelResponse
       */
      Models::SetSuppressionListLevelResponse setSuppressionListLevelWithOptions(const Models::SetSuppressionListLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置用户无效地址级别配置
       *
       * @param request SetSuppressionListLevelRequest
       * @return SetSuppressionListLevelResponse
       */
      Models::SetSuppressionListLevelResponse setSuppressionListLevel(const Models::SetSuppressionListLevelRequest &request);

      /**
       * @summary API for Sending Emails
       *
       * @param request SingleSendMailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SingleSendMailResponse
       */
      Models::SingleSendMailResponse singleSendMailWithOptions(const Models::SingleSendMailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary API for Sending Emails
       *
       * @param request SingleSendMailRequest
       * @return SingleSendMailResponse
       */
      Models::SingleSendMailResponse singleSendMail(const Models::SingleSendMailRequest &request);

      Models::SingleSendMailResponse singleSendMailAdvance(const Models::SingleSendMailAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lift sending restrictions due to unsubscription, reporting, etc.
       *
       * @param request UnblockSendingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnblockSendingResponse
       */
      Models::UnblockSendingResponse unblockSendingWithOptions(const Models::UnblockSendingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lift sending restrictions due to unsubscription, reporting, etc.
       *
       * @param request UnblockSendingRequest
       * @return UnblockSendingResponse
       */
      Models::UnblockSendingResponse unblockSending(const Models::UnblockSendingRequest &request);

      /**
       * @summary Update IP Protection API
       *
       * @param request UpdateIpProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpProtectionResponse
       */
      Models::UpdateIpProtectionResponse updateIpProtectionWithOptions(const Models::UpdateIpProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update IP Protection API
       *
       * @param request UpdateIpProtectionRequest
       * @return UpdateIpProtectionResponse
       */
      Models::UpdateIpProtectionResponse updateIpProtection(const Models::UpdateIpProtectionRequest &request);

      /**
       * @summary Update account information
       *
       * @param tmpReq UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update account information
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
