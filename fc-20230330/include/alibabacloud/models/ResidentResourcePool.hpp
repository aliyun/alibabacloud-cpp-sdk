// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTRESOURCEPOOL_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTRESOURCEPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResidentResourceAllocationStatus.hpp>
#include <alibabacloud/models/ResidentResourceCapacity.hpp>
#include <alibabacloud/models/TimedPoolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ResidentResourcePool : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResidentResourcePool& obj) { 
      DARABONBA_PTR_TO_JSON(allocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(associatedPoolId, associatedPoolId_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(poolType, poolType_);
      DARABONBA_PTR_TO_JSON(residentResourcePoolId, residentResourcePoolId_);
      DARABONBA_PTR_TO_JSON(residentResourcePoolName, residentResourcePoolName_);
      DARABONBA_PTR_TO_JSON(resourcePoolCapacity, resourcePoolCapacity_);
      DARABONBA_PTR_TO_JSON(resourcePoolConfig, resourcePoolConfig_);
      DARABONBA_PTR_TO_JSON(timedConfig, timedConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourcePool& obj) { 
      DARABONBA_PTR_FROM_JSON(allocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(associatedPoolId, associatedPoolId_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(poolType, poolType_);
      DARABONBA_PTR_FROM_JSON(residentResourcePoolId, residentResourcePoolId_);
      DARABONBA_PTR_FROM_JSON(residentResourcePoolName, residentResourcePoolName_);
      DARABONBA_PTR_FROM_JSON(resourcePoolCapacity, resourcePoolCapacity_);
      DARABONBA_PTR_FROM_JSON(resourcePoolConfig, resourcePoolConfig_);
      DARABONBA_PTR_FROM_JSON(timedConfig, timedConfig_);
    };
    ResidentResourcePool() = default ;
    ResidentResourcePool(const ResidentResourcePool &) = default ;
    ResidentResourcePool(ResidentResourcePool &&) = default ;
    ResidentResourcePool(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResidentResourcePool() = default ;
    ResidentResourcePool& operator=(const ResidentResourcePool &) = default ;
    ResidentResourcePool& operator=(ResidentResourcePool &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && this->associatedPoolId_ == nullptr && this->createdTime_ == nullptr && this->expireTime_ == nullptr && this->lastModifiedTime_ == nullptr && this->poolType_ == nullptr
        && this->residentResourcePoolId_ == nullptr && this->residentResourcePoolName_ == nullptr && this->resourcePoolCapacity_ == nullptr && this->resourcePoolConfig_ == nullptr && this->timedConfig_ == nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline const ResidentResourceAllocationStatus & getAllocationStatus() const { DARABONBA_PTR_GET_CONST(allocationStatus_, ResidentResourceAllocationStatus) };
    inline ResidentResourceAllocationStatus getAllocationStatus() { DARABONBA_PTR_GET(allocationStatus_, ResidentResourceAllocationStatus) };
    inline ResidentResourcePool& setAllocationStatus(const ResidentResourceAllocationStatus & allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };
    inline ResidentResourcePool& setAllocationStatus(ResidentResourceAllocationStatus && allocationStatus) { DARABONBA_PTR_SET_RVALUE(allocationStatus_, allocationStatus) };


    // associatedPoolId Field Functions 
    bool hasAssociatedPoolId() const { return this->associatedPoolId_ != nullptr;};
    void deleteAssociatedPoolId() { this->associatedPoolId_ = nullptr;};
    inline string getAssociatedPoolId() const { DARABONBA_PTR_GET_DEFAULT(associatedPoolId_, "") };
    inline ResidentResourcePool& setAssociatedPoolId(string associatedPoolId) { DARABONBA_PTR_SET_VALUE(associatedPoolId_, associatedPoolId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ResidentResourcePool& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ResidentResourcePool& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline ResidentResourcePool& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // poolType Field Functions 
    bool hasPoolType() const { return this->poolType_ != nullptr;};
    void deletePoolType() { this->poolType_ = nullptr;};
    inline string getPoolType() const { DARABONBA_PTR_GET_DEFAULT(poolType_, "") };
    inline ResidentResourcePool& setPoolType(string poolType) { DARABONBA_PTR_SET_VALUE(poolType_, poolType) };


    // residentResourcePoolId Field Functions 
    bool hasResidentResourcePoolId() const { return this->residentResourcePoolId_ != nullptr;};
    void deleteResidentResourcePoolId() { this->residentResourcePoolId_ = nullptr;};
    inline string getResidentResourcePoolId() const { DARABONBA_PTR_GET_DEFAULT(residentResourcePoolId_, "") };
    inline ResidentResourcePool& setResidentResourcePoolId(string residentResourcePoolId) { DARABONBA_PTR_SET_VALUE(residentResourcePoolId_, residentResourcePoolId) };


    // residentResourcePoolName Field Functions 
    bool hasResidentResourcePoolName() const { return this->residentResourcePoolName_ != nullptr;};
    void deleteResidentResourcePoolName() { this->residentResourcePoolName_ = nullptr;};
    inline string getResidentResourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(residentResourcePoolName_, "") };
    inline ResidentResourcePool& setResidentResourcePoolName(string residentResourcePoolName) { DARABONBA_PTR_SET_VALUE(residentResourcePoolName_, residentResourcePoolName) };


    // resourcePoolCapacity Field Functions 
    bool hasResourcePoolCapacity() const { return this->resourcePoolCapacity_ != nullptr;};
    void deleteResourcePoolCapacity() { this->resourcePoolCapacity_ = nullptr;};
    inline const ResidentResourceCapacity & getResourcePoolCapacity() const { DARABONBA_PTR_GET_CONST(resourcePoolCapacity_, ResidentResourceCapacity) };
    inline ResidentResourceCapacity getResourcePoolCapacity() { DARABONBA_PTR_GET(resourcePoolCapacity_, ResidentResourceCapacity) };
    inline ResidentResourcePool& setResourcePoolCapacity(const ResidentResourceCapacity & resourcePoolCapacity) { DARABONBA_PTR_SET_VALUE(resourcePoolCapacity_, resourcePoolCapacity) };
    inline ResidentResourcePool& setResourcePoolCapacity(ResidentResourceCapacity && resourcePoolCapacity) { DARABONBA_PTR_SET_RVALUE(resourcePoolCapacity_, resourcePoolCapacity) };


    // resourcePoolConfig Field Functions 
    bool hasResourcePoolConfig() const { return this->resourcePoolConfig_ != nullptr;};
    void deleteResourcePoolConfig() { this->resourcePoolConfig_ = nullptr;};
    inline const ResidentResourceCapacity & getResourcePoolConfig() const { DARABONBA_PTR_GET_CONST(resourcePoolConfig_, ResidentResourceCapacity) };
    inline ResidentResourceCapacity getResourcePoolConfig() { DARABONBA_PTR_GET(resourcePoolConfig_, ResidentResourceCapacity) };
    inline ResidentResourcePool& setResourcePoolConfig(const ResidentResourceCapacity & resourcePoolConfig) { DARABONBA_PTR_SET_VALUE(resourcePoolConfig_, resourcePoolConfig) };
    inline ResidentResourcePool& setResourcePoolConfig(ResidentResourceCapacity && resourcePoolConfig) { DARABONBA_PTR_SET_RVALUE(resourcePoolConfig_, resourcePoolConfig) };


    // timedConfig Field Functions 
    bool hasTimedConfig() const { return this->timedConfig_ != nullptr;};
    void deleteTimedConfig() { this->timedConfig_ = nullptr;};
    inline const TimedPoolConfig & getTimedConfig() const { DARABONBA_PTR_GET_CONST(timedConfig_, TimedPoolConfig) };
    inline TimedPoolConfig getTimedConfig() { DARABONBA_PTR_GET(timedConfig_, TimedPoolConfig) };
    inline ResidentResourcePool& setTimedConfig(const TimedPoolConfig & timedConfig) { DARABONBA_PTR_SET_VALUE(timedConfig_, timedConfig) };
    inline ResidentResourcePool& setTimedConfig(TimedPoolConfig && timedConfig) { DARABONBA_PTR_SET_RVALUE(timedConfig_, timedConfig) };


  protected:
    // The real-time allocation status of the resource pool, including the specific allocation details for each function.
    shared_ptr<ResidentResourceAllocationStatus> allocationStatus_ {};
    shared_ptr<string> associatedPoolId_ {};
    // The resource property field that represents the creation time.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> createdTime_ {};
    // The expiration time of the resource pool.
    shared_ptr<string> expireTime_ {};
    // The last modification time, including operations such as scaling, renewal, and renaming.
    shared_ptr<string> lastModifiedTime_ {};
    shared_ptr<string> poolType_ {};
    shared_ptr<string> residentResourcePoolId_ {};
    // The resource property field that represents the resource name.
    shared_ptr<string> residentResourcePoolName_ {};
    // The overall specifications of the resource pool.
    shared_ptr<ResidentResourceCapacity> resourcePoolCapacity_ {};
    shared_ptr<ResidentResourceCapacity> resourcePoolConfig_ {};
    shared_ptr<TimedPoolConfig> timedConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
