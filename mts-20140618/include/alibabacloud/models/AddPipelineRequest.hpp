// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddPipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(SpeedLevel, speedLevel_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(SpeedLevel, speedLevel_);
    };
    AddPipelineRequest() = default ;
    AddPipelineRequest(const AddPipelineRequest &) = default ;
    AddPipelineRequest(AddPipelineRequest &&) = default ;
    AddPipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineRequest() = default ;
    AddPipelineRequest& operator=(const AddPipelineRequest &) = default ;
    AddPipelineRequest& operator=(AddPipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->notifyConfig_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->role_ == nullptr && this->speed_ == nullptr && this->speedLevel_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddPipelineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline string getNotifyConfig() const { DARABONBA_PTR_GET_DEFAULT(notifyConfig_, "") };
    inline AddPipelineRequest& setNotifyConfig(string notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddPipelineRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddPipelineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddPipelineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddPipelineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline AddPipelineRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
    inline AddPipelineRequest& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // speedLevel Field Functions 
    bool hasSpeedLevel() const { return this->speedLevel_ != nullptr;};
    void deleteSpeedLevel() { this->speedLevel_ = nullptr;};
    inline int64_t getSpeedLevel() const { DARABONBA_PTR_GET_DEFAULT(speedLevel_, 0L) };
    inline AddPipelineRequest& setSpeedLevel(int64_t speedLevel) { DARABONBA_PTR_SET_VALUE(speedLevel_, speedLevel) };


  protected:
    // The name of the MPS queue. The name can be up to 128 bytes in size.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The Message Service (MNS) configuration.
    shared_ptr<string> notifyConfig_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The role.
    shared_ptr<string> role_ {};
    // The type of the MPS queue. Valid values:
    // 
    // *   **Boost**: MPS queue with transcoding speed boosted.
    // *   **Standard**: standard MPS queue.
    // *   **NarrowBandHDV2**: MPS queue that supports Narrowband HD 2.0.
    // *   **AIVideoCover**: MPS queue for intelligent snapshot capture.
    // *   **AIVideoTag**: MPS queue for video tagging. The supported regions are China (Shanghai), China (Beijing), and China (Hangzhou).
    // 
    // Default value: **Standard**.
    shared_ptr<string> speed_ {};
    // The level of the MPS queue. Valid values: **1 to 3**.
    shared_ptr<int64_t> speedLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
