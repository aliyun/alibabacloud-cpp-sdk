// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLGROUPCONFIGRESPONSEBODYDATARULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLGROUPCONFIGRESPONSEBODYDATARULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSkillGroupConfigResponseBodyDataRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillGroupConfigResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillGroupConfigResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
    };
    GetSkillGroupConfigResponseBodyDataRuleList() = default ;
    GetSkillGroupConfigResponseBodyDataRuleList(const GetSkillGroupConfigResponseBodyDataRuleList &) = default ;
    GetSkillGroupConfigResponseBodyDataRuleList(GetSkillGroupConfigResponseBodyDataRuleList &&) = default ;
    GetSkillGroupConfigResponseBodyDataRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillGroupConfigResponseBodyDataRuleList() = default ;
    GetSkillGroupConfigResponseBodyDataRuleList& operator=(const GetSkillGroupConfigResponseBodyDataRuleList &) = default ;
    GetSkillGroupConfigResponseBodyDataRuleList& operator=(GetSkillGroupConfigResponseBodyDataRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleNameInfo_ == nullptr; };
    // ruleNameInfo Field Functions 
    bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
    void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
    inline const vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo> & ruleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo>) };
    inline vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo> ruleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo>) };
    inline GetSkillGroupConfigResponseBodyDataRuleList& setRuleNameInfo(const vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
    inline GetSkillGroupConfigResponseBodyDataRuleList& setRuleNameInfo(vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


  protected:
    std::shared_ptr<vector<Models::GetSkillGroupConfigResponseBodyDataRuleListRuleNameInfo>> ruleNameInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
