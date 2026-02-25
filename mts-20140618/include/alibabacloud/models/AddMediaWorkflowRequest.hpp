// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIAWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIAWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddMediaWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
      DARABONBA_PTR_TO_JSON(TriggerMode, triggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
      DARABONBA_PTR_FROM_JSON(TriggerMode, triggerMode_);
    };
    AddMediaWorkflowRequest() = default ;
    AddMediaWorkflowRequest(const AddMediaWorkflowRequest &) = default ;
    AddMediaWorkflowRequest(AddMediaWorkflowRequest &&) = default ;
    AddMediaWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaWorkflowRequest() = default ;
    AddMediaWorkflowRequest& operator=(const AddMediaWorkflowRequest &) = default ;
    AddMediaWorkflowRequest& operator=(AddMediaWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->topology_ == nullptr
        && this->triggerMode_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddMediaWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddMediaWorkflowRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddMediaWorkflowRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddMediaWorkflowRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddMediaWorkflowRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string getTopology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline AddMediaWorkflowRequest& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline string getTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
    inline AddMediaWorkflowRequest& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    // The name of the media workflow.
    // 
    // *   The value cannot be empty.
    // *   The name cannot be the same as that of an existing media workflow within the current Alibaba Cloud account.
    // *   The name can be up to 64 characters in length.
    // *   The value must be encoded in the UTF-8 format.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The topology of the media workflow. The value must be a JSON object that contains the activities and activity dependencies. For more information, see the **Sample topology** section of this topic.
    // 
    // >  The Object Storage Service (OSS) bucket must reside in the same region as your MPS service.
    // 
    // This parameter is required.
    shared_ptr<string> topology_ {};
    // The triggering mode of the media workflow. Valid values:
    // 
    // *   **OssAutoTrigger**: The media workflow is automatically triggered.
    // *   **NotInAuto**: The media workflow is not automatically triggered.
    shared_ptr<string> triggerMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
