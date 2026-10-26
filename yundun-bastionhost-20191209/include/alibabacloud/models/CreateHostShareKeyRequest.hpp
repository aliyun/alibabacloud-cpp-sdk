// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTSHAREKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTSHAREKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateHostShareKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostShareKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostShareKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeyName, hostShareKeyName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateHostShareKeyRequest() = default ;
    CreateHostShareKeyRequest(const CreateHostShareKeyRequest &) = default ;
    CreateHostShareKeyRequest(CreateHostShareKeyRequest &&) = default ;
    CreateHostShareKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostShareKeyRequest() = default ;
    CreateHostShareKeyRequest& operator=(const CreateHostShareKeyRequest &) = default ;
    CreateHostShareKeyRequest& operator=(CreateHostShareKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostShareKeyName_ == nullptr
        && this->instanceId_ == nullptr && this->passPhrase_ == nullptr && this->privateKey_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostShareKeyName Field Functions 
    bool hasHostShareKeyName() const { return this->hostShareKeyName_ != nullptr;};
    void deleteHostShareKeyName() { this->hostShareKeyName_ = nullptr;};
    inline string getHostShareKeyName() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyName_, "") };
    inline CreateHostShareKeyRequest& setHostShareKeyName(string hostShareKeyName) { DARABONBA_PTR_SET_VALUE(hostShareKeyName_, hostShareKeyName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHostShareKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string getPassPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline CreateHostShareKeyRequest& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string getPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline CreateHostShareKeyRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateHostShareKeyRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHostShareKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the host shared key to create. Maximum length: 128 characters.
    // 
    // This parameter is required.
    shared_ptr<string> hostShareKeyName_ {};
    // The instance ID of the bastion host. 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The passphrase of the private key (Base64-encoded string).
    shared_ptr<string> passPhrase_ {};
    // The private key (Base64-encoded string).
    // > RSA keys and Ed25519 keys generated by using the ssh-keygen command are supported.
    // 
    // This parameter is required.
    shared_ptr<string> privateKey_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the bastion host. 
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
