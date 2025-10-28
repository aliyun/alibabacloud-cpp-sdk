// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTRESOURCEPOOL_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTRESOURCEPOOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResidentResourceAllocationStatus.hpp>
#include <alibabacloud/models/ResidentResourceCapacity.hpp>
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
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(residentResourcePoolId, residentResourcePoolId_);
      DARABONBA_PTR_TO_JSON(residentResourcePoolName, residentResourcePoolName_);
      DARABONBA_PTR_TO_JSON(resourcePoolCapacity, resourcePoolCapacity_);
      DARABONBA_PTR_TO_JSON(resourcePoolConfig, resourcePoolConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourcePool& obj) { 
      DARABONBA_PTR_FROM_JSON(allocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(residentResourcePoolId, residentResourcePoolId_);
      DARABONBA_PTR_FROM_JSON(residentResourcePoolName, residentResourcePoolName_);
      DARABONBA_PTR_FROM_JSON(resourcePoolCapacity, resourcePoolCapacity_);
      DARABONBA_PTR_FROM_JSON(resourcePoolConfig, resourcePoolConfig_);
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
        && return this->createdTime_ == nullptr && return this->expireTime_ == nullptr && return this->lastModifiedTime_ == nullptr && return this->residentResourcePoolId_ == nullptr && return this->residentResourcePoolName_ == nullptr
        && return this->resourcePoolCapacity_ == nullptr && return this->resourcePoolConfig_ == nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline const ResidentResourceAllocationStatus & allocationStatus() const { DARABONBA_PTR_GET_CONST(allocationStatus_, ResidentResourceAllocationStatus) };
    inline ResidentResourceAllocationStatus allocationStatus() { DARABONBA_PTR_GET(allocationStatus_, ResidentResourceAllocationStatus) };
    inline ResidentResourcePool& setAllocationStatus(const ResidentResourceAllocationStatus & allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };
    inline ResidentResourcePool& setAllocationStatus(ResidentResourceAllocationStatus && allocationStatus) { DARABONBA_PTR_SET_RVALUE(allocationStatus_, allocationStatus) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ResidentResourcePool& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ResidentResourcePool& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline ResidentResourcePool& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // residentResourcePoolId Field Functions 
    bool hasResidentResourcePoolId() const { return this->residentResourcePoolId_ != nullptr;};
    void deleteResidentResourcePoolId() { this->residentResourcePoolId_ = nullptr;};
    inline string residentResourcePoolId() const { DARABONBA_PTR_GET_DEFAULT(residentResourcePoolId_, "") };
    inline ResidentResourcePool& setResidentResourcePoolId(string residentResourcePoolId) { DARABONBA_PTR_SET_VALUE(residentResourcePoolId_, residentResourcePoolId) };


    // residentResourcePoolName Field Functions 
    bool hasResidentResourcePoolName() const { return this->residentResourcePoolName_ != nullptr;};
    void deleteResidentResourcePoolName() { this->residentResourcePoolName_ = nullptr;};
    inline string residentResourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(residentResourcePoolName_, "") };
    inline ResidentResourcePool& setResidentResourcePoolName(string residentResourcePoolName) { DARABONBA_PTR_SET_VALUE(residentResourcePoolName_, residentResourcePoolName) };


    // resourcePoolCapacity Field Functions 
    bool hasResourcePoolCapacity() const { return this->resourcePoolCapacity_ != nullptr;};
    void deleteResourcePoolCapacity() { this->resourcePoolCapacity_ = nullptr;};
    inline const ResidentResourceCapacity & resourcePoolCapacity() const { DARABONBA_PTR_GET_CONST(resourcePoolCapacity_, ResidentResourceCapacity) };
    inline ResidentResourceCapacity resourcePoolCapacity() { DARABONBA_PTR_GET(resourcePoolCapacity_, ResidentResourceCapacity) };
    inline ResidentResourcePool& setResourcePoolCapacity(const ResidentResourceCapacity & resourcePoolCapacity) { DARABONBA_PTR_SET_VALUE(resourcePoolCapacity_, resourcePoolCapacity) };
    inline ResidentResourcePool& setResourcePoolCapacity(ResidentResourceCapacity && resourcePoolCapacity) { DARABONBA_PTR_SET_RVALUE(resourcePoolCapacity_, resourcePoolCapacity) };


    // resourcePoolConfig Field Functions 
    bool hasResourcePoolConfig() const { return this->resourcePoolConfig_ != nullptr;};
    void deleteResourcePoolConfig() { this->resourcePoolConfig_ = nullptr;};
    inline const ResidentResourceCapacity & resourcePoolConfig() const { DARABONBA_PTR_GET_CONST(resourcePoolConfig_, ResidentResourceCapacity) };
    inline ResidentResourceCapacity resourcePoolConfig() { DARABONBA_PTR_GET(resourcePoolConfig_, ResidentResourceCapacity) };
    inline ResidentResourcePool& setResourcePoolConfig(const ResidentResourceCapacity & resourcePoolConfig) { DARABONBA_PTR_SET_VALUE(resourcePoolConfig_, resourcePoolConfig) };
    inline ResidentResourcePool& setResourcePoolConfig(ResidentResourceCapacity && resourcePoolConfig) { DARABONBA_PTR_SET_RVALUE(resourcePoolConfig_, resourcePoolConfig) };


  protected:
    // 资源池实时分配情况，包含每个函数的具体分配情况
    std::shared_ptr<ResidentResourceAllocationStatus> allocationStatus_ = nullptr;
    // 代表创建时间的资源属性字段
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> createdTime_ = nullptr;
    // 资源池过期时间
    std::shared_ptr<string> expireTime_ = nullptr;
    // 上次修改时间，包含扩容、续费、更名等操作
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> residentResourcePoolId_ = nullptr;
    // 代表资源名称的资源属性字段
    std::shared_ptr<string> residentResourcePoolName_ = nullptr;
    // 资源池总体规格
    std::shared_ptr<ResidentResourceCapacity> resourcePoolCapacity_ = nullptr;
    std::shared_ptr<ResidentResourceCapacity> resourcePoolConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
