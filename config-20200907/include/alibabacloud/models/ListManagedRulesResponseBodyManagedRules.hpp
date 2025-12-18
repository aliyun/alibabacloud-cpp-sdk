// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODYMANAGEDRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListManagedRulesResponseBodyManagedRulesManagedRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesResponseBodyManagedRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesResponseBodyManagedRules& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRuleList, managedRuleList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesResponseBodyManagedRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRuleList, managedRuleList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListManagedRulesResponseBodyManagedRules() = default ;
    ListManagedRulesResponseBodyManagedRules(const ListManagedRulesResponseBodyManagedRules &) = default ;
    ListManagedRulesResponseBodyManagedRules(ListManagedRulesResponseBodyManagedRules &&) = default ;
    ListManagedRulesResponseBodyManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesResponseBodyManagedRules() = default ;
    ListManagedRulesResponseBodyManagedRules& operator=(const ListManagedRulesResponseBodyManagedRules &) = default ;
    ListManagedRulesResponseBodyManagedRules& operator=(ListManagedRulesResponseBodyManagedRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managedRuleList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // managedRuleList Field Functions 
    bool hasManagedRuleList() const { return this->managedRuleList_ != nullptr;};
    void deleteManagedRuleList() { this->managedRuleList_ = nullptr;};
    inline const vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList> & managedRuleList() const { DARABONBA_PTR_GET_CONST(managedRuleList_, vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList>) };
    inline vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList> managedRuleList() { DARABONBA_PTR_GET(managedRuleList_, vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList>) };
    inline ListManagedRulesResponseBodyManagedRules& setManagedRuleList(const vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList> & managedRuleList) { DARABONBA_PTR_SET_VALUE(managedRuleList_, managedRuleList) };
    inline ListManagedRulesResponseBodyManagedRules& setManagedRuleList(vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList> && managedRuleList) { DARABONBA_PTR_SET_RVALUE(managedRuleList_, managedRuleList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListManagedRulesResponseBodyManagedRules& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListManagedRulesResponseBodyManagedRules& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListManagedRulesResponseBodyManagedRules& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the managed rule.
    std::shared_ptr<vector<Models::ListManagedRulesResponseBodyManagedRulesManagedRuleList>> managedRuleList_ = nullptr;
    // The page number.
    // 
    // Page start from page 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page. Valid values: 1 to 500.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
