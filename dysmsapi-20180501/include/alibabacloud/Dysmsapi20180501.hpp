// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYSMSAPI20180501_HPP_
#define ALIBABACLOUD_DYSMSAPI20180501_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dysmsapi20180501Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dysmsapi20180501.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Sends a message to multiple recipients in countries or regions outside the Chinese mainland.
       *
       * @description ## Usage notes
       * *   You cannot call the BatchSendMessageToGlobe operation to send messages to the Chinese mainland.
       * *   You can call the BatchSendMessageToGlobe operation to send notifications and promotional messages to a small number of mobile phone numbers at a time. To send messages to a large number of mobile phone numbers at a time, use the mass messaging feature of the SMS console.
       * *   To ensure that messages can be sent on time, call the [SendMessageToGlobe](https://help.aliyun.com/document_detail/406238.html) operation.
       * *   In each request, you can send messages to up to 1,000 mobile phone numbers.
       *
       * @param request BatchSendMessageToGlobeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSendMessageToGlobeResponse
       */
      Models::BatchSendMessageToGlobeResponse batchSendMessageToGlobeWithOptions(const Models::BatchSendMessageToGlobeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to multiple recipients in countries or regions outside the Chinese mainland.
       *
       * @description ## Usage notes
       * *   You cannot call the BatchSendMessageToGlobe operation to send messages to the Chinese mainland.
       * *   You can call the BatchSendMessageToGlobe operation to send notifications and promotional messages to a small number of mobile phone numbers at a time. To send messages to a large number of mobile phone numbers at a time, use the mass messaging feature of the SMS console.
       * *   To ensure that messages can be sent on time, call the [SendMessageToGlobe](https://help.aliyun.com/document_detail/406238.html) operation.
       * *   In each request, you can send messages to up to 1,000 mobile phone numbers.
       *
       * @param request BatchSendMessageToGlobeRequest
       * @return BatchSendMessageToGlobeResponse
       */
      Models::BatchSendMessageToGlobeResponse batchSendMessageToGlobe(const Models::BatchSendMessageToGlobeRequest &request);

      /**
       * @summary This API, sends conversion data to the Alibaba SMS service.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       *
       * @param request ConversionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConversionDataResponse
       */
      Models::ConversionDataResponse conversionDataWithOptions(const Models::ConversionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API, sends conversion data to the Alibaba SMS service.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       *
       * @param request ConversionDataRequest
       * @return ConversionDataResponse
       */
      Models::ConversionDataResponse conversionData(const Models::ConversionDataRequest &request);

      /**
       * @summary Queries the delivery report of a message.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request QueryMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessageWithOptions(const Models::QueryMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the delivery report of a message.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second. If the number of the calls per second exceeds a limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limits when you call this operation.
       *
       * @param request QueryMessageRequest
       * @return QueryMessageResponse
       */
      Models::QueryMessageResponse queryMessage(const Models::QueryMessageRequest &request);

      /**
       * @summary Sends a message to regions outside the Chinese mainland.
       *
       * @description ### [](#)
       * The SendMessageToGlobe API operation does not support message delivery to the Chinese mainland.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 2,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendMessageToGlobeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageToGlobeResponse
       */
      Models::SendMessageToGlobeResponse sendMessageToGlobeWithOptions(const Models::SendMessageToGlobeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to regions outside the Chinese mainland.
       *
       * @description ### [](#)
       * The SendMessageToGlobe API operation does not support message delivery to the Chinese mainland.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 2,000 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
       *
       * @param request SendMessageToGlobeRequest
       * @return SendMessageToGlobeResponse
       */
      Models::SendMessageToGlobeResponse sendMessageToGlobe(const Models::SendMessageToGlobeRequest &request);

      /**
       * @summary Sends a message to the Chinese mainland by using a message template.
       *
       * @description ### Usage notes
       * You can call the SendMessageWithTemplate operation to send messages only to the Chinese mainland.
       *
       * @param request SendMessageWithTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageWithTemplateResponse
       */
      Models::SendMessageWithTemplateResponse sendMessageWithTemplateWithOptions(const Models::SendMessageWithTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message to the Chinese mainland by using a message template.
       *
       * @description ### Usage notes
       * You can call the SendMessageWithTemplate operation to send messages only to the Chinese mainland.
       *
       * @param request SendMessageWithTemplateRequest
       * @return SendMessageWithTemplateResponse
       */
      Models::SendMessageWithTemplateResponse sendMessageWithTemplate(const Models::SendMessageWithTemplateRequest &request);

      /**
       * @summary Delivers one-time password (OTP) message statuses to Alibaba Cloud, which calculates and monitors OTP conversion rates.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations:
       * >*   Call the SmsConversion operation in an asynchronous manner by configuring queues or events.
       * >*   Manually degrade your services or use a circuit breaker to automatically degrade services.
       *
       * @param request SmsConversionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmsConversionResponse
       */
      Models::SmsConversionResponse smsConversionWithOptions(const Models::SmsConversionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delivers one-time password (OTP) message statuses to Alibaba Cloud, which calculates and monitors OTP conversion rates.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations:
       * >*   Call the SmsConversion operation in an asynchronous manner by configuring queues or events.
       * >*   Manually degrade your services or use a circuit breaker to automatically degrade services.
       *
       * @param request SmsConversionRequest
       * @return SmsConversionResponse
       */
      Models::SmsConversionResponse smsConversion(const Models::SmsConversionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
