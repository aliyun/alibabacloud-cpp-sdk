// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreatePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceLimits, resourceLimitsShrink_);
      DARABONBA_PTR_TO_JSON(SchedulingPolicyId, schedulingPolicyId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceLimits, resourceLimitsShrink_);
      DARABONBA_PTR_FROM_JSON(SchedulingPolicyId, schedulingPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreatePoolShrinkRequest() = default ;
    CreatePoolShrinkRequest(const CreatePoolShrinkRequest &) = default ;
    CreatePoolShrinkRequest(CreatePoolShrinkRequest &&) = default ;
    CreatePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePoolShrinkRequest() = default ;
    CreatePoolShrinkRequest& operator=(const CreatePoolShrinkRequest &) = default ;
    CreatePoolShrinkRequest& operator=(CreatePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->poolName_ == nullptr
        && this->priority_ == nullptr && this->resourceLimitsShrink_ == nullptr && this->schedulingPolicyId_ == nullptr && this->tagsShrink_ == nullptr; };
    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline CreatePoolShrinkRequest& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePoolShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceLimitsShrink Field Functions 
    bool hasResourceLimitsShrink() const { return this->resourceLimitsShrink_ != nullptr;};
    void deleteResourceLimitsShrink() { this->resourceLimitsShrink_ = nullptr;};
    inline string getResourceLimitsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceLimitsShrink_, "") };
    inline CreatePoolShrinkRequest& setResourceLimitsShrink(string resourceLimitsShrink) { DARABONBA_PTR_SET_VALUE(resourceLimitsShrink_, resourceLimitsShrink) };


    // schedulingPolicyId Field Functions 
    bool hasSchedulingPolicyId() const { return this->schedulingPolicyId_ != nullptr;};
    void deleteSchedulingPolicyId() { this->schedulingPolicyId_ = nullptr;};
    inline string getSchedulingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(schedulingPolicyId_, "") };
    inline CreatePoolShrinkRequest& setSchedulingPolicyId(string schedulingPolicyId) { DARABONBA_PTR_SET_VALUE(schedulingPolicyId_, schedulingPolicyId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreatePoolShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


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
    shared_ptr<string> resourceLimitsShrink_ {};
    // The scheduling policy.
    shared_ptr<string> schedulingPolicyId_ {};
    // The tag information.
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
