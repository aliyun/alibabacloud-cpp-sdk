// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest(ModifyInstanceAttributeRequest &&) = default ;
    ModifyInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequest() = default ;
    ModifyInstanceAttributeRequest& operator=(const ModifyInstanceAttributeRequest &) = default ;
    ModifyInstanceAttributeRequest& operator=(ModifyInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionProtection_ == nullptr
        && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->password_ == nullptr && this->userData_ == nullptr; };
    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyInstanceAttributeRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyInstanceAttributeRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAttributeRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceAttributeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ModifyInstanceAttributeRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<bool> deletionProtection_ {};
    // The hostname of the ECS instance. The hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-). Consecutive periods (.) or hyphens (-) are not allowed. The hostname cannot start or end with a period (.) or a hyphen (-).
    shared_ptr<string> hostName_ {};
    // The ID of the instance to modify. Only a single instance ID is supported.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the instance.
    // 
    // The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character, and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> instanceName_ {};
    // The password of the instance.
    shared_ptr<string> password_ {};
    // The instance user data. The user data must be encoded in Base64.
    // 
    // Before encoding, the raw data cannot exceed 16 KB in size. Do not pass sensitive information such as passwords and private keys in plaintext. If you must pass sensitive information, encrypt the information before you encode it in Base64, and then decrypt the information in the same way within the instance.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
