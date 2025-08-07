// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGALLRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLGROUPCONFIGRESPONSEBODYDATASKILLGROUPCONFIGALLRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleNameInfo, ruleNameInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleNameInfo, ruleNameInfo_);
    };
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList(ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList &&) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList() = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& operator=(const ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList &) = default ;
    ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& operator=(ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleNameInfo_ != nullptr; };
    // ruleNameInfo Field Functions 
    bool hasRuleNameInfo() const { return this->ruleNameInfo_ != nullptr;};
    void deleteRuleNameInfo() { this->ruleNameInfo_ = nullptr;};
    inline const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo> & ruleNameInfo() const { DARABONBA_PTR_GET_CONST(ruleNameInfo_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo>) };
    inline vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo> ruleNameInfo() { DARABONBA_PTR_GET(ruleNameInfo_, vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo>) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& setRuleNameInfo(const vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo> & ruleNameInfo) { DARABONBA_PTR_SET_VALUE(ruleNameInfo_, ruleNameInfo) };
    inline ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleList& setRuleNameInfo(vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo> && ruleNameInfo) { DARABONBA_PTR_SET_RVALUE(ruleNameInfo_, ruleNameInfo) };


  protected:
    std::shared_ptr<vector<Models::ListSkillGroupConfigResponseBodyDataSkillGroupConfigAllRuleListRuleNameInfo>> ruleNameInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
