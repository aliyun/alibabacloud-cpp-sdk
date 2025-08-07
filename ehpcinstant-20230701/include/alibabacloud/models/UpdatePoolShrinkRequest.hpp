// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdatePoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PoolName, poolName_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceLimits, resourceLimitsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceLimits, resourceLimitsShrink_);
    };
    UpdatePoolShrinkRequest() = default ;
    UpdatePoolShrinkRequest(const UpdatePoolShrinkRequest &) = default ;
    UpdatePoolShrinkRequest(UpdatePoolShrinkRequest &&) = default ;
    UpdatePoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePoolShrinkRequest() = default ;
    UpdatePoolShrinkRequest& operator=(const UpdatePoolShrinkRequest &) = default ;
    UpdatePoolShrinkRequest& operator=(UpdatePoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->poolName_ != nullptr
        && this->priority_ != nullptr && this->resourceLimitsShrink_ != nullptr; };
    // poolName Field Functions 
    bool hasPoolName() const { return this->poolName_ != nullptr;};
    void deletePoolName() { this->poolName_ = nullptr;};
    inline string poolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
    inline UpdatePoolShrinkRequest& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdatePoolShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceLimitsShrink Field Functions 
    bool hasResourceLimitsShrink() const { return this->resourceLimitsShrink_ != nullptr;};
    void deleteResourceLimitsShrink() { this->resourceLimitsShrink_ = nullptr;};
    inline string resourceLimitsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceLimitsShrink_, "") };
    inline UpdatePoolShrinkRequest& setResourceLimitsShrink(string resourceLimitsShrink) { DARABONBA_PTR_SET_VALUE(resourceLimitsShrink_, resourceLimitsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> poolName_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> resourceLimitsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
