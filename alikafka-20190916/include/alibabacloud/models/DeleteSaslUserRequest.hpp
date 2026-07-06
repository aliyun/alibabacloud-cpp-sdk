// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESASLUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESASLUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DeleteSaslUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSaslUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSaslUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DeleteSaslUserRequest() = default ;
    DeleteSaslUserRequest(const DeleteSaslUserRequest &) = default ;
    DeleteSaslUserRequest(DeleteSaslUserRequest &&) = default ;
    DeleteSaslUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSaslUserRequest() = default ;
    DeleteSaslUserRequest& operator=(const DeleteSaslUserRequest &) = default ;
    DeleteSaslUserRequest& operator=(DeleteSaslUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mechanism_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr && this->username_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteSaslUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mechanism Field Functions 
    bool hasMechanism() const { return this->mechanism_ != nullptr;};
    void deleteMechanism() { this->mechanism_ = nullptr;};
    inline string getMechanism() const { DARABONBA_PTR_GET_DEFAULT(mechanism_, "") };
    inline DeleteSaslUserRequest& setMechanism(string mechanism) { DARABONBA_PTR_SET_VALUE(mechanism_, mechanism) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteSaslUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteSaslUserRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DeleteSaslUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Encryption method. Valid values:
    // 
    // - SCRAM-SHA-512 (selected by default)
    // 
    // - SCRAM-SHA-256
    // 
    // > This parameter is only supported for Serverless instances.
    shared_ptr<string> mechanism_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Type. Valid values:
    // 
    // - **plain**: A simple username and password verification mechanism. MSMQ optimizes the PLAIN mechanism to support adding SASL users dynamically without restarting the instance.
    // 
    // - **scram**: A username and password verification mechanism with higher security than PLAIN. MSMQ uses SCRAM-SHA-256.
    // 
    // - **LDAP**: Only applicable for deleting Confluent instance users.
    // 
    // Default value: **plain**.
    shared_ptr<string> type_ {};
    // Username.
    // 
    // This parameter is required.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
