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
        && return this->name_ == nullptr && return this->phase_ == nullptr && return this->requestId_ == nullptr && return this->rules_ == nullptr && return this->shared_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWafRulesetResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWafRulesetResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafRulesetResponseBody& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafRulesetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<WafRuleConfig> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<WafRuleConfig>) };
    inline vector<WafRuleConfig> rules() { DARABONBA_PTR_GET(rules_, vector<WafRuleConfig>) };
    inline GetWafRulesetResponseBody& setRules(const vector<WafRuleConfig> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetWafRulesetResponseBody& setRules(vector<WafRuleConfig> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const WafBatchRuleShared & shared() const { DARABONBA_PTR_GET_CONST(shared_, WafBatchRuleShared) };
    inline WafBatchRuleShared shared() { DARABONBA_PTR_GET(shared_, WafBatchRuleShared) };
    inline GetWafRulesetResponseBody& setShared(const WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline GetWafRulesetResponseBody& setShared(WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWafRulesetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetWafRulesetResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Ruleset ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Ruleset name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The WAF operation phase applicable to the ruleset.
    // 
    // This parameter is required.
    std::shared_ptr<string> phase_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of rule configurations in the ruleset.
    std::shared_ptr<vector<WafRuleConfig>> rules_ = nullptr;
    // Shared configurations for the rules in the ruleset.
    std::shared_ptr<WafBatchRuleShared> shared_ = nullptr;
    // Ruleset status.
    std::shared_ptr<string> status_ = nullptr;
    // The last modified time of the ruleset.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
