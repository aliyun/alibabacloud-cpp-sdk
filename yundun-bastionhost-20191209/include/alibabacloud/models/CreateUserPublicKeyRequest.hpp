// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateUserPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(PublicKeyName, publicKeyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateUserPublicKeyRequest() = default ;
    CreateUserPublicKeyRequest(const CreateUserPublicKeyRequest &) = default ;
    CreateUserPublicKeyRequest(CreateUserPublicKeyRequest &&) = default ;
    CreateUserPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPublicKeyRequest() = default ;
    CreateUserPublicKeyRequest& operator=(const CreateUserPublicKeyRequest &) = default ;
    CreateUserPublicKeyRequest& operator=(CreateUserPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->instanceId_ == nullptr && return this->publicKey_ == nullptr && return this->publicKeyName_ == nullptr && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateUserPublicKeyRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserPublicKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline CreateUserPublicKeyRequest& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // publicKeyName Field Functions 
    bool hasPublicKeyName() const { return this->publicKeyName_ != nullptr;};
    void deletePublicKeyName() { this->publicKeyName_ = nullptr;};
    inline string publicKeyName() const { DARABONBA_PTR_GET_DEFAULT(publicKeyName_, "") };
    inline CreateUserPublicKeyRequest& setPublicKeyName(string publicKeyName) { DARABONBA_PTR_SET_VALUE(publicKeyName_, publicKeyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateUserPublicKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateUserPublicKeyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The description of the public key. The description can be up to 500 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the bastion host on which you want to create a public key for the user.
    // 
    // > You can call the [listinstances](https://help.aliyun.com/document_detail/204522.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public key. Encode the value by using the Base64 algorithm.
    // 
    // This parameter is required.
    std::shared_ptr<string> publicKey_ = nullptr;
    // The name of the public key.
    // 
    // This parameter is required.
    std::shared_ptr<string> publicKeyName_ = nullptr;
    // Specifies the region ID of the bastion host on which you want to create a public key for the user.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the user for whom you want to create a public key.
    // 
    // >  You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
