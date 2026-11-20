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
       * @summary Adds a phone number to the blacklist of a China number pool. Only AXN privacy number, AXN extension number, and 95AXN privacy number pool types support blacklist settings.
       *
       * @description - This operation is not a batch operation. You can add only one pair of **point-to-point blacklist** numbers or one **number pool blacklist** number at a time.
       * - To delete a blacklist entry, call the [DeleteSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-deletesecretblacklist) operation.
       * ### Quantity limit
       * The maximum number of blacklist entries per number pool is 2,000,000. If this limit is exceeded, API calls to add blacklist numbers will fail, which may affect your business. If you have special requirements, contact your Alibaba Cloud account manager.
       * ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddSecretBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSecretBlacklistResponse
       */
      Models::AddSecretBlacklistResponse addSecretBlacklistWithOptions(const Models::AddSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a phone number to the blacklist of a China number pool. Only AXN privacy number, AXN extension number, and 95AXN privacy number pool types support blacklist settings.
       *
       * @description - This operation is not a batch operation. You can add only one pair of **point-to-point blacklist** numbers or one **number pool blacklist** number at a time.
       * - To delete a blacklist entry, call the [DeleteSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-deletesecretblacklist) operation.
       * ### Quantity limit
       * The maximum number of blacklist entries per number pool is 2,000,000. If this limit is exceeded, API calls to add blacklist numbers will fail, which may affect your business. If you have special requirements, contact your Alibaba Cloud account manager.
       * ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request AddSecretBlacklistRequest
       * @return AddSecretBlacklistResponse
       */
      Models::AddSecretBlacklistResponse addSecretBlacklist(const Models::AddSecretBlacklistRequest &request);

      /**
       * @summary Establishes a call binding relationship (B, X, A) for work number X of employee B on the work number platform to allow employee B to call customer A through work number X.
       *
       * @param request BindAXBCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAXBCallResponse
       */
      Models::BindAXBCallResponse bindAXBCallWithOptions(const Models::BindAXBCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Establishes a call binding relationship (B, X, A) for work number X of employee B on the work number platform to allow employee B to call customer A through work number X.
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
       * @summary Binds phone numbers for a 700AXB private number. A 700AXB private number restricts the calling relationship to a one-to-one relationship. User A can contact User B through the intermediate number X that starts with 700, and User B can also contact User A through the same intermediate number X.
       *
       * @description Before invoking this operation, make sure that you have purchased a private number in the console.
       * You can use this operation to attach numbers for a 700AXB private number, or attach A and B numbers for a 700AXB private number on the Number Management page in the console.
       * Before attaching numbers for a 700AXB private number, determine the A role and B role in your business scenario. For example, in a ride-hailing scenario, A is the passenger and B is the driver.
       * The 700AXB private number is mainly used for privacy protection in one-to-one scenarios. You attach number A and number B through the Phone Number Protection service. When A calls X, the call is forwarded to B. When B calls X, the call is forwarded to A. A single X number can be reused by up to 200 binding pairs, such as A1XB1, A2XB2, A3XB3, and so on. As long as the phone numbers of A and B users are unique, a single X number can be bound to 200 groups of phone numbers simultaneously, and calls can also be made simultaneously.
       * QPS limit
       * The single-user QPS limit for this operation is 5,000 calls per second. Exceeding this limit will cause throttling, which may affect your business. Invoke this operation appropriately.
       *
       * @param request BindAxb700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxb700Response
       */
      Models::BindAxb700Response bindAxb700WithOptions(const Models::BindAxb700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds phone numbers for a 700AXB private number. A 700AXB private number restricts the calling relationship to a one-to-one relationship. User A can contact User B through the intermediate number X that starts with 700, and User B can also contact User A through the same intermediate number X.
       *
       * @description Before invoking this operation, make sure that you have purchased a private number in the console.
       * You can use this operation to attach numbers for a 700AXB private number, or attach A and B numbers for a 700AXB private number on the Number Management page in the console.
       * Before attaching numbers for a 700AXB private number, determine the A role and B role in your business scenario. For example, in a ride-hailing scenario, A is the passenger and B is the driver.
       * The 700AXB private number is mainly used for privacy protection in one-to-one scenarios. You attach number A and number B through the Phone Number Protection service. When A calls X, the call is forwarded to B. When B calls X, the call is forwarded to A. A single X number can be reused by up to 200 binding pairs, such as A1XB1, A2XB2, A3XB3, and so on. As long as the phone numbers of A and B users are unique, a single X number can be bound to 200 groups of phone numbers simultaneously, and calls can also be made simultaneously.
       * QPS limit
       * The single-user QPS limit for this operation is 5,000 calls per second. Exceeding this limit will cause throttling, which may affect your business. Invoke this operation appropriately.
       *
       * @param request BindAxb700Request
       * @return BindAxb700Response
       */
      Models::BindAxb700Response bindAxb700(const Models::BindAxb700Request &request);

      /**
       * @summary Attaches an AXB privacy number to a fixed line to restrict the calling relationship to a one-to-one relationship, allowing User A to contact User B through the fixed-line intermediate number X, and User B to contact User A through the same intermediate number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration support.
       *
       * @description - Before you invoke this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind numbers to a fixed-line AXB intermediate number. Currently, you cannot bind Number A and Number B to a fixed-line AXB intermediate number on the Number Management page in the console.
       * - Before binding numbers, we recommend that you clarify the roles of User A and User B in your business scenario. For example, in common scenarios such as ride-hailing, User A is the passenger and User B is the driver.
       * - Fixed-line AXB intermediate numbers are mainly used for privacy protection in one-to-one scenarios. Number A and Number B are bound through the Phone Number Protection service. When User A calls Number X, the call is forwarded to User B. When User B calls Number X, the call is forwarded to User A. A single fixed-line Number X can be reused for N binding relationships, such as A1-X-B1, A2-X-B2, and A3-X-B3. As long as the mobile phone numbers of Users A and B are not duplicated, a single fixed-line Number X can be bound to N pairs of mobile phone numbers simultaneously, and calls can be made concurrently.
       * - The number of times a number can be reused varies based on the number you purchased. You can confirm the specific reuse limit with your technical support when purchasing the number.
       *
       * @param tmpReq BindAxbFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxbFixedLineResponse
       */
      Models::BindAxbFixedLineResponse bindAxbFixedLineWithOptions(const Models::BindAxbFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an AXB privacy number to a fixed line to restrict the calling relationship to a one-to-one relationship, allowing User A to contact User B through the fixed-line intermediate number X, and User B to contact User A through the same intermediate number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration support.
       *
       * @description - Before you invoke this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind numbers to a fixed-line AXB intermediate number. Currently, you cannot bind Number A and Number B to a fixed-line AXB intermediate number on the Number Management page in the console.
       * - Before binding numbers, we recommend that you clarify the roles of User A and User B in your business scenario. For example, in common scenarios such as ride-hailing, User A is the passenger and User B is the driver.
       * - Fixed-line AXB intermediate numbers are mainly used for privacy protection in one-to-one scenarios. Number A and Number B are bound through the Phone Number Protection service. When User A calls Number X, the call is forwarded to User B. When User B calls Number X, the call is forwarded to User A. A single fixed-line Number X can be reused for N binding relationships, such as A1-X-B1, A2-X-B2, and A3-X-B3. As long as the mobile phone numbers of Users A and B are not duplicated, a single fixed-line Number X can be bound to N pairs of mobile phone numbers simultaneously, and calls can be made concurrently.
       * - The number of times a number can be reused varies based on the number you purchased. You can confirm the specific reuse limit with your technical support when purchasing the number.
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
       * @summary Adds a binding relationship for an AXN privacy number. An AXN privacy number assigns an exclusive privacy number to User A, allowing any Number N to reach User A by dialing Number X.
       *
       * @description - Before calling this operation, make sure that you have [purchased a privacy number](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this operation to bind numbers to an AXN privacy number, or bind Number A and Number B to an AXN privacy number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
       * - Before binding numbers to an AXN privacy number, clarify the role of User A in your business scenario. For example, in a used car information publishing scenario, User A represents the contact information of the landlord or agent.
       * ### QPS limits
       * The QPS limit per user is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param request BindAxnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnResponse
       */
      Models::BindAxnResponse bindAxnWithOptions(const Models::BindAxnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a binding relationship for an AXN privacy number. An AXN privacy number assigns an exclusive privacy number to User A, allowing any Number N to reach User A by dialing Number X.
       *
       * @description - Before calling this operation, make sure that you have [purchased a privacy number](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this operation to bind numbers to an AXN privacy number, or bind Number A and Number B to an AXN privacy number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
       * - Before binding numbers to an AXN privacy number, clarify the role of User A in your business scenario. For example, in a used car information publishing scenario, User A represents the contact information of the landlord or agent.
       * ### QPS limits
       * The QPS limit per user is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param request BindAxnRequest
       * @return BindAxnResponse
       */
      Models::BindAxnResponse bindAxn(const Models::BindAxnRequest &request);

      /**
       * @summary Adds a binding relationship for an AXN extension number. The AXN extension number feature is similar to the AXN privacy number feature but introduces extension numbers to reduce the usage of X numbers. When making a call, the caller dials the X number first and then enters the corresponding extension number after hearing the prompt tone to connect to number A.
       *
       * @description - Before calling this operation, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this operation to bind numbers to an AXN extension number. You can also bind numbers A and B to an AXN extension number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
       * - Before binding numbers for an AXN extension number, we recommend that you clarify the roles of A and N in your business scenario. For example, if number A is a customer, number X is the privacy number assigned to the customer. Calls from any other number to number X plus the extension number are forwarded to number A. When A calls X, the call is forwarded to the default number B specified during binding.
       * ### QPS limits
       * The queries per second (QPS) limit for a single user is 5,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request BindAxnExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnExtensionResponse
       */
      Models::BindAxnExtensionResponse bindAxnExtensionWithOptions(const Models::BindAxnExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a binding relationship for an AXN extension number. The AXN extension number feature is similar to the AXN privacy number feature but introduces extension numbers to reduce the usage of X numbers. When making a call, the caller dials the X number first and then enters the corresponding extension number after hearing the prompt tone to connect to number A.
       *
       * @description - Before calling this operation, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this operation to bind numbers to an AXN extension number. You can also bind numbers A and B to an AXN extension number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
       * - Before binding numbers for an AXN extension number, we recommend that you clarify the roles of A and N in your business scenario. For example, if number A is a customer, number X is the privacy number assigned to the customer. Calls from any other number to number X plus the extension number are forwarded to number A. When A calls X, the call is forwarded to the default number B specified during binding.
       * ### QPS limits
       * The queries per second (QPS) limit for a single user is 5,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request BindAxnExtensionRequest
       * @return BindAxnExtensionResponse
       */
      Models::BindAxnExtensionResponse bindAxnExtension(const Models::BindAxnExtensionRequest &request);

      /**
       * @summary The fixed-line AXN extension number introduces extension numbers on top of the fixed-line AXN privacy number, thereby reducing the usage of X numbers. When making a call, first dial the X number, and then enter the corresponding extension number after hearing the prompt tone to be connected to A. The fixed-line AXN extension number service is currently invitation-only. Contact your technical support to activate the service and obtain integration support.
       *
       * @description - Before calling this API, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this API to bind numbers for the fixed-line AXN extension number. Binding numbers for the fixed-line AXN extension number through the console is not supported.
       * - Before binding numbers, we recommend that you first clarify the A role and N role in your business scenario. For example, if the A number represents the customer, the X number is the privacy number assigned to the customer. Any other number calling the X number plus the extension number will be forwarded to the A number. When A calls X, the call will be forwarded to the default B number specified during binding.
       *
       * @param tmpReq BindAxnExtensionFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnExtensionFixedLineResponse
       */
      Models::BindAxnExtensionFixedLineResponse bindAxnExtensionFixedLineWithOptions(const Models::BindAxnExtensionFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The fixed-line AXN extension number introduces extension numbers on top of the fixed-line AXN privacy number, thereby reducing the usage of X numbers. When making a call, first dial the X number, and then enter the corresponding extension number after hearing the prompt tone to be connected to A. The fixed-line AXN extension number service is currently invitation-only. Contact your technical support to activate the service and obtain integration support.
       *
       * @description - Before calling this API, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
       * - You can use this API to bind numbers for the fixed-line AXN extension number. Binding numbers for the fixed-line AXN extension number through the console is not supported.
       * - Before binding numbers, we recommend that you first clarify the A role and N role in your business scenario. For example, if the A number represents the customer, the X number is the privacy number assigned to the customer. Any other number calling the X number plus the extension number will be forwarded to the A number. When A calls X, the call will be forwarded to the default B number specified during binding.
       *
       * @param request BindAxnExtensionFixedLineRequest
       * @return BindAxnExtensionFixedLineResponse
       */
      Models::BindAxnExtensionFixedLineResponse bindAxnExtensionFixedLine(const Models::BindAxnExtensionFixedLineRequest &request);

      /**
       * @summary Binds a fixed-line AXN privacy number to assign a dedicated privacy number to User A, which allows any number N to be forwarded to User A by dialing number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration assistance.
       *
       * @description - Before you call this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind a number to a fixed-line AXN privacy number. The console does not support binding for fixed-line AXN privacy numbers.
       * - Before binding a number, we recommend that you clarify the role of User A in your business scenario. For example, in a used car listing scenario, User A represents the contact information of the property owner or broker.
       *
       * @param tmpReq BindAxnFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAxnFixedLineResponse
       */
      Models::BindAxnFixedLineResponse bindAxnFixedLineWithOptions(const Models::BindAxnFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a fixed-line AXN privacy number to assign a dedicated privacy number to User A, which allows any number N to be forwarded to User A by dialing number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration assistance.
       *
       * @description - Before you call this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind a number to a fixed-line AXN privacy number. The console does not support binding for fixed-line AXN privacy numbers.
       * - Before binding a number, we recommend that you clarify the role of User A in your business scenario. For example, in a used car listing scenario, User A represents the contact information of the property owner or broker.
       *
       * @param request BindAxnFixedLineRequest
       * @return BindAxnFixedLineResponse
       */
      Models::BindAxnFixedLineResponse bindAxnFixedLine(const Models::BindAxnFixedLineRequest &request);

      /**
       * @summary Adds AXG bindings in batches. The AXG model is a Phone Number Protection Solution for scenarios requiring User Tiering, Call Scope Restriction, or Order Grabbing Restriction. In this model, G represents a Number Group, to which you can add phone numbers.
       *
       * @description - Before you bind AXG Numbers, you must purchase X Numbers, create a G Number Group, and add Numbers to the group. To create a G Number Group, see [Set up G Number Group](https://help.aliyun.com/zh/pnp/user-guide/manage-phone-number-pools#section-9bb-xrg-c78) or call the [CreateAxgGroup](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-createaxggroup) API.
       * - Before binding AXG Numbers, define Role A and Role G for your business scenario. For example, on a recruitment platform, Role A can represent job applicants and Role G can represent the hiring team.
       * - When you call this API for Batch Binding of AXG Numbers, a single failed request does not affect others in the batch. The API returns a status code for each binding request.
       * ### QPS limit
       * The QPS limit for this API is 5,000 per user. Exceeding this limit results in throttling. Plan your API calls accordingly to avoid impacting your business.
       *
       * @param tmpReq BindBatchAxgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindBatchAxgResponse
       */
      Models::BindBatchAxgResponse bindBatchAxgWithOptions(const Models::BindBatchAxgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds AXG bindings in batches. The AXG model is a Phone Number Protection Solution for scenarios requiring User Tiering, Call Scope Restriction, or Order Grabbing Restriction. In this model, G represents a Number Group, to which you can add phone numbers.
       *
       * @description - Before you bind AXG Numbers, you must purchase X Numbers, create a G Number Group, and add Numbers to the group. To create a G Number Group, see [Set up G Number Group](https://help.aliyun.com/zh/pnp/user-guide/manage-phone-number-pools#section-9bb-xrg-c78) or call the [CreateAxgGroup](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-createaxggroup) API.
       * - Before binding AXG Numbers, define Role A and Role G for your business scenario. For example, on a recruitment platform, Role A can represent job applicants and Role G can represent the hiring team.
       * - When you call this API for Batch Binding of AXG Numbers, a single failed request does not affect others in the batch. The API returns a status code for each binding request.
       * ### QPS limit
       * The QPS limit for this API is 5,000 per user. Exceeding this limit results in throttling. Plan your API calls accordingly to avoid impacting your business.
       *
       * @param request BindBatchAxgRequest
       * @return BindBatchAxgResponse
       */
      Models::BindBatchAxgResponse bindBatchAxg(const Models::BindBatchAxgRequest &request);

      /**
       * @summary Adds a binding relationship for a 700GXB private number. The 700GXB product is a privacy protection solutions designed for scenarios that require user-level classification, call scope restrictions, and order-grabbing restrictions. In this product, G represents a number group, and you can add numbers to the group as needed.
       *
       * @description Before calling this operation, make sure that you have purchased a private number in the console.
       * You can use this operation to bind numbers to a 700GXB private number, or bind numbers on the Number Management page in the console.
       * Before binding numbers for a 700GXB private number, clarify the G role and B role in your business scenario. For example, on a recruitment platform, B is the job applicant and G is the recruitment team.
       * QPS limit
       * The single-user QPS limit for this operation is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request BindGxb700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindGxb700Response
       */
      Models::BindGxb700Response bindGxb700WithOptions(const Models::BindGxb700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a binding relationship for a 700GXB private number. The 700GXB product is a privacy protection solutions designed for scenarios that require user-level classification, call scope restrictions, and order-grabbing restrictions. In this product, G represents a number group, and you can add numbers to the group as needed.
       *
       * @description Before calling this operation, make sure that you have purchased a private number in the console.
       * You can use this operation to bind numbers to a 700GXB private number, or bind numbers on the Number Management page in the console.
       * Before binding numbers for a 700GXB private number, clarify the G role and B role in your business scenario. For example, on a recruitment platform, B is the job applicant and G is the recruitment team.
       * QPS limit
       * The single-user QPS limit for this operation is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request BindGxb700Request
       * @return BindGxb700Response
       */
      Models::BindGxb700Response bindGxb700(const Models::BindGxb700Request &request);

      /**
       * @summary Establishes a binding relationship between a specified work number X and an employee number B on the work number platform. The binding takes effect only after the employee completes real-name verification for the work number. After the binding succeeds, all calls to the work number are forwarded to the employee number. The platform pushes the binding result to the caller through the asynchronous notification API.
       *
       * @param request BindXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindXBResponse
       */
      Models::BindXBResponse bindXBWithOptions(const Models::BindXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Establishes a binding relationship between a specified work number X and an employee number B on the work number platform. The binding takes effect only after the employee completes real-name verification for the work number. After the binding succeeds, all calls to the work number are forwarded to the employee number. The platform pushes the binding result to the caller through the asynchronous notification API.
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
       * @summary Configures an X number to independently manage communication features such as voice calls and enterprise business cards for a work number.
       *
       * @param tmpReq ConfigXRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigXResponse
       */
      Models::ConfigXResponse configXWithOptions(const Models::ConfigXRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an X number to independently manage communication features such as voice calls and enterprise business cards for a work number.
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
       * @summary Submit Individual Information of a landline number A through an API.
       *
       * @description Before invoking this API, you need to first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information for Number A via API](https://help.aliyun.com/document_detail/2880077.html).
       * ### queries per second (QPS) limit
       * The QPS limit for this API is 50 queries per second per user. If this limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request CreateFixedNoAReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFixedNoAReportResponse
       */
      Models::CreateFixedNoAReportResponse createFixedNoAReportWithOptions(const Models::CreateFixedNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit Individual Information of a landline number A through an API.
       *
       * @description Before invoking this API, you need to first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information for Number A via API](https://help.aliyun.com/document_detail/2880077.html).
       * ### queries per second (QPS) limit
       * The QPS limit for this API is 50 queries per second per user. If this limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request CreateFixedNoAReportRequest
       * @return CreateFixedNoAReportResponse
       */
      Models::CreateFixedNoAReportResponse createFixedNoAReport(const Models::CreateFixedNoAReportRequest &request);

      /**
       * @summary Submit Individual Information of an A-number mobile phone number through an API.
       *
       * @description Before invoking this API, you must first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information of an A-number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
       * ### QPS Limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request CreatePhoneNoAReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePhoneNoAReportResponse
       */
      Models::CreatePhoneNoAReportResponse createPhoneNoAReportWithOptions(const Models::CreatePhoneNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submit Individual Information of an A-number mobile phone number through an API.
       *
       * @description Before invoking this API, you must first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information of an A-number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
       * ### QPS Limit
       * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
       *
       * @param request CreatePhoneNoAReportRequest
       * @return CreatePhoneNoAReportResponse
       */
      Models::CreatePhoneNoAReportResponse createPhoneNoAReport(const Models::CreatePhoneNoAReportRequest &request);

      /**
       * @summary Creates a door-to-door pickup order.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param tmpReq CreatePickUpWaybillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePickUpWaybillResponse
       */
      Models::CreatePickUpWaybillResponse createPickUpWaybillWithOptions(const Models::CreatePickUpWaybillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a door-to-door pickup order.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for a single user is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
       *
       * @param request CreatePickUpWaybillRequest
       * @return CreatePickUpWaybillResponse
       */
      Models::CreatePickUpWaybillResponse createPickUpWaybill(const Models::CreatePickUpWaybillRequest &request);

      /**
       * @summary Pre-queries shipping order information before placing an order.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
       *
       * @param tmpReq CreatePickUpWaybillPreQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePickUpWaybillPreQueryResponse
       */
      Models::CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQueryWithOptions(const Models::CreatePickUpWaybillPreQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-queries shipping order information before placing an order.
       *
       * @description ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
       *
       * @param request CreatePickUpWaybillPreQueryRequest
       * @return CreatePickUpWaybillPreQueryResponse
       */
      Models::CreatePickUpWaybillPreQueryResponse createPickUpWaybillPreQuery(const Models::CreatePickUpWaybillPreQueryRequest &request);

      /**
       * @summary 对客提交号码迁移任务，两侧号池须为同一资质、同一场景且均为开启状态。
       *
       * @param request CreateSecretTransferRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretTransferRecordResponse
       */
      Models::CreateSecretTransferRecordResponse createSecretTransferRecordWithOptions(const Models::CreateSecretTransferRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对客提交号码迁移任务，两侧号池须为同一资质、同一场景且均为开启状态。
       *
       * @param request CreateSecretTransferRecordRequest
       * @return CreateSecretTransferRecordResponse
       */
      Models::CreateSecretTransferRecordResponse createSecretTransferRecord(const Models::CreateSecretTransferRecordRequest &request);

      /**
       * @summary Generates a text message delivery tag for scenarios where an employee sends a text message to a customer by using a work number. The client calls this operation to obtain the tag and appends it to the end of the message content. The work number platform then parses the actual called number from the tag and delivers the message to the customer.
       *
       * @param request CreateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSignWithOptions(const Models::CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a text message delivery tag for scenarios where an employee sends a text message to a customer by using a work number. The client calls this operation to obtain the tag and appends it to the end of the message content. The work number platform then parses the actual called number from the tag and delivers the message to the customer.
       *
       * @param request CreateSmsSignRequest
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSign(const Models::CreateSmsSignRequest &request);

      /**
       * @summary Unbind a fixed-line AXB privacy number.
       *
       * @description - After unbinding a fixed-line AXB privacy number from an existing binding, your business continuity may be affected. Proceed with caution.
       * - Before releasing a number, you must unbind the number first.
       * - Unbinding a fixed-line AXB privacy number is supported only through this API. Unbinding through the console is currently not supported.
       *
       * @param request DeleteAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxbBindFixedLineResponse
       */
      Models::DeleteAxbBindFixedLineResponse deleteAxbBindFixedLineWithOptions(const Models::DeleteAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind a fixed-line AXB privacy number.
       *
       * @description - After unbinding a fixed-line AXB privacy number from an existing binding, your business continuity may be affected. Proceed with caution.
       * - Before releasing a number, you must unbind the number first.
       * - Unbinding a fixed-line AXB privacy number is supported only through this API. Unbinding through the console is currently not supported.
       *
       * @param request DeleteAxbBindFixedLineRequest
       * @return DeleteAxbBindFixedLineResponse
       */
      Models::DeleteAxbBindFixedLineResponse deleteAxbBindFixedLine(const Models::DeleteAxbBindFixedLineRequest &request);

      /**
       * @summary Deletes a G group. G groups are supported only in Number Pools designated for the AXG privacy number type.
       *
       * @description - Deleted G groups cannot be recovered. Proceed with caution.
       * - Before calling this operation, verify the G group to be deleted and the Number Pool it belongs to.
       * - You cannot delete a G group that has active bindings. Before you delete the group, you must unbind the associated AXG privacy number. To do this, log on to the Phone Number Privacy Protection [Console](https://dyplsnext.console.aliyun.com/number/list), go to the **Number Management** page, filter by **AXG privacy number**, and click **Details** > Unbind. Alternatively, you can call the [UnbindSubscription](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-unbindsubscription) API to unbind the number.
       * - When you delete a G group, all phone numbers in the group are also deleted.
       * ### QPS limit
       * The single-user QPS limit for this API is 5,000 requests per second. API calls that exceed this limit are subject to throttling. Plan your API calls accordingly to prevent disruptions to your business.
       *
       * @param request DeleteAxgGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxgGroupResponse
       */
      Models::DeleteAxgGroupResponse deleteAxgGroupWithOptions(const Models::DeleteAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a G group. G groups are supported only in Number Pools designated for the AXG privacy number type.
       *
       * @description - Deleted G groups cannot be recovered. Proceed with caution.
       * - Before calling this operation, verify the G group to be deleted and the Number Pool it belongs to.
       * - You cannot delete a G group that has active bindings. Before you delete the group, you must unbind the associated AXG privacy number. To do this, log on to the Phone Number Privacy Protection [Console](https://dyplsnext.console.aliyun.com/number/list), go to the **Number Management** page, filter by **AXG privacy number**, and click **Details** > Unbind. Alternatively, you can call the [UnbindSubscription](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-unbindsubscription) API to unbind the number.
       * - When you delete a G group, all phone numbers in the group are also deleted.
       * ### QPS limit
       * The single-user QPS limit for this API is 5,000 requests per second. API calls that exceed this limit are subject to throttling. Plan your API calls accordingly to prevent disruptions to your business.
       *
       * @param request DeleteAxgGroupRequest
       * @return DeleteAxgGroupResponse
       */
      Models::DeleteAxgGroupResponse deleteAxgGroup(const Models::DeleteAxgGroupRequest &request);

      /**
       * @summary Unbinds a fixed-line AXN private number binding relationship.
       *
       * @description - After you unbind an existing fixed-line AXN private number binding relationship, your service continuity may be affected. Proceed with caution.
       * - Before releasing a number, unbind the number binding relationship.
       * - Unbinding a fixed-line AXN private number binding relationship is supported only through this API operation. The console does not support this operation.
       *
       * @param request DeleteAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxnBindFixedLineResponse
       */
      Models::DeleteAxnBindFixedLineResponse deleteAxnBindFixedLineWithOptions(const Models::DeleteAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a fixed-line AXN private number binding relationship.
       *
       * @description - After you unbind an existing fixed-line AXN private number binding relationship, your service continuity may be affected. Proceed with caution.
       * - Before releasing a number, unbind the number binding relationship.
       * - Unbinding a fixed-line AXN private number binding relationship is supported only through this API operation. The console does not support this operation.
       *
       * @param request DeleteAxnBindFixedLineRequest
       * @return DeleteAxnBindFixedLineResponse
       */
      Models::DeleteAxnBindFixedLineResponse deleteAxnBindFixedLine(const Models::DeleteAxnBindFixedLineRequest &request);

      /**
       * @summary Unbind a fixed-line AXN extension number binding.
       *
       * @param request DeleteAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAxnExtensionBindFixedLineResponse
       */
      Models::DeleteAxnExtensionBindFixedLineResponse deleteAxnExtensionBindFixedLineWithOptions(const Models::DeleteAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind a fixed-line AXN extension number binding.
       *
       * @param request DeleteAxnExtensionBindFixedLineRequest
       * @return DeleteAxnExtensionBindFixedLineResponse
       */
      Models::DeleteAxnExtensionBindFixedLineResponse deleteAxnExtensionBindFixedLine(const Models::DeleteAxnExtensionBindFixedLineRequest &request);

      /**
       * @summary Delete A-number filing data.
       *
       * @description - This API can only delete A-number filing records whose filing status is either "Reviewed and Passed" or "Review Failed." It does not support deleting A-number filing records with a filing status of "Under Review."
       * - After deleting an A-number filing record, the carrier will immediately impose call restrictions or deactivate the number, which may impact your business continuity. Proceed with caution.
       *
       * @param request DeleteSecretAPhoneNoToCustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretAPhoneNoToCustResponse
       */
      Models::DeleteSecretAPhoneNoToCustResponse deleteSecretAPhoneNoToCustWithOptions(const Models::DeleteSecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete A-number filing data.
       *
       * @description - This API can only delete A-number filing records whose filing status is either "Reviewed and Passed" or "Review Failed." It does not support deleting A-number filing records with a filing status of "Under Review."
       * - After deleting an A-number filing record, the carrier will immediately impose call restrictions or deactivate the number, which may impact your business continuity. Proceed with caution.
       *
       * @param request DeleteSecretAPhoneNoToCustRequest
       * @return DeleteSecretAPhoneNoToCustResponse
       */
      Models::DeleteSecretAPhoneNoToCustResponse deleteSecretAPhoneNoToCust(const Models::DeleteSecretAPhoneNoToCustRequest &request);

      /**
       * @summary Deletes the blacklist of a number pool. Only number pools of the AXN privacy number, AXN extension number, and 95AXN privacy number types support blacklists.
       *
       * @description - This operation is not a batch operation. It supports deleting only one pair of point-to-point blacklist numbers or one number pool blacklist number at a time.
       * - To add a blacklist, call the [AddSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-addsecretblacklist) operation.
       * ### QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteSecretBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretBlacklistResponse
       */
      Models::DeleteSecretBlacklistResponse deleteSecretBlacklistWithOptions(const Models::DeleteSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the blacklist of a number pool. Only number pools of the AXN privacy number, AXN extension number, and 95AXN privacy number types support blacklists.
       *
       * @description - This operation is not a batch operation. It supports deleting only one pair of point-to-point blacklist numbers or one number pool blacklist number at a time.
       * - To add a blacklist, call the [AddSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-addsecretblacklist) operation.
       * ### QPS limit
       * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteSecretBlacklistRequest
       * @return DeleteSecretBlacklistResponse
       */
      Models::DeleteSecretBlacklistResponse deleteSecretBlacklist(const Models::DeleteSecretBlacklistRequest &request);

      /**
       * @summary Obtain OSS resource configuration information. This configuration information will be used for subsequent OSS image upload operations.
       *
       * @description - When uploading personal filing photos for an A-number mobile phone number, you must upload a clear frontal portrait photo with the face unobscured, and optionally select to upload photos of both sides of your ID card. Uploading these photos helps reviewers understand your personal identity information. Supported formats are PNG, JPG, and JPEG. The image size must not exceed 2 MB.
       * - For the specific operation flow when submitting personal real-name filing for an A-number mobile phone number through the API, see [Submit Personal Real-Name Information for an A-Number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
       *
       * @param request GetDyplsOSSInfoForUploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDyplsOSSInfoForUploadFileResponse
       */
      Models::GetDyplsOSSInfoForUploadFileResponse getDyplsOSSInfoForUploadFileWithOptions(const Models::GetDyplsOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain OSS resource configuration information. This configuration information will be used for subsequent OSS image upload operations.
       *
       * @description - When uploading personal filing photos for an A-number mobile phone number, you must upload a clear frontal portrait photo with the face unobscured, and optionally select to upload photos of both sides of your ID card. Uploading these photos helps reviewers understand your personal identity information. Supported formats are PNG, JPG, and JPEG. The image size must not exceed 2 MB.
       * - For the specific operation flow when submitting personal real-name filing for an A-number mobile phone number through the API, see [Submit Personal Real-Name Information for an A-Number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
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
       * @summary Retrieves the configuration information of the X number.
       *
       * @param request GetXConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetXConfigResponse
       */
      Models::GetXConfigResponse getXConfigWithOptions(const Models::GetXConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration information of the X number.
       *
       * @param request GetXConfigRequest
       * @return GetXConfigResponse
       */
      Models::GetXConfigResponse getXConfig(const Models::GetXConfigRequest &request);

      /**
       * @summary Retrieves the default configurations of an X number.
       *
       * @param request GetXDefaultConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetXDefaultConfigResponse
       */
      Models::GetXDefaultConfigResponse getXDefaultConfigWithOptions(const Models::GetXDefaultConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the default configurations of an X number.
       *
       * @param request GetXDefaultConfigRequest
       * @return GetXDefaultConfigResponse
       */
      Models::GetXDefaultConfigResponse getXDefaultConfig(const Models::GetXDefaultConfigRequest &request);

      /**
       * @summary Queries the list of X numbers under a customer account.
       *
       * @param request ListXTelephonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListXTelephonesResponse
       */
      Models::ListXTelephonesResponse listXTelephonesWithOptions(const Models::ListXTelephonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of X numbers under a customer account.
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
       * @summary Queries the binding information of an AXB landline privacy number.
       *
       * @param request QueryAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxbBindFixedLineResponse
       */
      Models::QueryAxbBindFixedLineResponse queryAxbBindFixedLineWithOptions(const Models::QueryAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding information of an AXB landline privacy number.
       *
       * @param request QueryAxbBindFixedLineRequest
       * @return QueryAxbBindFixedLineResponse
       */
      Models::QueryAxbBindFixedLineResponse queryAxbBindFixedLine(const Models::QueryAxbBindFixedLineRequest &request);

      /**
       * @summary Queries the binding information of an AXN landline privacy number.
       *
       * @param request QueryAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxnBindFixedLineResponse
       */
      Models::QueryAxnBindFixedLineResponse queryAxnBindFixedLineWithOptions(const Models::QueryAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding information of an AXN landline privacy number.
       *
       * @param request QueryAxnBindFixedLineRequest
       * @return QueryAxnBindFixedLineResponse
       */
      Models::QueryAxnBindFixedLineResponse queryAxnBindFixedLine(const Models::QueryAxnBindFixedLineRequest &request);

      /**
       * @summary Queries the binding information of a landline AXN extension number.
       *
       * @param request QueryAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAxnExtensionBindFixedLineResponse
       */
      Models::QueryAxnExtensionBindFixedLineResponse queryAxnExtensionBindFixedLineWithOptions(const Models::QueryAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding information of a landline AXN extension number.
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
       * @summary Query the reporting status of an A number.
       *
       * @description Before you invoke this API to query the reporting status of an A number, you must first submit the real-name information for the mobile or landline A number by calling the [CreatePhoneNoAReport](https://help.aliyun.com/document_detail/2880908.html) or [CreateFixedNoAReport](https://help.aliyun.com/document_detail/2881429.html) API. For detailed instructions, see [Submit real-name information for an A number via API](https://help.aliyun.com/document_detail/2880077.html).
       *
       * @param request QuerySecretAPhoneNoToCustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretAPhoneNoToCustResponse
       */
      Models::QuerySecretAPhoneNoToCustResponse querySecretAPhoneNoToCustWithOptions(const Models::QuerySecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the reporting status of an A number.
       *
       * @description Before you invoke this API to query the reporting status of an A number, you must first submit the real-name information for the mobile or landline A number by calling the [CreatePhoneNoAReport](https://help.aliyun.com/document_detail/2880908.html) or [CreateFixedNoAReport](https://help.aliyun.com/document_detail/2881429.html) API. For detailed instructions, see [Submit real-name information for an A number via API](https://help.aliyun.com/document_detail/2880077.html).
       *
       * @param request QuerySecretAPhoneNoToCustRequest
       * @return QuerySecretAPhoneNoToCustResponse
       */
      Models::QuerySecretAPhoneNoToCustResponse querySecretAPhoneNoToCust(const Models::QuerySecretAPhoneNoToCustRequest &request);

      /**
       * @summary Queries the property information of a private number.
       *
       * @description - You can query information about a private number (X number), including the purchase time, carrier, province, city, and status.
       * - Before you call this operation, make sure that you have the private number (X number) that you want to query.
       * ### QPS limit
       * The single-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, the API call is throttled. Call this operation properly.
       *
       * @param request QuerySecretNoDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretNoDetailResponse
       */
      Models::QuerySecretNoDetailResponse querySecretNoDetailWithOptions(const Models::QuerySecretNoDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the property information of a private number.
       *
       * @description - You can query information about a private number (X number), including the purchase time, carrier, province, city, and status.
       * - Before you call this operation, make sure that you have the private number (X number) that you want to query.
       * ### QPS limit
       * The single-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, the API call is throttled. Call this operation properly.
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
       * @summary 对客分页查询指定迁移记录的明细，记录的来源与目标号池须均归属 aliUid。
       *
       * @param request QuerySecretTransferDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySecretTransferDetailsResponse
       */
      Models::QuerySecretTransferDetailsResponse querySecretTransferDetailsWithOptions(const Models::QuerySecretTransferDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 对客分页查询指定迁移记录的明细，记录的来源与目标号池须均归属 aliUid。
       *
       * @param request QuerySecretTransferDetailsRequest
       * @return QuerySecretTransferDetailsResponse
       */
      Models::QuerySecretTransferDetailsResponse querySecretTransferDetails(const Models::QuerySecretTransferDetailsRequest &request);

      /**
       * @summary Queries the downloadable URL of a call recording by call ID.
       *
       * @param request QuerySoundRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySoundRecordResponse
       */
      Models::QuerySoundRecordResponse querySoundRecordWithOptions(const Models::QuerySoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the downloadable URL of a call recording by call ID.
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
       * @summary Queries the binding details of a phone number. Retrieves information such as the binding relationship status, extension number, recording status, and ASR status.
       *
       * @description Before you call this operation, make sure that you have the private number (X number) to query and that the number has a binding relationship.
       * ### QPS limit 
       * The queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       * ### PoolKey and ProductType limit
       * Specify at least one of the PoolKey and ProductType parameters. If neither parameter is specified, an error is returned.
       * Former Alibaba Dayu users should specify the ProductType parameter, and Alibaba Cloud users should specify the PoolKey parameter.
       *
       * @param request QuerySubscriptionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySubscriptionDetailResponse
       */
      Models::QuerySubscriptionDetailResponse querySubscriptionDetailWithOptions(const Models::QuerySubscriptionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding details of a phone number. Retrieves information such as the binding relationship status, extension number, recording status, and ASR status.
       *
       * @description Before you call this operation, make sure that you have the private number (X number) to query and that the number has a binding relationship.
       * ### QPS limit 
       * The queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       * ### PoolKey and ProductType limit
       * Specify at least one of the PoolKey and ProductType parameters. If neither parameter is specified, an error is returned.
       * Former Alibaba Dayu users should specify the ProductType parameter, and Alibaba Cloud users should specify the PoolKey parameter.
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
       * @summary Dissociates a specified call binding relationship (A, X, and B). After the call binding relationship is dissociated, Employee B cannot call Customer A through Work Number X.
       *
       * @param request UnBindAXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindAXBResponse
       */
      Models::UnBindAXBResponse unBindAXBWithOptions(const Models::UnBindAXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a specified call binding relationship (A, X, and B). After the call binding relationship is dissociated, Employee B cannot call Customer A through Work Number X.
       *
       * @param request UnBindAXBRequest
       * @return UnBindAXBResponse
       */
      Models::UnBindAXBResponse unBindAXB(const Models::UnBindAXBRequest &request);

      /**
       * @summary Cancels the binding between work number X and employee number B. After the binding is canceled, calls to X are no longer forwarded to B.
       *
       * @param request UnBindXBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnBindXBResponse
       */
      Models::UnBindXBResponse unBindXBWithOptions(const Models::UnBindXBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the binding between work number X and employee number B. After the binding is canceled, calls to X are no longer forwarded to B.
       *
       * @param request UnBindXBRequest
       * @return UnBindXBResponse
       */
      Models::UnBindXBResponse unBindXB(const Models::UnBindXBRequest &request);

      /**
       * @summary Unbinds a 700 number.
       *
       * @param request UnbindSubs700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindSubs700Response
       */
      Models::UnbindSubs700Response unbindSubs700WithOptions(const Models::UnbindSubs700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a 700 number.
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
       * @summary Updates the binding information of an AXB privacy number for landlines.
       *
       * @description When you update an AXB privacy number for landlines, you cannot modify Number A and Number B at the same time. For example, if the original binding relationship is A1 and B1, you can change it to A1 and B2, or A2 and B1.
       *
       * @param tmpReq UpdateAxbBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxbBindFixedLineResponse
       */
      Models::UpdateAxbBindFixedLineResponse updateAxbBindFixedLineWithOptions(const Models::UpdateAxbBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the binding information of an AXB privacy number for landlines.
       *
       * @description When you update an AXB privacy number for landlines, you cannot modify Number A and Number B at the same time. For example, if the original binding relationship is A1 and B1, you can change it to A1 and B2, or A2 and B1.
       *
       * @param request UpdateAxbBindFixedLineRequest
       * @return UpdateAxbBindFixedLineResponse
       */
      Models::UpdateAxbBindFixedLineResponse updateAxbBindFixedLine(const Models::UpdateAxbBindFixedLineRequest &request);

      /**
       * @summary Updates the binding information of a landline AXN privacy number.
       *
       * @param tmpReq UpdateAxnBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxnBindFixedLineResponse
       */
      Models::UpdateAxnBindFixedLineResponse updateAxnBindFixedLineWithOptions(const Models::UpdateAxnBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the binding information of a landline AXN privacy number.
       *
       * @param request UpdateAxnBindFixedLineRequest
       * @return UpdateAxnBindFixedLineResponse
       */
      Models::UpdateAxnBindFixedLineResponse updateAxnBindFixedLine(const Models::UpdateAxnBindFixedLineRequest &request);

      /**
       * @summary Updates the binding relationship of a landline AXN extension number.
       *
       * @param tmpReq UpdateAxnExtensionBindFixedLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAxnExtensionBindFixedLineResponse
       */
      Models::UpdateAxnExtensionBindFixedLineResponse updateAxnExtensionBindFixedLineWithOptions(const Models::UpdateAxnExtensionBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the binding relationship of a landline AXN extension number.
       *
       * @param request UpdateAxnExtensionBindFixedLineRequest
       * @return UpdateAxnExtensionBindFixedLineResponse
       */
      Models::UpdateAxnExtensionBindFixedLineResponse updateAxnExtensionBindFixedLine(const Models::UpdateAxnExtensionBindFixedLineRequest &request);

      /**
       * @summary Modifies the binding relationship of a 700 number.
       *
       * @param request UpdateSubs700Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubs700Response
       */
      Models::UpdateSubs700Response updateSubs700WithOptions(const Models::UpdateSubs700Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the binding relationship of a 700 number.
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
