// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ACCOUNTCRM20160606_HPP_
#define ALIBABACLOUD_ACCOUNTCRM20160606_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AccountCrm20160606Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AccountCrm20160606.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AccountOneKeyDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountOneKeyDeleteResponse
       */
      Models::AccountOneKeyDeleteResponse accountOneKeyDeleteWithOptions(const Models::AccountOneKeyDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AccountOneKeyDeleteRequest
       * @return AccountOneKeyDeleteResponse
       */
      Models::AccountOneKeyDeleteResponse accountOneKeyDelete(const Models::AccountOneKeyDeleteRequest &request);

      /**
       * @param request AddCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomerLabelResponse
       */
      Models::AddCustomerLabelResponse addCustomerLabelWithOptions(const Models::AddCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddCustomerLabelRequest
       * @return AddCustomerLabelResponse
       */
      Models::AddCustomerLabelResponse addCustomerLabel(const Models::AddCustomerLabelRequest &request);

      /**
       * @param request AllowAgAccountLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllowAgAccountLoginResponse
       */
      Models::AllowAgAccountLoginResponse allowAgAccountLoginWithOptions(const Models::AllowAgAccountLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AllowAgAccountLoginRequest
       * @return AllowAgAccountLoginResponse
       */
      Models::AllowAgAccountLoginResponse allowAgAccountLogin(const Models::AllowAgAccountLoginRequest &request);

      /**
       * @summary 申请ag注销
       *
       * @param request ApplyAgOneKeyDeleteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAgOneKeyDeleteTaskResponse
       */
      Models::ApplyAgOneKeyDeleteTaskResponse applyAgOneKeyDeleteTaskWithOptions(const Models::ApplyAgOneKeyDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请ag注销
       *
       * @param request ApplyAgOneKeyDeleteTaskRequest
       * @return ApplyAgOneKeyDeleteTaskResponse
       */
      Models::ApplyAgOneKeyDeleteTaskResponse applyAgOneKeyDeleteTask(const Models::ApplyAgOneKeyDeleteTaskRequest &request);

      /**
       * @summary 申请ag注销
       *
       * @param request ApplyAgOneKeyOnlyCheckerTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAgOneKeyOnlyCheckerTaskResponse
       */
      Models::ApplyAgOneKeyOnlyCheckerTaskResponse applyAgOneKeyOnlyCheckerTaskWithOptions(const Models::ApplyAgOneKeyOnlyCheckerTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请ag注销
       *
       * @param request ApplyAgOneKeyOnlyCheckerTaskRequest
       * @return ApplyAgOneKeyOnlyCheckerTaskResponse
       */
      Models::ApplyAgOneKeyOnlyCheckerTaskResponse applyAgOneKeyOnlyCheckerTask(const Models::ApplyAgOneKeyOnlyCheckerTaskRequest &request);

      /**
       * @param request ApplyIdentityRegistrationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyIdentityRegistrationResponse
       */
      Models::ApplyIdentityRegistrationResponse applyIdentityRegistrationWithOptions(const Models::ApplyIdentityRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ApplyIdentityRegistrationRequest
       * @return ApplyIdentityRegistrationResponse
       */
      Models::ApplyIdentityRegistrationResponse applyIdentityRegistration(const Models::ApplyIdentityRegistrationRequest &request);

      /**
       * @param request AsyncCreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncCreateAgAccountResponse
       */
      Models::AsyncCreateAgAccountResponse asyncCreateAgAccountWithOptions(const Models::AsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AsyncCreateAgAccountRequest
       * @return AsyncCreateAgAccountResponse
       */
      Models::AsyncCreateAgAccountResponse asyncCreateAgAccount(const Models::AsyncCreateAgAccountRequest &request);

      /**
       * @param request AsyncModifyAgLoginEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AsyncModifyAgLoginEmailResponse
       */
      Models::AsyncModifyAgLoginEmailResponse asyncModifyAgLoginEmailWithOptions(const Models::AsyncModifyAgLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AsyncModifyAgLoginEmailRequest
       * @return AsyncModifyAgLoginEmailResponse
       */
      Models::AsyncModifyAgLoginEmailResponse asyncModifyAgLoginEmail(const Models::AsyncModifyAgLoginEmailRequest &request);

      /**
       * @param request AuthAndActiveWithHidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthAndActiveWithHidResponse
       */
      Models::AuthAndActiveWithHidResponse authAndActiveWithHidWithOptions(const Models::AuthAndActiveWithHidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthAndActiveWithHidRequest
       * @return AuthAndActiveWithHidResponse
       */
      Models::AuthAndActiveWithHidResponse authAndActiveWithHid(const Models::AuthAndActiveWithHidRequest &request);

      /**
       * @param request AuthAndRefreshLoginTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthAndRefreshLoginTicketResponse
       */
      Models::AuthAndRefreshLoginTicketResponse authAndRefreshLoginTicketWithOptions(const Models::AuthAndRefreshLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthAndRefreshLoginTicketRequest
       * @return AuthAndRefreshLoginTicketResponse
       */
      Models::AuthAndRefreshLoginTicketResponse authAndRefreshLoginTicket(const Models::AuthAndRefreshLoginTicketRequest &request);

      /**
       * @param request AuthLoginTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthLoginTicketResponse
       */
      Models::AuthLoginTicketResponse authLoginTicketWithOptions(const Models::AuthLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthLoginTicketRequest
       * @return AuthLoginTicketResponse
       */
      Models::AuthLoginTicketResponse authLoginTicket(const Models::AuthLoginTicketRequest &request);

      /**
       * @param request BatchQueryAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryAgAccountResponse
       */
      Models::BatchQueryAgAccountResponse batchQueryAgAccountWithOptions(const Models::BatchQueryAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchQueryAgAccountRequest
       * @return BatchQueryAgAccountResponse
       */
      Models::BatchQueryAgAccountResponse batchQueryAgAccount(const Models::BatchQueryAgAccountRequest &request);

      /**
       * @param request BatchQueryCreateAccountTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryCreateAccountTraceResponse
       */
      Models::BatchQueryCreateAccountTraceResponse batchQueryCreateAccountTraceWithOptions(const Models::BatchQueryCreateAccountTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchQueryCreateAccountTraceRequest
       * @return BatchQueryCreateAccountTraceResponse
       */
      Models::BatchQueryCreateAccountTraceResponse batchQueryCreateAccountTrace(const Models::BatchQueryCreateAccountTraceRequest &request);

      /**
       * @param request BatchQueryModifyLoginEmailTraceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryModifyLoginEmailTraceResponse
       */
      Models::BatchQueryModifyLoginEmailTraceResponse batchQueryModifyLoginEmailTraceWithOptions(const Models::BatchQueryModifyLoginEmailTraceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchQueryModifyLoginEmailTraceRequest
       * @return BatchQueryModifyLoginEmailTraceResponse
       */
      Models::BatchQueryModifyLoginEmailTraceResponse batchQueryModifyLoginEmailTrace(const Models::BatchQueryModifyLoginEmailTraceRequest &request);

      /**
       * @param request CancelAsyncCreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAsyncCreateAgAccountResponse
       */
      Models::CancelAsyncCreateAgAccountResponse cancelAsyncCreateAgAccountWithOptions(const Models::CancelAsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelAsyncCreateAgAccountRequest
       * @return CancelAsyncCreateAgAccountResponse
       */
      Models::CancelAsyncCreateAgAccountResponse cancelAsyncCreateAgAccount(const Models::CancelAsyncCreateAgAccountRequest &request);

      /**
       * @param request CancelAsyncModifyLoginEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAsyncModifyLoginEmailResponse
       */
      Models::CancelAsyncModifyLoginEmailResponse cancelAsyncModifyLoginEmailWithOptions(const Models::CancelAsyncModifyLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelAsyncModifyLoginEmailRequest
       * @return CancelAsyncModifyLoginEmailResponse
       */
      Models::CancelAsyncModifyLoginEmailResponse cancelAsyncModifyLoginEmail(const Models::CancelAsyncModifyLoginEmailRequest &request);

      /**
       * @param request ChangeAgAccountNationalityCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAgAccountNationalityCodeResponse
       */
      Models::ChangeAgAccountNationalityCodeResponse changeAgAccountNationalityCodeWithOptions(const Models::ChangeAgAccountNationalityCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeAgAccountNationalityCodeRequest
       * @return ChangeAgAccountNationalityCodeResponse
       */
      Models::ChangeAgAccountNationalityCodeResponse changeAgAccountNationalityCode(const Models::ChangeAgAccountNationalityCodeRequest &request);

      /**
       * @param request ChangeAgSecurityEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAgSecurityEmailResponse
       */
      Models::ChangeAgSecurityEmailResponse changeAgSecurityEmailWithOptions(const Models::ChangeAgSecurityEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeAgSecurityEmailRequest
       * @return ChangeAgSecurityEmailResponse
       */
      Models::ChangeAgSecurityEmailResponse changeAgSecurityEmail(const Models::ChangeAgSecurityEmailRequest &request);

      /**
       * @param request ChangeAgSecurityMobileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAgSecurityMobileResponse
       */
      Models::ChangeAgSecurityMobileResponse changeAgSecurityMobileWithOptions(const Models::ChangeAgSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeAgSecurityMobileRequest
       * @return ChangeAgSecurityMobileResponse
       */
      Models::ChangeAgSecurityMobileResponse changeAgSecurityMobile(const Models::ChangeAgSecurityMobileRequest &request);

      /**
       * @param request CreateAccountProfileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccountProfileInfoResponse
       */
      Models::CreateAccountProfileInfoResponse createAccountProfileInfoWithOptions(const Models::CreateAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAccountProfileInfoRequest
       * @return CreateAccountProfileInfoResponse
       */
      Models::CreateAccountProfileInfoResponse createAccountProfileInfo(const Models::CreateAccountProfileInfoRequest &request);

      /**
       * @param request CreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccountWithOptions(const Models::CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAgAccountRequest
       * @return CreateAgAccountResponse
       */
      Models::CreateAgAccountResponse createAgAccount(const Models::CreateAgAccountRequest &request);

      /**
       * @param request CreateContacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContacterResponse
       */
      Models::CreateContacterResponse createContacterWithOptions(const Models::CreateContacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateContacterRequest
       * @return CreateContacterResponse
       */
      Models::CreateContacterResponse createContacter(const Models::CreateContacterRequest &request);

      /**
       * @param request CreateRealNameCertificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRealNameCertificationResponse
       */
      Models::CreateRealNameCertificationResponse createRealNameCertificationWithOptions(const Models::CreateRealNameCertificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateRealNameCertificationRequest
       * @return CreateRealNameCertificationResponse
       */
      Models::CreateRealNameCertificationResponse createRealNameCertification(const Models::CreateRealNameCertificationRequest &request);

      /**
       * @param request CustomerSensitiveInfoLogicalDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerSensitiveInfoLogicalDeleteResponse
       */
      Models::CustomerSensitiveInfoLogicalDeleteResponse customerSensitiveInfoLogicalDeleteWithOptions(const Models::CustomerSensitiveInfoLogicalDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CustomerSensitiveInfoLogicalDeleteRequest
       * @return CustomerSensitiveInfoLogicalDeleteResponse
       */
      Models::CustomerSensitiveInfoLogicalDeleteResponse customerSensitiveInfoLogicalDelete(const Models::CustomerSensitiveInfoLogicalDeleteRequest &request);

      /**
       * @param request CustomerSensitiveInfoPhysicalDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CustomerSensitiveInfoPhysicalDeleteResponse
       */
      Models::CustomerSensitiveInfoPhysicalDeleteResponse customerSensitiveInfoPhysicalDeleteWithOptions(const Models::CustomerSensitiveInfoPhysicalDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CustomerSensitiveInfoPhysicalDeleteRequest
       * @return CustomerSensitiveInfoPhysicalDeleteResponse
       */
      Models::CustomerSensitiveInfoPhysicalDeleteResponse customerSensitiveInfoPhysicalDelete(const Models::CustomerSensitiveInfoPhysicalDeleteRequest &request);

      /**
       * @summary 同步Del缓存操作
       *
       * @param request DelCacheOperateSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelCacheOperateSyncResponse
       */
      Models::DelCacheOperateSyncResponse delCacheOperateSyncWithOptions(const Models::DelCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步Del缓存操作
       *
       * @param request DelCacheOperateSyncRequest
       * @return DelCacheOperateSyncResponse
       */
      Models::DelCacheOperateSyncResponse delCacheOperateSync(const Models::DelCacheOperateSyncRequest &request);

      /**
       * @param request DeleteContacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContacterResponse
       */
      Models::DeleteContacterResponse deleteContacterWithOptions(const Models::DeleteContacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteContacterRequest
       * @return DeleteContacterResponse
       */
      Models::DeleteContacterResponse deleteContacter(const Models::DeleteContacterRequest &request);

      /**
       * @param request DeleteCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomerLabelResponse
       */
      Models::DeleteCustomerLabelResponse deleteCustomerLabelWithOptions(const Models::DeleteCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCustomerLabelRequest
       * @return DeleteCustomerLabelResponse
       */
      Models::DeleteCustomerLabelResponse deleteCustomerLabel(const Models::DeleteCustomerLabelRequest &request);

      /**
       * @summary 根据outerId查询是否存在绑定关系
       *
       * @param request ExistBindsByOuterIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExistBindsByOuterIdResponse
       */
      Models::ExistBindsByOuterIdResponse existBindsByOuterIdWithOptions(const Models::ExistBindsByOuterIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据outerId查询是否存在绑定关系
       *
       * @param request ExistBindsByOuterIdRequest
       * @return ExistBindsByOuterIdResponse
       */
      Models::ExistBindsByOuterIdResponse existBindsByOuterId(const Models::ExistBindsByOuterIdRequest &request);

      /**
       * @param request FindAllContacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindAllContacterResponse
       */
      Models::FindAllContacterResponse findAllContacterWithOptions(const Models::FindAllContacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindAllContacterRequest
       * @return FindAllContacterResponse
       */
      Models::FindAllContacterResponse findAllContacter(const Models::FindAllContacterRequest &request);

      /**
       * @param request FindBizCategoryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindBizCategoryConfigResponse
       */
      Models::FindBizCategoryConfigResponse findBizCategoryConfigWithOptions(const Models::FindBizCategoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindBizCategoryConfigRequest
       * @return FindBizCategoryConfigResponse
       */
      Models::FindBizCategoryConfigResponse findBizCategoryConfig(const Models::FindBizCategoryConfigRequest &request);

      /**
       * @param request FindContacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindContacterResponse
       */
      Models::FindContacterResponse findContacterWithOptions(const Models::FindContacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindContacterRequest
       * @return FindContacterResponse
       */
      Models::FindContacterResponse findContacter(const Models::FindContacterRequest &request);

      /**
       * @param request FindCustomerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindCustomerInfoResponse
       */
      Models::FindCustomerInfoResponse findCustomerInfoWithOptions(const Models::FindCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindCustomerInfoRequest
       * @return FindCustomerInfoResponse
       */
      Models::FindCustomerInfoResponse findCustomerInfo(const Models::FindCustomerInfoRequest &request);

      /**
       * @param request FindCustomerSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindCustomerSnapshotResponse
       */
      Models::FindCustomerSnapshotResponse findCustomerSnapshotWithOptions(const Models::FindCustomerSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindCustomerSnapshotRequest
       * @return FindCustomerSnapshotResponse
       */
      Models::FindCustomerSnapshotResponse findCustomerSnapshot(const Models::FindCustomerSnapshotRequest &request);

      /**
       * @param request FindFinanceTaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindFinanceTaxResponse
       */
      Models::FindFinanceTaxResponse findFinanceTaxWithOptions(const Models::FindFinanceTaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindFinanceTaxRequest
       * @return FindFinanceTaxResponse
       */
      Models::FindFinanceTaxResponse findFinanceTax(const Models::FindFinanceTaxRequest &request);

      /**
       * @param request FindFinanceTaxDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindFinanceTaxDetailResponse
       */
      Models::FindFinanceTaxDetailResponse findFinanceTaxDetailWithOptions(const Models::FindFinanceTaxDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FindFinanceTaxDetailRequest
       * @return FindFinanceTaxDetailResponse
       */
      Models::FindFinanceTaxDetailResponse findFinanceTaxDetail(const Models::FindFinanceTaxDetailRequest &request);

      /**
       * @summary 登录过程中根据HID匹配Pk的历史逻辑
       *
       * @param request FindPkByHidForLoginWithLegacyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindPkByHidForLoginWithLegacyResponse
       */
      Models::FindPkByHidForLoginWithLegacyResponse findPkByHidForLoginWithLegacyWithOptions(const Models::FindPkByHidForLoginWithLegacyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 登录过程中根据HID匹配Pk的历史逻辑
       *
       * @param request FindPkByHidForLoginWithLegacyRequest
       * @return FindPkByHidForLoginWithLegacyResponse
       */
      Models::FindPkByHidForLoginWithLegacyResponse findPkByHidForLoginWithLegacy(const Models::FindPkByHidForLoginWithLegacyRequest &request);

      /**
       * @param request ForbiddenAgAccountLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbiddenAgAccountLoginResponse
       */
      Models::ForbiddenAgAccountLoginResponse forbiddenAgAccountLoginWithOptions(const Models::ForbiddenAgAccountLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ForbiddenAgAccountLoginRequest
       * @return ForbiddenAgAccountLoginResponse
       */
      Models::ForbiddenAgAccountLoginResponse forbiddenAgAccountLogin(const Models::ForbiddenAgAccountLoginRequest &request);

      /**
       * @summary 获取实名认证url
       *
       * @param request GenerateAliyunCertUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateAliyunCertUrlResponse
       */
      Models::GenerateAliyunCertUrlResponse generateAliyunCertUrlWithOptions(const Models::GenerateAliyunCertUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实名认证url
       *
       * @param request GenerateAliyunCertUrlRequest
       * @return GenerateAliyunCertUrlResponse
       */
      Models::GenerateAliyunCertUrlResponse generateAliyunCertUrl(const Models::GenerateAliyunCertUrlRequest &request);

      /**
       * @param request GetAgAccountAkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgAccountAkResponse
       */
      Models::GetAgAccountAkResponse getAgAccountAkWithOptions(const Models::GetAgAccountAkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgAccountAkRequest
       * @return GetAgAccountAkResponse
       */
      Models::GetAgAccountAkResponse getAgAccountAk(const Models::GetAgAccountAkRequest &request);

      /**
       * @summary 申请ag注销
       *
       * @param request GetAgOneKeyDeleteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgOneKeyDeleteTaskResponse
       */
      Models::GetAgOneKeyDeleteTaskResponse getAgOneKeyDeleteTaskWithOptions(const Models::GetAgOneKeyDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请ag注销
       *
       * @param request GetAgOneKeyDeleteTaskRequest
       * @return GetAgOneKeyDeleteTaskResponse
       */
      Models::GetAgOneKeyDeleteTaskResponse getAgOneKeyDeleteTask(const Models::GetAgOneKeyDeleteTaskRequest &request);

      /**
       * @param request GetAgRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgRelationResponse
       */
      Models::GetAgRelationResponse getAgRelationWithOptions(const Models::GetAgRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgRelationRequest
       * @return GetAgRelationResponse
       */
      Models::GetAgRelationResponse getAgRelation(const Models::GetAgRelationRequest &request);

      /**
       * @param request GetAliyunIdByPkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliyunIdByPkResponse
       */
      Models::GetAliyunIdByPkResponse getAliyunIdByPkWithOptions(const Models::GetAliyunIdByPkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAliyunIdByPkRequest
       * @return GetAliyunIdByPkResponse
       */
      Models::GetAliyunIdByPkResponse getAliyunIdByPk(const Models::GetAliyunIdByPkRequest &request);

      /**
       * @param request GetAliyunPKByAliyunIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAliyunPKByAliyunIDResponse
       */
      Models::GetAliyunPKByAliyunIDResponse getAliyunPKByAliyunIDWithOptions(const Models::GetAliyunPKByAliyunIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAliyunPKByAliyunIDRequest
       * @return GetAliyunPKByAliyunIDResponse
       */
      Models::GetAliyunPKByAliyunIDResponse getAliyunPKByAliyunID(const Models::GetAliyunPKByAliyunIDRequest &request);

      /**
       * @param request GetCustomerCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerCategoryResponse
       */
      Models::GetCustomerCategoryResponse getCustomerCategoryWithOptions(const Models::GetCustomerCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCustomerCategoryRequest
       * @return GetCustomerCategoryResponse
       */
      Models::GetCustomerCategoryResponse getCustomerCategory(const Models::GetCustomerCategoryRequest &request);

      /**
       * @param request GetCustomerCategoryDictionaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerCategoryDictionaryResponse
       */
      Models::GetCustomerCategoryDictionaryResponse getCustomerCategoryDictionaryWithOptions(const Models::GetCustomerCategoryDictionaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCustomerCategoryDictionaryRequest
       * @return GetCustomerCategoryDictionaryResponse
       */
      Models::GetCustomerCategoryDictionaryResponse getCustomerCategoryDictionary(const Models::GetCustomerCategoryDictionaryRequest &request);

      /**
       * @param request GetCustomerInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerInformationResponse
       */
      Models::GetCustomerInformationResponse getCustomerInformationWithOptions(const Models::GetCustomerInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetCustomerInformationRequest
       * @return GetCustomerInformationResponse
       */
      Models::GetCustomerInformationResponse getCustomerInformation(const Models::GetCustomerInformationRequest &request);

      /**
       * @param request GetDingTalkUserOrgByAliyunTmpCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDingTalkUserOrgByAliyunTmpCodeResponse
       */
      Models::GetDingTalkUserOrgByAliyunTmpCodeResponse getDingTalkUserOrgByAliyunTmpCodeWithOptions(const Models::GetDingTalkUserOrgByAliyunTmpCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDingTalkUserOrgByAliyunTmpCodeRequest
       * @return GetDingTalkUserOrgByAliyunTmpCodeResponse
       */
      Models::GetDingTalkUserOrgByAliyunTmpCodeResponse getDingTalkUserOrgByAliyunTmpCode(const Models::GetDingTalkUserOrgByAliyunTmpCodeRequest &request);

      /**
       * @param request GetIdentityRegistrationByCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityRegistrationByCustomerResponse
       */
      Models::GetIdentityRegistrationByCustomerResponse getIdentityRegistrationByCustomerWithOptions(const Models::GetIdentityRegistrationByCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetIdentityRegistrationByCustomerRequest
       * @return GetIdentityRegistrationByCustomerResponse
       */
      Models::GetIdentityRegistrationByCustomerResponse getIdentityRegistrationByCustomer(const Models::GetIdentityRegistrationByCustomerRequest &request);

      /**
       * @param request GetProfileTypeByPkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProfileTypeByPkResponse
       */
      Models::GetProfileTypeByPkResponse getProfileTypeByPkWithOptions(const Models::GetProfileTypeByPkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetProfileTypeByPkRequest
       * @return GetProfileTypeByPkResponse
       */
      Models::GetProfileTypeByPkResponse getProfileTypeByPk(const Models::GetProfileTypeByPkRequest &request);

      /**
       * @param request GetUploadIdentityRegistrationDocConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadIdentityRegistrationDocConfigResponse
       */
      Models::GetUploadIdentityRegistrationDocConfigResponse getUploadIdentityRegistrationDocConfigWithOptions(const Models::GetUploadIdentityRegistrationDocConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUploadIdentityRegistrationDocConfigRequest
       * @return GetUploadIdentityRegistrationDocConfigResponse
       */
      Models::GetUploadIdentityRegistrationDocConfigResponse getUploadIdentityRegistrationDocConfig(const Models::GetUploadIdentityRegistrationDocConfigRequest &request);

      /**
       * @summary IncrBy缓存操作
       *
       * @param request IncrByCacheOperateSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncrByCacheOperateSyncResponse
       */
      Models::IncrByCacheOperateSyncResponse incrByCacheOperateSyncWithOptions(const Models::IncrByCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary IncrBy缓存操作
       *
       * @param request IncrByCacheOperateSyncRequest
       * @return IncrByCacheOperateSyncResponse
       */
      Models::IncrByCacheOperateSyncResponse incrByCacheOperateSync(const Models::IncrByCacheOperateSyncRequest &request);

      /**
       * @summary 申请ag注销
       *
       * @param request JudgeAgExistQuietPeriodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JudgeAgExistQuietPeriodResponse
       */
      Models::JudgeAgExistQuietPeriodResponse judgeAgExistQuietPeriodWithOptions(const Models::JudgeAgExistQuietPeriodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请ag注销
       *
       * @param request JudgeAgExistQuietPeriodRequest
       * @return JudgeAgExistQuietPeriodResponse
       */
      Models::JudgeAgExistQuietPeriodResponse judgeAgExistQuietPeriod(const Models::JudgeAgExistQuietPeriodRequest &request);

      /**
       * @param request LoadRealNameInfoByPkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadRealNameInfoByPkResponse
       */
      Models::LoadRealNameInfoByPkResponse loadRealNameInfoByPkWithOptions(const Models::LoadRealNameInfoByPkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request LoadRealNameInfoByPkRequest
       * @return LoadRealNameInfoByPkResponse
       */
      Models::LoadRealNameInfoByPkResponse loadRealNameInfoByPk(const Models::LoadRealNameInfoByPkRequest &request);

      /**
       * @param tmpReq MapFromHavanaBindIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MapFromHavanaBindIdResponse
       */
      Models::MapFromHavanaBindIdResponse mapFromHavanaBindIdWithOptions(const Models::MapFromHavanaBindIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MapFromHavanaBindIdRequest
       * @return MapFromHavanaBindIdResponse
       */
      Models::MapFromHavanaBindIdResponse mapFromHavanaBindId(const Models::MapFromHavanaBindIdRequest &request);

      /**
       * @param request MapPkFromHidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MapPkFromHidResponse
       */
      Models::MapPkFromHidResponse mapPkFromHidWithOptions(const Models::MapPkFromHidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MapPkFromHidRequest
       * @return MapPkFromHidResponse
       */
      Models::MapPkFromHidResponse mapPkFromHid(const Models::MapPkFromHidRequest &request);

      /**
       * @param request MapPkToHidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MapPkToHidResponse
       */
      Models::MapPkToHidResponse mapPkToHidWithOptions(const Models::MapPkToHidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MapPkToHidRequest
       * @return MapPkToHidResponse
       */
      Models::MapPkToHidResponse mapPkToHid(const Models::MapPkToHidRequest &request);

      /**
       * @param tmpReq MapToHavanaBindIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MapToHavanaBindIdResponse
       */
      Models::MapToHavanaBindIdResponse mapToHavanaBindIdWithOptions(const Models::MapToHavanaBindIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MapToHavanaBindIdRequest
       * @return MapToHavanaBindIdResponse
       */
      Models::MapToHavanaBindIdResponse mapToHavanaBindId(const Models::MapToHavanaBindIdRequest &request);

      /**
       * @param request ModifyBizCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBizCategoryResponse
       */
      Models::ModifyBizCategoryResponse modifyBizCategoryWithOptions(const Models::ModifyBizCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyBizCategoryRequest
       * @return ModifyBizCategoryResponse
       */
      Models::ModifyBizCategoryResponse modifyBizCategory(const Models::ModifyBizCategoryRequest &request);

      /**
       * @param request ModifyContacterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyContacterResponse
       */
      Models::ModifyContacterResponse modifyContacterWithOptions(const Models::ModifyContacterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyContacterRequest
       * @return ModifyContacterResponse
       */
      Models::ModifyContacterResponse modifyContacter(const Models::ModifyContacterRequest &request);

      /**
       * @param request ModifyCustomerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomerInfoResponse
       */
      Models::ModifyCustomerInfoResponse modifyCustomerInfoWithOptions(const Models::ModifyCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyCustomerInfoRequest
       * @return ModifyCustomerInfoResponse
       */
      Models::ModifyCustomerInfoResponse modifyCustomerInfo(const Models::ModifyCustomerInfoRequest &request);

      /**
       * @param request OperateFinanceTaxRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateFinanceTaxResponse
       */
      Models::OperateFinanceTaxResponse operateFinanceTaxWithOptions(const Models::OperateFinanceTaxRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OperateFinanceTaxRequest
       * @return OperateFinanceTaxResponse
       */
      Models::OperateFinanceTaxResponse operateFinanceTax(const Models::OperateFinanceTaxRequest &request);

      /**
       * @param request QueryAccountAddressInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountAddressInfoResponse
       */
      Models::QueryAccountAddressInfoResponse queryAccountAddressInfoWithOptions(const Models::QueryAccountAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountAddressInfoRequest
       * @return QueryAccountAddressInfoResponse
       */
      Models::QueryAccountAddressInfoResponse queryAccountAddressInfo(const Models::QueryAccountAddressInfoRequest &request);

      /**
       * @param request QueryAccountAddressInfoWithoutHavanaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountAddressInfoWithoutHavanaResponse
       */
      Models::QueryAccountAddressInfoWithoutHavanaResponse queryAccountAddressInfoWithoutHavanaWithOptions(const Models::QueryAccountAddressInfoWithoutHavanaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountAddressInfoWithoutHavanaRequest
       * @return QueryAccountAddressInfoWithoutHavanaResponse
       */
      Models::QueryAccountAddressInfoWithoutHavanaResponse queryAccountAddressInfoWithoutHavana(const Models::QueryAccountAddressInfoWithoutHavanaRequest &request);

      /**
       * @summary 查询账号收货地址
       *
       * @param request QueryAccountDeliveryAddressInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountDeliveryAddressInfoResponse
       */
      Models::QueryAccountDeliveryAddressInfoResponse queryAccountDeliveryAddressInfoWithOptions(const Models::QueryAccountDeliveryAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账号收货地址
       *
       * @param request QueryAccountDeliveryAddressInfoRequest
       * @return QueryAccountDeliveryAddressInfoResponse
       */
      Models::QueryAccountDeliveryAddressInfoResponse queryAccountDeliveryAddressInfo(const Models::QueryAccountDeliveryAddressInfoRequest &request);

      /**
       * @param request QueryAccountProfileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountProfileInfoResponse
       */
      Models::QueryAccountProfileInfoResponse queryAccountProfileInfoWithOptions(const Models::QueryAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountProfileInfoRequest
       * @return QueryAccountProfileInfoResponse
       */
      Models::QueryAccountProfileInfoResponse queryAccountProfileInfo(const Models::QueryAccountProfileInfoRequest &request);

      /**
       * @param request QueryAccountRealNameInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountRealNameInfoResponse
       */
      Models::QueryAccountRealNameInfoResponse queryAccountRealNameInfoWithOptions(const Models::QueryAccountRealNameInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountRealNameInfoRequest
       * @return QueryAccountRealNameInfoResponse
       */
      Models::QueryAccountRealNameInfoResponse queryAccountRealNameInfo(const Models::QueryAccountRealNameInfoRequest &request);

      /**
       * @param request QueryAccountSiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountSiteResponse
       */
      Models::QueryAccountSiteResponse queryAccountSiteWithOptions(const Models::QueryAccountSiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountSiteRequest
       * @return QueryAccountSiteResponse
       */
      Models::QueryAccountSiteResponse queryAccountSite(const Models::QueryAccountSiteRequest &request);

      /**
       * @param request QueryAccountTrueNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAccountTrueNameResponse
       */
      Models::QueryAccountTrueNameResponse queryAccountTrueNameWithOptions(const Models::QueryAccountTrueNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAccountTrueNameRequest
       * @return QueryAccountTrueNameResponse
       */
      Models::QueryAccountTrueNameResponse queryAccountTrueName(const Models::QueryAccountTrueNameRequest &request);

      /**
       * @param request QueryAgAccountLoginPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAgAccountLoginPermissionResponse
       */
      Models::QueryAgAccountLoginPermissionResponse queryAgAccountLoginPermissionWithOptions(const Models::QueryAgAccountLoginPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAgAccountLoginPermissionRequest
       * @return QueryAgAccountLoginPermissionResponse
       */
      Models::QueryAgAccountLoginPermissionResponse queryAgAccountLoginPermission(const Models::QueryAgAccountLoginPermissionRequest &request);

      /**
       * @param request QueryAgRelationCountAndQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAgRelationCountAndQuotaResponse
       */
      Models::QueryAgRelationCountAndQuotaResponse queryAgRelationCountAndQuotaWithOptions(const Models::QueryAgRelationCountAndQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAgRelationCountAndQuotaRequest
       * @return QueryAgRelationCountAndQuotaResponse
       */
      Models::QueryAgRelationCountAndQuotaResponse queryAgRelationCountAndQuota(const Models::QueryAgRelationCountAndQuotaRequest &request);

      /**
       * @param request QueryAgSecurityMobileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAgSecurityMobileResponse
       */
      Models::QueryAgSecurityMobileResponse queryAgSecurityMobileWithOptions(const Models::QueryAgSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAgSecurityMobileRequest
       * @return QueryAgSecurityMobileResponse
       */
      Models::QueryAgSecurityMobileResponse queryAgSecurityMobile(const Models::QueryAgSecurityMobileRequest &request);

      /**
       * @param request QueryBindsByOuterIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBindsByOuterIdResponse
       */
      Models::QueryBindsByOuterIdResponse queryBindsByOuterIdWithOptions(const Models::QueryBindsByOuterIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBindsByOuterIdRequest
       * @return QueryBindsByOuterIdResponse
       */
      Models::QueryBindsByOuterIdResponse queryBindsByOuterId(const Models::QueryBindsByOuterIdRequest &request);

      /**
       * @param tmpReq QueryBindsByPkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBindsByPkResponse
       */
      Models::QueryBindsByPkResponse queryBindsByPkWithOptions(const Models::QueryBindsByPkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBindsByPkRequest
       * @return QueryBindsByPkResponse
       */
      Models::QueryBindsByPkResponse queryBindsByPk(const Models::QueryBindsByPkRequest &request);

      /**
       * @param request QueryCustomerLabelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomerLabelResponse
       */
      Models::QueryCustomerLabelResponse queryCustomerLabelWithOptions(const Models::QueryCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCustomerLabelRequest
       * @return QueryCustomerLabelResponse
       */
      Models::QueryCustomerLabelResponse queryCustomerLabel(const Models::QueryCustomerLabelRequest &request);

      /**
       * @param request QueryDeleteTaskCheckDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeleteTaskCheckDataResponse
       */
      Models::QueryDeleteTaskCheckDataResponse queryDeleteTaskCheckDataWithOptions(const Models::QueryDeleteTaskCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDeleteTaskCheckDataRequest
       * @return QueryDeleteTaskCheckDataResponse
       */
      Models::QueryDeleteTaskCheckDataResponse queryDeleteTaskCheckData(const Models::QueryDeleteTaskCheckDataRequest &request);

      /**
       * @param request QueryEncryptedAccountProfileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEncryptedAccountProfileInfoResponse
       */
      Models::QueryEncryptedAccountProfileInfoResponse queryEncryptedAccountProfileInfoWithOptions(const Models::QueryEncryptedAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryEncryptedAccountProfileInfoRequest
       * @return QueryEncryptedAccountProfileInfoResponse
       */
      Models::QueryEncryptedAccountProfileInfoResponse queryEncryptedAccountProfileInfo(const Models::QueryEncryptedAccountProfileInfoRequest &request);

      /**
       * @param request QueryEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnterpriseInfoResponse
       */
      Models::QueryEnterpriseInfoResponse queryEnterpriseInfoWithOptions(const Models::QueryEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryEnterpriseInfoRequest
       * @return QueryEnterpriseInfoResponse
       */
      Models::QueryEnterpriseInfoResponse queryEnterpriseInfo(const Models::QueryEnterpriseInfoRequest &request);

      /**
       * @param request QueryEnumConfigByTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnumConfigByTypeResponse
       */
      Models::QueryEnumConfigByTypeResponse queryEnumConfigByTypeWithOptions(const Models::QueryEnumConfigByTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryEnumConfigByTypeRequest
       * @return QueryEnumConfigByTypeResponse
       */
      Models::QueryEnumConfigByTypeResponse queryEnumConfigByType(const Models::QueryEnumConfigByTypeRequest &request);

      /**
       * @param request QueryOneKeyDeleteBlockListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOneKeyDeleteBlockListResponse
       */
      Models::QueryOneKeyDeleteBlockListResponse queryOneKeyDeleteBlockListWithOptions(const Models::QueryOneKeyDeleteBlockListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOneKeyDeleteBlockListRequest
       * @return QueryOneKeyDeleteBlockListResponse
       */
      Models::QueryOneKeyDeleteBlockListResponse queryOneKeyDeleteBlockList(const Models::QueryOneKeyDeleteBlockListRequest &request);

      /**
       * @param request QuerySecurityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecurityInfoResponse
       */
      Models::QuerySecurityInfoResponse querySecurityInfoWithOptions(const Models::QuerySecurityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QuerySecurityInfoRequest
       * @return QuerySecurityInfoResponse
       */
      Models::QuerySecurityInfoResponse querySecurityInfo(const Models::QuerySecurityInfoRequest &request);

      /**
       * @param request RegisterInternalAccountForBucRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterInternalAccountForBucResponse
       */
      Models::RegisterInternalAccountForBucResponse registerInternalAccountForBucWithOptions(const Models::RegisterInternalAccountForBucRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RegisterInternalAccountForBucRequest
       * @return RegisterInternalAccountForBucResponse
       */
      Models::RegisterInternalAccountForBucResponse registerInternalAccountForBuc(const Models::RegisterInternalAccountForBucRequest &request);

      /**
       * @param request ReleaseAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseAgAccountResponse
       */
      Models::ReleaseAgAccountResponse releaseAgAccountWithOptions(const Models::ReleaseAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReleaseAgAccountRequest
       * @return ReleaseAgAccountResponse
       */
      Models::ReleaseAgAccountResponse releaseAgAccount(const Models::ReleaseAgAccountRequest &request);

      /**
       * @param request ResendAsyncCreateAgAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendAsyncCreateAgAccountResponse
       */
      Models::ResendAsyncCreateAgAccountResponse resendAsyncCreateAgAccountWithOptions(const Models::ResendAsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResendAsyncCreateAgAccountRequest
       * @return ResendAsyncCreateAgAccountResponse
       */
      Models::ResendAsyncCreateAgAccountResponse resendAsyncCreateAgAccount(const Models::ResendAsyncCreateAgAccountRequest &request);

      /**
       * @param request ResendAsyncModifyLoginEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResendAsyncModifyLoginEmailResponse
       */
      Models::ResendAsyncModifyLoginEmailResponse resendAsyncModifyLoginEmailWithOptions(const Models::ResendAsyncModifyLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResendAsyncModifyLoginEmailRequest
       * @return ResendAsyncModifyLoginEmailResponse
       */
      Models::ResendAsyncModifyLoginEmailResponse resendAsyncModifyLoginEmail(const Models::ResendAsyncModifyLoginEmailRequest &request);

      /**
       * @param request SeparateAgRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SeparateAgRelationResponse
       */
      Models::SeparateAgRelationResponse separateAgRelationWithOptions(const Models::SeparateAgRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SeparateAgRelationRequest
       * @return SeparateAgRelationResponse
       */
      Models::SeparateAgRelationResponse separateAgRelation(const Models::SeparateAgRelationRequest &request);

      /**
       * @summary 同步set操作
       *
       * @param request SetCacheOperateSyncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCacheOperateSyncResponse
       */
      Models::SetCacheOperateSyncResponse setCacheOperateSyncWithOptions(const Models::SetCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步set操作
       *
       * @param request SetCacheOperateSyncRequest
       * @return SetCacheOperateSyncResponse
       */
      Models::SetCacheOperateSyncResponse setCacheOperateSync(const Models::SetCacheOperateSyncRequest &request);

      /**
       * @param tmpReq UpdateAccountAddressInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountAddressInfoResponse
       */
      Models::UpdateAccountAddressInfoResponse updateAccountAddressInfoWithOptions(const Models::UpdateAccountAddressInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAccountAddressInfoRequest
       * @return UpdateAccountAddressInfoResponse
       */
      Models::UpdateAccountAddressInfoResponse updateAccountAddressInfo(const Models::UpdateAccountAddressInfoRequest &request);

      /**
       * @param tmpReq UpdateAccountProfileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccountProfileInfoResponse
       */
      Models::UpdateAccountProfileInfoResponse updateAccountProfileInfoWithOptions(const Models::UpdateAccountProfileInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAccountProfileInfoRequest
       * @return UpdateAccountProfileInfoResponse
       */
      Models::UpdateAccountProfileInfoResponse updateAccountProfileInfo(const Models::UpdateAccountProfileInfoRequest &request);

      /**
       * @param request UpdateAgAccountAddressInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgAccountAddressInfoResponse
       */
      Models::UpdateAgAccountAddressInfoResponse updateAgAccountAddressInfoWithOptions(const Models::UpdateAgAccountAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAgAccountAddressInfoRequest
       * @return UpdateAgAccountAddressInfoResponse
       */
      Models::UpdateAgAccountAddressInfoResponse updateAgAccountAddressInfo(const Models::UpdateAgAccountAddressInfoRequest &request);

      /**
       * @param request UpdateAgServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgServiceStatusResponse
       */
      Models::UpdateAgServiceStatusResponse updateAgServiceStatusWithOptions(const Models::UpdateAgServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateAgServiceStatusRequest
       * @return UpdateAgServiceStatusResponse
       */
      Models::UpdateAgServiceStatusResponse updateAgServiceStatus(const Models::UpdateAgServiceStatusRequest &request);

      /**
       * @param request UpdateCustomerCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomerCategoryResponse
       */
      Models::UpdateCustomerCategoryResponse updateCustomerCategoryWithOptions(const Models::UpdateCustomerCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCustomerCategoryRequest
       * @return UpdateCustomerCategoryResponse
       */
      Models::UpdateCustomerCategoryResponse updateCustomerCategory(const Models::UpdateCustomerCategoryRequest &request);

      /**
       * @param request UpdateCustomerInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomerInformationResponse
       */
      Models::UpdateCustomerInformationResponse updateCustomerInformationWithOptions(const Models::UpdateCustomerInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCustomerInformationRequest
       * @return UpdateCustomerInformationResponse
       */
      Models::UpdateCustomerInformationResponse updateCustomerInformation(const Models::UpdateCustomerInformationRequest &request);

      /**
       * @param tmpReq UpdateOrInsertEnterpriseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrInsertEnterpriseInfoResponse
       */
      Models::UpdateOrInsertEnterpriseInfoResponse updateOrInsertEnterpriseInfoWithOptions(const Models::UpdateOrInsertEnterpriseInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateOrInsertEnterpriseInfoRequest
       * @return UpdateOrInsertEnterpriseInfoResponse
       */
      Models::UpdateOrInsertEnterpriseInfoResponse updateOrInsertEnterpriseInfo(const Models::UpdateOrInsertEnterpriseInfoRequest &request);

      /**
       * @param request DoLogicalDeleteResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DoLogicalDeleteResourceResponse
       */
      Models::DoLogicalDeleteResourceResponse doLogicalDeleteResourceWithOptions(const Models::DoLogicalDeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DoLogicalDeleteResourceRequest
       * @return DoLogicalDeleteResourceResponse
       */
      Models::DoLogicalDeleteResourceResponse doLogicalDeleteResource(const Models::DoLogicalDeleteResourceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
