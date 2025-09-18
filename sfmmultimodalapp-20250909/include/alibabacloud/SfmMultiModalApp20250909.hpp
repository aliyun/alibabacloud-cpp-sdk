// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SFMMULTIMODALAPP20250909_HPP_
#define ALIBABACLOUD_SFMMULTIMODALAPP20250909_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SfmMultiModalApp20250909Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SfmMultiModalApp20250909.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 指令创建
       *
       * @param tmpReq CreateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommandWithOptions(const Models::CreateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令创建
       *
       * @param request CreateCommandRequest
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommand(const Models::CreateCommandRequest &request);

      /**
       * @summary 创建多模态应用
       *
       * @param tmpReq CreateMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMmAppResponse
       */
      Models::CreateMmAppResponse createMmAppWithOptions(const Models::CreateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建多模态应用
       *
       * @param request CreateMmAppRequest
       * @return CreateMmAppResponse
       */
      Models::CreateMmAppResponse createMmApp(const Models::CreateMmAppRequest &request);

      /**
       * @summary 删除指令
       *
       * @param request DeleteCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommandWithOptions(const Models::DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指令
       *
       * @param request DeleteCommandRequest
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommand(const Models::DeleteCommandRequest &request);

      /**
       * @summary 删除多模态应用
       *
       * @param request DeleteMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMmAppResponse
       */
      Models::DeleteMmAppResponse deleteMmAppWithOptions(const Models::DeleteMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多模态应用
       *
       * @param request DeleteMmAppRequest
       * @return DeleteMmAppResponse
       */
      Models::DeleteMmAppResponse deleteMmApp(const Models::DeleteMmAppRequest &request);

      /**
       * @summary 指令详情
       *
       * @param request DescribeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandResponse
       */
      Models::DescribeCommandResponse describeCommandWithOptions(const Models::DescribeCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令详情
       *
       * @param request DescribeCommandRequest
       * @return DescribeCommandResponse
       */
      Models::DescribeCommandResponse describeCommand(const Models::DescribeCommandRequest &request);

      /**
       * @summary 多模态应用详情
       *
       * @param request DescribeMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMmAppResponse
       */
      Models::DescribeMmAppResponse describeMmAppWithOptions(const Models::DescribeMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用详情
       *
       * @param request DescribeMmAppRequest
       * @return DescribeMmAppResponse
       */
      Models::DescribeMmAppResponse describeMmApp(const Models::DescribeMmAppRequest &request);

      /**
       * @summary 指令列表
       *
       * @param request ListCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommandResponse
       */
      Models::ListCommandResponse listCommandWithOptions(const Models::ListCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令列表
       *
       * @param request ListCommandRequest
       * @return ListCommandResponse
       */
      Models::ListCommandResponse listCommand(const Models::ListCommandRequest &request);

      /**
       * @summary 获取多模态应用列表
       *
       * @param request ListMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMmAppResponse
       */
      Models::ListMmAppResponse listMmAppWithOptions(const Models::ListMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取多模态应用列表
       *
       * @param request ListMmAppRequest
       * @return ListMmAppResponse
       */
      Models::ListMmAppResponse listMmApp(const Models::ListMmAppRequest &request);

      /**
       * @summary 应用发布列表
       *
       * @param request ListPublishedMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishedMmAppResponse
       */
      Models::ListPublishedMmAppResponse listPublishedMmAppWithOptions(const Models::ListPublishedMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用发布列表
       *
       * @param request ListPublishedMmAppRequest
       * @return ListPublishedMmAppResponse
       */
      Models::ListPublishedMmAppResponse listPublishedMmApp(const Models::ListPublishedMmAppRequest &request);

      /**
       * @summary 多模态应用发布
       *
       * @param request PublishMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishMmAppResponse
       */
      Models::PublishMmAppResponse publishMmAppWithOptions(const Models::PublishMmAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用发布
       *
       * @param request PublishMmAppRequest
       * @return PublishMmAppResponse
       */
      Models::PublishMmAppResponse publishMmApp(const Models::PublishMmAppRequest &request);

      /**
       * @summary 指令更新
       *
       * @param tmpReq UpdateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommandResponse
       */
      Models::UpdateCommandResponse updateCommandWithOptions(const Models::UpdateCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指令更新
       *
       * @param request UpdateCommandRequest
       * @return UpdateCommandResponse
       */
      Models::UpdateCommandResponse updateCommand(const Models::UpdateCommandRequest &request);

      /**
       * @summary 多模态应用更新
       *
       * @param tmpReq UpdateMmAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMmAppResponse
       */
      Models::UpdateMmAppResponse updateMmAppWithOptions(const Models::UpdateMmAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 多模态应用更新
       *
       * @param request UpdateMmAppRequest
       * @return UpdateMmAppResponse
       */
      Models::UpdateMmAppResponse updateMmApp(const Models::UpdateMmAppRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
