// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNQUALITYRULEOFALLRULESCOPESCHEDULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNQUALITYRULEOFALLRULESCOPESCHEDULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssignCommand, assignCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignCommand, assignCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest() = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest(const AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest &) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest(AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest &&) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest() = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& operator=(const AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest &) = default ;
    AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& operator=(AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // assignCommandShrink Field Functions 
    bool hasAssignCommandShrink() const { return this->assignCommandShrink_ != nullptr;};
    void deleteAssignCommandShrink() { this->assignCommandShrink_ = nullptr;};
    inline string getAssignCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(assignCommandShrink_, "") };
    inline AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& setAssignCommandShrink(string assignCommandShrink) { DARABONBA_PTR_SET_VALUE(assignCommandShrink_, assignCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> assignCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
