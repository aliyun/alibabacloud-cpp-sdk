// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SWASOPEN20200601_HPP_
#define ALIBABACLOUD_SWASOPEN20200601_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/SWASOPEN20200601Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/SWASOPEN20200601.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Shares a custom image with other Alibaba Cloud accounts in the same region to quickly deploy identical environment configurations for multiple simple application servers and improve deployment efficiency.
       *
       * @description - Before sharing a shared image, purge sensitive data and files.
       * - Obtain the Alibaba Cloud account ID. Move the mouse over the user profile picture in the upper-right corner of the console. In the pop-up user information box, if the account identity is an Alibaba Cloud account, the displayed account ID is the Alibaba Cloud account ID.
       *
       * @param request AddCustomImageShareAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomImageShareAccountResponse
       */
      Models::AddCustomImageShareAccountResponse addCustomImageShareAccountWithOptions(const Models::AddCustomImageShareAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares a custom image with other Alibaba Cloud accounts in the same region to quickly deploy identical environment configurations for multiple simple application servers and improve deployment efficiency.
       *
       * @description - Before sharing a shared image, purge sensitive data and files.
       * - Obtain the Alibaba Cloud account ID. Move the mouse over the user profile picture in the upper-right corner of the console. In the pop-up user information box, if the account identity is an Alibaba Cloud account, the displayed account ID is the Alibaba Cloud account ID.
       *
       * @param request AddCustomImageShareAccountRequest
       * @return AddCustomImageShareAccountResponse
       */
      Models::AddCustomImageShareAccountResponse addCustomImageShareAccount(const Models::AddCustomImageShareAccountRequest &request);

      /**
       * @summary Applies for a public network access endpoint.
       *
       * @description Lightweight database instances do not provide public endpoints by default. If you need public network access to the database through the lightweight container service or Data Management (DMS), you must apply for a public endpoint.
       *
       * @param request AllocatePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocatePublicConnectionResponse
       */
      Models::AllocatePublicConnectionResponse allocatePublicConnectionWithOptions(const Models::AllocatePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public network access endpoint.
       *
       * @description Lightweight database instances do not provide public endpoints by default. If you need public network access to the database through the lightweight container service or Data Management (DMS), you must apply for a public endpoint.
       *
       * @param request AllocatePublicConnectionRequest
       * @return AllocatePublicConnectionResponse
       */
      Models::AllocatePublicConnectionResponse allocatePublicConnection(const Models::AllocatePublicConnectionRequest &request);

      /**
       * @summary Applies a firewall template to configure firewall rules for multiple Simple Application Server instances at a time to improve configuration efficiency.
       *
       * @description If the port, protocol, or IP address of a firewall rule in the firewall template duplicates an existing rule of the instance, the new rule overwrites the existing rule regardless of whether the existing rule is enabled or disabled.
       *
       * @param request ApplyFirewallTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyFirewallTemplateResponse
       */
      Models::ApplyFirewallTemplateResponse applyFirewallTemplateWithOptions(const Models::ApplyFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a firewall template to configure firewall rules for multiple Simple Application Server instances at a time to improve configuration efficiency.
       *
       * @description If the port, protocol, or IP address of a firewall rule in the firewall template duplicates an existing rule of the instance, the new rule overwrites the existing rule regardless of whether the existing rule is enabled or disabled.
       *
       * @param request ApplyFirewallTemplateRequest
       * @return ApplyFirewallTemplateResponse
       */
      Models::ApplyFirewallTemplateResponse applyFirewallTemplate(const Models::ApplyFirewallTemplateRequest &request);

      /**
       * @summary Attaches a key pair to a simple application server.
       *
       * @description You can attach only one key pair to a simple application server in the console. If the selected simple application server is already attached to another key pair, the new key pair overwrites the existing one.
       *
       * @param request AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a key pair to a simple application server.
       *
       * @description You can attach only one key pair to a simple application server in the console. If the selected simple application server is already attached to another key pair, the new key pair overwrites the existing one.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Creates a Cloud Assistant command.
       *
       * @param request CreateCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommandWithOptions(const Models::CreateCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Cloud Assistant command.
       *
       * @param request CreateCommandRequest
       * @return CreateCommandResponse
       */
      Models::CreateCommandResponse createCommand(const Models::CreateCommandRequest &request);

      /**
       * @summary Creates a custom image from a snapshot.
       *
       * @description A custom image is an image that you create from a snapshot of a Simple Application Server. You can use a configured custom image to create more Simple Application Servers with the same configurations. You can also share the custom image to Elastic Computing Service to create ECS instances or replace operating systems by using the shared image. For more information about custom images, see [Custom image overview](https://help.aliyun.com/document_detail/199375.html).
       * Before you create a custom image, you must create a system disk snapshot for the Simple Application Server. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
       * > If you want to include data disk data in the custom image, create a data disk snapshot for the server first.
       * Before you create a custom image, take note of the following items:
       * - The custom image is created in the same region as the Simple Application Server.
       * - The maximum number of custom images that you can create is three times the number of Simple Application Servers that you have created, up to a maximum of 15.
       * - Only system disk snapshots can be directly used to create custom images. If you want to include data disk data in the custom image, you must manually select the corresponding data disk snapshot during the creation process.
       * - If a Simple Application Server is released due to expiration or refund, the custom images created from the server are also released.
       * - Resetting the system or replacing the image clears the disk data on the server. Back up your data as needed.
       *
       * @param request CreateCustomImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImageWithOptions(const Models::CreateCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom image from a snapshot.
       *
       * @description A custom image is an image that you create from a snapshot of a Simple Application Server. You can use a configured custom image to create more Simple Application Servers with the same configurations. You can also share the custom image to Elastic Computing Service to create ECS instances or replace operating systems by using the shared image. For more information about custom images, see [Custom image overview](https://help.aliyun.com/document_detail/199375.html).
       * Before you create a custom image, you must create a system disk snapshot for the Simple Application Server. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
       * > If you want to include data disk data in the custom image, create a data disk snapshot for the server first.
       * Before you create a custom image, take note of the following items:
       * - The custom image is created in the same region as the Simple Application Server.
       * - The maximum number of custom images that you can create is three times the number of Simple Application Servers that you have created, up to a maximum of 15.
       * - Only system disk snapshots can be directly used to create custom images. If you want to include data disk data in the custom image, you must manually select the corresponding data disk snapshot during the creation process.
       * - If a Simple Application Server is released due to expiration or refund, the custom images created from the server are also released.
       * - Resetting the system or replacing the image clears the disk data on the server. Back up your data as needed.
       *
       * @param request CreateCustomImageRequest
       * @return CreateCustomImageResponse
       */
      Models::CreateCustomImageResponse createCustomImage(const Models::CreateCustomImageRequest &request);

      /**
       * @summary Creates a firewall rule for a specified simple application server.
       *
       * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
       *
       * @param request CreateFirewallRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFirewallRuleResponse
       */
      Models::CreateFirewallRuleResponse createFirewallRuleWithOptions(const Models::CreateFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a firewall rule for a specified simple application server.
       *
       * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
       *
       * @param request CreateFirewallRuleRequest
       * @return CreateFirewallRuleResponse
       */
      Models::CreateFirewallRuleResponse createFirewallRule(const Models::CreateFirewallRuleRequest &request);

      /**
       * @summary Creates multiple firewall rules for a specified simple application server.
       *
       * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
       *
       * @param tmpReq CreateFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFirewallRulesResponse
       */
      Models::CreateFirewallRulesResponse createFirewallRulesWithOptions(const Models::CreateFirewallRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple firewall rules for a specified simple application server.
       *
       * @description Firewalls control network access to simple application servers and are used to divide security domains in the cloud. By default, the firewall of each simple application server allows traffic on port 22 (SSH), port 80 (HTTP), and port 443 (HTTPS). All other ports are disabled by default. You can add firewall rules to allow traffic on more ports.
       *
       * @param request CreateFirewallRulesRequest
       * @return CreateFirewallRulesResponse
       */
      Models::CreateFirewallRulesResponse createFirewallRules(const Models::CreateFirewallRulesRequest &request);

      /**
       * @summary Creates a firewall template.
       *
       * @description A firewall template allows you to group multiple firewall rules. You can use a template to add a set of firewall rules to one or more instances simultaneously, improving the efficiency of configuring firewall rules.
       *
       * @param request CreateFirewallTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFirewallTemplateResponse
       */
      Models::CreateFirewallTemplateResponse createFirewallTemplateWithOptions(const Models::CreateFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a firewall template.
       *
       * @description A firewall template allows you to group multiple firewall rules. You can use a template to add a set of firewall rules to one or more instances simultaneously, improving the efficiency of configuring firewall rules.
       *
       * @param request CreateFirewallTemplateRequest
       * @return CreateFirewallTemplateResponse
       */
      Models::CreateFirewallTemplateResponse createFirewallTemplate(const Models::CreateFirewallTemplateRequest &request);

      /**
       * @summary Adds firewall rules to a firewall template.
       *
       * @description Adding rules to a firewall template does not affect the rules of instances to which the template is applied.
       *
       * @param request CreateFirewallTemplateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFirewallTemplateRulesResponse
       */
      Models::CreateFirewallTemplateRulesResponse createFirewallTemplateRulesWithOptions(const Models::CreateFirewallTemplateRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds firewall rules to a firewall template.
       *
       * @description Adding rules to a firewall template does not affect the rules of instances to which the template is applied.
       *
       * @param request CreateFirewallTemplateRulesRequest
       * @return CreateFirewallTemplateRulesResponse
       */
      Models::CreateFirewallTemplateRulesResponse createFirewallTemplateRules(const Models::CreateFirewallTemplateRulesRequest &request);

      /**
       * @summary Creates a key pair for a simple application server.
       *
       * @param request CreateInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceKeyPairResponse
       */
      Models::CreateInstanceKeyPairResponse createInstanceKeyPairWithOptions(const Models::CreateInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a key pair for a simple application server.
       *
       * @param request CreateInstanceKeyPairRequest
       * @return CreateInstanceKeyPairResponse
       */
      Models::CreateInstanceKeyPairResponse createInstanceKeyPair(const Models::CreateInstanceKeyPairRequest &request);

      /**
       * @summary Creates one or more subscription Simple Application Server instances.
       *
       * @description <props="china">
       * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
       * - For each Alibaba Cloud account, the total number of Simple Application Server, Simple Application Server load balancing, Simple Container Service, and Simple Database Service instances that you can purchase in a single region is limited to 50.
       * - When you call this operation to create instances, make sure that your Alibaba Cloud account balance is sufficient. Otherwise, the creation fails.
       * <props="intl">
       * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
       * - For each Alibaba Cloud account, the maximum number of Simple Application Server instances that you can purchase in a single region is 50.
       * - When you call this operation to create instances, make sure that the default payment method of your account can cover the required fees. Otherwise, the creation fails.
       *
       * @param request CreateInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstancesWithOptions(const Models::CreateInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more subscription Simple Application Server instances.
       *
       * @description <props="china">
       * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
       * - For each Alibaba Cloud account, the total number of Simple Application Server, Simple Application Server load balancing, Simple Container Service, and Simple Database Service instances that you can purchase in a single region is limited to 50.
       * - When you call this operation to create instances, make sure that your Alibaba Cloud account balance is sufficient. Otherwise, the creation fails.
       * <props="intl">
       * - Before you call this operation, understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * > If your Alibaba Cloud account has coupons, the coupons are used by default to pay for the Simple Application Server instances.
       * - For each Alibaba Cloud account, the maximum number of Simple Application Server instances that you can purchase in a single region is 50.
       * - When you call this operation to create instances, make sure that the default payment method of your account can cover the required fees. Otherwise, the creation fails.
       *
       * @param request CreateInstancesRequest
       * @return CreateInstancesResponse
       */
      Models::CreateInstancesResponse createInstances(const Models::CreateInstancesRequest &request);

      /**
       * @summary Creates a key pair for a simple application server.
       *
       * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and help you meet business requirements for higher security and convenience.
       * - You can configure key pair-based logon only for simple application servers that run Linux.
       * - You can create up to 10 key pairs in a region within an Alibaba Cloud account.
       * - The console supports only the creation of RSA 2048-bit key pairs.
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a key pair for a simple application server.
       *
       * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and help you meet business requirements for higher security and convenience.
       * - You can configure key pair-based logon only for simple application servers that run Linux.
       * - You can create up to 10 key pairs in a region within an Alibaba Cloud account.
       * - The console supports only the creation of RSA 2048-bit key pairs.
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Queries the pricing information of Simple Application Server.
       *
       * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and meet your business requirements for higher security and convenience.
       * - Only Simple Application Server instances that run Linux support SSH key pair logon.
       * - You can create up to 10 SSH key pairs in a region within an Alibaba Cloud account.
       * - The console supports only the creation of RSA 2048-bit key pairs.
       *
       * @param request CreateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing information of Simple Application Server.
       *
       * @description Alibaba Cloud SSH key pairs provide a secure and convenient logon authentication method for identity verification and encrypted communication over the SSH protocol. An SSH key pair consists of a public key and a private key. SSH key pairs are supported only on Linux instances and meet your business requirements for higher security and convenience.
       * - Only Simple Application Server instances that run Linux support SSH key pair logon.
       * - You can create up to 10 SSH key pairs in a region within an Alibaba Cloud account.
       * - The console supports only the creation of RSA 2048-bit key pairs.
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary Creates a snapshot for a specified disk.
       *
       * @description A snapshot is a backup file of the disk data state at a specific point in time. Snapshots are commonly used for daily data backup, recovery from accidental data operations on servers, recovery from network attacks, and creation of custom images.
       * > Creating snapshots for Simple Application Server is free of charge.
       * ### Precautions
       * - You can create up to three snapshots for a single Simple Application Server instance.
       * - The maximum number of snapshots that an Alibaba Cloud account can create is three times the number of Simple Application Server instances created, up to a maximum of 15.
       * - If a server is released upon expiration, the snapshots associated with the server are deleted.
       * - Snapshots created before a system reset or image replacement are retained after the operation, but they cannot be used for rollback.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot for a specified disk.
       *
       * @description A snapshot is a backup file of the disk data state at a specific point in time. Snapshots are commonly used for daily data backup, recovery from accidental data operations on servers, recovery from network attacks, and creation of custom images.
       * > Creating snapshots for Simple Application Server is free of charge.
       * ### Precautions
       * - You can create up to three snapshots for a single Simple Application Server instance.
       * - The maximum number of snapshots that an Alibaba Cloud account can create is three times the number of Simple Application Server instances created, up to a maximum of 15.
       * - If a server is released upon expiration, the snapshots associated with the server are deleted.
       * - Snapshots created before a system reset or image replacement are retained after the operation, but they cannot be used for rollback.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Deletes a command.
       *
       * @description You cannot delete a command that is being executed.
       *
       * @param request DeleteCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommandWithOptions(const Models::DeleteCommandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a command.
       *
       * @description You cannot delete a command that is being executed.
       *
       * @param request DeleteCommandRequest
       * @return DeleteCommandResponse
       */
      Models::DeleteCommandResponse deleteCommand(const Models::DeleteCommandRequest &request);

      /**
       * @summary Deletes a specified custom image.
       *
       * @description If you no longer need a custom image, you can delete it. After a custom image is deleted, simple application servers created from the image cannot use it to reset their systems.
       * > If the custom image is a shared image, you must unshare the shared image before you delete it. After you unshare the shared image, you can no longer query the custom image in the Elastic Compute Service (ECS) console or by calling ECS API operations. If you still need to use the image in ECS, copy the image before you delete it. For more information, see [Copy an image](https://help.aliyun.com/document_detail/199378.html).
       *
       * @param request DeleteCustomImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomImageResponse
       */
      Models::DeleteCustomImageResponse deleteCustomImageWithOptions(const Models::DeleteCustomImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified custom image.
       *
       * @description If you no longer need a custom image, you can delete it. After a custom image is deleted, simple application servers created from the image cannot use it to reset their systems.
       * > If the custom image is a shared image, you must unshare the shared image before you delete it. After you unshare the shared image, you can no longer query the custom image in the Elastic Compute Service (ECS) console or by calling ECS API operations. If you still need to use the image in ECS, copy the image before you delete it. For more information, see [Copy an image](https://help.aliyun.com/document_detail/199378.html).
       *
       * @param request DeleteCustomImageRequest
       * @return DeleteCustomImageResponse
       */
      Models::DeleteCustomImageResponse deleteCustomImage(const Models::DeleteCustomImageRequest &request);

      /**
       * @summary Deletes custom images in batches. After a custom image is deleted, simple application servers created from the image cannot use it to reset the system.
       *
       * @description If a custom image is being shared, you must unshare the shared image before you delete the custom image. After the shared image is unshared, you cannot query the custom image in the Elastic Computing Service console or by calling Elastic Computing Service API operations. If you still need to use the image on an Elastic Computing Service server, we recommend that you perform image replication before you delete the custom image. For more information, see [Image replication](https://help.aliyun.com/document_detail/199378.html).
       *
       * @param request DeleteCustomImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomImagesResponse
       */
      Models::DeleteCustomImagesResponse deleteCustomImagesWithOptions(const Models::DeleteCustomImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes custom images in batches. After a custom image is deleted, simple application servers created from the image cannot use it to reset the system.
       *
       * @description If a custom image is being shared, you must unshare the shared image before you delete the custom image. After the shared image is unshared, you cannot query the custom image in the Elastic Computing Service console or by calling Elastic Computing Service API operations. If you still need to use the image on an Elastic Computing Service server, we recommend that you perform image replication before you delete the custom image. For more information, see [Image replication](https://help.aliyun.com/document_detail/199378.html).
       *
       * @param request DeleteCustomImagesRequest
       * @return DeleteCustomImagesResponse
       */
      Models::DeleteCustomImagesResponse deleteCustomImages(const Models::DeleteCustomImagesRequest &request);

      /**
       * @summary Deletes a firewall rule of a specified simple application server.
       *
       * @description After you delete a firewall rule of a specified simple application server, services may become inaccessible. Make sure that the simple application server instance no longer requires the firewall rule before you delete it.
       *
       * @param request DeleteFirewallRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallRuleResponse
       */
      Models::DeleteFirewallRuleResponse deleteFirewallRuleWithOptions(const Models::DeleteFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a firewall rule of a specified simple application server.
       *
       * @description After you delete a firewall rule of a specified simple application server, services may become inaccessible. Make sure that the simple application server instance no longer requires the firewall rule before you delete it.
       *
       * @param request DeleteFirewallRuleRequest
       * @return DeleteFirewallRuleResponse
       */
      Models::DeleteFirewallRuleResponse deleteFirewallRule(const Models::DeleteFirewallRuleRequest &request);

      /**
       * @summary Deletes multiple firewall rules of a simple application server.
       *
       * @description After a firewall rule is deleted, your business deployed on the simple application server may become inaccessible. Before you delete a firewall rule, make sure that the firewall rule is no longer needed by the simple application server.
       *
       * @param tmpReq DeleteFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallRulesResponse
       */
      Models::DeleteFirewallRulesResponse deleteFirewallRulesWithOptions(const Models::DeleteFirewallRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple firewall rules of a simple application server.
       *
       * @description After a firewall rule is deleted, your business deployed on the simple application server may become inaccessible. Before you delete a firewall rule, make sure that the firewall rule is no longer needed by the simple application server.
       *
       * @param request DeleteFirewallRulesRequest
       * @return DeleteFirewallRulesResponse
       */
      Models::DeleteFirewallRulesResponse deleteFirewallRules(const Models::DeleteFirewallRulesRequest &request);

      /**
       * @summary Deletes firewall rules from a firewall template based on your requirements.
       *
       * @description Deletion of firewall rules does not affect the firewall rules that have been applied to simple application servers.
       *
       * @param request DeleteFirewallTemplateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallTemplateRulesResponse
       */
      Models::DeleteFirewallTemplateRulesResponse deleteFirewallTemplateRulesWithOptions(const Models::DeleteFirewallTemplateRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes firewall rules from a firewall template based on your requirements.
       *
       * @description Deletion of firewall rules does not affect the firewall rules that have been applied to simple application servers.
       *
       * @param request DeleteFirewallTemplateRulesRequest
       * @return DeleteFirewallTemplateRulesResponse
       */
      Models::DeleteFirewallTemplateRulesResponse deleteFirewallTemplateRules(const Models::DeleteFirewallTemplateRulesRequest &request);

      /**
       * @summary Deletes firewall templates from a simple application server.
       *
       * @description Deleting a firewall template does not affect the firewall rules that have been applied to simple application servers. You can delete firewall templates that you no longer need.
       *
       * @param request DeleteFirewallTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallTemplatesResponse
       */
      Models::DeleteFirewallTemplatesResponse deleteFirewallTemplatesWithOptions(const Models::DeleteFirewallTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes firewall templates from a simple application server.
       *
       * @description Deleting a firewall template does not affect the firewall rules that have been applied to simple application servers. You can delete firewall templates that you no longer need.
       *
       * @param request DeleteFirewallTemplatesRequest
       * @return DeleteFirewallTemplatesResponse
       */
      Models::DeleteFirewallTemplatesResponse deleteFirewallTemplates(const Models::DeleteFirewallTemplatesRequest &request);

      /**
       * @summary Deletes the key pair of a simple application server.
       *
       * @param request DeleteInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceKeyPairResponse
       */
      Models::DeleteInstanceKeyPairResponse deleteInstanceKeyPairWithOptions(const Models::DeleteInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the key pair of a simple application server.
       *
       * @param request DeleteInstanceKeyPairRequest
       * @return DeleteInstanceKeyPairResponse
       */
      Models::DeleteInstanceKeyPairResponse deleteInstanceKeyPair(const Models::DeleteInstanceKeyPairRequest &request);

      /**
       * @summary Deletes the SSH key pairs of simple application servers.
       *
       * @description You must unbind SSH key pairs that you no longer use from simple application servers before you delete the SSH key pairs.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the SSH key pairs of simple application servers.
       *
       * @description You must unbind SSH key pairs that you no longer use from simple application servers before you delete the SSH key pairs.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a snapshot of a simple application server.
       *
       * @description You can delete a snapshot if you no longer need it.
       * > If a custom image was created from the snapshot, delete the custom image before you delete the snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a snapshot of a simple application server.
       *
       * @description You can delete a snapshot if you no longer need it.
       * > If a custom image was created from the snapshot, delete the custom image before you delete the snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Deletes snapshots of a simple application server.
       *
       * @param request DeleteSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotsResponse
       */
      Models::DeleteSnapshotsResponse deleteSnapshotsWithOptions(const Models::DeleteSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes snapshots of a simple application server.
       *
       * @param request DeleteSnapshotsRequest
       * @return DeleteSnapshotsResponse
       */
      Models::DeleteSnapshotsResponse deleteSnapshots(const Models::DeleteSnapshotsRequest &request);

      /**
       * @summary Queries the Cloud Assistant information of one or more instances.
       *
       * @param tmpReq DescribeCloudAssistantAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantAttributesResponse
       */
      Models::DescribeCloudAssistantAttributesResponse describeCloudAssistantAttributesWithOptions(const Models::DescribeCloudAssistantAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Cloud Assistant information of one or more instances.
       *
       * @param request DescribeCloudAssistantAttributesRequest
       * @return DescribeCloudAssistantAttributesResponse
       */
      Models::DescribeCloudAssistantAttributesResponse describeCloudAssistantAttributes(const Models::DescribeCloudAssistantAttributesRequest &request);

      /**
       * @summary Queries whether the Cloud Assistant client is installed on simple application servers.
       *
       * @description By default, the Cloud Assistant client is installed on simple application servers. If you have manually uninstalled the client, you must reinstall the client. Otherwise, you cannot run commands on the servers.
       *
       * @param tmpReq DescribeCloudAssistantStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatusWithOptions(const Models::DescribeCloudAssistantStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the Cloud Assistant client is installed on simple application servers.
       *
       * @description By default, the Cloud Assistant client is installed on simple application servers. If you have manually uninstalled the client, you must reinstall the client. Otherwise, you cannot run commands on the servers.
       *
       * @param request DescribeCloudAssistantStatusRequest
       * @return DescribeCloudAssistantStatusResponse
       */
      Models::DescribeCloudAssistantStatusResponse describeCloudAssistantStatus(const Models::DescribeCloudAssistantStatusRequest &request);

      /**
       * @summary Queries the status of the CloudMonitor agent on simple application servers.
       *
       * @param request DescribeCloudMonitorAgentStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudMonitorAgentStatusesResponse
       */
      Models::DescribeCloudMonitorAgentStatusesResponse describeCloudMonitorAgentStatusesWithOptions(const Models::DescribeCloudMonitorAgentStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the CloudMonitor agent on simple application servers.
       *
       * @param request DescribeCloudMonitorAgentStatusesRequest
       * @return DescribeCloudMonitorAgentStatusesResponse
       */
      Models::DescribeCloudMonitorAgentStatusesResponse describeCloudMonitorAgentStatuses(const Models::DescribeCloudMonitorAgentStatusesRequest &request);

      /**
       * @summary Queries the list and status of commands run by Cloud Assistant.
       *
       * @param request DescribeCommandInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandInvocationsResponse
       */
      Models::DescribeCommandInvocationsResponse describeCommandInvocationsWithOptions(const Models::DescribeCommandInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and status of commands run by Cloud Assistant.
       *
       * @param request DescribeCommandInvocationsRequest
       * @return DescribeCommandInvocationsResponse
       */
      Models::DescribeCommandInvocationsResponse describeCommandInvocations(const Models::DescribeCommandInvocationsRequest &request);

      /**
       * @summary Queries commands that you manually created or public commands provided by Alibaba Cloud.
       *
       * @param request DescribeCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommandsWithOptions(const Models::DescribeCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries commands that you manually created or public commands provided by Alibaba Cloud.
       *
       * @param request DescribeCommandsRequest
       * @return DescribeCommandsResponse
       */
      Models::DescribeCommandsResponse describeCommands(const Models::DescribeCommandsRequest &request);

      /**
       * @summary Queries the error logs of a lightweight database instance.
       *
       * @description Use this operation to query the error logs of a lightweight database instance to identify and troubleshoot issues.
       *
       * @param request DescribeDatabaseErrorLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabaseErrorLogsResponse
       */
      Models::DescribeDatabaseErrorLogsResponse describeDatabaseErrorLogsWithOptions(const Models::DescribeDatabaseErrorLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error logs of a lightweight database instance.
       *
       * @description Use this operation to query the error logs of a lightweight database instance to identify and troubleshoot issues.
       *
       * @param request DescribeDatabaseErrorLogsRequest
       * @return DescribeDatabaseErrorLogsResponse
       */
      Models::DescribeDatabaseErrorLogsResponse describeDatabaseErrorLogs(const Models::DescribeDatabaseErrorLogsRequest &request);

      /**
       * @summary Retrieves monitoring metrics for a lightweight database instance.
       *
       * @description After you create a lightweight database instance, you can retrieve its detailed monitoring metrics. These metrics include CPU and memory usage, disk space, IOPS (Input/Output Operations Per Second), and the number of connections.
       *
       * @param request DescribeDatabaseInstanceMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabaseInstanceMetricDataResponse
       */
      Models::DescribeDatabaseInstanceMetricDataResponse describeDatabaseInstanceMetricDataWithOptions(const Models::DescribeDatabaseInstanceMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves monitoring metrics for a lightweight database instance.
       *
       * @description After you create a lightweight database instance, you can retrieve its detailed monitoring metrics. These metrics include CPU and memory usage, disk space, IOPS (Input/Output Operations Per Second), and the number of connections.
       *
       * @param request DescribeDatabaseInstanceMetricDataRequest
       * @return DescribeDatabaseInstanceMetricDataResponse
       */
      Models::DescribeDatabaseInstanceMetricDataResponse describeDatabaseInstanceMetricData(const Models::DescribeDatabaseInstanceMetricDataRequest &request);

      /**
       * @summary View parameters for a lightweight database instance.
       *
       * @description This operation retrieves the parameter details of a lightweight database instance.
       *
       * @param request DescribeDatabaseInstanceParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabaseInstanceParametersResponse
       */
      Models::DescribeDatabaseInstanceParametersResponse describeDatabaseInstanceParametersWithOptions(const Models::DescribeDatabaseInstanceParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View parameters for a lightweight database instance.
       *
       * @description This operation retrieves the parameter details of a lightweight database instance.
       *
       * @param request DescribeDatabaseInstanceParametersRequest
       * @return DescribeDatabaseInstanceParametersResponse
       */
      Models::DescribeDatabaseInstanceParametersResponse describeDatabaseInstanceParameters(const Models::DescribeDatabaseInstanceParametersRequest &request);

      /**
       * @summary Queries the details of lightweight database instances.
       *
       * @description Queries the details of one or more lightweight database instances in a specified region, including the instance ID, name, plan, database version, public endpoint, internal endpoint, creation time, and expiration time.
       *
       * @param request DescribeDatabaseInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabaseInstancesResponse
       */
      Models::DescribeDatabaseInstancesResponse describeDatabaseInstancesWithOptions(const Models::DescribeDatabaseInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of lightweight database instances.
       *
       * @description Queries the details of one or more lightweight database instances in a specified region, including the instance ID, name, plan, database version, public endpoint, internal endpoint, creation time, and expiration time.
       *
       * @param request DescribeDatabaseInstancesRequest
       * @return DescribeDatabaseInstancesResponse
       */
      Models::DescribeDatabaseInstancesResponse describeDatabaseInstances(const Models::DescribeDatabaseInstancesRequest &request);

      /**
       * @summary Retrieves slow log details for Simple Database Service.
       *
       * @description You can query the slow logs of a Simple Database Service instance to diagnose issues.
       * > Simple Database Service retains slow logs for 7 days.
       *
       * @param request DescribeDatabaseSlowLogRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatabaseSlowLogRecordsResponse
       */
      Models::DescribeDatabaseSlowLogRecordsResponse describeDatabaseSlowLogRecordsWithOptions(const Models::DescribeDatabaseSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves slow log details for Simple Database Service.
       *
       * @description You can query the slow logs of a Simple Database Service instance to diagnose issues.
       * > Simple Database Service retains slow logs for 7 days.
       *
       * @param request DescribeDatabaseSlowLogRecordsRequest
       * @return DescribeDatabaseSlowLogRecordsResponse
       */
      Models::DescribeDatabaseSlowLogRecordsResponse describeDatabaseSlowLogRecords(const Models::DescribeDatabaseSlowLogRecordsRequest &request);

      /**
       * @summary Queries the results of applying a firewall template to instances.
       *
       * @param request DescribeFirewallTemplateApplyResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTemplateApplyResultsResponse
       */
      Models::DescribeFirewallTemplateApplyResultsResponse describeFirewallTemplateApplyResultsWithOptions(const Models::DescribeFirewallTemplateApplyResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of applying a firewall template to instances.
       *
       * @param request DescribeFirewallTemplateApplyResultsRequest
       * @return DescribeFirewallTemplateApplyResultsResponse
       */
      Models::DescribeFirewallTemplateApplyResultsResponse describeFirewallTemplateApplyResults(const Models::DescribeFirewallTemplateApplyResultsRequest &request);

      /**
       * @summary Queries the result of applying a firewall template rule to simple application servers.
       *
       * @param request DescribeFirewallTemplateRulesApplyResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTemplateRulesApplyResultResponse
       */
      Models::DescribeFirewallTemplateRulesApplyResultResponse describeFirewallTemplateRulesApplyResultWithOptions(const Models::DescribeFirewallTemplateRulesApplyResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of applying a firewall template rule to simple application servers.
       *
       * @param request DescribeFirewallTemplateRulesApplyResultRequest
       * @return DescribeFirewallTemplateRulesApplyResultResponse
       */
      Models::DescribeFirewallTemplateRulesApplyResultResponse describeFirewallTemplateRulesApplyResult(const Models::DescribeFirewallTemplateRulesApplyResultRequest &request);

      /**
       * @summary Queries details about firewall templates.
       *
       * @param request DescribeFirewallTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTemplatesResponse
       */
      Models::DescribeFirewallTemplatesResponse describeFirewallTemplatesWithOptions(const Models::DescribeFirewallTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about firewall templates.
       *
       * @param request DescribeFirewallTemplatesRequest
       * @return DescribeFirewallTemplatesResponse
       */
      Models::DescribeFirewallTemplatesResponse describeFirewallTemplates(const Models::DescribeFirewallTemplatesRequest &request);

      /**
       * @summary Queries information about the key pair of a simple application server.
       *
       * @param request DescribeInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceKeyPairResponse
       */
      Models::DescribeInstanceKeyPairResponse describeInstanceKeyPairWithOptions(const Models::DescribeInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the key pair of a simple application server.
       *
       * @param request DescribeInstanceKeyPairRequest
       * @return DescribeInstanceKeyPairResponse
       */
      Models::DescribeInstanceKeyPairResponse describeInstanceKeyPair(const Models::DescribeInstanceKeyPairRequest &request);

      /**
       * @summary Checks whether a password is set for a simple application server.
       *
       * @param request DescribeInstancePasswordsSettingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancePasswordsSettingResponse
       */
      Models::DescribeInstancePasswordsSettingResponse describeInstancePasswordsSettingWithOptions(const Models::DescribeInstancePasswordsSettingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a password is set for a simple application server.
       *
       * @param request DescribeInstancePasswordsSettingRequest
       * @return DescribeInstancePasswordsSettingResponse
       */
      Models::DescribeInstancePasswordsSettingResponse describeInstancePasswordsSetting(const Models::DescribeInstancePasswordsSettingRequest &request);

      /**
       * @summary Queries the VNC connection address of a simple application server.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VNC connection address of a simple application server.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary Queries the execution result of a single command.
       *
       * @description - After you run a command, the command is not necessarily run successfully or achieves the expected results. Call this operation to view the actual execution result based on the actual output.
       * - You can query execution information from the last two weeks. A maximum of 100,000 entries of execution information can be retained.
       *
       * @param request DescribeInvocationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationResultResponse
       */
      Models::DescribeInvocationResultResponse describeInvocationResultWithOptions(const Models::DescribeInvocationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of a single command.
       *
       * @description - After you run a command, the command is not necessarily run successfully or achieves the expected results. Call this operation to view the actual execution result based on the actual output.
       * - You can query execution information from the last two weeks. A maximum of 100,000 entries of execution information can be retained.
       *
       * @param request DescribeInvocationResultRequest
       * @return DescribeInvocationResultResponse
       */
      Models::DescribeInvocationResultResponse describeInvocationResult(const Models::DescribeInvocationResultRequest &request);

      /**
       * @summary Queries the details of a command.
       *
       * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the return values of this operation.
       * - You can query execution information from the last two weeks. A maximum of 100,000 execution records can be retained.
       *
       * @param request DescribeInvocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocationsWithOptions(const Models::DescribeInvocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a command.
       *
       * @description - After you run a command, the command is not guaranteed to succeed or produce the expected results. Check the actual execution results based on the return values of this operation.
       * - You can query execution information from the last two weeks. A maximum of 100,000 execution records can be retained.
       *
       * @param request DescribeInvocationsRequest
       * @return DescribeInvocationsResponse
       */
      Models::DescribeInvocationsResponse describeInvocations(const Models::DescribeInvocationsRequest &request);

      /**
       * @summary Queries the monitoring information about vCPUs, memory, disk IOPS, and traffic of a simple application server.
       *
       * @param request DescribeMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorDataResponse
       */
      Models::DescribeMonitorDataResponse describeMonitorDataWithOptions(const Models::DescribeMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring information about vCPUs, memory, disk IOPS, and traffic of a simple application server.
       *
       * @param request DescribeMonitorDataRequest
       * @return DescribeMonitorDataResponse
       */
      Models::DescribeMonitorDataResponse describeMonitorData(const Models::DescribeMonitorDataRequest &request);

      /**
       * @summary Retrieves the pricing information of Simple Application Server.
       *
       * @description - After you run a command, it does not mean that the command is successfully run or produces the expected results. You must check the actual execution results based on the API response. The actual output prevails.
       * - You can query the execution information of the last two weeks. The maximum number of retained execution records is 100,000.
       *
       * @param request DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the pricing information of Simple Application Server.
       *
       * @description - After you run a command, it does not mean that the command is successfully run or produces the expected results. You must check the actual execution results based on the API response. The actual output prevails.
       * - You can query the execution information of the last two weeks. The maximum number of retained execution records is 100,000.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries the status of the Security Center agent on a simple application server.
       *
       * @param request DescribeSecurityAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityAgentStatusResponse
       */
      Models::DescribeSecurityAgentStatusResponse describeSecurityAgentStatusWithOptions(const Models::DescribeSecurityAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Security Center agent on a simple application server.
       *
       * @param request DescribeSecurityAgentStatusRequest
       * @return DescribeSecurityAgentStatusResponse
       */
      Models::DescribeSecurityAgentStatusResponse describeSecurityAgentStatus(const Models::DescribeSecurityAgentStatusRequest &request);

      /**
       * @summary Unbinds key pairs from simple application servers.
       *
       * @description If you want to change the SSH key pairs that are bound to your simple application servers or your end user no longer needs to access a specific simple application server, you can unbind the SSH key pairs from simple application servers to improve the security of the simple application servers or restrict access to the specific simple application server.
       *
       * @param request DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds key pairs from simple application servers.
       *
       * @description If you want to change the SSH key pairs that are bound to your simple application servers or your end user no longer needs to access a specific simple application server, you can unbind the SSH key pairs from simple application servers to improve the security of the simple application servers or restrict access to the specific simple application server.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Disables a firewall policy for a specified simple application server.
       *
       * @param request DisableFirewallRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFirewallRuleResponse
       */
      Models::DisableFirewallRuleResponse disableFirewallRuleWithOptions(const Models::DisableFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a firewall policy for a specified simple application server.
       *
       * @param request DisableFirewallRuleRequest
       * @return DisableFirewallRuleResponse
       */
      Models::DisableFirewallRuleResponse disableFirewallRule(const Models::DisableFirewallRuleRequest &request);

      /**
       * @summary Enables a firewall policy for a specified simple application server.
       *
       * @param request EnableFirewallRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFirewallRuleResponse
       */
      Models::EnableFirewallRuleResponse enableFirewallRuleWithOptions(const Models::EnableFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a firewall policy for a specified simple application server.
       *
       * @param request EnableFirewallRuleRequest
       * @return EnableFirewallRuleResponse
       */
      Models::EnableFirewallRuleResponse enableFirewallRule(const Models::EnableFirewallRuleRequest &request);

      /**
       * @summary Imports an existing key pair.
       *
       * @description You can import an existing key pair to the console to log on to your Simple Application Server instances. The key pair must use a supported encryption method. For more information, see [Q2: What encryption methods are supported for importing an existing key pair?](https://help.aliyun.com/document_detail/59085.html).
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an existing key pair.
       *
       * @description You can import an existing key pair to the console to log on to your Simple Application Server instances. The key pair must use a supported encryption method. For more information, see [Q2: What encryption methods are supported for importing an existing key pair?](https://help.aliyun.com/document_detail/59085.html).
       *
       * @param request ImportKeyPairRequest
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPair(const Models::ImportKeyPairRequest &request);

      /**
       * @summary Installs the Cloud Assistant client on simple application servers at a time.
       *
       * @description To run commands on your simple application servers, you must install the Cloud Assistant client on your servers. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/439512.html) operation to check whether the Cloud Assistant client is installed on your simple application servers. If you have not installed the Cloud Assistant client, you can call the InstallCloudAssistant operation to install the client. Then, you can call the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation to restart the servers to allow the client to take effect.
       *
       * @param tmpReq InstallCloudAssistantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistantWithOptions(const Models::InstallCloudAssistantRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the Cloud Assistant client on simple application servers at a time.
       *
       * @description To run commands on your simple application servers, you must install the Cloud Assistant client on your servers. You can call the [DescribeCloudAssistantStatus](https://help.aliyun.com/document_detail/439512.html) operation to check whether the Cloud Assistant client is installed on your simple application servers. If you have not installed the Cloud Assistant client, you can call the InstallCloudAssistant operation to install the client. Then, you can call the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation to restart the servers to allow the client to take effect.
       *
       * @param request InstallCloudAssistantRequest
       * @return InstallCloudAssistantResponse
       */
      Models::InstallCloudAssistantResponse installCloudAssistant(const Models::InstallCloudAssistantRequest &request);

      /**
       * @summary Installs the CloudMonitor agent for a simple application server.
       *
       * @param request InstallCloudMonitorAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudMonitorAgentResponse
       */
      Models::InstallCloudMonitorAgentResponse installCloudMonitorAgentWithOptions(const Models::InstallCloudMonitorAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs the CloudMonitor agent for a simple application server.
       *
       * @param request InstallCloudMonitorAgentRequest
       * @return InstallCloudMonitorAgentResponse
       */
      Models::InstallCloudMonitorAgentResponse installCloudMonitorAgent(const Models::InstallCloudMonitorAgentRequest &request);

      /**
       * @summary Runs a Command Assistant command for one or more simple application servers.
       *
       * @description *   The simple application servers for which you want to call the operation must meet the following conditions. If a simple application server cannot meet the conditions, you must call this operation again.
       *     *   The simple application servers are in the `Running` state. You can call the [ListInstances](https://help.aliyun.com/document_detail/2361065.html) operation to query the status of simple application servers.
       *     *   Cloud Assistant Agent is installed on the simple application servers. For more information, see [InstallCloudAssistant](https://help.aliyun.com/document_detail/2361030.html).
       *     *   If you run a PowerShell command, make sure that the PowerShell module is configured for the simple application servers.
       * *   The command may fail to be run due to the abnormal states of simple application servers, network exceptions, or exceptions in Cloud Assistant Agent. If the command fails to be run, no execution information is generated.
       * *   If you enable the custom parameter feature when you create a command, you must set the `Parameters` parameter to specify custom parameters when you run the command.
       * *   When you call this operation, you can select only one common command or a custom command that you have created.
       *
       * @param tmpReq InvokeCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommandWithOptions(const Models::InvokeCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a Command Assistant command for one or more simple application servers.
       *
       * @description *   The simple application servers for which you want to call the operation must meet the following conditions. If a simple application server cannot meet the conditions, you must call this operation again.
       *     *   The simple application servers are in the `Running` state. You can call the [ListInstances](https://help.aliyun.com/document_detail/2361065.html) operation to query the status of simple application servers.
       *     *   Cloud Assistant Agent is installed on the simple application servers. For more information, see [InstallCloudAssistant](https://help.aliyun.com/document_detail/2361030.html).
       *     *   If you run a PowerShell command, make sure that the PowerShell module is configured for the simple application servers.
       * *   The command may fail to be run due to the abnormal states of simple application servers, network exceptions, or exceptions in Cloud Assistant Agent. If the command fails to be run, no execution information is generated.
       * *   If you enable the custom parameter feature when you create a command, you must set the `Parameters` parameter to specify custom parameters when you run the command.
       * *   When you call this operation, you can select only one common command or a custom command that you have created.
       *
       * @param request InvokeCommandRequest
       * @return InvokeCommandResponse
       */
      Models::InvokeCommandResponse invokeCommand(const Models::InvokeCommandRequest &request);

      /**
       * @summary Calls the ListCustomImageShareAccounts operation to query information about cross-account shared images.
       *
       * @param request ListCustomImageShareAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomImageShareAccountsResponse
       */
      Models::ListCustomImageShareAccountsResponse listCustomImageShareAccountsWithOptions(const Models::ListCustomImageShareAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ListCustomImageShareAccounts operation to query information about cross-account shared images.
       *
       * @param request ListCustomImageShareAccountsRequest
       * @return ListCustomImageShareAccountsResponse
       */
      Models::ListCustomImageShareAccountsResponse listCustomImageShareAccounts(const Models::ListCustomImageShareAccountsRequest &request);

      /**
       * @summary Queries information about one or more custom images that have been created in a specified region.
       *
       * @param request ListCustomImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomImagesResponse
       */
      Models::ListCustomImagesResponse listCustomImagesWithOptions(const Models::ListCustomImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more custom images that have been created in a specified region.
       *
       * @param request ListCustomImagesRequest
       * @return ListCustomImagesResponse
       */
      Models::ListCustomImagesResponse listCustomImages(const Models::ListCustomImagesRequest &request);

      /**
       * @summary Queries the information about disks in a region.
       *
       * @description The `InstanceId`, `DiskIds`, and `ResourceGroupId` parameters are optional. However, you can specify them as filter conditions and combine them with the logical AND operator to filter disks that you want to query.
       *
       * @param request ListDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisksResponse
       */
      Models::ListDisksResponse listDisksWithOptions(const Models::ListDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about disks in a region.
       *
       * @description The `InstanceId`, `DiskIds`, and `ResourceGroupId` parameters are optional. However, you can specify them as filter conditions and combine them with the logical AND operator to filter disks that you want to query.
       *
       * @param request ListDisksRequest
       * @return ListDisksResponse
       */
      Models::ListDisksResponse listDisks(const Models::ListDisksRequest &request);

      /**
       * @summary Queries the firewall rules of a specified simple application server.
       *
       * @description You can call this API operation to query the firewall rules of a specified simple application server, including information such as the port range, firewall rule ID, and transport layer protocol.
       *
       * @param request ListFirewallRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFirewallRulesResponse
       */
      Models::ListFirewallRulesResponse listFirewallRulesWithOptions(const Models::ListFirewallRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the firewall rules of a specified simple application server.
       *
       * @description You can call this API operation to query the firewall rules of a specified simple application server, including information such as the port range, firewall rule ID, and transport layer protocol.
       *
       * @param request ListFirewallRulesRequest
       * @return ListFirewallRulesResponse
       */
      Models::ListFirewallRulesResponse listFirewallRules(const Models::ListFirewallRulesRequest &request);

      /**
       * @summary Queries the information about images in a region.
       *
       * @description You can query details about one or more images in a specified region, including the IDs, names, and types of the images.
       *
       * @param request ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about images in a region.
       *
       * @description You can query details about one or more images in a specified region, including the IDs, names, and types of the images.
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary This topic describes the list of plans to which a specified simple application server can be upgraded.
       *
       * @description As your business grows, the resources of a purchased server may no longer meet your requirements. Retrieve the list of plans to which the current server can be upgraded, then call the [UpgradeInstance](https://help.aliyun.com/document_detail/190445.html) to upgrade.
       * > We recommend that you create a snapshot of the disk of the server to back up data before you upgrade the instance. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
       * For more information about the limits on instance configuration upgrades, see [Upgrade instance configurations](https://help.aliyun.com/document_detail/61433.html).
       *
       * @param request ListInstancePlansModificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancePlansModificationResponse
       */
      Models::ListInstancePlansModificationResponse listInstancePlansModificationWithOptions(const Models::ListInstancePlansModificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This topic describes the list of plans to which a specified simple application server can be upgraded.
       *
       * @description As your business grows, the resources of a purchased server may no longer meet your requirements. Retrieve the list of plans to which the current server can be upgraded, then call the [UpgradeInstance](https://help.aliyun.com/document_detail/190445.html) to upgrade.
       * > We recommend that you create a snapshot of the disk of the server to back up data before you upgrade the instance. For more information, see [CreateSnapshot](https://help.aliyun.com/document_detail/190452.html).
       * For more information about the limits on instance configuration upgrades, see [Upgrade instance configurations](https://help.aliyun.com/document_detail/61433.html).
       *
       * @param request ListInstancePlansModificationRequest
       * @return ListInstancePlansModificationResponse
       */
      Models::ListInstancePlansModificationResponse listInstancePlansModification(const Models::ListInstancePlansModificationRequest &request);

      /**
       * @summary Queries the status of simple application servers.
       *
       * @param request ListInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatusWithOptions(const Models::ListInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of simple application servers.
       *
       * @param request ListInstanceStatusRequest
       * @return ListInstanceStatusResponse
       */
      Models::ListInstanceStatusResponse listInstanceStatus(const Models::ListInstanceStatusRequest &request);

      /**
       * @summary Queries the details of one or more instances in a specified region.
       *
       * @description Queries the details of one or more instances in a specified region, including the server name, public IP address, internal IP address, creation time, and expiration time.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more instances in a specified region.
       *
       * @description Queries the details of one or more instances in a specified region, including the server name, public IP address, internal IP address, creation time, and expiration time.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the details about data transfer plans of simple application servers.
       *
       * @description You can query the details of data transfer plans of simple application servers, including the total quota, used quota, unused quota, and excess data transfers in the current month.
       * Simple Application Server provides data transfer plans that can be used to offset data transfer fees. You are charged for excess data transfers. Take note of the following items:
       * - Only outbound data transfers of simple application servers over the Internet are calculated. Outbound data transfers include the data transfer quota and the excess data transfers beyond the quota. Inbound data transfers of simple application servers over the Internet are not calculated.
       * - Outbound data transfers from simple application servers to other Alibaba Cloud services over the Internet first consume data transfer quotas. If the quotas are exhausted, you are charged for excess data transfers.
       * - You are not charged for data transfers between simple application servers within the same virtual private cloud (VPC).
       * For more information, see [Quotas and billing of data transfers](https://help.aliyun.com/document_detail/86281.html).
       *
       * @param request ListInstancesTrafficPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesTrafficPackagesResponse
       */
      Models::ListInstancesTrafficPackagesResponse listInstancesTrafficPackagesWithOptions(const Models::ListInstancesTrafficPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about data transfer plans of simple application servers.
       *
       * @description You can query the details of data transfer plans of simple application servers, including the total quota, used quota, unused quota, and excess data transfers in the current month.
       * Simple Application Server provides data transfer plans that can be used to offset data transfer fees. You are charged for excess data transfers. Take note of the following items:
       * - Only outbound data transfers of simple application servers over the Internet are calculated. Outbound data transfers include the data transfer quota and the excess data transfers beyond the quota. Inbound data transfers of simple application servers over the Internet are not calculated.
       * - Outbound data transfers from simple application servers to other Alibaba Cloud services over the Internet first consume data transfer quotas. If the quotas are exhausted, you are charged for excess data transfers.
       * - You are not charged for data transfers between simple application servers within the same virtual private cloud (VPC).
       * For more information, see [Quotas and billing of data transfers](https://help.aliyun.com/document_detail/86281.html).
       *
       * @param request ListInstancesTrafficPackagesRequest
       * @return ListInstancesTrafficPackagesResponse
       */
      Models::ListInstancesTrafficPackagesResponse listInstancesTrafficPackages(const Models::ListInstancesTrafficPackagesRequest &request);

      /**
       * @summary The list of key pairs.
       *
       * @param request ListKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKeyPairsResponse
       */
      Models::ListKeyPairsResponse listKeyPairsWithOptions(const Models::ListKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The list of key pairs.
       *
       * @param request ListKeyPairsRequest
       * @return ListKeyPairsResponse
       */
      Models::ListKeyPairsResponse listKeyPairs(const Models::ListKeyPairsRequest &request);

      /**
       * @summary Queries all plan information for simple application servers in a specified region.
       *
       * @description You can query all plan information for simple application servers in a specified region, including the plan ID, disk capacity, disk type, and plan price.
       *
       * @param request ListPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPlansResponse
       */
      Models::ListPlansResponse listPlansWithOptions(const Models::ListPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all plan information for simple application servers in a specified region.
       *
       * @description You can query all plan information for simple application servers in a specified region, including the plan ID, disk capacity, disk type, and plan price.
       *
       * @param request ListPlansRequest
       * @return ListPlansResponse
       */
      Models::ListPlansResponse listPlans(const Models::ListPlansRequest &request);

      /**
       * @summary Queries all regions in which Simple Application Server is supported.
       *
       * @description The query results include all the Alibaba Cloud regions where Simple Application Server is supported on the international site (alibabacloud.com) and the China site (aliyun.com).
       *
       * @param request ListRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Models::ListRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all regions in which Simple Application Server is supported.
       *
       * @description The query results include all the Alibaba Cloud regions where Simple Application Server is supported on the international site (alibabacloud.com) and the China site (aliyun.com).
       *
       * @param request ListRegionsRequest
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions(const Models::ListRegionsRequest &request);

      /**
       * @summary Queries information about one or more snapshots that have been created.
       *
       * @description InstanceId, DiskId, SnapshotIds, and ResourceGroupId are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       *
       * @param request ListSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const Models::ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more snapshots that have been created.
       *
       * @description InstanceId, DiskId, SnapshotIds, and ResourceGroupId are not required request parameters, but you can use them to build filter logic. These parameters have a logical AND relationship.
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const Models::ListSnapshotsRequest &request);

      /**
       * @summary Queries the tags that are added to simple resources, such as instances, snapshots, disks, images, commands, and firewall rules.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to simple resources, such as instances, snapshots, disks, images, commands, and firewall rules.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Performs a remote logon to a simple application server by using Workbench.
       *
       * @description After you create a simple application server, you can perform a remote logon to the server to set up environments and deploy applications.
       *
       * @param request LoginInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginInstanceResponse
       */
      Models::LoginInstanceResponse loginInstanceWithOptions(const Models::LoginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a remote logon to a simple application server by using Workbench.
       *
       * @description After you create a simple application server, you can perform a remote logon to the server to set up environments and deploy applications.
       *
       * @param request LoginInstanceRequest
       * @return LoginInstanceResponse
       */
      Models::LoginInstanceResponse loginInstance(const Models::LoginInstanceRequest &request);

      /**
       * @summary Modifies the description of a lightweight database instance.
       *
       * @param request ModifyDatabaseInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseInstanceDescriptionResponse
       */
      Models::ModifyDatabaseInstanceDescriptionResponse modifyDatabaseInstanceDescriptionWithOptions(const Models::ModifyDatabaseInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a lightweight database instance.
       *
       * @param request ModifyDatabaseInstanceDescriptionRequest
       * @return ModifyDatabaseInstanceDescriptionResponse
       */
      Models::ModifyDatabaseInstanceDescriptionResponse modifyDatabaseInstanceDescription(const Models::ModifyDatabaseInstanceDescriptionRequest &request);

      /**
       * @summary After you create a Simple Application Server database service instance, you can view and modify its parameters.
       *
       * @param request ModifyDatabaseInstanceParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatabaseInstanceParameterResponse
       */
      Models::ModifyDatabaseInstanceParameterResponse modifyDatabaseInstanceParameterWithOptions(const Models::ModifyDatabaseInstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you create a Simple Application Server database service instance, you can view and modify its parameters.
       *
       * @param request ModifyDatabaseInstanceParameterRequest
       * @return ModifyDatabaseInstanceParameterResponse
       */
      Models::ModifyDatabaseInstanceParameterResponse modifyDatabaseInstanceParameter(const Models::ModifyDatabaseInstanceParameterRequest &request);

      /**
       * @summary Modifies a firewall rule of a specified simple application server.
       *
       * @param request ModifyFirewallRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirewallRuleResponse
       */
      Models::ModifyFirewallRuleResponse modifyFirewallRuleWithOptions(const Models::ModifyFirewallRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a firewall rule of a specified simple application server.
       *
       * @param request ModifyFirewallRuleRequest
       * @return ModifyFirewallRuleResponse
       */
      Models::ModifyFirewallRuleResponse modifyFirewallRule(const Models::ModifyFirewallRuleRequest &request);

      /**
       * @summary Updates the firewall rules in an existing firewall template based on your business requirements and applies the rules to Simple Application Server instances through the firewall template.
       *
       * @description Updating a firewall template does not affect the rules of instances to which the template is already applied.
       *
       * @param request ModifyFirewallTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirewallTemplateResponse
       */
      Models::ModifyFirewallTemplateResponse modifyFirewallTemplateWithOptions(const Models::ModifyFirewallTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the firewall rules in an existing firewall template based on your business requirements and applies the rules to Simple Application Server instances through the firewall template.
       *
       * @description Updating a firewall template does not affect the rules of instances to which the template is already applied.
       *
       * @param request ModifyFirewallTemplateRequest
       * @return ModifyFirewallTemplateResponse
       */
      Models::ModifyFirewallTemplateResponse modifyFirewallTemplate(const Models::ModifyFirewallTemplateRequest &request);

      /**
       * @summary Shares or unshares a custom image to Elastic Compute Service (ECS).
       *
       * @description Custom images can be shared to ECS. If the configurations of your simple application server cannot meet your business requirements, or you want to deploy your business on ECS instances, you can share your custom image to ECS to transfer your business from Simple Application Server to ECS.
       * > The region in which the shared image resides in ECS is the same as the region in which the custom image resides in Simple Application Server.
       * You can unshare a custom image based on your business requirements or when you want to delete the custom image. After you unshare a custom image, take note of the following items:
       * - You cannot query or use the custom image by using the ECS console or API.
       * - You cannot re-initialize the disks of the ECS instances that were created based on the shared image.
       *
       * @param request ModifyImageShareStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageShareStatusResponse
       */
      Models::ModifyImageShareStatusResponse modifyImageShareStatusWithOptions(const Models::ModifyImageShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares or unshares a custom image to Elastic Compute Service (ECS).
       *
       * @description Custom images can be shared to ECS. If the configurations of your simple application server cannot meet your business requirements, or you want to deploy your business on ECS instances, you can share your custom image to ECS to transfer your business from Simple Application Server to ECS.
       * > The region in which the shared image resides in ECS is the same as the region in which the custom image resides in Simple Application Server.
       * You can unshare a custom image based on your business requirements or when you want to delete the custom image. After you unshare a custom image, take note of the following items:
       * - You cannot query or use the custom image by using the ECS console or API.
       * - You cannot re-initialize the disks of the ECS instances that were created based on the shared image.
       *
       * @param request ModifyImageShareStatusRequest
       * @return ModifyImageShareStatusResponse
       */
      Models::ModifyImageShareStatusResponse modifyImageShareStatus(const Models::ModifyImageShareStatusRequest &request);

      /**
       * @summary Changes the VNC password of a simple application server.
       *
       * @param request ModifyInstanceVncPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVncPasswordResponse
       */
      Models::ModifyInstanceVncPasswordResponse modifyInstanceVncPasswordWithOptions(const Models::ModifyInstanceVncPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the VNC password of a simple application server.
       *
       * @param request ModifyInstanceVncPasswordRequest
       * @return ModifyInstanceVncPasswordResponse
       */
      Models::ModifyInstanceVncPasswordResponse modifyInstanceVncPassword(const Models::ModifyInstanceVncPasswordRequest &request);

      /**
       * @summary Restarts a simple application server.
       *
       * @description - You can restart only simple application server instances that are in the Running state.
       * - After a simple application server instance is restarted, it enters the Starting state.
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a simple application server.
       *
       * @description - You can restart only simple application server instances that are in the Running state.
       * - After a simple application server instance is restarted, it enters the Starting state.
       *
       * @param request RebootInstanceRequest
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstance(const Models::RebootInstanceRequest &request);

      /**
       * @summary Restarts simple application servers.
       *
       * @param request RebootInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstancesWithOptions(const Models::RebootInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts simple application servers.
       *
       * @param request RebootInstancesRequest
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstances(const Models::RebootInstancesRequest &request);

      /**
       * @summary Releases the public endpoint of a lightweight database instance if you no longer need to access it from the internet.
       *
       * @param request ReleasePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePublicConnectionResponse
       */
      Models::ReleasePublicConnectionResponse releasePublicConnectionWithOptions(const Models::ReleasePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of a lightweight database instance if you no longer need to access it from the internet.
       *
       * @param request ReleasePublicConnectionRequest
       * @return ReleasePublicConnectionResponse
       */
      Models::ReleasePublicConnectionResponse releasePublicConnection(const Models::ReleasePublicConnectionRequest &request);

      /**
       * @summary Unshares a custom image that is shared across Alibaba Cloud accounts.
       *
       * @param request RemoveCustomImageShareAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCustomImageShareAccountResponse
       */
      Models::RemoveCustomImageShareAccountResponse removeCustomImageShareAccountWithOptions(const Models::RemoveCustomImageShareAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unshares a custom image that is shared across Alibaba Cloud accounts.
       *
       * @param request RemoveCustomImageShareAccountRequest
       * @return RemoveCustomImageShareAccountResponse
       */
      Models::RemoveCustomImageShareAccountResponse removeCustomImageShareAccount(const Models::RemoveCustomImageShareAccountRequest &request);

      /**
       * @summary Renews a simple application server.
       *
       * @description - Before you call this operation, we recommend that you understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * - Before you call this operation, make sure that the balance in your account is sufficient. If the balance in your account is insufficient, the renewal fails.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a simple application server.
       *
       * @description - Before you call this operation, we recommend that you understand the billing of Simple Application Server. For more information, see [Billable items](https://help.aliyun.com/document_detail/58623.html).
       * - Before you call this operation, make sure that the balance in your account is sufficient. If the balance in your account is insufficient, the renewal fails.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Resets the password of the administrator account for a database. You can call this operation to change the password if the current password has low security. For database security, change the database password on a regular basis.
       *
       * @param request ResetDatabaseAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDatabaseAccountPasswordResponse
       */
      Models::ResetDatabaseAccountPasswordResponse resetDatabaseAccountPasswordWithOptions(const Models::ResetDatabaseAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of the administrator account for a database. You can call this operation to change the password if the current password has low security. For database security, change the database password on a regular basis.
       *
       * @param request ResetDatabaseAccountPasswordRequest
       * @return ResetDatabaseAccountPasswordResponse
       */
      Models::ResetDatabaseAccountPasswordResponse resetDatabaseAccountPassword(const Models::ResetDatabaseAccountPasswordRequest &request);

      /**
       * @summary Rolls back a disk to a snapshot.
       *
       * @description - When you roll back a disk by using a snapshot, the corresponding simple application server must be in the Stopped state.
       * - Rolling back a disk to a snapshot causes the incremental data generated after the snapshot was created to be lost. Back up your data before the rollback if necessary.
       * ### Precautions
       * Resetting the system or replacing the image clears the disk data on the server. Snapshots created before the system reset or image replacement are retained but cannot be used for rollback operations.
       *
       * @param request ResetDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDiskWithOptions(const Models::ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a disk to a snapshot.
       *
       * @description - When you roll back a disk by using a snapshot, the corresponding simple application server must be in the Stopped state.
       * - Rolling back a disk to a snapshot causes the incremental data generated after the snapshot was created to be lost. Back up your data before the rollback if necessary.
       * ### Precautions
       * Resetting the system or replacing the image clears the disk data on the server. Snapshots created before the system reset or image replacement are retained but cannot be used for rollback operations.
       *
       * @param request ResetDiskRequest
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDisk(const Models::ResetDiskRequest &request);

      /**
       * @summary Resets a simple application server.
       *
       * @description You can reset a simple application server to re-install its applications or operating system and re-initialize the server. You can reset a simple application server by resetting the current system or changing the image.
       * - Reset the current system: You can re-install the operating system without changing the image.
       * - Change the image: You can select another Alibaba Cloud image or a custom image to re-install the operating system.
       * ### [](#)Precautions
       * - Resetting the system or changing the image of a simple application server clears the disk data on the server. Back up the data as needed.
       * - After you reset a simple application server, monitoring may fail. In this case, you can use one of the following methods to install the CloudMonitor agent on the server:
       *   - Connect to the server: For more information, see [Manually install the CloudMonitor agent for C++ on an ECS instance](https://help.aliyun.com/document_detail/183482.html).
       *   - Use Command Assistant: For more information, see [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html). You can obtain the command that can be used to install CloudMonitor from the "Common commands" section of the [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html) topic.
       * ### [](#)Limits
       * - Snapshots that are created before the reset are retained, but the snapshots cannot be used to restore the disks of the server.
       * - You cannot reset simple application servers that were created from custom images that contain data of data disks.
       * - If you reset a simple application server by replacing the existing image with a custom image, the following limits apply:
       *   - The custom image must reside in the same region as the current server.
       *   - The custom image cannot be created based on the current server. If you want to restore the data on the server, you can use a snapshot of the server to restore disk data.
       *   - If your simple application server resides in a region outside the Chinese mainland, you cannot switch the operating system of the server between Windows Server and Linux. You cannot use a Windows Server custom image to reset a Linux simple application server. Similarly, you cannot use a Linux custom image to reset a Windows Server simple application server. You can switch the operating systems of simple application servers only between Windows Server versions or between Linux distributions.
       *   - The following limits apply to the disks attached to the simple application server:
       *     - If the custom image contains a system disk and a data disk but only a system disk is attached to the simple application server, you cannot use the custom image to reset the simple application server.
       *     - If the system disk size of the custom image is greater than the system disk size of the simple application server, you cannot directly use the custom image to reset the simple application server.
       *     - Only if the system disk size of the simple application server is greater than or equal to the system disk size of the custom image, you can use the custom image to reset the simple application server. To increase the system disk size of your server, you can upgrade the server configuration. For more information, see Upgrade a simple application server.
       *     - If the data disk size of the custom image is greater than the data disk size of the simple application server, you cannot use the custom image to reset the simple application server.
       *
       * @param request ResetSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetSystemResponse
       */
      Models::ResetSystemResponse resetSystemWithOptions(const Models::ResetSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a simple application server.
       *
       * @description You can reset a simple application server to re-install its applications or operating system and re-initialize the server. You can reset a simple application server by resetting the current system or changing the image.
       * - Reset the current system: You can re-install the operating system without changing the image.
       * - Change the image: You can select another Alibaba Cloud image or a custom image to re-install the operating system.
       * ### [](#)Precautions
       * - Resetting the system or changing the image of a simple application server clears the disk data on the server. Back up the data as needed.
       * - After you reset a simple application server, monitoring may fail. In this case, you can use one of the following methods to install the CloudMonitor agent on the server:
       *   - Connect to the server: For more information, see [Manually install the CloudMonitor agent for C++ on an ECS instance](https://help.aliyun.com/document_detail/183482.html).
       *   - Use Command Assistant: For more information, see [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html). You can obtain the command that can be used to install CloudMonitor from the "Common commands" section of the [Use Command Assistant](https://help.aliyun.com/document_detail/438681.html) topic.
       * ### [](#)Limits
       * - Snapshots that are created before the reset are retained, but the snapshots cannot be used to restore the disks of the server.
       * - You cannot reset simple application servers that were created from custom images that contain data of data disks.
       * - If you reset a simple application server by replacing the existing image with a custom image, the following limits apply:
       *   - The custom image must reside in the same region as the current server.
       *   - The custom image cannot be created based on the current server. If you want to restore the data on the server, you can use a snapshot of the server to restore disk data.
       *   - If your simple application server resides in a region outside the Chinese mainland, you cannot switch the operating system of the server between Windows Server and Linux. You cannot use a Windows Server custom image to reset a Linux simple application server. Similarly, you cannot use a Linux custom image to reset a Windows Server simple application server. You can switch the operating systems of simple application servers only between Windows Server versions or between Linux distributions.
       *   - The following limits apply to the disks attached to the simple application server:
       *     - If the custom image contains a system disk and a data disk but only a system disk is attached to the simple application server, you cannot use the custom image to reset the simple application server.
       *     - If the system disk size of the custom image is greater than the system disk size of the simple application server, you cannot directly use the custom image to reset the simple application server.
       *     - Only if the system disk size of the simple application server is greater than or equal to the system disk size of the custom image, you can use the custom image to reset the simple application server. To increase the system disk size of your server, you can upgrade the server configuration. For more information, see Upgrade a simple application server.
       *     - If the data disk size of the custom image is greater than the data disk size of the simple application server, you cannot use the custom image to reset the simple application server.
       *
       * @param request ResetSystemRequest
       * @return ResetSystemResponse
       */
      Models::ResetSystemResponse resetSystem(const Models::ResetSystemRequest &request);

      /**
       * @summary Call this operation to restart a lightweight database instance in the Running state.
       *
       * @param request RestartDatabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDatabaseInstanceResponse
       */
      Models::RestartDatabaseInstanceResponse restartDatabaseInstanceWithOptions(const Models::RestartDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to restart a lightweight database instance in the Running state.
       *
       * @param request RestartDatabaseInstanceRequest
       * @return RestartDatabaseInstanceResponse
       */
      Models::RestartDatabaseInstanceResponse restartDatabaseInstance(const Models::RestartDatabaseInstanceRequest &request);

      /**
       * @summary Runs a command on a simple application server.
       *
       * @description Command Assistant is an automated O&M tool designed for simple application servers. You can run commands (Shell, PowerShell, and Bat) on simple application server instances from the console for operations management without having to log on to the instances.
       * To use Command Assistant, the following conditions must be met:
       * - The simple application server instance must be in the Running state.
       * - Cloud Assistant Agent must be installed. Cloud Assistant Agent is installed on simple application server instances by default. If you manually uninstalled it, reinstall it. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       *
       * @param tmpReq RunCommandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommandWithOptions(const Models::RunCommandRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a command on a simple application server.
       *
       * @description Command Assistant is an automated O&M tool designed for simple application servers. You can run commands (Shell, PowerShell, and Bat) on simple application server instances from the console for operations management without having to log on to the instances.
       * To use Command Assistant, the following conditions must be met:
       * - The simple application server instance must be in the Running state.
       * - Cloud Assistant Agent must be installed. Cloud Assistant Agent is installed on simple application server instances by default. If you manually uninstalled it, reinstall it. For more information, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
       *
       * @param request RunCommandRequest
       * @return RunCommandResponse
       */
      Models::RunCommandResponse runCommand(const Models::RunCommandRequest &request);

      /**
       * @summary Starts a database instance.
       *
       * @description This operation starts a database instance that is in the stopped state.
       *
       * @param request StartDatabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDatabaseInstanceResponse
       */
      Models::StartDatabaseInstanceResponse startDatabaseInstanceWithOptions(const Models::StartDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a database instance.
       *
       * @description This operation starts a database instance that is in the stopped state.
       *
       * @param request StartDatabaseInstanceRequest
       * @return StartDatabaseInstanceResponse
       */
      Models::StartDatabaseInstanceResponse startDatabaseInstance(const Models::StartDatabaseInstanceRequest &request);

      /**
       * @summary Starts a simple application server.
       *
       * @description You can call this operation to start a simple application server that is in the Stopped state.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a simple application server.
       *
       * @description You can call this operation to start a simple application server that is in the Stopped state.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary Starts one or more simple application servers.
       *
       * @param request StartInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstancesWithOptions(const Models::StartInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts one or more simple application servers.
       *
       * @param request StartInstancesRequest
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstances(const Models::StartInstancesRequest &request);

      /**
       * @summary Starts a session to log on to a Simple Application Server instance.
       *
       * @param request StartTerminalSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSessionWithOptions(const Models::StartTerminalSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a session to log on to a Simple Application Server instance.
       *
       * @param request StartTerminalSessionRequest
       * @return StartTerminalSessionResponse
       */
      Models::StartTerminalSessionResponse startTerminalSession(const Models::StartTerminalSessionRequest &request);

      /**
       * @summary Stops a lightweight database instance.
       *
       * @description This operation stops a lightweight database instance that is in the running state. After the instance is stopped, you cannot log on to or access it.
       *
       * @param request StopDatabaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDatabaseInstanceResponse
       */
      Models::StopDatabaseInstanceResponse stopDatabaseInstanceWithOptions(const Models::StopDatabaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a lightweight database instance.
       *
       * @description This operation stops a lightweight database instance that is in the running state. After the instance is stopped, you cannot log on to or access it.
       *
       * @param request StopDatabaseInstanceRequest
       * @return StopDatabaseInstanceResponse
       */
      Models::StopDatabaseInstanceResponse stopDatabaseInstance(const Models::StopDatabaseInstanceRequest &request);

      /**
       * @summary Stops a simple application server.
       *
       * @description If a simple application server is temporarily not needed, you can stop it.
       * > Stopping a simple application server instance may cause service interruptions. Perform this operation during off-peak hours.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a simple application server.
       *
       * @description If a simple application server is temporarily not needed, you can stop it.
       * > Stopping a simple application server instance may cause service interruptions. Perform this operation during off-peak hours.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary Stops one or more simple application servers.
       *
       * @param request StopInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstancesWithOptions(const Models::StopInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops one or more simple application servers.
       *
       * @param request StopInstancesRequest
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstances(const Models::StopInstancesRequest &request);

      /**
       * @summary Adds tags to simple application servers, snapshots, custom images, commands, firewall rules, and disks to facilitate the viewing and management of the preceding resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to simple application servers, snapshots, custom images, commands, firewall rules, and disks to facilitate the viewing and management of the preceding resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds and deletes tags from specified lightweight resources, such as instances, snapshots, disks, images, commands, and firewall rules.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds and deletes tags from specified lightweight resources, such as instances, snapshots, disks, images, commands, and firewall rules.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifys the parameter of a command.
       *
       * @param request UpdateCommandAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCommandAttributeResponse
       */
      Models::UpdateCommandAttributeResponse updateCommandAttributeWithOptions(const Models::UpdateCommandAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifys the parameter of a command.
       *
       * @param request UpdateCommandAttributeRequest
       * @return UpdateCommandAttributeResponse
       */
      Models::UpdateCommandAttributeResponse updateCommandAttribute(const Models::UpdateCommandAttributeRequest &request);

      /**
       * @summary Modifies the remarks for the data disk that is attached to a simple application server.
       *
       * @param request UpdateDiskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDiskAttributeResponse
       */
      Models::UpdateDiskAttributeResponse updateDiskAttributeWithOptions(const Models::UpdateDiskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks for the data disk that is attached to a simple application server.
       *
       * @param request UpdateDiskAttributeRequest
       * @return UpdateDiskAttributeResponse
       */
      Models::UpdateDiskAttributeResponse updateDiskAttribute(const Models::UpdateDiskAttributeRequest &request);

      /**
       * @summary Modifies the information of an instance, including the instance name and password.
       *
       * @description ## Operation description
       * After you change the password, you must restart the server by calling the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation for the new password to take effect.
       *
       * @param request UpdateInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAttributeResponse
       */
      Models::UpdateInstanceAttributeResponse updateInstanceAttributeWithOptions(const Models::UpdateInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an instance, including the instance name and password.
       *
       * @description ## Operation description
       * After you change the password, you must restart the server by calling the [RebootInstance](https://help.aliyun.com/document_detail/190443.html) operation for the new password to take effect.
       *
       * @param request UpdateInstanceAttributeRequest
       * @return UpdateInstanceAttributeResponse
       */
      Models::UpdateInstanceAttributeResponse updateInstanceAttribute(const Models::UpdateInstanceAttributeRequest &request);

      /**
       * @summary Modifies the remarks of a snapshot of a simple application server.
       *
       * @param request UpdateSnapshotAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSnapshotAttributeResponse
       */
      Models::UpdateSnapshotAttributeResponse updateSnapshotAttributeWithOptions(const Models::UpdateSnapshotAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks of a snapshot of a simple application server.
       *
       * @param request UpdateSnapshotAttributeRequest
       * @return UpdateSnapshotAttributeResponse
       */
      Models::UpdateSnapshotAttributeResponse updateSnapshotAttribute(const Models::UpdateSnapshotAttributeRequest &request);

      /**
       * @summary Upgrades the plan configuration for a specified simple application server.
       *
       * @description - Only upgrades to a higher-tier plan are supported. For more information about plans, see [Billing items](https://help.aliyun.com/document_detail/58623.html).
       * - When you call this operation to upgrade a server, ensure that your Alibaba Cloud account balance is sufficient. Otherwise, the upgrade fails.
       *
       * @param request UpgradeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeInstanceResponse
       */
      Models::UpgradeInstanceResponse upgradeInstanceWithOptions(const Models::UpgradeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the plan configuration for a specified simple application server.
       *
       * @description - Only upgrades to a higher-tier plan are supported. For more information about plans, see [Billing items](https://help.aliyun.com/document_detail/58623.html).
       * - When you call this operation to upgrade a server, ensure that your Alibaba Cloud account balance is sufficient. Otherwise, the upgrade fails.
       *
       * @param request UpgradeInstanceRequest
       * @return UpgradeInstanceResponse
       */
      Models::UpgradeInstanceResponse upgradeInstance(const Models::UpgradeInstanceRequest &request);

      /**
       * @summary Imports a key pair for a simple application server.
       *
       * @param request UploadInstanceKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadInstanceKeyPairResponse
       */
      Models::UploadInstanceKeyPairResponse uploadInstanceKeyPairWithOptions(const Models::UploadInstanceKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a key pair for a simple application server.
       *
       * @param request UploadInstanceKeyPairRequest
       * @return UploadInstanceKeyPairResponse
       */
      Models::UploadInstanceKeyPairResponse uploadInstanceKeyPair(const Models::UploadInstanceKeyPairRequest &request);
  };
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
