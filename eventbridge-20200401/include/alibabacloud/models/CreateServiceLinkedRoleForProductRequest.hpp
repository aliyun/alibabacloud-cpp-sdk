// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEFORPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEFORPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateServiceLinkedRoleForProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleForProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleForProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
    };
    CreateServiceLinkedRoleForProductRequest() = default ;
    CreateServiceLinkedRoleForProductRequest(const CreateServiceLinkedRoleForProductRequest &) = default ;
    CreateServiceLinkedRoleForProductRequest(CreateServiceLinkedRoleForProductRequest &&) = default ;
    CreateServiceLinkedRoleForProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleForProductRequest() = default ;
    CreateServiceLinkedRoleForProductRequest& operator=(const CreateServiceLinkedRoleForProductRequest &) = default ;
    CreateServiceLinkedRoleForProductRequest& operator=(CreateServiceLinkedRoleForProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productName_ != nullptr; };
    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CreateServiceLinkedRoleForProductRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    // The name of the cloud service or the name of the service-linked role with which the cloud service is associated. Valid values:
    // 
    // *   AliyunServiceRoleForEventBridgeSendToFC: allows EventBridge to deliver events to Function Compute.
    // *   AliyunServiceRoleForEventBridgeSendToSMS: allows EventBridge to deliver events to Short Message Service (SMS).
    // *   AliyunServiceRoleForEventBridgeSendToDirectMail: allows EventBridge to deliver events to Direct Mail.
    // *   AliyunServiceRoleForEventBridgeSourceRocketMQ: allows EventBridge to integrate with ApsaraMQ for RocketMQ.
    // *   AliyunServiceRoleForEventBridgeSourceMNS: allows EventBridge to integrate with Simple Message Queue (SMQ, formerly MNS).
    // *   AliyunServiceRoleForEventBridgeConnectVPC: allows EventBridge to access virtual private clouds (VPCs).
    // *   AliyunServiceRoleForEventBridgeSourceActionTrail: allows EventBridge to integrate with ActionTrail.
    // *   AliyunServiceRoleForEventBridgeSourceRabbitMQ: allows EventBridge to integrate with ApsaraMQ for RabbitMQ.
    // *   AliyunServiceRoleForEventBridgeSendToRabbitMQ: allows EventBridge to deliver events to ApsaraMQ for RabbitMQ.
    // *   AliyunServiceRoleForEventBridgeSendToRocketMQ: allows EventBridge to deliver events to ApsaraMQ for RocketMQ.
    // *   AliyunServiceRoleForEventBridgeSourceCMS: allow EventBridge to integrate with CloudMonitor.
    // *   AliyunServiceRoleForEventBridgeSendToKafka: allows EventBridge to deliver events to ApsaraMQ for Kafka.
    // *   AliyunServiceRoleForEventBridgeSourceKafka: allows EventBridge to integrate with ApsaraMQ for Kafka.
    // *   AliyunServiceRoleForEventBridgeSendToRDS: allows EventBridge to deliver events to ApsaraDB RDS.
    // *   AliyunServiceRoleForEventBridgeSendToSAE: allows EventBridge to deliver events to Serverless App Engine (SAE).
    // *   AliyunServiceRoleForEventBridgeSourceMqtt: allows EventBridge to integrate with ApsaraMQ for MQTT.
    // *   AliyunServiceRoleForEventBridgeSourceSLS: allows EventBridge to integrate with Simple Log Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
