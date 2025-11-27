// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASLUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESASLUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreateSaslUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSaslUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSaslUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mechanism, mechanism_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    CreateSaslUserRequest() = default ;
    CreateSaslUserRequest(const CreateSaslUserRequest &) = default ;
    CreateSaslUserRequest(CreateSaslUserRequest &&) = default ;
    CreateSaslUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSaslUserRequest() = default ;
    CreateSaslUserRequest& operator=(const CreateSaslUserRequest &) = default ;
    CreateSaslUserRequest& operator=(CreateSaslUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mechanism_ == nullptr && return this->password_ == nullptr && return this->regionId_ == nullptr && return this->type_ == nullptr && return this->username_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSaslUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mechanism Field Functions 
    bool hasMechanism() const { return this->mechanism_ != nullptr;};
    void deleteMechanism() { this->mechanism_ = nullptr;};
    inline string mechanism() const { DARABONBA_PTR_GET_DEFAULT(mechanism_, "") };
    inline CreateSaslUserRequest& setMechanism(string mechanism) { DARABONBA_PTR_SET_VALUE(mechanism_, mechanism) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateSaslUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSaslUserRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSaslUserRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline CreateSaslUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The encryption method. Valid values:
    // 
    // *   SCRAM-SHA-512 (default)
    // *   SCRAM-SHA-256
    // 
    // >  This parameter is available only for ApsaraMQ for Kafka serverless instances.
    std::shared_ptr<string> mechanism_ = nullptr;
    // The password of the SASL user.
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the Simple Authentication and Security Layer (SASL) user. Valid values:
    // 
    // *   **plain**: a simple mechanism that uses usernames and passwords to verify user identities. ApsaraMQ for Kafka provides an improved PLAIN mechanism that allows you to dynamically add SASL users without the need to restart an instance.
    // *   **SCRAM**: a mechanism that uses usernames and passwords to verify user identities. Compared with the PLAIN mechanism, this mechanism provides better security protection. ApsaraMQ for Kafka uses the SCRAM-SHA-256 algorithm.
    // *   **LDAP**: This value is available only for the SASL users of ApsaraMQ for Confluent instances.
    // 
    // Default value: **plain**.
    std::shared_ptr<string> type_ = nullptr;
    // The name of the SASL user.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
