// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ACCOUNTCENTER20241209_HPP_
#define ALIBABACLOUD_ACCOUNTCENTER20241209_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AccountCenter20241209Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AccountCenter20241209.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加私有联系人
       *
       * @param request AccountContactAddRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountContactAddResponse
       */
      Models::AccountContactAddResponse accountContactAddWithOptions(const Models::AccountContactAddRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加私有联系人
       *
       * @param request AccountContactAddRequest
       * @return AccountContactAddResponse
       */
      Models::AccountContactAddResponse accountContactAdd(const Models::AccountContactAddRequest &request);

      /**
       * @summary 删除私有联系人
       *
       * @param request AccountContactDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountContactDeleteResponse
       */
      Models::AccountContactDeleteResponse accountContactDeleteWithOptions(const Models::AccountContactDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除私有联系人
       *
       * @param request AccountContactDeleteRequest
       * @return AccountContactDeleteResponse
       */
      Models::AccountContactDeleteResponse accountContactDelete(const Models::AccountContactDeleteRequest &request);

      /**
       * @summary 修改私有联系人
       *
       * @param request AccountContactEditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountContactEditResponse
       */
      Models::AccountContactEditResponse accountContactEditWithOptions(const Models::AccountContactEditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改私有联系人
       *
       * @param request AccountContactEditRequest
       * @return AccountContactEditResponse
       */
      Models::AccountContactEditResponse accountContactEdit(const Models::AccountContactEditRequest &request);

      /**
       * @summary 查询联系人详情
       *
       * @param request AccountContactQueryDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountContactQueryDetailResponse
       */
      Models::AccountContactQueryDetailResponse accountContactQueryDetailWithOptions(const Models::AccountContactQueryDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人详情
       *
       * @param request AccountContactQueryDetailRequest
       * @return AccountContactQueryDetailResponse
       */
      Models::AccountContactQueryDetailResponse accountContactQueryDetail(const Models::AccountContactQueryDetailRequest &request);

      /**
       * @summary 查询联系人列表
       *
       * @param request AccountContactQueryPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountContactQueryPageListResponse
       */
      Models::AccountContactQueryPageListResponse accountContactQueryPageListWithOptions(const Models::AccountContactQueryPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人列表
       *
       * @param request AccountContactQueryPageListRequest
       * @return AccountContactQueryPageListResponse
       */
      Models::AccountContactQueryPageListResponse accountContactQueryPageList(const Models::AccountContactQueryPageListRequest &request);

      /**
       * @summary 修改登录密码
       *
       * @param request EnterpriseAccountChangeLoginPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountChangeLoginPasswordResponse
       */
      Models::EnterpriseAccountChangeLoginPasswordResponse enterpriseAccountChangeLoginPasswordWithOptions(const Models::EnterpriseAccountChangeLoginPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改登录密码
       *
       * @param request EnterpriseAccountChangeLoginPasswordRequest
       * @return EnterpriseAccountChangeLoginPasswordResponse
       */
      Models::EnterpriseAccountChangeLoginPasswordResponse enterpriseAccountChangeLoginPassword(const Models::EnterpriseAccountChangeLoginPasswordRequest &request);

      /**
       * @summary 修改安全邮箱
       *
       * @param request EnterpriseAccountChangeSecurityEmailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountChangeSecurityEmailResponse
       */
      Models::EnterpriseAccountChangeSecurityEmailResponse enterpriseAccountChangeSecurityEmailWithOptions(const Models::EnterpriseAccountChangeSecurityEmailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改安全邮箱
       *
       * @param request EnterpriseAccountChangeSecurityEmailRequest
       * @return EnterpriseAccountChangeSecurityEmailResponse
       */
      Models::EnterpriseAccountChangeSecurityEmailResponse enterpriseAccountChangeSecurityEmail(const Models::EnterpriseAccountChangeSecurityEmailRequest &request);

      /**
       * @summary 修改成员账号安全手机号
       *
       * @param request EnterpriseAccountChangeSecurityMobileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountChangeSecurityMobileResponse
       */
      Models::EnterpriseAccountChangeSecurityMobileResponse enterpriseAccountChangeSecurityMobileWithOptions(const Models::EnterpriseAccountChangeSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改成员账号安全手机号
       *
       * @param request EnterpriseAccountChangeSecurityMobileRequest
       * @return EnterpriseAccountChangeSecurityMobileResponse
       */
      Models::EnterpriseAccountChangeSecurityMobileResponse enterpriseAccountChangeSecurityMobile(const Models::EnterpriseAccountChangeSecurityMobileRequest &request);

      /**
       * @summary 查询纳管账号授权角色
       *
       * @param request EnterpriseAccountQueryAccountGrantedRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountQueryAccountGrantedRolesResponse
       */
      Models::EnterpriseAccountQueryAccountGrantedRolesResponse enterpriseAccountQueryAccountGrantedRolesWithOptions(const Models::EnterpriseAccountQueryAccountGrantedRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询纳管账号授权角色
       *
       * @param request EnterpriseAccountQueryAccountGrantedRolesRequest
       * @return EnterpriseAccountQueryAccountGrantedRolesResponse
       */
      Models::EnterpriseAccountQueryAccountGrantedRolesResponse enterpriseAccountQueryAccountGrantedRoles(const Models::EnterpriseAccountQueryAccountGrantedRolesRequest &request);

      /**
       * @summary 批量查询纳管账号信息
       *
       * @param request EnterpriseAccountQueryAccountsInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountQueryAccountsInfoResponse
       */
      Models::EnterpriseAccountQueryAccountsInfoResponse enterpriseAccountQueryAccountsInfoWithOptions(const Models::EnterpriseAccountQueryAccountsInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询纳管账号信息
       *
       * @param request EnterpriseAccountQueryAccountsInfoRequest
       * @return EnterpriseAccountQueryAccountsInfoResponse
       */
      Models::EnterpriseAccountQueryAccountsInfoResponse enterpriseAccountQueryAccountsInfo(const Models::EnterpriseAccountQueryAccountsInfoRequest &request);

      /**
       * @summary 查询纳管账号登录设置
       *
       * @param request EnterpriseAccountQueryLoginSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountQueryLoginSettingsResponse
       */
      Models::EnterpriseAccountQueryLoginSettingsResponse enterpriseAccountQueryLoginSettingsWithOptions(const Models::EnterpriseAccountQueryLoginSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询纳管账号登录设置
       *
       * @param request EnterpriseAccountQueryLoginSettingsRequest
       * @return EnterpriseAccountQueryLoginSettingsResponse
       */
      Models::EnterpriseAccountQueryLoginSettingsResponse enterpriseAccountQueryLoginSettings(const Models::EnterpriseAccountQueryLoginSettingsRequest &request);

      /**
       * @summary 移除mfa
       *
       * @param request EnterpriseAccountRemoveMfaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountRemoveMfaResponse
       */
      Models::EnterpriseAccountRemoveMfaResponse enterpriseAccountRemoveMfaWithOptions(const Models::EnterpriseAccountRemoveMfaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除mfa
       *
       * @param request EnterpriseAccountRemoveMfaRequest
       * @return EnterpriseAccountRemoveMfaResponse
       */
      Models::EnterpriseAccountRemoveMfaResponse enterpriseAccountRemoveMfa(const Models::EnterpriseAccountRemoveMfaRequest &request);

      /**
       * @summary 脱离ea
       *
       * @param request EnterpriseAccountSeparateEaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountSeparateEaResponse
       */
      Models::EnterpriseAccountSeparateEaResponse enterpriseAccountSeparateEaWithOptions(const Models::EnterpriseAccountSeparateEaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 脱离ea
       *
       * @param request EnterpriseAccountSeparateEaRequest
       * @return EnterpriseAccountSeparateEaResponse
       */
      Models::EnterpriseAccountSeparateEaResponse enterpriseAccountSeparateEa(const Models::EnterpriseAccountSeparateEaRequest &request);

      /**
       * @summary 更新账号企业多账号中的别名
       *
       * @param request EnterpriseAccountUpdateAccountAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateAccountAliasResponse
       */
      Models::EnterpriseAccountUpdateAccountAliasResponse enterpriseAccountUpdateAccountAliasWithOptions(const Models::EnterpriseAccountUpdateAccountAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新账号企业多账号中的别名
       *
       * @param request EnterpriseAccountUpdateAccountAliasRequest
       * @return EnterpriseAccountUpdateAccountAliasResponse
       */
      Models::EnterpriseAccountUpdateAccountAliasResponse enterpriseAccountUpdateAccountAlias(const Models::EnterpriseAccountUpdateAccountAliasRequest &request);

      /**
       * @summary 更新账号授权
       *
       * @param request EnterpriseAccountUpdateAccountBizRoleGrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateAccountBizRoleGrantResponse
       */
      Models::EnterpriseAccountUpdateAccountBizRoleGrantResponse enterpriseAccountUpdateAccountBizRoleGrantWithOptions(const Models::EnterpriseAccountUpdateAccountBizRoleGrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新账号授权
       *
       * @param request EnterpriseAccountUpdateAccountBizRoleGrantRequest
       * @return EnterpriseAccountUpdateAccountBizRoleGrantResponse
       */
      Models::EnterpriseAccountUpdateAccountBizRoleGrantResponse enterpriseAccountUpdateAccountBizRoleGrant(const Models::EnterpriseAccountUpdateAccountBizRoleGrantRequest &request);

      /**
       * @summary 设置Ip掩码
       *
       * @param request EnterpriseAccountUpdateIpMaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateIpMaskResponse
       */
      Models::EnterpriseAccountUpdateIpMaskResponse enterpriseAccountUpdateIpMaskWithOptions(const Models::EnterpriseAccountUpdateIpMaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置Ip掩码
       *
       * @param request EnterpriseAccountUpdateIpMaskRequest
       * @return EnterpriseAccountUpdateIpMaskResponse
       */
      Models::EnterpriseAccountUpdateIpMaskResponse enterpriseAccountUpdateIpMask(const Models::EnterpriseAccountUpdateIpMaskRequest &request);

      /**
       * @summary 更新操作风控
       *
       * @param request EnterpriseAccountUpdateOperateRiskControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateOperateRiskControlResponse
       */
      Models::EnterpriseAccountUpdateOperateRiskControlResponse enterpriseAccountUpdateOperateRiskControlWithOptions(const Models::EnterpriseAccountUpdateOperateRiskControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新操作风控
       *
       * @param request EnterpriseAccountUpdateOperateRiskControlRequest
       * @return EnterpriseAccountUpdateOperateRiskControlResponse
       */
      Models::EnterpriseAccountUpdateOperateRiskControlResponse enterpriseAccountUpdateOperateRiskControl(const Models::EnterpriseAccountUpdateOperateRiskControlRequest &request);

      /**
       * @summary 修改安全手机启用状态
       *
       * @param request EnterpriseAccountUpdateSecurityMobileLoginStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateSecurityMobileLoginStatusResponse
       */
      Models::EnterpriseAccountUpdateSecurityMobileLoginStatusResponse enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(const Models::EnterpriseAccountUpdateSecurityMobileLoginStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改安全手机启用状态
       *
       * @param request EnterpriseAccountUpdateSecurityMobileLoginStatusRequest
       * @return EnterpriseAccountUpdateSecurityMobileLoginStatusResponse
       */
      Models::EnterpriseAccountUpdateSecurityMobileLoginStatusResponse enterpriseAccountUpdateSecurityMobileLoginStatus(const Models::EnterpriseAccountUpdateSecurityMobileLoginStatusRequest &request);

      /**
       * @summary 更新过期时间
       *
       * @param request EnterpriseAccountUpdateSessionExpireTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseAccountUpdateSessionExpireTimeResponse
       */
      Models::EnterpriseAccountUpdateSessionExpireTimeResponse enterpriseAccountUpdateSessionExpireTimeWithOptions(const Models::EnterpriseAccountUpdateSessionExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新过期时间
       *
       * @param request EnterpriseAccountUpdateSessionExpireTimeRequest
       * @return EnterpriseAccountUpdateSessionExpireTimeResponse
       */
      Models::EnterpriseAccountUpdateSessionExpireTimeResponse enterpriseAccountUpdateSessionExpireTime(const Models::EnterpriseAccountUpdateSessionExpireTimeRequest &request);

      /**
       * @summary 增加企业联系人
       *
       * @param request EnterpriseContactAddRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseContactAddResponse
       */
      Models::EnterpriseContactAddResponse enterpriseContactAddWithOptions(const Models::EnterpriseContactAddRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加企业联系人
       *
       * @param request EnterpriseContactAddRequest
       * @return EnterpriseContactAddResponse
       */
      Models::EnterpriseContactAddResponse enterpriseContactAdd(const Models::EnterpriseContactAddRequest &request);

      /**
       * @summary 删除企业联系人
       *
       * @param request EnterpriseContactDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseContactDeleteResponse
       */
      Models::EnterpriseContactDeleteResponse enterpriseContactDeleteWithOptions(const Models::EnterpriseContactDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除企业联系人
       *
       * @param request EnterpriseContactDeleteRequest
       * @return EnterpriseContactDeleteResponse
       */
      Models::EnterpriseContactDeleteResponse enterpriseContactDelete(const Models::EnterpriseContactDeleteRequest &request);

      /**
       * @summary 修改私企业联系人
       *
       * @param request EnterpriseContactEditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseContactEditResponse
       */
      Models::EnterpriseContactEditResponse enterpriseContactEditWithOptions(const Models::EnterpriseContactEditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改私企业联系人
       *
       * @param request EnterpriseContactEditRequest
       * @return EnterpriseContactEditResponse
       */
      Models::EnterpriseContactEditResponse enterpriseContactEdit(const Models::EnterpriseContactEditRequest &request);

      /**
       * @summary 查询联系人详情
       *
       * @param request EnterpriseContactQueryDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseContactQueryDetailResponse
       */
      Models::EnterpriseContactQueryDetailResponse enterpriseContactQueryDetailWithOptions(const Models::EnterpriseContactQueryDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人详情
       *
       * @param request EnterpriseContactQueryDetailRequest
       * @return EnterpriseContactQueryDetailResponse
       */
      Models::EnterpriseContactQueryDetailResponse enterpriseContactQueryDetail(const Models::EnterpriseContactQueryDetailRequest &request);

      /**
       * @summary 查询联系人列表
       *
       * @param request EnterpriseContactQueryPageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseContactQueryPageListResponse
       */
      Models::EnterpriseContactQueryPageListResponse enterpriseContactQueryPageListWithOptions(const Models::EnterpriseContactQueryPageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人列表
       *
       * @param request EnterpriseContactQueryPageListRequest
       * @return EnterpriseContactQueryPageListResponse
       */
      Models::EnterpriseContactQueryPageListResponse enterpriseContactQueryPageList(const Models::EnterpriseContactQueryPageListRequest &request);

      /**
       * @summary 组织目录树查询
       *
       * @param request EnterpriseOrgQueryLoadTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseOrgQueryLoadTreeResponse
       */
      Models::EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTreeWithOptions(const Models::EnterpriseOrgQueryLoadTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 组织目录树查询
       *
       * @param request EnterpriseOrgQueryLoadTreeRequest
       * @return EnterpriseOrgQueryLoadTreeResponse
       */
      Models::EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTree(const Models::EnterpriseOrgQueryLoadTreeRequest &request);

      /**
       * @summary 创建成员账号
       *
       * @param request EnterpriseRegisterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRegisterAccountResponse
       */
      Models::EnterpriseRegisterAccountResponse enterpriseRegisterAccountWithOptions(const Models::EnterpriseRegisterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建成员账号
       *
       * @param request EnterpriseRegisterAccountRequest
       * @return EnterpriseRegisterAccountResponse
       */
      Models::EnterpriseRegisterAccountResponse enterpriseRegisterAccount(const Models::EnterpriseRegisterAccountRequest &request);

      /**
       * @summary 创建业务角色
       *
       * @param request EnterpriseRoleCreateBizRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleCreateBizRoleResponse
       */
      Models::EnterpriseRoleCreateBizRoleResponse enterpriseRoleCreateBizRoleWithOptions(const Models::EnterpriseRoleCreateBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建业务角色
       *
       * @param request EnterpriseRoleCreateBizRoleRequest
       * @return EnterpriseRoleCreateBizRoleResponse
       */
      Models::EnterpriseRoleCreateBizRoleResponse enterpriseRoleCreateBizRole(const Models::EnterpriseRoleCreateBizRoleRequest &request);

      /**
       * @summary 删除业务角色
       *
       * @param request EnterpriseRoleDeleteBizRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleDeleteBizRoleResponse
       */
      Models::EnterpriseRoleDeleteBizRoleResponse enterpriseRoleDeleteBizRoleWithOptions(const Models::EnterpriseRoleDeleteBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除业务角色
       *
       * @param request EnterpriseRoleDeleteBizRoleRequest
       * @return EnterpriseRoleDeleteBizRoleResponse
       */
      Models::EnterpriseRoleDeleteBizRoleResponse enterpriseRoleDeleteBizRole(const Models::EnterpriseRoleDeleteBizRoleRequest &request);

      /**
       * @summary 角色授权场景下分页查询账号
       *
       * @param request EnterpriseRoleQueryAccountForRoleGrantByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleQueryAccountForRoleGrantByPageResponse
       */
      Models::EnterpriseRoleQueryAccountForRoleGrantByPageResponse enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(const Models::EnterpriseRoleQueryAccountForRoleGrantByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 角色授权场景下分页查询账号
       *
       * @param request EnterpriseRoleQueryAccountForRoleGrantByPageRequest
       * @return EnterpriseRoleQueryAccountForRoleGrantByPageResponse
       */
      Models::EnterpriseRoleQueryAccountForRoleGrantByPageResponse enterpriseRoleQueryAccountForRoleGrantByPage(const Models::EnterpriseRoleQueryAccountForRoleGrantByPageRequest &request);

      /**
       * @summary 分页查询业务角色
       *
       * @param request EnterpriseRoleQueryBizRoleByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleQueryBizRoleByPageResponse
       */
      Models::EnterpriseRoleQueryBizRoleByPageResponse enterpriseRoleQueryBizRoleByPageWithOptions(const Models::EnterpriseRoleQueryBizRoleByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询业务角色
       *
       * @param request EnterpriseRoleQueryBizRoleByPageRequest
       * @return EnterpriseRoleQueryBizRoleByPageResponse
       */
      Models::EnterpriseRoleQueryBizRoleByPageResponse enterpriseRoleQueryBizRoleByPage(const Models::EnterpriseRoleQueryBizRoleByPageRequest &request);

      /**
       * @summary 查询业务角色详情
       *
       * @param request EnterpriseRoleQueryBizRoleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleQueryBizRoleDetailResponse
       */
      Models::EnterpriseRoleQueryBizRoleDetailResponse enterpriseRoleQueryBizRoleDetailWithOptions(const Models::EnterpriseRoleQueryBizRoleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询业务角色详情
       *
       * @param request EnterpriseRoleQueryBizRoleDetailRequest
       * @return EnterpriseRoleQueryBizRoleDetailResponse
       */
      Models::EnterpriseRoleQueryBizRoleDetailResponse enterpriseRoleQueryBizRoleDetail(const Models::EnterpriseRoleQueryBizRoleDetailRequest &request);

      /**
       * @summary 更新业务角色
       *
       * @param request EnterpriseRoleUpdateBizRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseRoleUpdateBizRoleResponse
       */
      Models::EnterpriseRoleUpdateBizRoleResponse enterpriseRoleUpdateBizRoleWithOptions(const Models::EnterpriseRoleUpdateBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新业务角色
       *
       * @param request EnterpriseRoleUpdateBizRoleRequest
       * @return EnterpriseRoleUpdateBizRoleResponse
       */
      Models::EnterpriseRoleUpdateBizRoleResponse enterpriseRoleUpdateBizRole(const Models::EnterpriseRoleUpdateBizRoleRequest &request);

      /**
       * @summary 处理待办项
       *
       * @param request EnterpriseTodoDealAccountTodoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseTodoDealAccountTodoResponse
       */
      Models::EnterpriseTodoDealAccountTodoResponse enterpriseTodoDealAccountTodoWithOptions(const Models::EnterpriseTodoDealAccountTodoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 处理待办项
       *
       * @param request EnterpriseTodoDealAccountTodoRequest
       * @return EnterpriseTodoDealAccountTodoResponse
       */
      Models::EnterpriseTodoDealAccountTodoResponse enterpriseTodoDealAccountTodo(const Models::EnterpriseTodoDealAccountTodoRequest &request);

      /**
       * @summary 查询当前登录用户处理的待办项列表
       *
       * @param request EnterpriseTodoQueryAccountTodoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseTodoQueryAccountTodoListResponse
       */
      Models::EnterpriseTodoQueryAccountTodoListResponse enterpriseTodoQueryAccountTodoListWithOptions(const Models::EnterpriseTodoQueryAccountTodoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前登录用户处理的待办项列表
       *
       * @param request EnterpriseTodoQueryAccountTodoListRequest
       * @return EnterpriseTodoQueryAccountTodoListResponse
       */
      Models::EnterpriseTodoQueryAccountTodoListResponse enterpriseTodoQueryAccountTodoList(const Models::EnterpriseTodoQueryAccountTodoListRequest &request);

      /**
       * @summary 查询当前登录用户发起的待办项列表
       *
       * @param request EnterpriseTodoQueryAccountTodoListByApplicantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseTodoQueryAccountTodoListByApplicantResponse
       */
      Models::EnterpriseTodoQueryAccountTodoListByApplicantResponse enterpriseTodoQueryAccountTodoListByApplicantWithOptions(const Models::EnterpriseTodoQueryAccountTodoListByApplicantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前登录用户发起的待办项列表
       *
       * @param request EnterpriseTodoQueryAccountTodoListByApplicantRequest
       * @return EnterpriseTodoQueryAccountTodoListByApplicantResponse
       */
      Models::EnterpriseTodoQueryAccountTodoListByApplicantResponse enterpriseTodoQueryAccountTodoListByApplicant(const Models::EnterpriseTodoQueryAccountTodoListByApplicantRequest &request);

      /**
       * @summary 管理员邀请纳管
       *
       * @param request EnterpriseUninvitedAdminInviteJoinEnterpriseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnterpriseUninvitedAdminInviteJoinEnterpriseResponse
       */
      Models::EnterpriseUninvitedAdminInviteJoinEnterpriseResponse enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(const Models::EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 管理员邀请纳管
       *
       * @param request EnterpriseUninvitedAdminInviteJoinEnterpriseRequest
       * @return EnterpriseUninvitedAdminInviteJoinEnterpriseResponse
       */
      Models::EnterpriseUninvitedAdminInviteJoinEnterpriseResponse enterpriseUninvitedAdminInviteJoinEnterprise(const Models::EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &request);

      /**
       * @summary 账号中心发送异步验证邮件
       *
       * @param request SendAsyncEmailCaptchaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAsyncEmailCaptchaResponse
       */
      Models::SendAsyncEmailCaptchaResponse sendAsyncEmailCaptchaWithOptions(const Models::SendAsyncEmailCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号中心发送异步验证邮件
       *
       * @param request SendAsyncEmailCaptchaRequest
       * @return SendAsyncEmailCaptchaResponse
       */
      Models::SendAsyncEmailCaptchaResponse sendAsyncEmailCaptcha(const Models::SendAsyncEmailCaptchaRequest &request);

      /**
       * @summary 账号中心发送异步验证短信
       *
       * @param request SendAsyncMobileCaptchaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendAsyncMobileCaptchaResponse
       */
      Models::SendAsyncMobileCaptchaResponse sendAsyncMobileCaptchaWithOptions(const Models::SendAsyncMobileCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号中心发送异步验证短信
       *
       * @param request SendAsyncMobileCaptchaRequest
       * @return SendAsyncMobileCaptchaResponse
       */
      Models::SendAsyncMobileCaptchaResponse sendAsyncMobileCaptcha(const Models::SendAsyncMobileCaptchaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
