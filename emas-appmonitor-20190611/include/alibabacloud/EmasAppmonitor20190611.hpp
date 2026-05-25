// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EMASAPPMONITOR20190611_HPP_
#define ALIBABACLOUD_EMASAPPMONITOR20190611_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EmasAppmonitor20190611Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EmasAppmonitor20190611.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary CreateTlogTask
       *
       * @param request CreateTlogTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTlogTaskResponse
       */
      Models::CreateTlogTaskResponse createTlogTaskWithOptions(const Models::CreateTlogTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateTlogTask
       *
       * @param request CreateTlogTaskRequest
       * @return CreateTlogTaskResponse
       */
      Models::CreateTlogTaskResponse createTlogTask(const Models::CreateTlogTaskRequest &request);

      /**
       * @summary 获取错误事件详情
       *
       * @param request GetErrorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErrorResponse
       */
      Models::GetErrorResponse getErrorWithOptions(const Models::GetErrorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取错误事件详情
       *
       * @param request GetErrorRequest
       * @return GetErrorResponse
       */
      Models::GetErrorResponse getError(const Models::GetErrorRequest &request);

      /**
       * @summary 获取某一聚合错误下所有的错误事件列表
       *
       * @param tmpReq GetErrorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErrorsResponse
       */
      Models::GetErrorsResponse getErrorsWithOptions(const Models::GetErrorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取某一聚合错误下所有的错误事件列表
       *
       * @param request GetErrorsRequest
       * @return GetErrorsResponse
       */
      Models::GetErrorsResponse getErrors(const Models::GetErrorsRequest &request);

      /**
       * @summary 获取聚合错误详情
       *
       * @param tmpReq GetIssueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIssueResponse
       */
      Models::GetIssueResponse getIssueWithOptions(const Models::GetIssueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取聚合错误详情
       *
       * @param request GetIssueRequest
       * @return GetIssueResponse
       */
      Models::GetIssueResponse getIssue(const Models::GetIssueRequest &request);

      /**
       * @summary 获取聚合错误列表
       *
       * @param tmpReq GetIssuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIssuesResponse
       */
      Models::GetIssuesResponse getIssuesWithOptions(const Models::GetIssuesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取聚合错误列表
       *
       * @param request GetIssuesRequest
       * @return GetIssuesResponse
       */
      Models::GetIssuesResponse getIssues(const Models::GetIssuesRequest &request);

      /**
       * @summary 获取符号表文件列表
       *
       * @param request GetSymbolicFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSymbolicFilesResponse
       */
      Models::GetSymbolicFilesResponse getSymbolicFilesWithOptions(const Models::GetSymbolicFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取符号表文件列表
       *
       * @param request GetSymbolicFilesRequest
       * @return GetSymbolicFilesResponse
       */
      Models::GetSymbolicFilesResponse getSymbolicFiles(const Models::GetSymbolicFilesRequest &request);

      /**
       * @summary GetTlogCollectList
       *
       * @param request GetTlogCollectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlogCollectListResponse
       */
      Models::GetTlogCollectListResponse getTlogCollectListWithOptions(const Models::GetTlogCollectListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTlogCollectList
       *
       * @param request GetTlogCollectListRequest
       * @return GetTlogCollectListResponse
       */
      Models::GetTlogCollectListResponse getTlogCollectList(const Models::GetTlogCollectListRequest &request);

      /**
       * @summary TlogDeviceInfo
       *
       * @param request GetTlogDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlogDeviceInfoResponse
       */
      Models::GetTlogDeviceInfoResponse getTlogDeviceInfoWithOptions(const Models::GetTlogDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TlogDeviceInfo
       *
       * @param request GetTlogDeviceInfoRequest
       * @return GetTlogDeviceInfoResponse
       */
      Models::GetTlogDeviceInfoResponse getTlogDeviceInfo(const Models::GetTlogDeviceInfoRequest &request);

      /**
       * @summary GetTlogDeviceList
       *
       * @param request GetTlogDeviceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlogDeviceListResponse
       */
      Models::GetTlogDeviceListResponse getTlogDeviceListWithOptions(const Models::GetTlogDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTlogDeviceList
       *
       * @param request GetTlogDeviceListRequest
       * @return GetTlogDeviceListResponse
       */
      Models::GetTlogDeviceListResponse getTlogDeviceList(const Models::GetTlogDeviceListRequest &request);

      /**
       * @summary GetTlogTaskCollections
       *
       * @param request GetTlogTaskCollectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlogTaskCollectionsResponse
       */
      Models::GetTlogTaskCollectionsResponse getTlogTaskCollectionsWithOptions(const Models::GetTlogTaskCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTlogTaskCollections
       *
       * @param request GetTlogTaskCollectionsRequest
       * @return GetTlogTaskCollectionsResponse
       */
      Models::GetTlogTaskCollectionsResponse getTlogTaskCollections(const Models::GetTlogTaskCollectionsRequest &request);

      /**
       * @summary GetTlogTaskInfo
       *
       * @param request GetTlogTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlogTaskInfoResponse
       */
      Models::GetTlogTaskInfoResponse getTlogTaskInfoWithOptions(const Models::GetTlogTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTlogTaskInfo
       *
       * @param request GetTlogTaskInfoRequest
       * @return GetTlogTaskInfoResponse
       */
      Models::GetTlogTaskInfoResponse getTlogTaskInfo(const Models::GetTlogTaskInfoRequest &request);

      /**
       * @summary RequestUploadToken
       *
       * @param request RequestUploadTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestUploadTokenResponse
       */
      Models::RequestUploadTokenResponse requestUploadTokenWithOptions(const Models::RequestUploadTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RequestUploadToken
       *
       * @param request RequestUploadTokenRequest
       * @return RequestUploadTokenResponse
       */
      Models::RequestUploadTokenResponse requestUploadToken(const Models::RequestUploadTokenRequest &request);

      /**
       * @summary SearchTlog
       *
       * @param request SearchTlogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchTlogResponse
       */
      Models::SearchTlogResponse searchTlogWithOptions(const Models::SearchTlogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SearchTlog
       *
       * @param request SearchTlogRequest
       * @return SearchTlogResponse
       */
      Models::SearchTlogResponse searchTlog(const Models::SearchTlogRequest &request);

      /**
       * @summary SubmitSymbolic
       *
       * @param request SubmitSymbolicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSymbolicResponse
       */
      Models::SubmitSymbolicResponse submitSymbolicWithOptions(const Models::SubmitSymbolicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SubmitSymbolic
       *
       * @param request SubmitSymbolicRequest
       * @return SubmitSymbolicResponse
       */
      Models::SubmitSymbolicResponse submitSymbolic(const Models::SubmitSymbolicRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
