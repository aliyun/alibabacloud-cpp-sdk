// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUESTENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUESTENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SwitchSynchronizationEndpointRequestEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSynchronizationEndpointRequestEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSynchronizationEndpointRequestEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SwitchSynchronizationEndpointRequestEndpoint() = default ;
    SwitchSynchronizationEndpointRequestEndpoint(const SwitchSynchronizationEndpointRequestEndpoint &) = default ;
    SwitchSynchronizationEndpointRequestEndpoint(SwitchSynchronizationEndpointRequestEndpoint &&) = default ;
    SwitchSynchronizationEndpointRequestEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSynchronizationEndpointRequestEndpoint() = default ;
    SwitchSynchronizationEndpointRequestEndpoint& operator=(const SwitchSynchronizationEndpointRequestEndpoint &) = default ;
    SwitchSynchronizationEndpointRequestEndpoint& operator=(SwitchSynchronizationEndpointRequestEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IP_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->port_ == nullptr && return this->type_ == nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline SwitchSynchronizationEndpointRequestEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchSynchronizationEndpointRequestEndpoint& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SwitchSynchronizationEndpointRequestEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline SwitchSynchronizationEndpointRequestEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SwitchSynchronizationEndpointRequestEndpoint& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP address of the database.
    // 
    // >  You must specify the IP address only if the **Endpoint.InstanceType** parameter is set to **Express**.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the ECS instance or the virtual private cloud (VPC).
    // 
    // > 
    // *   If the **Endpoint.InstanceType** parameter is set to **ECS**, you must specify the ID of the ECS instance.
    // *   If the **Endpoint.InstanceType** parameter is set to **Express**, you must specify the ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type of the database. Valid values:
    // 
    // *   **LocalInstance**: self-managed database with a public IP address
    // *   **ECS**: self-managed database that is hosted on ECS
    // *   **Express**: self-managed database that is connected over Express Connect
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The service port number of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
    // Specifies whether to update the connection settings of the source instance or the destination instance. Valid values:
    // 
    // *   **Source**
    // *   **Destination**
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
