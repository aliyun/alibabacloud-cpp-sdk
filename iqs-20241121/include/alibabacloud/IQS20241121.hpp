// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IQS20241121_HPP_
#define ALIBABACLOUD_IQS20241121_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/IQS20241121Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/IQS20241121.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 申请正式开通
       *
       * @param request ApplyFormalServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyFormalServiceResponse
       */
      Models::ApplyFormalServiceResponse applyFormalServiceWithOptions(const Models::ApplyFormalServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请正式开通
       *
       * @param request ApplyFormalServiceRequest
       * @return ApplyFormalServiceResponse
       */
      Models::ApplyFormalServiceResponse applyFormalService(const Models::ApplyFormalServiceRequest &request);

      /**
       * @summary 校验账号类型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccountTypeResponse
       */
      Models::CheckAccountTypeResponse checkAccountTypeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验账号类型
       *
       * @return CheckAccountTypeResponse
       */
      Models::CheckAccountTypeResponse checkAccountType();

      /**
       * @summary 下载接口计量日明细
       *
       * @param request DownloadApiCallDailyDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadApiCallDailyDetailResponse
       */
      Models::DownloadApiCallDailyDetailResponse downloadApiCallDailyDetailWithOptions(const Models::DownloadApiCallDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载接口计量日明细
       *
       * @param request DownloadApiCallDailyDetailRequest
       * @return DownloadApiCallDailyDetailResponse
       */
      Models::DownloadApiCallDailyDetailResponse downloadApiCallDailyDetail(const Models::DownloadApiCallDailyDetailRequest &request);

      /**
       * @summary 下载接口计量日明细
       *
       * @param request DownloadMeteringDailyDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadMeteringDailyDetailResponse
       */
      Models::DownloadMeteringDailyDetailResponse downloadMeteringDailyDetailWithOptions(const Models::DownloadMeteringDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载接口计量日明细
       *
       * @param request DownloadMeteringDailyDetailRequest
       * @return DownloadMeteringDailyDetailResponse
       */
      Models::DownloadMeteringDailyDetailResponse downloadMeteringDailyDetail(const Models::DownloadMeteringDailyDetailRequest &request);

      /**
       * @summary 延长测试时间
       *
       * @param request ExpandSearchExpiredTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpandSearchExpiredTimeResponse
       */
      Models::ExpandSearchExpiredTimeResponse expandSearchExpiredTimeWithOptions(const Models::ExpandSearchExpiredTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 延长测试时间
       *
       * @param request ExpandSearchExpiredTimeRequest
       * @return ExpandSearchExpiredTimeResponse
       */
      Models::ExpandSearchExpiredTimeResponse expandSearchExpiredTime(const Models::ExpandSearchExpiredTimeRequest &request);

      /**
       * @summary 获取账号配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountConfigInfoResponse
       */
      Models::GetAccountConfigInfoResponse getAccountConfigInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取账号配置信息
       *
       * @return GetAccountConfigInfoResponse
       */
      Models::GetAccountConfigInfoResponse getAccountConfigInfo();

      /**
       * @summary 查询用户申请记录
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountReviewRecordResponse
       */
      Models::GetAccountReviewRecordResponse getAccountReviewRecordWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户申请记录
       *
       * @return GetAccountReviewRecordResponse
       */
      Models::GetAccountReviewRecordResponse getAccountReviewRecord();

      /**
       * @summary 查询计量汇总信息
       *
       * @param request GetMeteringSummaryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMeteringSummaryResponse
       */
      Models::GetMeteringSummaryResponse getMeteringSummaryWithOptions(const Models::GetMeteringSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询计量汇总信息
       *
       * @param request GetMeteringSummaryRequest
       * @return GetMeteringSummaryResponse
       */
      Models::GetMeteringSummaryResponse getMeteringSummary(const Models::GetMeteringSummaryRequest &request);

      /**
       * @summary 查询服务额度信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceConfigResponse
       */
      Models::GetServiceConfigResponse getServiceConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询服务额度信息
       *
       * @return GetServiceConfigResponse
       */
      Models::GetServiceConfigResponse getServiceConfig();

      /**
       * @summary 查询Api调用量（性能）日明细
       *
       * @param request ListApiCallDailyDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiCallDailyDetailResponse
       */
      Models::ListApiCallDailyDetailResponse listApiCallDailyDetailWithOptions(const Models::ListApiCallDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Api调用量（性能）日明细
       *
       * @param request ListApiCallDailyDetailRequest
       * @return ListApiCallDailyDetailResponse
       */
      Models::ListApiCallDailyDetailResponse listApiCallDailyDetail(const Models::ListApiCallDailyDetailRequest &request);

      /**
       * @summary Api名称列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiNamesResponse
       */
      Models::ListApiNamesResponse listApiNamesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Api名称列表
       *
       * @return ListApiNamesResponse
       */
      Models::ListApiNamesResponse listApiNames();

      /**
       * @summary 查询计量日明细信息
       *
       * @param request ListMeteringDailyDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMeteringDailyDetailResponse
       */
      Models::ListMeteringDailyDetailResponse listMeteringDailyDetailWithOptions(const Models::ListMeteringDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询计量日明细信息
       *
       * @param request ListMeteringDailyDetailRequest
       * @return ListMeteringDailyDetailResponse
       */
      Models::ListMeteringDailyDetailResponse listMeteringDailyDetail(const Models::ListMeteringDailyDetailRequest &request);

      /**
       * @summary 查询主账号的所有子账号信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubAccountInfoResponse
       */
      Models::ListSubAccountInfoResponse listSubAccountInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主账号的所有子账号信息
       *
       * @return ListSubAccountInfoResponse
       */
      Models::ListSubAccountInfoResponse listSubAccountInfo();

      /**
       * @summary 管理智搜用户
       *
       * @param request ManageSearchAccountInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageSearchAccountInfoResponse
       */
      Models::ManageSearchAccountInfoResponse manageSearchAccountInfoWithOptions(const Models::ManageSearchAccountInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 管理智搜用户
       *
       * @param request ManageSearchAccountInfoRequest
       * @return ManageSearchAccountInfoResponse
       */
      Models::ManageSearchAccountInfoResponse manageSearchAccountInfo(const Models::ManageSearchAccountInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
