// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOMAIN20160511_HPP_
#define ALIBABACLOUD_DOMAIN20160511_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20160511Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Domain20160511.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 域名检查
       *
       * @param request CheckDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomainWithOptions(const Models::CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 域名检查
       *
       * @param request CheckDomainRequest
       * @return CheckDomainResponse
       */
      Models::CheckDomainResponse checkDomain(const Models::CheckDomainRequest &request);

      /**
       * @summary 删除联系人模板
       *
       * @param request DeleteContactTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactTemplateResponse
       */
      Models::DeleteContactTemplateResponse deleteContactTemplateWithOptions(const Models::DeleteContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联系人模板
       *
       * @param request DeleteContactTemplateRequest
       * @return DeleteContactTemplateResponse
       */
      Models::DeleteContactTemplateResponse deleteContactTemplate(const Models::DeleteContactTemplateRequest &request);

      /**
       * @summary 查询任务详情列表
       *
       * @param request QueryBatchTaskDetailListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBatchTaskDetailListResponse
       */
      Models::QueryBatchTaskDetailListResponse queryBatchTaskDetailListWithOptions(const Models::QueryBatchTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务详情列表
       *
       * @param request QueryBatchTaskDetailListRequest
       * @return QueryBatchTaskDetailListResponse
       */
      Models::QueryBatchTaskDetailListResponse queryBatchTaskDetailList(const Models::QueryBatchTaskDetailListRequest &request);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryBatchTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBatchTaskListResponse
       */
      Models::QueryBatchTaskListResponse queryBatchTaskListWithOptions(const Models::QueryBatchTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表
       *
       * @param request QueryBatchTaskListRequest
       * @return QueryBatchTaskListResponse
       */
      Models::QueryBatchTaskListResponse queryBatchTaskList(const Models::QueryBatchTaskListRequest &request);

      /**
       * @summary 查询联系人
       *
       * @param request QueryContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContactResponse
       */
      Models::QueryContactResponse queryContactWithOptions(const Models::QueryContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人
       *
       * @param request QueryContactRequest
       * @return QueryContactResponse
       */
      Models::QueryContactResponse queryContact(const Models::QueryContactRequest &request);

      /**
       * @summary 查询联系人模板
       *
       * @param request QueryContactTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContactTemplateResponse
       */
      Models::QueryContactTemplateResponse queryContactTemplateWithOptions(const Models::QueryContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联系人模板
       *
       * @param request QueryContactTemplateRequest
       * @return QueryContactTemplateResponse
       */
      Models::QueryContactTemplateResponse queryContactTemplate(const Models::QueryContactTemplateRequest &request);

      /**
       * @summary 根据saleId查询域名信息
       *
       * @param request QueryDomainBySaleIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainBySaleIdResponse
       */
      Models::QueryDomainBySaleIdResponse queryDomainBySaleIdWithOptions(const Models::QueryDomainBySaleIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据saleId查询域名信息
       *
       * @param request QueryDomainBySaleIdRequest
       * @return QueryDomainBySaleIdResponse
       */
      Models::QueryDomainBySaleIdResponse queryDomainBySaleId(const Models::QueryDomainBySaleIdRequest &request);

      /**
       * @summary 查询域名列表
       *
       * @param request QueryDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainListWithOptions(const Models::QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询域名列表
       *
       * @param request QueryDomainListRequest
       * @return QueryDomainListResponse
       */
      Models::QueryDomainListResponse queryDomainList(const Models::QueryDomainListRequest &request);

      /**
       * @summary 查询失败原因列表
       *
       * @param request QueryFailReasonListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFailReasonListResponse
       */
      Models::QueryFailReasonListResponse queryFailReasonListWithOptions(const Models::QueryFailReasonListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询失败原因列表
       *
       * @param request QueryFailReasonListRequest
       * @return QueryFailReasonListResponse
       */
      Models::QueryFailReasonListResponse queryFailReasonList(const Models::QueryFailReasonListRequest &request);

      /**
       * @summary 保存联系人模板
       *
       * @param request SaveContactTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactTemplateResponse
       */
      Models::SaveContactTemplateResponse saveContactTemplateWithOptions(const Models::SaveContactTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存联系人模板
       *
       * @param request SaveContactTemplateRequest
       * @return SaveContactTemplateResponse
       */
      Models::SaveContactTemplateResponse saveContactTemplate(const Models::SaveContactTemplateRequest &request);

      /**
       * @summary 保存联系人模板实名资料
       *
       * @param request SaveContactTemplateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactTemplateCredentialResponse
       */
      Models::SaveContactTemplateCredentialResponse saveContactTemplateCredentialWithOptions(const Models::SaveContactTemplateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存联系人模板实名资料
       *
       * @param request SaveContactTemplateCredentialRequest
       * @return SaveContactTemplateCredentialResponse
       */
      Models::SaveContactTemplateCredentialResponse saveContactTemplateCredential(const Models::SaveContactTemplateCredentialRequest &request);

      /**
       * @summary 修改域名dns任务,对外开放接口，用于domain中
       *
       * @param request SaveTaskForModifyingDomainDnsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForModifyingDomainDnsResponse
       */
      Models::SaveTaskForModifyingDomainDnsResponse saveTaskForModifyingDomainDnsWithOptions(const Models::SaveTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改域名dns任务,对外开放接口，用于domain中
       *
       * @param request SaveTaskForModifyingDomainDnsRequest
       * @return SaveTaskForModifyingDomainDnsResponse
       */
      Models::SaveTaskForModifyingDomainDnsResponse saveTaskForModifyingDomainDns(const Models::SaveTaskForModifyingDomainDnsRequest &request);

      /**
       * @summary 保存域名实名资料任务
       *
       * @param request SaveTaskForSubmittingDomainNameCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainNameCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainNameCredentialResponse saveTaskForSubmittingDomainNameCredentialWithOptions(const Models::SaveTaskForSubmittingDomainNameCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存域名实名资料任务
       *
       * @param request SaveTaskForSubmittingDomainNameCredentialRequest
       * @return SaveTaskForSubmittingDomainNameCredentialResponse
       */
      Models::SaveTaskForSubmittingDomainNameCredentialResponse saveTaskForSubmittingDomainNameCredential(const Models::SaveTaskForSubmittingDomainNameCredentialRequest &request);

      /**
       * @summary 根据模板保存域名的实名认证信息
       *
       * @param request SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse
       */
      Models::SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse saveTaskForSubmittingDomainNameCredentialByTemplateIdWithOptions(const Models::SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据模板保存域名的实名认证信息
       *
       * @param request SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest
       * @return SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse
       */
      Models::SaveTaskForSubmittingDomainNameCredentialByTemplateIdResponse saveTaskForSubmittingDomainNameCredentialByTemplateId(const Models::SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &request);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveTaskForUpdatingContactByTempateIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingContactByTempateIdResponse
       */
      Models::SaveTaskForUpdatingContactByTempateIdResponse saveTaskForUpdatingContactByTempateIdWithOptions(const Models::SaveTaskForUpdatingContactByTempateIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveTaskForUpdatingContactByTempateIdRequest
       * @return SaveTaskForUpdatingContactByTempateIdResponse
       */
      Models::SaveTaskForUpdatingContactByTempateIdResponse saveTaskForUpdatingContactByTempateId(const Models::SaveTaskForUpdatingContactByTempateIdRequest &request);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveTaskForUpdatingContactByTemplateIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveTaskForUpdatingContactByTemplateIdResponse
       */
      Models::SaveTaskForUpdatingContactByTemplateIdResponse saveTaskForUpdatingContactByTemplateIdWithOptions(const Models::SaveTaskForUpdatingContactByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存修改联系人的任务
       *
       * @param request SaveTaskForUpdatingContactByTemplateIdRequest
       * @return SaveTaskForUpdatingContactByTemplateIdResponse
       */
      Models::SaveTaskForUpdatingContactByTemplateIdResponse saveTaskForUpdatingContactByTemplateId(const Models::SaveTaskForUpdatingContactByTemplateIdRequest &request);

      /**
       * @summary 开启或者关闭whois保护
       *
       * @param request WhoisProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WhoisProtectionResponse
       */
      Models::WhoisProtectionResponse whoisProtectionWithOptions(const Models::WhoisProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启或者关闭whois保护
       *
       * @param request WhoisProtectionRequest
       * @return WhoisProtectionResponse
       */
      Models::WhoisProtectionResponse whoisProtection(const Models::WhoisProtectionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
