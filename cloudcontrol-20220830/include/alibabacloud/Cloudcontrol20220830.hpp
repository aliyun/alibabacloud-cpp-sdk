// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDCONTROL20220830_HPP_
#define ALIBABACLOUD_CLOUDCONTROL20220830_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudcontrol20220830Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cloudcontrol20220830.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Calls this operation to cancel a specified asynchronous task.
       *
       * @description Only tasks that are in the Pending or Running state can be canceled.
       * You can call the CancelTask operation to cancel a Cloud Control API task, but the tasks that have been started in the downstream Alibaba Cloud services cannot be canceled.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to cancel a specified asynchronous task.
       *
       * @description Only tasks that are in the Pending or Running state can be canceled.
       * You can call the CancelTask operation to cancel a Cloud Control API task, but the tasks that have been started in the downstream Alibaba Cloud services cannot be canceled.
       *
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const string &taskId);

      /**
       * @summary Calls this operation to create resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       *
       * @param requestPath the whole path of resource string
       * @param request CreateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResourceWithOptions(const string &requestPath, const Models::CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to create resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       *
       * @param requestPath the whole path of resource string
       * @param request CreateResourceRequest
       * @return CreateResourceResponse
       */
      Models::CreateResourceResponse createResource(const string &requestPath, const Models::CreateResourceRequest &request);

      /**
       * @summary Calls this operation to delete resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       *
       * @param requestPath the whole path of resource string
       * @param tmpReq DeleteResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResourceWithOptions(const string &requestPath, const Models::DeleteResourceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to delete resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       *
       * @param requestPath the whole path of resource string
       * @param request DeleteResourceRequest
       * @return DeleteResourceResponse
       */
      Models::DeleteResourceResponse deleteResource(const string &requestPath, const Models::DeleteResourceRequest &request);

      /**
       * @summary An RFQ interface through which users can query resource prices.
       *
       * @param requestPath the whole path of resource string
       * @param tmpReq GetPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPriceResponse
       */
      Models::GetPriceResponse getPriceWithOptions(const string &requestPath, const Models::GetPriceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An RFQ interface through which users can query resource prices.
       *
       * @param requestPath the whole path of resource string
       * @param request GetPriceRequest
       * @return GetPriceResponse
       */
      Models::GetPriceResponse getPrice(const string &requestPath, const Models::GetPriceRequest &request);

      /**
       * @summary You can call the operation to obtain resource metadata.
       *
       * @param requestPath the whole path of resource string
       * @param headers GetResourceTypeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceTypeWithOptions(const string &requestPath, const Models::GetResourceTypeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the operation to obtain resource metadata.
       *
       * @param requestPath the whole path of resource string
       * @return GetResourceTypeResponse
       */
      Models::GetResourceTypeResponse getResourceType(const string &requestPath);

      /**
       * @summary You can call the operation to query resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out CloudControl API.
       * You can call this operation to query resources List and Get based on different request paths.
       *
       * @param requestPath the whole path of resource string
       * @param tmpReq GetResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResourcesWithOptions(const string &requestPath, const Models::GetResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the operation to query resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out CloudControl API.
       * You can call this operation to query resources List and Get based on different request paths.
       *
       * @param requestPath the whole path of resource string
       * @param request GetResourcesRequest
       * @return GetResourcesResponse
       */
      Models::GetResourcesResponse getResources(const string &requestPath, const Models::GetResourcesRequest &request);

      /**
       * @summary Calls this operation to query a specified asynchronous task.
       *
       * @description GET /api/v1/tasks/{taskId}.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to query a specified asynchronous task.
       *
       * @description GET /api/v1/tasks/{taskId}.
       *
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const string &taskId);

      /**
       * @summary You can call the operation to query the valid values of resource attributes, such as RegionID and ZoneId.
       *
       * @param requestPath the whole path of resource string
       * @param tmpReq ListDataSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSourcesWithOptions(const string &requestPath, const Models::ListDataSourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the operation to query the valid values of resource attributes, such as RegionID and ZoneId.
       *
       * @param requestPath the whole path of resource string
       * @param request ListDataSourcesRequest
       * @return ListDataSourcesResponse
       */
      Models::ListDataSourcesResponse listDataSources(const string &requestPath, const Models::ListDataSourcesRequest &request);

      /**
       * @summary Calls this operation to list the supported services.
       *
       * @description GET /api/v1/providers/{provider}/products.
       *
       * @param request ListProductsRequest
       * @param headers ListProductsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const string &provider, const Models::ListProductsRequest &request, const Models::ListProductsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to list the supported services.
       *
       * @description GET /api/v1/providers/{provider}/products.
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const string &provider, const Models::ListProductsRequest &request);

      /**
       * @summary Calls this operation to list the resource types of a service.
       *
       * @description GET /api/v1/providers/{provider}/products/{product}/resourceTypes.
       *
       * @param tmpReq ListResourceTypesRequest
       * @param headers ListResourceTypesHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypesWithOptions(const string &provider, const string &product, const Models::ListResourceTypesRequest &tmpReq, const Models::ListResourceTypesHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to list the resource types of a service.
       *
       * @description GET /api/v1/providers/{provider}/products/{product}/resourceTypes.
       *
       * @param request ListResourceTypesRequest
       * @return ListResourceTypesResponse
       */
      Models::ListResourceTypesResponse listResourceTypes(const string &provider, const string &product, const Models::ListResourceTypesRequest &request);

      /**
       * @summary Calls this operation to update resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       * If resources fail to be updated at any time, the Cloud Control API does not roll the resource back to the original status.
       * The resource APIs cannot be rolled back. If the API operation is partially failed to be called, you can call the GetResource operation to view the latest status of the resource. If necessary, you can call the UpdateResource or DeleteResource operation to manually compensate for the failure.
       *
       * @param requestPath the whole path of resource string
       * @param request UpdateResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResourceWithOptions(const string &requestPath, const Models::UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to update resources.
       *
       * @description You can go to [OpenAPI Explorer](https://next.api.aliyun.com/cloudcontrol) to view the documentation and try out Cloud Control API.
       * If resources fail to be updated at any time, the Cloud Control API does not roll the resource back to the original status.
       * The resource APIs cannot be rolled back. If the API operation is partially failed to be called, you can call the GetResource operation to view the latest status of the resource. If necessary, you can call the UpdateResource or DeleteResource operation to manually compensate for the failure.
       *
       * @param requestPath the whole path of resource string
       * @param request UpdateResourceRequest
       * @return UpdateResourceResponse
       */
      Models::UpdateResourceResponse updateResource(const string &requestPath, const Models::UpdateResourceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
