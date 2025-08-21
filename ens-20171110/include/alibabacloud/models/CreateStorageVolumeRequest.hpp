// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateStorageVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStorageVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_TO_JSON(AuthProtocol, authProtocol_);
      DARABONBA_PTR_TO_JSON(AuthUser, authUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(StorageId, storageId_);
      DARABONBA_PTR_TO_JSON(VolumeName, volumeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStorageVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_FROM_JSON(AuthProtocol, authProtocol_);
      DARABONBA_PTR_FROM_JSON(AuthUser, authUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(StorageId, storageId_);
      DARABONBA_PTR_FROM_JSON(VolumeName, volumeName_);
    };
    CreateStorageVolumeRequest() = default ;
    CreateStorageVolumeRequest(const CreateStorageVolumeRequest &) = default ;
    CreateStorageVolumeRequest(CreateStorageVolumeRequest &&) = default ;
    CreateStorageVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStorageVolumeRequest() = default ;
    CreateStorageVolumeRequest& operator=(const CreateStorageVolumeRequest &) = default ;
    CreateStorageVolumeRequest& operator=(CreateStorageVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authPassword_ != nullptr
        && this->authProtocol_ != nullptr && this->authUser_ != nullptr && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->gatewayId_ != nullptr
        && this->isAuth_ != nullptr && this->isEnable_ != nullptr && this->storageId_ != nullptr && this->volumeName_ != nullptr; };
    // authPassword Field Functions 
    bool hasAuthPassword() const { return this->authPassword_ != nullptr;};
    void deleteAuthPassword() { this->authPassword_ = nullptr;};
    inline string authPassword() const { DARABONBA_PTR_GET_DEFAULT(authPassword_, "") };
    inline CreateStorageVolumeRequest& setAuthPassword(string authPassword) { DARABONBA_PTR_SET_VALUE(authPassword_, authPassword) };


    // authProtocol Field Functions 
    bool hasAuthProtocol() const { return this->authProtocol_ != nullptr;};
    void deleteAuthProtocol() { this->authProtocol_ = nullptr;};
    inline string authProtocol() const { DARABONBA_PTR_GET_DEFAULT(authProtocol_, "") };
    inline CreateStorageVolumeRequest& setAuthProtocol(string authProtocol) { DARABONBA_PTR_SET_VALUE(authProtocol_, authProtocol) };


    // authUser Field Functions 
    bool hasAuthUser() const { return this->authUser_ != nullptr;};
    void deleteAuthUser() { this->authUser_ = nullptr;};
    inline string authUser() const { DARABONBA_PTR_GET_DEFAULT(authUser_, "") };
    inline CreateStorageVolumeRequest& setAuthUser(string authUser) { DARABONBA_PTR_SET_VALUE(authUser_, authUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStorageVolumeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateStorageVolumeRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreateStorageVolumeRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // isAuth Field Functions 
    bool hasIsAuth() const { return this->isAuth_ != nullptr;};
    void deleteIsAuth() { this->isAuth_ = nullptr;};
    inline string isAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, "") };
    inline CreateStorageVolumeRequest& setIsAuth(string isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline string isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, "") };
    inline CreateStorageVolumeRequest& setIsEnable(string isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // storageId Field Functions 
    bool hasStorageId() const { return this->storageId_ != nullptr;};
    void deleteStorageId() { this->storageId_ = nullptr;};
    inline string storageId() const { DARABONBA_PTR_GET_DEFAULT(storageId_, "") };
    inline CreateStorageVolumeRequest& setStorageId(string storageId) { DARABONBA_PTR_SET_VALUE(storageId_, storageId) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string volumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline CreateStorageVolumeRequest& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


  protected:
    // The password of the CHAP protocol.
    std::shared_ptr<string> authPassword_ = nullptr;
    // The authentication protocol. Set the value to **CHAP**.
    std::shared_ptr<string> authProtocol_ = nullptr;
    // The username of the CHAP protocol.
    std::shared_ptr<string> authUser_ = nullptr;
    // The description of the volume. The description must be 2 to 128 characters in length. The description cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // Specifies whether to enable authentication. Valid values:
    // 
    // *   **1**: Authentication is enabled.
    // *   **0** (default): Authentication is disabled.
    std::shared_ptr<string> isAuth_ = nullptr;
    // Indicates whether the volume is enabled. Valid values:
    // 
    // *   **1** (default): The volume is enabled.
    // *   **0**: The volume is disabled.
    std::shared_ptr<string> isEnable_ = nullptr;
    // The ID of the storage medium.
    // 
    // This parameter is required.
    std::shared_ptr<string> storageId_ = nullptr;
    // The name of the volume. The name must be 2 to 128 characters in length. The name cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> volumeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
