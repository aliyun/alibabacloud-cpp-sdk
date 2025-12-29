// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONMAINTENANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONMAINTENANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyActiveOperationMaintenanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationMaintenanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationMaintenanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyActiveOperationMaintenanceConfigRequest() = default ;
    ModifyActiveOperationMaintenanceConfigRequest(const ModifyActiveOperationMaintenanceConfigRequest &) = default ;
    ModifyActiveOperationMaintenanceConfigRequest(ModifyActiveOperationMaintenanceConfigRequest &&) = default ;
    ModifyActiveOperationMaintenanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationMaintenanceConfigRequest() = default ;
    ModifyActiveOperationMaintenanceConfigRequest& operator=(const ModifyActiveOperationMaintenanceConfigRequest &) = default ;
    ModifyActiveOperationMaintenanceConfigRequest& operator=(ModifyActiveOperationMaintenanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleTime_ == nullptr
        && this->cycleType_ == nullptr && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->status_ == nullptr; };
    // cycleTime Field Functions 
    bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
    void deleteCycleTime() { this->cycleTime_ = nullptr;};
    inline string getCycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setCycleTime(string cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


    // cycleType Field Functions 
    bool hasCycleType() const { return this->cycleType_ != nullptr;};
    void deleteCycleType() { this->cycleType_ = nullptr;};
    inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyActiveOperationMaintenanceConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyActiveOperationMaintenanceConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyActiveOperationMaintenanceConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyActiveOperationMaintenanceConfigRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> cycleTime_ {};
    shared_ptr<string> cycleType_ {};
    shared_ptr<string> maintainEndTime_ {};
    shared_ptr<string> maintainStartTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
