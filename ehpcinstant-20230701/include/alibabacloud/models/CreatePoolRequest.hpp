// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(SchedulingPolicyId, schedulingPolicyId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceLimits, resourceLimits_);
      DARABONBA_PTR_FROM_JSON(SchedulingPolicyId, schedulingPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class ResourceLimits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceLimits& obj) { 
        DARABONBA_PTR_TO_JSON(MaxExecutorNum, maxExecutorNum_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceLimits& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxExecutorNum, maxExecutorNum_);
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
      virtual bool empty() const override { return this->maxExecutorNum_ == nullptr; };
      // maxExecutorNum Field Functions 
      bool hasMaxExecutorNum() const { return this->maxExecutorNum_ != nullptr;};
      void deleteMaxExecutorNum() { this->maxExecutorNum_ = nullptr;};
      inline int32_t getMaxExecutorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExecutorNum_, 0) };
      inline ResourceLimits& setMaxExecutorNum(int32_t maxExecutorNum) { DARABONBA_PTR_SET_VALUE(maxExecutorNum_, maxExecutorNum) };


    protected:
      // The maximum number of executor nodes that a user can concurrently run within a resource pool.
      shared_ptr<int32_t> maxExecutorNum_ {};
    };

    virtual bool empty() const override { return this->poolName_ == nullptr
        && this->priority_ == nullptr && this->resourceLimits_ == nullptr && this->schedulingPolicyId_ == nullptr && this->tags_ == nullptr; };
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


    // schedulingPolicyId Field Functions 
    bool hasSchedulingPolicyId() const { return this->schedulingPolicyId_ != nullptr;};
    void deleteSchedulingPolicyId() { this->schedulingPolicyId_ = nullptr;};
    inline string getSchedulingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(schedulingPolicyId_, "") };
    inline CreatePoolRequest& setSchedulingPolicyId(string schedulingPolicyId) { DARABONBA_PTR_SET_VALUE(schedulingPolicyId_, schedulingPolicyId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePoolRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePoolRequest::Tags>) };
    inline vector<CreatePoolRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreatePoolRequest::Tags>) };
    inline CreatePoolRequest& setTags(const vector<CreatePoolRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePoolRequest& setTags(vector<CreatePoolRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The name of the resource pool.
    // - The name can be up to 15 characters in length.
    // - The name can contain digits, uppercase letters, lowercase letters, underscores (_), and periods (.).
    // 
    // This parameter is required.
    shared_ptr<string> poolName_ {};
    // The priority of the resource pool.
    // 
    // - Valid values: 1 to 99. Default value: 1, which indicates the lowest priority.
    // - Jobs submitted to a resource pool with a higher priority value are scheduled before pending jobs in resource pools with lower priority values. The priority of a resource pool takes precedence over the priority of a job.
    shared_ptr<int32_t> priority_ {};
    // The resource quota limits for concurrent usage allowed for a user within a resource pool.
    shared_ptr<CreatePoolRequest::ResourceLimits> resourceLimits_ {};
    // The scheduling policy.
    shared_ptr<string> schedulingPolicyId_ {};
    // The tag information.
    shared_ptr<vector<CreatePoolRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
