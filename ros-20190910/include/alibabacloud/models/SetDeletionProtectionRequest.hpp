// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDELETIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDELETIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class SetDeletionProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    SetDeletionProtectionRequest() = default ;
    SetDeletionProtectionRequest(const SetDeletionProtectionRequest &) = default ;
    SetDeletionProtectionRequest(SetDeletionProtectionRequest &&) = default ;
    SetDeletionProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDeletionProtectionRequest() = default ;
    SetDeletionProtectionRequest& operator=(const SetDeletionProtectionRequest &) = default ;
    SetDeletionProtectionRequest& operator=(SetDeletionProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deletionProtection_ != nullptr
        && this->regionId_ != nullptr && this->stackId_ != nullptr; };
    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline SetDeletionProtectionRequest& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDeletionProtectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline SetDeletionProtectionRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // Indicates whether stack deletion protection is enabled. Valid values:
    // 
    // *   Enabled: enables the stack deletion protection.
    // *   Disabled (default): Resource stack deletion protection is Disabled. You can use the console or API(DeleteStack) to release the stack resources.
    // 
    // >  The deletion of nested stacks is the same as the root stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    // 
    // The delete protection attribute of a nested stack is determined by the root stack and remains unchanged from the root stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
