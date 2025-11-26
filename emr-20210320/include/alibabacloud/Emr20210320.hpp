// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EMR20210320_HPP_
#define ALIBABACLOUD_EMR20210320_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Emr20210320Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Emr20210320.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a predefined API operation template. The template contains information about an API operation, including the basic structure, request method, URL path, request parameters, and response format.
       *
       * @param request CreateApiTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiTemplateResponse
       */
      Models::CreateApiTemplateResponse createApiTemplateWithOptions(const Models::CreateApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a predefined API operation template. The template contains information about an API operation, including the basic structure, request method, URL path, request parameters, and response format.
       *
       * @param request CreateApiTemplateRequest
       * @return CreateApiTemplateResponse
       */
      Models::CreateApiTemplateResponse createApiTemplate(const Models::CreateApiTemplateRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription cluster.
       *
       * @param request CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription cluster.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a node group.
       *
       * @description 创建节点组。
       *
       * @param request CreateNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNodeGroupResponse
       */
      Models::CreateNodeGroupResponse createNodeGroupWithOptions(const Models::CreateNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node group.
       *
       * @description 创建节点组。
       *
       * @param request CreateNodeGroupRequest
       * @return CreateNodeGroupResponse
       */
      Models::CreateNodeGroupResponse createNodeGroup(const Models::CreateNodeGroupRequest &request);

      /**
       * @summary Adds a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param request CreateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScriptWithOptions(const Models::CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param request CreateScriptRequest
       * @return CreateScriptResponse
       */
      Models::CreateScriptResponse createScript(const Models::CreateScriptRequest &request);

      /**
       * @summary Creates multiple users at a time.
       *
       * @description You can call this operation to create multiple users at a time.
       *
       * @param request CreateUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsersWithOptions(const Models::CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple users at a time.
       *
       * @description You can call this operation to create multiple users at a time.
       *
       * @param request CreateUsersRequest
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsers(const Models::CreateUsersRequest &request);

      /**
       * @summary Performs a scale-out operation on the target node group.
       *
       * @param request DecreaseNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecreaseNodesResponse
       */
      Models::DecreaseNodesResponse decreaseNodesWithOptions(const Models::DecreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a scale-out operation on the target node group.
       *
       * @param request DecreaseNodesRequest
       * @return DecreaseNodesResponse
       */
      Models::DecreaseNodesResponse decreaseNodes(const Models::DecreaseNodesRequest &request);

      /**
       * @summary Deletes an API operation template.
       *
       * @param request DeleteApiTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiTemplateResponse
       */
      Models::DeleteApiTemplateResponse deleteApiTemplateWithOptions(const Models::DeleteApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API operation template.
       *
       * @param request DeleteApiTemplateRequest
       * @return DeleteApiTemplateResponse
       */
      Models::DeleteApiTemplateResponse deleteApiTemplate(const Models::DeleteApiTemplateRequest &request);

      /**
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param request DeleteScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScriptWithOptions(const Models::DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param request DeleteScriptRequest
       * @return DeleteScriptResponse
       */
      Models::DeleteScriptResponse deleteScript(const Models::DeleteScriptRequest &request);

      /**
       * @summary Deletes multiple users at a time.
       *
       * @description Deletes multiple users at a time.
       *
       * @param tmpReq DeleteUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsersWithOptions(const Models::DeleteUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple users at a time.
       *
       * @description Deletes multiple users at a time.
       *
       * @param request DeleteUsersRequest
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsers(const Models::DeleteUsersRequest &request);

      /**
       * @summary 导出应用服务配置
       *
       * @param request ExportApplicationConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportApplicationConfigsResponse
       */
      Models::ExportApplicationConfigsResponse exportApplicationConfigsWithOptions(const Models::ExportApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出应用服务配置
       *
       * @param request ExportApplicationConfigsRequest
       * @return ExportApplicationConfigsResponse
       */
      Models::ExportApplicationConfigsResponse exportApplicationConfigs(const Models::ExportApplicationConfigsRequest &request);

      /**
       * @summary Queries the detailed configuration information about an API operation template.
       *
       * @param request GetApiTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiTemplateResponse
       */
      Models::GetApiTemplateResponse getApiTemplateWithOptions(const Models::GetApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration information about an API operation template.
       *
       * @param request GetApiTemplateRequest
       * @return GetApiTemplateResponse
       */
      Models::GetApiTemplateResponse getApiTemplate(const Models::GetApiTemplateRequest &request);

      /**
       * @summary Retrieves the details of an application.
       *
       * @description 查询应用详情。
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an application.
       *
       * @description 查询应用详情。
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary Queries the information about an auto scaling activity.
       *
       * @param request GetAutoScalingActivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingActivityResponse
       */
      Models::GetAutoScalingActivityResponse getAutoScalingActivityWithOptions(const Models::GetAutoScalingActivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an auto scaling activity.
       *
       * @param request GetAutoScalingActivityRequest
       * @return GetAutoScalingActivityResponse
       */
      Models::GetAutoScalingActivityResponse getAutoScalingActivity(const Models::GetAutoScalingActivityRequest &request);

      /**
       * @summary Queries custom auto scaling rules.
       *
       * @param request GetAutoScalingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingPolicyResponse
       */
      Models::GetAutoScalingPolicyResponse getAutoScalingPolicyWithOptions(const Models::GetAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom auto scaling rules.
       *
       * @param request GetAutoScalingPolicyRequest
       * @return GetAutoScalingPolicyResponse
       */
      Models::GetAutoScalingPolicyResponse getAutoScalingPolicy(const Models::GetAutoScalingPolicyRequest &request);

      /**
       * @summary Obtains the details of a cluster.
       *
       * @param request GetClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getClusterWithOptions(const Models::GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a cluster.
       *
       * @param request GetClusterRequest
       * @return GetClusterResponse
       */
      Models::GetClusterResponse getCluster(const Models::GetClusterRequest &request);

      /**
       * @summary Obtains metadata of the E-MapReduce (EMR) cluster that you want to clone. This helps you call the CreateCluster API operation to quickly create an EMR cluster.
       *
       * @param request GetClusterCloneMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterCloneMetaResponse
       */
      Models::GetClusterCloneMetaResponse getClusterCloneMetaWithOptions(const Models::GetClusterCloneMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains metadata of the E-MapReduce (EMR) cluster that you want to clone. This helps you call the CreateCluster API operation to quickly create an EMR cluster.
       *
       * @param request GetClusterCloneMetaRequest
       * @return GetClusterCloneMetaResponse
       */
      Models::GetClusterCloneMetaResponse getClusterCloneMeta(const Models::GetClusterCloneMetaRequest &request);

      /**
       * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
       *
       * @description get one doctor analysis app
       *
       * @param request GetDoctorApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorApplicationResponse
       */
      Models::GetDoctorApplicationResponse getDoctorApplicationWithOptions(const Models::GetDoctorApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
       *
       * @description get one doctor analysis app
       *
       * @param request GetDoctorApplicationRequest
       * @return GetDoctorApplicationResponse
       */
      Models::GetDoctorApplicationResponse getDoctorApplication(const Models::GetDoctorApplicationRequest &request);

      /**
       * @summary Obtains the information about resource usage in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description get one specific luster engine queue by <type, name>
       *
       * @param request GetDoctorComputeSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorComputeSummaryResponse
       */
      Models::GetDoctorComputeSummaryResponse getDoctorComputeSummaryWithOptions(const Models::GetDoctorComputeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about resource usage in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description get one specific luster engine queue by <type, name>
       *
       * @param request GetDoctorComputeSummaryRequest
       * @return GetDoctorComputeSummaryResponse
       */
      Models::GetDoctorComputeSummaryResponse getDoctorComputeSummary(const Models::GetDoctorComputeSummaryRequest &request);

      /**
       * @summary Obtains the metrics of an HBase cluster.
       *
       * @description get Doctor HBaseCluster
       *
       * @param request GetDoctorHBaseClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHBaseClusterResponse
       */
      Models::GetDoctorHBaseClusterResponse getDoctorHBaseClusterWithOptions(const Models::GetDoctorHBaseClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the metrics of an HBase cluster.
       *
       * @description get Doctor HBaseCluster
       *
       * @param request GetDoctorHBaseClusterRequest
       * @return GetDoctorHBaseClusterResponse
       */
      Models::GetDoctorHBaseClusterResponse getDoctorHBaseCluster(const Models::GetDoctorHBaseClusterRequest &request);

      /**
       * @summary Get HBase Region information.
       *
       * @description List Doctor HBase Regions
       *
       * @param request GetDoctorHBaseRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHBaseRegionResponse
       */
      Models::GetDoctorHBaseRegionResponse getDoctorHBaseRegionWithOptions(const Models::GetDoctorHBaseRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get HBase Region information.
       *
       * @description List Doctor HBase Regions
       *
       * @param request GetDoctorHBaseRegionRequest
       * @return GetDoctorHBaseRegionResponse
       */
      Models::GetDoctorHBaseRegionResponse getDoctorHBaseRegion(const Models::GetDoctorHBaseRegionRequest &request);

      /**
       * @summary Obtains the information about an HBase region server.
       *
       * @description get Doctor HBaseRegionServer
       *
       * @param request GetDoctorHBaseRegionServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHBaseRegionServerResponse
       */
      Models::GetDoctorHBaseRegionServerResponse getDoctorHBaseRegionServerWithOptions(const Models::GetDoctorHBaseRegionServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about an HBase region server.
       *
       * @description get Doctor HBaseRegionServer
       *
       * @param request GetDoctorHBaseRegionServerRequest
       * @return GetDoctorHBaseRegionServerResponse
       */
      Models::GetDoctorHBaseRegionServerResponse getDoctorHBaseRegionServer(const Models::GetDoctorHBaseRegionServerRequest &request);

      /**
       * @summary Get HBase Table information.
       *
       * @description get Doctor HBaseTable
       *
       * @param request GetDoctorHBaseTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHBaseTableResponse
       */
      Models::GetDoctorHBaseTableResponse getDoctorHBaseTableWithOptions(const Models::GetDoctorHBaseTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get HBase Table information.
       *
       * @description get Doctor HBaseTable
       *
       * @param request GetDoctorHBaseTableRequest
       * @return GetDoctorHBaseTableResponse
       */
      Models::GetDoctorHBaseTableResponse getDoctorHBaseTable(const Models::GetDoctorHBaseTableRequest &request);

      /**
       * @summary Obtains the analysis results of the Hadoop Distributed File System (HDFS) storage resources of a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor HBaseTableRegions
       *
       * @param request GetDoctorHDFSClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHDFSClusterResponse
       */
      Models::GetDoctorHDFSClusterResponse getDoctorHDFSClusterWithOptions(const Models::GetDoctorHDFSClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of the Hadoop Distributed File System (HDFS) storage resources of a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor HBaseTableRegions
       *
       * @param request GetDoctorHDFSClusterRequest
       * @return GetDoctorHDFSClusterResponse
       */
      Models::GetDoctorHDFSClusterResponse getDoctorHDFSCluster(const Models::GetDoctorHDFSClusterRequest &request);

      /**
       * @summary Obtains the analysis results of a specific Hadoop Distributed File System (HDFS) directory of a cluster. The depth of the directory is not greater than five.
       *
       * @description get Doctor HDFSNode
       *
       * @param request GetDoctorHDFSDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHDFSDirectoryResponse
       */
      Models::GetDoctorHDFSDirectoryResponse getDoctorHDFSDirectoryWithOptions(const Models::GetDoctorHDFSDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of a specific Hadoop Distributed File System (HDFS) directory of a cluster. The depth of the directory is not greater than five.
       *
       * @description get Doctor HDFSNode
       *
       * @param request GetDoctorHDFSDirectoryRequest
       * @return GetDoctorHDFSDirectoryResponse
       */
      Models::GetDoctorHDFSDirectoryResponse getDoctorHDFSDirectory(const Models::GetDoctorHDFSDirectoryRequest &request);

      /**
       * @summary Obtains the analysis results of a Hive cluster.
       *
       * @description list Doctor Hive Cluster
       *
       * @param request GetDoctorHiveClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHiveClusterResponse
       */
      Models::GetDoctorHiveClusterResponse getDoctorHiveClusterWithOptions(const Models::GetDoctorHiveClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of a Hive cluster.
       *
       * @description list Doctor Hive Cluster
       *
       * @param request GetDoctorHiveClusterRequest
       * @return GetDoctorHiveClusterResponse
       */
      Models::GetDoctorHiveClusterResponse getDoctorHiveCluster(const Models::GetDoctorHiveClusterRequest &request);

      /**
       * @summary Obtains the analysis results of a Hive database.
       *
       * @description get Doctor Hive Database
       *
       * @param request GetDoctorHiveDatabaseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHiveDatabaseResponse
       */
      Models::GetDoctorHiveDatabaseResponse getDoctorHiveDatabaseWithOptions(const Models::GetDoctorHiveDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of a Hive database.
       *
       * @description get Doctor Hive Database
       *
       * @param request GetDoctorHiveDatabaseRequest
       * @return GetDoctorHiveDatabaseResponse
       */
      Models::GetDoctorHiveDatabaseResponse getDoctorHiveDatabase(const Models::GetDoctorHiveDatabaseRequest &request);

      /**
       * @summary Obtains the analysis results of a specific Hive table in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description get Doctor Hive Table
       *
       * @param request GetDoctorHiveTableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorHiveTableResponse
       */
      Models::GetDoctorHiveTableResponse getDoctorHiveTableWithOptions(const Models::GetDoctorHiveTableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of a specific Hive table in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description get Doctor Hive Table
       *
       * @param request GetDoctorHiveTableRequest
       * @return GetDoctorHiveTableResponse
       */
      Models::GetDoctorHiveTableResponse getDoctorHiveTable(const Models::GetDoctorHiveTableRequest &request);

      /**
       * @summary Obtains the basic running information about a job on E-MapReduce (EMR) Doctor.
       *
       * @description Get realtime job by yarn
       *
       * @param request GetDoctorJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorJobResponse
       */
      Models::GetDoctorJobResponse getDoctorJobWithOptions(const Models::GetDoctorJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the basic running information about a job on E-MapReduce (EMR) Doctor.
       *
       * @description Get realtime job by yarn
       *
       * @param request GetDoctorJobRequest
       * @return GetDoctorJobResponse
       */
      Models::GetDoctorJobResponse getDoctorJob(const Models::GetDoctorJobRequest &request);

      /**
       * @summary Obtain the analysis result report of a specified component from EMR Doctor.
       *
       * @description get specify component\\"s report analysis by EMR Doctor
       *
       * @param request GetDoctorReportComponentSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDoctorReportComponentSummaryResponse
       */
      Models::GetDoctorReportComponentSummaryResponse getDoctorReportComponentSummaryWithOptions(const Models::GetDoctorReportComponentSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the analysis result report of a specified component from EMR Doctor.
       *
       * @description get specify component\\"s report analysis by EMR Doctor
       *
       * @param request GetDoctorReportComponentSummaryRequest
       * @return GetDoctorReportComponentSummaryResponse
       */
      Models::GetDoctorReportComponentSummaryResponse getDoctorReportComponentSummary(const Models::GetDoctorReportComponentSummaryRequest &request);

      /**
       * @param request GetManagedScalingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedScalingPolicyResponse
       */
      Models::GetManagedScalingPolicyResponse getManagedScalingPolicyWithOptions(const Models::GetManagedScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetManagedScalingPolicyRequest
       * @return GetManagedScalingPolicyResponse
       */
      Models::GetManagedScalingPolicyResponse getManagedScalingPolicy(const Models::GetManagedScalingPolicyRequest &request);

      /**
       * @summary You can call this operation to obtain the details of a node group.
       *
       * @description 获取节点组详情。
       *
       * @param request GetNodeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeGroupResponse
       */
      Models::GetNodeGroupResponse getNodeGroupWithOptions(const Models::GetNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain the details of a node group.
       *
       * @description 获取节点组详情。
       *
       * @param request GetNodeGroupRequest
       * @return GetNodeGroupResponse
       */
      Models::GetNodeGroupResponse getNodeGroup(const Models::GetNodeGroupRequest &request);

      /**
       * @summary Gets the details of an asynchronous operation.
       *
       * @param request GetOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOperationResponse
       */
      Models::GetOperationResponse getOperationWithOptions(const Models::GetOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of an asynchronous operation.
       *
       * @param request GetOperationRequest
       * @return GetOperationResponse
       */
      Models::GetOperationResponse getOperation(const Models::GetOperationRequest &request);

      /**
       * @summary Scales out the node group.
       *
       * @param request IncreaseNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IncreaseNodesResponse
       */
      Models::IncreaseNodesResponse increaseNodesWithOptions(const Models::IncreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out the node group.
       *
       * @param request IncreaseNodesRequest
       * @return IncreaseNodesResponse
       */
      Models::IncreaseNodesResponse increaseNodes(const Models::IncreaseNodesRequest &request);

      /**
       * @summary Adds an EMR resource to a resource group. A resource can belong to only one resource group.
       *
       * @param request JoinResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroupWithOptions(const Models::JoinResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an EMR resource to a resource group. A resource can belong to only one resource group.
       *
       * @param request JoinResourceGroupRequest
       * @return JoinResourceGroupResponse
       */
      Models::JoinResourceGroupResponse joinResourceGroup(const Models::JoinResourceGroupRequest &request);

      /**
       * @summary 查询API模板
       *
       * @param request ListApiTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiTemplatesResponse
       */
      Models::ListApiTemplatesResponse listApiTemplatesWithOptions(const Models::ListApiTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询API模板
       *
       * @param request ListApiTemplatesRequest
       * @return ListApiTemplatesResponse
       */
      Models::ListApiTemplatesResponse listApiTemplates(const Models::ListApiTemplatesRequest &request);

      /**
       * @summary Queries the configurations of the application.
       *
       * @description 查询应用配置。
       *
       * @param request ListApplicationConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationConfigsResponse
       */
      Models::ListApplicationConfigsResponse listApplicationConfigsWithOptions(const Models::ListApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the application.
       *
       * @description 查询应用配置。
       *
       * @param request ListApplicationConfigsRequest
       * @return ListApplicationConfigsResponse
       */
      Models::ListApplicationConfigsResponse listApplicationConfigs(const Models::ListApplicationConfigsRequest &request);

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of applications.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary Queries a list of auto scaling activities.
       *
       * @param request ListAutoScalingActivitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoScalingActivitiesResponse
       */
      Models::ListAutoScalingActivitiesResponse listAutoScalingActivitiesWithOptions(const Models::ListAutoScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of auto scaling activities.
       *
       * @param request ListAutoScalingActivitiesRequest
       * @return ListAutoScalingActivitiesResponse
       */
      Models::ListAutoScalingActivitiesResponse listAutoScalingActivities(const Models::ListAutoScalingActivitiesRequest &request);

      /**
       * @summary Queries E-MapReduce (EMR) clusters.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries E-MapReduce (EMR) clusters.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Retrieves the list of component instances.
       *
       * @param request ListComponentInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentInstancesResponse
       */
      Models::ListComponentInstancesResponse listComponentInstancesWithOptions(const Models::ListComponentInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of component instances.
       *
       * @param request ListComponentInstancesRequest
       * @return ListComponentInstancesResponse
       */
      Models::ListComponentInstancesResponse listComponentInstances(const Models::ListComponentInstancesRequest &request);

      /**
       * @summary Retrieves a list of components.
       *
       * @param request ListComponentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponentsWithOptions(const Models::ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of components.
       *
       * @param request ListComponentsRequest
       * @return ListComponentsResponse
       */
      Models::ListComponentsResponse listComponents(const Models::ListComponentsRequest &request);

      /**
       * @summary Obtains the analysis results of multiple jobs on E-MapReduce (EMR) Doctor.
       *
       * @description list all doctor analysis apps
       *
       * @param request ListDoctorApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorApplicationsResponse
       */
      Models::ListDoctorApplicationsResponse listDoctorApplicationsWithOptions(const Models::ListDoctorApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of multiple jobs on E-MapReduce (EMR) Doctor.
       *
       * @description list all doctor analysis apps
       *
       * @param request ListDoctorApplicationsRequest
       * @return ListDoctorApplicationsResponse
       */
      Models::ListDoctorApplicationsResponse listDoctorApplications(const Models::ListDoctorApplicationsRequest &request);

      /**
       * @summary Obtains the information about resource usage by resource type in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor analysis result of cluster engine queue view
       *
       * @param request ListDoctorComputeSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorComputeSummaryResponse
       */
      Models::ListDoctorComputeSummaryResponse listDoctorComputeSummaryWithOptions(const Models::ListDoctorComputeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about resource usage by resource type in a cluster on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor analysis result of cluster engine queue view
       *
       * @param request ListDoctorComputeSummaryRequest
       * @return ListDoctorComputeSummaryResponse
       */
      Models::ListDoctorComputeSummaryResponse listDoctorComputeSummary(const Models::ListDoctorComputeSummaryRequest &request);

      /**
       * @summary Obtains the information about multiple HBase RegionServers at a time.
       *
       * @description list Doctor HBaseRegionServers
       *
       * @param request ListDoctorHBaseRegionServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHBaseRegionServersResponse
       */
      Models::ListDoctorHBaseRegionServersResponse listDoctorHBaseRegionServersWithOptions(const Models::ListDoctorHBaseRegionServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about multiple HBase RegionServers at a time.
       *
       * @description list Doctor HBaseRegionServers
       *
       * @param request ListDoctorHBaseRegionServersRequest
       * @return ListDoctorHBaseRegionServersResponse
       */
      Models::ListDoctorHBaseRegionServersResponse listDoctorHBaseRegionServers(const Models::ListDoctorHBaseRegionServersRequest &request);

      /**
       * @summary Obtains the information about multiple HBase tables at a time.
       *
       * @description list Doctor HBaseTables
       *
       * @param request ListDoctorHBaseTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHBaseTablesResponse
       */
      Models::ListDoctorHBaseTablesResponse listDoctorHBaseTablesWithOptions(const Models::ListDoctorHBaseTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about multiple HBase tables at a time.
       *
       * @description list Doctor HBaseTables
       *
       * @param request ListDoctorHBaseTablesRequest
       * @return ListDoctorHBaseTablesResponse
       */
      Models::ListDoctorHBaseTablesResponse listDoctorHBaseTables(const Models::ListDoctorHBaseTablesRequest &request);

      /**
       * @description list Doctor HDFSNodes
       *
       * @param request ListDoctorHDFSDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHDFSDirectoriesResponse
       */
      Models::ListDoctorHDFSDirectoriesResponse listDoctorHDFSDirectoriesWithOptions(const Models::ListDoctorHDFSDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description list Doctor HDFSNodes
       *
       * @param request ListDoctorHDFSDirectoriesRequest
       * @return ListDoctorHDFSDirectoriesResponse
       */
      Models::ListDoctorHDFSDirectoriesResponse listDoctorHDFSDirectories(const Models::ListDoctorHDFSDirectoriesRequest &request);

      /**
       * @summary Obtains the analysis results of Hadoop Distributed File System (HDFS) storage resources for multiple owners or groups at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor HDFS UGIs
       *
       * @param request ListDoctorHDFSUGIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHDFSUGIResponse
       */
      Models::ListDoctorHDFSUGIResponse listDoctorHDFSUGIWithOptions(const Models::ListDoctorHDFSUGIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of Hadoop Distributed File System (HDFS) storage resources for multiple owners or groups at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor HDFS UGIs
       *
       * @param request ListDoctorHDFSUGIRequest
       * @return ListDoctorHDFSUGIResponse
       */
      Models::ListDoctorHDFSUGIResponse listDoctorHDFSUGI(const Models::ListDoctorHDFSUGIRequest &request);

      /**
       * @summary Obtains the analysis results of multiple Hive databases at a time.
       *
       * @description list Doctor Hive Databases
       *
       * @param request ListDoctorHiveDatabasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHiveDatabasesResponse
       */
      Models::ListDoctorHiveDatabasesResponse listDoctorHiveDatabasesWithOptions(const Models::ListDoctorHiveDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of multiple Hive databases at a time.
       *
       * @description list Doctor Hive Databases
       *
       * @param request ListDoctorHiveDatabasesRequest
       * @return ListDoctorHiveDatabasesResponse
       */
      Models::ListDoctorHiveDatabasesResponse listDoctorHiveDatabases(const Models::ListDoctorHiveDatabasesRequest &request);

      /**
       * @summary Obtains the analysis results of multiple Hive tables at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor Hive Tables
       *
       * @param request ListDoctorHiveTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorHiveTablesResponse
       */
      Models::ListDoctorHiveTablesResponse listDoctorHiveTablesWithOptions(const Models::ListDoctorHiveTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of multiple Hive tables at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list Doctor Hive Tables
       *
       * @param request ListDoctorHiveTablesRequest
       * @return ListDoctorHiveTablesResponse
       */
      Models::ListDoctorHiveTablesResponse listDoctorHiveTables(const Models::ListDoctorHiveTablesRequest &request);

      /**
       * @summary Obtains the basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list realtime jobs by yarn
       *
       * @param request ListDoctorJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorJobsResponse
       */
      Models::ListDoctorJobsResponse listDoctorJobsWithOptions(const Models::ListDoctorJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list realtime jobs by yarn
       *
       * @param request ListDoctorJobsRequest
       * @return ListDoctorJobsResponse
       */
      Models::ListDoctorJobsResponse listDoctorJobs(const Models::ListDoctorJobsRequest &request);

      /**
       * @summary Obtains the summary of basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list stats groupBy jobs by yarn
       *
       * @param request ListDoctorJobsStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorJobsStatsResponse
       */
      Models::ListDoctorJobsStatsResponse listDoctorJobsStatsWithOptions(const Models::ListDoctorJobsStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the summary of basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
       *
       * @description list stats groupBy jobs by yarn
       *
       * @param request ListDoctorJobsStatsRequest
       * @return ListDoctorJobsStatsResponse
       */
      Models::ListDoctorJobsStatsResponse listDoctorJobsStats(const Models::ListDoctorJobsStatsRequest &request);

      /**
       * @summary Obtains the overall analysis result reports of E-MapReduce (EMR) Doctor at a time.
       *
       * @description list all reports analysis by emr doctor
       *
       * @param request ListDoctorReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDoctorReportsResponse
       */
      Models::ListDoctorReportsResponse listDoctorReportsWithOptions(const Models::ListDoctorReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the overall analysis result reports of E-MapReduce (EMR) Doctor at a time.
       *
       * @description list all reports analysis by emr doctor
       *
       * @param request ListDoctorReportsRequest
       * @return ListDoctorReportsResponse
       */
      Models::ListDoctorReportsResponse listDoctorReports(const Models::ListDoctorReportsRequest &request);

      /**
       * @summary Lists instance types.
       *
       * @param request ListInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceTypesResponse
       */
      Models::ListInstanceTypesResponse listInstanceTypesWithOptions(const Models::ListInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists instance types.
       *
       * @param request ListInstanceTypesRequest
       * @return ListInstanceTypesResponse
       */
      Models::ListInstanceTypesResponse listInstanceTypes(const Models::ListInstanceTypesRequest &request);

      /**
       * @summary Queries the list of node groups in an EMR cluster.
       *
       * @param request ListNodeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeGroupsResponse
       */
      Models::ListNodeGroupsResponse listNodeGroupsWithOptions(const Models::ListNodeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of node groups in an EMR cluster.
       *
       * @param request ListNodeGroupsRequest
       * @return ListNodeGroupsResponse
       */
      Models::ListNodeGroupsResponse listNodeGroups(const Models::ListNodeGroupsRequest &request);

      /**
       * @summary Queries the node list of an EMR cluster.
       *
       * @param request ListNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodesWithOptions(const Models::ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the node list of an EMR cluster.
       *
       * @param request ListNodesRequest
       * @return ListNodesResponse
       */
      Models::ListNodesResponse listNodes(const Models::ListNodesRequest &request);

      /**
       * @summary Queries the major E-MapReduce (EMR) versions.
       *
       * @description 查询主版本。
       *
       * @param request ListReleaseVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersionsWithOptions(const Models::ListReleaseVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the major E-MapReduce (EMR) versions.
       *
       * @description 查询主版本。
       *
       * @param request ListReleaseVersionsRequest
       * @return ListReleaseVersionsResponse
       */
      Models::ListReleaseVersionsResponse listReleaseVersions(const Models::ListReleaseVersionsRequest &request);

      /**
       * @summary Query EMR cluster bootstrap scripts or regular scripts.
       *
       * @param request ListScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScriptsWithOptions(const Models::ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query EMR cluster bootstrap scripts or regular scripts.
       *
       * @param request ListScriptsRequest
       * @return ListScriptsResponse
       */
      Models::ListScriptsResponse listScripts(const Models::ListScriptsRequest &request);

      /**
       * @summary Queries the tags that are bound to an EMR cluster.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to an EMR cluster.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries a user.
       *
       * @description Queries a user.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a user.
       *
       * @description Queries a user.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Adds a custom auto scaling rule.
       *
       * @description You can call this operation to configure auto scaling policies.
       *
       * @param request PutAutoScalingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutAutoScalingPolicyResponse
       */
      Models::PutAutoScalingPolicyResponse putAutoScalingPolicyWithOptions(const Models::PutAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom auto scaling rule.
       *
       * @description You can call this operation to configure auto scaling policies.
       *
       * @param request PutAutoScalingPolicyRequest
       * @return PutAutoScalingPolicyResponse
       */
      Models::PutAutoScalingPolicyResponse putAutoScalingPolicy(const Models::PutAutoScalingPolicyRequest &request);

      /**
       * @param request PutManagedScalingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutManagedScalingPolicyResponse
       */
      Models::PutManagedScalingPolicyResponse putManagedScalingPolicyWithOptions(const Models::PutManagedScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PutManagedScalingPolicyRequest
       * @return PutManagedScalingPolicyResponse
       */
      Models::PutManagedScalingPolicyResponse putManagedScalingPolicy(const Models::PutManagedScalingPolicyRequest &request);

      /**
       * @summary Removes an auto scaling policy.
       *
       * @param request RemoveAutoScalingPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAutoScalingPolicyResponse
       */
      Models::RemoveAutoScalingPolicyResponse removeAutoScalingPolicyWithOptions(const Models::RemoveAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an auto scaling policy.
       *
       * @param request RemoveAutoScalingPolicyRequest
       * @return RemoveAutoScalingPolicyResponse
       */
      Models::RemoveAutoScalingPolicyResponse removeAutoScalingPolicy(const Models::RemoveAutoScalingPolicyRequest &request);

      /**
       * @param request RunApiTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunApiTemplateResponse
       */
      Models::RunApiTemplateResponse runApiTemplateWithOptions(const Models::RunApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RunApiTemplateRequest
       * @return RunApiTemplateResponse
       */
      Models::RunApiTemplateResponse runApiTemplate(const Models::RunApiTemplateRequest &request);

      /**
       * @summary Manages a service deployed in a cluster. For example, you can call this operation to start pr stop a service.
       *
       * @param request RunApplicationActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunApplicationActionResponse
       */
      Models::RunApplicationActionResponse runApplicationActionWithOptions(const Models::RunApplicationActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages a service deployed in a cluster. For example, you can call this operation to start pr stop a service.
       *
       * @param request RunApplicationActionRequest
       * @return RunApplicationActionResponse
       */
      Models::RunApplicationActionResponse runApplicationAction(const Models::RunApplicationActionRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription E-MapReduce (EMR) cluster.
       *
       * @description RunCluster is an upgraded version of CreateCluster. RunCluster uses HTTPS POST requests and supports more parameters. Complex parameters, such as parameters of the object and array types, are in the JSON format and are more friendly for users who use CLI.
       *
       * @param tmpReq RunClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunClusterResponse
       */
      Models::RunClusterResponse runClusterWithOptions(const Models::RunClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription E-MapReduce (EMR) cluster.
       *
       * @description RunCluster is an upgraded version of CreateCluster. RunCluster uses HTTPS POST requests and supports more parameters. Complex parameters, such as parameters of the object and array types, are in the JSON format and are more friendly for users who use CLI.
       *
       * @param request RunClusterRequest
       * @return RunClusterResponse
       */
      Models::RunClusterResponse runCluster(const Models::RunClusterRequest &request);

      /**
       * @summary Binds tags to a specified EMR cluster.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds tags to a specified EMR cluster.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds tags from a specified column in an EMR cluster. If the tag is not bound to other resources, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a specified column in an EMR cluster. If the tag is not bound to other resources, the tag is automatically deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an API operation template.
       *
       * @description 修改集群模板
       *
       * @param request UpdateApiTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiTemplateResponse
       */
      Models::UpdateApiTemplateResponse updateApiTemplateWithOptions(const Models::UpdateApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an API operation template.
       *
       * @description 修改集群模板
       *
       * @param request UpdateApiTemplateRequest
       * @return UpdateApiTemplateResponse
       */
      Models::UpdateApiTemplateResponse updateApiTemplate(const Models::UpdateApiTemplateRequest &request);

      /**
       * @summary Updates the application configurations.
       *
       * @param request UpdateApplicationConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationConfigsResponse
       */
      Models::UpdateApplicationConfigsResponse updateApplicationConfigsWithOptions(const Models::UpdateApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the application configurations.
       *
       * @param request UpdateApplicationConfigsRequest
       * @return UpdateApplicationConfigsResponse
       */
      Models::UpdateApplicationConfigsResponse updateApplicationConfigs(const Models::UpdateApplicationConfigsRequest &request);

      /**
       * @summary Updates cluster attributes.
       *
       * @param request UpdateClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterAttributeResponse
       */
      Models::UpdateClusterAttributeResponse updateClusterAttributeWithOptions(const Models::UpdateClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates cluster attributes.
       *
       * @param request UpdateClusterAttributeRequest
       * @return UpdateClusterAttributeResponse
       */
      Models::UpdateClusterAttributeResponse updateClusterAttribute(const Models::UpdateClusterAttributeRequest &request);

      /**
       * @param request UpdateClusterAutoRenewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterAutoRenewResponse
       */
      Models::UpdateClusterAutoRenewResponse updateClusterAutoRenewWithOptions(const Models::UpdateClusterAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateClusterAutoRenewRequest
       * @return UpdateClusterAutoRenewResponse
       */
      Models::UpdateClusterAutoRenewResponse updateClusterAutoRenew(const Models::UpdateClusterAutoRenewRequest &request);

      /**
       * @summary Updates a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param tmpReq UpdateScriptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScriptWithOptions(const Models::UpdateScriptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
       *
       * @param request UpdateScriptRequest
       * @return UpdateScriptResponse
       */
      Models::UpdateScriptResponse updateScript(const Models::UpdateScriptRequest &request);

      /**
       * @summary Updates the information about a user.
       *
       * @description Updates the information about a user.
       *
       * @param request UpdateUserAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserAttributeResponse
       */
      Models::UpdateUserAttributeResponse updateUserAttributeWithOptions(const Models::UpdateUserAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a user.
       *
       * @description Updates the information about a user.
       *
       * @param request UpdateUserAttributeRequest
       * @return UpdateUserAttributeResponse
       */
      Models::UpdateUserAttributeResponse updateUserAttribute(const Models::UpdateUserAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
