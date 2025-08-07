// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NOTIFICATIONS20241225_HPP_
#define ALIBABACLOUD_NOTIFICATIONS20241225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Notifications20241225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Notifications20241225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 方法描述：删除消息
       *
       * @param request DelMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelMessageResponse
       */
      Models::DelMessageResponse delMessageWithOptions(const Models::DelMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：删除消息
       *
       * @param request DelMessageRequest
       * @return DelMessageResponse
       */
      Models::DelMessageResponse delMessage(const Models::DelMessageRequest &request);

      /**
       * @summary 方法描述：站内信全部删除（逻辑删除）
       *
       * @param request DeleteAllMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllMessageResponse
       */
      Models::DeleteAllMessageResponse deleteAllMessageWithOptions(const Models::DeleteAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：站内信全部删除（逻辑删除）
       *
       * @param request DeleteAllMessageRequest
       * @return DeleteAllMessageResponse
       */
      Models::DeleteAllMessageResponse deleteAllMessage(const Models::DeleteAllMessageRequest &request);

      /**
       * @summary 方法描述：分类全部标记为已读，不填则全部标记
       *
       * @param request ReadAllMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadAllMessageResponse
       */
      Models::ReadAllMessageResponse readAllMessageWithOptions(const Models::ReadAllMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：分类全部标记为已读，不填则全部标记
       *
       * @param request ReadAllMessageRequest
       * @return ReadAllMessageResponse
       */
      Models::ReadAllMessageResponse readAllMessage(const Models::ReadAllMessageRequest &request);

      /**
       * @summary 方法描述：获取各分类已读消息数
       *
       * @param request ReadClassNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadClassNameResponse
       */
      Models::ReadClassNameResponse readClassNameWithOptions(const Models::ReadClassNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取各分类已读消息数
       *
       * @param request ReadClassNameRequest
       * @return ReadClassNameResponse
       */
      Models::ReadClassNameResponse readClassName(const Models::ReadClassNameRequest &request);

      /**
       * @summary 方法描述：消息标记为已读
       *
       * @param request ReadMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessageWithOptions(const Models::ReadMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：消息标记为已读
       *
       * @param request ReadMessageRequest
       * @return ReadMessageResponse
       */
      Models::ReadMessageResponse readMessage(const Models::ReadMessageRequest &request);

      /**
       * @summary 方法描述：获取消息正文
       *
       * @param request ReadMessageContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageContentResponse
       */
      Models::ReadMessageContentResponse readMessageContentWithOptions(const Models::ReadMessageContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取消息正文
       *
       * @param request ReadMessageContentRequest
       * @return ReadMessageContentResponse
       */
      Models::ReadMessageContentResponse readMessageContent(const Models::ReadMessageContentRequest &request);

      /**
       * @summary 方法描述：获取消息列表
       *
       * @param request ReadMessageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageListResponse
       */
      Models::ReadMessageListResponse readMessageListWithOptions(const Models::ReadMessageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取消息列表
       *
       * @param request ReadMessageListRequest
       * @return ReadMessageListResponse
       */
      Models::ReadMessageListResponse readMessageList(const Models::ReadMessageListRequest &request);

      /**
       * @summary 方法描述：获取未读消息总数
       *
       * @param request ReadMessageNewTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadMessageNewTotalResponse
       */
      Models::ReadMessageNewTotalResponse readMessageNewTotalWithOptions(const Models::ReadMessageNewTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取未读消息总数
       *
       * @param request ReadMessageNewTotalRequest
       * @return ReadMessageNewTotalResponse
       */
      Models::ReadMessageNewTotalResponse readMessageNewTotal(const Models::ReadMessageNewTotalRequest &request);

      /**
       * @summary 方法描述：获取各分类已读消息数
       *
       * @param request ReadNumGroupByClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadNumGroupByClassResponse
       */
      Models::ReadNumGroupByClassResponse readNumGroupByClassWithOptions(const Models::ReadNumGroupByClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取各分类已读消息数
       *
       * @param request ReadNumGroupByClassRequest
       * @return ReadNumGroupByClassResponse
       */
      Models::ReadNumGroupByClassResponse readNumGroupByClass(const Models::ReadNumGroupByClassRequest &request);

      /**
       * @summary 方法描述：获取所有分类下的信息
       *
       * @param request ReadNumGroupTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadNumGroupTotalResponse
       */
      Models::ReadNumGroupTotalResponse readNumGroupTotalWithOptions(const Models::ReadNumGroupTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 方法描述：获取所有分类下的信息
       *
       * @param request ReadNumGroupTotalRequest
       * @return ReadNumGroupTotalResponse
       */
      Models::ReadNumGroupTotalResponse readNumGroupTotal(const Models::ReadNumGroupTotalRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
