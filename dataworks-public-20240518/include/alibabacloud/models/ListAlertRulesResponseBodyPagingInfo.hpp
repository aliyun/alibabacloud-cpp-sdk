// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertRulesResponseBodyPagingInfo() = default ;
    ListAlertRulesResponseBodyPagingInfo(const ListAlertRulesResponseBodyPagingInfo &) = default ;
    ListAlertRulesResponseBodyPagingInfo(ListAlertRulesResponseBodyPagingInfo &&) = default ;
    ListAlertRulesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfo() = default ;
    ListAlertRulesResponseBodyPagingInfo& operator=(const ListAlertRulesResponseBodyPagingInfo &) = default ;
    ListAlertRulesResponseBodyPagingInfo& operator=(ListAlertRulesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRules_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // alertRules Field Functions 
    bool hasAlertRules() const { return this->alertRules_ != nullptr;};
    void deleteAlertRules() { this->alertRules_ = nullptr;};
    inline const vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules> & alertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules>) };
    inline vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules> alertRules() { DARABONBA_PTR_GET(alertRules_, vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules>) };
    inline ListAlertRulesResponseBodyPagingInfo& setAlertRules(const vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
    inline ListAlertRulesResponseBodyPagingInfo& setAlertRules(vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertRulesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertRulesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertRulesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The rules.
    std::shared_ptr<vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRules>> alertRules_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
