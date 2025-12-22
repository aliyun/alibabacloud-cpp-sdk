// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKRULEACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETHTTPDDOSATTACKRULEACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetHttpDDoSAttackRuleActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetHttpDDoSAttackRuleActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, SetHttpDDoSAttackRuleActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    SetHttpDDoSAttackRuleActionRequest() = default ;
    SetHttpDDoSAttackRuleActionRequest(const SetHttpDDoSAttackRuleActionRequest &) = default ;
    SetHttpDDoSAttackRuleActionRequest(SetHttpDDoSAttackRuleActionRequest &&) = default ;
    SetHttpDDoSAttackRuleActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetHttpDDoSAttackRuleActionRequest() = default ;
    SetHttpDDoSAttackRuleActionRequest& operator=(const SetHttpDDoSAttackRuleActionRequest &) = default ;
    SetHttpDDoSAttackRuleActionRequest& operator=(SetHttpDDoSAttackRuleActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleAction_ == nullptr
        && return this->ruleIds_ == nullptr && return this->siteId_ == nullptr; };
    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline SetHttpDDoSAttackRuleActionRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string ruleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline SetHttpDDoSAttackRuleActionRequest& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline SetHttpDDoSAttackRuleActionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ruleAction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
