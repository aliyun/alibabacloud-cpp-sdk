// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSHAREKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSHAREKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostShareKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostShareKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostShareKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyHostShareKeyRequest() = default ;
    ModifyHostShareKeyRequest(const ModifyHostShareKeyRequest &) = default ;
    ModifyHostShareKeyRequest(ModifyHostShareKeyRequest &&) = default ;
    ModifyHostShareKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostShareKeyRequest() = default ;
    ModifyHostShareKeyRequest& operator=(const ModifyHostShareKeyRequest &) = default ;
    ModifyHostShareKeyRequest& operator=(ModifyHostShareKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostShareKeyId_ == nullptr
        && this->hostShareKeyName_ == nullptr && this->instanceId_ == nullptr && this->passPhrase_ == nullptr && this->privateKey_ == nullptr && this->regionId_ == nullptr; };
    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline ModifyHostShareKeyRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // hostShareKeyName Field Functions 
    bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
    void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
    inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
    inline ModifyHostShareKeyRequest& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostShareKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string getPassPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline ModifyHostShareKeyRequest& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline ModifyHostShareKeyRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostShareKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the shared key whose information you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> hostShareKeyId_ {};
    // The name of the shared key.
    shared_ptr<string> hostShareKeyName_ {};
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The password of the private key. Specify a Base64-encoded string.
    shared_ptr<string> passPhrase_ {};
    // The private key. Specify a Base64-encoded string.
    // 
    // >  Only Rivest-Shamir-Adleman (RSA) keys that are generated by using the ssh-keygen command and keys that are generated by using the Ed25519 algorithm are supported.
    shared_ptr<string> privateKey_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
