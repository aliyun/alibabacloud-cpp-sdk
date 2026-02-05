// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CUSTOMERSERVICE20231228_HPP_
#define ALIBABACLOUD_CUSTOMERSERVICE20231228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CustomerService20231228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CustomerService20231228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CustomerService20231228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取我的企业支持计划
       *
       * @param request ListEnterpriseSupportPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseSupportPlanResponse
       */
      Models::ListEnterpriseSupportPlanResponse listEnterpriseSupportPlanWithOptions(const Models::ListEnterpriseSupportPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取我的企业支持计划
       *
       * @param request ListEnterpriseSupportPlanRequest
       * @return ListEnterpriseSupportPlanResponse
       */
      Models::ListEnterpriseSupportPlanResponse listEnterpriseSupportPlan(const Models::ListEnterpriseSupportPlanRequest &request);

      /**
       * @summary 获取我的企业支持计划(下拉)
       *
       * @param request ListEnterpriseSupportPlanSimpleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnterpriseSupportPlanSimpleResponse
       */
      Models::ListEnterpriseSupportPlanSimpleResponse listEnterpriseSupportPlanSimpleWithOptions(const Models::ListEnterpriseSupportPlanSimpleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取我的企业支持计划(下拉)
       *
       * @param request ListEnterpriseSupportPlanSimpleRequest
       * @return ListEnterpriseSupportPlanSimpleResponse
       */
      Models::ListEnterpriseSupportPlanSimpleResponse listEnterpriseSupportPlanSimple(const Models::ListEnterpriseSupportPlanSimpleRequest &request);

      /**
       * @summary 获取专家服务列表
       *
       * @param request ListServiceApplyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceApplyResponse
       */
      Models::ListServiceApplyResponse listServiceApplyWithOptions(const Models::ListServiceApplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取专家服务列表
       *
       * @param request ListServiceApplyRequest
       * @return ListServiceApplyResponse
       */
      Models::ListServiceApplyResponse listServiceApply(const Models::ListServiceApplyRequest &request);

      /**
       * @summary 通过UID分页获取云企任务单
       *
       * @param request ListYunQiTaskByUidRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListYunQiTaskByUidResponse
       */
      Models::ListYunQiTaskByUidResponse listYunQiTaskByUidWithOptions(const Models::ListYunQiTaskByUidRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过UID分页获取云企任务单
       *
       * @param request ListYunQiTaskByUidRequest
       * @return ListYunQiTaskByUidResponse
       */
      Models::ListYunQiTaskByUidResponse listYunQiTaskByUid(const Models::ListYunQiTaskByUidRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CustomerService20231228
#endif
