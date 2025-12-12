// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEV4REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEV4REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UpdateRuleV4Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleV4Request& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(JsonStrForRule, jsonStrForRule_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleV4Request& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(JsonStrForRule, jsonStrForRule_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    UpdateRuleV4Request() = default ;
    UpdateRuleV4Request(const UpdateRuleV4Request &) = default ;
    UpdateRuleV4Request(UpdateRuleV4Request &&) = default ;
    UpdateRuleV4Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleV4Request() = default ;
    UpdateRuleV4Request& operator=(const UpdateRuleV4Request &) = default ;
    UpdateRuleV4Request& operator=(UpdateRuleV4Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && return this->jsonStrForRule_ == nullptr && return this->ruleId_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline UpdateRuleV4Request& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // jsonStrForRule Field Functions 
    bool hasJsonStrForRule() const { return this->jsonStrForRule_ != nullptr;};
    void deleteJsonStrForRule() { this->jsonStrForRule_ = nullptr;};
    inline string jsonStrForRule() const { DARABONBA_PTR_GET_DEFAULT(jsonStrForRule_, "") };
    inline UpdateRuleV4Request& setJsonStrForRule(string jsonStrForRule) { DARABONBA_PTR_SET_VALUE(jsonStrForRule_, jsonStrForRule) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline UpdateRuleV4Request& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jsonStrForRule_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
