// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERATELIMITRULEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATERATELIMITRULEINPUT_HPP_
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
  class CreateRateLimitRuleInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRateLimitRuleInput& obj) { 
      DARABONBA_PTR_TO_JSON(descriptorId, descriptorId_);
      DARABONBA_PTR_TO_JSON(descriptorType, descriptorType_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(windows, windows_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRateLimitRuleInput& obj) { 
      DARABONBA_PTR_FROM_JSON(descriptorId, descriptorId_);
      DARABONBA_PTR_FROM_JSON(descriptorType, descriptorType_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(windows, windows_);
    };
    CreateRateLimitRuleInput() = default ;
    CreateRateLimitRuleInput(const CreateRateLimitRuleInput &) = default ;
    CreateRateLimitRuleInput(CreateRateLimitRuleInput &&) = default ;
    CreateRateLimitRuleInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRateLimitRuleInput() = default ;
    CreateRateLimitRuleInput& operator=(const CreateRateLimitRuleInput &) = default ;
    CreateRateLimitRuleInput& operator=(CreateRateLimitRuleInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->descriptorId_ == nullptr
        && this->descriptorType_ == nullptr && this->enabled_ == nullptr && this->windows_ == nullptr; };
    // descriptorId Field Functions 
    bool hasDescriptorId() const { return this->descriptorId_ != nullptr;};
    void deleteDescriptorId() { this->descriptorId_ = nullptr;};
    inline string getDescriptorId() const { DARABONBA_PTR_GET_DEFAULT(descriptorId_, "") };
    inline CreateRateLimitRuleInput& setDescriptorId(string descriptorId) { DARABONBA_PTR_SET_VALUE(descriptorId_, descriptorId) };


    // descriptorType Field Functions 
    bool hasDescriptorType() const { return this->descriptorType_ != nullptr;};
    void deleteDescriptorType() { this->descriptorType_ = nullptr;};
    inline string getDescriptorType() const { DARABONBA_PTR_GET_DEFAULT(descriptorType_, "") };
    inline CreateRateLimitRuleInput& setDescriptorType(string descriptorType) { DARABONBA_PTR_SET_VALUE(descriptorType_, descriptorType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateRateLimitRuleInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // windows Field Functions 
    bool hasWindows() const { return this->windows_ != nullptr;};
    void deleteWindows() { this->windows_ = nullptr;};
    inline const vector<WindowLimit> & getWindows() const { DARABONBA_PTR_GET_CONST(windows_, vector<WindowLimit>) };
    inline vector<WindowLimit> getWindows() { DARABONBA_PTR_GET(windows_, vector<WindowLimit>) };
    inline CreateRateLimitRuleInput& setWindows(const vector<WindowLimit> & windows) { DARABONBA_PTR_SET_VALUE(windows_, windows) };
    inline CreateRateLimitRuleInput& setWindows(vector<WindowLimit> && windows) { DARABONBA_PTR_SET_RVALUE(windows_, windows) };


  protected:
    // The descriptor ID for the rate limit rule. This parameter is required if the descriptor type is not `model`. For `model` types, the server assembles the ID.
    shared_ptr<string> descriptorId_ {};
    // The descriptor type for the rate limit rule, such as `model` or `user`.
    // 
    // This parameter is required.
    shared_ptr<string> descriptorType_ {};
    // Whether to enable the rate limit rule.
    shared_ptr<bool> enabled_ {};
    // A list of time window configurations. At least one window is required.
    // 
    // This parameter is required.
    shared_ptr<vector<WindowLimit>> windows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
