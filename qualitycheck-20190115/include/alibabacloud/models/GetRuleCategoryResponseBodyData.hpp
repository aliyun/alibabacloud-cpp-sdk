// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleCategoryResponseBodyDataRuleCountInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RuleCountInfo, ruleCountInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleCountInfo, ruleCountInfo_);
    };
    GetRuleCategoryResponseBodyData() = default ;
    GetRuleCategoryResponseBodyData(const GetRuleCategoryResponseBodyData &) = default ;
    GetRuleCategoryResponseBodyData(GetRuleCategoryResponseBodyData &&) = default ;
    GetRuleCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleCategoryResponseBodyData() = default ;
    GetRuleCategoryResponseBodyData& operator=(const GetRuleCategoryResponseBodyData &) = default ;
    GetRuleCategoryResponseBodyData& operator=(GetRuleCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleCountInfo_ == nullptr; };
    // ruleCountInfo Field Functions 
    bool hasRuleCountInfo() const { return this->ruleCountInfo_ != nullptr;};
    void deleteRuleCountInfo() { this->ruleCountInfo_ = nullptr;};
    inline const vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo> & ruleCountInfo() const { DARABONBA_PTR_GET_CONST(ruleCountInfo_, vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo>) };
    inline vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo> ruleCountInfo() { DARABONBA_PTR_GET(ruleCountInfo_, vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo>) };
    inline GetRuleCategoryResponseBodyData& setRuleCountInfo(const vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo> & ruleCountInfo) { DARABONBA_PTR_SET_VALUE(ruleCountInfo_, ruleCountInfo) };
    inline GetRuleCategoryResponseBodyData& setRuleCountInfo(vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo> && ruleCountInfo) { DARABONBA_PTR_SET_RVALUE(ruleCountInfo_, ruleCountInfo) };


  protected:
    std::shared_ptr<vector<Models::GetRuleCategoryResponseBodyDataRuleCountInfo>> ruleCountInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
