// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BTRIPOPEN20220520_HPP_
#define ALIBABACLOUD_BTRIPOPEN20220520_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BtripOpen20220520Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BtripOpen20220520.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary This operation has been discontinued (existing enterprise users are not affected).
       *
       * @description Starting now, when calling enterprise data, you only need to pass in:
       * * [corpToken](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985): Applicable for regular enterprises to obtain travel data within their own enterprise.
       * * [groupCorpToken](https://openapi.alibtrip.com/doc/toDocDetail?docId=4210653): Applicable for group enterprises to obtain data of the parent enterprise or subsidiary enterprises.
       *
       * @param request AccessTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccessTokenResponse
       */
      Models::AccessTokenResponse accessTokenWithOptions(const Models::AccessTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation has been discontinued (existing enterprise users are not affected).
       *
       * @description Starting now, when calling enterprise data, you only need to pass in:
       * * [corpToken](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985): Applicable for regular enterprises to obtain travel data within their own enterprise.
       * * [groupCorpToken](https://openapi.alibtrip.com/doc/toDocDetail?docId=4210653): Applicable for group enterprises to obtain data of the parent enterprise or subsidiary enterprises.
       *
       * @param request AccessTokenRequest
       * @return AccessTokenResponse
       */
      Models::AccessTokenResponse accessToken(const Models::AccessTokenRequest &request);

      /**
       * @summary 创建企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param tmpReq AddDepartmentRequest
       * @param headers AddDepartmentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDepartmentResponse
       */
      Models::AddDepartmentResponse addDepartmentWithOptions(const Models::AddDepartmentRequest &tmpReq, const Models::AddDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request AddDepartmentRequest
       * @return AddDepartmentResponse
       */
      Models::AddDepartmentResponse addDepartment(const Models::AddDepartmentRequest &request);

      /**
       * @summary Synchronizes employee information to Alibaba Business Travel. This operation is applicable to scenarios such as employee onboarding and cross-system employee data transfer.
       *
       * @description - Before invoking this operation, apply for the **Organization Personnel Synchronization** application permission. If you do not have the permission, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.                                                                                       
       * - When you invoke this operation over HTTP, include `app_key` as a **required parameter** in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       * - Frequency limit: 800 calls per minute, 40 calls per second.
       *
       * @param tmpReq AddEmployeeRequest
       * @param headers AddEmployeeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEmployeeResponse
       */
      Models::AddEmployeeResponse addEmployeeWithOptions(const Models::AddEmployeeRequest &tmpReq, const Models::AddEmployeeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes employee information to Alibaba Business Travel. This operation is applicable to scenarios such as employee onboarding and cross-system employee data transfer.
       *
       * @description - Before invoking this operation, apply for the **Organization Personnel Synchronization** application permission. If you do not have the permission, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.                                                                                       
       * - When you invoke this operation over HTTP, include `app_key` as a **required parameter** in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       * - Frequency limit: 800 calls per minute, 40 calls per second.
       *
       * @param request AddEmployeeRequest
       * @return AddEmployeeResponse
       */
      Models::AddEmployeeResponse addEmployee(const Models::AddEmployeeRequest &request);

      /**
       * @summary Adds members in bulk to a custom enterprise role.
       *
       * @description - Before calling this operation, complete the application for permissions related to organization member synchronization. If you have not done so, refer to: [API permission application flow](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the related operations.                                                                                     
       * - When calling this operation over HTTP, include `app_key` as a required parameter in the request URL. For information about how to obtain `app_key`, refer to: [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param tmpReq AddEmployeesToCustomRoleRequest
       * @param headers AddEmployeesToCustomRoleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEmployeesToCustomRoleResponse
       */
      Models::AddEmployeesToCustomRoleResponse addEmployeesToCustomRoleWithOptions(const Models::AddEmployeesToCustomRoleRequest &tmpReq, const Models::AddEmployeesToCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members in bulk to a custom enterprise role.
       *
       * @description - Before calling this operation, complete the application for permissions related to organization member synchronization. If you have not done so, refer to: [API permission application flow](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the related operations.                                                                                     
       * - When calling this operation over HTTP, include `app_key` as a required parameter in the request URL. For information about how to obtain `app_key`, refer to: [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param request AddEmployeesToCustomRoleRequest
       * @return AddEmployeesToCustomRoleResponse
       */
      Models::AddEmployeesToCustomRoleResponse addEmployeesToCustomRole(const Models::AddEmployeesToCustomRoleRequest &request);

      /**
       * @summary Adds applicable personnel to an invoice header.
       *
       * @description Adds applicable personnel information to an invoice header.
       * - To use this operation, enable the cost attribution configuration permission in your application. For more information about how to apply for data permissions, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param tmpReq AddInvoiceEntityRequest
       * @param headers AddInvoiceEntityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInvoiceEntityResponse
       */
      Models::AddInvoiceEntityResponse addInvoiceEntityWithOptions(const Models::AddInvoiceEntityRequest &tmpReq, const Models::AddInvoiceEntityHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds applicable personnel to an invoice header.
       *
       * @description Adds applicable personnel information to an invoice header.
       * - To use this operation, enable the cost attribution configuration permission in your application. For more information about how to apply for data permissions, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param request AddInvoiceEntityRequest
       * @return AddInvoiceEntityResponse
       */
      Models::AddInvoiceEntityResponse addInvoiceEntity(const Models::AddInvoiceEntityRequest &request);

      /**
       * @summary Adds project managers.
       *
       * @description * Before you invoke this operation, apply for the application permissions related to **Cost Attribution**. If you do not have the permissions, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.                                                                                     
       * * When you invoke this operation over HTTP, include `app_key` as a required parameter in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param tmpReq AddProjectManagerRequest
       * @param headers AddProjectManagerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddProjectManagerResponse
       */
      Models::AddProjectManagerResponse addProjectManagerWithOptions(const Models::AddProjectManagerRequest &tmpReq, const Models::AddProjectManagerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds project managers.
       *
       * @description * Before you invoke this operation, apply for the application permissions related to **Cost Attribution**. If you do not have the permissions, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.                                                                                     
       * * When you invoke this operation over HTTP, include `app_key` as a required parameter in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param request AddProjectManagerRequest
       * @return AddProjectManagerResponse
       */
      Models::AddProjectManagerResponse addProjectManager(const Models::AddProjectManagerRequest &request);

      /**
       * @summary Redirects to a business travel feature page.
       *
       * @description - Before invoking this operation, apply for the permissions required for **business travel feature page redirection**. If you have not obtained the permissions, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.
       * - When you invoke this operation over HTTP, include `app_key` as a **required parameter** in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param request AddressGetRequest
       * @param headers AddressGetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddressGetResponse
       */
      Models::AddressGetResponse addressGetWithOptions(const Models::AddressGetRequest &request, const Models::AddressGetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redirects to a business travel feature page.
       *
       * @description - Before invoking this operation, apply for the permissions required for **business travel feature page redirection**. If you have not obtained the permissions, refer to [Obtain application permissions](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) to complete the required steps.
       * - When you invoke this operation over HTTP, include `app_key` as a **required parameter** in the request URL. For information about how to obtain the `app_key`, refer to [Application basic information - Application credentials](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763).
       *
       * @param request AddressGetRequest
       * @return AddressGetResponse
       */
      Models::AddressGetResponse addressGet(const Models::AddressGetRequest &request);

      /**
       * @summary 查询机场数据
       *
       * @description 使用该接口可以查询机场数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request AirportSearchRequest
       * @param headers AirportSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AirportSearchResponse
       */
      Models::AirportSearchResponse airportSearchWithOptions(const Models::AirportSearchRequest &request, const Models::AirportSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机场数据
       *
       * @description 使用该接口可以查询机场数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request AirportSearchRequest
       * @return AirportSearchResponse
       */
      Models::AirportSearchResponse airportSearch(const Models::AirportSearchRequest &request);

      /**
       * @summary 全量查询商旅城市行政区划编码信息
       *
       * @description 使用该接口可以全量查询商旅城市行政区划编码信息。
       * - 使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-access-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/#/document/server/accesstoken-application-access-credential?handbookId=development-support)
       *
       * @param headers AllBaseCityInfoQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllBaseCityInfoQueryResponse
       */
      Models::AllBaseCityInfoQueryResponse allBaseCityInfoQueryWithOptions(const Models::AllBaseCityInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 全量查询商旅城市行政区划编码信息
       *
       * @description 使用该接口可以全量查询商旅城市行政区划编码信息。
       * - 使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-access-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/#/document/server/accesstoken-application-access-credential?handbookId=development-support)
       *
       * @return AllBaseCityInfoQueryResponse
       */
      Models::AllBaseCityInfoQueryResponse allBaseCityInfoQuery();

      /**
       * @summary 新建出差审批单
       *
       * @description - 调用本接口前，请完成**出差审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq ApplyAddRequest
       * @param headers ApplyAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyAddResponse
       */
      Models::ApplyAddResponse applyAddWithOptions(const Models::ApplyAddRequest &tmpReq, const Models::ApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建出差审批单
       *
       * @description - 调用本接口前，请完成**出差审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request ApplyAddRequest
       * @return ApplyAddResponse
       */
      Models::ApplyAddResponse applyAdd(const Models::ApplyAddRequest &request);

      /**
       * @summary 更新出差审批单（状态）
       *
       * @description 使用该接口可以修改指定企业下的审批单。
       * 1.  使用该接口需要在应用中开通商旅修改审批单状态权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyApproveRequest
       * @param headers ApplyApproveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyApproveResponse
       */
      Models::ApplyApproveResponse applyApproveWithOptions(const Models::ApplyApproveRequest &request, const Models::ApplyApproveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新出差审批单（状态）
       *
       * @description 使用该接口可以修改指定企业下的审批单。
       * 1.  使用该接口需要在应用中开通商旅修改审批单状态权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyApproveRequest
       * @return ApplyApproveResponse
       */
      Models::ApplyApproveResponse applyApprove(const Models::ApplyApproveRequest &request);

      /**
       * @summary 外部审批节点状态同步
       *
       * @description 使用该接口可以同步外部审批节点状态
       * - 使用该接口需要在应用中开通商旅报销权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq ApplyExternalNodeStatusUpdateRequest
       * @param headers ApplyExternalNodeStatusUpdateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyExternalNodeStatusUpdateResponse
       */
      Models::ApplyExternalNodeStatusUpdateResponse applyExternalNodeStatusUpdateWithOptions(const Models::ApplyExternalNodeStatusUpdateRequest &tmpReq, const Models::ApplyExternalNodeStatusUpdateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 外部审批节点状态同步
       *
       * @description 使用该接口可以同步外部审批节点状态
       * - 使用该接口需要在应用中开通商旅报销权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request ApplyExternalNodeStatusUpdateRequest
       * @return ApplyExternalNodeStatusUpdateResponse
       */
      Models::ApplyExternalNodeStatusUpdateResponse applyExternalNodeStatusUpdate(const Models::ApplyExternalNodeStatusUpdateRequest &request);

      /**
       * @summary 申请发票
       *
       * @description 使用该接口可以按账期维度申请发票。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq ApplyInvoiceTaskRequest
       * @param headers ApplyInvoiceTaskHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyInvoiceTaskResponse
       */
      Models::ApplyInvoiceTaskResponse applyInvoiceTaskWithOptions(const Models::ApplyInvoiceTaskRequest &tmpReq, const Models::ApplyInvoiceTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请发票
       *
       * @description 使用该接口可以按账期维度申请发票。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request ApplyInvoiceTaskRequest
       * @return ApplyInvoiceTaskResponse
       */
      Models::ApplyInvoiceTaskResponse applyInvoiceTask(const Models::ApplyInvoiceTaskRequest &request);

      /**
       * @summary 查询出差审批单列表
       *
       * @description 使用该接口可以获取出差审批单列表数据。
       * 1.  使用该接口需要在应用中开通出差审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyListQueryRequest
       * @param headers ApplyListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyListQueryResponse
       */
      Models::ApplyListQueryResponse applyListQueryWithOptions(const Models::ApplyListQueryRequest &request, const Models::ApplyListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出差审批单列表
       *
       * @description 使用该接口可以获取出差审批单列表数据。
       * 1.  使用该接口需要在应用中开通出差审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyListQueryRequest
       * @return ApplyListQueryResponse
       */
      Models::ApplyListQueryResponse applyListQuery(const Models::ApplyListQueryRequest &request);

      /**
       * @summary 更新出差审批单
       *
       * @description 使用该接口可以修改指定企业下的审批单。
       * 1.  使用该接口需要在应用中开通商旅修改审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq ApplyModifyRequest
       * @param headers ApplyModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyModifyResponse
       */
      Models::ApplyModifyResponse applyModifyWithOptions(const Models::ApplyModifyRequest &tmpReq, const Models::ApplyModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新出差审批单
       *
       * @description 使用该接口可以修改指定企业下的审批单。
       * 1.  使用该接口需要在应用中开通商旅修改审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyModifyRequest
       * @return ApplyModifyResponse
       */
      Models::ApplyModifyResponse applyModify(const Models::ApplyModifyRequest &request);

      /**
       * @summary 查询出差审批单详情
       *
       * @description 使用该接口可以查询出差审批单详情信息。
       * 1.  使用该接口需要在应用中开通出差审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyQueryRequest
       * @param headers ApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyQueryResponse
       */
      Models::ApplyQueryResponse applyQueryWithOptions(const Models::ApplyQueryRequest &request, const Models::ApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出差审批单详情
       *
       * @description 使用该接口可以查询出差审批单详情信息。
       * 1.  使用该接口需要在应用中开通出差审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyQueryRequest
       * @return ApplyQueryResponse
       */
      Models::ApplyQueryResponse applyQuery(const Models::ApplyQueryRequest &request);

      /**
       * @summary 执行审批任务
       *
       * @description 使用该接口可以同意\\拒绝审批任务。
       * 1. 使用该接口需要在应用中开通商旅通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                         
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyTripTaskExecuteRequest
       * @param headers ApplyTripTaskExecuteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyTripTaskExecuteResponse
       */
      Models::ApplyTripTaskExecuteResponse applyTripTaskExecuteWithOptions(const Models::ApplyTripTaskExecuteRequest &request, const Models::ApplyTripTaskExecuteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行审批任务
       *
       * @description 使用该接口可以同意\\拒绝审批任务。
       * 1. 使用该接口需要在应用中开通商旅通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                         
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request ApplyTripTaskExecuteRequest
       * @return ApplyTripTaskExecuteResponse
       */
      Models::ApplyTripTaskExecuteResponse applyTripTaskExecute(const Models::ApplyTripTaskExecuteRequest &request);

      /**
       * @summary 搜索国内/国际（港澳台）城市基础行政区划数据
       *
       * @description - 调用本接口前，请完成**基础数据集**相关应用权限的申请。若无，请参见：获取[应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-access-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/#/document/server/accesstoken-application-access-credential?handbookId=development-support)。
       *
       * @param request BaseCityInfoSearchRequest
       * @param headers BaseCityInfoSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BaseCityInfoSearchResponse
       */
      Models::BaseCityInfoSearchResponse baseCityInfoSearchWithOptions(const Models::BaseCityInfoSearchRequest &request, const Models::BaseCityInfoSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索国内/国际（港澳台）城市基础行政区划数据
       *
       * @description - 调用本接口前，请完成**基础数据集**相关应用权限的申请。若无，请参见：获取[应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-access-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/#/document/server/accesstoken-application-access-credential?handbookId=development-support)。
       *
       * @param request BaseCityInfoSearchRequest
       * @return BaseCityInfoSearchResponse
       */
      Models::BaseCityInfoSearchResponse baseCityInfoSearch(const Models::BaseCityInfoSearchRequest &request);

      /**
       * @summary 批量/单个查询部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request BatchQueryDepartmentRequest
       * @param headers BatchQueryDepartmentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryDepartmentResponse
       */
      Models::BatchQueryDepartmentResponse batchQueryDepartmentWithOptions(const Models::BatchQueryDepartmentRequest &request, const Models::BatchQueryDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量/单个查询部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request BatchQueryDepartmentRequest
       * @return BatchQueryDepartmentResponse
       */
      Models::BatchQueryDepartmentResponse batchQueryDepartment(const Models::BatchQueryDepartmentRequest &request);

      /**
       * @summary Submits a batch.
       *
       * @param tmpReq BatchSubmitPreBillRequest
       * @param headers BatchSubmitPreBillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSubmitPreBillResponse
       */
      Models::BatchSubmitPreBillResponse batchSubmitPreBillWithOptions(const Models::BatchSubmitPreBillRequest &tmpReq, const Models::BatchSubmitPreBillHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a batch.
       *
       * @param request BatchSubmitPreBillRequest
       * @return BatchSubmitPreBillResponse
       */
      Models::BatchSubmitPreBillResponse batchSubmitPreBill(const Models::BatchSubmitPreBillRequest &request);

      /**
       * @summary 商旅账单内容修改
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 通过本接口对账单字段进行调整后，需调用 [MonthBillConfirm](https://openapi.alibtrip.com/doc/toDocDetail?docId=4060179) 接口进行调整确认。
       *
       * @param request BtripBillInfoAdjustRequest
       * @param headers BtripBillInfoAdjustHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BtripBillInfoAdjustResponse
       */
      Models::BtripBillInfoAdjustResponse btripBillInfoAdjustWithOptions(const Models::BtripBillInfoAdjustRequest &request, const Models::BtripBillInfoAdjustHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 商旅账单内容修改
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 通过本接口对账单字段进行调整后，需调用 [MonthBillConfirm](https://openapi.alibtrip.com/doc/toDocDetail?docId=4060179) 接口进行调整确认。
       *
       * @param request BtripBillInfoAdjustRequest
       * @return BtripBillInfoAdjustResponse
       */
      Models::BtripBillInfoAdjustResponse btripBillInfoAdjust(const Models::BtripBillInfoAdjustRequest &request);

      /**
       * @summary Synchronizes an intra-city car service approval form.
       *
       * @description Synchronizes an intra-city car service approval form for a specified enterprise.
       * 1. To use this operation, you must enable the permission to synchronize intra-city car service approvals in your application. For more information about how to apply for data permissions, see [API Permission Application Process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).                                                                                       
       * 2. To use this operation, you must include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise access credential, see [Enterprise Access Credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param tmpReq CarApplyAddRequest
       * @param headers CarApplyAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarApplyAddResponse
       */
      Models::CarApplyAddResponse carApplyAddWithOptions(const Models::CarApplyAddRequest &tmpReq, const Models::CarApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes an intra-city car service approval form.
       *
       * @description Synchronizes an intra-city car service approval form for a specified enterprise.
       * 1. To use this operation, you must enable the permission to synchronize intra-city car service approvals in your application. For more information about how to apply for data permissions, see [API Permission Application Process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).                                                                                       
       * 2. To use this operation, you must include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise access credential, see [Enterprise Access Credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param request CarApplyAddRequest
       * @return CarApplyAddResponse
       */
      Models::CarApplyAddResponse carApplyAdd(const Models::CarApplyAddRequest &request);

      /**
       * @summary 更新市内用车审批单
       *
       * @description 使用该接口可以修改指定企业下的市内用车审批单。
       * 1.  使用该接口需要在应用中开通商旅修改市内用车审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarApplyModifyRequest
       * @param headers CarApplyModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarApplyModifyResponse
       */
      Models::CarApplyModifyResponse carApplyModifyWithOptions(const Models::CarApplyModifyRequest &request, const Models::CarApplyModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新市内用车审批单
       *
       * @description 使用该接口可以修改指定企业下的市内用车审批单。
       * 1.  使用该接口需要在应用中开通商旅修改市内用车审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarApplyModifyRequest
       * @return CarApplyModifyResponse
       */
      Models::CarApplyModifyResponse carApplyModify(const Models::CarApplyModifyRequest &request);

      /**
       * @summary 查询市内用车审批单
       *
       * @description 使用该接口可以获取查询市内用车申请单。
       * 1.  使用该接口需要在应用中开通市内用车审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarApplyQueryRequest
       * @param headers CarApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarApplyQueryResponse
       */
      Models::CarApplyQueryResponse carApplyQueryWithOptions(const Models::CarApplyQueryRequest &request, const Models::CarApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询市内用车审批单
       *
       * @description 使用该接口可以获取查询市内用车申请单。
       * 1.  使用该接口需要在应用中开通市内用车审批单权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarApplyQueryRequest
       * @return CarApplyQueryResponse
       */
      Models::CarApplyQueryResponse carApplyQuery(const Models::CarApplyQueryRequest &request);

      /**
       * @summary 查询用车记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request CarBillSettlementQueryRequest
       * @param headers CarBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarBillSettlementQueryResponse
       */
      Models::CarBillSettlementQueryResponse carBillSettlementQueryWithOptions(const Models::CarBillSettlementQueryRequest &request, const Models::CarBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用车记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request CarBillSettlementQueryRequest
       * @return CarBillSettlementQueryResponse
       */
      Models::CarBillSettlementQueryResponse carBillSettlementQuery(const Models::CarBillSettlementQueryRequest &request);

      /**
       * @summary 查询用车订单列表
       *
       * @description 使用该接口可以查询指定企业的用车订单列表。
       * 1.  使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarOrderListQueryRequest
       * @param headers CarOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarOrderListQueryResponse
       */
      Models::CarOrderListQueryResponse carOrderListQueryWithOptions(const Models::CarOrderListQueryRequest &request, const Models::CarOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用车订单列表
       *
       * @description 使用该接口可以查询指定企业的用车订单列表。
       * 1.  使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarOrderListQueryRequest
       * @return CarOrderListQueryResponse
       */
      Models::CarOrderListQueryResponse carOrderListQuery(const Models::CarOrderListQueryRequest &request);

      /**
       * @summary 用车订单查询
       *
       * @description 使用该接口可以查询指定企业的用车订单详情。
       * 1.  使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarOrderQueryRequest
       * @param headers CarOrderQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarOrderQueryResponse
       */
      Models::CarOrderQueryResponse carOrderQueryWithOptions(const Models::CarOrderQueryRequest &request, const Models::CarOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用车订单查询
       *
       * @description 使用该接口可以查询指定企业的用车订单详情。
       * 1.  使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CarOrderQueryRequest
       * @return CarOrderQueryResponse
       */
      Models::CarOrderQueryResponse carOrderQuery(const Models::CarOrderQueryRequest &request);

      /**
       * @summary Queries enterprise car service scenario templates.
       *
       * @description Queries enterprise car service scenario templates.
       * 1. To use this operation, enable business management permissions in your application. For the permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * 2. To use this operation, include the enterprise access credential (x-acs-btrip-corp-token) in the request header. For information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param headers CarSceneQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CarSceneQueryResponse
       */
      Models::CarSceneQueryResponse carSceneQueryWithOptions(const Models::CarSceneQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries enterprise car service scenario templates.
       *
       * @description Queries enterprise car service scenario templates.
       * 1. To use this operation, enable business management permissions in your application. For the permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * 2. To use this operation, include the enterprise access credential (x-acs-btrip-corp-token) in the request header. For information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @return CarSceneQueryResponse
       */
      Models::CarSceneQueryResponse carSceneQuery();

      /**
       * @summary 渠道商创建企业
       *
       * @description - 调用本接口前，请完成阿里商旅渠道伙伴身份认证。若无，请[点击此处](https://xapork.aliwork.com/o/Channel)前往认证。
       * - 调用本接口前，请完成**企业账户**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 企业注册成功后,会向管理员发送激活短信，激活成功后即可登录阿里商旅使用相关功能。
       * - 渠道伙伴每日新增对接企业数量上限为 20。
       *
       * @param request ChannelCorpCreateRequest
       * @param headers ChannelCorpCreateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChannelCorpCreateResponse
       */
      Models::ChannelCorpCreateResponse channelCorpCreateWithOptions(const Models::ChannelCorpCreateRequest &request, const Models::ChannelCorpCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 渠道商创建企业
       *
       * @description - 调用本接口前，请完成阿里商旅渠道伙伴身份认证。若无，请[点击此处](https://xapork.aliwork.com/o/Channel)前往认证。
       * - 调用本接口前，请完成**企业账户**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 企业注册成功后,会向管理员发送激活短信，激活成功后即可登录阿里商旅使用相关功能。
       * - 渠道伙伴每日新增对接企业数量上限为 20。
       *
       * @param request ChannelCorpCreateRequest
       * @return ChannelCorpCreateResponse
       */
      Models::ChannelCorpCreateResponse channelCorpCreate(const Models::ChannelCorpCreateRequest &request);

      /**
       * @summary 查询行政区划（市，区）基础数据
       *
       * @description 使用该接口可以查询行政区划（市，区）基础数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CitySearchRequest
       * @param headers CitySearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CitySearchResponse
       */
      Models::CitySearchResponse citySearchWithOptions(const Models::CitySearchRequest &request, const Models::CitySearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询行政区划（市，区）基础数据
       *
       * @description 使用该接口可以查询行政区划（市，区）基础数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CitySearchRequest
       * @return CitySearchResponse
       */
      Models::CitySearchResponse citySearch(const Models::CitySearchRequest &request);

      /**
       * @summary 查询退改审批信息
       *
       * @description 使用该接口可以获取查询退改审批信息。
       * 1.  使用该接口需要在应用中开通退改审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CommonApplyQueryRequest
       * @param headers CommonApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommonApplyQueryResponse
       */
      Models::CommonApplyQueryResponse commonApplyQueryWithOptions(const Models::CommonApplyQueryRequest &request, const Models::CommonApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询退改审批信息
       *
       * @description 使用该接口可以获取查询退改审批信息。
       * 1.  使用该接口需要在应用中开通退改审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CommonApplyQueryRequest
       * @return CommonApplyQueryResponse
       */
      Models::CommonApplyQueryResponse commonApplyQuery(const Models::CommonApplyQueryRequest &request);

      /**
       * @summary 退改审批结果同步
       *
       * @description 使用该接口可以获取退改审批结果同步。
       * 1.  使用该接口需要在应用中开通退改审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CommonApplySyncRequest
       * @param headers CommonApplySyncHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommonApplySyncResponse
       */
      Models::CommonApplySyncResponse commonApplySyncWithOptions(const Models::CommonApplySyncRequest &request, const Models::CommonApplySyncHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 退改审批结果同步
       *
       * @description 使用该接口可以获取退改审批结果同步。
       * 1.  使用该接口需要在应用中开通退改审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CommonApplySyncRequest
       * @return CommonApplySyncResponse
       */
      Models::CommonApplySyncResponse commonApplySync(const Models::CommonApplySyncRequest &request);

      /**
       * @summary Confirms a pre-billing bill.
       *
       * @param request ConfirmPreBillRequest
       * @param headers ConfirmPreBillHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmPreBillResponse
       */
      Models::ConfirmPreBillResponse confirmPreBillWithOptions(const Models::ConfirmPreBillRequest &request, const Models::ConfirmPreBillHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms a pre-billing bill.
       *
       * @param request ConfirmPreBillRequest
       * @return ConfirmPreBillResponse
       */
      Models::ConfirmPreBillResponse confirmPreBill(const Models::ConfirmPreBillRequest &request);

      /**
       * @summary 查询服务商机票记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CooperatorFlightBillSettlementQueryRequest
       * @param headers CooperatorFlightBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CooperatorFlightBillSettlementQueryResponse
       */
      Models::CooperatorFlightBillSettlementQueryResponse cooperatorFlightBillSettlementQueryWithOptions(const Models::CooperatorFlightBillSettlementQueryRequest &request, const Models::CooperatorFlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务商机票记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CooperatorFlightBillSettlementQueryRequest
       * @return CooperatorFlightBillSettlementQueryResponse
       */
      Models::CooperatorFlightBillSettlementQueryResponse cooperatorFlightBillSettlementQuery(const Models::CooperatorFlightBillSettlementQueryRequest &request);

      /**
       * @summary 查询服务商酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CooperatorHotelBillSettlementQueryRequest
       * @param headers CooperatorHotelBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CooperatorHotelBillSettlementQueryResponse
       */
      Models::CooperatorHotelBillSettlementQueryResponse cooperatorHotelBillSettlementQueryWithOptions(const Models::CooperatorHotelBillSettlementQueryRequest &request, const Models::CooperatorHotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务商酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CooperatorHotelBillSettlementQueryRequest
       * @return CooperatorHotelBillSettlementQueryResponse
       */
      Models::CooperatorHotelBillSettlementQueryResponse cooperatorHotelBillSettlementQuery(const Models::CooperatorHotelBillSettlementQueryRequest &request);

      /**
       * @summary 酒店订单事件推送
       *
       * @description 调用方：服务商
       * 实现方：中洲平台
       *
       * @param request CooperatorHotelEventPushRequest
       * @param headers CooperatorHotelEventPushHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CooperatorHotelEventPushResponse
       */
      Models::CooperatorHotelEventPushResponse cooperatorHotelEventPushWithOptions(const Models::CooperatorHotelEventPushRequest &request, const Models::CooperatorHotelEventPushHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单事件推送
       *
       * @description 调用方：服务商
       * 实现方：中洲平台
       *
       * @param request CooperatorHotelEventPushRequest
       * @return CooperatorHotelEventPushResponse
       */
      Models::CooperatorHotelEventPushResponse cooperatorHotelEventPush(const Models::CooperatorHotelEventPushRequest &request);

      /**
       * @summary 个人支付结果推送
       *
       * @description 调用方：服务商<p>
       * 实现方：中洲平台
       *
       * @param request CooperatorSyncPayStatusRequest
       * @param headers CooperatorSyncPayStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CooperatorSyncPayStatusResponse
       */
      Models::CooperatorSyncPayStatusResponse cooperatorSyncPayStatusWithOptions(const Models::CooperatorSyncPayStatusRequest &request, const Models::CooperatorSyncPayStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 个人支付结果推送
       *
       * @description 调用方：服务商<p>
       * 实现方：中洲平台
       *
       * @param request CooperatorSyncPayStatusRequest
       * @return CooperatorSyncPayStatusResponse
       */
      Models::CooperatorSyncPayStatusResponse cooperatorSyncPayStatus(const Models::CooperatorSyncPayStatusRequest &request);

      /**
       * @summary 获取关联可调用企业接口
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CorpAuthLinkInfoQueryResponse
       */
      Models::CorpAuthLinkInfoQueryResponse corpAuthLinkInfoQueryWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取关联可调用企业接口
       *
       * @return CorpAuthLinkInfoQueryResponse
       */
      Models::CorpAuthLinkInfoQueryResponse corpAuthLinkInfoQuery();

      /**
       * @summary 换取CorpToken接口
       *
       * @description - 请求方法：GET 
       * - 请求地址：https://btripopen.alibtrip.com/api/btrip-open-auth/v1/corp-token/action/take
       * - 建议您通过**中控服务统一处理**或**单位时间单一刷新**亦或通过**单机 Job 任务**的方式进行凭证获取，详细说明请参见：[凭证获取指南](https://openapi.alibtrip.com/doc/toDocDetail?docId=3917854)。
       * - token 的有效时长可以从 `expire` 字段中获取，初始值为 2 小时（7200000ms）。为防止 token 失效，建议刷新间隔控制为：**5 分钟 ≤ 间隔 ≤ 2 小时**。在此间隔内刷新，上一次请求获取的 token 仍然有效。
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 及 `app_secret` 作为**必填参数**传入。二者的获取方式请参见：[应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 原请求参数中的 `x-acs-btrip-access-token` 参数现**已作废**，请使用 `app_secret`。
       *
       * @param request CorpTokenRequest
       * @param headers CorpTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CorpTokenResponse
       */
      Models::CorpTokenResponse corpTokenWithOptions(const Models::CorpTokenRequest &request, const Models::CorpTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 换取CorpToken接口
       *
       * @description - 请求方法：GET 
       * - 请求地址：https://btripopen.alibtrip.com/api/btrip-open-auth/v1/corp-token/action/take
       * - 建议您通过**中控服务统一处理**或**单位时间单一刷新**亦或通过**单机 Job 任务**的方式进行凭证获取，详细说明请参见：[凭证获取指南](https://openapi.alibtrip.com/doc/toDocDetail?docId=3917854)。
       * - token 的有效时长可以从 `expire` 字段中获取，初始值为 2 小时（7200000ms）。为防止 token 失效，建议刷新间隔控制为：**5 分钟 ≤ 间隔 ≤ 2 小时**。在此间隔内刷新，上一次请求获取的 token 仍然有效。
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 及 `app_secret` 作为**必填参数**传入。二者的获取方式请参见：[应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 原请求参数中的 `x-acs-btrip-access-token` 参数现**已作废**，请使用 `app_secret`。
       *
       * @param request CorpTokenRequest
       * @return CorpTokenResponse
       */
      Models::CorpTokenResponse corpToken(const Models::CorpTokenRequest &request);

      /**
       * @summary 删除成本中心
       *
       * @description 使用该接口可以删除指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterDeleteRequest
       * @param headers CostCenterDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CostCenterDeleteResponse
       */
      Models::CostCenterDeleteResponse costCenterDeleteWithOptions(const Models::CostCenterDeleteRequest &request, const Models::CostCenterDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除成本中心
       *
       * @description 使用该接口可以删除指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterDeleteRequest
       * @return CostCenterDeleteResponse
       */
      Models::CostCenterDeleteResponse costCenterDelete(const Models::CostCenterDeleteRequest &request);

      /**
       * @summary 修改成本中心
       *
       * @description 使用该接口可以修改指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterModifyRequest
       * @param headers CostCenterModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CostCenterModifyResponse
       */
      Models::CostCenterModifyResponse costCenterModifyWithOptions(const Models::CostCenterModifyRequest &request, const Models::CostCenterModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改成本中心
       *
       * @description 使用该接口可以修改指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterModifyRequest
       * @return CostCenterModifyResponse
       */
      Models::CostCenterModifyResponse costCenterModify(const Models::CostCenterModifyRequest &request);

      /**
       * @summary 查看成本中心
       *
       * @description 使用该接口可以查询指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterQueryRequest
       * @param headers CostCenterQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CostCenterQueryResponse
       */
      Models::CostCenterQueryResponse costCenterQueryWithOptions(const Models::CostCenterQueryRequest &request, const Models::CostCenterQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看成本中心
       *
       * @description 使用该接口可以查询指定企业的成本中心。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request CostCenterQueryRequest
       * @return CostCenterQueryResponse
       */
      Models::CostCenterQueryResponse costCenterQuery(const Models::CostCenterQueryRequest &request);

      /**
       * @summary 保存成本中心
       *
       * @description * 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                     
       * * 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CostCenterSaveRequest
       * @param headers CostCenterSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CostCenterSaveResponse
       */
      Models::CostCenterSaveResponse costCenterSaveWithOptions(const Models::CostCenterSaveRequest &request, const Models::CostCenterSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存成本中心
       *
       * @description * 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                     
       * * 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CostCenterSaveRequest
       * @return CostCenterSaveResponse
       */
      Models::CostCenterSaveResponse costCenterSave(const Models::CostCenterSaveRequest &request);

      /**
       * @summary 创建企业自定义角色
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 完成角色创建后，需要通过[创建企业员工](https://openapi.alibtrip.com/doc/toDocDetail?docId=5020396)接口或[修改企业员工信息](https://openapi.alibtrip.com/doc/toDocDetail?docId=5018703)接口中的`custom_role_code_list`字段进行员工与角色的绑定。
       *
       * @param request CreateCustomRoleRequest
       * @param headers CreateCustomRoleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomRoleResponse
       */
      Models::CreateCustomRoleResponse createCustomRoleWithOptions(const Models::CreateCustomRoleRequest &request, const Models::CreateCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建企业自定义角色
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 完成角色创建后，需要通过[创建企业员工](https://openapi.alibtrip.com/doc/toDocDetail?docId=5020396)接口或[修改企业员工信息](https://openapi.alibtrip.com/doc/toDocDetail?docId=5018703)接口中的`custom_role_code_list`字段进行员工与角色的绑定。
       *
       * @param request CreateCustomRoleRequest
       * @return CreateCustomRoleResponse
       */
      Models::CreateCustomRoleResponse createCustomRole(const Models::CreateCustomRoleRequest &request);

      /**
       * @summary 创建子企业
       *
       * @description - 在调用本接口之前，请先完成**主子账户**功能的开启。若无，请参考：[账户管理](https://www.yuque.com/alibtrip/ql4yyy/fp8el1)完成相关操作。
       * - 在调用本接口前，请先完成**组织人员同步**相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                   
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CreateSubCorpRequest
       * @param headers CreateSubCorpHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubCorpResponse
       */
      Models::CreateSubCorpResponse createSubCorpWithOptions(const Models::CreateSubCorpRequest &request, const Models::CreateSubCorpHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建子企业
       *
       * @description - 在调用本接口之前，请先完成**主子账户**功能的开启。若无，请参考：[账户管理](https://www.yuque.com/alibtrip/ql4yyy/fp8el1)完成相关操作。
       * - 在调用本接口前，请先完成**组织人员同步**相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                   
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request CreateSubCorpRequest
       * @return CreateSubCorpResponse
       */
      Models::CreateSubCorpResponse createSubCorp(const Models::CreateSubCorpRequest &request);

      /**
       * @summary 删除企业自定义角色
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request DeleteCustomRoleRequest
       * @param headers DeleteCustomRoleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomRoleResponse
       */
      Models::DeleteCustomRoleResponse deleteCustomRoleWithOptions(const Models::DeleteCustomRoleRequest &request, const Models::DeleteCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除企业自定义角色
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request DeleteCustomRoleRequest
       * @return DeleteCustomRoleResponse
       */
      Models::DeleteCustomRoleResponse deleteCustomRole(const Models::DeleteCustomRoleRequest &request);

      /**
       * @summary 删除企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request DeleteDepartmentRequest
       * @param headers DeleteDepartmentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartmentWithOptions(const Models::DeleteDepartmentRequest &request, const Models::DeleteDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request DeleteDepartmentRequest
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartment(const Models::DeleteDepartmentRequest &request);

      /**
       * @summary 批量删除企业自定义角色下人员
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq DeleteEmployeesFromCustomRoleRequest
       * @param headers DeleteEmployeesFromCustomRoleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEmployeesFromCustomRoleResponse
       */
      Models::DeleteEmployeesFromCustomRoleResponse deleteEmployeesFromCustomRoleWithOptions(const Models::DeleteEmployeesFromCustomRoleRequest &tmpReq, const Models::DeleteEmployeesFromCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除企业自定义角色下人员
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request DeleteEmployeesFromCustomRoleRequest
       * @return DeleteEmployeesFromCustomRoleResponse
       */
      Models::DeleteEmployeesFromCustomRoleResponse deleteEmployeesFromCustomRole(const Models::DeleteEmployeesFromCustomRoleRequest &request);

      /**
       * @summary Deletes applicable personnel from an invoice header.
       *
       * @description Deletes applicable personnel information from an invoice header.
       * - To use this operation, enable the cost attribution configuration permission in your application. For details about the data permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For details about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param tmpReq DeleteInvoiceEntityRequest
       * @param headers DeleteInvoiceEntityHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInvoiceEntityResponse
       */
      Models::DeleteInvoiceEntityResponse deleteInvoiceEntityWithOptions(const Models::DeleteInvoiceEntityRequest &tmpReq, const Models::DeleteInvoiceEntityHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes applicable personnel from an invoice header.
       *
       * @description Deletes applicable personnel information from an invoice header.
       * - To use this operation, enable the cost attribution configuration permission in your application. For details about the data permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For details about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param request DeleteInvoiceEntityRequest
       * @return DeleteInvoiceEntityResponse
       */
      Models::DeleteInvoiceEntityResponse deleteInvoiceEntity(const Models::DeleteInvoiceEntityRequest &request);

      /**
       * @summary 同步外部平台部门信息至商旅内部
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq DepartmentSaveRequest
       * @param headers DepartmentSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DepartmentSaveResponse
       */
      Models::DepartmentSaveResponse departmentSaveWithOptions(const Models::DepartmentSaveRequest &tmpReq, const Models::DepartmentSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步外部平台部门信息至商旅内部
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request DepartmentSaveRequest
       * @return DepartmentSaveResponse
       */
      Models::DepartmentSaveResponse departmentSave(const Models::DepartmentSaveRequest &request);

      /**
       * @summary 批量申请电子行程单
       *
       * @description 使用该接口可以批量申请开票。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程接口权限申请流程。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证。
       *
       * @param tmpReq ElectronicItineraryBatchApplyRequest
       * @param headers ElectronicItineraryBatchApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ElectronicItineraryBatchApplyResponse
       */
      Models::ElectronicItineraryBatchApplyResponse electronicItineraryBatchApplyWithOptions(const Models::ElectronicItineraryBatchApplyRequest &tmpReq, const Models::ElectronicItineraryBatchApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量申请电子行程单
       *
       * @description 使用该接口可以批量申请开票。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程接口权限申请流程。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证。
       *
       * @param request ElectronicItineraryBatchApplyRequest
       * @return ElectronicItineraryBatchApplyResponse
       */
      Models::ElectronicItineraryBatchApplyResponse electronicItineraryBatchApply(const Models::ElectronicItineraryBatchApplyRequest &request);

      /**
       * @summary 获取电子行程单申请结果
       *
       * @description 使用该接口可以根据批次号查询电子行程单开具结果。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程接口权限申请流程。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证。
       *
       * @param request ElectronicItineraryGetApplyResultRequest
       * @param headers ElectronicItineraryGetApplyResultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ElectronicItineraryGetApplyResultResponse
       */
      Models::ElectronicItineraryGetApplyResultResponse electronicItineraryGetApplyResultWithOptions(const Models::ElectronicItineraryGetApplyResultRequest &request, const Models::ElectronicItineraryGetApplyResultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取电子行程单申请结果
       *
       * @description 使用该接口可以根据批次号查询电子行程单开具结果。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程接口权限申请流程。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证。
       *
       * @param request ElectronicItineraryGetApplyResultRequest
       * @return ElectronicItineraryGetApplyResultResponse
       */
      Models::ElectronicItineraryGetApplyResultResponse electronicItineraryGetApplyResult(const Models::ElectronicItineraryGetApplyResultRequest &request);

      /**
       * @summary 增加成本中心人员信息
       *
       * @description 使用该接口可以增加成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq EntityAddRequest
       * @param headers EntityAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntityAddResponse
       */
      Models::EntityAddResponse entityAddWithOptions(const Models::EntityAddRequest &tmpReq, const Models::EntityAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 增加成本中心人员信息
       *
       * @description 使用该接口可以增加成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request EntityAddRequest
       * @return EntityAddResponse
       */
      Models::EntityAddResponse entityAdd(const Models::EntityAddRequest &request);

      /**
       * @summary 删除成本中心人员信息
       *
       * @description 使用该接口可以删除对应成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq EntityDeleteRequest
       * @param headers EntityDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntityDeleteResponse
       */
      Models::EntityDeleteResponse entityDeleteWithOptions(const Models::EntityDeleteRequest &tmpReq, const Models::EntityDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除成本中心人员信息
       *
       * @description 使用该接口可以删除对应成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request EntityDeleteRequest
       * @return EntityDeleteResponse
       */
      Models::EntityDeleteResponse entityDelete(const Models::EntityDeleteRequest &request);

      /**
       * @summary 设置成本中心人员信息
       *
       * @description 该接口已废弃，请使用[新增成本中心可用范围](/#/document/server/EntityAdd?handbookId=development-support)和[删除成本中心可用范围](/#/document/server/EntityDelete?handbookId=development-support)
       * 使用该接口可以更新对应成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq EntitySetRequest
       * @param headers EntitySetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EntitySetResponse
       */
      Models::EntitySetResponse entitySetWithOptions(const Models::EntitySetRequest &tmpReq, const Models::EntitySetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置成本中心人员信息
       *
       * @description 该接口已废弃，请使用[新增成本中心可用范围](/#/document/server/EntityAdd?handbookId=development-support)和[删除成本中心可用范围](/#/document/server/EntityDelete?handbookId=development-support)
       * 使用该接口可以更新对应成本中心的人员信息。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request EntitySetRequest
       * @return EntitySetResponse
       */
      Models::EntitySetResponse entitySet(const Models::EntitySetRequest &request);

      /**
       * @summary 预估价格查询
       *
       * @description 使用该接口可以查询预估价格。
       * - 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * - 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request EstimatedPriceQueryRequest
       * @param headers EstimatedPriceQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedPriceQueryResponse
       */
      Models::EstimatedPriceQueryResponse estimatedPriceQueryWithOptions(const Models::EstimatedPriceQueryRequest &request, const Models::EstimatedPriceQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预估价格查询
       *
       * @description 使用该接口可以查询预估价格。
       * - 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * - 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request EstimatedPriceQueryRequest
       * @return EstimatedPriceQueryResponse
       */
      Models::EstimatedPriceQueryResponse estimatedPriceQuery(const Models::EstimatedPriceQueryRequest &request);

      /**
       * @summary Queries estimated prices (version 2.0).
       *
       * @description Queries estimated prices.
       * This is a value-added operation that requires special approval. Contact the business travel customer operations team before submitting a permission request.
       * To use this operation, enable the value-added service data permission in your application. For more information about the data permission application process, see the API permission application process.
       * To use this operation, include the enterprise call credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise call credential, see Enterprise Access Credential.
       *
       * @param request EstimatedPriceQueryV2Request
       * @param headers EstimatedPriceQueryV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return EstimatedPriceQueryV2Response
       */
      Models::EstimatedPriceQueryV2Response estimatedPriceQueryV2WithOptions(const Models::EstimatedPriceQueryV2Request &request, const Models::EstimatedPriceQueryV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries estimated prices (version 2.0).
       *
       * @description Queries estimated prices.
       * This is a value-added operation that requires special approval. Contact the business travel customer operations team before submitting a permission request.
       * To use this operation, enable the value-added service data permission in your application. For more information about the data permission application process, see the API permission application process.
       * To use this operation, include the enterprise call credential (x-acs-btrip-so-corp-token) in the request header. For more information about how to obtain the enterprise call credential, see Enterprise Access Credential.
       *
       * @param request EstimatedPriceQueryV2Request
       * @return EstimatedPriceQueryV2Response
       */
      Models::EstimatedPriceQueryV2Response estimatedPriceQueryV2(const Models::EstimatedPriceQueryV2Request &request);

      /**
       * @summary 超标审批结果同步
       *
       * @description * 调用本接口前，完成**超标审批**权限的申请，若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。
       * * 通过 HTTP 形式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ExceedApplySyncRequest
       * @param headers ExceedApplySyncHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExceedApplySyncResponse
       */
      Models::ExceedApplySyncResponse exceedApplySyncWithOptions(const Models::ExceedApplySyncRequest &request, const Models::ExceedApplySyncHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 超标审批结果同步
       *
       * @description * 调用本接口前，完成**超标审批**权限的申请，若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。
       * * 通过 HTTP 形式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ExceedApplySyncRequest
       * @return ExceedApplySyncResponse
       */
      Models::ExceedApplySyncResponse exceedApplySync(const Models::ExceedApplySyncRequest &request);

      /**
       * @summary 添加外部出行人与证件信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq ExternalUserAddRequest
       * @param headers ExternalUserAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExternalUserAddResponse
       */
      Models::ExternalUserAddResponse externalUserAddWithOptions(const Models::ExternalUserAddRequest &tmpReq, const Models::ExternalUserAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加外部出行人与证件信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ExternalUserAddRequest
       * @return ExternalUserAddResponse
       */
      Models::ExternalUserAddResponse externalUserAdd(const Models::ExternalUserAddRequest &request);

      /**
       * @summary 删除外部出行人
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param headers ExternalUserDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExternalUserDeleteResponse
       */
      Models::ExternalUserDeleteResponse externalUserDeleteWithOptions(const string &externalUserId, const Models::ExternalUserDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除外部出行人
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @return ExternalUserDeleteResponse
       */
      Models::ExternalUserDeleteResponse externalUserDelete(const string &externalUserId);

      /**
       * @summary 查询外部出行人
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param headers ExternalUserQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExternalUserQueryResponse
       */
      Models::ExternalUserQueryResponse externalUserQueryWithOptions(const string &externalUserId, const Models::ExternalUserQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询外部出行人
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @return ExternalUserQueryResponse
       */
      Models::ExternalUserQueryResponse externalUserQuery(const string &externalUserId);

      /**
       * @summary 修改外部出行人与证件信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq ExternalUserUpdateRequest
       * @param headers ExternalUserUpdateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExternalUserUpdateResponse
       */
      Models::ExternalUserUpdateResponse externalUserUpdateWithOptions(const string &externalUserId, const Models::ExternalUserUpdateRequest &tmpReq, const Models::ExternalUserUpdateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改外部出行人与证件信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ExternalUserUpdateRequest
       * @return ExternalUserUpdateResponse
       */
      Models::ExternalUserUpdateResponse externalUserUpdate(const string &externalUserId, const Models::ExternalUserUpdateRequest &request);

      /**
       * @summary 查询机票记账数据
       *
       * @description - 调用本接口前，需要在应用中开通**商旅账单数据**权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1小时 ≤记账截止时间 - 记账起始时间 ≤ 24小时。
       * - 记账数据的更新时机为当前时间 + 1小时。
       *
       * @param request FlightBillSettlementQueryRequest
       * @param headers FlightBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightBillSettlementQueryResponse
       */
      Models::FlightBillSettlementQueryResponse flightBillSettlementQueryWithOptions(const Models::FlightBillSettlementQueryRequest &request, const Models::FlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机票记账数据
       *
       * @description - 调用本接口前，需要在应用中开通**商旅账单数据**权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1小时 ≤记账截止时间 - 记账起始时间 ≤ 24小时。
       * - 记账数据的更新时机为当前时间 + 1小时。
       *
       * @param request FlightBillSettlementQueryRequest
       * @return FlightBillSettlementQueryResponse
       */
      Models::FlightBillSettlementQueryResponse flightBillSettlementQuery(const Models::FlightBillSettlementQueryRequest &request);

      /**
       * @summary 航班订单取消
       *
       * @description 使用该接口可以航班订单取消。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightCancelOrderRequest
       * @param headers FlightCancelOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightCancelOrderResponse
       */
      Models::FlightCancelOrderResponse flightCancelOrderWithOptions(const Models::FlightCancelOrderRequest &request, const Models::FlightCancelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班订单取消
       *
       * @description 使用该接口可以航班订单取消。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightCancelOrderRequest
       * @return FlightCancelOrderResponse
       */
      Models::FlightCancelOrderResponse flightCancelOrder(const Models::FlightCancelOrderRequest &request);

      /**
       * @summary 机票订单取消
       *
       * @description 使用该接口可以“机票订单取消”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightCancelOrderV2Request
       * @param headers FlightCancelOrderV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightCancelOrderV2Response
       */
      Models::FlightCancelOrderV2Response flightCancelOrderV2WithOptions(const Models::FlightCancelOrderV2Request &request, const Models::FlightCancelOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票订单取消
       *
       * @description 使用该接口可以“机票订单取消”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightCancelOrderV2Request
       * @return FlightCancelOrderV2Response
       */
      Models::FlightCancelOrderV2Response flightCancelOrderV2(const Models::FlightCancelOrderV2Request &request);

      /**
       * @summary 航班订单创建
       *
       * @description 使用该接口可以航班订单创建。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq FlightCreateOrderRequest
       * @param headers FlightCreateOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightCreateOrderResponse
       */
      Models::FlightCreateOrderResponse flightCreateOrderWithOptions(const Models::FlightCreateOrderRequest &tmpReq, const Models::FlightCreateOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班订单创建
       *
       * @description 使用该接口可以航班订单创建。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightCreateOrderRequest
       * @return FlightCreateOrderResponse
       */
      Models::FlightCreateOrderResponse flightCreateOrder(const Models::FlightCreateOrderRequest &request);

      /**
       * @summary 机票订单创建
       *
       * @description 使用该接口可以“机票订单创建”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightCreateOrderV2Request
       * @param headers FlightCreateOrderV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightCreateOrderV2Response
       */
      Models::FlightCreateOrderV2Response flightCreateOrderV2WithOptions(const Models::FlightCreateOrderV2Request &tmpReq, const Models::FlightCreateOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票订单创建
       *
       * @description 使用该接口可以“机票订单创建”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightCreateOrderV2Request
       * @return FlightCreateOrderV2Response
       */
      Models::FlightCreateOrderV2Response flightCreateOrderV2(const Models::FlightCreateOrderV2Request &request);

      /**
       * @summary 查询飞机超标审批详情
       *
       * @description 使用该接口可以获取查询机票超标审批单列表。
       * 1.  使用该接口需要在应用中开通超标审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightExceedApplyQueryRequest
       * @param headers FlightExceedApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightExceedApplyQueryResponse
       */
      Models::FlightExceedApplyQueryResponse flightExceedApplyQueryWithOptions(const Models::FlightExceedApplyQueryRequest &request, const Models::FlightExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询飞机超标审批详情
       *
       * @description 使用该接口可以获取查询机票超标审批单列表。
       * 1.  使用该接口需要在应用中开通超标审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightExceedApplyQueryRequest
       * @return FlightExceedApplyQueryResponse
       */
      Models::FlightExceedApplyQueryResponse flightExceedApplyQuery(const Models::FlightExceedApplyQueryRequest &request);

      /**
       * @summary 查询机票行程单扫描件
       *
       * @description 使用该接口可以查询机票行程单明细数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightItineraryScanQueryRequest
       * @param headers FlightItineraryScanQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightItineraryScanQueryResponse
       */
      Models::FlightItineraryScanQueryResponse flightItineraryScanQueryWithOptions(const Models::FlightItineraryScanQueryRequest &request, const Models::FlightItineraryScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询机票行程单扫描件
       *
       * @description 使用该接口可以查询机票行程单明细数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightItineraryScanQueryRequest
       * @return FlightItineraryScanQueryResponse
       */
      Models::FlightItineraryScanQueryResponse flightItineraryScanQuery(const Models::FlightItineraryScanQueryRequest &request);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightListingSearchRequest
       * @param headers FlightListingSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightListingSearchResponse
       */
      Models::FlightListingSearchResponse flightListingSearchWithOptions(const Models::FlightListingSearchRequest &request, const Models::FlightListingSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightListingSearchRequest
       * @return FlightListingSearchResponse
       */
      Models::FlightListingSearchResponse flightListingSearch(const Models::FlightListingSearchRequest &request);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以进行“航班列表搜索”。
       * - 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param tmpReq FlightListingSearchV2Request
       * @param headers FlightListingSearchV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightListingSearchV2Response
       */
      Models::FlightListingSearchV2Response flightListingSearchV2WithOptions(const Models::FlightListingSearchV2Request &tmpReq, const Models::FlightListingSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以进行“航班列表搜索”。
       * - 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request FlightListingSearchV2Request
       * @return FlightListingSearchV2Response
       */
      Models::FlightListingSearchV2Response flightListingSearchV2(const Models::FlightListingSearchV2Request &request);

      /**
       * @summary 机票改签申请
       *
       * @description 使用该接口可以“机票改签申请”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightModifyApplyV2Request
       * @param headers FlightModifyApplyV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyApplyV2Response
       */
      Models::FlightModifyApplyV2Response flightModifyApplyV2WithOptions(const Models::FlightModifyApplyV2Request &tmpReq, const Models::FlightModifyApplyV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签申请
       *
       * @description 使用该接口可以“机票改签申请”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyApplyV2Request
       * @return FlightModifyApplyV2Response
       */
      Models::FlightModifyApplyV2Response flightModifyApplyV2(const Models::FlightModifyApplyV2Request &request);

      /**
       * @summary 机票改签取消
       *
       * @description 使用该接口可以“机票改签取消”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyCancelV2Request
       * @param headers FlightModifyCancelV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyCancelV2Response
       */
      Models::FlightModifyCancelV2Response flightModifyCancelV2WithOptions(const Models::FlightModifyCancelV2Request &request, const Models::FlightModifyCancelV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签取消
       *
       * @description 使用该接口可以“机票改签取消”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyCancelV2Request
       * @return FlightModifyCancelV2Response
       */
      Models::FlightModifyCancelV2Response flightModifyCancelV2(const Models::FlightModifyCancelV2Request &request);

      /**
       * @summary 机票改签列表搜索
       *
       * @description 使用该接口可以“机票改签列表搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightModifyListingSearchV2Request
       * @param headers FlightModifyListingSearchV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyListingSearchV2Response
       */
      Models::FlightModifyListingSearchV2Response flightModifyListingSearchV2WithOptions(const Models::FlightModifyListingSearchV2Request &tmpReq, const Models::FlightModifyListingSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签列表搜索
       *
       * @description 使用该接口可以“机票改签列表搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyListingSearchV2Request
       * @return FlightModifyListingSearchV2Response
       */
      Models::FlightModifyListingSearchV2Response flightModifyListingSearchV2(const Models::FlightModifyListingSearchV2Request &request);

      /**
       * @summary 机票改签详情
       *
       * @description 使用该接口可以查询“机票改签详情”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyOrderDetailV2Request
       * @param headers FlightModifyOrderDetailV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyOrderDetailV2Response
       */
      Models::FlightModifyOrderDetailV2Response flightModifyOrderDetailV2WithOptions(const Models::FlightModifyOrderDetailV2Request &request, const Models::FlightModifyOrderDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签详情
       *
       * @description 使用该接口可以查询“机票改签详情”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyOrderDetailV2Request
       * @return FlightModifyOrderDetailV2Response
       */
      Models::FlightModifyOrderDetailV2Response flightModifyOrderDetailV2(const Models::FlightModifyOrderDetailV2Request &request);

      /**
       * @summary 机票改签报价搜索
       *
       * @description 使用该接口可以“机票改签报价搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightModifyOtaSearchV2Request
       * @param headers FlightModifyOtaSearchV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyOtaSearchV2Response
       */
      Models::FlightModifyOtaSearchV2Response flightModifyOtaSearchV2WithOptions(const Models::FlightModifyOtaSearchV2Request &tmpReq, const Models::FlightModifyOtaSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签报价搜索
       *
       * @description 使用该接口可以“机票改签报价搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyOtaSearchV2Request
       * @return FlightModifyOtaSearchV2Response
       */
      Models::FlightModifyOtaSearchV2Response flightModifyOtaSearchV2(const Models::FlightModifyOtaSearchV2Request &request);

      /**
       * @summary 机票改签支付
       *
       * @description 使用该接口可以“机票改签支付”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightModifyPayV2Request
       * @param headers FlightModifyPayV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightModifyPayV2Response
       */
      Models::FlightModifyPayV2Response flightModifyPayV2WithOptions(const Models::FlightModifyPayV2Request &tmpReq, const Models::FlightModifyPayV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签支付
       *
       * @description 使用该接口可以“机票改签支付”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightModifyPayV2Request
       * @return FlightModifyPayV2Response
       */
      Models::FlightModifyPayV2Response flightModifyPayV2(const Models::FlightModifyPayV2Request &request);

      /**
       * @summary 航班订单明细信息
       *
       * @description 使用该接口可以查询航班订单明细信息。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightOrderDetailInfoRequest
       * @param headers FlightOrderDetailInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOrderDetailInfoResponse
       */
      Models::FlightOrderDetailInfoResponse flightOrderDetailInfoWithOptions(const Models::FlightOrderDetailInfoRequest &request, const Models::FlightOrderDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班订单明细信息
       *
       * @description 使用该接口可以查询航班订单明细信息。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightOrderDetailInfoRequest
       * @return FlightOrderDetailInfoResponse
       */
      Models::FlightOrderDetailInfoResponse flightOrderDetailInfo(const Models::FlightOrderDetailInfoRequest &request);

      /**
       * @summary 机票订单详情
       *
       * @description 使用该接口可以“机票订单详情”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderDetailV2Request
       * @param headers FlightOrderDetailV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOrderDetailV2Response
       */
      Models::FlightOrderDetailV2Response flightOrderDetailV2WithOptions(const Models::FlightOrderDetailV2Request &request, const Models::FlightOrderDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票订单详情
       *
       * @description 使用该接口可以“机票订单详情”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderDetailV2Request
       * @return FlightOrderDetailV2Response
       */
      Models::FlightOrderDetailV2Response flightOrderDetailV2(const Models::FlightOrderDetailV2Request &request);

      /**
       * @summary 国内查询机票订单列表
       *
       * @description 使用该接口可以查询指定企业的机票订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderListQueryRequest
       * @param headers FlightOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOrderListQueryResponse
       */
      Models::FlightOrderListQueryResponse flightOrderListQueryWithOptions(const Models::FlightOrderListQueryRequest &request, const Models::FlightOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国内查询机票订单列表
       *
       * @description 使用该接口可以查询指定企业的机票订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderListQueryRequest
       * @return FlightOrderListQueryResponse
       */
      Models::FlightOrderListQueryResponse flightOrderListQuery(const Models::FlightOrderListQueryRequest &request);

      /**
       * @summary 国内机票订单列表查询
       *
       * @description 使用该接口可以查询指定企业的机票订单列表，（支持单程、中转、往返航班）。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 1. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问地址](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightOrderListQueryV2Request
       * @param headers FlightOrderListQueryV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOrderListQueryV2Response
       */
      Models::FlightOrderListQueryV2Response flightOrderListQueryV2WithOptions(const Models::FlightOrderListQueryV2Request &tmpReq, const Models::FlightOrderListQueryV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国内机票订单列表查询
       *
       * @description 使用该接口可以查询指定企业的机票订单列表，（支持单程、中转、往返航班）。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 1. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问地址](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderListQueryV2Request
       * @return FlightOrderListQueryV2Response
       */
      Models::FlightOrderListQueryV2Response flightOrderListQueryV2(const Models::FlightOrderListQueryV2Request &request);

      /**
       * @summary 国内查询机票订单详情（含票信息）
       *
       * @description 使用该接口可以查询指定企业的机票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderQueryRequest
       * @param headers FlightOrderQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOrderQueryResponse
       */
      Models::FlightOrderQueryResponse flightOrderQueryWithOptions(const Models::FlightOrderQueryRequest &request, const Models::FlightOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国内查询机票订单详情（含票信息）
       *
       * @description 使用该接口可以查询指定企业的机票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOrderQueryRequest
       * @return FlightOrderQueryResponse
       */
      Models::FlightOrderQueryResponse flightOrderQuery(const Models::FlightOrderQueryRequest &request);

      /**
       * @summary 查询退改规则行李额
       *
       * @description 使用该接口可以“查询退改规则行李额”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOtaItemDetailRequest
       * @param headers FlightOtaItemDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOtaItemDetailResponse
       */
      Models::FlightOtaItemDetailResponse flightOtaItemDetailWithOptions(const Models::FlightOtaItemDetailRequest &request, const Models::FlightOtaItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询退改规则行李额
       *
       * @description 使用该接口可以“查询退改规则行李额”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOtaItemDetailRequest
       * @return FlightOtaItemDetailResponse
       */
      Models::FlightOtaItemDetailResponse flightOtaItemDetail(const Models::FlightOtaItemDetailRequest &request);

      /**
       * @summary 航班最低价搜索
       *
       * @description 使用该接口可以进行航班最低价搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightOtaSearchRequest
       * @param headers FlightOtaSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOtaSearchResponse
       */
      Models::FlightOtaSearchResponse flightOtaSearchWithOptions(const Models::FlightOtaSearchRequest &request, const Models::FlightOtaSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班最低价搜索
       *
       * @description 使用该接口可以进行航班最低价搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightOtaSearchRequest
       * @return FlightOtaSearchResponse
       */
      Models::FlightOtaSearchResponse flightOtaSearch(const Models::FlightOtaSearchRequest &request);

      /**
       * @summary 单航班报价搜索
       *
       * @description 使用该接口可以“单航班报价搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightOtaSearchV2Request
       * @param headers FlightOtaSearchV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightOtaSearchV2Response
       */
      Models::FlightOtaSearchV2Response flightOtaSearchV2WithOptions(const Models::FlightOtaSearchV2Request &tmpReq, const Models::FlightOtaSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单航班报价搜索
       *
       * @description 使用该接口可以“单航班报价搜索”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightOtaSearchV2Request
       * @return FlightOtaSearchV2Response
       */
      Models::FlightOtaSearchV2Response flightOtaSearchV2(const Models::FlightOtaSearchV2Request &request);

      /**
       * @summary 航班订单支付
       *
       * @description 使用该接口可以航班订单支付。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq FlightPayOrderRequest
       * @param headers FlightPayOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightPayOrderResponse
       */
      Models::FlightPayOrderResponse flightPayOrderWithOptions(const Models::FlightPayOrderRequest &tmpReq, const Models::FlightPayOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班订单支付
       *
       * @description 使用该接口可以航班订单支付。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightPayOrderRequest
       * @return FlightPayOrderResponse
       */
      Models::FlightPayOrderResponse flightPayOrder(const Models::FlightPayOrderRequest &request);

      /**
       * @summary 机票订单支付
       *
       * @description 使用该接口可以“机票订单支付”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightPayOrderV2Request
       * @param headers FlightPayOrderV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightPayOrderV2Response
       */
      Models::FlightPayOrderV2Response flightPayOrderV2WithOptions(const Models::FlightPayOrderV2Request &request, const Models::FlightPayOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票订单支付
       *
       * @description 使用该接口可以“机票订单支付”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightPayOrderV2Request
       * @return FlightPayOrderV2Response
       */
      Models::FlightPayOrderV2Response flightPayOrderV2(const Models::FlightPayOrderV2Request &request);

      /**
       * @summary 航班退票申请
       *
       * @description 使用该接口可以查询商旅机票退票申请
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq FlightRefundApplyRequest
       * @param headers FlightRefundApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundApplyResponse
       */
      Models::FlightRefundApplyResponse flightRefundApplyWithOptions(const Models::FlightRefundApplyRequest &tmpReq, const Models::FlightRefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班退票申请
       *
       * @description 使用该接口可以查询商旅机票退票申请
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightRefundApplyRequest
       * @return FlightRefundApplyResponse
       */
      Models::FlightRefundApplyResponse flightRefundApply(const Models::FlightRefundApplyRequest &request);

      /**
       * @summary 机票退票申请
       *
       * @description 使用该接口可以“机票退票申请”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightRefundApplyV2Request
       * @param headers FlightRefundApplyV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundApplyV2Response
       */
      Models::FlightRefundApplyV2Response flightRefundApplyV2WithOptions(const Models::FlightRefundApplyV2Request &tmpReq, const Models::FlightRefundApplyV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票退票申请
       *
       * @description 使用该接口可以“机票退票申请”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightRefundApplyV2Request
       * @return FlightRefundApplyV2Response
       */
      Models::FlightRefundApplyV2Response flightRefundApplyV2(const Models::FlightRefundApplyV2Request &request);

      /**
       * @summary 航班退票详情
       *
       * @description 使用该接口可以查询航班退票详情。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightRefundDetailRequest
       * @param headers FlightRefundDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundDetailResponse
       */
      Models::FlightRefundDetailResponse flightRefundDetailWithOptions(const Models::FlightRefundDetailRequest &request, const Models::FlightRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班退票详情
       *
       * @description 使用该接口可以查询航班退票详情。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightRefundDetailRequest
       * @return FlightRefundDetailResponse
       */
      Models::FlightRefundDetailResponse flightRefundDetail(const Models::FlightRefundDetailRequest &request);

      /**
       * @summary 机票退票详情
       *
       * @description 使用该接口可以查询“机票退票详情”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightRefundDetailV2Request
       * @param headers FlightRefundDetailV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundDetailV2Response
       */
      Models::FlightRefundDetailV2Response flightRefundDetailV2WithOptions(const Models::FlightRefundDetailV2Request &request, const Models::FlightRefundDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票退票详情
       *
       * @description 使用该接口可以查询“机票退票详情”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightRefundDetailV2Request
       * @return FlightRefundDetailV2Response
       */
      Models::FlightRefundDetailV2Response flightRefundDetailV2(const Models::FlightRefundDetailV2Request &request);

      /**
       * @summary 机票退票预计算
       *
       * @description 使用该接口可以机票退票预计算。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq FlightRefundPreCalRequest
       * @param headers FlightRefundPreCalHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundPreCalResponse
       */
      Models::FlightRefundPreCalResponse flightRefundPreCalWithOptions(const Models::FlightRefundPreCalRequest &tmpReq, const Models::FlightRefundPreCalHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票退票预计算
       *
       * @description 使用该接口可以机票退票预计算。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightRefundPreCalRequest
       * @return FlightRefundPreCalResponse
       */
      Models::FlightRefundPreCalResponse flightRefundPreCal(const Models::FlightRefundPreCalRequest &request);

      /**
       * @summary 机票退票费用预计算
       *
       * @description 使用该接口可以“机票退票费用预计算”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq FlightRefundPreCalV2Request
       * @param headers FlightRefundPreCalV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightRefundPreCalV2Response
       */
      Models::FlightRefundPreCalV2Response flightRefundPreCalV2WithOptions(const Models::FlightRefundPreCalV2Request &tmpReq, const Models::FlightRefundPreCalV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票退票费用预计算
       *
       * @description 使用该接口可以“机票退票费用预计算”。
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request FlightRefundPreCalV2Request
       * @return FlightRefundPreCalV2Response
       */
      Models::FlightRefundPreCalV2Response flightRefundPreCalV2(const Models::FlightRefundPreCalV2Request &request);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以航班列表搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightSearchListRequest
       * @param headers FlightSearchListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightSearchListResponse
       */
      Models::FlightSearchListResponse flightSearchListWithOptions(const Models::FlightSearchListRequest &request, const Models::FlightSearchListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航班列表搜索
       *
       * @description 使用该接口可以航班列表搜索。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request FlightSearchListRequest
       * @return FlightSearchListResponse
       */
      Models::FlightSearchListResponse flightSearchList(const Models::FlightSearchListRequest &request);

      /**
       * @summary 查询福豆记账数据
       *
       * @description - 调用本接口前，需要在应用中开通**商旅账单数据**权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1小时 ≤记账截止时间 - 记账起始时间 ≤ 24小时。
       * - 记账数据的更新时机为当前时间 + 1小时。
       *
       * @param request FuPointBillSettlementQueryRequest
       * @param headers FuPointBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FuPointBillSettlementQueryResponse
       */
      Models::FuPointBillSettlementQueryResponse fuPointBillSettlementQueryWithOptions(const Models::FuPointBillSettlementQueryRequest &request, const Models::FuPointBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询福豆记账数据
       *
       * @description - 调用本接口前，需要在应用中开通**商旅账单数据**权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1小时 ≤记账截止时间 - 记账起始时间 ≤ 24小时。
       * - 记账数据的更新时机为当前时间 + 1小时。
       *
       * @param request FuPointBillSettlementQueryRequest
       * @return FuPointBillSettlementQueryResponse
       */
      Models::FuPointBillSettlementQueryResponse fuPointBillSettlementQuery(const Models::FuPointBillSettlementQueryRequest &request);

      /**
       * @summary 换取GroupCorpToken接口
       *
       * @description - 建议您通过**中控服务统一处理**或**单位时间单一刷新**亦或通过**单机 Job 任务**的方式进行凭证获取，详细说明请参见：[凭证获取指南](https://openapi.alibtrip.com/doc/toDocDetail?docId=3917854)。
       * - token 的有效时长可以从 `expire` 字段中获取，初始值为 2 小时（7200000ms）。为防止 token 失效，建议刷新间隔控制为：**5 分钟 ≤ 间隔 ≤ 2 小时**。在此间隔内刷新，上一次请求获取的 token 仍然有效。
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 及 `app_secret` 作为**必填参数**传入。二者的获取方式请参见：[应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 原请求参数中的 `x-acs-btrip-access-token` 参数现**已作废**，请使用 `app_secret`。
       *
       * @param request GroupCorpTokenRequest
       * @param headers GroupCorpTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GroupCorpTokenResponse
       */
      Models::GroupCorpTokenResponse groupCorpTokenWithOptions(const Models::GroupCorpTokenRequest &request, const Models::GroupCorpTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 换取GroupCorpToken接口
       *
       * @description - 建议您通过**中控服务统一处理**或**单位时间单一刷新**亦或通过**单机 Job 任务**的方式进行凭证获取，详细说明请参见：[凭证获取指南](https://openapi.alibtrip.com/doc/toDocDetail?docId=3917854)。
       * - token 的有效时长可以从 `expire` 字段中获取，初始值为 2 小时（7200000ms）。为防止 token 失效，建议刷新间隔控制为：**5 分钟 ≤ 间隔 ≤ 2 小时**。在此间隔内刷新，上一次请求获取的 token 仍然有效。
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 及 `app_secret` 作为**必填参数**传入。二者的获取方式请参见：[应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 原请求参数中的 `x-acs-btrip-access-token` 参数现**已作废**，请使用 `app_secret`。
       *
       * @param request GroupCorpTokenRequest
       * @return GroupCorpTokenResponse
       */
      Models::GroupCorpTokenResponse groupCorpToken(const Models::GroupCorpTokenRequest &request);

      /**
       * @summary 集团部门同步
       *
       * @description - 调用本接口前，请先完成部门人员同步相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq GroupDepartSaveRequest
       * @param headers GroupDepartSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GroupDepartSaveResponse
       */
      Models::GroupDepartSaveResponse groupDepartSaveWithOptions(const Models::GroupDepartSaveRequest &tmpReq, const Models::GroupDepartSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集团部门同步
       *
       * @description - 调用本接口前，请先完成部门人员同步相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request GroupDepartSaveRequest
       * @return GroupDepartSaveResponse
       */
      Models::GroupDepartSaveResponse groupDepartSave(const Models::GroupDepartSaveRequest &request);

      /**
       * @summary 集团人员同步
       *
       * @description 使用该接口可以往商旅中多个集团子企业同步人员。
       * 1.  使用该接口需要在应用中开组织人员同步权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq GroupUserSaveRequest
       * @param headers GroupUserSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GroupUserSaveResponse
       */
      Models::GroupUserSaveResponse groupUserSaveWithOptions(const Models::GroupUserSaveRequest &tmpReq, const Models::GroupUserSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集团人员同步
       *
       * @description 使用该接口可以往商旅中多个集团子企业同步人员。
       * 1.  使用该接口需要在应用中开组织人员同步权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request GroupUserSaveRequest
       * @return GroupUserSaveResponse
       */
      Models::GroupUserSaveResponse groupUserSave(const Models::GroupUserSaveRequest &request);

      /**
       * @summary 酒店起价
       *
       * @description 使用该接口可以进行酒店起价拉取。
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelAskingPriceRequest
       * @param headers HotelAskingPriceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelAskingPriceResponse
       */
      Models::HotelAskingPriceResponse hotelAskingPriceWithOptions(const Models::HotelAskingPriceRequest &tmpReq, const Models::HotelAskingPriceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店起价
       *
       * @description 使用该接口可以进行酒店起价拉取。
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelAskingPriceRequest
       * @return HotelAskingPriceResponse
       */
      Models::HotelAskingPriceResponse hotelAskingPrice(const Models::HotelAskingPriceRequest &request);

      /**
       * @summary 查询酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request HotelBillSettlementQueryRequest
       * @param headers HotelBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelBillSettlementQueryResponse
       */
      Models::HotelBillSettlementQueryResponse hotelBillSettlementQueryWithOptions(const Models::HotelBillSettlementQueryRequest &request, const Models::HotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request HotelBillSettlementQueryRequest
       * @return HotelBillSettlementQueryResponse
       */
      Models::HotelBillSettlementQueryResponse hotelBillSettlementQuery(const Models::HotelBillSettlementQueryRequest &request);

      /**
       * @summary 酒店城市列表
       *
       * @description 使用该接口可以查询酒店城市列表
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelCityCodeListRequest
       * @param headers HotelCityCodeListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelCityCodeListResponse
       */
      Models::HotelCityCodeListResponse hotelCityCodeListWithOptions(const Models::HotelCityCodeListRequest &request, const Models::HotelCityCodeListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店城市列表
       *
       * @description 使用该接口可以查询酒店城市列表
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelCityCodeListRequest
       * @return HotelCityCodeListResponse
       */
      Models::HotelCityCodeListResponse hotelCityCodeList(const Models::HotelCityCodeListRequest &request);

      /**
       * @summary 查询酒店超标审批详情
       *
       * @description 使用该接口可以查询指定企业的酒店超标审批详情。
       * - 使用该接口需要在应用中开通超标审批数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelExceedApplyQueryRequest
       * @param headers HotelExceedApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelExceedApplyQueryResponse
       */
      Models::HotelExceedApplyQueryResponse hotelExceedApplyQueryWithOptions(const Models::HotelExceedApplyQueryRequest &request, const Models::HotelExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店超标审批详情
       *
       * @description 使用该接口可以查询指定企业的酒店超标审批详情。
       * - 使用该接口需要在应用中开通超标审批数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelExceedApplyQueryRequest
       * @return HotelExceedApplyQueryResponse
       */
      Models::HotelExceedApplyQueryResponse hotelExceedApplyQuery(const Models::HotelExceedApplyQueryRequest &request);

      /**
       * @summary 酒店详情页报价接口(直连)
       *
       * @description 使用该接口可以查询酒店实时报价接口
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelGoodsQueryRequest
       * @param headers HotelGoodsQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelGoodsQueryResponse
       */
      Models::HotelGoodsQueryResponse hotelGoodsQueryWithOptions(const Models::HotelGoodsQueryRequest &request, const Models::HotelGoodsQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店详情页报价接口(直连)
       *
       * @description 使用该接口可以查询酒店实时报价接口
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelGoodsQueryRequest
       * @return HotelGoodsQueryResponse
       */
      Models::HotelGoodsQueryResponse hotelGoodsQuery(const Models::HotelGoodsQueryRequest &request);

      /**
       * @summary 获取酒店清单
       *
       * @description 使用该接口可以查询酒店Id列表
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelIndexInfoRequest
       * @param headers HotelIndexInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelIndexInfoResponse
       */
      Models::HotelIndexInfoResponse hotelIndexInfoWithOptions(const Models::HotelIndexInfoRequest &request, const Models::HotelIndexInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店清单
       *
       * @description 使用该接口可以查询酒店Id列表
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelIndexInfoRequest
       * @return HotelIndexInfoResponse
       */
      Models::HotelIndexInfoResponse hotelIndexInfo(const Models::HotelIndexInfoRequest &request);

      /**
       * @summary 酒店订单取消
       *
       * @description 使用该接口可以酒店订单取消
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderCancelRequest
       * @param headers HotelOrderCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderCancelResponse
       */
      Models::HotelOrderCancelResponse hotelOrderCancelWithOptions(const Models::HotelOrderCancelRequest &request, const Models::HotelOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单取消
       *
       * @description 使用该接口可以酒店订单取消
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderCancelRequest
       * @return HotelOrderCancelResponse
       */
      Models::HotelOrderCancelResponse hotelOrderCancel(const Models::HotelOrderCancelRequest &request);

      /**
       * @summary 酒店订单修改申请
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelOrderChangeApplyRequest
       * @param headers HotelOrderChangeApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderChangeApplyResponse
       */
      Models::HotelOrderChangeApplyResponse hotelOrderChangeApplyWithOptions(const Models::HotelOrderChangeApplyRequest &tmpReq, const Models::HotelOrderChangeApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单修改申请
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderChangeApplyRequest
       * @return HotelOrderChangeApplyResponse
       */
      Models::HotelOrderChangeApplyResponse hotelOrderChangeApply(const Models::HotelOrderChangeApplyRequest &request);

      /**
       * @summary 酒店订单修改详情
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderChangeDetailRequest
       * @param headers HotelOrderChangeDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderChangeDetailResponse
       */
      Models::HotelOrderChangeDetailResponse hotelOrderChangeDetailWithOptions(const Models::HotelOrderChangeDetailRequest &request, const Models::HotelOrderChangeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单修改详情
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderChangeDetailRequest
       * @return HotelOrderChangeDetailResponse
       */
      Models::HotelOrderChangeDetailResponse hotelOrderChangeDetail(const Models::HotelOrderChangeDetailRequest &request);

      /**
       * @summary 酒店订单创建
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelOrderCreateRequest
       * @param headers HotelOrderCreateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderCreateResponse
       */
      Models::HotelOrderCreateResponse hotelOrderCreateWithOptions(const Models::HotelOrderCreateRequest &tmpReq, const Models::HotelOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单创建
       *
       * @description 使用该接口可以酒店订单创建
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderCreateRequest
       * @return HotelOrderCreateResponse
       */
      Models::HotelOrderCreateResponse hotelOrderCreate(const Models::HotelOrderCreateRequest &request);

      /**
       * @summary 酒店订单明细信息
       *
       * @description 使用该接口可以酒店订单详情
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderDetailInfoRequest
       * @param headers HotelOrderDetailInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderDetailInfoResponse
       */
      Models::HotelOrderDetailInfoResponse hotelOrderDetailInfoWithOptions(const Models::HotelOrderDetailInfoRequest &request, const Models::HotelOrderDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单明细信息
       *
       * @description 使用该接口可以酒店订单详情
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderDetailInfoRequest
       * @return HotelOrderDetailInfoResponse
       */
      Models::HotelOrderDetailInfoResponse hotelOrderDetailInfo(const Models::HotelOrderDetailInfoRequest &request);

      /**
       * @summary 自营酒店订单查询
       *
       * @description 使用该接口可以查询指定企业的自营酒店订单详情。
       * 1. 使用该接口需要在应用中开通阿里商旅自营-订单&客票数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * 2. 使用该接口需要在请求参数中放入企业调用凭证数据信息（corp_token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterpris)
       *
       * @param headers HotelOrderInfoQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderInfoQueryResponse
       */
      Models::HotelOrderInfoQueryResponse hotelOrderInfoQueryWithOptions(const string &orderId, const Models::HotelOrderInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自营酒店订单查询
       *
       * @description 使用该接口可以查询指定企业的自营酒店订单详情。
       * 1. 使用该接口需要在应用中开通阿里商旅自营-订单&客票数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * 2. 使用该接口需要在请求参数中放入企业调用凭证数据信息（corp_token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterpris)
       *
       * @return HotelOrderInfoQueryResponse
       */
      Models::HotelOrderInfoQueryResponse hotelOrderInfoQuery(const string &orderId);

      /**
       * @summary 查询酒店订单列表
       *
       * @description 使用该接口可以查询指定企业的酒店订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelOrderListQueryRequest
       * @param headers HotelOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderListQueryResponse
       */
      Models::HotelOrderListQueryResponse hotelOrderListQueryWithOptions(const Models::HotelOrderListQueryRequest &request, const Models::HotelOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店订单列表
       *
       * @description 使用该接口可以查询指定企业的酒店订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelOrderListQueryRequest
       * @return HotelOrderListQueryResponse
       */
      Models::HotelOrderListQueryResponse hotelOrderListQuery(const Models::HotelOrderListQueryRequest &request);

      /**
       * @summary 酒店订单支付
       *
       * @description 使用该接口可以酒店订单支付
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderPayRequest
       * @param headers HotelOrderPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderPayResponse
       */
      Models::HotelOrderPayResponse hotelOrderPayWithOptions(const Models::HotelOrderPayRequest &request, const Models::HotelOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单支付
       *
       * @description 使用该接口可以酒店订单支付
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderPayRequest
       * @return HotelOrderPayResponse
       */
      Models::HotelOrderPayResponse hotelOrderPay(const Models::HotelOrderPayRequest &request);

      /**
       * @summary 酒店下单前校验
       *
       * @description 使用该接口是酒店下单前校验
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelOrderPreValidateRequest
       * @param headers HotelOrderPreValidateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderPreValidateResponse
       */
      Models::HotelOrderPreValidateResponse hotelOrderPreValidateWithOptions(const Models::HotelOrderPreValidateRequest &tmpReq, const Models::HotelOrderPreValidateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店下单前校验
       *
       * @description 使用该接口是酒店下单前校验
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelOrderPreValidateRequest
       * @return HotelOrderPreValidateResponse
       */
      Models::HotelOrderPreValidateResponse hotelOrderPreValidate(const Models::HotelOrderPreValidateRequest &request);

      /**
       * @summary 酒店订单查询
       *
       * @description 使用该接口可以查询指定企业的酒店订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelOrderQueryRequest
       * @param headers HotelOrderQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelOrderQueryResponse
       */
      Models::HotelOrderQueryResponse hotelOrderQueryWithOptions(const Models::HotelOrderQueryRequest &request, const Models::HotelOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店订单查询
       *
       * @description 使用该接口可以查询指定企业的酒店订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelOrderQueryRequest
       * @return HotelOrderQueryResponse
       */
      Models::HotelOrderQueryResponse hotelOrderQuery(const Models::HotelOrderQueryRequest &request);

      /**
       * @summary 酒店拉动态拉取价格接口(落地)
       *
       * @description 使用该接口可以“拉取存储酒店价格数据”。
       * 1. 使用该接口需要在应用中开通“酒店服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq HotelPricePullRequest
       * @param headers HotelPricePullHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelPricePullResponse
       */
      Models::HotelPricePullResponse hotelPricePullWithOptions(const Models::HotelPricePullRequest &tmpReq, const Models::HotelPricePullHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店拉动态拉取价格接口(落地)
       *
       * @description 使用该接口可以“拉取存储酒店价格数据”。
       * 1. 使用该接口需要在应用中开通“酒店服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request HotelPricePullRequest
       * @return HotelPricePullResponse
       */
      Models::HotelPricePullResponse hotelPricePull(const Models::HotelPricePullRequest &request);

      /**
       * @summary 获取酒店静态房型详情
       *
       * @description 使用该接口可以查询酒店静态房型信息
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelRoomInfoRequest
       * @param headers HotelRoomInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelRoomInfoResponse
       */
      Models::HotelRoomInfoResponse hotelRoomInfoWithOptions(const Models::HotelRoomInfoRequest &tmpReq, const Models::HotelRoomInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取酒店静态房型详情
       *
       * @description 使用该接口可以查询酒店静态房型信息
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelRoomInfoRequest
       * @return HotelRoomInfoResponse
       */
      Models::HotelRoomInfoResponse hotelRoomInfo(const Models::HotelRoomInfoRequest &request);

      /**
       * @summary 酒店列表搜索接口(直连)
       *
       * @description 使用该接口可以进行酒店列表搜索。
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelSearchRequest
       * @param headers HotelSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelSearchResponse
       */
      Models::HotelSearchResponse hotelSearchWithOptions(const Models::HotelSearchRequest &tmpReq, const Models::HotelSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店列表搜索接口(直连)
       *
       * @description 使用该接口可以进行酒店列表搜索。
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelSearchRequest
       * @return HotelSearchResponse
       */
      Models::HotelSearchResponse hotelSearch(const Models::HotelSearchRequest &request);

      /**
       * @summary 查询酒店静态详情
       *
       * @description 使用该接口可以查询酒店静态信息
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq HotelStaticInfoRequest
       * @param headers HotelStaticInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelStaticInfoResponse
       */
      Models::HotelStaticInfoResponse hotelStaticInfoWithOptions(const Models::HotelStaticInfoRequest &tmpReq, const Models::HotelStaticInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店静态详情
       *
       * @description 使用该接口可以查询酒店静态信息
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelStaticInfoRequest
       * @return HotelStaticInfoResponse
       */
      Models::HotelStaticInfoResponse hotelStaticInfo(const Models::HotelStaticInfoRequest &request);

      /**
       * @summary 酒店关键词搜索
       *
       * @description 使用该接口可以进行酒店关键词搜索
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelSuggestV2Request
       * @param headers HotelSuggestV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotelSuggestV2Response
       */
      Models::HotelSuggestV2Response hotelSuggestV2WithOptions(const Models::HotelSuggestV2Request &request, const Models::HotelSuggestV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 酒店关键词搜索
       *
       * @description 使用该接口可以进行酒店关键词搜索
       * - 使用该接口需要在应用中开通酒店服务权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request HotelSuggestV2Request
       * @return HotelSuggestV2Response
       */
      Models::HotelSuggestV2Response hotelSuggestV2(const Models::HotelSuggestV2Request &request);

      /**
       * @summary International Flight Order Details
       *
       * @description 使用该接口可以查询指定企业的机票订单详情。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IFlightOrderDetailQueryRequest
       * @param headers IFlightOrderDetailQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IFlightOrderDetailQueryResponse
       */
      Models::IFlightOrderDetailQueryResponse iFlightOrderDetailQueryWithOptions(const Models::IFlightOrderDetailQueryRequest &request, const Models::IFlightOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary International Flight Order Details
       *
       * @description 使用该接口可以查询指定企业的机票订单详情。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IFlightOrderDetailQueryRequest
       * @return IFlightOrderDetailQueryResponse
       */
      Models::IFlightOrderDetailQueryResponse iFlightOrderDetailQuery(const Models::IFlightOrderDetailQueryRequest &request);

      /**
       * @summary 国际机票订单列表
       *
       * @description 使用该接口可以查询指定企业的国际机票订单列表。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq IFlightOrderListQueryRequest
       * @param headers IFlightOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IFlightOrderListQueryResponse
       */
      Models::IFlightOrderListQueryResponse iFlightOrderListQueryWithOptions(const Models::IFlightOrderListQueryRequest &tmpReq, const Models::IFlightOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票订单列表
       *
       * @description 使用该接口可以查询指定企业的国际机票订单列表。
       * 1. 使用该接口需要在应用中开通商旅开放平台订单&客票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IFlightOrderListQueryRequest
       * @return IFlightOrderListQueryResponse
       */
      Models::IFlightOrderListQueryResponse iFlightOrderListQuery(const Models::IFlightOrderListQueryRequest &request);

      /**
       * @summary 查询国际/中国港澳台用车记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeCarBillSettlementQueryRequest
       * @param headers IeCarBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IeCarBillSettlementQueryResponse
       */
      Models::IeCarBillSettlementQueryResponse ieCarBillSettlementQueryWithOptions(const Models::IeCarBillSettlementQueryRequest &request, const Models::IeCarBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询国际/中国港澳台用车记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeCarBillSettlementQueryRequest
       * @return IeCarBillSettlementQueryResponse
       */
      Models::IeCarBillSettlementQueryResponse ieCarBillSettlementQuery(const Models::IeCarBillSettlementQueryRequest &request);

      /**
       * @summary 查询国际机票记账数据
       *
       * @description - 调用本接口前，需要在应用中开通商旅账单数据权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。AppKey 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeFlightBillSettlementQueryRequest
       * @param headers IeFlightBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IeFlightBillSettlementQueryResponse
       */
      Models::IeFlightBillSettlementQueryResponse ieFlightBillSettlementQueryWithOptions(const Models::IeFlightBillSettlementQueryRequest &request, const Models::IeFlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询国际机票记账数据
       *
       * @description - 调用本接口前，需要在应用中开通商旅账单数据权限。权限获取流程请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。AppKey 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeFlightBillSettlementQueryRequest
       * @return IeFlightBillSettlementQueryResponse
       */
      Models::IeFlightBillSettlementQueryResponse ieFlightBillSettlementQuery(const Models::IeFlightBillSettlementQueryRequest &request);

      /**
       * @summary 查询国际/中国港澳台酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeHotelBillSettlementQueryRequest
       * @param headers IeHotelBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IeHotelBillSettlementQueryResponse
       */
      Models::IeHotelBillSettlementQueryResponse ieHotelBillSettlementQueryWithOptions(const Models::IeHotelBillSettlementQueryRequest &request, const Models::IeHotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询国际/中国港澳台酒店记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据的起止时间间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request IeHotelBillSettlementQueryRequest
       * @return IeHotelBillSettlementQueryResponse
       */
      Models::IeHotelBillSettlementQueryResponse ieHotelBillSettlementQuery(const Models::IeHotelBillSettlementQueryRequest &request);

      /**
       * @summary 查询保险电子发票
       *
       * @description 使用该接口可以查询保险电子发票明细数据
       * - 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * - 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permission-application-process-1?handbookId=development-support)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)。
       *
       * @param request InsInvoiceScanQueryRequest
       * @param headers InsInvoiceScanQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsInvoiceScanQueryResponse
       */
      Models::InsInvoiceScanQueryResponse insInvoiceScanQueryWithOptions(const Models::InsInvoiceScanQueryRequest &request, const Models::InsInvoiceScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询保险电子发票
       *
       * @description 使用该接口可以查询保险电子发票明细数据
       * - 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * - 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permission-application-process-1?handbookId=development-support)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)。
       *
       * @param request InsInvoiceScanQueryRequest
       * @return InsInvoiceScanQueryResponse
       */
      Models::InsInvoiceScanQueryResponse insInvoiceScanQuery(const Models::InsInvoiceScanQueryRequest &request);

      /**
       * @summary 保险订单申请
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderApplyRequest
       * @param headers InsureOrderApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderApplyResponse
       */
      Models::InsureOrderApplyResponse insureOrderApplyWithOptions(const Models::InsureOrderApplyRequest &request, const Models::InsureOrderApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单申请
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderApplyRequest
       * @return InsureOrderApplyResponse
       */
      Models::InsureOrderApplyResponse insureOrderApply(const Models::InsureOrderApplyRequest &request);

      /**
       * @summary 保险订单取消
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderCancelRequest
       * @param headers InsureOrderCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderCancelResponse
       */
      Models::InsureOrderCancelResponse insureOrderCancelWithOptions(const string &insOrderId, const Models::InsureOrderCancelRequest &request, const Models::InsureOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单取消
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderCancelRequest
       * @return InsureOrderCancelResponse
       */
      Models::InsureOrderCancelResponse insureOrderCancel(const string &insOrderId, const Models::InsureOrderCancelRequest &request);

      /**
       * @summary 保险订单创建
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq InsureOrderCreateRequest
       * @param headers InsureOrderCreateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderCreateResponse
       */
      Models::InsureOrderCreateResponse insureOrderCreateWithOptions(const Models::InsureOrderCreateRequest &tmpReq, const Models::InsureOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单创建
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderCreateRequest
       * @return InsureOrderCreateResponse
       */
      Models::InsureOrderCreateResponse insureOrderCreate(const Models::InsureOrderCreateRequest &request);

      /**
       * @summary 保险订单查询
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderDetailRequest
       * @param headers InsureOrderDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderDetailResponse
       */
      Models::InsureOrderDetailResponse insureOrderDetailWithOptions(const Models::InsureOrderDetailRequest &request, const Models::InsureOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单查询
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderDetailRequest
       * @return InsureOrderDetailResponse
       */
      Models::InsureOrderDetailResponse insureOrderDetail(const Models::InsureOrderDetailRequest &request);

      /**
       * @summary 保险订单支付
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderPayRequest
       * @param headers InsureOrderPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderPayResponse
       */
      Models::InsureOrderPayResponse insureOrderPayWithOptions(const string &insOrderId, const Models::InsureOrderPayRequest &request, const Models::InsureOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单支付
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderPayRequest
       * @return InsureOrderPayResponse
       */
      Models::InsureOrderPayResponse insureOrderPay(const string &insOrderId, const Models::InsureOrderPayRequest &request);

      /**
       * @summary 保险订单退保
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq InsureOrderRefundRequest
       * @param headers InsureOrderRefundHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderRefundResponse
       */
      Models::InsureOrderRefundResponse insureOrderRefundWithOptions(const string &insOrderId, const Models::InsureOrderRefundRequest &tmpReq, const Models::InsureOrderRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保险订单退保
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureOrderRefundRequest
       * @return InsureOrderRefundResponse
       */
      Models::InsureOrderRefundResponse insureOrderRefund(const string &insOrderId, const Models::InsureOrderRefundRequest &request);

      /**
       * @summary 查询保单详情链接
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param headers InsureOrderUrlDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureOrderUrlDetailResponse
       */
      Models::InsureOrderUrlDetailResponse insureOrderUrlDetailWithOptions(const string &insOrderId, const Models::InsureOrderUrlDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询保单详情链接
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @return InsureOrderUrlDetailResponse
       */
      Models::InsureOrderUrlDetailResponse insureOrderUrlDetail(const string &insOrderId);

      /**
       * @summary 退保详情查询
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureRefundDetailRequest
       * @param headers InsureRefundDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsureRefundDetailResponse
       */
      Models::InsureRefundDetailResponse insureRefundDetailWithOptions(const Models::InsureRefundDetailRequest &request, const Models::InsureRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 退保详情查询
       *
       * @description 使用该接口可以“接口功能描述”。
       * 1. 使用该接口需要在应用中开通“机票服务”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InsureRefundDetailRequest
       * @return InsureRefundDetailResponse
       */
      Models::InsureRefundDetailResponse insureRefundDetail(const Models::InsureRefundDetailRequest &request);

      /**
       * @summary 国际机票创建订单
       *
       * @description 使用该接口可以创建国际机票订单。
       * 1.  使用该接口需要在应用中开通国际机票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq IntlFlightCreateOrderRequest
       * @param headers IntlFlightCreateOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightCreateOrderResponse
       */
      Models::IntlFlightCreateOrderResponse intlFlightCreateOrderWithOptions(const Models::IntlFlightCreateOrderRequest &tmpReq, const Models::IntlFlightCreateOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票创建订单
       *
       * @description 使用该接口可以创建国际机票订单。
       * 1.  使用该接口需要在应用中开通国际机票权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightCreateOrderRequest
       * @return IntlFlightCreateOrderResponse
       */
      Models::IntlFlightCreateOrderResponse intlFlightCreateOrder(const Models::IntlFlightCreateOrderRequest &request);

      /**
       * @summary 国际机票验舱验价
       *
       * @description 使用该接口可以对“国际机票航班报价进行验舱验价”。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq IntlFlightInventoryPriceCheckRequest
       * @param headers IntlFlightInventoryPriceCheckHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightInventoryPriceCheckResponse
       */
      Models::IntlFlightInventoryPriceCheckResponse intlFlightInventoryPriceCheckWithOptions(const Models::IntlFlightInventoryPriceCheckRequest &tmpReq, const Models::IntlFlightInventoryPriceCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票验舱验价
       *
       * @description 使用该接口可以对“国际机票航班报价进行验舱验价”。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightInventoryPriceCheckRequest
       * @return IntlFlightInventoryPriceCheckResponse
       */
      Models::IntlFlightInventoryPriceCheckResponse intlFlightInventoryPriceCheck(const Models::IntlFlightInventoryPriceCheckRequest &request);

      /**
       * @summary 国际机票航班搜索
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param tmpReq IntlFlightListingSearchRequest
       * @param headers IntlFlightListingSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightListingSearchResponse
       */
      Models::IntlFlightListingSearchResponse intlFlightListingSearchWithOptions(const Models::IntlFlightListingSearchRequest &tmpReq, const Models::IntlFlightListingSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票航班搜索
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightListingSearchRequest
       * @return IntlFlightListingSearchResponse
       */
      Models::IntlFlightListingSearchResponse intlFlightListingSearch(const Models::IntlFlightListingSearchRequest &request);

      /**
       * @summary 国际机票订单取消
       *
       * @description 使用该接口可以对国际机票订单进行取消操作。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderCancelRequest
       * @param headers IntlFlightOrderCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOrderCancelResponse
       */
      Models::IntlFlightOrderCancelResponse intlFlightOrderCancelWithOptions(const Models::IntlFlightOrderCancelRequest &request, const Models::IntlFlightOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票订单取消
       *
       * @description 使用该接口可以对国际机票订单进行取消操作。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderCancelRequest
       * @return IntlFlightOrderCancelResponse
       */
      Models::IntlFlightOrderCancelResponse intlFlightOrderCancel(const Models::IntlFlightOrderCancelRequest &request);

      /**
       * @summary 国际机票订单详情
       *
       * @description 使用该接口可以查询国际机票订单详情。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderDetailRequest
       * @param headers IntlFlightOrderDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOrderDetailResponse
       */
      Models::IntlFlightOrderDetailResponse intlFlightOrderDetailWithOptions(const Models::IntlFlightOrderDetailRequest &request, const Models::IntlFlightOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票订单详情
       *
       * @description 使用该接口可以查询国际机票订单详情。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderDetailRequest
       * @return IntlFlightOrderDetailResponse
       */
      Models::IntlFlightOrderDetailResponse intlFlightOrderDetail(const Models::IntlFlightOrderDetailRequest &request);

      /**
       * @summary 国际机票订单支付
       *
       * @description 使用该接口可以对国际机票订单进行支付。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderPayRequest
       * @param headers IntlFlightOrderPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOrderPayResponse
       */
      Models::IntlFlightOrderPayResponse intlFlightOrderPayWithOptions(const Models::IntlFlightOrderPayRequest &request, const Models::IntlFlightOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票订单支付
       *
       * @description 使用该接口可以对国际机票订单进行支付。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderPayRequest
       * @return IntlFlightOrderPayResponse
       */
      Models::IntlFlightOrderPayResponse intlFlightOrderPay(const Models::IntlFlightOrderPayRequest &request);

      /**
       * @summary 国际机票订单支付前校验
       *
       * @description 使用该接口可以对国际机票订单进行支付前校验，校验通过才可支付。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderPayCheckRequest
       * @param headers IntlFlightOrderPayCheckHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOrderPayCheckResponse
       */
      Models::IntlFlightOrderPayCheckResponse intlFlightOrderPayCheckWithOptions(const Models::IntlFlightOrderPayCheckRequest &request, const Models::IntlFlightOrderPayCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票订单支付前校验
       *
       * @description 使用该接口可以对国际机票订单进行支付前校验，校验通过才可支付。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightOrderPayCheckRequest
       * @return IntlFlightOrderPayCheckResponse
       */
      Models::IntlFlightOrderPayCheckResponse intlFlightOrderPayCheck(const Models::IntlFlightOrderPayCheckRequest &request);

      /**
       * @summary 国际机票报价商品详情
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightOtaItemDetailRequest
       * @param headers IntlFlightOtaItemDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOtaItemDetailResponse
       */
      Models::IntlFlightOtaItemDetailResponse intlFlightOtaItemDetailWithOptions(const string &otaItemId, const Models::IntlFlightOtaItemDetailRequest &request, const Models::IntlFlightOtaItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票报价商品详情
       *
       * @description 使用该接口可以进行航班列表搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightOtaItemDetailRequest
       * @return IntlFlightOtaItemDetailResponse
       */
      Models::IntlFlightOtaItemDetailResponse intlFlightOtaItemDetail(const string &otaItemId, const Models::IntlFlightOtaItemDetailRequest &request);

      /**
       * @summary 国际机票航班报价查询
       *
       * @description 使用该接口可以进行航班报价搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param tmpReq IntlFlightOtaSearchRequest
       * @param headers IntlFlightOtaSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightOtaSearchResponse
       */
      Models::IntlFlightOtaSearchResponse intlFlightOtaSearchWithOptions(const Models::IntlFlightOtaSearchRequest &tmpReq, const Models::IntlFlightOtaSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票航班报价查询
       *
       * @description 使用该接口可以进行航班报价搜索。
       * - 使用该接口需要在应用中开通国际机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightOtaSearchRequest
       * @return IntlFlightOtaSearchResponse
       */
      Models::IntlFlightOtaSearchResponse intlFlightOtaSearch(const Models::IntlFlightOtaSearchRequest &request);

      /**
       * @summary 国际机票改签申请
       *
       * @param tmpReq IntlFlightReShopApplyRequest
       * @param headers IntlFlightReShopApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopApplyResponse
       */
      Models::IntlFlightReShopApplyResponse intlFlightReShopApplyWithOptions(const Models::IntlFlightReShopApplyRequest &tmpReq, const Models::IntlFlightReShopApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票改签申请
       *
       * @param request IntlFlightReShopApplyRequest
       * @return IntlFlightReShopApplyResponse
       */
      Models::IntlFlightReShopApplyResponse intlFlightReShopApply(const Models::IntlFlightReShopApplyRequest &request);

      /**
       * @summary 国际机票改签取消
       *
       * @description 使用该接口可以进行国际机票改签取消。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopCancelRequest
       * @param headers IntlFlightReShopCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopCancelResponse
       */
      Models::IntlFlightReShopCancelResponse intlFlightReShopCancelWithOptions(const Models::IntlFlightReShopCancelRequest &request, const Models::IntlFlightReShopCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票改签取消
       *
       * @description 使用该接口可以进行国际机票改签取消。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopCancelRequest
       * @return IntlFlightReShopCancelResponse
       */
      Models::IntlFlightReShopCancelResponse intlFlightReShopCancel(const Models::IntlFlightReShopCancelRequest &request);

      /**
       * @summary 国际机票改签咨询
       *
       * @description 使用该接口可以进行国际机票改签咨询。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopConsultRequest
       * @param headers IntlFlightReShopConsultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopConsultResponse
       */
      Models::IntlFlightReShopConsultResponse intlFlightReShopConsultWithOptions(const Models::IntlFlightReShopConsultRequest &request, const Models::IntlFlightReShopConsultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票改签咨询
       *
       * @description 使用该接口可以进行国际机票改签咨询。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopConsultRequest
       * @return IntlFlightReShopConsultResponse
       */
      Models::IntlFlightReShopConsultResponse intlFlightReShopConsult(const Models::IntlFlightReShopConsultRequest &request);

      /**
       * @summary Creates a rebooking order for an international flight ticket.
       *
       * @param tmpReq IntlFlightReShopCreateRequest
       * @param headers IntlFlightReShopCreateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopCreateResponse
       */
      Models::IntlFlightReShopCreateResponse intlFlightReShopCreateWithOptions(const Models::IntlFlightReShopCreateRequest &tmpReq, const Models::IntlFlightReShopCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a rebooking order for an international flight ticket.
       *
       * @param request IntlFlightReShopCreateRequest
       * @return IntlFlightReShopCreateResponse
       */
      Models::IntlFlightReShopCreateResponse intlFlightReShopCreate(const Models::IntlFlightReShopCreateRequest &request);

      /**
       * @summary 国际机票改签详情
       *
       * @description 使用该接口可以进行国际机票改签详情查询。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopDetailRequest
       * @param headers IntlFlightReShopDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopDetailResponse
       */
      Models::IntlFlightReShopDetailResponse intlFlightReShopDetailWithOptions(const Models::IntlFlightReShopDetailRequest &request, const Models::IntlFlightReShopDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票改签详情
       *
       * @description 使用该接口可以进行国际机票改签详情查询。
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopDetailRequest
       * @return IntlFlightReShopDetailResponse
       */
      Models::IntlFlightReShopDetailResponse intlFlightReShopDetail(const Models::IntlFlightReShopDetailRequest &request);

      /**
       * @summary Queries the list of available flights for rebooking international flight tickets.
       *
       * @param tmpReq IntlFlightReShopListSearchRequest
       * @param headers IntlFlightReShopListSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopListSearchResponse
       */
      Models::IntlFlightReShopListSearchResponse intlFlightReShopListSearchWithOptions(const Models::IntlFlightReShopListSearchRequest &tmpReq, const Models::IntlFlightReShopListSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available flights for rebooking international flight tickets.
       *
       * @param request IntlFlightReShopListSearchRequest
       * @return IntlFlightReShopListSearchResponse
       */
      Models::IntlFlightReShopListSearchResponse intlFlightReShopListSearch(const Models::IntlFlightReShopListSearchRequest &request);

      /**
       * @summary Queries flight rebooking quotes for international air tickets.
       *
       * @param tmpReq IntlFlightReShopOtaSearchRequest
       * @param headers IntlFlightReShopOtaSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopOtaSearchResponse
       */
      Models::IntlFlightReShopOtaSearchResponse intlFlightReShopOtaSearchWithOptions(const Models::IntlFlightReShopOtaSearchRequest &tmpReq, const Models::IntlFlightReShopOtaSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flight rebooking quotes for international air tickets.
       *
       * @param request IntlFlightReShopOtaSearchRequest
       * @return IntlFlightReShopOtaSearchResponse
       */
      Models::IntlFlightReShopOtaSearchResponse intlFlightReShopOtaSearch(const Models::IntlFlightReShopOtaSearchRequest &request);

      /**
       * @summary 国际机票改签支付
       *
       * @description 使用该接口可以进行国际机票改签支付。
       * >Notice: 
       *  国际机票意向单零元改签特殊说明：
       * 1. 如果改签单是待支付状态，即使改签金额是零元也需要调用支付，表示同意该改签方案并进行出票；
       * 2. 若我们的小二已经电联过用户，同意了改签方案，则会直接进入出票流程，不会有待支付状态，这种情况下无需则手动调用支付；
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopPayRequest
       * @param headers IntlFlightReShopPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightReShopPayResponse
       */
      Models::IntlFlightReShopPayResponse intlFlightReShopPayWithOptions(const Models::IntlFlightReShopPayRequest &request, const Models::IntlFlightReShopPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票改签支付
       *
       * @description 使用该接口可以进行国际机票改签支付。
       * >Notice: 
       *  国际机票意向单零元改签特殊说明：
       * 1. 如果改签单是待支付状态，即使改签金额是零元也需要调用支付，表示同意该改签方案并进行出票；
       * 2. 若我们的小二已经电联过用户，同意了改签方案，则会直接进入出票流程，不会有待支付状态，这种情况下无需则手动调用支付；
       * - 使用该接口需要在应用中开通国际机票改签权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightReShopPayRequest
       * @return IntlFlightReShopPayResponse
       */
      Models::IntlFlightReShopPayResponse intlFlightReShopPay(const Models::IntlFlightReShopPayRequest &request);

      /**
       * @summary 国际机票退票申请
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param tmpReq IntlFlightRefundApplyRequest
       * @param headers IntlFlightRefundApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightRefundApplyResponse
       */
      Models::IntlFlightRefundApplyResponse intlFlightRefundApplyWithOptions(const Models::IntlFlightRefundApplyRequest &tmpReq, const Models::IntlFlightRefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票退票申请
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightRefundApplyRequest
       * @return IntlFlightRefundApplyResponse
       */
      Models::IntlFlightRefundApplyResponse intlFlightRefundApply(const Models::IntlFlightRefundApplyRequest &request);

      /**
       * @summary 国际机票退票咨询
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightRefundConsultRequest
       * @param headers IntlFlightRefundConsultHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightRefundConsultResponse
       */
      Models::IntlFlightRefundConsultResponse intlFlightRefundConsultWithOptions(const Models::IntlFlightRefundConsultRequest &request, const Models::IntlFlightRefundConsultHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票退票咨询
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightRefundConsultRequest
       * @return IntlFlightRefundConsultResponse
       */
      Models::IntlFlightRefundConsultResponse intlFlightRefundConsult(const Models::IntlFlightRefundConsultRequest &request);

      /**
       * @summary 国际机票退票详情
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightRefundDetailRequest
       * @param headers IntlFlightRefundDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightRefundDetailResponse
       */
      Models::IntlFlightRefundDetailResponse intlFlightRefundDetailWithOptions(const Models::IntlFlightRefundDetailRequest &request, const Models::IntlFlightRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票退票详情
       *
       * @description 使用该接口可以进行国际机票退票咨询。
       * - 使用该接口需要在应用中开通国际机票退票权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.697d281fR0YqNt&docId=3769985)。
       *
       * @param request IntlFlightRefundDetailRequest
       * @return IntlFlightRefundDetailResponse
       */
      Models::IntlFlightRefundDetailResponse intlFlightRefundDetail(const Models::IntlFlightRefundDetailRequest &request);

      /**
       * @summary 国际机票航班可用证件查询
       *
       * @description 使用该接口可以“查询国际机票航班可用证件”。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightSegmentAvailableCertRequest
       * @param headers IntlFlightSegmentAvailableCertHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntlFlightSegmentAvailableCertResponse
       */
      Models::IntlFlightSegmentAvailableCertResponse intlFlightSegmentAvailableCertWithOptions(const string &otaItemId, const Models::IntlFlightSegmentAvailableCertRequest &request, const Models::IntlFlightSegmentAvailableCertHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际机票航班可用证件查询
       *
       * @description 使用该接口可以“查询国际机票航班可用证件”。
       * 1. 使用该接口需要在应用中开通“国际机票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request IntlFlightSegmentAvailableCertRequest
       * @return IntlFlightSegmentAvailableCertResponse
       */
      Models::IntlFlightSegmentAvailableCertResponse intlFlightSegmentAvailableCert(const string &otaItemId, const Models::IntlFlightSegmentAvailableCertRequest &request);

      /**
       * @summary 新增发票配置
       *
       * @description 使用该接口可以新增指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceAddRequest
       * @param headers InvoiceAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceAddResponse
       */
      Models::InvoiceAddResponse invoiceAddWithOptions(const Models::InvoiceAddRequest &request, const Models::InvoiceAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增发票配置
       *
       * @description 使用该接口可以新增指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceAddRequest
       * @return InvoiceAddResponse
       */
      Models::InvoiceAddResponse invoiceAdd(const Models::InvoiceAddRequest &request);

      /**
       * @summary 删除发票抬头
       *
       * @description 使用该接口可以删除指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceDeleteRequest
       * @param headers InvoiceDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceDeleteResponse
       */
      Models::InvoiceDeleteResponse invoiceDeleteWithOptions(const Models::InvoiceDeleteRequest &request, const Models::InvoiceDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除发票抬头
       *
       * @description 使用该接口可以删除指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceDeleteRequest
       * @return InvoiceDeleteResponse
       */
      Models::InvoiceDeleteResponse invoiceDelete(const Models::InvoiceDeleteRequest &request);

      /**
       * @summary 修改发票配置
       *
       * @description 使用该接口可以修改指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceModifyRequest
       * @param headers InvoiceModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceModifyResponse
       */
      Models::InvoiceModifyResponse invoiceModifyWithOptions(const Models::InvoiceModifyRequest &request, const Models::InvoiceModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改发票配置
       *
       * @description 使用该接口可以修改指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceModifyRequest
       * @return InvoiceModifyResponse
       */
      Models::InvoiceModifyResponse invoiceModify(const Models::InvoiceModifyRequest &request);

      /**
       * @summary 新增发票抬头可用员工
       *
       * @description 使用该接口可以增加发票抬头可用员工
       * - 使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq InvoiceRuleAddRequest
       * @param headers InvoiceRuleAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceRuleAddResponse
       */
      Models::InvoiceRuleAddResponse invoiceRuleAddWithOptions(const Models::InvoiceRuleAddRequest &tmpReq, const Models::InvoiceRuleAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增发票抬头可用员工
       *
       * @description 使用该接口可以增加发票抬头可用员工
       * - 使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request InvoiceRuleAddRequest
       * @return InvoiceRuleAddResponse
       */
      Models::InvoiceRuleAddResponse invoiceRuleAdd(const Models::InvoiceRuleAddRequest &request);

      /**
       * @summary 删除发票抬头可用员工
       *
       * @description 使用该接口可以删除发票抬头可用员工
       * - 使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq InvoiceRuleDeleteRequest
       * @param headers InvoiceRuleDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceRuleDeleteResponse
       */
      Models::InvoiceRuleDeleteResponse invoiceRuleDeleteWithOptions(const Models::InvoiceRuleDeleteRequest &tmpReq, const Models::InvoiceRuleDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除发票抬头可用员工
       *
       * @description 使用该接口可以删除发票抬头可用员工
       * - 使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request InvoiceRuleDeleteRequest
       * @return InvoiceRuleDeleteResponse
       */
      Models::InvoiceRuleDeleteResponse invoiceRuleDelete(const Models::InvoiceRuleDeleteRequest &request);

      /**
       * @summary 保存发票规则
       *
       * @description 该接口已废弃，请使用[新增发票抬头可用范围](/#/document/server/invoiceruleadd-new-invoice-header-available-employee?handbookId=development-support)和[删除发票抬头可用范围](/#/document/server/invoiceruledelete-delete-invoice-header-available-employees?handbookId=development-support)
       * 使用该接口可以配置指定企业的发票抬头可用员工。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param tmpReq InvoiceRuleSaveRequest
       * @param headers InvoiceRuleSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceRuleSaveResponse
       */
      Models::InvoiceRuleSaveResponse invoiceRuleSaveWithOptions(const Models::InvoiceRuleSaveRequest &tmpReq, const Models::InvoiceRuleSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存发票规则
       *
       * @description 该接口已废弃，请使用[新增发票抬头可用范围](/#/document/server/invoiceruleadd-new-invoice-header-available-employee?handbookId=development-support)和[删除发票抬头可用范围](/#/document/server/invoiceruledelete-delete-invoice-header-available-employees?handbookId=development-support)
       * 使用该接口可以配置指定企业的发票抬头可用员工。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceRuleSaveRequest
       * @return InvoiceRuleSaveResponse
       */
      Models::InvoiceRuleSaveResponse invoiceRuleSave(const Models::InvoiceRuleSaveRequest &request);

      /**
       * @summary 搜索用户可用发票抬头
       *
       * @description 使用该接口可以查询指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceSearchRequest
       * @param headers InvoiceSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvoiceSearchResponse
       */
      Models::InvoiceSearchResponse invoiceSearchWithOptions(const Models::InvoiceSearchRequest &request, const Models::InvoiceSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索用户可用发票抬头
       *
       * @description 使用该接口可以查询指定企业的发票抬头。
       * 1.  使用该接口需要在应用中开通费用归属配置权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request InvoiceSearchRequest
       * @return InvoiceSearchResponse
       */
      Models::InvoiceSearchResponse invoiceSearch(const Models::InvoiceSearchRequest &request);

      /**
       * @summary 员工特殊角色修改
       *
       * @description - 阿里商旅支持的特殊权限说明，请参见：[员工角色管理](https://www.yuque.com/alibtrip/ql4yyy/ywfpki)。
       * - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq IsvRuleSaveRequest
       * @param headers IsvRuleSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsvRuleSaveResponse
       */
      Models::IsvRuleSaveResponse isvRuleSaveWithOptions(const Models::IsvRuleSaveRequest &tmpReq, const Models::IsvRuleSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 员工特殊角色修改
       *
       * @description - 阿里商旅支持的特殊权限说明，请参见：[员工角色管理](https://www.yuque.com/alibtrip/ql4yyy/ywfpki)。
       * - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request IsvRuleSaveRequest
       * @return IsvRuleSaveResponse
       */
      Models::IsvRuleSaveResponse isvRuleSave(const Models::IsvRuleSaveRequest &request);

      /**
       * @summary 用户同步
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq IsvUserSaveRequest
       * @param headers IsvUserSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsvUserSaveResponse
       */
      Models::IsvUserSaveResponse isvUserSaveWithOptions(const Models::IsvUserSaveRequest &tmpReq, const Models::IsvUserSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户同步
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request IsvUserSaveRequest
       * @return IsvUserSaveResponse
       */
      Models::IsvUserSaveResponse isvUserSave(const Models::IsvUserSaveRequest &request);

      /**
       * @summary 新增用餐申请单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq MealApplyAddRequest
       * @param headers MealApplyAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealApplyAddResponse
       */
      Models::MealApplyAddResponse mealApplyAddWithOptions(const Models::MealApplyAddRequest &tmpReq, const Models::MealApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增用餐申请单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyAddRequest
       * @return MealApplyAddResponse
       */
      Models::MealApplyAddResponse mealApplyAdd(const Models::MealApplyAddRequest &request);

      /**
       * @summary 更新用餐申请单状态
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyApproveRequest
       * @param headers MealApplyApproveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealApplyApproveResponse
       */
      Models::MealApplyApproveResponse mealApplyApproveWithOptions(const Models::MealApplyApproveRequest &request, const Models::MealApplyApproveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新用餐申请单状态
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyApproveRequest
       * @return MealApplyApproveResponse
       */
      Models::MealApplyApproveResponse mealApplyApprove(const Models::MealApplyApproveRequest &request);

      /**
       * @summary 修改用餐审批单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq MealApplyModifyRequest
       * @param headers MealApplyModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealApplyModifyResponse
       */
      Models::MealApplyModifyResponse mealApplyModifyWithOptions(const Models::MealApplyModifyRequest &tmpReq, const Models::MealApplyModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用餐审批单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyModifyRequest
       * @return MealApplyModifyResponse
       */
      Models::MealApplyModifyResponse mealApplyModify(const Models::MealApplyModifyRequest &request);

      /**
       * @summary 查询用餐申请单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyQueryRequest
       * @param headers MealApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealApplyQueryResponse
       */
      Models::MealApplyQueryResponse mealApplyQueryWithOptions(const Models::MealApplyQueryRequest &request, const Models::MealApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用餐申请单
       *
       * @description - 调用本接口前，请完成**用餐审批单**相关应用权限的申请。若无，请参见：[接口应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                      
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request MealApplyQueryRequest
       * @return MealApplyQueryResponse
       */
      Models::MealApplyQueryResponse mealApplyQuery(const Models::MealApplyQueryRequest &request);

      /**
       * @summary 查询因公用餐记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request MealBillSettlementQueryRequest
       * @param headers MealBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealBillSettlementQueryResponse
       */
      Models::MealBillSettlementQueryResponse mealBillSettlementQueryWithOptions(const Models::MealBillSettlementQueryRequest &request, const Models::MealBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询因公用餐记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request MealBillSettlementQueryRequest
       * @return MealBillSettlementQueryResponse
       */
      Models::MealBillSettlementQueryResponse mealBillSettlementQuery(const Models::MealBillSettlementQueryRequest &request);

      /**
       * @summary 获取用餐订单详情
       *
       * @description 使用该接口可以查询用餐订单详情
       * 1. 使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request MealOrderDetailQueryRequest
       * @param headers MealOrderDetailQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealOrderDetailQueryResponse
       */
      Models::MealOrderDetailQueryResponse mealOrderDetailQueryWithOptions(const string &orderId, const Models::MealOrderDetailQueryRequest &request, const Models::MealOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用餐订单详情
       *
       * @description 使用该接口可以查询用餐订单详情
       * 1. 使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request MealOrderDetailQueryRequest
       * @return MealOrderDetailQueryResponse
       */
      Models::MealOrderDetailQueryResponse mealOrderDetailQuery(const string &orderId, const Models::MealOrderDetailQueryRequest &request);

      /**
       * @summary 获取用餐订单列表
       *
       * @description 使用该接口可以查询订单列表
       * - 使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request MealOrderListQueryRequest
       * @param headers MealOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MealOrderListQueryResponse
       */
      Models::MealOrderListQueryResponse mealOrderListQueryWithOptions(const Models::MealOrderListQueryRequest &request, const Models::MealOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用餐订单列表
       *
       * @description 使用该接口可以查询订单列表
       * - 使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request MealOrderListQueryRequest
       * @return MealOrderListQueryResponse
       */
      Models::MealOrderListQueryResponse mealOrderListQuery(const Models::MealOrderListQueryRequest &request);

      /**
       * @summary 月账单确认
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 通常为 [BtripBillInfoAdjust](https://openapi.alibtrip.com/doc/toDocDetail?docId=4060203) 字段调整接口的后续步骤。
       * - **调用本接口后，无法再对该账单进行修改。**
       *
       * @param request MonthBillConfirmRequest
       * @param headers MonthBillConfirmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonthBillConfirmResponse
       */
      Models::MonthBillConfirmResponse monthBillConfirmWithOptions(const Models::MonthBillConfirmRequest &request, const Models::MonthBillConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 月账单确认
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 通常为 [BtripBillInfoAdjust](https://openapi.alibtrip.com/doc/toDocDetail?docId=4060203) 字段调整接口的后续步骤。
       * - **调用本接口后，无法再对该账单进行修改。**
       *
       * @param request MonthBillConfirmRequest
       * @return MonthBillConfirmResponse
       */
      Models::MonthBillConfirmResponse monthBillConfirm(const Models::MonthBillConfirmRequest &request);

      /**
       * @summary 查询企业月账单
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request MonthBillGetRequest
       * @param headers MonthBillGetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonthBillGetResponse
       */
      Models::MonthBillGetResponse monthBillGetWithOptions(const Models::MonthBillGetRequest &request, const Models::MonthBillGetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业月账单
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request MonthBillGetRequest
       * @return MonthBillGetResponse
       */
      Models::MonthBillGetResponse monthBillGet(const Models::MonthBillGetRequest &request);

      /**
       * @summary 查询拆分版企业月账单
       *
       * @description - 调用本接口前，请完成商旅账单数据相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.5f19281fYqtdBn&docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将app_key作为必填参数拼接在请求地址中。app_key的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.5f19281fYQj6Uy&docId=4667763)。
       * - 请联系您的客户经理进行接口权限的开通。
       *
       * @param tmpReq MonthBillSplitGetRequest
       * @param headers MonthBillSplitGetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonthBillSplitGetResponse
       */
      Models::MonthBillSplitGetResponse monthBillSplitGetWithOptions(const Models::MonthBillSplitGetRequest &tmpReq, const Models::MonthBillSplitGetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询拆分版企业月账单
       *
       * @description - 调用本接口前，请完成商旅账单数据相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.5f19281fYqtdBn&docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将app_key作为必填参数拼接在请求地址中。app_key的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?spm=openapi-amp.newDocPublishment.0.0.5f19281fYQj6Uy&docId=4667763)。
       * - 请联系您的客户经理进行接口权限的开通。
       *
       * @param request MonthBillSplitGetRequest
       * @return MonthBillSplitGetResponse
       */
      Models::MonthBillSplitGetResponse monthBillSplitGet(const Models::MonthBillSplitGetRequest &request);

      /**
       * @summary 查询企业预出账月账单
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request MonthPreBillGetRequest
       * @param headers MonthPreBillGetHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonthPreBillGetResponse
       */
      Models::MonthPreBillGetResponse monthPreBillGetWithOptions(const Models::MonthPreBillGetRequest &request, const Models::MonthPreBillGetHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业预出账月账单
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request MonthPreBillGetRequest
       * @return MonthPreBillGetResponse
       */
      Models::MonthPreBillGetResponse monthPreBillGet(const Models::MonthPreBillGetRequest &request);

      /**
       * @summary 查询订单退款明细
       *
       * @description 调用方：服务商
       * 实现方：中洲平台
       *
       * @param request OrderRefundDetailQueryRequest
       * @param headers OrderRefundDetailQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderRefundDetailQueryResponse
       */
      Models::OrderRefundDetailQueryResponse orderRefundDetailQueryWithOptions(const Models::OrderRefundDetailQueryRequest &request, const Models::OrderRefundDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订单退款明细
       *
       * @description 调用方：服务商
       * 实现方：中洲平台
       *
       * @param request OrderRefundDetailQueryRequest
       * @return OrderRefundDetailQueryResponse
       */
      Models::OrderRefundDetailQueryResponse orderRefundDetailQuery(const Models::OrderRefundDetailQueryRequest &request);

      /**
       * @summary 添加项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectAddRequest
       * @param headers ProjectAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProjectAddResponse
       */
      Models::ProjectAddResponse projectAddWithOptions(const Models::ProjectAddRequest &request, const Models::ProjectAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectAddRequest
       * @return ProjectAddResponse
       */
      Models::ProjectAddResponse projectAdd(const Models::ProjectAddRequest &request);

      /**
       * @summary 删除项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectDeleteRequest
       * @param headers ProjectDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProjectDeleteResponse
       */
      Models::ProjectDeleteResponse projectDeleteWithOptions(const Models::ProjectDeleteRequest &request, const Models::ProjectDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectDeleteRequest
       * @return ProjectDeleteResponse
       */
      Models::ProjectDeleteResponse projectDelete(const Models::ProjectDeleteRequest &request);

      /**
       * @summary 变更项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectModifyRequest
       * @param headers ProjectModifyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProjectModifyResponse
       */
      Models::ProjectModifyResponse projectModifyWithOptions(const Models::ProjectModifyRequest &request, const Models::ProjectModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更项目
       *
       * @description - 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request ProjectModifyRequest
       * @return ProjectModifyResponse
       */
      Models::ProjectModifyResponse projectModify(const Models::ProjectModifyRequest &request);

      /**
       * @summary 查询赔付信息
       *
       * @description 使用该接口可以获取查询赔付信息列表。
       * 1.  使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request QueryCompenInfosForOpRequest
       * @param headers QueryCompenInfosForOpHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCompenInfosForOpResponse
       */
      Models::QueryCompenInfosForOpResponse queryCompenInfosForOpWithOptions(const Models::QueryCompenInfosForOpRequest &request, const Models::QueryCompenInfosForOpHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询赔付信息
       *
       * @description 使用该接口可以获取查询赔付信息列表。
       * 1.  使用该接口需要在应用中开通“订单&客票”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request QueryCompenInfosForOpRequest
       * @return QueryCompenInfosForOpResponse
       */
      Models::QueryCompenInfosForOpResponse queryCompenInfosForOp(const Models::QueryCompenInfosForOpRequest &request);

      /**
       * @summary 查询企业信息详情
       *
       * @description - 调用本接口前，请完成企业账户相关应用权限的申请。若无，请参考：[获取应用权限](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)。完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将 app_key 作为必填参数拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://open.alibtrip.com/#/document/server/application-of-basic-information?handbookId=development-support)。
       * - 入参中 target_corp_id 以及 target_third_corp_id 在使用时，仅需二选一传入；都传入时将以 target_corp_id 为准；
       * - 若传入了 target_third_corp_id，则 account_id 必填。
       *
       * @param request QueryCorpDetailInfoRequest
       * @param headers QueryCorpDetailInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCorpDetailInfoResponse
       */
      Models::QueryCorpDetailInfoResponse queryCorpDetailInfoWithOptions(const Models::QueryCorpDetailInfoRequest &request, const Models::QueryCorpDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业信息详情
       *
       * @description - 调用本接口前，请完成企业账户相关应用权限的申请。若无，请参考：[获取应用权限](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)。完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将 app_key 作为必填参数拼接在请求地址中。app_key 的获取方式请参见：[应用基础信息-应用凭证](https://open.alibtrip.com/#/document/server/application-of-basic-information?handbookId=development-support)。
       * - 入参中 target_corp_id 以及 target_third_corp_id 在使用时，仅需二选一传入；都传入时将以 target_corp_id 为准；
       * - 若传入了 target_third_corp_id，则 account_id 必填。
       *
       * @param request QueryCorpDetailInfoRequest
       * @return QueryCorpDetailInfoResponse
       */
      Models::QueryCorpDetailInfoResponse queryCorpDetailInfo(const Models::QueryCorpDetailInfoRequest &request);

      /**
       * @summary 获取单个员工信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request QueryEmployeeDetailRequest
       * @param headers QueryEmployeeDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEmployeeDetailResponse
       */
      Models::QueryEmployeeDetailResponse queryEmployeeDetailWithOptions(const Models::QueryEmployeeDetailRequest &request, const Models::QueryEmployeeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取单个员工信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request QueryEmployeeDetailRequest
       * @return QueryEmployeeDetailResponse
       */
      Models::QueryEmployeeDetailResponse queryEmployeeDetail(const Models::QueryEmployeeDetailRequest &request);

      /**
       * @summary 查询子企业列表
       *
       * @description - 在调用本接口之前，请先完成**主子账户**功能的开启。若无，请参考：[账户管理](https://www.yuque.com/alibtrip/ql4yyy/fp8el1)完成相关操作。
       * - 在调用本接口前，请先完成**组织人员同步**相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                   
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request QueryGroupCorpListRequest
       * @param headers QueryGroupCorpListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGroupCorpListResponse
       */
      Models::QueryGroupCorpListResponse queryGroupCorpListWithOptions(const Models::QueryGroupCorpListRequest &request, const Models::QueryGroupCorpListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询子企业列表
       *
       * @description - 在调用本接口之前，请先完成**主子账户**功能的开启。若无，请参考：[账户管理](https://www.yuque.com/alibtrip/ql4yyy/fp8el1)完成相关操作。
       * - 在调用本接口前，请先完成**组织人员同步**相关应用权限申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                   
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request QueryGroupCorpListRequest
       * @return QueryGroupCorpListResponse
       */
      Models::QueryGroupCorpListResponse queryGroupCorpList(const Models::QueryGroupCorpListRequest &request);

      /**
       * @summary 报销单查询
       *
       * @description 使用该接口可以“查询报销审批单信息”。
       * 1. 使用该接口需要在应用中开通“查询报销审批单详情”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request QueryReimbursementOrderRequest
       * @param headers QueryReimbursementOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryReimbursementOrderResponse
       */
      Models::QueryReimbursementOrderResponse queryReimbursementOrderWithOptions(const Models::QueryReimbursementOrderRequest &request, const Models::QueryReimbursementOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 报销单查询
       *
       * @description 使用该接口可以“查询报销审批单信息”。
       * 1. 使用该接口需要在应用中开通“查询报销审批单详情”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request QueryReimbursementOrderRequest
       * @return QueryReimbursementOrderResponse
       */
      Models::QueryReimbursementOrderResponse queryReimbursementOrder(const Models::QueryReimbursementOrderRequest &request);

      /**
       * @summary 删除项目负责人
       *
       * @description * 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                     
       * * 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param tmpReq RemoveProjectManagerRequest
       * @param headers RemoveProjectManagerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveProjectManagerResponse
       */
      Models::RemoveProjectManagerResponse removeProjectManagerWithOptions(const Models::RemoveProjectManagerRequest &tmpReq, const Models::RemoveProjectManagerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除项目负责人
       *
       * @description * 调用本接口前，请完成**费用归属**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                     
       * * 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request RemoveProjectManagerRequest
       * @return RemoveProjectManagerResponse
       */
      Models::RemoveProjectManagerResponse removeProjectManager(const Models::RemoveProjectManagerRequest &request);

      /**
       * @summary 单个人员同步
       *
       * @description 使用该接口可以往商旅对应的部门中进行单条人员信息的同步。
       * 使用该接口需要在应用中开通组织人员同步权限，具体的数据权限申请流程请查看接口权限申请流程
       * 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证
       * 如有涉及到收费的 API，请在第一句加上粗体的“请确保在使用该接口前，已充分了解XXX产品的收费方式和价格。”其中价格是个超链，链接为：https://www.aliyun.com/price/product#/ecs/detail
       *
       * @param tmpReq SyncSingleUserRequest
       * @param headers SyncSingleUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncSingleUserResponse
       */
      Models::SyncSingleUserResponse syncSingleUserWithOptions(const Models::SyncSingleUserRequest &tmpReq, const Models::SyncSingleUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单个人员同步
       *
       * @description 使用该接口可以往商旅对应的部门中进行单条人员信息的同步。
       * 使用该接口需要在应用中开通组织人员同步权限，具体的数据权限申请流程请查看接口权限申请流程
       * 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看企业访问凭证
       * 如有涉及到收费的 API，请在第一句加上粗体的“请确保在使用该接口前，已充分了解XXX产品的收费方式和价格。”其中价格是个超链，链接为：https://www.aliyun.com/price/product#/ecs/detail
       *
       * @param request SyncSingleUserRequest
       * @return SyncSingleUserResponse
       */
      Models::SyncSingleUserResponse syncSingleUser(const Models::SyncSingleUserRequest &request);

      /**
       * @summary 同步三方用户映射关系
       *
       * @description - **适用场景**：当企业人员数据是由 A 系统推送至阿里商旅，同时又希望在 B 系统中实现阿里商旅单点跳转等人员信息关联映射需求时，可通过本接口进行实现人员数据的同步映射。
       * - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request SyncThirdUserMappingRequest
       * @param headers SyncThirdUserMappingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncThirdUserMappingResponse
       */
      Models::SyncThirdUserMappingResponse syncThirdUserMappingWithOptions(const Models::SyncThirdUserMappingRequest &request, const Models::SyncThirdUserMappingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 同步三方用户映射关系
       *
       * @description - **适用场景**：当企业人员数据是由 A 系统推送至阿里商旅，同时又希望在 B 系统中实现阿里商旅单点跳转等人员信息关联映射需求时，可通过本接口进行实现人员数据的同步映射。
       * - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request SyncThirdUserMappingRequest
       * @return SyncThirdUserMappingResponse
       */
      Models::SyncThirdUserMappingResponse syncThirdUserMapping(const Models::SyncThirdUserMappingRequest &request);

      /**
       * @summary 查询淘宝账号信息
       *
       * @description 使用该接口可以“查询淘宝账号信息”。
       * 1. 使用该接口需要在应用中开通“用户账户”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param headers TBAccountInfoQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TBAccountInfoQueryResponse
       */
      Models::TBAccountInfoQueryResponse tBAccountInfoQueryWithOptions(const string &userId, const Models::TBAccountInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询淘宝账号信息
       *
       * @description 使用该接口可以“查询淘宝账号信息”。
       * 1. 使用该接口需要在应用中开通“用户账户”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @return TBAccountInfoQueryResponse
       */
      Models::TBAccountInfoQueryResponse tBAccountInfoQuery(const string &userId);

      /**
       * @summary 解绑淘宝账号
       *
       * @description 使用该接口可以“淘宝账号解绑”。
       * 1. 使用该接口需要在应用中开通“用户账户”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param headers TBAccountUnbindHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TBAccountUnbindResponse
       */
      Models::TBAccountUnbindResponse tBAccountUnbindWithOptions(const string &userId, const Models::TBAccountUnbindHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑淘宝账号
       *
       * @description 使用该接口可以“淘宝账号解绑”。
       * 1. 使用该接口需要在应用中开通“用户账户”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @return TBAccountUnbindResponse
       */
      Models::TBAccountUnbindResponse tBAccountUnbind(const string &userId);

      /**
       * @summary 机票改签申请
       *
       * @description 使用该接口可以机票改签申请。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq TicketChangingApplyRequest
       * @param headers TicketChangingApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingApplyResponse
       */
      Models::TicketChangingApplyResponse ticketChangingApplyWithOptions(const Models::TicketChangingApplyRequest &tmpReq, const Models::TicketChangingApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签申请
       *
       * @description 使用该接口可以机票改签申请。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingApplyRequest
       * @return TicketChangingApplyResponse
       */
      Models::TicketChangingApplyResponse ticketChangingApply(const Models::TicketChangingApplyRequest &request);

      /**
       * @summary 机票改签取消
       *
       * @description 使用该接口可以机票改签取消。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingCancelRequest
       * @param headers TicketChangingCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingCancelResponse
       */
      Models::TicketChangingCancelResponse ticketChangingCancelWithOptions(const Models::TicketChangingCancelRequest &request, const Models::TicketChangingCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签取消
       *
       * @description 使用该接口可以机票改签取消。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingCancelRequest
       * @return TicketChangingCancelResponse
       */
      Models::TicketChangingCancelResponse ticketChangingCancel(const Models::TicketChangingCancelRequest &request);

      /**
       * @summary 机票改签详情
       *
       * @description 使用该接口可以查询商旅机票改签单详情
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingDetailRequest
       * @param headers TicketChangingDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingDetailResponse
       */
      Models::TicketChangingDetailResponse ticketChangingDetailWithOptions(const Models::TicketChangingDetailRequest &request, const Models::TicketChangingDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签详情
       *
       * @description 使用该接口可以查询商旅机票改签单详情
       * 1. 使用该接口需要在应用中开通“接口名称”权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingDetailRequest
       * @return TicketChangingDetailResponse
       */
      Models::TicketChangingDetailResponse ticketChangingDetail(const Models::TicketChangingDetailRequest &request);

      /**
       * @summary 机票改签询价
       *
       * @description 使用该接口可以机票改签询价。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingEnquiryRequest
       * @param headers TicketChangingEnquiryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingEnquiryResponse
       */
      Models::TicketChangingEnquiryResponse ticketChangingEnquiryWithOptions(const Models::TicketChangingEnquiryRequest &request, const Models::TicketChangingEnquiryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签询价
       *
       * @description 使用该接口可以机票改签询价。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingEnquiryRequest
       * @return TicketChangingEnquiryResponse
       */
      Models::TicketChangingEnquiryResponse ticketChangingEnquiry(const Models::TicketChangingEnquiryRequest &request);

      /**
       * @summary 机票改签可改签航班列表
       *
       * @description 使用该接口可以机票改签可改签航班列表。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq TicketChangingFlightListRequest
       * @param headers TicketChangingFlightListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingFlightListResponse
       */
      Models::TicketChangingFlightListResponse ticketChangingFlightListWithOptions(const Models::TicketChangingFlightListRequest &tmpReq, const Models::TicketChangingFlightListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签可改签航班列表
       *
       * @description 使用该接口可以机票改签可改签航班列表。
       * - 使用该接口需要在应用中开通机票航班权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingFlightListRequest
       * @return TicketChangingFlightListResponse
       */
      Models::TicketChangingFlightListResponse ticketChangingFlightList(const Models::TicketChangingFlightListRequest &request);

      /**
       * @summary 机票改签航班支付
       *
       * @description 使用该接口可以机票改签航班支付。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param tmpReq TicketChangingPayRequest
       * @param headers TicketChangingPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketChangingPayResponse
       */
      Models::TicketChangingPayResponse ticketChangingPayWithOptions(const Models::TicketChangingPayRequest &tmpReq, const Models::TicketChangingPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 机票改签航班支付
       *
       * @description 使用该接口可以机票改签航班支付。
       * - 使用该接口需要在应用中开通机票服务权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看企业访问凭证[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TicketChangingPayRequest
       * @return TicketChangingPayResponse
       */
      Models::TicketChangingPayResponse ticketChangingPay(const Models::TicketChangingPayRequest &request);

      /**
       * @summary 火车票改签申请
       *
       * @description 使用该接口可以查询火车票改签申请
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainApplyChangeRequest
       * @param headers TrainApplyChangeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainApplyChangeResponse
       */
      Models::TrainApplyChangeResponse trainApplyChangeWithOptions(const Models::TrainApplyChangeRequest &tmpReq, const Models::TrainApplyChangeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票改签申请
       *
       * @description 使用该接口可以查询火车票改签申请
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainApplyChangeRequest
       * @return TrainApplyChangeResponse
       */
      Models::TrainApplyChangeResponse trainApplyChange(const Models::TrainApplyChangeRequest &request);

      /**
       * @summary 火车票退票申请
       *
       * @description 使用该接口可以查询火车票申请退票
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainApplyRefundRequest
       * @param headers TrainApplyRefundHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainApplyRefundResponse
       */
      Models::TrainApplyRefundResponse trainApplyRefundWithOptions(const Models::TrainApplyRefundRequest &tmpReq, const Models::TrainApplyRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票退票申请
       *
       * @description 使用该接口可以查询火车票申请退票
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainApplyRefundRequest
       * @return TrainApplyRefundResponse
       */
      Models::TrainApplyRefundResponse trainApplyRefund(const Models::TrainApplyRefundRequest &request);

      /**
       * @summary 查询火车票记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request TrainBillSettlementQueryRequest
       * @param headers TrainBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainBillSettlementQueryResponse
       */
      Models::TrainBillSettlementQueryResponse trainBillSettlementQueryWithOptions(const Models::TrainBillSettlementQueryRequest &request, const Models::TrainBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车票记账数据
       *
       * @description - 调用本接口前，请完成**商旅账单数据**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。
       * - 通过 HTTP 方式调用本接口时，需要将`app_key`作为必填参数拼接在请求地址中。`app_key`的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 查询时，记账数据起止时间的间隔规则为：1 小时 ≤记账截止时间 - 记账起始时间 ≤ 24 小时。
       * - 为保证数据准确性，阿里商旅记账数据的更新时机为当前时间 + 1 小时。
       *
       * @param request TrainBillSettlementQueryRequest
       * @return TrainBillSettlementQueryResponse
       */
      Models::TrainBillSettlementQueryResponse trainBillSettlementQuery(const Models::TrainBillSettlementQueryRequest &request);

      /**
       * @summary 查询火车超标审批详情
       *
       * @description 使用该接口可以获取指定企业的火车超标审批详情。
       * - 使用该接口需要在应用中开通超标审批数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainExceedApplyQueryRequest
       * @param headers TrainExceedApplyQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainExceedApplyQueryResponse
       */
      Models::TrainExceedApplyQueryResponse trainExceedApplyQueryWithOptions(const Models::TrainExceedApplyQueryRequest &request, const Models::TrainExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车超标审批详情
       *
       * @description 使用该接口可以获取指定企业的火车超标审批详情。
       * - 使用该接口需要在应用中开通超标审批数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainExceedApplyQueryRequest
       * @return TrainExceedApplyQueryResponse
       */
      Models::TrainExceedApplyQueryResponse trainExceedApplyQuery(const Models::TrainExceedApplyQueryRequest &request);

      /**
       * @summary 火车票改签费用预估
       *
       * @description 使用该接口可以查询火车票改签费用预估
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainFeeCalculateChangeRequest
       * @param headers TrainFeeCalculateChangeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainFeeCalculateChangeResponse
       */
      Models::TrainFeeCalculateChangeResponse trainFeeCalculateChangeWithOptions(const Models::TrainFeeCalculateChangeRequest &tmpReq, const Models::TrainFeeCalculateChangeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票改签费用预估
       *
       * @description 使用该接口可以查询火车票改签费用预估
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainFeeCalculateChangeRequest
       * @return TrainFeeCalculateChangeResponse
       */
      Models::TrainFeeCalculateChangeResponse trainFeeCalculateChange(const Models::TrainFeeCalculateChangeRequest &request);

      /**
       * @summary 火车票退票费用预估
       *
       * @description 使用该接口可以查询火车票退票费用预估
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainFeeCalculateRefundRequest
       * @param headers TrainFeeCalculateRefundHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainFeeCalculateRefundResponse
       */
      Models::TrainFeeCalculateRefundResponse trainFeeCalculateRefundWithOptions(const Models::TrainFeeCalculateRefundRequest &tmpReq, const Models::TrainFeeCalculateRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票退票费用预估
       *
       * @description 使用该接口可以查询火车票退票费用预估
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainFeeCalculateRefundRequest
       * @return TrainFeeCalculateRefundResponse
       */
      Models::TrainFeeCalculateRefundResponse trainFeeCalculateRefund(const Models::TrainFeeCalculateRefundRequest &request);

      /**
       * @summary 火车票车次详情查询
       *
       * @description 使用该接口可以查询车次详情
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainNoInfoSearchRequest
       * @param headers TrainNoInfoSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainNoInfoSearchResponse
       */
      Models::TrainNoInfoSearchResponse trainNoInfoSearchWithOptions(const Models::TrainNoInfoSearchRequest &request, const Models::TrainNoInfoSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票车次详情查询
       *
       * @description 使用该接口可以查询车次详情
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainNoInfoSearchRequest
       * @return TrainNoInfoSearchResponse
       */
      Models::TrainNoInfoSearchResponse trainNoInfoSearch(const Models::TrainNoInfoSearchRequest &request);

      /**
       * @summary 火车票车次列表查询
       *
       * @description 使用该接口可以查询车次列表
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainNoListSearchRequest
       * @param headers TrainNoListSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainNoListSearchResponse
       */
      Models::TrainNoListSearchResponse trainNoListSearchWithOptions(const Models::TrainNoListSearchRequest &tmpReq, const Models::TrainNoListSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票车次列表查询
       *
       * @description 使用该接口可以查询车次列表
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainNoListSearchRequest
       * @return TrainNoListSearchResponse
       */
      Models::TrainNoListSearchResponse trainNoListSearch(const Models::TrainNoListSearchRequest &request);

      /**
       * @summary 火车票订单取消
       *
       * @description - 使用该接口需要在应用中开通“阿里商旅分销-火车票服务”接口权限，权限申请流程可参见：[获取应用权限](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息`x-acs-btrip-corp-token`，企业调用凭证数据获取方式，请参见：[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)。
       *
       * @param request TrainOrderCancelRequest
       * @param headers TrainOrderCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderCancelResponse
       */
      Models::TrainOrderCancelResponse trainOrderCancelWithOptions(const Models::TrainOrderCancelRequest &request, const Models::TrainOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票订单取消
       *
       * @description - 使用该接口需要在应用中开通“阿里商旅分销-火车票服务”接口权限，权限申请流程可参见：[获取应用权限](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )。
       * - 使用该接口需要在请求头中放入企业调用凭证数据信息`x-acs-btrip-corp-token`，企业调用凭证数据获取方式，请参见：[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)。
       *
       * @param request TrainOrderCancelRequest
       * @return TrainOrderCancelResponse
       */
      Models::TrainOrderCancelResponse trainOrderCancel(const Models::TrainOrderCancelRequest &request);

      /**
       * @summary 火车票改签确认
       *
       * @description 使用该接口可以查询火车票改签确认
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderChangeConfirmRequest
       * @param headers TrainOrderChangeConfirmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderChangeConfirmResponse
       */
      Models::TrainOrderChangeConfirmResponse trainOrderChangeConfirmWithOptions(const Models::TrainOrderChangeConfirmRequest &request, const Models::TrainOrderChangeConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票改签确认
       *
       * @description 使用该接口可以查询火车票改签确认
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderChangeConfirmRequest
       * @return TrainOrderChangeConfirmResponse
       */
      Models::TrainOrderChangeConfirmResponse trainOrderChangeConfirm(const Models::TrainOrderChangeConfirmRequest &request);

      /**
       * @summary 火车票正向预订
       *
       * @description 使用该接口可以查询火车票创单
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TrainOrderCreateRequest
       * @param headers TrainOrderCreateHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderCreateResponse
       */
      Models::TrainOrderCreateResponse trainOrderCreateWithOptions(const Models::TrainOrderCreateRequest &tmpReq, const Models::TrainOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票正向预订
       *
       * @description 使用该接口可以查询火车票创单
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderCreateRequest
       * @return TrainOrderCreateResponse
       */
      Models::TrainOrderCreateResponse trainOrderCreate(const Models::TrainOrderCreateRequest &request);

      /**
       * @summary 火车票订单详情
       *
       * @description 使用该接口可以查询火车票订单详情
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderDetailQueryRequest
       * @param headers TrainOrderDetailQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderDetailQueryResponse
       */
      Models::TrainOrderDetailQueryResponse trainOrderDetailQueryWithOptions(const Models::TrainOrderDetailQueryRequest &request, const Models::TrainOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票订单详情
       *
       * @description 使用该接口可以查询火车票订单详情
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderDetailQueryRequest
       * @return TrainOrderDetailQueryResponse
       */
      Models::TrainOrderDetailQueryResponse trainOrderDetailQuery(const Models::TrainOrderDetailQueryRequest &request);

      /**
       * @summary 查询火车票订单列表
       *
       * @description 使用该接口可以查询指定企业的火车票订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderListQueryRequest
       * @param headers TrainOrderListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderListQueryResponse
       */
      Models::TrainOrderListQueryResponse trainOrderListQueryWithOptions(const Models::TrainOrderListQueryRequest &request, const Models::TrainOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车票订单列表
       *
       * @description 使用该接口可以查询指定企业的火车票订单列表。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderListQueryRequest
       * @return TrainOrderListQueryResponse
       */
      Models::TrainOrderListQueryResponse trainOrderListQuery(const Models::TrainOrderListQueryRequest &request);

      /**
       * @summary 火车票订单支付
       *
       * @description 使用该接口可以查询火车票正向订单支付
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderPayRequest
       * @param headers TrainOrderPayHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderPayResponse
       */
      Models::TrainOrderPayResponse trainOrderPayWithOptions(const Models::TrainOrderPayRequest &request, const Models::TrainOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票订单支付
       *
       * @description 使用该接口可以查询火车票正向订单支付
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainOrderPayRequest
       * @return TrainOrderPayResponse
       */
      Models::TrainOrderPayResponse trainOrderPay(const Models::TrainOrderPayRequest &request);

      /**
       * @summary 查询火车票订单详情（含票信息）
       *
       * @description 使用该接口可以查询指定企业的火车票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderQueryRequest
       * @param headers TrainOrderQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderQueryResponse
       */
      Models::TrainOrderQueryResponse trainOrderQueryWithOptions(const Models::TrainOrderQueryRequest &request, const Models::TrainOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车票订单详情（含票信息）
       *
       * @description 使用该接口可以查询指定企业的火车票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderQueryRequest
       * @return TrainOrderQueryResponse
       */
      Models::TrainOrderQueryResponse trainOrderQuery(const Models::TrainOrderQueryRequest &request);

      /**
       * @summary 火车票订单查询V2
       *
       * @description 使用该接口可以查询指定企业的火车票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderQueryV2Request
       * @param headers TrainOrderQueryV2Headers
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainOrderQueryV2Response
       */
      Models::TrainOrderQueryV2Response trainOrderQueryV2WithOptions(const Models::TrainOrderQueryV2Request &request, const Models::TrainOrderQueryV2Headers &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票订单查询V2
       *
       * @description 使用该接口可以查询指定企业的火车票订单详情。
       * 1. 使用该接口需要在应用中开通商旅订单数据权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainOrderQueryV2Request
       * @return TrainOrderQueryV2Response
       */
      Models::TrainOrderQueryV2Response trainOrderQueryV2(const Models::TrainOrderQueryV2Request &request);

      /**
       * @summary 查询火车站数据
       *
       * @description 使用该接口可以查询火车站数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainStationSearchRequest
       * @param headers TrainStationSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainStationSearchResponse
       */
      Models::TrainStationSearchResponse trainStationSearchWithOptions(const Models::TrainStationSearchRequest &request, const Models::TrainStationSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车站数据
       *
       * @description 使用该接口可以查询火车站数据。
       * 1.  使用该接口需要在应用中开通基础数据集权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                                                       
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TrainStationSearchRequest
       * @return TrainStationSearchResponse
       */
      Models::TrainStationSearchResponse trainStationSearch(const Models::TrainStationSearchRequest &request);

      /**
       * @summary 火车票经停站查询
       *
       * @description 使用该接口可以查询车次停靠站
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainStopoverSearchRequest
       * @param headers TrainStopoverSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainStopoverSearchResponse
       */
      Models::TrainStopoverSearchResponse trainStopoverSearchWithOptions(const Models::TrainStopoverSearchRequest &request, const Models::TrainStopoverSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 火车票经停站查询
       *
       * @description 使用该接口可以查询车次停靠站
       * 使用该接口需要在应用中开通“火车票服务”权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support )使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请[查看企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TrainStopoverSearchRequest
       * @return TrainStopoverSearchResponse
       */
      Models::TrainStopoverSearchResponse trainStopoverSearch(const Models::TrainStopoverSearchRequest &request);

      /**
       * @summary 查询火车票凭证扫描件
       *
       * @description 使用该接口可以查询火车票凭证明细数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TrainTicketScanQueryRequest
       * @param headers TrainTicketScanQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TrainTicketScanQueryResponse
       */
      Models::TrainTicketScanQueryResponse trainTicketScanQueryWithOptions(const Models::TrainTicketScanQueryRequest &request, const Models::TrainTicketScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询火车票凭证扫描件
       *
       * @description 使用该接口可以查询火车票凭证明细数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request TrainTicketScanQueryRequest
       * @return TrainTicketScanQueryResponse
       */
      Models::TrainTicketScanQueryResponse trainTicketScanQuery(const Models::TrainTicketScanQueryRequest &request);

      /**
       * @summary Queries the list of enterprise travel standards (including categories such as domestic flights, international flights, train tickets, and hotels).
       *
       * @description Queries the list of travel standards configured for an enterprise.
       * - To use this operation, enable the travel standard permission in your application. For more information about how to apply for data permissions, see [API Permission Application Process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the application access credential (x-acs-btrip-corp-token) in the request header. For more information about how to obtain the application access credential, see [Application Access Credential](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support).
       *
       * @param request TravelStandardListQueryRequest
       * @param headers TravelStandardListQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardListQueryResponse
       */
      Models::TravelStandardListQueryResponse travelStandardListQueryWithOptions(const Models::TravelStandardListQueryRequest &request, const Models::TravelStandardListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of enterprise travel standards (including categories such as domestic flights, international flights, train tickets, and hotels).
       *
       * @description Queries the list of travel standards configured for an enterprise.
       * - To use this operation, enable the travel standard permission in your application. For more information about how to apply for data permissions, see [API Permission Application Process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the application access credential (x-acs-btrip-corp-token) in the request header. For more information about how to obtain the application access credential, see [Application Access Credential](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support).
       *
       * @param request TravelStandardListQueryRequest
       * @return TravelStandardListQueryResponse
       */
      Models::TravelStandardListQueryResponse travelStandardListQuery(const Models::TravelStandardListQueryRequest &request);

      /**
       * @summary Queries the details of enterprise travel rules, including categories such as flights, international flights, train tickets, and hotels.
       *
       * @description Queries the details of travel standards configured for an enterprise.
       * - To use this operation, enable the travel standard permission in your application. For more information about how to apply for data permissions, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the application access credential (x-acs-btrip-corp-token) in the request header. For more information about how to obtain the application access credential, see [Application access credential](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support).
       *
       * @param tmpReq TravelStandardQueryRequest
       * @param headers TravelStandardQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardQueryResponse
       */
      Models::TravelStandardQueryResponse travelStandardQueryWithOptions(const Models::TravelStandardQueryRequest &tmpReq, const Models::TravelStandardQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of enterprise travel rules, including categories such as flights, international flights, train tickets, and hotels.
       *
       * @description Queries the details of travel standards configured for an enterprise.
       * - To use this operation, enable the travel standard permission in your application. For more information about how to apply for data permissions, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * - To use this operation, include the application access credential (x-acs-btrip-corp-token) in the request header. For more information about how to obtain the application access credential, see [Application access credential](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support).
       *
       * @param request TravelStandardQueryRequest
       * @return TravelStandardQueryResponse
       */
      Models::TravelStandardQueryResponse travelStandardQuery(const Models::TravelStandardQueryRequest &request);

      /**
       * @summary 新增差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TravelStandardRelateAddRequest
       * @param headers TravelStandardRelateAddHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardRelateAddResponse
       */
      Models::TravelStandardRelateAddResponse travelStandardRelateAddWithOptions(const Models::TravelStandardRelateAddRequest &tmpReq, const Models::TravelStandardRelateAddHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardRelateAddRequest
       * @return TravelStandardRelateAddResponse
       */
      Models::TravelStandardRelateAddResponse travelStandardRelateAdd(const Models::TravelStandardRelateAddRequest &request);

      /**
       * @summary 删除差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param tmpReq TravelStandardRelateDeleteRequest
       * @param headers TravelStandardRelateDeleteHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardRelateDeleteResponse
       */
      Models::TravelStandardRelateDeleteResponse travelStandardRelateDeleteWithOptions(const Models::TravelStandardRelateDeleteRequest &tmpReq, const Models::TravelStandardRelateDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardRelateDeleteRequest
       * @return TravelStandardRelateDeleteResponse
       */
      Models::TravelStandardRelateDeleteResponse travelStandardRelateDelete(const Models::TravelStandardRelateDeleteRequest &request);

      /**
       * @summary 查询差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardRelateQueryRequest
       * @param headers TravelStandardRelateQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardRelateQueryResponse
       */
      Models::TravelStandardRelateQueryResponse travelStandardRelateQueryWithOptions(const Models::TravelStandardRelateQueryRequest &request, const Models::TravelStandardRelateQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询差旅标准关联人员实体
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardRelateQueryRequest
       * @return TravelStandardRelateQueryResponse
       */
      Models::TravelStandardRelateQueryResponse travelStandardRelateQuery(const Models::TravelStandardRelateQueryRequest &request);

      /**
       * @summary 更新差旅标准绑定员工类型
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardScopeSaveRequest
       * @param headers TravelStandardScopeSaveHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TravelStandardScopeSaveResponse
       */
      Models::TravelStandardScopeSaveResponse travelStandardScopeSaveWithOptions(const Models::TravelStandardScopeSaveRequest &request, const Models::TravelStandardScopeSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新差旅标准绑定员工类型
       *
       * @description 使用该接口可以查询企业配置的差旅标准列表。
       * - 使用该接口需要在应用中开通差旅标准权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * - 使用该接口需要在请求头中放入应用访问凭证数据信息（x-acs-btrip-corp-token），应用访问凭证数据获取接口请查看[应用访问凭证](https://open.alibtrip.com/?spm=openapi-amp.newDocPublishment.0.0.68ab281fSv8QIA#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TravelStandardScopeSaveRequest
       * @return TravelStandardScopeSaveResponse
       */
      Models::TravelStandardScopeSaveResponse travelStandardScopeSave(const Models::TravelStandardScopeSaveRequest &request);

      /**
       * @summary 查询业务流程
       *
       * @description 使用该接口可以查询审批实例信息
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                          
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TripBusinessInstanceQueryRequest
       * @param headers TripBusinessInstanceQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TripBusinessInstanceQueryResponse
       */
      Models::TripBusinessInstanceQueryResponse tripBusinessInstanceQueryWithOptions(const Models::TripBusinessInstanceQueryRequest &request, const Models::TripBusinessInstanceQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询业务流程
       *
       * @description 使用该接口可以查询审批实例信息
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                          
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TripBusinessInstanceQueryRequest
       * @return TripBusinessInstanceQueryResponse
       */
      Models::TripBusinessInstanceQueryResponse tripBusinessInstanceQuery(const Models::TripBusinessInstanceQueryRequest &request);

      /**
       * @summary 查询抄送信息
       *
       * @description 使用该接口可以查询抄送详情信息
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                          
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TripCCInfoQueryRequest
       * @param headers TripCCInfoQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TripCCInfoQueryResponse
       */
      Models::TripCCInfoQueryResponse tripCCInfoQueryWithOptions(const Models::TripCCInfoQueryRequest &request, const Models::TripCCInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询抄送信息
       *
       * @description 使用该接口可以查询抄送详情信息
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)                                                          
       * 2. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-so-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)
       *
       * @param request TripCCInfoQueryRequest
       * @return TripCCInfoQueryResponse
       */
      Models::TripCCInfoQueryResponse tripCCInfoQuery(const Models::TripCCInfoQueryRequest &request);

      /**
       * @summary 查询审批任务列表
       *
       * @description 使用该接口可以查询审批任务
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * 1. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TripTaskQueryRequest
       * @param headers TripTaskQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TripTaskQueryResponse
       */
      Models::TripTaskQueryResponse tripTaskQueryWithOptions(const Models::TripTaskQueryRequest &request, const Models::TripTaskQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询审批任务列表
       *
       * @description 使用该接口可以查询审批任务
       * 1. 使用该接口需要在应用中开通用审批权限，具体的数据权限申请流程请查看接口[权限申请流程](https://open.alibtrip.com/#/document/server/interface-permissions?handbookId=development-support)
       * 1. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://open.alibtrip.com/#/document/server/corptoken-enterprise-access-credential?handbookId=development-support)
       *
       * @param request TripTaskQueryRequest
       * @return TripTaskQueryResponse
       */
      Models::TripTaskQueryResponse tripTaskQuery(const Models::TripTaskQueryRequest &request);

      /**
       * @summary 更新企业自定义角色
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request UpdateCustomRoleRequest
       * @param headers UpdateCustomRoleHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomRoleResponse
       */
      Models::UpdateCustomRoleResponse updateCustomRoleWithOptions(const Models::UpdateCustomRoleRequest &request, const Models::UpdateCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新企业自定义角色
       *
       * @description - 调用本接口前，请完成组织人员同步相关应用权限的申请。若无，请参考：[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)  完成相关操作。                                                                                     
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request UpdateCustomRoleRequest
       * @return UpdateCustomRoleResponse
       */
      Models::UpdateCustomRoleResponse updateCustomRole(const Models::UpdateCustomRoleRequest &request);

      /**
       * @summary 修改企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param tmpReq UpdateDepartmentRequest
       * @param headers UpdateDepartmentHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartmentWithOptions(const Models::UpdateDepartmentRequest &tmpReq, const Models::UpdateDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改企业部门
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参见：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                                    
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key`作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request UpdateDepartmentRequest
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartment(const Models::UpdateDepartmentRequest &request);

      /**
       * @summary 更新员工信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param tmpReq UpdateEmployeeRequest
       * @param headers UpdateEmployeeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEmployeeResponse
       */
      Models::UpdateEmployeeResponse updateEmployeeWithOptions(const Models::UpdateEmployeeRequest &tmpReq, const Models::UpdateEmployeeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新员工信息
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request UpdateEmployeeRequest
       * @return UpdateEmployeeResponse
       */
      Models::UpdateEmployeeResponse updateEmployee(const Models::UpdateEmployeeRequest &request);

      /**
       * @summary 更新员工在职状态
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request UpdateEmployeeLeaveStatusRequest
       * @param headers UpdateEmployeeLeaveStatusHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEmployeeLeaveStatusResponse
       */
      Models::UpdateEmployeeLeaveStatusResponse updateEmployeeLeaveStatusWithOptions(const Models::UpdateEmployeeLeaveStatusRequest &request, const Models::UpdateEmployeeLeaveStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新员工在职状态
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)完成相关操作。                                                                                       
       * - 通过 HTTTP 方式调用本接口时，需要将 `app_key` 作为**必填参数**拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       * - 接口频率限制（QPS）：800 次/分钟、40 次/秒。
       *
       * @param request UpdateEmployeeLeaveStatusRequest
       * @return UpdateEmployeeLeaveStatusResponse
       */
      Models::UpdateEmployeeLeaveStatusResponse updateEmployeeLeaveStatus(const Models::UpdateEmployeeLeaveStatusRequest &request);

      /**
       * @summary 人员查询
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request UserQueryRequest
       * @param headers UserQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserQueryResponse
       */
      Models::UserQueryResponse userQueryWithOptions(const Models::UserQueryRequest &request, const Models::UserQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人员查询
       *
       * @description - 调用本接口前，请完成**组织人员同步**相关应用权限的申请。若无，请参考：[获取应用权限](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435) 完成相关操作。                                                                              
       * - 通过 HTTP 方式调用本接口时，需要将 `app_key` 作为必填参数拼接在请求地址中。`app_key` 的获取方式请参见：[应用基础信息-应用凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=4667763)。
       *
       * @param request UserQueryRequest
       * @return UserQueryResponse
       */
      Models::UserQueryResponse userQuery(const Models::UserQueryRequest &request);

      /**
       * @summary 查询增值服务记账数据
       *
       * @param request VasBillSettlementQueryRequest
       * @param headers VasBillSettlementQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return VasBillSettlementQueryResponse
       */
      Models::VasBillSettlementQueryResponse vasBillSettlementQueryWithOptions(const Models::VasBillSettlementQueryRequest &request, const Models::VasBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询增值服务记账数据
       *
       * @param request VasBillSettlementQueryRequest
       * @return VasBillSettlementQueryResponse
       */
      Models::VasBillSettlementQueryResponse vasBillSettlementQuery(const Models::VasBillSettlementQueryRequest &request);

      /**
       * @summary Queries VAT invoice detail data.
       *
       * @description Queries VAT invoice detail data.
       * 1. The value-added service API requires special approval. Contact the business travel customer operations team before submitting a permission request.
       * 2. To use this API, enable the value-added service data permission in your application. For the data permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * 3. To use this API, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param request VatInvoiceScanQueryRequest
       * @param headers VatInvoiceScanQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return VatInvoiceScanQueryResponse
       */
      Models::VatInvoiceScanQueryResponse vatInvoiceScanQueryWithOptions(const Models::VatInvoiceScanQueryRequest &request, const Models::VatInvoiceScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries VAT invoice detail data.
       *
       * @description Queries VAT invoice detail data.
       * 1. The value-added service API requires special approval. Contact the business travel customer operations team before submitting a permission request.
       * 2. To use this API, enable the value-added service data permission in your application. For the data permission application process, see [API permission application process](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435).
       * 3. To use this API, include the enterprise access credential (x-acs-btrip-so-corp-token) in the request header. For information about how to obtain the enterprise access credential, see [Enterprise access credential](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985).
       *
       * @param request VatInvoiceScanQueryRequest
       * @return VatInvoiceScanQueryResponse
       */
      Models::VatInvoiceScanQueryResponse vatInvoiceScanQuery(const Models::VatInvoiceScanQueryRequest &request);

      /**
       * @summary 查询账期待申请的发票数据
       *
       * @description 使用该接口可以查询账期待开票数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request WaitApplyInvoiceTaskDetailQueryRequest
       * @param headers WaitApplyInvoiceTaskDetailQueryHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return WaitApplyInvoiceTaskDetailQueryResponse
       */
      Models::WaitApplyInvoiceTaskDetailQueryResponse waitApplyInvoiceTaskDetailQueryWithOptions(const Models::WaitApplyInvoiceTaskDetailQueryRequest &request, const Models::WaitApplyInvoiceTaskDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询账期待申请的发票数据
       *
       * @description 使用该接口可以查询账期待开票数据。
       * 1. 增值接口需特殊审批，提交权限前请先和商旅客户运营沟通确认。
       * 2. 使用该接口需要在应用中开通增值服务数据权限，具体的数据权限申请流程请查看接口权限申请流程[接口权限申请流程](https://openapi.alibtrip.com/doc/toDocDetail?docId=3771435)。
       * 3. 使用该接口需要在请求头中放入企业调用凭证数据信息（x-acs-btrip-corp-token），企业调用凭证数据获取接口请查看[企业访问凭证](https://openapi.alibtrip.com/doc/toDocDetail?docId=3769985)。
       *
       * @param request WaitApplyInvoiceTaskDetailQueryRequest
       * @return WaitApplyInvoiceTaskDetailQueryResponse
       */
      Models::WaitApplyInvoiceTaskDetailQueryResponse waitApplyInvoiceTaskDetailQuery(const Models::WaitApplyInvoiceTaskDetailQueryRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
