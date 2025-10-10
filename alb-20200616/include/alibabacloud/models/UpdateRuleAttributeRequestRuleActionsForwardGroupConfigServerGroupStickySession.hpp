// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPSTICKYSESSION_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSFORWARDGROUPCONFIGSERVERGROUPSTICKYSESSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession(UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession &&) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession() = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& operator=(const UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession &) = default ;
    UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& operator=(UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession &&) = default ;
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
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateRuleAttributeRequestRuleActionsForwardGroupConfigServerGroupStickySession& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // Specifies whether to enable session persistence. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enabled_ = nullptr;
    // The timeout period for sessions. Unit: seconds. Valid values: 1 to 86400.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
