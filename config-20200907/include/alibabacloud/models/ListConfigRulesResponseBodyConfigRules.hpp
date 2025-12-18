// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODYCONFIGRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESRESPONSEBODYCONFIGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConfigRulesResponseBodyConfigRulesConfigRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRulesResponseBodyConfigRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesResponseBodyConfigRules& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleList, configRuleList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesResponseBodyConfigRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleList, configRuleList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListConfigRulesResponseBodyConfigRules() = default ;
    ListConfigRulesResponseBodyConfigRules(const ListConfigRulesResponseBodyConfigRules &) = default ;
    ListConfigRulesResponseBodyConfigRules(ListConfigRulesResponseBodyConfigRules &&) = default ;
    ListConfigRulesResponseBodyConfigRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesResponseBodyConfigRules() = default ;
    ListConfigRulesResponseBodyConfigRules& operator=(const ListConfigRulesResponseBodyConfigRules &) = default ;
    ListConfigRulesResponseBodyConfigRules& operator=(ListConfigRulesResponseBodyConfigRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // configRuleList Field Functions 
    bool hasConfigRuleList() const { return this->configRuleList_ != nullptr;};
    void deleteConfigRuleList() { this->configRuleList_ = nullptr;};
    inline const vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList> & configRuleList() const { DARABONBA_PTR_GET_CONST(configRuleList_, vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList>) };
    inline vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList> configRuleList() { DARABONBA_PTR_GET(configRuleList_, vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList>) };
    inline ListConfigRulesResponseBodyConfigRules& setConfigRuleList(const vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList> & configRuleList) { DARABONBA_PTR_SET_VALUE(configRuleList_, configRuleList) };
    inline ListConfigRulesResponseBodyConfigRules& setConfigRuleList(vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList> && configRuleList) { DARABONBA_PTR_SET_RVALUE(configRuleList_, configRuleList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConfigRulesResponseBodyConfigRules& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConfigRulesResponseBodyConfigRules& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListConfigRulesResponseBodyConfigRules& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the rule.
    std::shared_ptr<vector<Models::ListConfigRulesResponseBodyConfigRulesConfigRuleList>> configRuleList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
