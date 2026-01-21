// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteUserPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteUserPublicKeyRequest() = default ;
    DeleteUserPublicKeyRequest(const DeleteUserPublicKeyRequest &) = default ;
    DeleteUserPublicKeyRequest(DeleteUserPublicKeyRequest &&) = default ;
    DeleteUserPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserPublicKeyRequest() = default ;
    DeleteUserPublicKeyRequest& operator=(const DeleteUserPublicKeyRequest &) = default ;
    DeleteUserPublicKeyRequest& operator=(DeleteUserPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->publicKeyId_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteUserPublicKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicKeyId Field Functions 
    bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
    void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
    inline string getPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
    inline DeleteUserPublicKeyRequest& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteUserPublicKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Bastionhost instance to which the users to be queried belong.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the Bastionhost instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The public key ID.
    // 
    // >  You can call the [ListUserPublicKeys](https://help.aliyun.com/document_detail/477555.html) operation to query the public key ID.
    // 
    // This parameter is required.
    shared_ptr<string> publicKeyId_ {};
    // The region ID of the bastion host. For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
