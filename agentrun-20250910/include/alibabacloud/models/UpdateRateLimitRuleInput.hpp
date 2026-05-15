// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERATELIMITRULEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATERATELIMITRULEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WindowLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateRateLimitRuleInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRateLimitRuleInput& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(windows, windows_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRateLimitRuleInput& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(windows, windows_);
    };
    UpdateRateLimitRuleInput() = default ;
    UpdateRateLimitRuleInput(const UpdateRateLimitRuleInput &) = default ;
    UpdateRateLimitRuleInput(UpdateRateLimitRuleInput &&) = default ;
    UpdateRateLimitRuleInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRateLimitRuleInput() = default ;
    UpdateRateLimitRuleInput& operator=(const UpdateRateLimitRuleInput &) = default ;
    UpdateRateLimitRuleInput& operator=(UpdateRateLimitRuleInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->windows_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateRateLimitRuleInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // windows Field Functions 
    bool hasWindows() const { return this->windows_ != nullptr;};
    void deleteWindows() { this->windows_ = nullptr;};
    inline const vector<WindowLimit> & getWindows() const { DARABONBA_PTR_GET_CONST(windows_, vector<WindowLimit>) };
    inline vector<WindowLimit> getWindows() { DARABONBA_PTR_GET(windows_, vector<WindowLimit>) };
    inline UpdateRateLimitRuleInput& setWindows(const vector<WindowLimit> & windows) { DARABONBA_PTR_SET_VALUE(windows_, windows) };
    inline UpdateRateLimitRuleInput& setWindows(vector<WindowLimit> && windows) { DARABONBA_PTR_SET_RVALUE(windows_, windows) };


  protected:
    // 是否启用该限流规则
    shared_ptr<bool> enabled_ {};
    // 限流时间窗口配置列表，提供时将整组覆盖
    shared_ptr<vector<WindowLimit>> windows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
