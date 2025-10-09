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
