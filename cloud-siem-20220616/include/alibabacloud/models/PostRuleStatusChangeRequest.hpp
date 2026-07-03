// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTRULESTATUSCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POSTRULESTATUSCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class PostRuleStatusChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostRuleStatusChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(InUse, inUse_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, PostRuleStatusChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(InUse, inUse_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    PostRuleStatusChangeRequest() = default ;
    PostRuleStatusChangeRequest(const PostRuleStatusChangeRequest &) = default ;
    PostRuleStatusChangeRequest(PostRuleStatusChangeRequest &&) = default ;
    PostRuleStatusChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostRuleStatusChangeRequest() = default ;
    PostRuleStatusChangeRequest& operator=(const PostRuleStatusChangeRequest &) = default ;
    PostRuleStatusChangeRequest& operator=(PostRuleStatusChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->inUse_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr && this->ruleType_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline PostRuleStatusChangeRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // inUse Field Functions 
    bool hasInUse() const { return this->inUse_ != nullptr;};
    void deleteInUse() { this->inUse_ = nullptr;};
    inline bool getInUse() const { DARABONBA_PTR_GET_DEFAULT(inUse_, false) };
    inline PostRuleStatusChangeRequest& setInUse(bool inUse) { DARABONBA_PTR_SET_VALUE(inUse_, inUse) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostRuleStatusChangeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostRuleStatusChangeRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostRuleStatusChangeRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline PostRuleStatusChangeRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // A JSON array of rule IDs.
    shared_ptr<string> ids_ {};
    // The status of the rule. Valid values:
    // 
    // - true: enabled
    // 
    // - false: disabled
    shared_ptr<bool> inUse_ {};
    // The region where the Data Management center of threat analysis is located. Select a region based on the location of your assets. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or China (Hong Kong).
    // 
    // - ap-southeast-1: Your assets are in a region outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of a member. An administrator can specify this parameter to switch to the perspective of the member.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view.
    // 
    // - 0: the view of the current Alibaba Cloud account.
    // 
    // - 1: the view of all accounts that belong to the enterprise.
    shared_ptr<int32_t> roleType_ {};
    // The type of the rule. Valid values:
    // 
    // - predefine: predefined rule
    // 
    // - customize: custom rule
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
