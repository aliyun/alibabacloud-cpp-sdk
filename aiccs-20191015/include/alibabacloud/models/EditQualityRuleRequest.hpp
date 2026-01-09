// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITQUALITYRULEREQUEST_HPP_
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
  class EditQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QualityRuleId, qualityRuleId_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
    };
    friend void from_json(const Darabonba::Json& j, EditQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QualityRuleId, qualityRuleId_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
    };
    EditQualityRuleRequest() = default ;
    EditQualityRuleRequest(const EditQualityRuleRequest &) = default ;
    EditQualityRuleRequest(EditQualityRuleRequest &&) = default ;
    EditQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditQualityRuleRequest() = default ;
    EditQualityRuleRequest& operator=(const EditQualityRuleRequest &) = default ;
    EditQualityRuleRequest& operator=(EditQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyWords_ == nullptr && this->matchType_ == nullptr && this->name_ == nullptr && this->qualityRuleId_ == nullptr && this->ruleTag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EditQualityRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
    inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
    inline EditQualityRuleRequest& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline EditQualityRuleRequest& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline EditQualityRuleRequest& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EditQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualityRuleId Field Functions 
    bool hasQualityRuleId() const { return this->qualityRuleId_ != nullptr;};
    void deleteQualityRuleId() { this->qualityRuleId_ = nullptr;};
    inline int64_t getQualityRuleId() const { DARABONBA_PTR_GET_DEFAULT(qualityRuleId_, 0L) };
    inline EditQualityRuleRequest& setQualityRuleId(int64_t qualityRuleId) { DARABONBA_PTR_SET_VALUE(qualityRuleId_, qualityRuleId) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline int32_t getRuleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, 0) };
    inline EditQualityRuleRequest& setRuleTag(int32_t ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> keyWords_ {};
    // This parameter is required.
    shared_ptr<int32_t> matchType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> qualityRuleId_ {};
    // This parameter is required.
    shared_ptr<int32_t> ruleTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
