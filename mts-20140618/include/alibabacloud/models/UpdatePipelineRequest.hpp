// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendConfig, extendConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdatePipelineRequest() = default ;
    UpdatePipelineRequest(const UpdatePipelineRequest &) = default ;
    UpdatePipelineRequest(UpdatePipelineRequest &&) = default ;
    UpdatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineRequest() = default ;
    UpdatePipelineRequest& operator=(const UpdatePipelineRequest &) = default ;
    UpdatePipelineRequest& operator=(UpdatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendConfig_ == nullptr
        && this->name_ == nullptr && this->notifyConfig_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pipelineId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->role_ == nullptr && this->state_ == nullptr; };
    // extendConfig Field Functions 
    bool hasExtendConfig() const { return this->extendConfig_ != nullptr;};
    void deleteExtendConfig() { this->extendConfig_ = nullptr;};
    inline string getExtendConfig() const { DARABONBA_PTR_GET_DEFAULT(extendConfig_, "") };
    inline UpdatePipelineRequest& setExtendConfig(string extendConfig) { DARABONBA_PTR_SET_VALUE(extendConfig_, extendConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePipelineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline string getNotifyConfig() const { DARABONBA_PTR_GET_DEFAULT(notifyConfig_, "") };
    inline UpdatePipelineRequest& setNotifyConfig(string notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdatePipelineRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdatePipelineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline UpdatePipelineRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdatePipelineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdatePipelineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline UpdatePipelineRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdatePipelineRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> extendConfig_ {};
    // The new name of the MPS queue. The value can contain letters, digits, and special characters such as hyphens (-) and can be up to 128 bytes in size. The value cannot start with a special character.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The Message Service (MNS) configuration, such as the information about the MNS queue or topic. For more information, see the "NotifyConfig" section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    shared_ptr<string> notifyConfig_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the MPS queue that you want to update. To view the MPS queue ID, log on to the **MPS console** and choose **Global Settings** > **Pipelines** in the left-side navigation pane.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The role that is assigned to the current RAM user. To obtain the role, you can log on to the **Resource Access Management (RAM) console** and choose **Identities** > **Roles** in the left-side navigation pane.
    shared_ptr<string> role_ {};
    // The new state of the MPS queue.
    // 
    // *   **Active**: The MPS queue is active. Jobs in the MPS queue can be scheduled and run by MPS.
    // *   **Paused**: The MPS queue is paused. Jobs in the MPS queue cannot be scheduled or run by MPS, and all jobs remain in the Submitted state. Jobs that are running will not be affected.
    // 
    // This parameter is required.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
