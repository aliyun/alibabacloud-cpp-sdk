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
    virtual bool empty() const override { this->ids_ != nullptr
        && this->inUse_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->ruleType_ != nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string ids() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline PostRuleStatusChangeRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // inUse Field Functions 
    bool hasInUse() const { return this->inUse_ != nullptr;};
    void deleteInUse() { this->inUse_ = nullptr;};
    inline bool inUse() const { DARABONBA_PTR_GET_DEFAULT(inUse_, false) };
    inline PostRuleStatusChangeRequest& setInUse(bool inUse) { DARABONBA_PTR_SET_VALUE(inUse_, inUse) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PostRuleStatusChangeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline PostRuleStatusChangeRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline PostRuleStatusChangeRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline PostRuleStatusChangeRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The rule IDs. The value is a JSON array.
    std::shared_ptr<string> ids_ = nullptr;
    // Specifies whether to enable the rule. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> inUse_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   predefine
    // *   customize
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
