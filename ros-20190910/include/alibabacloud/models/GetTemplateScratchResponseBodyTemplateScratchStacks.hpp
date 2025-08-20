// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSTACKS_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSTACKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBodyTemplateScratchStacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBodyTemplateScratchStacks& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBodyTemplateScratchStacks& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
    };
    GetTemplateScratchResponseBodyTemplateScratchStacks() = default ;
    GetTemplateScratchResponseBodyTemplateScratchStacks(const GetTemplateScratchResponseBodyTemplateScratchStacks &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStacks(GetTemplateScratchResponseBodyTemplateScratchStacks &&) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBodyTemplateScratchStacks() = default ;
    GetTemplateScratchResponseBodyTemplateScratchStacks& operator=(const GetTemplateScratchResponseBodyTemplateScratchStacks &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchStacks& operator=(GetTemplateScratchResponseBodyTemplateScratchStacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->stackId_ != nullptr && this->usageType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchStacks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchStacks& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string usageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchStacks& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


  protected:
    // The region ID of the stack.
    std::shared_ptr<string> regionId_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
    // The purpose of the stack. Valid values:
    // 
    // *   ResourceImport: resource management
    // *   ArchitectureReplication: resource replication
    std::shared_ptr<string> usageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
