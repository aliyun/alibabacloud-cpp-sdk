// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYPLSAPI20170525_HPP_
#define ALIBABACLOUD_DYPLSAPI20170525_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dyplsapi20170525Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dyplsapi20170525.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a tracking number for a private number in the AXN binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddAxnTrackNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAxnTrackNoResponse
       */
      Models::AddAxnTrackNoResponse addAxnTrackNoWithOptions(const Models::AddAxnTrackNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a tracking number for a private number in the AXN binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddAxnTrackNoRequest
       * @return AddAxnTrackNoResponse
       */
      Models::AddAxnTrackNoResponse addAxnTrackNo(const Models::AddAxnTrackNoRequest &request);

      /**
       * @summary Adds a blacklist.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddSecretBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSecretBlacklistResponse
       */
      Models::AddSecretBlacklistResponse addSecretBlacklistWithOptions(const Models::AddSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a blacklist.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddSecretBlacklistRequest
       * @return AddSecretBlacklistResponse
       */
      Models::AddSecretBlacklistResponse addSecretBlacklist(const Models::AddSecretBlacklistRequest &request);

      /**
       * @summary 调用本接口向工作号平台请求为员工B的工作号X建立呼叫绑定（B，X，A），允许B通过X呼叫客户A
       *
       * @param request BindAXBCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAXBCallResponse
       */
      Models::BindAXBCallResponse bindAXBCallWithOptions(const Models::BindAXBCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用本接口向工作号平台请求为员工B的工作号X建立呼叫绑定（B，X，A），允许B通过X呼叫客户A
       *
       * @param request BindAXBCallRequest
       * @return BindAXBCallResponse
       */
      Models::BindAXBCallResponse bindAXBCall(const Models::BindAXBCallRequest &request);

      /**
       * @summary Adds an AXB binding.
       *
       * @description Before you add an AXB binding, we recommend that you specify role A and role B in the AXB device certificate (ProductKey, DeviceName, and DeviceSecret) in your business scenario. For example, in a taxi-hailing scenario, role A is the passenger and role B is the driver.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxbResponse
       */
      Models::BindAxbResponse bindAxbWithOptions(const Models::BindAxbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AXB binding.
       *
       * @description Before you add an AXB binding, we recommend that you specify role A and role B in the AXB device certificate (ProductKey, DeviceName, and DeviceSecret) in your business scenario. For example, in a taxi-hailing scenario, role A is the passenger and role B is the driver.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxbRequest
       * @return BindAxbResponse
       */
      Models::BindAxbResponse bindAxb(const Models::BindAxbRequest &request);

      /**
       * @summary 创建700绑定关系
       *
       * @param request BindAxb700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxb700Response
       */
      Models::BindAxb700Response bindAxb700WithOptions(const Models::BindAxb700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建700绑定关系
       *
       * @param request BindAxb700Request
       * @return BindAxb700Response
       */
      Models::BindAxb700Response bindAxb700(const Models::BindAxb700Request &request);

      /**
       * @summary 固话AxB绑定
       *
       * @param tmpReq BindAxbFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxbFixedLineResponse
       */
      Models::BindAxbFixedLineResponse bindAxbFixedLineWithOptions(const Models::BindAxbFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 固话AxB绑定
       *
       * @param request BindAxbFixedLineRequest
       * @return BindAxbFixedLineResponse
       */
      Models::BindAxbFixedLineResponse bindAxbFixedLine(const Models::BindAxbFixedLineRequest &request);

      /**
       * @summary Adds an AXG binding.
       *
       * @description An AXG protection solution can be configured to meet the requirements for grading users, limiting the scope of calls, and restricting order snatching. The letter G represents a phone number group to which you can add phone numbers as needed.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxgResponse
       */
      Models::BindAxgResponse bindAxgWithOptions(const Models::BindAxgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AXG binding.
       *
       * @description An AXG protection solution can be configured to meet the requirements for grading users, limiting the scope of calls, and restricting order snatching. The letter G represents a phone number group to which you can add phone numbers as needed.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxgRequest
       * @return BindAxgResponse
       */
      Models::BindAxgResponse bindAxg(const Models::BindAxgRequest &request);

      /**
       * @summary Adds an AXN binding.
       *
       * @description >  An AXN private number is a dedicated private number assigned to phone number A. When an N-side number is used to call phone number X, the call is forwarded to phone number A.
       *
       * @param request BindAxnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnResponse
       */
      Models::BindAxnResponse bindAxnWithOptions(const Models::BindAxnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AXN binding.
       *
       * @description >  An AXN private number is a dedicated private number assigned to phone number A. When an N-side number is used to call phone number X, the call is forwarded to phone number A.
       *
       * @param request BindAxnRequest
       * @return BindAxnResponse
       */
      Models::BindAxnResponse bindAxn(const Models::BindAxnRequest &request);

      /**
       * @summary Adds an AXN extension binding.
       *
       * @description Before you add an AXN extension binding, confirm phone number A and phone number N in the business scenario. Phone number A belongs to a customer, and phone number X is the private number assigned to the customer. When any other phone number is used to call phone number X and the extension, the call is transferred to phone number A. When phone number A is used to call phone number X, the call is transferred to the default phone number B that is specified during the phone number binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxnExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnExtensionResponse
       */
      Models::BindAxnExtensionResponse bindAxnExtensionWithOptions(const Models::BindAxnExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AXN extension binding.
       *
       * @description Before you add an AXN extension binding, confirm phone number A and phone number N in the business scenario. Phone number A belongs to a customer, and phone number X is the private number assigned to the customer. When any other phone number is used to call phone number X and the extension, the call is transferred to phone number A. When phone number A is used to call phone number X, the call is transferred to the default phone number B that is specified during the phone number binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request BindAxnExtensionRequest
       * @return BindAxnExtensionResponse
       */
      Models::BindAxnExtensionResponse bindAxnExtension(const Models::BindAxnExtensionRequest &request);

      /**
       * @summary AXN分机号-号码绑定
       *
       * @param tmpReq BindAxnExtensionFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnExtensionFixedLineResponse
       */
      Models::BindAxnExtensionFixedLineResponse bindAxnExtensionFixedLineWithOptions(const Models::BindAxnExtensionFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AXN分机号-号码绑定
       *
       * @param request BindAxnExtensionFixedLineRequest
       * @return BindAxnExtensionFixedLineResponse
       */
      Models::BindAxnExtensionFixedLineResponse bindAxnExtensionFixedLine(const Models::BindAxnExtensionFixedLineRequest &request);

      /**
       * @summary AXN模式绑定，分配X号码
       *
       * @param tmpReq BindAxnFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnFixedLineResponse
       */
      Models::BindAxnFixedLineResponse bindAxnFixedLineWithOptions(const Models::BindAxnFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AXN模式绑定，分配X号码
       *
       * @param request BindAxnFixedLineRequest
       * @return BindAxnFixedLineResponse
       */
      Models::BindAxnFixedLineResponse bindAxnFixedLine(const Models::BindAxnFixedLineRequest &request);

      /**
       * @param tmpReq BindBatchAxgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindBatchAxgResponse
       */
      Models::BindBatchAxgResponse bindBatchAxgWithOptions(const Models::BindBatchAxgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindBatchAxgRequest
       * @return BindBatchAxgResponse
       */
      Models::BindBatchAxgResponse bindBatchAxg(const Models::BindBatchAxgRequest &request);

      /**
       * @summary 创建700Gxb绑定关系
       *
       * @param request BindGxb700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindGxb700Response
       */
      Models::BindGxb700Response bindGxb700WithOptions(const Models::BindGxb700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建700Gxb绑定关系
       *
       * @param request BindGxb700Request
       * @return BindGxb700Response
       */
      Models::BindGxb700Response bindGxb700(const Models::BindGxb700Request &request);

      /**
       * @summary 平台指定工作号X 和员工号B建立关联，完成X 实名认证，绑定生效后，所有X 的呼叫都会转接到B
       *
       * @param request BindXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindXBResponse
       */
      Models::BindXBResponse bindXBWithOptions(const Models::BindXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 平台指定工作号X 和员工号B建立关联，完成X 实名认证，绑定生效后，所有X 的呼叫都会转接到B
       *
       * @param request BindXBRequest
       * @return BindXBResponse
       */
      Models::BindXBResponse bindXB(const Models::BindXBRequest &request);

      /**
       * @summary Purchases a phone number.
       *
       * @description *   After you create a phone number pool in the Phone Number Protection console, the phone number pool is empty by default. You must purchase phone numbers and add them to the phone number pool.
       * *   Before you call this operation, make sure that you are familiar with the [pricing](https://help.aliyun.com/document_detail/59825.html) of Phone Number Protection.
       * *   When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before you call this operation to purchase a phone number, check the quantity of phone numbers available for purchase by using the [QuerySecretNoRemain](https://help.aliyun.com/document_detail/111699.html) operation.
       * *   The account used to purchase a phone number must be an enterprise account that has passed real-name verification. For more information about how to perform real-name verification, see [Enterprise verification FAQs](https://help.aliyun.com/document_detail/37172.html).
       *
       * @param request BuySecretNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BuySecretNoResponse
       */
      Models::BuySecretNoResponse buySecretNoWithOptions(const Models::BuySecretNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases a phone number.
       *
       * @description *   After you create a phone number pool in the Phone Number Protection console, the phone number pool is empty by default. You must purchase phone numbers and add them to the phone number pool.
       * *   Before you call this operation, make sure that you are familiar with the [pricing](https://help.aliyun.com/document_detail/59825.html) of Phone Number Protection.
       * *   When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before you call this operation to purchase a phone number, check the quantity of phone numbers available for purchase by using the [QuerySecretNoRemain](https://help.aliyun.com/document_detail/111699.html) operation.
       * *   The account used to purchase a phone number must be an enterprise account that has passed real-name verification. For more information about how to perform real-name verification, see [Enterprise verification FAQs](https://help.aliyun.com/document_detail/37172.html).
       *
       * @param request BuySecretNoRequest
       * @return BuySecretNoResponse
       */
      Models::BuySecretNoResponse buySecretNo(const Models::BuySecretNoRequest &request);

      /**
       * @summary Cancels a door-to-door delivery order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelPickUpWaybillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPickUpWaybillResponse
       */
      Models::CancelPickUpWaybillResponse cancelPickUpWaybillWithOptions(const Models::CancelPickUpWaybillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a door-to-door delivery order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelPickUpWaybillRequest
       * @return CancelPickUpWaybillResponse
       */
      Models::CancelPickUpWaybillResponse cancelPickUpWaybill(const Models::CancelPickUpWaybillRequest &request);

      /**
       * @summary 配置X号码，单独对工作号的话音呼叫、企业名片等通信功能进行配置操作
       *
       * @param tmpReq ConfigXRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigXResponse
       */
      Models::ConfigXResponse configXWithOptions(const Models::ConfigXRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置X号码，单独对工作号的话音呼叫、企业名片等通信功能进行配置操作
       *
       * @param request ConfigXRequest
       * @return ConfigXResponse
       */
      Models::ConfigXResponse configX(const Models::ConfigXRequest &request);

      /**
       * @summary Creates number group G.
       *
       * @description Before you add an AXG binding, you must purchase phone number X, create number group G, and then add phone numbers to number group G. If you do not add phone numbers to number group G after you create number group G, you can call the [OperateAxgGroup](https://help.aliyun.com/document_detail/110252.htm) operation to add phone numbers to number group G.
       * >  Up to 2,000 number groups G can be added for a single phone number pool.
       *
       * @param request CreateAxgGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAxgGroupResponse
       */
      Models::CreateAxgGroupResponse createAxgGroupWithOptions(const Models::CreateAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates number group G.
       *
       * @description Before you add an AXG binding, you must purchase phone number X, create number group G, and then add phone numbers to number group G. If you do not add phone numbers to number group G after you create number group G, you can call the [OperateAxgGroup](https://help.aliyun.com/document_detail/110252.htm) operation to add phone numbers to number group G.
       * >  Up to 2,000 number groups G can be added for a single phone number pool.
       *
       * @param request CreateAxgGroupRequest
       * @return CreateAxgGroupResponse
       */
      Models::CreateAxgGroupResponse createAxgGroup(const Models::CreateAxgGroupRequest &request);

      /**
       * @summary 通过API收集小号a号码固话
       *
       * @param request CreateFixedNoAReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFixedNoAReportResponse
       */
      Models::CreateFixedNoAReportResponse createFixedNoAReportWithOptions(const Models::CreateFixedNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过API收集小号a号码固话
       *
       * @param request CreateFixedNoAReportRequest
       * @return CreateFixedNoAReportResponse
       */
      Models::CreateFixedNoAReportResponse createFixedNoAReport(const Models::CreateFixedNoAReportRequest &request);

      /**
       * @summary 通过API收集小号a号码手机号
       *
       * @param request CreatePhoneNoAReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhoneNoAReportResponse
       */
      Models::CreatePhoneNoAReportResponse createPhoneNoAReportWithOptions(const Models::CreatePhoneNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过API收集小号a号码手机号
       *
       * @param request CreatePhoneNoAReportRequest
       * @return CreatePhoneNoAReportResponse
       */
      Models::CreatePhoneNoAReportResponse createPhoneNoAReport(const Models::CreatePhoneNoAReportRequest &request);

      /**
       * @summary Creates a door-to-door delivery order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq CreatePickUpWaybillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePickUpWaybillResponse
       */
      Models::CreatePickUpWaybillResponse createPickUpWaybillWithOptions(const Models::CreatePickUpWaybillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a door-to-door delivery order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreatePickUpWaybillRequest
       * @return CreatePickUpWaybillResponse
       */
      Models::CreatePickUpWaybillResponse createPickUpWaybill(const Models::CreatePickUpWaybillRequest &request);

      /**
       * @summary Queries a pickup order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq CreatePickUpWaybillPreQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePickUpWaybillPreQueryResponse
       */
      Models::CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQueryWithOptions(const Models::CreatePickUpWaybillPreQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a pickup order.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreatePickUpWaybillPreQueryRequest
       * @return CreatePickUpWaybillPreQueryResponse
       */
      Models::CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQuery(const Models::CreatePickUpWaybillPreQueryRequest &request);

      /**
       * @summary B向A 发短信，客户端获取“短信标签”，尾部添加“标签”。通过“标签”解析被叫A，发短信到A。
       *
       * @param request CreateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSignWithOptions(const Models::CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary B向A 发短信，客户端获取“短信标签”，尾部添加“标签”。通过“标签”解析被叫A，发短信到A。
       *
       * @param request CreateSmsSignRequest
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSign(const Models::CreateSmsSignRequest &request);

      /**
       * @summary 固话AxB解绑
       *
       * @param request DeleteAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxbBindFixedLineResponse
       */
      Models::DeleteAxbBindFixedLineResponse deleteAxbBindFixedLineWithOptions(const Models::DeleteAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 固话AxB解绑
       *
       * @param request DeleteAxbBindFixedLineRequest
       * @return DeleteAxbBindFixedLineResponse
       */
      Models::DeleteAxbBindFixedLineResponse deleteAxbBindFixedLine(const Models::DeleteAxbBindFixedLineRequest &request);

      /**
       * @param request DeleteAxgGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxgGroupResponse
       */
      Models::DeleteAxgGroupResponse deleteAxgGroupWithOptions(const Models::DeleteAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAxgGroupRequest
       * @return DeleteAxgGroupResponse
       */
      Models::DeleteAxgGroupResponse deleteAxgGroup(const Models::DeleteAxgGroupRequest &request);

      /**
       * @summary 解绑已有Axn绑定
       *
       * @param request DeleteAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxnBindFixedLineResponse
       */
      Models::DeleteAxnBindFixedLineResponse deleteAxnBindFixedLineWithOptions(const Models::DeleteAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑已有Axn绑定
       *
       * @param request DeleteAxnBindFixedLineRequest
       * @return DeleteAxnBindFixedLineResponse
       */
      Models::DeleteAxnBindFixedLineResponse deleteAxnBindFixedLine(const Models::DeleteAxnBindFixedLineRequest &request);

      /**
       * @summary 解绑已有AXN分机号绑定
       *
       * @param request DeleteAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxnExtensionBindFixedLineResponse
       */
      Models::DeleteAxnExtensionBindFixedLineResponse deleteAxnExtensionBindFixedLineWithOptions(const Models::DeleteAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑已有AXN分机号绑定
       *
       * @param request DeleteAxnExtensionBindFixedLineRequest
       * @return DeleteAxnExtensionBindFixedLineResponse
       */
      Models::DeleteAxnExtensionBindFixedLineResponse deleteAxnExtensionBindFixedLine(const Models::DeleteAxnExtensionBindFixedLineRequest &request);

      /**
       * @summary A号码报备数据删除
       *
       * @param request DeleteSecretAPhoneNoToCustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretAPhoneNoToCustResponse
       */
      Models::DeleteSecretAPhoneNoToCustResponse deleteSecretAPhoneNoToCustWithOptions(const Models::DeleteSecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A号码报备数据删除
       *
       * @param request DeleteSecretAPhoneNoToCustRequest
       * @return DeleteSecretAPhoneNoToCustResponse
       */
      Models::DeleteSecretAPhoneNoToCustResponse deleteSecretAPhoneNoToCust(const Models::DeleteSecretAPhoneNoToCustRequest &request);

      /**
       * @summary Deletes a blacklist.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSecretBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretBlacklistResponse
       */
      Models::DeleteSecretBlacklistResponse deleteSecretBlacklistWithOptions(const Models::DeleteSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a blacklist.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSecretBlacklistRequest
       * @return DeleteSecretBlacklistResponse
       */
      Models::DeleteSecretBlacklistResponse deleteSecretBlacklist(const Models::DeleteSecretBlacklistRequest &request);

      /**
       * @summary 隐私号上传文件，获取 OSS 信息
       *
       * @param request GetDyplsOSSInfoForUploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDyplsOSSInfoForUploadFileResponse
       */
      Models::GetDyplsOSSInfoForUploadFileResponse getDyplsOSSInfoForUploadFileWithOptions(const Models::GetDyplsOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 隐私号上传文件，获取 OSS 信息
       *
       * @param request GetDyplsOSSInfoForUploadFileRequest
       * @return GetDyplsOSSInfoForUploadFileResponse
       */
      Models::GetDyplsOSSInfoForUploadFileResponse getDyplsOSSInfoForUploadFile(const Models::GetDyplsOSSInfoForUploadFileRequest &request);

      /**
       * @summary Obtains the details of the automatic speech recognition (ASR) result.
       *
       * @description Before you call the GetSecretAsrDetail operation, set the ASRStatus parameter to true in the [BindAxn operation](https://help.aliyun.com/document_detail/400483.html). This ensures that you can obtain the ASR result properly.
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetSecretAsrDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretAsrDetailResponse
       */
      Models::GetSecretAsrDetailResponse getSecretAsrDetailWithOptions(const Models::GetSecretAsrDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of the automatic speech recognition (ASR) result.
       *
       * @description Before you call the GetSecretAsrDetail operation, set the ASRStatus parameter to true in the [BindAxn operation](https://help.aliyun.com/document_detail/400483.html). This ensures that you can obtain the ASR result properly.
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetSecretAsrDetailRequest
       * @return GetSecretAsrDetailResponse
       */
      Models::GetSecretAsrDetailResponse getSecretAsrDetail(const Models::GetSecretAsrDetailRequest &request);

      /**
       * @summary Obtains the download URL of a recorded ringing tone.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetTotalPublicUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTotalPublicUrlResponse
       */
      Models::GetTotalPublicUrlResponse getTotalPublicUrlWithOptions(const Models::GetTotalPublicUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the download URL of a recorded ringing tone.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetTotalPublicUrlRequest
       * @return GetTotalPublicUrlResponse
       */
      Models::GetTotalPublicUrlResponse getTotalPublicUrl(const Models::GetTotalPublicUrlRequest &request);

      /**
       * @summary 获取X号码配置信息
       *
       * @param request GetXConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetXConfigResponse
       */
      Models::GetXConfigResponse getXConfigWithOptions(const Models::GetXConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取X号码配置信息
       *
       * @param request GetXConfigRequest
       * @return GetXConfigResponse
       */
      Models::GetXConfigResponse getXConfig(const Models::GetXConfigRequest &request);

      /**
       * @summary 获取X号码默认配置信息
       *
       * @param request GetXDefaultConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetXDefaultConfigResponse
       */
      Models::GetXDefaultConfigResponse getXDefaultConfigWithOptions(const Models::GetXDefaultConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取X号码默认配置信息
       *
       * @param request GetXDefaultConfigRequest
       * @return GetXDefaultConfigResponse
       */
      Models::GetXDefaultConfigResponse getXDefaultConfig(const Models::GetXDefaultConfigRequest &request);

      /**
       * @summary 查询客户名下X号码列表
       *
       * @param request ListXTelephonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListXTelephonesResponse
       */
      Models::ListXTelephonesResponse listXTelephonesWithOptions(const Models::ListXTelephonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询客户名下X号码列表
       *
       * @param request ListXTelephonesRequest
       * @return ListXTelephonesResponse
       */
      Models::ListXTelephonesResponse listXTelephones(const Models::ListXTelephonesRequest &request);

      /**
       * @summary Locks a phone number.
       *
       * @description After a phone number is locked, the locked phone number cannot be selected when you call an operation to create a binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request LockSecretNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockSecretNoResponse
       */
      Models::LockSecretNoResponse lockSecretNoWithOptions(const Models::LockSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks a phone number.
       *
       * @description After a phone number is locked, the locked phone number cannot be selected when you call an operation to create a binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request LockSecretNoRequest
       * @return LockSecretNoResponse
       */
      Models::LockSecretNoResponse lockSecretNo(const Models::LockSecretNoRequest &request);

      /**
       * @summary Modifies number group G.
       *
       * @description After you create number group G, you can call the OperateAxgGroup operation to modify number group G. For example, you can add phone numbers to number group G, delete phone numbers from number group G, and replace all phone numbers in number group G.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request OperateAxgGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateAxgGroupResponse
       */
      Models::OperateAxgGroupResponse operateAxgGroupWithOptions(const Models::OperateAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies number group G.
       *
       * @description After you create number group G, you can call the OperateAxgGroup operation to modify number group G. For example, you can add phone numbers to number group G, delete phone numbers from number group G, and replace all phone numbers in number group G.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request OperateAxgGroupRequest
       * @return OperateAxgGroupResponse
       */
      Models::OperateAxgGroupResponse operateAxgGroup(const Models::OperateAxgGroupRequest &request);

      /**
       * @summary Adds a phone number to a blacklist or deletes a phone number from a blacklist.
       *
       * @description The OperateBlackNo operation supports the following number pool types: AXN, AXN extension, and 95AXN.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request OperateBlackNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBlackNoResponse
       */
      Models::OperateBlackNoResponse operateBlackNoWithOptions(const Models::OperateBlackNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a phone number to a blacklist or deletes a phone number from a blacklist.
       *
       * @description The OperateBlackNo operation supports the following number pool types: AXN, AXN extension, and 95AXN.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request OperateBlackNoRequest
       * @return OperateBlackNoResponse
       */
      Models::OperateBlackNoResponse operateBlackNo(const Models::OperateBlackNoRequest &request);

      /**
       * @summary 固话AxB查询
       *
       * @param request QueryAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxbBindFixedLineResponse
       */
      Models::QueryAxbBindFixedLineResponse queryAxbBindFixedLineWithOptions(const Models::QueryAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 固话AxB查询
       *
       * @param request QueryAxbBindFixedLineRequest
       * @return QueryAxbBindFixedLineResponse
       */
      Models::QueryAxbBindFixedLineResponse queryAxbBindFixedLine(const Models::QueryAxbBindFixedLineRequest &request);

      /**
       * @summary 查询Axn绑定关系
       *
       * @param request QueryAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxnBindFixedLineResponse
       */
      Models::QueryAxnBindFixedLineResponse queryAxnBindFixedLineWithOptions(const Models::QueryAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Axn绑定关系
       *
       * @param request QueryAxnBindFixedLineRequest
       * @return QueryAxnBindFixedLineResponse
       */
      Models::QueryAxnBindFixedLineResponse queryAxnBindFixedLine(const Models::QueryAxnBindFixedLineRequest &request);

      /**
       * @summary 查询AXN分机号绑定关系
       *
       * @param request QueryAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxnExtensionBindFixedLineResponse
       */
      Models::QueryAxnExtensionBindFixedLineResponse queryAxnExtensionBindFixedLineWithOptions(const Models::QueryAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询AXN分机号绑定关系
       *
       * @param request QueryAxnExtensionBindFixedLineRequest
       * @return QueryAxnExtensionBindFixedLineResponse
       */
      Models::QueryAxnExtensionBindFixedLineResponse queryAxnExtensionBindFixedLine(const Models::QueryAxnExtensionBindFixedLineRequest &request);

      /**
       * @summary Queries the details about a tracking number.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryPhoneNoAByTrackNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneNoAByTrackNoResponse
       */
      Models::QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNoWithOptions(const Models::QueryPhoneNoAByTrackNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a tracking number.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryPhoneNoAByTrackNoRequest
       * @return QueryPhoneNoAByTrackNoResponse
       */
      Models::QueryPhoneNoAByTrackNoResponse queryPhoneNoAByTrackNo(const Models::QueryPhoneNoAByTrackNoRequest &request);

      /**
       * @summary Obtains the download URL of a recording file.
       *
       * @description If the recording feature is enabled for a binding, all calls made by the bound phone numbers are recorded. You can obtain the download URL of a recording file by calling the QueryRecordFileDownloadUrl operation and download the recording file.
       * >  We recommend that you subscribe to [the recording status report SecretRecording](https://help.aliyun.com/document_detail/109198.html). The values of the response parameters in SecretRecording can be used as the values of the request parameters for downloading a recording file.
       * ### [](#)Procedure for obtaining a recording file
       * 1.  Specify the request parameter in an update or binding operation to enable the recording feature.
       * 2.  Subscribe to recording message receipts in the Phone Number Protection console.
       * 3.  After a recording message receipt is returned, call the QueryRecordFileDownloadUrl operation to obtain the download URL of the recording file, and download the recording file.
       * > 
       * *   A download URL is valid for 2 hours. Download the recording file as soon as possible after obtaining a download URL.
       * *   The storage period of recording files is 30 days. You can download only the recording files of calls recorded in the last 30 days.
       *
       * @param request QueryRecordFileDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordFileDownloadUrlResponse
       */
      Models::QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrlWithOptions(const Models::QueryRecordFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the download URL of a recording file.
       *
       * @description If the recording feature is enabled for a binding, all calls made by the bound phone numbers are recorded. You can obtain the download URL of a recording file by calling the QueryRecordFileDownloadUrl operation and download the recording file.
       * >  We recommend that you subscribe to [the recording status report SecretRecording](https://help.aliyun.com/document_detail/109198.html). The values of the response parameters in SecretRecording can be used as the values of the request parameters for downloading a recording file.
       * ### [](#)Procedure for obtaining a recording file
       * 1.  Specify the request parameter in an update or binding operation to enable the recording feature.
       * 2.  Subscribe to recording message receipts in the Phone Number Protection console.
       * 3.  After a recording message receipt is returned, call the QueryRecordFileDownloadUrl operation to obtain the download URL of the recording file, and download the recording file.
       * > 
       * *   A download URL is valid for 2 hours. Download the recording file as soon as possible after obtaining a download URL.
       * *   The storage period of recording files is 30 days. You can download only the recording files of calls recorded in the last 30 days.
       *
       * @param request QueryRecordFileDownloadUrlRequest
       * @return QueryRecordFileDownloadUrlResponse
       */
      Models::QueryRecordFileDownloadUrlResponse queryRecordFileDownloadUrl(const Models::QueryRecordFileDownloadUrlRequest &request);

      /**
       * @summary A号码报备状态查询
       *
       * @param request QuerySecretAPhoneNoToCustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretAPhoneNoToCustResponse
       */
      Models::QuerySecretAPhoneNoToCustResponse querySecretAPhoneNoToCustWithOptions(const Models::QuerySecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A号码报备状态查询
       *
       * @param request QuerySecretAPhoneNoToCustRequest
       * @return QuerySecretAPhoneNoToCustResponse
       */
      Models::QuerySecretAPhoneNoToCustResponse querySecretAPhoneNoToCust(const Models::QuerySecretAPhoneNoToCustRequest &request);

      /**
       * @summary Queries the attributes of a private number.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySecretNoDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretNoDetailResponse
       */
      Models::QuerySecretNoDetailResponse querySecretNoDetailWithOptions(const Models::QuerySecretNoDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of a private number.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySecretNoDetailRequest
       * @return QuerySecretNoDetailResponse
       */
      Models::QuerySecretNoDetailResponse querySecretNoDetail(const Models::QuerySecretNoDetailRequest &request);

      /**
       * @summary Queries the quantity of remaining phone numbers available for online purchase.
       *
       * @description When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before calling the [BuySecretNo](~~BuySecretNo~~) operation to purchase a phone number, call the [QuerySecretNoRemain](~~QuerySecretNoRemain~~) operation to query the quantity of remaining phone numbers available for online purchase.
       *
       * @param request QuerySecretNoRemainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretNoRemainResponse
       */
      Models::QuerySecretNoRemainResponse querySecretNoRemainWithOptions(const Models::QuerySecretNoRemainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quantity of remaining phone numbers available for online purchase.
       *
       * @description When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before calling the [BuySecretNo](~~BuySecretNo~~) operation to purchase a phone number, call the [QuerySecretNoRemain](~~QuerySecretNoRemain~~) operation to query the quantity of remaining phone numbers available for online purchase.
       *
       * @param request QuerySecretNoRemainRequest
       * @return QuerySecretNoRemainResponse
       */
      Models::QuerySecretNoRemainResponse querySecretNoRemain(const Models::QuerySecretNoRemainRequest &request);

      /**
       * @summary 查询通话录音链接
       *
       * @param request QuerySoundRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySoundRecordResponse
       */
      Models::QuerySoundRecordResponse querySoundRecordWithOptions(const Models::QuerySoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询通话录音链接
       *
       * @param request QuerySoundRecordRequest
       * @return QuerySoundRecordResponse
       */
      Models::QuerySoundRecordResponse querySoundRecord(const Models::QuerySoundRecordRequest &request);

      /**
       * @summary Queries binding IDs.
       *
       * @description You can query binding IDs by phone number X. In the AXB product, multiple bindings may exist for the same phone number X. In this case, multiple binding IDs may be obtained for the same phone number X.
       *
       * @param request QuerySubsIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySubsIdResponse
       */
      Models::QuerySubsIdResponse querySubsIdWithOptions(const Models::QuerySubsIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries binding IDs.
       *
       * @description You can query binding IDs by phone number X. In the AXB product, multiple bindings may exist for the same phone number X. In this case, multiple binding IDs may be obtained for the same phone number X.
       *
       * @param request QuerySubsIdRequest
       * @return QuerySubsIdResponse
       */
      Models::QuerySubsIdResponse querySubsId(const Models::QuerySubsIdRequest &request);

      /**
       * @summary Queries the details about a phone number binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#poolkeyproducttype)Limits on PoolKey and ProductType
       * You must specify either PoolKey or ProductType. If both parameters are not specified, an error is reported when you call the QuerySubscriptionDetail operation. We recommend that you specify the ProductType parameter for the original key accounts of Alibaba Cloud and the PoolKey parameter for Alibaba Cloud users.
       *
       * @param request QuerySubscriptionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySubscriptionDetailResponse
       */
      Models::QuerySubscriptionDetailResponse querySubscriptionDetailWithOptions(const Models::QuerySubscriptionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a phone number binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#poolkeyproducttype)Limits on PoolKey and ProductType
       * You must specify either PoolKey or ProductType. If both parameters are not specified, an error is reported when you call the QuerySubscriptionDetail operation. We recommend that you specify the ProductType parameter for the original key accounts of Alibaba Cloud and the PoolKey parameter for Alibaba Cloud users.
       *
       * @param request QuerySubscriptionDetailRequest
       * @return QuerySubscriptionDetailResponse
       */
      Models::QuerySubscriptionDetailResponse querySubscriptionDetail(const Models::QuerySubscriptionDetailRequest &request);

      /**
       * @summary Releases a phone number.
       *
       * @description *   After a phone number is released, it will no longer be charged from the following month.
       * *   Before you release a phone number, log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) to check whether the phone number is bound to other phone numbers. The phone number can be released only if it is not bound to other phone numbers.
       *
       * @param request ReleaseSecretNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseSecretNoResponse
       */
      Models::ReleaseSecretNoResponse releaseSecretNoWithOptions(const Models::ReleaseSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a phone number.
       *
       * @description *   After a phone number is released, it will no longer be charged from the following month.
       * *   Before you release a phone number, log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) to check whether the phone number is bound to other phone numbers. The phone number can be released only if it is not bound to other phone numbers.
       *
       * @param request ReleaseSecretNoRequest
       * @return ReleaseSecretNoResponse
       */
      Models::ReleaseSecretNoResponse releaseSecretNo(const Models::ReleaseSecretNoRequest &request);

      /**
       * @summary 解除指定的呼叫绑定关系（A，X，B），解决呼叫绑定关系后，员工B不能通过工作号X呼叫到客户A。
       *
       * @param request UnBindAXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindAXBResponse
       */
      Models::UnBindAXBResponse unBindAXBWithOptions(const Models::UnBindAXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除指定的呼叫绑定关系（A，X，B），解决呼叫绑定关系后，员工B不能通过工作号X呼叫到客户A。
       *
       * @param request UnBindAXBRequest
       * @return UnBindAXBResponse
       */
      Models::UnBindAXBResponse unBindAXB(const Models::UnBindAXBRequest &request);

      /**
       * @summary 调用本接口可取消工作号X与员工号码B的绑定。绑定解除后，对X的呼叫都不会转接给B。
       *
       * @param request UnBindXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindXBResponse
       */
      Models::UnBindXBResponse unBindXBWithOptions(const Models::UnBindXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用本接口可取消工作号X与员工号码B的绑定。绑定解除后，对X的呼叫都不会转接给B。
       *
       * @param request UnBindXBRequest
       * @return UnBindXBResponse
       */
      Models::UnBindXBResponse unBindXB(const Models::UnBindXBRequest &request);

      /**
       * @summary 解除700绑定关系
       *
       * @param request UnbindSubs700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSubs700Response
       */
      Models::UnbindSubs700Response unbindSubs700WithOptions(const Models::UnbindSubs700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除700绑定关系
       *
       * @param request UnbindSubs700Request
       * @return UnbindSubs700Response
       */
      Models::UnbindSubs700Response unbindSubs700(const Models::UnbindSubs700Request &request);

      /**
       * @summary Unbinds a phone number.
       *
       * @description Before releasing a phone number, you must call the UnbindSubscription operation to unbind the phone number.
       *
       * @param request UnbindSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSubscriptionResponse
       */
      Models::UnbindSubscriptionResponse unbindSubscriptionWithOptions(const Models::UnbindSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a phone number.
       *
       * @description Before releasing a phone number, you must call the UnbindSubscription operation to unbind the phone number.
       *
       * @param request UnbindSubscriptionRequest
       * @return UnbindSubscriptionResponse
       */
      Models::UnbindSubscriptionResponse unbindSubscription(const Models::UnbindSubscriptionRequest &request);

      /**
       * @summary Unlocks a phone number.
       *
       * @description After a phone number is unlocked, you can reselect the unlocked phone number when you call an operation to create a binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnlockSecretNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockSecretNoResponse
       */
      Models::UnlockSecretNoResponse unlockSecretNoWithOptions(const Models::UnlockSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a phone number.
       *
       * @description After a phone number is unlocked, you can reselect the unlocked phone number when you call an operation to create a binding.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UnlockSecretNoRequest
       * @return UnlockSecretNoResponse
       */
      Models::UnlockSecretNoResponse unlockSecretNo(const Models::UnlockSecretNoRequest &request);

      /**
       * @summary 固话AxB绑定更新
       *
       * @param tmpReq UpdateAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxbBindFixedLineResponse
       */
      Models::UpdateAxbBindFixedLineResponse updateAxbBindFixedLineWithOptions(const Models::UpdateAxbBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 固话AxB绑定更新
       *
       * @param request UpdateAxbBindFixedLineRequest
       * @return UpdateAxbBindFixedLineResponse
       */
      Models::UpdateAxbBindFixedLineResponse updateAxbBindFixedLine(const Models::UpdateAxbBindFixedLineRequest &request);

      /**
       * @summary 更新Axn绑定关系
       *
       * @param tmpReq UpdateAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxnBindFixedLineResponse
       */
      Models::UpdateAxnBindFixedLineResponse updateAxnBindFixedLineWithOptions(const Models::UpdateAxnBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Axn绑定关系
       *
       * @param request UpdateAxnBindFixedLineRequest
       * @return UpdateAxnBindFixedLineResponse
       */
      Models::UpdateAxnBindFixedLineResponse updateAxnBindFixedLine(const Models::UpdateAxnBindFixedLineRequest &request);

      /**
       * @summary 更新AXN分机号绑定关系
       *
       * @param tmpReq UpdateAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxnExtensionBindFixedLineResponse
       */
      Models::UpdateAxnExtensionBindFixedLineResponse updateAxnExtensionBindFixedLineWithOptions(const Models::UpdateAxnExtensionBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AXN分机号绑定关系
       *
       * @param request UpdateAxnExtensionBindFixedLineRequest
       * @return UpdateAxnExtensionBindFixedLineResponse
       */
      Models::UpdateAxnExtensionBindFixedLineResponse updateAxnExtensionBindFixedLine(const Models::UpdateAxnExtensionBindFixedLineRequest &request);

      /**
       * @summary 更新700绑定关系
       *
       * @param request UpdateSubs700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubs700Response
       */
      Models::UpdateSubs700Response updateSubs700WithOptions(const Models::UpdateSubs700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新700绑定关系
       *
       * @param request UpdateSubs700Request
       * @return UpdateSubs700Response
       */
      Models::UpdateSubs700Response updateSubs700(const Models::UpdateSubs700Request &request);

      /**
       * @summary Modifies a phone number binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 10,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateSubscriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscriptionWithOptions(const Models::UpdateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a phone number binding.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 10,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UpdateSubscriptionRequest
       * @return UpdateSubscriptionResponse
       */
      Models::UpdateSubscriptionResponse updateSubscription(const Models::UpdateSubscriptionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
