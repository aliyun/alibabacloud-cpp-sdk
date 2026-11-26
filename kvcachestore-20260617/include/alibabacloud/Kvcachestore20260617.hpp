// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_KVCACHESTORE20260617_HPP_
#define ALIBABACLOUD_KVCACHESTORE20260617_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Kvcachestore20260617Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Kvcachestore20260617.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Mounts multiple KVCache instances to the virtualization side.
       *
       * @description * This operation is asynchronous. A return value of Attaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query the mount records. When the record status changes to Attached, the mounting is complete.
       * * The KVCacheStore must be in the Available or InUse state to be mounted.
       *
       * @param request AttachKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKVCacheStoreResponse
       */
      Models::AttachKVCacheStoreResponse attachKVCacheStoreWithOptions(const Models::AttachKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts multiple KVCache instances to the virtualization side.
       *
       * @description * This operation is asynchronous. A return value of Attaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query the mount records. When the record status changes to Attached, the mounting is complete.
       * * The KVCacheStore must be in the Available or InUse state to be mounted.
       *
       * @param request AttachKVCacheStoreRequest
       * @return AttachKVCacheStoreResponse
       */
      Models::AttachKVCacheStoreResponse attachKVCacheStore(const Models::AttachKVCacheStoreRequest &request);

      /**
       * @summary Creates a KVCacheInstance.
       *
       * @description * This operation is asynchronous. After a successful response is returned, the KVCacheStore enters the Creating state. You can call the GetKVCacheStore or ListKVCacheStores operation to query the status of the KVCacheStore. The KVCacheStore becomes available after its status changes to Available.
       * * Use ClientToken to ensure request idempotence in case of network exceptions. If you make repeated calls with the same ClientToken and request parameters, the same KVCacheStore ID and order ID are returned. If the request parameters change, an IdempotentParameterMismatch error is returned.
       * * Creating a KVCacheStore synchronously generates an order. The operation returns an OrderId. You can view the order in the Expenses and Costs console. For more information, see View and manage orders.
       *
       * @param request CreateKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKVCacheStoreResponse
       */
      Models::CreateKVCacheStoreResponse createKVCacheStoreWithOptions(const Models::CreateKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a KVCacheInstance.
       *
       * @description * This operation is asynchronous. After a successful response is returned, the KVCacheStore enters the Creating state. You can call the GetKVCacheStore or ListKVCacheStores operation to query the status of the KVCacheStore. The KVCacheStore becomes available after its status changes to Available.
       * * Use ClientToken to ensure request idempotence in case of network exceptions. If you make repeated calls with the same ClientToken and request parameters, the same KVCacheStore ID and order ID are returned. If the request parameters change, an IdempotentParameterMismatch error is returned.
       * * Creating a KVCacheStore synchronously generates an order. The operation returns an OrderId. You can view the order in the Expenses and Costs console. For more information, see View and manage orders.
       *
       * @param request CreateKVCacheStoreRequest
       * @return CreateKVCacheStoreResponse
       */
      Models::CreateKVCacheStoreResponse createKVCacheStore(const Models::CreateKVCacheStoreRequest &request);

      /**
       * @summary Deletes a KVCacheInstance instance.
       *
       * @description * The delete operation is irreversible. Data in the KVCacheStore will be cleared and cannot be recovered. Proceed with caution.
       * * Billing stops after the deletion process starts.
       * * The KVCacheStore to be deleted cannot be in the Creating state.
       * * The KVCacheStore to be deleted cannot have mount records in the Attaching or Attached state.
       *
       * @param request DeleteKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKVCacheStoreResponse
       */
      Models::DeleteKVCacheStoreResponse deleteKVCacheStoreWithOptions(const Models::DeleteKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a KVCacheInstance instance.
       *
       * @description * The delete operation is irreversible. Data in the KVCacheStore will be cleared and cannot be recovered. Proceed with caution.
       * * Billing stops after the deletion process starts.
       * * The KVCacheStore to be deleted cannot be in the Creating state.
       * * The KVCacheStore to be deleted cannot have mount records in the Attaching or Attached state.
       *
       * @param request DeleteKVCacheStoreRequest
       * @return DeleteKVCacheStoreResponse
       */
      Models::DeleteKVCacheStoreResponse deleteKVCacheStore(const Models::DeleteKVCacheStoreRequest &request);

      /**
       * @summary Queries the regions where KVCacheStore is available.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where KVCacheStore is available.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the available zones for KVCacheStore in a specified region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available zones for KVCacheStore in a specified region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Unmounts multiple KVCache instances from the virtualization stack.
       *
       * @description * This operation is asynchronous. A return value of Detaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query mount records. If no record is found for the specified KvcsId and VscId, the unmount operation is complete.
       *
       * @param request DetachKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKVCacheStoreResponse
       */
      Models::DetachKVCacheStoreResponse detachKVCacheStoreWithOptions(const Models::DetachKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmounts multiple KVCache instances from the virtualization stack.
       *
       * @description * This operation is asynchronous. A return value of Detaching indicates that the request is accepted. Call ListKVCacheStoreAttachInfo to query mount records. If no record is found for the specified KvcsId and VscId, the unmount operation is complete.
       *
       * @param request DetachKVCacheStoreRequest
       * @return DetachKVCacheStoreResponse
       */
      Models::DetachKVCacheStoreResponse detachKVCacheStore(const Models::DetachKVCacheStoreRequest &request);

      /**
       * @summary Queries the details of a KvCacheStore instance.
       *
       * @param request GetKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKVCacheStoreResponse
       */
      Models::GetKVCacheStoreResponse getKVCacheStoreWithOptions(const Models::GetKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a KvCacheStore instance.
       *
       * @param request GetKVCacheStoreRequest
       * @return GetKVCacheStoreResponse
       */
      Models::GetKVCacheStoreResponse getKVCacheStore(const Models::GetKVCacheStoreRequest &request);

      /**
       * @summary Queries the attachment information of multiple KVCache instances.
       *
       * @description * This operation has no status restrictions on KVCacheStore. If a KVCacheStore is in the Creating state, an empty list is returned.
       * * A KVCacheStore can be attached to multiple VSCs. Multiple attachment records may be returned for each KVCacheStore.
       * * This operation supports batch queries. You can query up to 100 KVCacheStores in a single request.
       * * This operation supports page number-based pagination (PageNumber and PageSize) and cursor-based pagination (NextToken and MaxResults). If both sets of pagination parameters are specified, cursor-based pagination takes precedence.
       *
       * @param request ListKVCacheStoreAttachInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKVCacheStoreAttachInfoResponse
       */
      Models::ListKVCacheStoreAttachInfoResponse listKVCacheStoreAttachInfoWithOptions(const Models::ListKVCacheStoreAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attachment information of multiple KVCache instances.
       *
       * @description * This operation has no status restrictions on KVCacheStore. If a KVCacheStore is in the Creating state, an empty list is returned.
       * * A KVCacheStore can be attached to multiple VSCs. Multiple attachment records may be returned for each KVCacheStore.
       * * This operation supports batch queries. You can query up to 100 KVCacheStores in a single request.
       * * This operation supports page number-based pagination (PageNumber and PageSize) and cursor-based pagination (NextToken and MaxResults). If both sets of pagination parameters are specified, cursor-based pagination takes precedence.
       *
       * @param request ListKVCacheStoreAttachInfoRequest
       * @return ListKVCacheStoreAttachInfoResponse
       */
      Models::ListKVCacheStoreAttachInfoResponse listKVCacheStoreAttachInfo(const Models::ListKVCacheStoreAttachInfoRequest &request);

      /**
       * @summary Queries the list of available HpnZones for a specified KVCacheStore instance.
       *
       * @description * This operation queries available HpnZones for a KVCacheStore instance. Use this operation to query optional HPN cluster IDs before you scale out or migrate a KVCacheStore instance.
       *
       * @param request ListKVCacheStoreAvailableHpnZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKVCacheStoreAvailableHpnZonesResponse
       */
      Models::ListKVCacheStoreAvailableHpnZonesResponse listKVCacheStoreAvailableHpnZonesWithOptions(const Models::ListKVCacheStoreAvailableHpnZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available HpnZones for a specified KVCacheStore instance.
       *
       * @description * This operation queries available HpnZones for a KVCacheStore instance. Use this operation to query optional HPN cluster IDs before you scale out or migrate a KVCacheStore instance.
       *
       * @param request ListKVCacheStoreAvailableHpnZonesRequest
       * @return ListKVCacheStoreAvailableHpnZonesResponse
       */
      Models::ListKVCacheStoreAvailableHpnZonesResponse listKVCacheStoreAvailableHpnZones(const Models::ListKVCacheStoreAvailableHpnZonesRequest &request);

      /**
       * @summary Queries the available VSC resources associated with a specified KVCacheStore instance.
       *
       * @param request ListKVCacheStoreAvailableVscsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKVCacheStoreAvailableVscsResponse
       */
      Models::ListKVCacheStoreAvailableVscsResponse listKVCacheStoreAvailableVscsWithOptions(const Models::ListKVCacheStoreAvailableVscsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available VSC resources associated with a specified KVCacheStore instance.
       *
       * @param request ListKVCacheStoreAvailableVscsRequest
       * @return ListKVCacheStoreAvailableVscsResponse
       */
      Models::ListKVCacheStoreAvailableVscsResponse listKVCacheStoreAvailableVscs(const Models::ListKVCacheStoreAvailableVscsRequest &request);

      /**
       * @summary Queries a list of KVCache instances.
       *
       * @description * Supports two pagination methods: page number pagination (PageNumber + PageSize) and cursor pagination (NextToken + MaxResults). If both are provided, page number pagination takes precedence.
       *
       * @param request ListKVCacheStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKVCacheStoresResponse
       */
      Models::ListKVCacheStoresResponse listKVCacheStoresWithOptions(const Models::ListKVCacheStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of KVCache instances.
       *
       * @description * Supports two pagination methods: page number pagination (PageNumber + PageSize) and cursor pagination (NextToken + MaxResults). If both are provided, page number pagination takes precedence.
       *
       * @param request ListKVCacheStoresRequest
       * @return ListKVCacheStoresResponse
       */
      Models::ListKVCacheStoresResponse listKVCacheStores(const Models::ListKVCacheStoresRequest &request);

      /**
       * @summary Modifies the attributes of a KVCacheStore.
       *
       * @description * You can modify the Name, Description, and Capacity. The cluster ID (HpnZone) cannot be modified after creation.
       * * Modifying the Capacity triggers a specification change order, and the API returns an OrderId. Modifying only the Name or Description does not generate an order.
       *
       * @param request UpdateKVCacheStoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKVCacheStoreResponse
       */
      Models::UpdateKVCacheStoreResponse updateKVCacheStoreWithOptions(const Models::UpdateKVCacheStoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a KVCacheStore.
       *
       * @description * You can modify the Name, Description, and Capacity. The cluster ID (HpnZone) cannot be modified after creation.
       * * Modifying the Capacity triggers a specification change order, and the API returns an OrderId. Modifying only the Name or Description does not generate an order.
       *
       * @param request UpdateKVCacheStoreRequest
       * @return UpdateKVCacheStoreResponse
       */
      Models::UpdateKVCacheStoreResponse updateKVCacheStore(const Models::UpdateKVCacheStoreRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
