// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLGROUPCONFIGRESPONSEBODYDATAALLRULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLGROUPCONFIGRESPONSEBODYDATAALLRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSkillGroupConfigResponseBodyDataAllRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillGroupConfigResponseBodyDataAllRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillGroupConfigResponseBodyDataAllRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
    };
    GetSkillGroupConfigResponseBodyDataAllRuleList() = default ;
    GetSkillGroupConfigResponseBodyDataAllRuleList(const GetSkillGroupConfigResponseBodyDataAllRuleList &) = default ;
    GetSkillGroupConfigResponseBodyDataAllRuleList(GetSkillGroupConfigResponseBodyDataAllRuleList &&) = default ;
    GetSkillGroupConfigResponseBodyDataAllRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillGroupConfigResponseBodyDataAllRuleList() = default ;
    GetSkillGroupConfigResponseBodyDataAllRuleList& operator=(const GetSkillGroupConfigResponseBodyDataAllRuleList &) = default ;
    GetSkillGroupConfigResponseBodyDataAllRuleList& operator=(GetSkillGroupConfigResponseBodyDataAllRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleNameInfo_ == nullptr; };
    // ruleNameInfo Field Functions 
    bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
    void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
    inline const vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo> & ruleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo>) };
    inline vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo> ruleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo>) };
    inline GetSkillGroupConfigResponseBodyDataAllRuleList& setRuleNameInfo(const vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
    inline GetSkillGroupConfigResponseBodyDataAllRuleList& setRuleNameInfo(vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


  protected:
    std::shared_ptr<vector<Models::GetSkillGroupConfigResponseBodyDataAllRuleListRuleNameInfo>> ruleNameInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
