// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODYPOOLINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODYPOOLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetPoolResponseBodyPoolInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPoolResponseBodyPoolInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExectorUsage, exectorUsage_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(MaxExectorNum, maxExectorNum_);
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPoolResponseBodyPoolInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExectorUsage, exectorUsage_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(MaxExectorNum, maxExectorNum_);
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetPoolResponseBodyPoolInfo() = default ;
    GetPoolResponseBodyPoolInfo(const GetPoolResponseBodyPoolInfo &) = default ;
    GetPoolResponseBodyPoolInfo(GetPoolResponseBodyPoolInfo &&) = default ;
    GetPoolResponseBodyPoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPoolResponseBodyPoolInfo() = default ;
    GetPoolResponseBodyPoolInfo& operator=(const GetPoolResponseBodyPoolInfo &) = default ;
    GetPoolResponseBodyPoolInfo& operator=(GetPoolResponseBodyPoolInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->exectorUsage_ == nullptr && return this->isDefault_ == nullptr && return this->maxExectorNum_ == nullptr && return this->poolName_ == nullptr && return this->priority_ == nullptr
        && return this->reason_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPoolResponseBodyPoolInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exectorUsage Field Functions 
    bool hasExectorUsage() const { return this->exectorUsage_ != nullptr;};
    void deleteExectorUsage() { this->exectorUsage_ = nullptr;};
    inline int32_t exectorUsage() const { DARABONBA_PTR_GET_DEFAULT(exectorUsage_, 0) };
    inline GetPoolResponseBodyPoolInfo& setExectorUsage(int32_t exectorUsage) { DARABONBA_PTR_SET_VALUE(exectorUsage_, exectorUsage) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GetPoolResponseBodyPoolInfo& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // maxExectorNum Field Functions 
    bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
    void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
    inline int32_t maxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
    inline GetPoolResponseBodyPoolInfo& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline GetPoolResponseBodyPoolInfo& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPoolResponseBodyPoolInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetPoolResponseBodyPoolInfo& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPoolResponseBodyPoolInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetPoolResponseBodyPoolInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the resource pool is created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The usage of execution nodes that are running in a resource pool.
    std::shared_ptr<int32_t> exectorUsage_ = nullptr;
    // Indices whether the resource pool is the default resource pool. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The maximum number of execution nodes that can run concurrently in a resource pool.
    std::shared_ptr<int32_t> maxExectorNum_ = nullptr;
    // The name of the resource group.
    // 
    // *   The value can be up to 15 characters in length.
    // *   It can contain digits, uppercase letters, lowercase letters, underscores (_), and dots (.).
    std::shared_ptr<string> poolName_ = nullptr;
    // The priority of the resource pool.
    // 
    // *   You can set a priority in the range of 1 to 99. The default value is 1, which is the lowest priority.
    // *   Jobs submitted to a resource pool with a higher priority level value will be scheduled before pending jobs in a resource pool with a lower priority level value, and the priority level of the resource pool takes precedence over the priority of the job.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The cause of the error.
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the resource pool. Valid values:
    // 
    // *   Creating: The resource pool is being created.
    // *   Updating: The resource pool is being updated.
    // *   Deleting: The resource pool is being deleted.
    // *   Working: The resource pool is working.
    // *   Deleted: The resource pool is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the resource pool was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
