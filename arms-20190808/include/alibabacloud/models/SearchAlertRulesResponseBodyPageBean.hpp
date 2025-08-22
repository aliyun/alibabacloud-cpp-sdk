// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchAlertRulesResponseBodyPageBean() = default ;
    SearchAlertRulesResponseBodyPageBean(const SearchAlertRulesResponseBodyPageBean &) = default ;
    SearchAlertRulesResponseBodyPageBean(SearchAlertRulesResponseBodyPageBean &&) = default ;
    SearchAlertRulesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBean() = default ;
    SearchAlertRulesResponseBodyPageBean& operator=(const SearchAlertRulesResponseBodyPageBean &) = default ;
    SearchAlertRulesResponseBodyPageBean& operator=(SearchAlertRulesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRules_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // alertRules Field Functions 
    bool hasAlertRules() const { return this->alertRules_ != nullptr;};
    void deleteAlertRules() { this->alertRules_ = nullptr;};
    inline const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules> & alertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules>) };
    inline vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules> alertRules() { DARABONBA_PTR_GET(alertRules_, vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules>) };
    inline SearchAlertRulesResponseBodyPageBean& setAlertRules(const vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
    inline SearchAlertRulesResponseBodyPageBean& setAlertRules(vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAlertRulesResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAlertRulesResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchAlertRulesResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the alert rules.
    std::shared_ptr<vector<Models::SearchAlertRulesResponseBodyPageBeanAlertRules>> alertRules_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
