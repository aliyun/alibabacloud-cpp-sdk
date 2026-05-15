// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RATELIMITRULE_HPP_
#define ALIBABACLOUD_MODELS_RATELIMITRULE_HPP_
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
  class RateLimitRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RateLimitRule& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(descriptorId, descriptorId_);
      DARABONBA_PTR_TO_JSON(descriptorType, descriptorType_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(rateLimitRuleId, rateLimitRuleId_);
      DARABONBA_PTR_TO_JSON(windows, windows_);
    };
    friend void from_json(const Darabonba::Json& j, RateLimitRule& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(descriptorId, descriptorId_);
      DARABONBA_PTR_FROM_JSON(descriptorType, descriptorType_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(rateLimitRuleId, rateLimitRuleId_);
      DARABONBA_PTR_FROM_JSON(windows, windows_);
    };
    RateLimitRule() = default ;
    RateLimitRule(const RateLimitRule &) = default ;
    RateLimitRule(RateLimitRule &&) = default ;
    RateLimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RateLimitRule() = default ;
    RateLimitRule& operator=(const RateLimitRule &) = default ;
    RateLimitRule& operator=(RateLimitRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->descriptorId_ == nullptr && this->descriptorType_ == nullptr && this->enabled_ == nullptr && this->lastUpdatedAt_ == nullptr && this->rateLimitRuleId_ == nullptr
        && this->windows_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline RateLimitRule& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // descriptorId Field Functions 
    bool hasDescriptorId() const { return this->descriptorId_ != nullptr;};
    void deleteDescriptorId() { this->descriptorId_ = nullptr;};
    inline string getDescriptorId() const { DARABONBA_PTR_GET_DEFAULT(descriptorId_, "") };
    inline RateLimitRule& setDescriptorId(string descriptorId) { DARABONBA_PTR_SET_VALUE(descriptorId_, descriptorId) };


    // descriptorType Field Functions 
    bool hasDescriptorType() const { return this->descriptorType_ != nullptr;};
    void deleteDescriptorType() { this->descriptorType_ = nullptr;};
    inline string getDescriptorType() const { DARABONBA_PTR_GET_DEFAULT(descriptorType_, "") };
    inline RateLimitRule& setDescriptorType(string descriptorType) { DARABONBA_PTR_SET_VALUE(descriptorType_, descriptorType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline RateLimitRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline RateLimitRule& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // rateLimitRuleId Field Functions 
    bool hasRateLimitRuleId() const { return this->rateLimitRuleId_ != nullptr;};
    void deleteRateLimitRuleId() { this->rateLimitRuleId_ = nullptr;};
    inline string getRateLimitRuleId() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRuleId_, "") };
    inline RateLimitRule& setRateLimitRuleId(string rateLimitRuleId) { DARABONBA_PTR_SET_VALUE(rateLimitRuleId_, rateLimitRuleId) };


    // windows Field Functions 
    bool hasWindows() const { return this->windows_ != nullptr;};
    void deleteWindows() { this->windows_ = nullptr;};
    inline const vector<WindowLimit> & getWindows() const { DARABONBA_PTR_GET_CONST(windows_, vector<WindowLimit>) };
    inline vector<WindowLimit> getWindows() { DARABONBA_PTR_GET(windows_, vector<WindowLimit>) };
    inline RateLimitRule& setWindows(const vector<WindowLimit> & windows) { DARABONBA_PTR_SET_VALUE(windows_, windows) };
    inline RateLimitRule& setWindows(vector<WindowLimit> && windows) { DARABONBA_PTR_SET_RVALUE(windows_, windows) };


  protected:
    // 限流规则的创建时间，采用ISO 8601格式
    shared_ptr<string> createdAt_ {};
    // 限流规则的描述符标识，用于关联具体的限流对象
    shared_ptr<string> descriptorId_ {};
    // 限流规则的描述符类型，如model、user等
    shared_ptr<string> descriptorType_ {};
    // 限流规则是否启用，true表示启用，false表示禁用
    shared_ptr<bool> enabled_ {};
    // 限流规则最后一次更新的时间，采用ISO 8601格式
    shared_ptr<string> lastUpdatedAt_ {};
    // 限流规则的唯一标识符
    shared_ptr<string> rateLimitRuleId_ {};
    // 限流时间窗口配置列表，支持多个窗口叠加限流
    shared_ptr<vector<WindowLimit>> windows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
