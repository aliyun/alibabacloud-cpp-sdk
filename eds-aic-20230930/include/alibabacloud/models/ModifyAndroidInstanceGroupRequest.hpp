// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANDROIDINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANDROIDINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyAndroidInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(NewInstanceGroupName, newInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(NewInstanceGroupName, newInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
    };
    ModifyAndroidInstanceGroupRequest() = default ;
    ModifyAndroidInstanceGroupRequest(const ModifyAndroidInstanceGroupRequest &) = default ;
    ModifyAndroidInstanceGroupRequest(ModifyAndroidInstanceGroupRequest &&) = default ;
    ModifyAndroidInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAndroidInstanceGroupRequest() = default ;
    ModifyAndroidInstanceGroupRequest& operator=(const ModifyAndroidInstanceGroupRequest &) = default ;
    ModifyAndroidInstanceGroupRequest& operator=(ModifyAndroidInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceGroupId_ == nullptr
        && this->newInstanceGroupName_ == nullptr && this->policyGroupId_ == nullptr && this->streamMode_ == nullptr; };
    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline ModifyAndroidInstanceGroupRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // newInstanceGroupName Field Functions 
    bool hasNewInstanceGroupName() const { return this->newInstanceGroupName_ != nullptr;};
    void deleteNewInstanceGroupName() { this->newInstanceGroupName_ = nullptr;};
    inline string getNewInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(newInstanceGroupName_, "") };
    inline ModifyAndroidInstanceGroupRequest& setNewInstanceGroupName(string newInstanceGroupName) { DARABONBA_PTR_SET_VALUE(newInstanceGroupName_, newInstanceGroupName) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyAndroidInstanceGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t getStreamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline ModifyAndroidInstanceGroupRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


  protected:
    // The ID of the instance group.
    shared_ptr<string> instanceGroupId_ {};
    // The new name of the instance group.
    // 
    // > 
    // 
    // *   The name can be up to 30 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), or hyphens (-). It must start with letters but cannot start with http:// or https://.
    shared_ptr<string> newInstanceGroupName_ {};
    // The ID of the policy.
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<int32_t> streamMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
