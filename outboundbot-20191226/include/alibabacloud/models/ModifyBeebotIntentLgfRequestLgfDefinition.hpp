// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFREQUESTLGFDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBEEBOTINTENTLGFREQUESTLGFDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyBeebotIntentLgfRequestLgfDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBeebotIntentLgfRequestLgfDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(RuleText, ruleText_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBeebotIntentLgfRequestLgfDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(RuleText, ruleText_);
    };
    ModifyBeebotIntentLgfRequestLgfDefinition() = default ;
    ModifyBeebotIntentLgfRequestLgfDefinition(const ModifyBeebotIntentLgfRequestLgfDefinition &) = default ;
    ModifyBeebotIntentLgfRequestLgfDefinition(ModifyBeebotIntentLgfRequestLgfDefinition &&) = default ;
    ModifyBeebotIntentLgfRequestLgfDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBeebotIntentLgfRequestLgfDefinition() = default ;
    ModifyBeebotIntentLgfRequestLgfDefinition& operator=(const ModifyBeebotIntentLgfRequestLgfDefinition &) = default ;
    ModifyBeebotIntentLgfRequestLgfDefinition& operator=(ModifyBeebotIntentLgfRequestLgfDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intentId_ == nullptr
        && return this->ruleText_ == nullptr; };
    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ModifyBeebotIntentLgfRequestLgfDefinition& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // ruleText Field Functions 
    bool hasRuleText() const { return this->ruleText_ != nullptr;};
    void deleteRuleText() { this->ruleText_ = nullptr;};
    inline string ruleText() const { DARABONBA_PTR_GET_DEFAULT(ruleText_, "") };
    inline ModifyBeebotIntentLgfRequestLgfDefinition& setRuleText(string ruleText) { DARABONBA_PTR_SET_VALUE(ruleText_, ruleText) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
