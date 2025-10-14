// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPNOTIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPNOTIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMonitorGroupNotifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMonitorGroupNotifyPolicyRequest() = default ;
    DeleteMonitorGroupNotifyPolicyRequest(const DeleteMonitorGroupNotifyPolicyRequest &) = default ;
    DeleteMonitorGroupNotifyPolicyRequest(DeleteMonitorGroupNotifyPolicyRequest &&) = default ;
    DeleteMonitorGroupNotifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupNotifyPolicyRequest() = default ;
    DeleteMonitorGroupNotifyPolicyRequest& operator=(const DeleteMonitorGroupNotifyPolicyRequest &) = default ;
    DeleteMonitorGroupNotifyPolicyRequest& operator=(DeleteMonitorGroupNotifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->policyType_ == nullptr && return this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DeleteMonitorGroupNotifyPolicyRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DeleteMonitorGroupNotifyPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMonitorGroupNotifyPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The type of the policy.
    // 
    // Valid value: PauseNotify.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
