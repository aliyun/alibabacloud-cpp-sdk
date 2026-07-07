// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFRULESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFRULESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafRulesetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetWafRulesetResponseBody() = default ;
    GetWafRulesetResponseBody(const GetWafRulesetResponseBody &) = default ;
    GetWafRulesetResponseBody(GetWafRulesetResponseBody &&) = default ;
    GetWafRulesetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafRulesetResponseBody() = default ;
    GetWafRulesetResponseBody& operator=(const GetWafRulesetResponseBody &) = default ;
    GetWafRulesetResponseBody& operator=(GetWafRulesetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->phase_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->shared_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWafRulesetResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWafRulesetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafRulesetResponseBody& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafRulesetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<WafRuleConfig> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<WafRuleConfig>) };
    inline vector<WafRuleConfig> getRules() { DARABONBA_PTR_GET(rules_, vector<WafRuleConfig>) };
    inline GetWafRulesetResponseBody& setRules(const vector<WafRuleConfig> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetWafRulesetResponseBody& setRules(vector<WafRuleConfig> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const WafBatchRuleShared & getShared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
    inline WafBatchRuleShared getShared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
    inline GetWafRulesetResponseBody& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline GetWafRulesetResponseBody& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWafRulesetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetWafRulesetResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the WAF ruleset. You can call the [ListWafRulesets](https://help.aliyun.com/document_detail/2878359.html) operation to obtain the ID.
    shared_ptr<int64_t> id_ {};
    // The ruleset name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The WAF rule execution phase. Valid values:
    // - http_whitelist: whitelist rules
    // - http_custom: custom rules
    // - http_managed: managed rules
    // - http_anti_scan: scan protection rules
    // - http_ratelimit: rate limiting rules
    // - ip_access_rule: IP access rules
    // - http_bot: advanced mode bots
    // - http_security_level_rule: security rules
    // 
    // This parameter is required.
    shared_ptr<string> phase_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of rule configurations in the ruleset.
    shared_ptr<vector<WafRuleConfig>> rules_ {};
    // The shared configuration of rules in the ruleset.
    shared_ptr<WafBatchRuleShared> shared_ {};
    // The ruleset status.
    shared_ptr<string> status_ {};
    // The last modification time of the ruleset.
    // 
    // Format: RFC 3339 / ISO 8601, UTC time zone (ending with Z).
    // 
    // Example: 2026-06-10T14:23:45Z
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
