// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ONSMQTT20200420_HPP_
#define ALIBABACLOUD_ONSMQTT20200420_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OnsMqtt20200420Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OnsMqtt20200420.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, which allows clients to authenticate by using device certificates. A CA certificate is used to issue device certificates for clients and verify the validity of the device certificates. A CA certificate must be active to be used. By default, a CA certificate is active after registration. If a CA certificate is changed to the inactive state, you can invoke this operation to reactivate it.
       *
       * @description - Only Platinum<props="china"> and Professional instances support the ActiveCaCertificate operation.
       * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
       * - The ActiveCaCertificate operation only supports CA certificates that are registered on the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query the registered CA certificates under a specified instance.
       *
       * @param request ActiveCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveCaCertificateResponse
       */
      Models::ActiveCaCertificateResponse activeCaCertificateWithOptions(const Models::ActiveCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, which allows clients to authenticate by using device certificates. A CA certificate is used to issue device certificates for clients and verify the validity of the device certificates. A CA certificate must be active to be used. By default, a CA certificate is active after registration. If a CA certificate is changed to the inactive state, you can invoke this operation to reactivate it.
       *
       * @description - Only Platinum<props="china"> and Professional instances support the ActiveCaCertificate operation.
       * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
       * - The ActiveCaCertificate operation only supports CA certificates that are registered on the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query the registered CA certificates under a specified instance.
       *
       * @param request ActiveCaCertificateRequest
       * @return ActiveCaCertificateResponse
       */
      Models::ActiveCaCertificateResponse activeCaCertificate(const Models::ActiveCaCertificateRequest &request);

      /**
       * @summary Activates a device certificate. A device certificate is a digital certificate issued by a CA root certificate to a client device for security authentication when the client connects to the server. When a client device uses a device certificate for access authentication, the server verifies the device certificate based on the registered CA certificate. If the CA certificate and the device certificate match, the client authentication succeeds, and the system automatically registers the device certificate on the server. By default, a device certificate is in the activated state after it is registered on the server. If a device certificate that you want to use is deactivated, you can call this operation to reactivate it.
       *
       * @description - Only Platinum<props="china"> and Professional edition instances support the ActiveDeviceCertificate operation.
       * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of MSMQ for MQTT. DingTalk group ID: 35228338.
       *
       * @param request ActiveDeviceCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActiveDeviceCertificateResponse
       */
      Models::ActiveDeviceCertificateResponse activeDeviceCertificateWithOptions(const Models::ActiveDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates a device certificate. A device certificate is a digital certificate issued by a CA root certificate to a client device for security authentication when the client connects to the server. When a client device uses a device certificate for access authentication, the server verifies the device certificate based on the registered CA certificate. If the CA certificate and the device certificate match, the client authentication succeeds, and the system automatically registers the device certificate on the server. By default, a device certificate is in the activated state after it is registered on the server. If a device certificate that you want to use is deactivated, you can call this operation to reactivate it.
       *
       * @description - Only Platinum<props="china"> and Professional edition instances support the ActiveDeviceCertificate operation.
       * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of MSMQ for MQTT. DingTalk group ID: 35228338.
       *
       * @param request ActiveDeviceCertificateRequest
       * @return ActiveDeviceCertificateResponse
       */
      Models::ActiveDeviceCertificateResponse activeDeviceCertificate(const Models::ActiveDeviceCertificateRequest &request);

      /**
       * @summary Adds a connection blacklist to disable connections from a specific device.
       *
       * @param request AddCustomAuthConnectBlackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomAuthConnectBlackResponse
       */
      Models::AddCustomAuthConnectBlackResponse addCustomAuthConnectBlackWithOptions(const Models::AddCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a connection blacklist to disable connections from a specific device.
       *
       * @param request AddCustomAuthConnectBlackRequest
       * @return AddCustomAuthConnectBlackResponse
       */
      Models::AddCustomAuthConnectBlackResponse addCustomAuthConnectBlack(const Models::AddCustomAuthConnectBlackRequest &request);

      /**
       * @summary Adds account authentication information, which can be specified at the client level.
       *
       * @param request AddCustomAuthIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomAuthIdentityResponse
       */
      Models::AddCustomAuthIdentityResponse addCustomAuthIdentityWithOptions(const Models::AddCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds account authentication information, which can be specified at the client level.
       *
       * @param request AddCustomAuthIdentityRequest
       * @return AddCustomAuthIdentityResponse
       */
      Models::AddCustomAuthIdentityResponse addCustomAuthIdentity(const Models::AddCustomAuthIdentityRequest &request);

      /**
       * @summary Adds authorization information for a topic resource. A first-level topic must be created in the console in advance.
       *
       * @param request AddCustomAuthPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomAuthPermissionResponse
       */
      Models::AddCustomAuthPermissionResponse addCustomAuthPermissionWithOptions(const Models::AddCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds authorization information for a topic resource. A first-level topic must be created in the console in advance.
       *
       * @param request AddCustomAuthPermissionRequest
       * @return AddCustomAuthPermissionResponse
       */
      Models::AddCustomAuthPermissionResponse addCustomAuthPermission(const Models::AddCustomAuthPermissionRequest &request);

      /**
       * @summary When token-based authentication is used, the ApsaraMQ for MQTT broker issues a token (temporary credential) to the client, and the client must include the token when accessing the ApsaraMQ for MQTT broker to authenticate permissions. This API operation is used to apply for a temporary token from ApsaraMQ for MQTT.
       *
       * @description - The request frequency limit for a single user is 100 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
       * - Each time you successfully call the **ApplyToken** API operation, it is counted as one message TPS, which affects your billing. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request ApplyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyTokenResponse
       */
      Models::ApplyTokenResponse applyTokenWithOptions(const Models::ApplyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When token-based authentication is used, the ApsaraMQ for MQTT broker issues a token (temporary credential) to the client, and the client must include the token when accessing the ApsaraMQ for MQTT broker to authenticate permissions. This API operation is used to apply for a temporary token from ApsaraMQ for MQTT.
       *
       * @description - The request frequency limit for a single user is 100 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
       * - Each time you successfully call the **ApplyToken** API operation, it is counted as one message TPS, which affects your billing. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request ApplyTokenRequest
       * @return ApplyTokenResponse
       */
      Models::ApplyTokenResponse applyToken(const Models::ApplyTokenRequest &request);

      /**
       * @summary Queries the online status of clients in batches by client ID.
       *
       * @description - The QPS limit for the **BatchQuerySessionByClientIds** operation is 100. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       * - You can query the online status of up to 10 client IDs each time you call the **BatchQuerySessionByClientIds** operation.
       * - Each successful call to the **BatchQuerySessionByClientIds** operation is counted as one message TPS, which affects your billing. For billing details, see [Billing](https://help.aliyun.com/document_detail/52819.html).
       * - Considering the performance impact, the **BatchQuerySessionByClientIds** operation uses an internal cache for queries, which may result in data inconsistency. For exact queries, use the [QuerySessionByClientId](https://help.aliyun.com/document_detail/2603924.html) operation.
       *
       * @param request BatchQuerySessionByClientIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQuerySessionByClientIdsResponse
       */
      Models::BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIdsWithOptions(const Models::BatchQuerySessionByClientIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the online status of clients in batches by client ID.
       *
       * @description - The QPS limit for the **BatchQuerySessionByClientIds** operation is 100. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       * - You can query the online status of up to 10 client IDs each time you call the **BatchQuerySessionByClientIds** operation.
       * - Each successful call to the **BatchQuerySessionByClientIds** operation is counted as one message TPS, which affects your billing. For billing details, see [Billing](https://help.aliyun.com/document_detail/52819.html).
       * - Considering the performance impact, the **BatchQuerySessionByClientIds** operation uses an internal cache for queries, which may result in data inconsistency. For exact queries, use the [QuerySessionByClientId](https://help.aliyun.com/document_detail/2603924.html) operation.
       *
       * @param request BatchQuerySessionByClientIdsRequest
       * @return BatchQuerySessionByClientIdsResponse
       */
      Models::BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIds(const Models::BatchQuerySessionByClientIdsRequest &request);

      /**
       * @summary Closes an active connection. However, the device may reconnect depending on the client reconnection mechanism.
       *
       * @param request CloseConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseConnectionResponse
       */
      Models::CloseConnectionResponse closeConnectionWithOptions(const Models::CloseConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes an active connection. However, the device may reconnect depending on the client reconnection mechanism.
       *
       * @param request CloseConnectionRequest
       * @return CloseConnectionResponse
       */
      Models::CloseConnectionResponse closeConnection(const Models::CloseConnectionRequest &request);

      /**
       * @summary When message producers and consumers connect to the ApsaraMQ for MQTT server to send and receive messages, they must specify a client ID as the unique identity of a client. A client ID consists of two parts in the <GroupID>@@@<DeviceID> format. The DeviceID is defined by the client, and the GroupID must be created in advance in the ApsaraMQ for MQTT server.
       *
       * @description Each successful call to the **CreateGroupId** operation is counted as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request CreateGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupIdResponse
       */
      Models::CreateGroupIdResponse createGroupIdWithOptions(const Models::CreateGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When message producers and consumers connect to the ApsaraMQ for MQTT server to send and receive messages, they must specify a client ID as the unique identity of a client. A client ID consists of two parts in the <GroupID>@@@<DeviceID> format. The DeviceID is defined by the client, and the GroupID must be created in advance in the ApsaraMQ for MQTT server.
       *
       * @description Each successful call to the **CreateGroupId** operation is counted as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request CreateGroupIdRequest
       * @return CreateGroupIdResponse
       */
      Models::CreateGroupIdResponse createGroupId(const Models::CreateGroupIdRequest &request);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, allowing clients to use device certificates for access authentication. CA certificates are used to issue device certificates for clients and verify the validity of device certificates. Before you use a CA certificate, you must register it with the ApsaraMQ for MQTT server. If you no longer need a CA certificate, you can invoke the DeleteCaCertificate operation to delete it from the server records.
       *
       * @description - Only Platinum<props="china"> and Professional instances support the DeleteCaCertificate operation.
       * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
       * - The DeleteCaCertificate operation only supports CA certificates that are already registered with the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query registered CA certificates under a specific instance.
       * - When you delete a specified CA certificate, all device certificates issued by this CA certificate and registered with the ApsaraMQ for MQTT server are also automatically deleted.
       *
       * @param request DeleteCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCaCertificateResponse
       */
      Models::DeleteCaCertificateResponse deleteCaCertificateWithOptions(const Models::DeleteCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, allowing clients to use device certificates for access authentication. CA certificates are used to issue device certificates for clients and verify the validity of device certificates. Before you use a CA certificate, you must register it with the ApsaraMQ for MQTT server. If you no longer need a CA certificate, you can invoke the DeleteCaCertificate operation to delete it from the server records.
       *
       * @description - Only Platinum<props="china"> and Professional instances support the DeleteCaCertificate operation.
       * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
       * - The DeleteCaCertificate operation only supports CA certificates that are already registered with the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query registered CA certificates under a specific instance.
       * - When you delete a specified CA certificate, all device certificates issued by this CA certificate and registered with the ApsaraMQ for MQTT server are also automatically deleted.
       *
       * @param request DeleteCaCertificateRequest
       * @return DeleteCaCertificateResponse
       */
      Models::DeleteCaCertificateResponse deleteCaCertificate(const Models::DeleteCaCertificateRequest &request);

      /**
       * @summary Deletes a connection blacklist.
       *
       * @param request DeleteCustomAuthConnectBlackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAuthConnectBlackResponse
       */
      Models::DeleteCustomAuthConnectBlackResponse deleteCustomAuthConnectBlackWithOptions(const Models::DeleteCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection blacklist.
       *
       * @param request DeleteCustomAuthConnectBlackRequest
       * @return DeleteCustomAuthConnectBlackResponse
       */
      Models::DeleteCustomAuthConnectBlackResponse deleteCustomAuthConnectBlack(const Models::DeleteCustomAuthConnectBlackRequest &request);

      /**
       * @summary Deletes custom authentication.
       *
       * @param request DeleteCustomAuthIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAuthIdentityResponse
       */
      Models::DeleteCustomAuthIdentityResponse deleteCustomAuthIdentityWithOptions(const Models::DeleteCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom authentication.
       *
       * @param request DeleteCustomAuthIdentityRequest
       * @return DeleteCustomAuthIdentityResponse
       */
      Models::DeleteCustomAuthIdentityResponse deleteCustomAuthIdentity(const Models::DeleteCustomAuthIdentityRequest &request);

      /**
       * @summary Deletes topic authorization.
       *
       * @param request DeleteCustomAuthPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAuthPermissionResponse
       */
      Models::DeleteCustomAuthPermissionResponse deleteCustomAuthPermissionWithOptions(const Models::DeleteCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes topic authorization.
       *
       * @param request DeleteCustomAuthPermissionRequest
       * @return DeleteCustomAuthPermissionResponse
       */
      Models::DeleteCustomAuthPermissionResponse deleteCustomAuthPermission(const Models::DeleteCustomAuthPermissionRequest &request);

      /**
       * @summary Deletes the registration information of a specified device certificate from the server storage. A device certificate is a digital certificate issued by a certification authority (CA) root certificate to a client device. It is used for security authentication when the client connects to the server. After authentication, the server and the client can communicate securely by using the encryption key in the certificate. If the authentication fails, the server rejects the client connection.
       *
       * @description - Only Platinum<props="china"> and Professional edition instances support the DeleteDeviceCertificate operation.
       * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
       *
       * @param request DeleteDeviceCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeviceCertificateResponse
       */
      Models::DeleteDeviceCertificateResponse deleteDeviceCertificateWithOptions(const Models::DeleteDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the registration information of a specified device certificate from the server storage. A device certificate is a digital certificate issued by a certification authority (CA) root certificate to a client device. It is used for security authentication when the client connects to the server. After authentication, the server and the client can communicate securely by using the encryption key in the certificate. If the authentication fails, the server rejects the client connection.
       *
       * @description - Only Platinum<props="china"> and Professional edition instances support the DeleteDeviceCertificate operation.
       * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
       *
       * @param request DeleteDeviceCertificateRequest
       * @return DeleteDeviceCertificateResponse
       */
      Models::DeleteDeviceCertificateResponse deleteDeviceCertificate(const Models::DeleteDeviceCertificateRequest &request);

      /**
       * @summary Deletes a group ID.
       *
       * @description Each successful call to the **DeleteGroupId** operation is counted as one message TPS, which affects your billing. For more information about billing, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request DeleteGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupIdResponse
       */
      Models::DeleteGroupIdResponse deleteGroupIdWithOptions(const Models::DeleteGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group ID.
       *
       * @description Each successful call to the **DeleteGroupId** operation is counted as one message TPS, which affects your billing. For more information about billing, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request DeleteGroupIdRequest
       * @return DeleteGroupIdResponse
       */
      Models::DeleteGroupIdResponse deleteGroupId(const Models::DeleteGroupIdRequest &request);

      /**
       * @summary Deletes wildcard subscriptions in batches.
       *
       * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request DeleteWildcardByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWildcardByTopicResponse
       */
      Models::DeleteWildcardByTopicResponse deleteWildcardByTopicWithOptions(const Models::DeleteWildcardByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes wildcard subscriptions in batches.
       *
       * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request DeleteWildcardByTopicRequest
       * @return DeleteWildcardByTopicResponse
       */
      Models::DeleteWildcardByTopicResponse deleteWildcardByTopic(const Models::DeleteWildcardByTopicRequest &request);

      /**
       * @summary Downgrades the public VIP access of a specific instance for multi-instance disaster recovery. This operation is supported only for Platinum instances and requires you to submit a ticket.
       *
       * @param request DisasterDowngradeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisasterDowngradeResponse
       */
      Models::DisasterDowngradeResponse disasterDowngradeWithOptions(const Models::DisasterDowngradeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downgrades the public VIP access of a specific instance for multi-instance disaster recovery. This operation is supported only for Platinum instances and requires you to submit a ticket.
       *
       * @param request DisasterDowngradeRequest
       * @return DisasterDowngradeResponse
       */
      Models::DisasterDowngradeResponse disasterDowngrade(const Models::DisasterDowngradeRequest &request);

      /**
       * @summary Restores Internet access for an instance using its virtual IP address (VIP) for graceful recovery in a multi-instance disaster recovery architecture. This operation is available only for Platinum Edition instances. To use this operation, submit a ticket.
       *
       * @param request DisasterRecoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisasterRecoveryResponse
       */
      Models::DisasterRecoveryResponse disasterRecoveryWithOptions(const Models::DisasterRecoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores Internet access for an instance using its virtual IP address (VIP) for graceful recovery in a multi-instance disaster recovery architecture. This operation is available only for Platinum Edition instances. To use this operation, submit a ticket.
       *
       * @param request DisasterRecoveryRequest
       * @return DisasterRecoveryResponse
       */
      Models::DisasterRecoveryResponse disasterRecovery(const Models::DisasterRecoveryRequest &request);

      /**
       * @summary Queries the details of a certificate authority (CA) certificate, such as the content and status of the certificate. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCaCertificateResponse
       */
      Models::GetCaCertificateResponse getCaCertificateWithOptions(const Models::GetCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate authority (CA) certificate, such as the content and status of the certificate. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetCaCertificateRequest
       * @return GetCaCertificateResponse
       */
      Models::GetCaCertificateResponse getCaCertificate(const Models::GetCaCertificateRequest &request);

      /**
       * @summary Queries the details of a device certificate. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetDeviceCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceCertificateResponse
       */
      Models::GetDeviceCertificateResponse getDeviceCertificateWithOptions(const Models::GetDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a device certificate. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetDeviceCertificateRequest
       * @return GetDeviceCertificateResponse
       */
      Models::GetDeviceCertificateResponse getDeviceCertificate(const Models::GetDeviceCertificateRequest &request);

      /**
       * @summary Queries the access credential of a device. If unique-certificate-per-device authentication is used as the authentication method on an ApsaraMQ for MQTT broker, an access credential that you apply for in advance is required for authentication when you connect your device to the broker. The connection can be established only after the authentication is passed.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **GetDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request GetDeviceCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeviceCredentialResponse
       */
      Models::GetDeviceCredentialResponse getDeviceCredentialWithOptions(const Models::GetDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access credential of a device. If unique-certificate-per-device authentication is used as the authentication method on an ApsaraMQ for MQTT broker, an access credential that you apply for in advance is required for authentication when you connect your device to the broker. The connection can be established only after the authentication is passed.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **GetDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request GetDeviceCredentialRequest
       * @return GetDeviceCredentialResponse
       */
      Models::GetDeviceCredentialResponse getDeviceCredential(const Models::GetDeviceCredentialRequest &request);

      /**
       * @summary Obtains the registration code of a specific certificate authority (CA) certificate. When you register a CA certificate with an ApsaraMQ for MQTT broker, you must upload the validation certificate of the CA certificate to verify whether you have the private key of the CA certificate. The validation certificate of a CA certificate must be generated by using the registration code of the CA certificate.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetRegisterCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRegisterCodeResponse
       */
      Models::GetRegisterCodeResponse getRegisterCodeWithOptions(const Models::GetRegisterCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the registration code of a specific certificate authority (CA) certificate. When you register a CA certificate with an ApsaraMQ for MQTT broker, you must upload the validation certificate of the CA certificate to verify whether you have the private key of the CA certificate. The validation certificate of a CA certificate must be generated by using the registration code of the CA certificate.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request GetRegisterCodeRequest
       * @return GetRegisterCodeResponse
       */
      Models::GetRegisterCodeResponse getRegisterCode(const Models::GetRegisterCodeRequest &request);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate-based device verification. Clients use device certificates for connection authentication. A Certificate Authority (CA) certificate is used to issue device certificates to clients and to verify the validity of those certificates. If you do not need to use a CA certificate for a period of time, call this operation to unregister it. This changes the status of the CA certificate to inactive. When you need to use the CA certificate again, you can call the ActiveCaCertificate operation to reactivate it.
       *
       * @description - Only Platinum Edition<props="china"> and Professional Edition instances support the InactivateCaCertificate operation.
       * - The request rate for a single user is limited to 500 per second. If you have special requirements, contact ApsaraMQ for MQTT technical support. The DingTalk group number is 35228338.
       * - You can call this operation only for CA certificates that are registered with ApsaraMQ for MQTT. To query the registered CA certificates for an instance, call the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation.
       *
       * @param request InactivateCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InactivateCaCertificateResponse
       */
      Models::InactivateCaCertificateResponse inactivateCaCertificateWithOptions(const Models::InactivateCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ApsaraMQ for MQTT supports X.509 certificate-based device verification. Clients use device certificates for connection authentication. A Certificate Authority (CA) certificate is used to issue device certificates to clients and to verify the validity of those certificates. If you do not need to use a CA certificate for a period of time, call this operation to unregister it. This changes the status of the CA certificate to inactive. When you need to use the CA certificate again, you can call the ActiveCaCertificate operation to reactivate it.
       *
       * @description - Only Platinum Edition<props="china"> and Professional Edition instances support the InactivateCaCertificate operation.
       * - The request rate for a single user is limited to 500 per second. If you have special requirements, contact ApsaraMQ for MQTT technical support. The DingTalk group number is 35228338.
       * - You can call this operation only for CA certificates that are registered with ApsaraMQ for MQTT. To query the registered CA certificates for an instance, call the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation.
       *
       * @param request InactivateCaCertificateRequest
       * @return InactivateCaCertificateResponse
       */
      Models::InactivateCaCertificateResponse inactivateCaCertificate(const Models::InactivateCaCertificateRequest &request);

      /**
       * @summary A device certificate is a digital certificate that a root Certificate Authority (CA) issues to a client device. The service uses this certificate to authenticate the client during connection. If authentication is successful, the service and the client can communicate securely using the encryption key in the certificate. If authentication fails, the service denies the client\\"s connection. Should you need to temporarily disable a device certificate, you can call this operation to inactivate it, setting its status to inactive.
       *
       * @description - Only Platinum Edition<props="china">and Professional Edition instances support the InactivateDeviceCertificate operation.
       * - The request frequency for a single user is limited to 500 calls per second. For special requirements, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request InactivateDeviceCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InactivateDeviceCertificateResponse
       */
      Models::InactivateDeviceCertificateResponse inactivateDeviceCertificateWithOptions(const Models::InactivateDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A device certificate is a digital certificate that a root Certificate Authority (CA) issues to a client device. The service uses this certificate to authenticate the client during connection. If authentication is successful, the service and the client can communicate securely using the encryption key in the certificate. If authentication fails, the service denies the client\\"s connection. Should you need to temporarily disable a device certificate, you can call this operation to inactivate it, setting its status to inactive.
       *
       * @description - Only Platinum Edition<props="china">and Professional Edition instances support the InactivateDeviceCertificate operation.
       * - The request frequency for a single user is limited to 500 calls per second. For special requirements, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request InactivateDeviceCertificateRequest
       * @return InactivateDeviceCertificateResponse
       */
      Models::InactivateDeviceCertificateResponse inactivateDeviceCertificate(const Models::InactivateDeviceCertificateRequest &request);

      /**
       * @summary Queries all certificate authority (CA) certificates that are registered with an ApsaraMQ for MQTT instance. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCaCertificateResponse
       */
      Models::ListCaCertificateResponse listCaCertificateWithOptions(const Models::ListCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all certificate authority (CA) certificates that are registered with an ApsaraMQ for MQTT instance. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListCaCertificateRequest
       * @return ListCaCertificateResponse
       */
      Models::ListCaCertificateResponse listCaCertificate(const Models::ListCaCertificateRequest &request);

      /**
       * @summary Queries all device certificates that are registered with an ApsaraMQ for MQTT instance. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListDeviceCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceCertificateResponse
       */
      Models::ListDeviceCertificateResponse listDeviceCertificateWithOptions(const Models::ListDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all device certificates that are registered with an ApsaraMQ for MQTT instance. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListDeviceCertificateRequest
       * @return ListDeviceCertificateResponse
       */
      Models::ListDeviceCertificateResponse listDeviceCertificate(const Models::ListDeviceCertificateRequest &request);

      /**
       * @summary Queries all device certificates that are issued by a certificate authority (CA) certificate and registered with ApsaraMQ for MQTT brokers. Device certificates are digital certificates issued to clients by CA root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListDeviceCertificateByCaSnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceCertificateByCaSnResponse
       */
      Models::ListDeviceCertificateByCaSnResponse listDeviceCertificateByCaSnWithOptions(const Models::ListDeviceCertificateByCaSnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all device certificates that are issued by a certificate authority (CA) certificate and registered with ApsaraMQ for MQTT brokers. Device certificates are digital certificates issued to clients by CA root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
       *
       * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request ListDeviceCertificateByCaSnRequest
       * @return ListDeviceCertificateByCaSnResponse
       */
      Models::ListDeviceCertificateByCaSnResponse listDeviceCertificateByCaSn(const Models::ListDeviceCertificateByCaSnRequest &request);

      /**
       * @summary Queries clients that have applied for access credentials in unique-certificate-per-device authentication mode in an ApsaraMQ for MQTT instance.
       *
       * @param request ListDeviceCredentialClientIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeviceCredentialClientIdResponse
       */
      Models::ListDeviceCredentialClientIdResponse listDeviceCredentialClientIdWithOptions(const Models::ListDeviceCredentialClientIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries clients that have applied for access credentials in unique-certificate-per-device authentication mode in an ApsaraMQ for MQTT instance.
       *
       * @param request ListDeviceCredentialClientIdRequest
       * @return ListDeviceCredentialClientIdResponse
       */
      Models::ListDeviceCredentialClientIdResponse listDeviceCredentialClientId(const Models::ListDeviceCredentialClientIdRequest &request);

      /**
       * @summary You can call the ListGroupId operation to query all Group IDs in an instance.
       *
       * @description Each successful call to the **ListGroupId** operation is counted as one message transaction and is billed based on transactions per second (TPS). For more information, see [billing details](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request ListGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupIdResponse
       */
      Models::ListGroupIdResponse listGroupIdWithOptions(const Models::ListGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListGroupId operation to query all Group IDs in an instance.
       *
       * @description Each successful call to the **ListGroupId** operation is counted as one message transaction and is billed based on transactions per second (TPS). For more information, see [billing details](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request ListGroupIdRequest
       * @return ListGroupIdResponse
       */
      Models::ListGroupIdResponse listGroupId(const Models::ListGroupIdRequest &request);

      /**
       * @summary You can call this operation to query a list of instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query a list of instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Lists the tags that are attached to one or more resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the tags that are attached to one or more resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries a client ID in a connection blacklist.
       *
       * @param request QueryCustomAuthConnectBlackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomAuthConnectBlackResponse
       */
      Models::QueryCustomAuthConnectBlackResponse queryCustomAuthConnectBlackWithOptions(const Models::QueryCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a client ID in a connection blacklist.
       *
       * @param request QueryCustomAuthConnectBlackRequest
       * @return QueryCustomAuthConnectBlackResponse
       */
      Models::QueryCustomAuthConnectBlackResponse queryCustomAuthConnectBlack(const Models::QueryCustomAuthConnectBlackRequest &request);

      /**
       * @summary Queries custom identity authentication.
       *
       * @param request QueryCustomAuthIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomAuthIdentityResponse
       */
      Models::QueryCustomAuthIdentityResponse queryCustomAuthIdentityWithOptions(const Models::QueryCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom identity authentication.
       *
       * @param request QueryCustomAuthIdentityRequest
       * @return QueryCustomAuthIdentityResponse
       */
      Models::QueryCustomAuthIdentityResponse queryCustomAuthIdentity(const Models::QueryCustomAuthIdentityRequest &request);

      /**
       * @summary Queries the authorization information about a topic.
       *
       * @param request QueryCustomAuthPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCustomAuthPermissionResponse
       */
      Models::QueryCustomAuthPermissionResponse queryCustomAuthPermissionWithOptions(const Models::QueryCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information about a topic.
       *
       * @param request QueryCustomAuthPermissionRequest
       * @return QueryCustomAuthPermissionResponse
       */
      Models::QueryCustomAuthPermissionResponse queryCustomAuthPermission(const Models::QueryCustomAuthPermissionRequest &request);

      /**
       * @summary Queries the device trace of an ApsaraMQ for MQTT client by paging. When a device encounters an exception, you can call this operation to query the connection history of the specified device to help you quickly identify the cause of the exception.
       *
       * @description - Each successful call to the **QueryMqttTraceDevice** operation counts as one message TPS, which affects your billing. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52819.html).
       * - The queries per second (QPS) limit for a single user on this operation is 500. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMqttTraceDeviceResponse
       */
      Models::QueryMqttTraceDeviceResponse queryMqttTraceDeviceWithOptions(const Models::QueryMqttTraceDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the device trace of an ApsaraMQ for MQTT client by paging. When a device encounters an exception, you can call this operation to query the connection history of the specified device to help you quickly identify the cause of the exception.
       *
       * @description - Each successful call to the **QueryMqttTraceDevice** operation counts as one message TPS, which affects your billing. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52819.html).
       * - The queries per second (QPS) limit for a single user on this operation is 500. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceDeviceRequest
       * @return QueryMqttTraceDeviceResponse
       */
      Models::QueryMqttTraceDeviceResponse queryMqttTraceDevice(const Models::QueryMqttTraceDeviceRequest &request);

      /**
       * @summary Queries messages on a device within a specific period of time. If a message is not sent or received as expected, you can call this operation to query the messaging status of the message to efficiently troubleshoot issues.
       *
       * @description *   Each successful call to the **QueryMqttTraceMessageOfClient** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessageOfClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMqttTraceMessageOfClientResponse
       */
      Models::QueryMqttTraceMessageOfClientResponse queryMqttTraceMessageOfClientWithOptions(const Models::QueryMqttTraceMessageOfClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries messages on a device within a specific period of time. If a message is not sent or received as expected, you can call this operation to query the messaging status of the message to efficiently troubleshoot issues.
       *
       * @description *   Each successful call to the **QueryMqttTraceMessageOfClient** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessageOfClientRequest
       * @return QueryMqttTraceMessageOfClientResponse
       */
      Models::QueryMqttTraceMessageOfClientResponse queryMqttTraceMessageOfClient(const Models::QueryMqttTraceMessageOfClientRequest &request);

      /**
       * @summary Queries the trace of a message. If a message is not sent or received as expected, you can call this operation to view the message details to troubleshoot the issue. For example, you can query the time when the message is published and the client that publishes the message.
       *
       * @description *   Each successful call to the **QueryMqttTraceMessagePublish** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessagePublishRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMqttTraceMessagePublishResponse
       */
      Models::QueryMqttTraceMessagePublishResponse queryMqttTraceMessagePublishWithOptions(const Models::QueryMqttTraceMessagePublishRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trace of a message. If a message is not sent or received as expected, you can call this operation to view the message details to troubleshoot the issue. For example, you can query the time when the message is published and the client that publishes the message.
       *
       * @description *   Each successful call to the **QueryMqttTraceMessagePublish** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessagePublishRequest
       * @return QueryMqttTraceMessagePublishResponse
       */
      Models::QueryMqttTraceMessagePublishResponse queryMqttTraceMessagePublish(const Models::QueryMqttTraceMessagePublishRequest &request);

      /**
       * @summary Queries the delivery trace of a message. If a message is not sent or received as expected, you can call this operation to view the details about the message. For example, you can query the clients that subscribe to the message and the time when the message is delivered. This operation helps you locate the problem and identify the cause of the problem.
       *
       * @description - Each successful call to the **QueryMqttTraceMessageSubscribe** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessageSubscribeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMqttTraceMessageSubscribeResponse
       */
      Models::QueryMqttTraceMessageSubscribeResponse queryMqttTraceMessageSubscribeWithOptions(const Models::QueryMqttTraceMessageSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the delivery trace of a message. If a message is not sent or received as expected, you can call this operation to view the details about the message. For example, you can query the clients that subscribe to the message and the time when the message is delivered. This operation helps you locate the problem and identify the cause of the problem.
       *
       * @description - Each successful call to the **QueryMqttTraceMessageSubscribe** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       * - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       *
       * @param request QueryMqttTraceMessageSubscribeRequest
       * @return QueryMqttTraceMessageSubscribeResponse
       */
      Models::QueryMqttTraceMessageSubscribeResponse queryMqttTraceMessageSubscribe(const Models::QueryMqttTraceMessageSubscribeRequest &request);

      /**
       * @summary Queries the running status of an ApsaraMQ for MQTT client. You can troubleshoot issues based on the queried results. You can enter the ID of an ApsaraMQ for MQTT client to check the connection status and IP address of the device.
       *
       * @description - You can call this operation up to 500 times per second.\\*\\*\\*\\* For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **QuerySessionByClientId** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QuerySessionByClientIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySessionByClientIdResponse
       */
      Models::QuerySessionByClientIdResponse querySessionByClientIdWithOptions(const Models::QuerySessionByClientIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running status of an ApsaraMQ for MQTT client. You can troubleshoot issues based on the queried results. You can enter the ID of an ApsaraMQ for MQTT client to check the connection status and IP address of the device.
       *
       * @description - You can call this operation up to 500 times per second.\\*\\*\\*\\* For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **QuerySessionByClientId** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QuerySessionByClientIdRequest
       * @return QuerySessionByClientIdResponse
       */
      Models::QuerySessionByClientIdResponse querySessionByClientId(const Models::QuerySessionByClientIdRequest &request);

      /**
       * @summary Queries the status of a token. If token-based authentication is used for permission authentication on an ApsaraMQ for MQTT broker, a token that is issued by the broker is required for authentication each time a client is connected to the broker. A token is a temporary credential and is valid only within a specific period of time. You can call this operation to query whether a token expires.
       *
       * @description *   You can call this operation up to 100 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
       * *   Each successful call to the **QueryToken** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QueryTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTokenResponse
       */
      Models::QueryTokenResponse queryTokenWithOptions(const Models::QueryTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a token. If token-based authentication is used for permission authentication on an ApsaraMQ for MQTT broker, a token that is issued by the broker is required for authentication each time a client is connected to the broker. A token is a temporary credential and is valid only within a specific period of time. You can call this operation to query whether a token expires.
       *
       * @description *   You can call this operation up to 100 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
       * *   Each successful call to the **QueryToken** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QueryTokenRequest
       * @return QueryTokenResponse
       */
      Models::QueryTokenResponse queryToken(const Models::QueryTokenRequest &request);

      /**
       * @summary Queries all wildcards and the upper limit under a specific topic.
       *
       * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QueryWildcardByTopicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryWildcardByTopicResponse
       */
      Models::QueryWildcardByTopicResponse queryWildcardByTopicWithOptions(const Models::QueryWildcardByTopicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all wildcards and the upper limit under a specific topic.
       *
       * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request QueryWildcardByTopicRequest
       * @return QueryWildcardByTopicResponse
       */
      Models::QueryWildcardByTopicResponse queryWildcardByTopic(const Models::QueryWildcardByTopicRequest &request);

      /**
       * @summary Updates the access credential of a device.
       *
       * @description ## [](#)Limits
       * You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * > Each successful call to the **RefreshDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RefreshDeviceCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDeviceCredentialResponse
       */
      Models::RefreshDeviceCredentialResponse refreshDeviceCredentialWithOptions(const Models::RefreshDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the access credential of a device.
       *
       * @description ## [](#)Limits
       * You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * > Each successful call to the **RefreshDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RefreshDeviceCredentialRequest
       * @return RefreshDeviceCredentialResponse
       */
      Models::RefreshDeviceCredentialResponse refreshDeviceCredential(const Models::RefreshDeviceCredentialRequest &request);

      /**
       * @summary RegisterCaCertificate
       *
       * @description - Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * - You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request RegisterCaCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterCaCertificateResponse
       */
      Models::RegisterCaCertificateResponse registerCaCertificateWithOptions(const Models::RegisterCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RegisterCaCertificate
       *
       * @description - Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
       * - You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
       *
       * @param request RegisterCaCertificateRequest
       * @return RegisterCaCertificateResponse
       */
      Models::RegisterCaCertificateResponse registerCaCertificate(const Models::RegisterCaCertificateRequest &request);

      /**
       * @summary Registers an access credential for a device. In unique-certificate-per-device authentication mode, an application server applies a unique access credential for each device from the corresponding ApsaraMQ for MQTT broker. The access credential of a device consists of the client ID, AccessKey ID, and AccessKey secret of the device. When you connect a device to ApsaraMQ for MQTT, you must configure Username and Password based on the access credential of the device for authentication. You can activate the device and transfer data between the device and ApsaraMQ for MQTT only after the authentication is passed.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **RegisterDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RegisterDeviceCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterDeviceCredentialResponse
       */
      Models::RegisterDeviceCredentialResponse registerDeviceCredentialWithOptions(const Models::RegisterDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers an access credential for a device. In unique-certificate-per-device authentication mode, an application server applies a unique access credential for each device from the corresponding ApsaraMQ for MQTT broker. The access credential of a device consists of the client ID, AccessKey ID, and AccessKey secret of the device. When you connect a device to ApsaraMQ for MQTT, you must configure Username and Password based on the access credential of the device for authentication. You can activate the device and transfer data between the device and ApsaraMQ for MQTT only after the authentication is passed.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **RegisterDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RegisterDeviceCredentialRequest
       * @return RegisterDeviceCredentialResponse
       */
      Models::RegisterDeviceCredentialResponse registerDeviceCredential(const Models::RegisterDeviceCredentialRequest &request);

      /**
       * @summary Revokes a token.
       *
       * @description *   You can call this operation up to 5 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
       * *   Each successful call to the **RevokeToken** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RevokeTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeTokenWithOptions(const Models::RevokeTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a token.
       *
       * @description *   You can call this operation up to 5 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
       * *   Each successful call to the **RevokeToken** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request RevokeTokenRequest
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeToken(const Models::RevokeTokenRequest &request);

      /**
       * @summary Sends a single message from an application on a cloud server to ApsaraMQ for MQTT.
       *
       * @description *   The **SendMessage** operation is called by an application on a cloud server. This operation is complementary to the operation that is called to send a message from an ApsaraMQ for MQTT client. For information about the differences between the scenarios of sending messages from applications on cloud servers and the scenarios of sending messages from ApsaraMQ for MQTT clients, see [Developer guide](https://help.aliyun.com/document_detail/179160.html).
       * *   Messages that are sent by calling the **SendMessage** operation cannot be forwarded to ApsaraMQ for RocketMQ. If you want to use an ApsaraMQ for MQTT broker to forward messages to ApsaraMQ for RocketMQ, use [an SDK to send the messages](https://help.aliyun.com/document_detail/174527.html). The **SendMessage** operation supports up to 1,000 queries per second (QPS). For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       * *   Each successful call to the **SendMessage** operation is calculated as a message transaction per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request SendMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const Models::SendMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a single message from an application on a cloud server to ApsaraMQ for MQTT.
       *
       * @description *   The **SendMessage** operation is called by an application on a cloud server. This operation is complementary to the operation that is called to send a message from an ApsaraMQ for MQTT client. For information about the differences between the scenarios of sending messages from applications on cloud servers and the scenarios of sending messages from ApsaraMQ for MQTT clients, see [Developer guide](https://help.aliyun.com/document_detail/179160.html).
       * *   Messages that are sent by calling the **SendMessage** operation cannot be forwarded to ApsaraMQ for RocketMQ. If you want to use an ApsaraMQ for MQTT broker to forward messages to ApsaraMQ for RocketMQ, use [an SDK to send the messages](https://help.aliyun.com/document_detail/174527.html). The **SendMessage** operation supports up to 1,000 queries per second (QPS). For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
       * *   Each successful call to the **SendMessage** operation is calculated as a message transaction per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const Models::SendMessageRequest &request);

      /**
       * @summary Configures a multi-domain certificate.
       *
       * @param request SetSniConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSniConfigResponse
       */
      Models::SetSniConfigResponse setSniConfigWithOptions(const Models::SetSniConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a multi-domain certificate.
       *
       * @param request SetSniConfigRequest
       * @return SetSniConfigResponse
       */
      Models::SetSniConfigResponse setSniConfig(const Models::SetSniConfigRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deregisters the access credential of a device. After the access credential of a device is deregistered, you can no longer use the access credential to authenticate the device on the ApsaraMQ for MQTT broker.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **UnRegisterDeviceCredential** operation increases the number of transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request UnRegisterDeviceCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnRegisterDeviceCredentialResponse
       */
      Models::UnRegisterDeviceCredentialResponse unRegisterDeviceCredentialWithOptions(const Models::UnRegisterDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deregisters the access credential of a device. After the access credential of a device is deregistered, you can no longer use the access credential to authenticate the device on the ApsaraMQ for MQTT broker.
       *
       * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
       * - Each successful call to the **UnRegisterDeviceCredential** operation increases the number of transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
       *
       * @param request UnRegisterDeviceCredentialRequest
       * @return UnRegisterDeviceCredentialResponse
       */
      Models::UnRegisterDeviceCredentialResponse unRegisterDeviceCredential(const Models::UnRegisterDeviceCredentialRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates custom authentication.
       *
       * @param request UpdateCustomAuthIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAuthIdentityResponse
       */
      Models::UpdateCustomAuthIdentityResponse updateCustomAuthIdentityWithOptions(const Models::UpdateCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates custom authentication.
       *
       * @param request UpdateCustomAuthIdentityRequest
       * @return UpdateCustomAuthIdentityResponse
       */
      Models::UpdateCustomAuthIdentityResponse updateCustomAuthIdentity(const Models::UpdateCustomAuthIdentityRequest &request);

      /**
       * @summary Updates the permissions on a topic.
       *
       * @param request UpdateCustomAuthPermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAuthPermissionResponse
       */
      Models::UpdateCustomAuthPermissionResponse updateCustomAuthPermissionWithOptions(const Models::UpdateCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the permissions on a topic.
       *
       * @param request UpdateCustomAuthPermissionRequest
       * @return UpdateCustomAuthPermissionResponse
       */
      Models::UpdateCustomAuthPermissionResponse updateCustomAuthPermission(const Models::UpdateCustomAuthPermissionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
