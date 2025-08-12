// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CMS20240330_HPP_
#define ALIBABACLOUD_CMS20240330_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20240330Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cms20240330.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建EntityStore相关存储
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建EntityStore相关存储
       *
       * @return CreateEntityStoreResponse
       */
      Models::CreateEntityStoreResponse createEntityStore(const string &workspaceName);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstanceWithOptions(const Models::CreatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Prometheus监控实例
       *
       * @param request CreatePrometheusInstanceRequest
       * @return CreatePrometheusInstanceResponse
       */
      Models::CreatePrometheusInstanceResponse createPrometheusInstance(const Models::CreatePrometheusInstanceRequest &request);

      /**
       * @summary 创建Service
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const string &workspace, const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Service
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const string &workspace, const Models::CreateServiceRequest &request);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary 创建Umodel配置
       *
       * @param request CreateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodelWithOptions(const string &workspace, const Models::CreateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Umodel配置
       *
       * @param request CreateUmodelRequest
       * @return CreateUmodelResponse
       */
      Models::CreateUmodelResponse createUmodel(const string &workspace, const Models::CreateUmodelRequest &request);

      /**
       * @summary 删除EntityStore相关存储
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除EntityStore相关存储
       *
       * @return DeleteEntityStoreResponse
       */
      Models::DeleteEntityStoreResponse deleteEntityStore(const string &workspaceName);

      /**
       * @summary 删除Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Service
       *
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &workspace, const string &serviceId);

      /**
       * @summary 删除Umodel配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Umodel配置信息
       *
       * @return DeleteUmodelResponse
       */
      Models::DeleteUmodelResponse deleteUmodel(const string &workspace);

      /**
       * @summary 删除 Umodel Elements
       *
       * @param request DeleteUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelDataWithOptions(const string &workspace, const Models::DeleteUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Umodel Elements
       *
       * @param request DeleteUmodelDataRequest
       * @return DeleteUmodelDataResponse
       */
      Models::DeleteUmodelDataResponse deleteUmodelData(const string &workspace, const Models::DeleteUmodelDataRequest &request);

      /**
       * @summary 删除工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作空间
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceName);

      /**
       * @summary 获取EntityStore相关存储信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取EntityStore相关存储信息
       *
       * @return GetEntityStoreResponse
       */
      Models::GetEntityStoreResponse getEntityStore(const string &workspaceName);

      /**
       * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
       *
       * @param request GetEntityStoreDataRequest
       * @param headers GetEntityStoreDataHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreDataWithOptions(const string &workspace, const Models::GetEntityStoreDataRequest &request, const Models::GetEntityStoreDataHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
       *
       * @param request GetEntityStoreDataRequest
       * @return GetEntityStoreDataResponse
       */
      Models::GetEntityStoreDataResponse getEntityStoreData(const string &workspace, const Models::GetEntityStoreDataRequest &request);

      /**
       * @summary 查询 Service
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Service
       *
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &workspace, const string &serviceId);

      /**
       * @summary 获取应用可观测实例
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservabilityWithOptions(const string &workspace, const string &type, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用可观测实例
       *
       * @return GetServiceObservabilityResponse
       */
      Models::GetServiceObservabilityResponse getServiceObservability(const string &workspace, const string &type);

      /**
       * @summary 获取Umodel配置信息
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Umodel配置信息
       *
       * @return GetUmodelResponse
       */
      Models::GetUmodelResponse getUmodel(const string &workspace);

      /**
       * @summary 获取相关联的 Umodel 图数据
       *
       * @param request GetUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelDataWithOptions(const string &workspace, const Models::GetUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取相关联的 Umodel 图数据
       *
       * @param request GetUmodelDataRequest
       * @return GetUmodelDataResponse
       */
      Models::GetUmodelDataResponse getUmodelData(const string &workspace, const Models::GetUmodelDataRequest &request);

      /**
       * @summary 获取工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间
       *
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceName);

      /**
       * @summary 查询告警动作
       *
       * @param tmpReq ListAlertActionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActionsWithOptions(const Models::ListAlertActionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询告警动作
       *
       * @param request ListAlertActionsRequest
       * @return ListAlertActionsResponse
       */
      Models::ListAlertActionsResponse listAlertActions(const Models::ListAlertActionsRequest &request);

      /**
       * @summary 列出资源Service
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const string &workspace, const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源Service
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const string &workspace, const Models::ListServicesRequest &request);

      /**
       * @summary 获取工作空间列表
       *
       * @param tmpReq ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间列表
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 创建工作空间
       *
       * @param request PutWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspaceWithOptions(const string &workspaceName, const Models::PutWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作空间
       *
       * @param request PutWorkspaceRequest
       * @return PutWorkspaceResponse
       */
      Models::PutWorkspaceResponse putWorkspace(const string &workspaceName, const Models::PutWorkspaceRequest &request);

      /**
       * @summary 更新UpdateService
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateService
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &workspace, const string &serviceId, const Models::UpdateServiceRequest &request);

      /**
       * @summary 更新Umodel配置信息
       *
       * @param request UpdateUmodelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodelWithOptions(const string &workspace, const Models::UpdateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Umodel配置信息
       *
       * @param request UpdateUmodelRequest
       * @return UpdateUmodelResponse
       */
      Models::UpdateUmodelResponse updateUmodel(const string &workspace, const Models::UpdateUmodelRequest &request);

      /**
       * @summary 写入 Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelDataWithOptions(const string &workspace, const Models::UpsertUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 写入 Umodel Elements
       *
       * @param request UpsertUmodelDataRequest
       * @return UpsertUmodelDataResponse
       */
      Models::UpsertUmodelDataResponse upsertUmodelData(const string &workspace, const Models::UpsertUmodelDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
