// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFOBUSINESSCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFOBUSINESSCATEGORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
    };
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories(const GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories(GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories &&) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& operator=(const GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& operator=(GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessCategoryBasicInfo_ == nullptr; };
    // businessCategoryBasicInfo Field Functions 
    bool hasBusinessCategoryBasicInfo() const { return this->businessCategoryBasicInfo_ != nullptr;};
    void deleteBusinessCategoryBasicInfo() { this->businessCategoryBasicInfo_ = nullptr;};
    inline const vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo> & businessCategoryBasicInfo() const { DARABONBA_PTR_GET_CONST(businessCategoryBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo>) };
    inline vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo> businessCategoryBasicInfo() { DARABONBA_PTR_GET(businessCategoryBasicInfo_, vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo>) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& setBusinessCategoryBasicInfo(const vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo> & businessCategoryBasicInfo) { DARABONBA_PTR_SET_VALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategories& setBusinessCategoryBasicInfo(vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo> && businessCategoryBasicInfo) { DARABONBA_PTR_SET_RVALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::GetRuleDetailResponseBodyDataRulesRuleBasicInfoBusinessCategoriesBusinessCategoryBasicInfo>> businessCategoryBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
