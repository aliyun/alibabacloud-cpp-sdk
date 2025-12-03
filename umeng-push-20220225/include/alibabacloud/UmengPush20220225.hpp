// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_UMENGPUSH20220225_HPP_
#define ALIBABACLOUD_UMENGPUSH20220225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/UmengPush20220225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/UmengPush20220225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 根据消息ID取消发送
       *
       * @param request CancelByMsgIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelByMsgIdResponse
       */
      Models::CancelByMsgIdResponse cancelByMsgIdWithOptions(const Models::CancelByMsgIdRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据消息ID取消发送
       *
       * @param request CancelByMsgIdRequest
       * @return CancelByMsgIdResponse
       */
      Models::CancelByMsgIdResponse cancelByMsgId(const Models::CancelByMsgIdRequest &request);

      /**
       * @summary 消息状态查询
       *
       * @param request QueryMsgStatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMsgStatResponse
       */
      Models::QueryMsgStatResponse queryMsgStatWithOptions(const Models::QueryMsgStatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 消息状态查询
       *
       * @param request QueryMsgStatRequest
       * @return QueryMsgStatResponse
       */
      Models::QueryMsgStatResponse queryMsgStat(const Models::QueryMsgStatRequest &request);

      /**
       * @summary 指定别名发送
       *
       * @param tmpReq SendByAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByAliasResponse
       */
      Models::SendByAliasResponse sendByAliasWithOptions(const Models::SendByAliasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定别名发送
       *
       * @param request SendByAliasRequest
       * @return SendByAliasResponse
       */
      Models::SendByAliasResponse sendByAlias(const Models::SendByAliasRequest &request);

      /**
       * @summary 指定别名文件发送
       *
       * @param tmpReq SendByAliasFileIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByAliasFileIdResponse
       */
      Models::SendByAliasFileIdResponse sendByAliasFileIdWithOptions(const Models::SendByAliasFileIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定别名文件发送
       *
       * @param request SendByAliasFileIdRequest
       * @return SendByAliasFileIdResponse
       */
      Models::SendByAliasFileIdResponse sendByAliasFileId(const Models::SendByAliasFileIdRequest &request);

      /**
       * @summary 广播
       *
       * @param tmpReq SendByAppRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByAppResponse
       */
      Models::SendByAppResponse sendByAppWithOptions(const Models::SendByAppRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 广播
       *
       * @param request SendByAppRequest
       * @return SendByAppResponse
       */
      Models::SendByAppResponse sendByApp(const Models::SendByAppRequest &request);

      /**
       * @summary 指定设备发送
       *
       * @param tmpReq SendByDeviceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByDeviceResponse
       */
      Models::SendByDeviceResponse sendByDeviceWithOptions(const Models::SendByDeviceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定设备发送
       *
       * @param request SendByDeviceRequest
       * @return SendByDeviceResponse
       */
      Models::SendByDeviceResponse sendByDevice(const Models::SendByDeviceRequest &request);

      /**
       * @summary 指定设备文件发送
       *
       * @param tmpReq SendByDeviceFileIdRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByDeviceFileIdResponse
       */
      Models::SendByDeviceFileIdResponse sendByDeviceFileIdWithOptions(const Models::SendByDeviceFileIdRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定设备文件发送
       *
       * @param request SendByDeviceFileIdRequest
       * @return SendByDeviceFileIdResponse
       */
      Models::SendByDeviceFileIdResponse sendByDeviceFileId(const Models::SendByDeviceFileIdRequest &request);

      /**
       * @summary 根据筛选条件发送
       *
       * @param tmpReq SendByFilterRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendByFilterResponse
       */
      Models::SendByFilterResponse sendByFilterWithOptions(const Models::SendByFilterRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据筛选条件发送
       *
       * @param request SendByFilterRequest
       * @return SendByFilterResponse
       */
      Models::SendByFilterResponse sendByFilter(const Models::SendByFilterRequest &request);

      /**
       * @summary 上传设备列表创建设备文件
       *
       * @param request UploadDeviceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadDeviceResponse
       */
      Models::UploadDeviceResponse uploadDeviceWithOptions(const Models::UploadDeviceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传设备列表创建设备文件
       *
       * @param request UploadDeviceRequest
       * @return UploadDeviceResponse
       */
      Models::UploadDeviceResponse uploadDevice(const Models::UploadDeviceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
