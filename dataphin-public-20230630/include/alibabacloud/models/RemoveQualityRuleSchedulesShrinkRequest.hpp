// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEQUALITYRULESCHEDULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEQUALITYRULESCHEDULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveQualityRuleSchedulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveQualityRuleSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveQualityRuleSchedulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommandShrink_);
    };
    RemoveQualityRuleSchedulesShrinkRequest() = default ;
    RemoveQualityRuleSchedulesShrinkRequest(const RemoveQualityRuleSchedulesShrinkRequest &) = default ;
    RemoveQualityRuleSchedulesShrinkRequest(RemoveQualityRuleSchedulesShrinkRequest &&) = default ;
    RemoveQualityRuleSchedulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveQualityRuleSchedulesShrinkRequest() = default ;
    RemoveQualityRuleSchedulesShrinkRequest& operator=(const RemoveQualityRuleSchedulesShrinkRequest &) = default ;
    RemoveQualityRuleSchedulesShrinkRequest& operator=(RemoveQualityRuleSchedulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->removeCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveQualityRuleSchedulesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommandShrink Field Functions 
    bool hasRemoveCommandShrink() const { return this->removeCommandShrink_ != nullptr;};
    void deleteRemoveCommandShrink() { this->removeCommandShrink_ = nullptr;};
    inline string getRemoveCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(removeCommandShrink_, "") };
    inline RemoveQualityRuleSchedulesShrinkRequest& setRemoveCommandShrink(string removeCommandShrink) { DARABONBA_PTR_SET_VALUE(removeCommandShrink_, removeCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> removeCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
