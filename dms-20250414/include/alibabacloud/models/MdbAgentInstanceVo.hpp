// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MDBAGENTINSTANCEVO_HPP_
#define ALIBABACLOUD_MODELS_MDBAGENTINSTANCEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class MdbAgentInstanceVo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MdbAgentInstanceVo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessUrl, accessUrl_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(EngineInstanceId, engineInstanceId_);
      DARABONBA_PTR_TO_JSON(EngineRegion, engineRegion_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(LastActiveTime, lastActiveTime_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PublicDomain, publicDomain_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, MdbAgentInstanceVo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessUrl, accessUrl_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(EngineInstanceId, engineInstanceId_);
      DARABONBA_PTR_FROM_JSON(EngineRegion, engineRegion_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(LastActiveTime, lastActiveTime_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PublicDomain, publicDomain_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    MdbAgentInstanceVo() = default ;
    MdbAgentInstanceVo(const MdbAgentInstanceVo &) = default ;
    MdbAgentInstanceVo(MdbAgentInstanceVo &&) = default ;
    MdbAgentInstanceVo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MdbAgentInstanceVo() = default ;
    MdbAgentInstanceVo& operator=(const MdbAgentInstanceVo &) = default ;
    MdbAgentInstanceVo& operator=(MdbAgentInstanceVo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessUrl_ == nullptr
        && this->chargeType_ == nullptr && this->engineInstanceId_ == nullptr && this->engineRegion_ == nullptr && this->engineType_ == nullptr && this->gmtCreate_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->lastActiveTime_ == nullptr && this->lockTime_ == nullptr && this->orderId_ == nullptr
        && this->publicDomain_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->statusMessage_ == nullptr; };
    // accessUrl Field Functions 
    bool hasAccessUrl() const { return this->accessUrl_ != nullptr;};
    void deleteAccessUrl() { this->accessUrl_ = nullptr;};
    inline string getAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(accessUrl_, "") };
    inline MdbAgentInstanceVo& setAccessUrl(string accessUrl) { DARABONBA_PTR_SET_VALUE(accessUrl_, accessUrl) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline MdbAgentInstanceVo& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // engineInstanceId Field Functions 
    bool hasEngineInstanceId() const { return this->engineInstanceId_ != nullptr;};
    void deleteEngineInstanceId() { this->engineInstanceId_ = nullptr;};
    inline string getEngineInstanceId() const { DARABONBA_PTR_GET_DEFAULT(engineInstanceId_, "") };
    inline MdbAgentInstanceVo& setEngineInstanceId(string engineInstanceId) { DARABONBA_PTR_SET_VALUE(engineInstanceId_, engineInstanceId) };


    // engineRegion Field Functions 
    bool hasEngineRegion() const { return this->engineRegion_ != nullptr;};
    void deleteEngineRegion() { this->engineRegion_ = nullptr;};
    inline string getEngineRegion() const { DARABONBA_PTR_GET_DEFAULT(engineRegion_, "") };
    inline MdbAgentInstanceVo& setEngineRegion(string engineRegion) { DARABONBA_PTR_SET_VALUE(engineRegion_, engineRegion) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline MdbAgentInstanceVo& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MdbAgentInstanceVo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MdbAgentInstanceVo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline MdbAgentInstanceVo& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lastActiveTime Field Functions 
    bool hasLastActiveTime() const { return this->lastActiveTime_ != nullptr;};
    void deleteLastActiveTime() { this->lastActiveTime_ = nullptr;};
    inline string getLastActiveTime() const { DARABONBA_PTR_GET_DEFAULT(lastActiveTime_, "") };
    inline MdbAgentInstanceVo& setLastActiveTime(string lastActiveTime) { DARABONBA_PTR_SET_VALUE(lastActiveTime_, lastActiveTime) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline string getLockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, "") };
    inline MdbAgentInstanceVo& setLockTime(string lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline MdbAgentInstanceVo& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // publicDomain Field Functions 
    bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
    void deletePublicDomain() { this->publicDomain_ = nullptr;};
    inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
    inline MdbAgentInstanceVo& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline MdbAgentInstanceVo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline MdbAgentInstanceVo& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline MdbAgentInstanceVo& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    shared_ptr<string> accessUrl_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> engineInstanceId_ {};
    shared_ptr<string> engineRegion_ {};
    shared_ptr<string> engineType_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> lastActiveTime_ {};
    shared_ptr<string> lockTime_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> publicDomain_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> statusDesc_ {};
    shared_ptr<string> statusMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
