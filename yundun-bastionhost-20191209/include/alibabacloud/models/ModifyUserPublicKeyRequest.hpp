// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyUserPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_TO_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_FROM_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyUserPublicKeyRequest() = default ;
    ModifyUserPublicKeyRequest(const ModifyUserPublicKeyRequest &) = default ;
    ModifyUserPublicKeyRequest(ModifyUserPublicKeyRequest &&) = default ;
    ModifyUserPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserPublicKeyRequest() = default ;
    ModifyUserPublicKeyRequest& operator=(const ModifyUserPublicKeyRequest &) = default ;
    ModifyUserPublicKeyRequest& operator=(ModifyUserPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->instanceId_ == nullptr && this->publicKey_ == nullptr && this->publicKeyId_ == nullptr && this->publicKeyName_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyUserPublicKeyRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserPublicKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline ModifyUserPublicKeyRequest& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // publicKeyId Field Functions 
    bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
    void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
    inline string getPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
    inline ModifyUserPublicKeyRequest& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


    // publicKeyName Field Functions 
    bool hasPublicKeyName() const { return this->publicKeyName_ != nullptr;};
    void deletePublicKeyName() { this->publicKeyName_ = nullptr;};
    inline string getPublicKeyName() const { DARABONBA_PTR_GET_DEFAULT(publicKeyName_, "") };
    inline ModifyUserPublicKeyRequest& setPublicKeyName(string publicKeyName) { DARABONBA_PTR_SET_VALUE(publicKeyName_, publicKeyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserPublicKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new description of the user group. The description can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The ID of the bastion host on which you want to modify the public key of a user.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new public key.
    // 
    // >  Specify a Base64-encoded string.
    shared_ptr<string> publicKey_ {};
    // The ID of the public key that you want to modify.
    // 
    // >  You can call the [ListUserPublicKeys](https://help.aliyun.com/document_detail/477555.html) operation to query the public key ID.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyId_ {};
    // The name of the public key that you want to modify. This name can be up to 128 characters in length.
    shared_ptr<string> publicKeyName_ {};
    // The region ID of the bastion host that is used to modify the public key of the user.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
