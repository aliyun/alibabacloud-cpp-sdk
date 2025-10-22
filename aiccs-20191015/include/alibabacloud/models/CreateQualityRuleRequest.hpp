// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
    };
    CreateQualityRuleRequest() = default ;
    CreateQualityRuleRequest(const CreateQualityRuleRequest &) = default ;
    CreateQualityRuleRequest(CreateQualityRuleRequest &&) = default ;
    CreateQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityRuleRequest() = default ;
    CreateQualityRuleRequest& operator=(const CreateQualityRuleRequest &) = default ;
    CreateQualityRuleRequest& operator=(CreateQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->keyWords_ == nullptr && return this->matchType_ == nullptr && return this->name_ == nullptr && return this->ruleTag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateQualityRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<string> & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
    inline vector<string> keyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
    inline CreateQualityRuleRequest& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline CreateQualityRuleRequest& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline CreateQualityRuleRequest& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline int32_t ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, 0) };
    inline CreateQualityRuleRequest& setRuleTag(int32_t ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> keyWords_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> matchType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> ruleTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
