// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPSTICKYSESSION_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESREQUESTRULESRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPSTICKYSESSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession(const CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession &) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession(CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession &&) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession() = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& operator=(const CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession &) = default ;
    CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& operator=(CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->timeout_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateRulesRequestRulesRuleActionsForwardGroupConfigServerGroupStickySession& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
