// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SOPHONSOAR20250903_HPP_
#define ALIBABACLOUD_SOPHONSOAR20250903_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sophonsoar20250903Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sophonsoar20250903.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Create Component Asset.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Ingress Traffic) before using this interface.
       *
       * @param request CreateComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComponentAssetResponse
       */
      Models::CreateComponentAssetResponse createComponentAssetWithOptions(const Models::CreateComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Component Asset.
       *
       * @description Please ensure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Ingress Traffic) before using this interface.
       *
       * @param request CreateComponentAssetRequest
       * @return CreateComponentAssetResponse
       */
      Models::CreateComponentAssetResponse createComponentAsset(const Models::CreateComponentAssetRequest &request);

      /**
       * @summary Create Playbook.
       *
       * @param request CreatePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePlaybookResponse
       */
      Models::CreatePlaybookResponse createPlaybookWithOptions(const Models::CreatePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Playbook.
       *
       * @param request CreatePlaybookRequest
       * @return CreatePlaybookResponse
       */
      Models::CreatePlaybookResponse createPlaybook(const Models::CreatePlaybookRequest &request);

      /**
       * @summary Delete Component Asset.
       *
       * @description Please ensure that before using this interface, you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic).
       *
       * @param request DeleteComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAssetWithOptions(const Models::DeleteComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Component Asset.
       *
       * @description Please ensure that before using this interface, you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/sas/detail/sas) of the response orchestration product (i.e., Threat Analysis and Response Log Access Traffic).
       *
       * @param request DeleteComponentAssetRequest
       * @return DeleteComponentAssetResponse
       */
      Models::DeleteComponentAssetResponse deleteComponentAsset(const Models::DeleteComponentAssetRequest &request);

      /**
       * @summary Delete Playbook.
       *
       * @param request DeletePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybookWithOptions(const Models::DeletePlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Playbook.
       *
       * @param request DeletePlaybookRequest
       * @return DeletePlaybookResponse
       */
      Models::DeletePlaybookResponse deletePlaybook(const Models::DeletePlaybookRequest &request);

      /**
       * @summary Get playbook details.
       *
       * @param request GetPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlaybookResponse
       */
      Models::GetPlaybookResponse getPlaybookWithOptions(const Models::GetPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get playbook details.
       *
       * @param request GetPlaybookRequest
       * @return GetPlaybookResponse
       */
      Models::GetPlaybookResponse getPlaybook(const Models::GetPlaybookRequest &request);

      /**
       * @summary Get the list of assets configured for a component.
       *
       * @param request ListComponentAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentAssetsResponse
       */
      Models::ListComponentAssetsResponse listComponentAssetsWithOptions(const Models::ListComponentAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of assets configured for a component.
       *
       * @param request ListComponentAssetsRequest
       * @return ListComponentAssetsResponse
       */
      Models::ListComponentAssetsResponse listComponentAssets(const Models::ListComponentAssetsRequest &request);

      /**
       * @summary Get Component List.
       *
       * @param request ListComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Component List.
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary Get Playbook List.
       *
       * @param tmpReq ListPlaybooksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlaybooksResponse
       */
      Models::ListPlaybooksResponse listPlaybooksWithOptions(const Models::ListPlaybooksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Playbook List.
       *
       * @param request ListPlaybooksRequest
       * @return ListPlaybooksResponse
       */
      Models::ListPlaybooksResponse listPlaybooks(const Models::ListPlaybooksRequest &request);

      /**
       * @summary Update Component Asset.
       *
       * @param request UpdateComponentAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComponentAssetResponse
       */
      Models::UpdateComponentAssetResponse updateComponentAssetWithOptions(const Models::UpdateComponentAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Component Asset.
       *
       * @param request UpdateComponentAssetRequest
       * @return UpdateComponentAssetResponse
       */
      Models::UpdateComponentAssetResponse updateComponentAsset(const Models::UpdateComponentAssetRequest &request);

      /**
       * @summary Update Playbook.
       *
       * @param tmpReq UpdatePlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePlaybookResponse
       */
      Models::UpdatePlaybookResponse updatePlaybookWithOptions(const Models::UpdatePlaybookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Playbook.
       *
       * @param request UpdatePlaybookRequest
       * @return UpdatePlaybookResponse
       */
      Models::UpdatePlaybookResponse updatePlaybook(const Models::UpdatePlaybookRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
