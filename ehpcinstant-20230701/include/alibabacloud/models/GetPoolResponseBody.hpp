// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PoolInfo, poolInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolInfo, poolInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPoolResponseBody() = default ;
    GetPoolResponseBody(const GetPoolResponseBody &) = default ;
    GetPoolResponseBody(GetPoolResponseBody &&) = default ;
    GetPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPoolResponseBody() = default ;
    GetPoolResponseBody& operator=(const GetPoolResponseBody &) = default ;
    GetPoolResponseBody& operator=(GetPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PoolInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PoolInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, PoolInfo& obj) { 
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
      PoolInfo() = default ;
      PoolInfo(const PoolInfo &) = default ;
      PoolInfo(PoolInfo &&) = default ;
      PoolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PoolInfo() = default ;
      PoolInfo& operator=(const PoolInfo &) = default ;
      PoolInfo& operator=(PoolInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->exectorUsage_ == nullptr && this->isDefault_ == nullptr && this->maxExectorNum_ == nullptr && this->poolName_ == nullptr && this->priority_ == nullptr
        && this->reason_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PoolInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // exectorUsage Field Functions 
      bool hasExectorUsage() const { return this->exectorUsage_ != nullptr;};
      void deleteExectorUsage() { this->exectorUsage_ = nullptr;};
      inline int32_t getExectorUsage() const { DARABONBA_PTR_GET_DEFAULT(exectorUsage_, 0) };
      inline PoolInfo& setExectorUsage(int32_t exectorUsage) { DARABONBA_PTR_SET_VALUE(exectorUsage_, exectorUsage) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline PoolInfo& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // maxExectorNum Field Functions 
      bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
      void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
      inline int32_t getMaxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
      inline PoolInfo& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


      // poolName Field Functions 
      bool hasPoolName() const { return this->poolName_ != nullptr;};
      void deletePoolName() { this->poolName_ = nullptr;};
      inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
      inline PoolInfo& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PoolInfo& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline PoolInfo& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PoolInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PoolInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the resource pool is created.
      shared_ptr<string> createTime_ {};
      // The usage of execution nodes that are running in a resource pool.
      shared_ptr<int32_t> exectorUsage_ {};
      // Indices whether the resource pool is the default resource pool. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDefault_ {};
      // The maximum number of execution nodes that can run concurrently in a resource pool.
      shared_ptr<int32_t> maxExectorNum_ {};
      // The name of the resource group.
      // 
      // *   The value can be up to 15 characters in length.
      // *   It can contain digits, uppercase letters, lowercase letters, underscores (_), and dots (.).
      shared_ptr<string> poolName_ {};
      // The priority of the resource pool.
      // 
      // *   You can set a priority in the range of 1 to 99. The default value is 1, which is the lowest priority.
      // *   Jobs submitted to a resource pool with a higher priority level value will be scheduled before pending jobs in a resource pool with a lower priority level value, and the priority level of the resource pool takes precedence over the priority of the job.
      shared_ptr<int32_t> priority_ {};
      // The cause of the error.
      shared_ptr<string> reason_ {};
      // The status of the resource pool. Valid values:
      // 
      // *   Creating: The resource pool is being created.
      // *   Updating: The resource pool is being updated.
      // *   Deleting: The resource pool is being deleted.
      // *   Working: The resource pool is working.
      // *   Deleted: The resource pool is deleted.
      shared_ptr<string> status_ {};
      // The time when the resource pool was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->poolInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // poolInfo Field Functions 
    bool hasPoolInfo() const { return this->poolInfo_ != nullptr;};
    void deletePoolInfo() { this->poolInfo_ = nullptr;};
    inline const GetPoolResponseBody::PoolInfo & getPoolInfo() const { DARABONBA_PTR_GET_CONST(poolInfo_, GetPoolResponseBody::PoolInfo) };
    inline GetPoolResponseBody::PoolInfo getPoolInfo() { DARABONBA_PTR_GET(poolInfo_, GetPoolResponseBody::PoolInfo) };
    inline GetPoolResponseBody& setPoolInfo(const GetPoolResponseBody::PoolInfo & poolInfo) { DARABONBA_PTR_SET_VALUE(poolInfo_, poolInfo) };
    inline GetPoolResponseBody& setPoolInfo(GetPoolResponseBody::PoolInfo && poolInfo) { DARABONBA_PTR_SET_RVALUE(poolInfo_, poolInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resource pool.
    shared_ptr<GetPoolResponseBody::PoolInfo> poolInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
