// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreatePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceLimits, resourceLimits_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceLimits, resourceLimits_);
    };
    CreatePoolRequest() = default ;
    CreatePoolRequest(const CreatePoolRequest &) = default ;
    CreatePoolRequest(CreatePoolRequest &&) = default ;
    CreatePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePoolRequest() = default ;
    CreatePoolRequest& operator=(const CreatePoolRequest &) = default ;
    CreatePoolRequest& operator=(CreatePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceLimits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceLimits& obj) { 
        DARABONBA_PTR_TO_JSON(MaxExectorNum, maxExectorNum_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceLimits& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxExectorNum, maxExectorNum_);
      };
      ResourceLimits() = default ;
      ResourceLimits(const ResourceLimits &) = default ;
      ResourceLimits(ResourceLimits &&) = default ;
      ResourceLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceLimits() = default ;
      ResourceLimits& operator=(const ResourceLimits &) = default ;
      ResourceLimits& operator=(ResourceLimits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxExectorNum_ == nullptr; };
      // maxExectorNum Field Functions 
      bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
      void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
      inline int32_t getMaxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
      inline ResourceLimits& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


    protected:
      // The maximum number of concurrent execution nodes in a resource pool.
      shared_ptr<int32_t> maxExectorNum_ {};
    };

    virtual bool empty() const override { return this->poolName_ == nullptr
        && this->priority_ == nullptr && this->resourceLimits_ == nullptr; };
    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline CreatePoolRequest& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePoolRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceLimits Field Functions 
    bool hasResourceLimits() const { return this->resourceLimits_ != nullptr;};
    void deleteResourceLimits() { this->resourceLimits_ = nullptr;};
    inline const CreatePoolRequest::ResourceLimits & getResourceLimits() const { DARABONBA_PTR_GET_CONST(resourceLimits_, CreatePoolRequest::ResourceLimits) };
    inline CreatePoolRequest::ResourceLimits getResourceLimits() { DARABONBA_PTR_GET(resourceLimits_, CreatePoolRequest::ResourceLimits) };
    inline CreatePoolRequest& setResourceLimits(const CreatePoolRequest::ResourceLimits & resourceLimits) { DARABONBA_PTR_SET_VALUE(resourceLimits_, resourceLimits) };
    inline CreatePoolRequest& setResourceLimits(CreatePoolRequest::ResourceLimits && resourceLimits) { DARABONBA_PTR_SET_RVALUE(resourceLimits_, resourceLimits) };


  protected:
    // The name of the resource pool.
    // 
    // *   The name can be up to 15 characters in length.
    // *   It can contain digits, uppercase letters, lowercase letters, underscores (_), and dots (.).
    // 
    // This parameter is required.
    shared_ptr<string> poolName_ {};
    // The priority of the resource pool.
    // 
    // *   You can set a priority in the range of 1 to 99. The default value is 1, which is the lowest priority.
    // *   Jobs submitted to a resource pool with a higher priority level value will be scheduled before pending jobs in a resource pool with a lower priority level value, and the priority level of the resource pool takes precedence over the priority of the job.
    shared_ptr<int32_t> priority_ {};
    // The quota of resources that users are allowed to concurrently use in a resource pool.
    shared_ptr<CreatePoolRequest::ResourceLimits> resourceLimits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
