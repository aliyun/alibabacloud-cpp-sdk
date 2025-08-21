// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDNETWORKINTERFACETOINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDNETWORKINTERFACETOINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AddNetworkInterfaceToInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddNetworkInterfaceToInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
    };
    friend void from_json(const Darabonba::Json& j, AddNetworkInterfaceToInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
    };
    AddNetworkInterfaceToInstanceRequest() = default ;
    AddNetworkInterfaceToInstanceRequest(const AddNetworkInterfaceToInstanceRequest &) = default ;
    AddNetworkInterfaceToInstanceRequest(AddNetworkInterfaceToInstanceRequest &&) = default ;
    AddNetworkInterfaceToInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddNetworkInterfaceToInstanceRequest() = default ;
    AddNetworkInterfaceToInstanceRequest& operator=(const AddNetworkInterfaceToInstanceRequest &) = default ;
    AddNetworkInterfaceToInstanceRequest& operator=(AddNetworkInterfaceToInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoStart_ != nullptr
        && this->instanceId_ != nullptr && this->networks_ != nullptr; };
    // autoStart Field Functions 
    bool hasAutoStart() const { return this->autoStart_ != nullptr;};
    void deleteAutoStart() { this->autoStart_ = nullptr;};
    inline bool autoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, false) };
    inline AddNetworkInterfaceToInstanceRequest& setAutoStart(bool autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddNetworkInterfaceToInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline string networks() const { DARABONBA_PTR_GET_DEFAULT(networks_, "") };
    inline AddNetworkInterfaceToInstanceRequest& setNetworks(string networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };


  protected:
    // Specifies whether to automatically restart the instance.
    std::shared_ptr<bool> autoStart_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The network. The value is a JSON string. Only IPv6 is supported. Sample code of an IPv6 network: [{ "ipType": "public", "ipAddressType": "ipv6" }]
    // 
    // This parameter is required.
    std::shared_ptr<string> networks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
