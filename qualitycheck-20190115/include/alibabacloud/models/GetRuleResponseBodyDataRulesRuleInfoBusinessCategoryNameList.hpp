// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULESRULEINFOBUSINESSCATEGORYNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULESRULEINFOBUSINESSCATEGORYNAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
    };
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList() = default ;
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList(const GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList &) = default ;
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList(GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList &&) = default ;
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList() = default ;
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& operator=(const GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList &) = default ;
    GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& operator=(GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessCategoryNameList_ == nullptr; };
    // businessCategoryNameList Field Functions 
    bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
    void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
    inline const vector<string> & businessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
    inline vector<string> businessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
    inline GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
    inline GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


  protected:
    std::shared_ptr<vector<string>> businessCategoryNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
