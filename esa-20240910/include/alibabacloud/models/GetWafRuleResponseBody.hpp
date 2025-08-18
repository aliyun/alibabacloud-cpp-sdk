// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RulesetId, rulesetId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetWafRuleResponseBody() = default ;
    GetWafRuleResponseBody(const GetWafRuleResponseBody &) = default ;
    GetWafRuleResponseBody(GetWafRuleResponseBody &&) = default ;
    GetWafRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafRuleResponseBody() = default ;
    GetWafRuleResponseBody& operator=(const GetWafRuleResponseBody &) = default ;
    GetWafRuleResponseBody& operator=(GetWafRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->phase_ != nullptr && this->position_ != nullptr && this->requestId_ != nullptr
        && this->rulesetId_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const WafRuleConfig & config() const { DARABONBA_PTR_GET_CONST(config_, WafRuleConfig) };
    inline WafRuleConfig config() { DARABONBA_PTR_GET(config_, WafRuleConfig) };
    inline GetWafRuleResponseBody& setConfig(const WafRuleConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetWafRuleResponseBody& setConfig(WafRuleConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWafRuleResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWafRuleResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafRuleResponseBody& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline GetWafRuleResponseBody& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rulesetId Field Functions 
    bool hasRulesetId() const { return this->rulesetId_ != nullptr;};
    void deleteRulesetId() { this->rulesetId_ = nullptr;};
    inline int64_t rulesetId() const { DARABONBA_PTR_GET_DEFAULT(rulesetId_, 0L) };
    inline GetWafRuleResponseBody& setRulesetId(int64_t rulesetId) { DARABONBA_PTR_SET_VALUE(rulesetId_, rulesetId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWafRuleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetWafRuleResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Rule configuration.
    std::shared_ptr<WafRuleConfig> config_ = nullptr;
    // The ID of the WAF rule, which can be obtained by calling the [ListWafRules](https://help.aliyun.com/document_detail/2878257.html) interface.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Rule name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // WAF operation phase.
    // 
    // This parameter is required.
    std::shared_ptr<string> phase_ = nullptr;
    // The position of the rule in the rule set.
    std::shared_ptr<int64_t> position_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> rulesetId_ = nullptr;
    // Rule status.
    std::shared_ptr<string> status_ = nullptr;
    // The last modified time of the rule.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
