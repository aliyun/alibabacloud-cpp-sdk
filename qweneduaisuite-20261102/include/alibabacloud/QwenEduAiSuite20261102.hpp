// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QWENEDUAISUITE20261102_HPP_
#define ALIBABACLOUD_QWENEDUAISUITE20261102_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QwenEduAiSuite20261102Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QwenEduAiSuite20261102.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 开通千问教育API权限
       *
       * @description 开通千问教育API权限
       *
       * @param request ActivateQwenEduApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateQwenEduApiResponse
       */
      Models::ActivateQwenEduApiResponse activateQwenEduApiWithOptions(const Models::ActivateQwenEduApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通千问教育API权限
       *
       * @description 开通千问教育API权限
       *
       * @param request ActivateQwenEduApiRequest
       * @return ActivateQwenEduApiResponse
       */
      Models::ActivateQwenEduApiResponse activateQwenEduApi(const Models::ActivateQwenEduApiRequest &request);

      /**
       * @summary 提交单页作业图片，返回任务ID及初步检测结果。
       *
       * @description ## 请求说明
       * - 该接口用于提交单页作业图片进行批改，支持通过图片URL或Base64编码的图片数据。
       * - 提交后会立即返回任务ID、矫正图及题目检测结果，但不包含具体的批改结论。
       * - 需要通过查询接口轮询获取最终的批改结果。
       * - 支持对图片进行透视矫正，默认开启。
       * - 图片要求：支持多种格式（JPEG, PNG, GIF等），推荐体积不超过1MB，最大支持15MB（Base64编码后）。
       * - 每次请求仅处理一张图片，多张图片需分别提交。
       * - `request_id`字段建议由调用方生成并传递，以便于问题排查和对账。
       *
       * @param request CreateEduHomeworkCorrectSubmitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEduHomeworkCorrectSubmitResponse
       */
      Models::CreateEduHomeworkCorrectSubmitResponse createEduHomeworkCorrectSubmitWithOptions(const Models::CreateEduHomeworkCorrectSubmitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交单页作业图片，返回任务ID及初步检测结果。
       *
       * @description ## 请求说明
       * - 该接口用于提交单页作业图片进行批改，支持通过图片URL或Base64编码的图片数据。
       * - 提交后会立即返回任务ID、矫正图及题目检测结果，但不包含具体的批改结论。
       * - 需要通过查询接口轮询获取最终的批改结果。
       * - 支持对图片进行透视矫正，默认开启。
       * - 图片要求：支持多种格式（JPEG, PNG, GIF等），推荐体积不超过1MB，最大支持15MB（Base64编码后）。
       * - 每次请求仅处理一张图片，多张图片需分别提交。
       * - `request_id`字段建议由调用方生成并传递，以便于问题排查和对账。
       *
       * @param request CreateEduHomeworkCorrectSubmitRequest
       * @return CreateEduHomeworkCorrectSubmitResponse
       */
      Models::CreateEduHomeworkCorrectSubmitResponse createEduHomeworkCorrectSubmit(const Models::CreateEduHomeworkCorrectSubmitRequest &request);

      /**
       * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
       *
       * @description ## 请求说明
       * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
       * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
       * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
       * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
       * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
       * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
       * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
       * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
       *
       * @param tmpReq CreateEduProblemSolveRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEduProblemSolveResponse
       */
      FutureGenerator<Models::CreateEduProblemSolveResponse> createEduProblemSolveWithSSE(const Models::CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
       *
       * @description ## 请求说明
       * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
       * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
       * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
       * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
       * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
       * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
       * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
       * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
       *
       * @param tmpReq CreateEduProblemSolveRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEduProblemSolveResponse
       */
      Models::CreateEduProblemSolveResponse createEduProblemSolveWithOptions(const Models::CreateEduProblemSolveRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过图片URL或Base64编码接收题目，返回解题过程和结果。
       *
       * @description ## 请求说明
       * - 本接口支持通过单张题目图片的URL或Base64编码进行解题请求。
       * - 支持处理JPEG、JPG、PNG格式的图片，且图片大小不超过10MB，像素总数不超过260万。
       * - 请求必须携带`request_id`字段，用于链路关联和对账；建议使用UUID以保证唯一性。
       * - `Authorization`头部需包含有效的`appKey`，采用`Bearer <appKey>`格式。
       * - 接口响应为SSE流式数据，客户端应逐事件读取并解析，不得等待连接关闭后整体读取。
       * - 成功响应包括`message`（过程态全量解题快照）和`complete`（最终完整结果）两种事件类型。
       * - 错误处理分为建流前与建流后两个阶段，根据错误码及`retryable`字段决定是否重试。
       * - 客户端超时设置建议不低于3分钟，并确保代理层不会缓存SSE响应或提前关闭长连接。
       *
       * @param request CreateEduProblemSolveRequest
       * @return CreateEduProblemSolveResponse
       */
      Models::CreateEduProblemSolveResponse createEduProblemSolve(const Models::CreateEduProblemSolveRequest &request);

      /**
       * @summary 查询批改进度、增量结果、终态结果及 Token 用量
       *
       * @param request GetEduHomeworkCorrectionResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEduHomeworkCorrectionResultResponse
       */
      Models::GetEduHomeworkCorrectionResultResponse getEduHomeworkCorrectionResultWithOptions(const Models::GetEduHomeworkCorrectionResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询批改进度、增量结果、终态结果及 Token 用量
       *
       * @param request GetEduHomeworkCorrectionResultRequest
       * @return GetEduHomeworkCorrectionResultResponse
       */
      Models::GetEduHomeworkCorrectionResultResponse getEduHomeworkCorrectionResult(const Models::GetEduHomeworkCorrectionResultRequest &request);

      /**
       * @summary 千问教育API开通状态查询
       *
       * @param request GetQwenEduApiActivationStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQwenEduApiActivationStatusResponse
       */
      Models::GetQwenEduApiActivationStatusResponse getQwenEduApiActivationStatusWithOptions(const Models::GetQwenEduApiActivationStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 千问教育API开通状态查询
       *
       * @param request GetQwenEduApiActivationStatusRequest
       * @return GetQwenEduApiActivationStatusResponse
       */
      Models::GetQwenEduApiActivationStatusResponse getQwenEduApiActivationStatus(const Models::GetQwenEduApiActivationStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
