// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_UNIMKT20181212_HPP_
#define ALIBABACLOUD_UNIMKT20181212_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/UniMkt20181212Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/UniMkt20181212.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary CreateProxyBrandUser
       *
       * @param request CreateProxyBrandUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProxyBrandUserResponse
       */
      Models::CreateProxyBrandUserResponse createProxyBrandUserWithOptions(const Models::CreateProxyBrandUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateProxyBrandUser
       *
       * @param request CreateProxyBrandUserRequest
       * @return CreateProxyBrandUserResponse
       */
      Models::CreateProxyBrandUserResponse createProxyBrandUser(const Models::CreateProxyBrandUserRequest &request);

      /**
       * @summary CreateUnionTask
       *
       * @param tmpReq CreateUnionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUnionTaskResponse
       */
      Models::CreateUnionTaskResponse createUnionTaskWithOptions(const Models::CreateUnionTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateUnionTask
       *
       * @param request CreateUnionTaskRequest
       * @return CreateUnionTaskResponse
       */
      Models::CreateUnionTaskResponse createUnionTask(const Models::CreateUnionTaskRequest &request);

      /**
       * @summary 删除聚合拉新品牌
       *
       * @param request DeleteUnionBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUnionBrandResponse
       */
      Models::DeleteUnionBrandResponse deleteUnionBrandWithOptions(const Models::DeleteUnionBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除聚合拉新品牌
       *
       * @param request DeleteUnionBrandRequest
       * @return DeleteUnionBrandResponse
       */
      Models::DeleteUnionBrandResponse deleteUnionBrand(const Models::DeleteUnionBrandRequest &request);

      /**
       * @summary EndUnionTask
       *
       * @param request EndUnionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EndUnionTaskResponse
       */
      Models::EndUnionTaskResponse endUnionTaskWithOptions(const Models::EndUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary EndUnionTask
       *
       * @param request EndUnionTaskRequest
       * @return EndUnionTaskResponse
       */
      Models::EndUnionTaskResponse endUnionTask(const Models::EndUnionTaskRequest &request);

      /**
       * @summary 聚合拉新开放接口查询媒体行业
       *
       * @param request ListUnionMediaIndustryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUnionMediaIndustryResponse
       */
      Models::ListUnionMediaIndustryResponse listUnionMediaIndustryWithOptions(const Models::ListUnionMediaIndustryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聚合拉新开放接口查询媒体行业
       *
       * @param request ListUnionMediaIndustryRequest
       * @return ListUnionMediaIndustryResponse
       */
      Models::ListUnionMediaIndustryResponse listUnionMediaIndustry(const Models::ListUnionMediaIndustryRequest &request);

      /**
       * @param request QueryAvailableBalanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailableBalanceResponse
       */
      Models::QueryAvailableBalanceResponse queryAvailableBalanceWithOptions(const Models::QueryAvailableBalanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAvailableBalanceRequest
       * @return QueryAvailableBalanceResponse
       */
      Models::QueryAvailableBalanceResponse queryAvailableBalance(const Models::QueryAvailableBalanceRequest &request);

      /**
       * @summary QueryContentList
       *
       * @param request QueryContentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryContentListResponse
       */
      Models::QueryContentListResponse queryContentListWithOptions(const Models::QueryContentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryContentList
       *
       * @param request QueryContentListRequest
       * @return QueryContentListResponse
       */
      Models::QueryContentListResponse queryContentList(const Models::QueryContentListRequest &request);

      /**
       * @summary 获取行业标签包
       *
       * @param request QueryIndustryLabelBagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryIndustryLabelBagResponse
       */
      Models::QueryIndustryLabelBagResponse queryIndustryLabelBagWithOptions(const Models::QueryIndustryLabelBagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取行业标签包
       *
       * @param request QueryIndustryLabelBagRequest
       * @return QueryIndustryLabelBagResponse
       */
      Models::QueryIndustryLabelBagResponse queryIndustryLabelBag(const Models::QueryIndustryLabelBagRequest &request);

      /**
       * @param request QueryTaskBizTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskBizTypeResponse
       */
      Models::QueryTaskBizTypeResponse queryTaskBizTypeWithOptions(const Models::QueryTaskBizTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTaskBizTypeRequest
       * @return QueryTaskBizTypeResponse
       */
      Models::QueryTaskBizTypeResponse queryTaskBizType(const Models::QueryTaskBizTypeRequest &request);

      /**
       * @summary QueryTaskRuleLimit
       *
       * @param request QueryTaskRuleLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskRuleLimitResponse
       */
      Models::QueryTaskRuleLimitResponse queryTaskRuleLimitWithOptions(const Models::QueryTaskRuleLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryTaskRuleLimit
       *
       * @param request QueryTaskRuleLimitRequest
       * @return QueryTaskRuleLimitResponse
       */
      Models::QueryTaskRuleLimitResponse queryTaskRuleLimit(const Models::QueryTaskRuleLimitRequest &request);

      /**
       * @param request QueryUnionChannelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnionChannelResponse
       */
      Models::QueryUnionChannelResponse queryUnionChannelWithOptions(const Models::QueryUnionChannelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryUnionChannelRequest
       * @return QueryUnionChannelResponse
       */
      Models::QueryUnionChannelResponse queryUnionChannel(const Models::QueryUnionChannelRequest &request);

      /**
       * @summary QueryUnionContentInfo
       *
       * @param request QueryUnionContentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnionContentInfoResponse
       */
      Models::QueryUnionContentInfoResponse queryUnionContentInfoWithOptions(const Models::QueryUnionContentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryUnionContentInfo
       *
       * @param request QueryUnionContentInfoRequest
       * @return QueryUnionContentInfoResponse
       */
      Models::QueryUnionContentInfoResponse queryUnionContentInfo(const Models::QueryUnionContentInfoRequest &request);

      /**
       * @param request QueryUnionTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnionTaskInfoResponse
       */
      Models::QueryUnionTaskInfoResponse queryUnionTaskInfoWithOptions(const Models::QueryUnionTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryUnionTaskInfoRequest
       * @return QueryUnionTaskInfoResponse
       */
      Models::QueryUnionTaskInfoResponse queryUnionTaskInfo(const Models::QueryUnionTaskInfoRequest &request);

      /**
       * @param request QueryUnionTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnionTaskListResponse
       */
      Models::QueryUnionTaskListResponse queryUnionTaskListWithOptions(const Models::QueryUnionTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryUnionTaskListRequest
       * @return QueryUnionTaskListResponse
       */
      Models::QueryUnionTaskListResponse queryUnionTaskList(const Models::QueryUnionTaskListRequest &request);

      /**
       * @summary 开启聚合拉新计划
       *
       * @param request StartUnionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartUnionTaskResponse
       */
      Models::StartUnionTaskResponse startUnionTaskWithOptions(const Models::StartUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启聚合拉新计划
       *
       * @param request StartUnionTaskRequest
       * @return StartUnionTaskResponse
       */
      Models::StartUnionTaskResponse startUnionTask(const Models::StartUnionTaskRequest &request);

      /**
       * @summary 暂停聚合拉新计划
       *
       * @param request StopUnionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopUnionTaskResponse
       */
      Models::StopUnionTaskResponse stopUnionTaskWithOptions(const Models::StopUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停聚合拉新计划
       *
       * @param request StopUnionTaskRequest
       * @return StopUnionTaskResponse
       */
      Models::StopUnionTaskResponse stopUnionTask(const Models::StopUnionTaskRequest &request);

      /**
       * @summary 聚合拉新对外接口更新计划
       *
       * @param request UpdateUnionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUnionTaskResponse
       */
      Models::UpdateUnionTaskResponse updateUnionTaskWithOptions(const Models::UpdateUnionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 聚合拉新对外接口更新计划
       *
       * @param request UpdateUnionTaskRequest
       * @return UpdateUnionTaskResponse
       */
      Models::UpdateUnionTaskResponse updateUnionTask(const Models::UpdateUnionTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
