// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
    };
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList(ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList &&) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& operator=(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& operator=(ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleNameInfo_ != nullptr; };
    // ruleNameInfo Field Functions 
    bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
    void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
    inline const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo> & ruleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo>) };
    inline vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo> ruleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo>) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& setRuleNameInfo(const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleList& setRuleNameInfo(vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


  protected:
    std::shared_ptr<vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigRuleListRuleNameInfo>> ruleNameInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
